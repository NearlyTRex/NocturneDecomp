# BADSPACEBASE Investigation

This directory documents the investigation into Ghidra's BADSPACEBASE decompilation errors affecting the Nocturne decompilation project.

## Environment

| Component | Version/Details |
|-----------|-----------------|
| **Ghidra** | 12.1 (built from source) |
| **Target Binary** | nocedit.exe |
| **Compiler** | Watcom C/C++ 11 (estimated) |
| **Architecture** | x86 32-bit, little-endian |

### Compiler Version Notes

The binary is believed to be compiled with **Watcom C/C++ 11** (released ~1996-1997), based on:
- Code patterns and calling conventions
- Time period of Nocturne's development (1999)
- Watcom 11 was the common choice for game development in that era

## Problem Scale

- **Total functions**: 7,154
- **Functions with BADSPACEBASE**: 1,621 (22.7%)
- **Root cause**: ESP-relative stack access without frame pointer; Ghidra loses ESP tracking at indirect calls

## Documentation Index

| File | Description |
|------|-------------|
| [01_PROBLEM_DESCRIPTION.md](01_PROBLEM_DESCRIPTION.md) | What BADSPACEBASE looks like, symptoms, and scale |
| [02_ROOT_CAUSE.md](02_ROOT_CAUSE.md) | Why Ghidra fails with Watcom's ESP-relative code |
| [03_CUSTOM_CSPEC.md](03_CUSTOM_CSPEC.md) | Our custom x86watcom.cspec calling conventions |
| [04_SLEIGH_CUSTOMIZATION.md](04_SLEIGH_CUSTOMIZATION.md) | SLEIGH ia.sinc patch attempt for stack alignment |
| [05_DECOMPILER_CPP_CHANGES.md](05_DECOMPILER_CPP_CHANGES.md) | Potential Ghidra decompiler C++ modifications |
| [06_ATTEMPTED_SOLUTIONS.md](06_ATTEMPTED_SOLUTIONS.md) | All solutions tried and why they failed |
| [07_REMAINING_OPTIONS.md](07_REMAINING_OPTIONS.md) | What options remain for fixing this |

## Quick Reference

### Custom Ghidra Files Location

```
spec/Ghidra/Processors/x86/data/languages/
├── x86watcom.cspec      # Custom calling conventions
├── x86watcom.ldefs      # Language definition
├── ia.sinc              # Full SLEIGH file (from Ghidra source)
└── ia.sinc.patch        # Our custom SLEIGH patch

spec/Ghidra/Processors/x86/data/patterns/
├── patternconstraints.xml      # Maps compiler to pattern file
└── x86watcomcpp_patterns.xml   # Watcom function patterns (empty)
```

### Building Ghidra from Source

Since we use Ghidra 12.1 built from source, any SLEIGH or decompiler changes require:

1. Apply patches to Ghidra source
2. Rebuild with Gradle: `gradle buildGhidra`
3. Re-import the binary or clear analysis

## Status Summary

| Approach | Status | Verdict |
|----------|--------|---------|
| Custom cspec | Implemented | Helps direct calls, not indirect |
| SLEIGH patch | Implemented | Minimal impact on BADSPACEBASE |
| JSON replacements | Partial | Cosmetic only |
| Callfixup | Not viable | Wrong part of problem |
| Decompiler C++ | Not attempted | Most promising but complex |
| Binary patching | Not attempted | Would work but very complex |

## Changelog

- 2025-12-18: Restructured into multiple files, added Ghidra version info
