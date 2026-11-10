# CTentacle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48940 | fields | 48940 |
| nocturne | 48532 | fields | 48532 |
| bw1 | 49880 | fields | 49880 |
| blairwitch2 | 68456 | fields | 68456 |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |  |
| `wait_timer` | `float` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |  |
| `chase_timer` | `float` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc |  |
| `grave_actor` | `CDemonActor*` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 |  |
| `target_blend` | `float` | 0xbec8 | 0xbd30 | 0xc274 | 0x10b04 |  |
| `target_matrix` | `CMatrix3x4f` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 |  |
| `prev_target_matrix` | `CMatrix3x4f` | 0xbefc | 0xbd64 | 0xc2a8 | 0x10b38 |  |
