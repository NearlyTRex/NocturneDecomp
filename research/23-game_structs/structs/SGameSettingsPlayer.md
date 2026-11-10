# SGameSettingsPlayer

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | — |
| nocturne | 40 | fields | — |
| bw1 | 40 | fields | — |
| blairwitch2 | 40 | fields | — |
| bw3 | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `name` | `char[20]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `addr` | `SNetworkAddr` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `hero_number` | `EHeroType` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `aim_mode` | `uint` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `ready_flag` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
