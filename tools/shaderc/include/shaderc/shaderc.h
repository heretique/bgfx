/*
 * Copyright 2011-2019 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#ifndef SHADERC_H_HEADER_GUARD
#define SHADERC_H_HEADER_GUARD

#include <bx/readerwriter.h>
#include <string>
#include <vector>

namespace bgfx
{

	struct ShaderCompileOptions
	{
		ShaderCompileOptions();

		void dump();

		char shaderType;
		std::string platform;
		std::string profile;

		std::string	inputFilePath;
		std::string	outputFilePath;

		std::vector<std::string> includeDirs;
		std::vector<std::string> defines;
		std::vector<std::string> dependencies;

		bool disasm;
		bool raw;
		bool preprocessOnly;
		bool depends;

		bool debugInformation;

		bool avoidFlowControl;
		bool noPreshader;
		bool partialPrecision;
		bool preferFlowControl;
		bool backwardsCompatibility;
		bool warningsAreErrors;
		bool keepIntermediate;

		bool optimize;
		uint32_t optimizationLevel;
	};

    bool compileShader(const char* _varying, const char* _comment, char* _shader, uint32_t _shaderLen, ShaderCompileOptions& _options, bx::WriterI* _writer);

} // namespace bgfx

#endif // SHADERC_H_HEADER_GUARD
