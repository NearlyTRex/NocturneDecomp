# Per-Function Decompiler Helpers Research

This folder contains research and implementation guides for extending Ghidra's decompiler
with per-function control mechanisms that don't modify the program database.

## Documents

| File | Description |
|------|-------------|
| [01_OVERVIEW_AND_OPPORTUNITIES.md](01_OVERVIEW_AND_OPPORTUNITIES.md) | Complete list of all identified opportunities, organized by implementation difficulty |
| [02_GHIDRA_SOURCE_REFERENCE.md](02_GHIDRA_SOURCE_REFERENCE.md) | Detailed source code references with file paths and line numbers |
| [03_QUICK_IMPLEMENTATION_GUIDE.md](03_QUICK_IMPLEMENTATION_GUIDE.md) | Copy-paste code snippets for implementing the easiest wins |
| [04_PCODE_OVERRIDE_VALIDITY.md](04_PCODE_OVERRIDE_VALIDITY.md) | Analysis of P-code override stability and validity across Ghidra versions |

## Background

This research was conducted to identify features in Ghidra that are:

1. Currently only configurable globally (via cspec or Architecture options)
2. Or only stored in the program database
3. But could be made per-function without modifying the database

The goal is to enable fine-grained decompiler control for decomp projects where:
- Different functions need different settings
- Changes should be reversible/exportable
- The Ghidra database shouldn't be modified

## Already Implemented

Four mechanisms are already working:

1. **Call Fixups** - Replace function calls with custom P-code
2. **Decompiler Fixes** - Per-function experimental fix flags
3. **Proto Overrides** - Per-call-site function signatures
4. **P-code Overrides** - Per-instruction P-code replacement

See: `scripts/Python/ghidra_annotations/annotations/pseudocode/`

## Priority Recommendations

### Immediate (Tier 1)
- Inline control
- NoReturn control
- VarArgs control
- Calling convention override

### Short Term (Tier 2)
- Extrapop override
- Flow overrides (BRANCH/CALL/RETURN)
- Indirect call resolution

### Medium Term (Tier 3-4)
- New decompiler fix flags (DFIX_DISABLE_POINTER_INFERENCE, etc.)
- Jump table overrides
- Comment injection

## Key Ghidra Files

Java:
- `DecompileCallback.java` - Main decompiler callback, add registries here
- `FunctionPrototype.java` - Function properties, intercept lookups here
- `HighFunction.java` - High-level function, proto override registry here

C++:
- `decompiler_fixes.hh` - Decompiler fix flag definitions
- `override.hh` - Override system (forcegoto, indirectover, etc.)
- `coreaction.cc` - Action implementations to modify
- `options.cc` - Global option implementations

## Related

- `research/05-badspacebase_investigation/` - Investigation that motivated this work
- Custom Ghidra build at `~/Repositories/Ghidra/`
