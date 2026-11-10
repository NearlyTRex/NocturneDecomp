# CArmour

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48928 | fields | 48928 |
| nocturne | 48520 | fields | 48520 |
| bw1 | 49868 | fields | 49868 |
| blairwitch2 | 68444 | fields | 68444 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `fall_apart_event` | `char[100]` | 0xbebc | 0xbd24 |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc268+0x64
- **blairwitch2**: 0x10af8+0x64
