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
| [08_RUNTIME_PATCHING_APPROACHES.md](08_RUNTIME_PATCHING_APPROACHES.md) | Byte patching, P-code injection, and transformation approaches |
| [09_MINIMAL_PCODE_PATCHING.md](09_MINIMAL_PCODE_PATCHING.md) | **IMPLEMENTED** - P-code patching via file injection |
| [10_PCODE_OVERRIDE_PROGRESS.md](10_PCODE_OVERRIDE_PROGRESS.md) | P-code override testing progress and findings |
| [11_SUSPECT_TYPES_TAXONOMY.md](11_SUSPECT_TYPES_TAXONOMY.md) | Taxonomy of decompilation suspect patterns |
| [12_PCODE_OVERRIDE_AUTOMATION.md](12_PCODE_OVERRIDE_AUTOMATION.md) | Automation approaches for p-code overrides |
| [13_ESP_TRACKING_INVESTIGATION.md](13_ESP_TRACKING_INVESTIGATION.md) | ESP tracking and cfg_resolved analysis |
| [14_GHIDRA_SPACEBASE_ARCHITECTURE_ANALYSIS.md](14_GHIDRA_SPACEBASE_ARCHITECTURE_ANALYSIS.md) | **KEY FINDING** - Why p-code overrides can't fix spacebase resolution |
| [15_PROPOSED_GHIDRA_PATCH.md](15_PROPOSED_GHIDRA_PATCH.md) | Proposed Ghidra source patch for EBP-frame recognition |
| [16_EBP_PATCH_IMPLEMENTATION_FINDINGS.md](16_EBP_PATCH_IMPLEMENTATION_FINDINGS.md) | RuleLoadVarnode patch attempt - **FAILED** (runs too late in pipeline) |
| [17_GHIDRA_STACK_ANALYSIS_DEEP_DIVE.md](17_GHIDRA_STACK_ANALYSIS_DEEP_DIVE.md) | **KEY** - Complete pipeline analysis, identifies correct fix location |
| [18_RESOLVESPACEBASERELATIVE_PATCH.md](18_RESOLVESPACEBASERELATIVE_PATCH.md) | **PROPOSED** - EBP-frame tracing design (not committed) |
| [19_RULELOADVARNODE_PATCH_FAILURE_ANALYSIS.md](19_RULELOADVARNODE_PATCH_FAILURE_ANALYSIS.md) | Why RuleLoadVarnode approach failed |
| [20_GHIDRA_FIX_OPTIONS.md](20_GHIDRA_FIX_OPTIONS.md) | Summary of fix options |
| [21_EBP_AS_OBJECT_POINTER.md](21_EBP_AS_OBJECT_POINTER.md) | EBP usage analysis |
| [22_LATE_STAGE_TRACING_LIMITATIONS.md](22_LATE_STAGE_TRACING_LIMITATIONS.md) | Why late-stage fixes don't work |
| [23_HERITAGE_MULTIEQUAL_FIX_RESULTS.md](23_HERITAGE_MULTIEQUAL_FIX_RESULTS.md) | MULTIEQUAL stack tracing fix |
| [24_STACK_PROBE_CALLFIXUP_FIX.md](24_STACK_PROBE_CALLFIXUP_FIX.md) | **IMPLEMENTED** - Callfixup for _chkstk |
| [25_STACK_PROBE_CPP_FIX_IMPLEMENTATION.md](25_STACK_PROBE_CPP_FIX_IMPLEMENTATION.md) | C++ implementation of stack probe fix |
| [26_VARIADIC_ARGUMENT_LOSS_FIX.md](26_VARIADIC_ARGUMENT_LOSS_FIX.md) | **IMPLEMENTED** - Proto overrides for variadics |
| [27_BADSPACEBASE_CAUSE_TAXONOMY.md](27_BADSPACEBASE_CAUSE_TAXONOMY.md) | **KEY** - Categorizes different BADSPACEBASE root causes and which fixes apply |
| [pcode_patching/](pcode_patching/) | Implementation files: patch, modified Java source, examples |

## Per-Function Decompiler Helpers

This investigation led to the development of a per-function decompiler helper system.
See [../06-per_function_decompiler_helpers/](../06-per_function_decompiler_helpers/) for full documentation.

### Implemented Helpers

| Helper | Purpose | Location |
|--------|---------|----------|
| **Call Fixups** | Replace calls with custom P-code | `callfixups.py` |
| **Decompiler Fixes** | Per-function fix flags (MULTIEQUAL tracing) | `decompiler_fixes.py` |
| **Proto Overrides** | Per-call-site function signatures | `proto.py` |
| **P-code Overrides** | Per-instruction P-code replacement | `transforms.py` |

### Configuration Files

```
annotations/nocedit.exe/pseudocode/
├── callfixups.json           # Global call fixup definitions
├── decompiler_fixes.json     # Functions needing special fixes
├── proto_overrides.json      # Call-site signature overrides
└── src/<function>.json       # Per-function overrides
```

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
| Custom cspec | **IMPLEMENTED** | Helps direct calls, not indirect |
| SLEIGH patch | **IMPLEMENTED** | Minimal impact on BADSPACEBASE |
| Decompiler C++ (RuleLoadVarnode) | **FAILED** | Runs too late - heritage analysis already done |
| Decompiler C++ (resolveSpacebaseRelative) | **PROPOSED** | Designed but never committed - see doc 18 |
| Decompiler C++ (MULTIEQUAL tracing) | **IMPLEMENTED** | Per-function fix flag system |
| **DecompileCallback P-code Patch** | **IMPLEMENTED** | Per-instruction P-code override |
| **Call Fixups** | **IMPLEMENTED** | Fixes _chkstk/alloca stack probe issues |
| **Proto Overrides** | **IMPLEMENTED** | Fixes variadic function argument loss |
| **Decompiler Fix Flags** | **IMPLEMENTED** | Per-function experimental fixes |
| Binary patching | Not attempted | Can't change instruction sizes |
| GhidraCraft P-code | Not attempted | Powerful but fork is outdated (Ghidra 9.x) |
| PcodeInjectLibrary | Investigated | **Not suitable** - designed for custom processors |

## Changelog

- 2026-01-14: **RESEARCH** - Document 27: BADSPACEBASE Cause Taxonomy - categorizes 5 distinct root causes
- 2026-01-14: **IMPLEMENTED** - Build script `scripts/build_decompiler.sh` for quick C++ iteration
- 2026-01-14: **IMPLEMENTED** - Debug logging in decomp_fixes for tracing fix application
- 2026-01-11: **CORRECTED** - Document 18 status changed from "IMPLEMENTED" to "PROPOSED" - `fspec.cc` changes were never committed
- 2026-01-11: **RESEARCH** - Added `06-per_function_decompiler_helpers/` documenting expansion opportunities
- 2026-01-11: **IMPLEMENTED** - Pseudocode annotation support (callfixups, proto_overrides, decompiler_fixes, transforms)
- 2026-01-10: **IMPLEMENTED** - Per-function decompiler fix flags (`DFIX_MULTIEQUAL_STACK_TRACE`)
- 2026-01-10: **IMPLEMENTED** - Proto overrides for variadic function calls (document 26)
- 2026-01-10: **IMPLEMENTED** - Call fixups for `_chkstk`/`__alloca_probe` (document 24)
- 2025-12-30: **IMPLEMENTED** - EBP-frame tracing in `resolveSpacebaseRelative()` (document 18)
- 2025-12-30: **BREAKTHROUGH** - Complete pipeline analysis in document 17 identifies `resolveSpacebaseRelative()` as the correct fix location
- 2025-12-30: Document 16 records why RuleLoadVarnode patch failed (runs after heritage analysis transforms references)
- 2025-12-30: Deep dive into Ghidra source: heritage.cc, fspec.cc, coreaction.cc - traced complete failure chain
- 2025-12-29: Added proposed Ghidra source patch for EBP-frame recognition (fixes 32% of badspacebase)
- 2025-12-29: Discovered two distinct Watcom prologue patterns: EBP-frame (520 functions) and ESP-frame (1,109 functions)
- 2025-12-29: **KEY FINDING** - Documented architectural incompatibility between Watcom's EBP-frame convention and Ghidra's ESP-based spacebase resolution. P-code overrides cannot fix this.
- 2025-12-18: **IMPLEMENTED** P-code patching via DecompileCallback.java modification
- 2025-12-18: Added implementation files to pcode_patching/ directory
- 2025-12-18: Added minimal P-code patching implementation plan (GhidraCraft-like without UI)
- 2025-12-18: Added runtime patching approaches documentation (byte patching, GhidraCraft, PcodeInjectLibrary)
- 2025-12-18: Restructured into multiple files, added Ghidra version info, Watcom 11 estimate

## Related Documentation

- [../06-per_function_decompiler_helpers/](../06-per_function_decompiler_helpers/) - Expansion opportunities for per-function helpers
- [../ghidra_suspect_patterns.md](../ghidra_suspect_patterns.md) - Guide to common decompiler artifacts
