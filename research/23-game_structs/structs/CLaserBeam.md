# CLaserBeam

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 64 | fields | 64 |
| nocturne | 64 | fields | 64 |
| bw1 | 64 | fields | 64 |
| blairwitch2 | 64 | fields | 64 |
| bw3 | 64 | fields | 64 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `origin` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `hit_position` | `CVector3f` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `beam_width` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `reticle_intensity` | `float` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `reflection_normal` | `CVector3f` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `color` | `CColor3i` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `halo_spread` | `float` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
| `cone_angle` | `float` | 0x3c | 0x3c | 0x3c | 0x3c | 0x3c |
