# CDemonGlobe

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 64 | fields | 64 |
| nocturne | 64 | fields | 64 |
| bw1 | 64 | fields | — |
| blairwitch2 | 64 | fields | — |
| bw3 | 64 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `position_scaled` | `CVector3i` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `linear_radius_scaled` | `int` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `quadratic_radius_scaled` | `int` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `falloff_value` | `int` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `radius_squared` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `intensity` | `_BIT_INTEGER32` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `corona_mode` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `position` | `CVector3f` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `radius` | `float` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `inverse_radius` | `float` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
| `inverse_radius_squared` | `float` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
| `intensity_multiplier` | `int` | 0x3c | 0x3c | 0x3c | 0x3c | 0x3c |
