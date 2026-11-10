# SGem

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 184 | fields | 184 |
| nocturne | 184 | fields | 184 |
| bw1 | 184 | fields | 184 |
| blairwitch2 | 184 | fields | 184 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `color` | `CColor3f` | 0x0 | 0x0 | 0x0 | 0x0 |
| `hum_color` | `CColor3f` | 0xc | 0xc | 0xc | 0xc |
| `light` | `CColor3f` | 0x18 | 0x18 | 0x18 | 0x18 |
| `position` | `CVector3f` | 0x24 | 0x24 | 0x24 | 0x24 |
| `rotation` | `CVector3f` | 0x30 | 0x30 | 0x30 | 0x30 |
| `collision_tri_a` | `CDemonTriangle` | 0x3c | 0x3c | 0x3c | 0x3c |
| `collision_tri_b` | `CDemonTriangle` | 0x74 | 0x74 | 0x74 | 0x74 |
| `sfx_handles` | `uint[3]` | 0xac | 0xac | 0xac | 0xac |
