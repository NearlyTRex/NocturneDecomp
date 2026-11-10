# SArmAimData

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 32 | fields | — |
| nocturne | 32 | fields | — |
| bw1 | 32 | fields | — |
| blairwitch2 | 32 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `aim_pitch` | `float` | 0x0 | 0x0 | 0x0 | 0x0 |
| `aim_yaw` | `float` | 0x4 | 0x4 | 0x4 | 0x4 |
| `target_pitch` | `float` | 0x8 | 0x8 | 0x8 | 0x8 |
| `target_yaw` | `float` | 0xc | 0xc | 0xc | 0xc |
| `recoil_timer` | `float` | 0x10 | 0x10 | 0x10 | 0x10 |
| `kickback_factor` | `float` | 0x14 | 0x14 | 0x14 | 0x14 |
| `aim_target` | `CDemonActor*` | 0x18 | 0x18 | 0x18 | 0x18 |
| `aim_lock_state` | `int` | 0x1c | 0x1c | 0x1c | 0x1c |
