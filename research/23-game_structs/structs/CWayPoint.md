# CWayPoint

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1368 | fields | 1368 |
| nocturne | 1360 | fields | 1360 |
| bw1 | 1372 | fields | 1372 |
| blairwitch2 | 1724 | fields | 1724 |
| bw3 | 1372 | fields | 1372 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CTrigger` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `num_adjacent_waypoints` | `int` | 0x370 | 0x368 | 0x374 | 0x4d0 | 0x374 |
| `adjacency` | `SWayPointAdjacency[60]` | 0x374 | 0x36c | 0x378 | 0x4d4 | 0x378 |
| `pathfind_cost` | `float` | 0x554 | 0x54c | 0x558 |  | 0x558 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x370+0x160, 0x510+0x1ac
