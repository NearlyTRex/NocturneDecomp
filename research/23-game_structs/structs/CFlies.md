# CFlies

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 10784 | fields | 10784 |
| nocturne | 10776 | fields | 10776 |
| bw1 | 10784 | fields | 10784 |
| blairwitch2 | 11132 | fields | 11132 |
| bw3 | 10784 | fields | 10784 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `box_size` | `CVector3f` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `fly_count` | `int` | 0x164 | 0x15c | 0x164 | 0x2c0 | 0x164 |
| `flies` | `SFly[200]` | 0x168 | 0x160 | 0x168 | 0x2c4 | 0x168 |
| `follow_actor` | `CDemonActor*` | 0x2a08 | 0x2a00 | 0x2a08 | 0x2b64 | 0x2a08 |
| `gather_count` | `int` | 0x2a0c | 0x2a04 | 0x2a0c | 0x2b68 | 0x2a0c |
| `gather_timer` | `float` | 0x2a10 | 0x2a08 | 0x2a10 | 0x2b6c | 0x2a10 |
| `gather_time` | `float` | 0x2a14 | 0x2a0c | 0x2a14 | 0x2b70 | 0x2a14 |
| `dead` | `int` | 0x2a18 | 0x2a10 | 0x2a18 | 0x2b74 | 0x2a18 |
| `is_visible` | `int` | 0x2a1c | 0x2a14 | 0x2a1c | 0x2b78 | 0x2a1c |
