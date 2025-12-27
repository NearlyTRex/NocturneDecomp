# ESP Tracking Investigation - December 26, 2025

## Summary

Investigating why block 00432578 in `blitSimpleSprite_FUN_00432540` has delta=+4 when it should be 0.

## Background

Two issues were identified in ESP tracking:

1. **Self-loop false conflicts** - FIXED
   - Blocks that jump to themselves (004325a9, 00432607, 0043266a) were causing false ESP conflicts
   - Fix: Skip propagating ESP on self-loop back-edges in `apply_cfg_esp_tracking()`

2. **Shared epilogue conflict at 00432570** - UNDER INVESTIGATION
   - Two paths merge with different ESP values:
     - Path via 00432569: ESP=-44
     - Path via 00432593: ESP=-40
   - 4-byte difference traces back to block 00432578 having delta=+4 instead of 0

## The Bug

Block 00432578 contains a CALL instruction:
```
@00432578 [ESP:-44](-4)~  # CALL 0x00431760
```

The pcode file shows `(-4)` meaning `esp_delta=-4` was stored during extraction.

Expected delta calculation in `compute_block_esp_delta()`:
1. CALL esp_delta = -4 (from ESP_ADJUSTMENTS)
2. +4 for callee's RET popping return address
3. Net = 0

Actual debug output:
```
Delta: 00432578 CALL return adjustment +4 -> total=+4
Block 00432578: delta=+4
```

The `-4` from esp_delta is NOT being applied before the `+4` adjustment.

## Code Analysis

In `pcode.py`, `compute_block_esp_delta()` at lines 878-909:

```python
for idx in block_indices:
    entry = pcode_data[idx]
    delta = entry.get('esp_delta', 0)

    if entry.get('esp_frame_restore'):
        # Frame reset handling...
    elif isinstance(delta, int):          # <-- Only adds delta if int
        total_delta += delta
        if debug and delta != 0:
            dbg(f"esp_delta={delta:+d} -> total={total_delta:+d}")

    if _is_call(mnemonic):
        total_delta += 4  # Always adds +4 for RET
```

The `-4` isn't being logged, which means either:
1. `esp_delta` is 0 (extraction bug)
2. `esp_delta` is not an int (type issue)
3. `esp_frame_restore` is set (unlikely for CALL)

## Debug Added

Added to line 897-898:
```python
if debug:
    dbg(f"CALL esp_delta={delta} (type={type(delta).__name__}) before +4 adj")
```

## Root Cause Found

The debug output revealed `esp_delta=0 (type=int)` for the CALL at 00432578.

Looking at the pcode file, there's a `RET` at 00432577 immediately before the CALL:
```
@00432577 [ESP:???](+4)!?  # RET
@00432578 [ESP:-44](-4)~  # CALL 0x00431760
```

During linear extraction in `extract_function_pcode()`:
1. RET at 00432577 → sets `esp_tracking_lost = True` (line 401-402)
2. CALL at 00432578 → processed with lost tracking → `esp_delta = 0` (line 333)

The CFG analysis later resolves the ESP offset and the pcode file shows `(-4)~`, but
`compute_block_esp_delta()` runs BEFORE the recalculation phase that fixes esp_delta
for 'lost' instructions. So it reads the stale `esp_delta=0`.

## Fix Applied

In `compute_block_esp_delta()`, for CALL instructions, use the known delta from
`ESP_ADJUSTMENTS` instead of relying on the potentially-stale entry['esp_delta']:

```python
if _is_call(mnemonic):
    call_push_delta = ESP_ADJUSTMENTS.get('CALL', -4)
    if delta != call_push_delta:
        adjustment = call_push_delta - delta
        total_delta += adjustment
    total_delta += 4  # Callee's RET
```

This ensures CALL always contributes net 0 to block delta (-4 push + 4 RET pop).

## Expected Fix Impact

If block 00432578 delta becomes 0 instead of +4:
- Block 00432593 would get ESP=-44 instead of ESP=-40
- The conflict at 00432570 (was=-44, trying=-40) would disappear
- Both paths would arrive at 00432570 with ESP=-44

## Files Modified

- `pcode.py`: Self-loop fix + debug output for CALL esp_delta
- `parallel.py`: Debug flag for blitSimpleSprite function
- `exporter.py`: vtables_dir fix
- `vtable_calls.py`: vtables bucket loading fix
- `functions.py`: Shared `load_vtable_bucket_files()` helper
