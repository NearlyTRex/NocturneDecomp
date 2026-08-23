---
id: ghidra-intrinsics-defined-in-system-intrinsics-h
kind: rule
title: "Ghidra intrinsics (defined in `system/intrinsics.h`)"
requires: [type-system-reference]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

- `CONCAT44(hi, lo)` — assemble two 32-bit values into a 64-bit value
- `SUB84(val, offset)` — extract 4 bytes from an 8-byte value at byte offset
- `__BITCAST_DOUBLE(uint64)` — reinterpret uint64 bits as double
- `__BITCAST_UINT64(double)` — reinterpret double bits as uint64
- `ADJ(ptr)` — adjust an offset pointer back to its base struct
- `CARRY4(a, b)`, `SBORROW4(a, b)`, `SCARRY4(a, b)` — overflow/borrow detection
- `ZEXT14(x)`, `ZEXT48(x)` — zero extension
