# CGargoyle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48920 | fields | 48920 |
| nocturne | 48512 | fields | 48512 |
| bw1 | 49860 | fields | 49860 |
| blairwitch2 | 68436 | fields | 68436 |
| bw3 | 53424 | fields | 53424 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `part_indices` | `int[12]` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 | 0xd054 |
| `stone_red` | `int` | 0xbeec | 0xbd54 | 0xc298 | 0x10b28 | 0xd084 |
| `stone_green` | `int` | 0xbef0 | 0xbd58 | 0xc29c | 0x10b2c | 0xd088 |
| `stone_blue` | `int` | 0xbef4 | 0xbd5c | 0xc2a0 | 0x10b30 | 0xd08c |
| `home_base` | `CDemonActor*` | 0xbef8 | 0xbd60 | 0xc2a4 | 0x10b34 | 0xd090 |
| `sfx_handles` | `uint[2]` | 0xbefc | 0xbd64 | 0xc2a8 | 0x10b38 | 0xd094 |
| `target_scale` | `CVector3i` | 0xbf04 | 0xbd6c | 0xc2b0 | 0x10b40 | 0xd09c |
| `returning_home` | `int` | 0xbf10 | 0xbd78 | 0xc2bc | 0x10b4c | 0xd0a8 |
| `petrify_timer` | `float` | 0xbf14 | 0xbd7c | 0xc2c0 | 0x10b50 | 0xd0ac |
