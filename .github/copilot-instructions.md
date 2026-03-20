# Project Guidelines

## Code Style
- Language: C with 4-space indentation
- Naming: Snake_case with Indonesian terms (e.g., `tes_tulis` for written test, `jml_` prefix for counts)
- Comments: Numbered sections (// 1. Deklarasi, // 2. Proses Data, etc.)
- Reference examples: [DSA2/DSA2.c](DSA2/DSA2.c) for data processing style, [DSA4/DSA4.c](DSA4/DSA4.c) for algorithm implementation

## Architecture
- Independent C programs for DSA problems
- Each program has corresponding pseudocode in .txt files
- Components: Input processing, data validation, computation, formatted output
- Memory: Static arrays for fixed datasets (DSA2), dynamic allocation for variable input (DSA4)

## Build and Test
- Build: Use VS Code task "C/C++: gcc.exe build active file" for compilation with debug symbols
- Compiler: MSYS2 ucrt64 GCC (C:\msys64\ucrt64\bin\gcc.exe)
- No external dependencies required
- Test by running the generated .exe files manually

## Conventions
- Use `==` for comparisons, not `=` (common bug in refre.c)
- Validate input ranges (scores 0-100, names within buffer limits)
- Output precision: 2 decimal places for statistics
- File I/O: Use environment variables like OUTPUT_PATH for output files
- Avoid fixed buffers; prefer dynamic allocation for scalability</content>
<parameter name="filePath">d:\Tumgas\.github\copilot-instructions.md