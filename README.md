# NocturneDecomp

A work-in-progress reverse engineering and decompilation project for the game **Nocturne**, aimed at understanding its game engine architecture and implementation.

## About

This project uses [Ghidra](https://ghidra-sre.org/) to decompile and analyze the Nocturne game binary. The goal is to document and understand the inner workings of the Nocturne game engine through systematic reverse engineering efforts.

**Status:** Active Research - This is an ongoing research project with continuous updates as new discoveries are made.

## Project Structure

### `/annotations`
Exported Ghidra annotations for `nocedit.exe` (Nocturne's level editor) in JSON format. Includes data types, symbol namespaces, external imports, and applied structure definitions from the current analysis.

### `/headers`
Watcom C/C++ 11.0 compiler standard library headers. These headers are used to properly identify and type standard library functions and structures that the game was compiled against.

### `/historical_annotations`
Archived snapshots of previous annotation exports. Preserves earlier analysis states for comparison and tracking the evolution of reverse engineering progress.

### `/prompts`
AI/LLM prompt templates for assisted reverse engineering. Includes prompts for disassembly analysis, code generation, and maintaining coding standards during the decompilation process.

### `/research`
Research notes, findings, and documentation about the Nocturne engine. Contains insights, theories, and documented discoveries about how various systems work.

### `/scripts`
Jython/Python automation scripts for Ghidra:
- Annotation import/export and synchronization
- Hidden function discovery
- String creation utilities
- Custom helper libraries for annotation management

### `/spec`
Custom Ghidra processor specifications for the x86 Watcom compiler. Includes language definitions (.ldefs), calling convention specifications (.cspec), and pattern matching for Watcom C++ compiled code.

## Contributing

This is a research project. If you're interested in contributing or have insights about the Nocturne engine, contributions and documentation improvements are welcome.

## Legal Notice

This project is for educational and research purposes only. All reverse engineering is conducted in accordance with applicable laws. This repository contains only reverse-engineered documentation, annotations, and analysis derived from the decompilation process. No original game binaries, assets, or copyrighted materials from the game are included in this repository.

## Tools Used

- **Ghidra** - Primary decompilation and reverse engineering tool
- Additional analysis tools as needed for specific research tasks
