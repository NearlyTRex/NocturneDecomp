# SNetPacket_GameSettings

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 177 | fields | — |
| nocturne | 177 | fields | — |
| bw1 | 177 | fields | — |
| blairwitch2 | 177 | fields | — |
| bw3 | 177 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `settings_version` | `int` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `random_seed` | `int` | 0x9 | 0x9 | 0x9 | 0x9 | 0x9 |
| `mission_name` | `char[80]` | 0xd | 0xd | 0xd | 0xd | 0xd |
| `player_count` | `int` | 0x5d | 0x5d | 0x5d | 0x5d | 0x5d |
| `players` | `SGameSettingsPlayer[2]` | 0x61 | 0x61 | 0x61 | 0x61 | 0x61 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4
- **blairwitch2**: 0x1+0x4
- **bw3**: 0x1+0x4
