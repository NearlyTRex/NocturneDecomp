# SFogGrid

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 4128 | fields | — |
| nocturne | 4128 | fields | — |
| bw1 | 4128 | fields | — |
| blairwitch2 | 4128 | fields | — |
| bw3 | 4128 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `planes` | `SFogGridPlane[16]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `sampling_offset` | `CVector3i` | 0x1000 | 0x1000 | 0x1000 | 0x1000 | 0x1000 |
| `scroll_vector` | `CVector3i` | 0x100c | 0x100c | 0x100c | 0x100c | 0x100c |
| `height_threshold` | `int` | 0x1018 | 0x1018 | 0x1018 | 0x1018 | 0x1018 |
| `density_multiplier` | `int` | 0x101c | 0x101c | 0x101c | 0x101c | 0x101c |
