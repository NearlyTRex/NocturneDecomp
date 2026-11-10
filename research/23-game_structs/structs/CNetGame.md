# CNetGame

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 372 | fields | 372 |
| nocturne | 372 | fields | 372 |
| bw1 | 380 | fields | 380 |
| blairwitch2 | 388 | fields | 388 |
| bw3 | 388 | fields | 388 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `connection_type` | `EConnectionType` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `network_mode` | `ENetworkMode` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `player_name` | `char[20]` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `player_count` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `players` | `SNetPlayer[2]` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `server_player_index` | `int` | 0x110 | 0x110 | 0x118 | 0x120 | 0x120 |
| `local_player_index` | `int` | 0x114 | 0x114 | 0x11c | 0x124 | 0x124 |
| `mission_name` | `char[80]` | 0x118 | 0x118 | 0x120 | 0x128 | 0x128 |
| `has_pending_sim_frame` | `int` | 0x168 | 0x168 | 0x170 | 0x178 | 0x178 |
| `random_seed` | `uint` | 0x16c | 0x16c | 0x174 | 0x17c | 0x17c |
| `socket` | `CSocket` | 0x170 | 0x170 |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x110+0x8, 0x178+0x4
- **blairwitch2**: 0x110+0x10, 0x180+0x4
- **bw3**: 0x110+0x10, 0x180+0x4
