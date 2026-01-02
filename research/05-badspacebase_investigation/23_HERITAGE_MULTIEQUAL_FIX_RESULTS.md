# Heritage MULTIEQUAL Fix Results

**Date:** 2025-01-02
**Status:** Partial Success - Helps scenario2, regressions in in_stack_

## Summary

This document covers the implementation and testing of an early-stage fix in Ghidra's heritage.cc to handle MULTIEQUAL (phi node) ESP tracking.

## Background

Previous research (22_LATE_STAGE_TRACING_LIMITATIONS.md) concluded that late-stage tracing in `ruleaction.cc` was "too late" - the ESP relationship was already lost by the time RuleLoadVarnode runs. The fix needed to happen earlier in the pipeline during heritage analysis.

## Implementation

### Heritage.cc Changes

Added two helper functions and modified MULTIEQUAL handling in `discoverIndexedStackPointers()`:

#### 1. `traceStackOffsetBackward()` (new function)
Recursively traces a varnode backward to determine its ESP offset:
- Handles: COPY, INDIRECT, INT_AND (alignment), INT_ADD, INT_SUB, nested MULTIEQUAL
- Uses cycle detection and depth limiting (max 16)
- Recognizes stack space varnodes (their offset IS the ESP offset)

#### 2. `checkMultiequalStackOffsets()` (new function)
Verifies all MULTIEQUAL inputs have the same ESP offset:
- Traces each input back to ESP using `traceStackOffsetBackward()`
- If all inputs have same offset, returns true with that offset
- If inputs differ or can't be traced, returns false

#### 3. Modified MULTIEQUAL case in `discoverIndexedStackPointers()`

**Before:**
```cpp
case CPUI_MULTIEQUAL:
{
  // Always marked as uncertain
  StackNode nextNode(outVn, curNode.offset, curNode.traversals | StackNode::multiequal);
  ...
}
```

**After:**
```cpp
case CPUI_MULTIEQUAL:
{
  if (checkMultiequalStackOffsets(op, spc, spInput, commonOffset)) {
    // All inputs same offset - DON'T set multiequal flag
    newOffset = commonOffset;
  } else {
    // Inputs differ - mark as uncertain
    newTraversals |= StackNode::multiequal;
  }
  ...
}
```

### Key Insight

MULTIEQUAL doesn't change values - it merges control flow. If all paths have:
```
Path A: ptr = ESP + 8
Path B: ptr = ESP + 8
Merge:  ptr = MULTIEQUAL(ptr_a, ptr_b)  // Still ESP + 8!
```

The output has a definite offset, not uncertain.

### Additional Changes

- **ruleaction.cc**: Added stack space varnode recognition in `traceSpacebaseHelper()`
- **spacebase_debug.hh**: Changed target function from compile-time #define to runtime environment variable (`SPACEBASE_TARGET_FUNC`)

## Test Results

### Test Scenarios

| Scenario | Description | Functions |
|----------|-------------|-----------|
| scenario1 | EBP FRAME + STACK ALIGNMENT (AND ESP) | 5 |
| scenario2 | EBP FRAME + CALL ESP ANCHOR | 5 |
| scenario3 | EBP FRAME + VARIADIC CALLS | 1 |
| scenario4 | NON-EBP FRAME + BADSPACEBASE | 5 |
| scenario5 | EBP FRAME + VARIADIC ERRORS | 1 |
| control_complex | Clean complex functions | 4 |
| control_simple | Clean simple functions | 2 |

### Overall Results

```
Total functions tested: 23
Total BADSPACEBASE occurrences: 10
Total in_stack_ variables: 247

BASELINE COMPARISON (18 functions with baselines):
  BADSPACEBASE: -2 (IMPROVEMENT)
  in_stack_: +155 (REGRESSION)
```

### BADSPACEBASE Changes vs Baseline

**Improvements (3 functions - all from scenario2!):**
- EdgeListCheckPlusFreesLarge: -1
- superopt_unnamed_2: -1
- superopt_unnamed_3: -1

**Regressions (1 function):**
- applyActPalette: +1 (scenario4 - NON-EBP)

**Net: -2 (improvement)**

### in_stack_ Changes vs Baseline

**Top Regressions:**
- setupColoredSoftwareEdge: +49 (CONTROL function!)
- CLodMesh_computePointToFaceDistance: +37
- superopt_unnamed_2: +36
- CLodMesh_buildSpatialGrid: +16
- CDemonActor_doCheckForInvalidPointers: +16

**Some Improvements:**
- EdgeListCheckPlusFreesLarge: -9
- superopt_unnamed_3: -2
- applyActPalette: -2

**Net: +155 (regression)**

### Heritage MULTIEQUAL Hits

Functions that triggered `checkMultiequalStackOffsets`:
- EdgeListCheckPlusFreesLarge: 6 times
- superopt_unnamed_2: 10 times
- superopt_unnamed_3: 3 times
- entry: 4 times

All scenario2 functions that improved also triggered the heritage MULTIEQUAL checking, confirming the fix is working for its intended purpose.

## Analysis

### Why Scenario2 Improved

Scenario2 functions (EBP FRAME + CALL ESP ANCHOR) have ESP uncertainty introduced by function calls. When control flow merges after a call, MULTIEQUAL nodes appear in the ESP derivation chain. Our fix correctly identifies that all MULTIEQUAL inputs have the same ESP offset and preserves tracking.

### Why Scenario1 Didn't Improve

Scenario1 functions (EBP FRAME + STACK ALIGNMENT) use `AND ESP, mask` for stack alignment. This happens BEFORE any MULTIEQUAL nodes exist in the ESP tracking path. The heritage traversal shows only INT_ADD, INT_AND, COPY - no MULTIEQUAL.

The stack alignment issue requires a different fix - possibly handling INT_AND specially or recognizing the EBP=ESP relationship from the prologue.

### Why in_stack_ Regressed

The in_stack_ regression is concerning, especially in control functions. Possible causes:
1. Our stack space varnode recognition in ruleaction.cc may be too aggressive
2. The fixes may be interfering with other stack resolution paths
3. The baseline files may have been generated with a different Ghidra configuration

This needs further investigation.

## Files Modified

| File | Changes |
|------|---------|
| heritage.cc | Added `traceStackOffsetBackward()`, `checkMultiequalStackOffsets()`, modified MULTIEQUAL case |
| ruleaction.cc | Added stack space varnode recognition in `traceSpacebaseHelper()` |
| spacebase_debug.hh | Changed to runtime env var for target function |
| generate_ebp_patch.sh | Added heritage.cc to patch file list |

## Next Steps

1. **Investigate in_stack_ regression** - Why are control functions regressing?
2. **Fix scenario1** - Handle AND ESP stack alignment specially
3. **Consider reverting ruleaction.cc changes** - The heritage fix alone may be sufficient and safer
4. **Test with larger function set** - Current 23 functions may not be representative

## Conclusion

The heritage MULTIEQUAL fix successfully improves BADSPACEBASE issues for scenario2 (call ESP anchor) functions by correctly tracking ESP offset through phi nodes. However, there are concerning regressions in in_stack_ variables that need investigation before this fix can be recommended for general use.
