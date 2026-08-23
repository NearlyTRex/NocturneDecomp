---
id: adjacent-uint-locals-reconstructed-as-a-double
kind: recipe
title: "Adjacent uint locals reconstructed as a double (`__BITCAST_DOUBLE(CONCAT44(hi, lo))`)"
legacy_section: 22
requires: []
triggers: [bitcast_double_pair]
provides: []
---

**Cause:** Watcom often allocates a `double` local as two adjacent 4-byte stack slots (e.g. one slot holds the low 32 bits of the IEEE 754 representation, the next holds the high 32 bits). When the function later passes that double to a callee or uses it in arithmetic, Watcom emits two separate 32-bit pushes / loads. Ghidra models the two slots as independent `uint` locals (often named `local_NNNN` and `local_NNN8` four bytes apart) and reconstructs the original double at every use site via `__BITCAST_DOUBLE(CONCAT44(hi_uint, lo_uint))`. The two-uint declaration is a Ghidra typing artifact, not real source code.

**Symptoms:**
- A pair of adjacent `uint local_NNNN; uint local_NNNN-4;` declarations (offsets exactly 4 bytes apart in the stack frame)
- Both locals are written together, e.g.
  ```cpp promptc:noverify
  if (cond) {
      local_2080 = 0x667f6ee7;
      local_207c = 0x3fe6a09e;       // pair forms 0x3fe6a09e667f6ee7 = sqrt(0.5)
  } else {
      local_2080 = 0x995b2417;
      local_207c = 0x3feae89f;       // pair forms 0x3feae89f995b2417 = 2^(-1/4)
  }
  ```
- Both locals consumed only via `__BITCAST_DOUBLE(CONCAT44(local_207c, local_2080))` at one or more call sites
- The bit-pattern decodes to a recognizable double constant (a math constant like `sqrt(0.5)`, `pi`, `1/log(2)`, or a magic encoder coefficient)

**Diagnosis:** Decode the two 32-bit hex constants as a single 64-bit IEEE 754 double. Concatenate hi-uint as the upper 32 bits and lo-uint as the lower 32 bits. A Python one-liner: `import struct; struct.unpack('<d', struct.pack('<II', lo, hi))[0]`. If the result is a clean math/encoder constant, the merge is safe.

**Fix:** Merge the two adjacent uint declarations into one `double` local and replace each `__BITCAST_DOUBLE(CONCAT44(...))` with the double directly:

```cpp promptc:noverify
// BROKEN (two adjacent uint slots, reconstructed at every use):
uint local_2080;
uint local_207c;
...
if ((granule->scalefac_compress & 1U) == 1) {
    local_2080 = 0x667f6ee7;
    local_207c = 0x3fe6a09e;
}
else {
    local_2080 = 0x995b2417;
    local_207c = 0x3feae89f;
}
...
calculateRatio(idx, __BITCAST_DOUBLE(CONCAT44(local_207c, local_2080)), n, buf);

// FIXED (merged into one double; bitcast/concat dropped at every call site):
double mpeg2_is_pos_step;
...
if ((granule->scalefac_compress & 1U) == 1) {
    mpeg2_is_pos_step = 0.7071067811865475;   // sqrt(2)/2
}
else {
    mpeg2_is_pos_step = 0.8408964152537145;   // 2^(-1/4)
}
...
calculateRatio(idx, mpeg2_is_pos_step, n, buf);
```

**When NOT to merge:** Skip the merge if either half is read or written *individually* (not just as a bitcast pair) anywhere — e.g. the low half is used in pointer arithmetic, or the two halves come from different sources. That's not a split double, it's two genuinely separate 32-bit values that happen to be adjacent. Decoding both halves together as a double will produce a nonsense constant; that's a strong negative signal.

**Eligibility:** `.keep`-layer fix. The `bitcast_double_pair` suspect type flags every `__BITCAST_DOUBLE(CONCAT44(...))` occurrence. The fix is per-function; the underlying issue is per-stack-frame typing, which Ghidra can't always retype safely without disturbing other local layouts.
