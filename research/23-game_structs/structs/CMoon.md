# CMoon

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 22240 | fields | 22240 |
| nocturne | 928 | fields | 928 |
| bw1 | 2768 | fields | 2768 |
| blairwitch2 | 2768 | fields | 2768 |
| bw3 | 2792 | fields | 2792 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `is_loaded` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `rotation_phase` | `float` | 0x4 | 0x4 |  |  |  |
| `moon` | `CKeyFramedModel` | 0x8 | 0x8 |  |  |  |
| `models` | `CKeyFramedModel[3]` |  |  | 0x8 | 0x8 | 0x8 |
| `scroll_x` | `int[2]` |  |  |  |  | 0xad0 |
| `scroll_y` | `int[2]` |  |  |  |  | 0xad8 |
| `hand_alpha` | `int` |  |  |  |  | 0xae0 |
| `hand_alpha_rising` | `int` |  |  |  |  | 0xae4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x4+0x4
- **blairwitch2**: 0x4+0x4
- **bw3**: 0x4+0x4
