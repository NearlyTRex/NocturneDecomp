# Ghidra Decompiler C++ Changes

## Overview

The most promising but complex solution: modifying Ghidra's decompiler C++ code to better handle ESP-relative stack frames with indirect calls.

**Status**: Not attempted yet. This document outlines the approach.

## Why This Might Actually Work

Unlike cspec changes (which define conventions) or SLEIGH changes (which define instruction semantics), modifying the decompiler core could address the fundamental ESP tracking algorithm.

The decompiler is written in C++ and lives in:
```
Ghidra/Features/Decompiler/src/decompile/cpp/
```

## Relevant Source Files

### Stack Frame Analysis
| File | Purpose |
|------|---------|
| `funcdata.cc` | Function data structure, stack frame management |
| `varnode.cc` | Variable node representation |
| `heritage.cc` | SSA heritage and stack variable resolution |
| `stackdata.cc` | Stack pointer tracking |

### Space/Address Handling
| File | Purpose |
|------|---------|
| `space.cc` | Address space definitions (including stack space) |
| `translate.cc` | P-code translation |
| `fspec.cc` | Function specification (calling conventions) |

### Key Classes
| Class | Purpose |
|-------|---------|
| `Funcdata` | Represents a function being decompiled |
| `VarnodeLocSet` | Tracks stack variable locations |
| `Heritage` | Performs SSA conversion including stack vars |
| `ProtoModel` | Calling convention model |

## The ESP Tracking Problem in Code

When the decompiler encounters:
```asm
call dword ptr [edx+4]
```

It needs to know ESP's value after the call. The relevant code path:

1. `heritage.cc`: Builds use-def chains for ESP
2. `funcdata.cc`: Tries to resolve stack frame
3. `stackdata.cc`: Computes ESP at each instruction

When ESP is uncertain, `funcdata.cc` may:
- Create BADSPACEBASE as a placeholder
- Generate `in_stack_*` variables for uncertain offsets
- Fail to correlate push/pop with their targets

## Potential Modifications

### Approach 1: Assume Standard Watcom Cleanup

For indirect calls with unknown targets, assume Watcom conventions:
- Callee cleans up parameters
- Register parameters don't affect stack
- Default to 0 bytes stack adjustment if unknown

```cpp
// In fspec.cc or similar
int4 ProtoModel::getIndirectCallStackAdjust(const Varnode *target) {
    // For Watcom, assume callee cleanup
    // Could analyze push count before call
    return 0; // Or computed value
}
```

**Risk**: Wrong assumption breaks other calls.

### Approach 2: ESP Range Tracking

Instead of a single ESP value, track a range:
```cpp
// Track ESP as [min, max] instead of single value
struct ESPRange {
    int4 min_offset;
    int4 max_offset;
};
```

After indirect call, ESP is in range [ESP-X, ESP+Y] for reasonable X, Y.

**Benefit**: Can still identify locals that are definitely in the frame.
**Complexity**: Requires significant refactoring.

### Approach 3: Post-Hoc ESP Recovery

After initial decompilation fails with BADSPACEBASE:
1. Identify BADSPACEBASE functions
2. Analyze actual stack usage patterns
3. Re-decompile with constrained ESP values

```cpp
// Hypothetical recovery pass
void Funcdata::recoverESPTracking() {
    // Find indirect calls
    // Analyze pushes before each call
    // Infer stack cleanup
    // Re-run heritage with fixed ESP
}
```

### Approach 4: Frame-Relative Mode

Force all stack references to be frame-relative:
1. At function entry, record ESP as frame base
2. All `[ESP+X]` become `[frame_base+X-total_pushes]`
3. Ignore ESP changes, just track offset from frame

```cpp
// In stackdata.cc
int4 getStackOffset(const Address &addr, int4 esp_at_instruction) {
    // Instead of:
    // return esp_at_instruction + addr.getOffset();

    // Use frame-relative:
    return frame_base_offset + addr.getOffset() - counted_pushes;
}
```

**Benefit**: Immune to ESP tracking loss at indirect calls.
**Complexity**: Need to track all pushes accurately.

## Building Modified Decompiler

1. Get Ghidra source:
   ```bash
   git clone https://github.com/NationalSecurityAgency/ghidra.git
   cd ghidra
   git checkout Ghidra_12.1_build  # Or relevant tag
   ```

2. Make modifications in:
   ```
   Ghidra/Features/Decompiler/src/decompile/cpp/
   ```

3. Rebuild:
   ```bash
   gradle buildNatives
   gradle buildGhidra
   ```

4. Test on BADSPACEBASE functions

## Testing Strategy

1. **Unit tests**: Create minimal test cases with known BADSPACEBASE triggers
2. **Regression tests**: Ensure existing decompilation doesn't break
3. **BADSPACEBASE count**: Track how many functions improve

### Test Function Criteria
- Has indirect calls (vtable)
- Currently produces BADSPACEBASE
- Assembly is fully understood
- Can verify correct decompilation

## Risks and Challenges

| Risk | Mitigation |
|------|------------|
| Break working functions | Extensive regression testing |
| Incorrect stack model | Make changes opt-in via option |
| Performance impact | Profile before/after |
| Merge conflicts | Track Ghidra updates carefully |

## Prior Art

### IDA Pro Hex-Rays
IDA's decompiler reportedly handles ESP-relative frames better. Their approach is proprietary but likely includes:
- Heuristics for common patterns
- User-defined stack adjustments
- Better indirect call handling

### RetDec
Open-source decompiler with different architecture. May have relevant patterns but fundamentally different codebase.

## Recommended Starting Point

1. **Read `heritage.cc`** - Understand current ESP tracking
2. **Add logging** - Trace ESP values through decompilation
3. **Identify failure point** - Where exactly does tracking fail?
4. **Prototype fix** - Try Approach 1 (assume Watcom cleanup) first
5. **Evaluate impact** - Count BADSPACEBASE before/after

## Resources

- Ghidra Decompiler docs: `Ghidra/Features/Decompiler/src/main/doc/`
- P-code reference: `Ghidra/Features/Decompiler/src/main/doc/pcoderef.xml`
- GitHub issues: Search for "stack" "ESP" "BADSPACEBASE"
