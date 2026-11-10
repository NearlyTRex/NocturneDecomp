# SCarryHand

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 68 | fields | — |
| nocturne | 68 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `bone_index` | `int` | 0x0 | 0x0 |  |  |  |
| `secondary_bone_index` | `int` | 0x4 | 0x4 |  |  |  |
| `carry_actor` | `CDemonActor*` | 0x8 | 0x8 |  |  |  |
| `initial_carry_transform` | `CMatrix3x4f` | 0xc | 0xc |  |  |  |
| `blend_speed` | `float` | 0x3c | 0x3c |  |  |  |
| `blend_factor` | `float` | 0x40 | 0x40 |  |  |  |
