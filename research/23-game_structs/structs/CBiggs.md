# CBiggs

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 52432 | fields | 52432 |
| nocturne | 52024 | fields | 52024 |
| bw1 | 53372 | fields | 53372 |
| blairwitch2 | 71948 | fields | 71948 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `morphing` | `int` | 0xc038 | 0xbea0 | 0xc3e4 | 0x10c74 |
| `morph_timer` | `float` | 0xc03c | 0xbea4 | 0xc3e8 | 0x10c78 |
| `morph` | `CMorph` | 0xc040 | 0xbea8 |  | 0x10c7c |
| `morph_event` | `char[100]` | 0xcc6c | 0xcad4 | 0xd018 | 0x118a8 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc3ec+0xc2c
