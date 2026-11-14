# SSoftwareEdge

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 72 | fields | — |
| nocturne | 72 | fields | — |
| bw1 | 80 | fields | — |
| blairwitch2 | 80 | fields | — |
| bw3 | 80 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `SHardwareEdge` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `green_current` | `int` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
| `green_gradient` | `int` | 0x3c | 0x3c | 0x3c | 0x3c | 0x3c |
| `blue_current` | `int` | 0x40 | 0x40 | 0x40 | 0x40 | 0x40 |
| `blue_gradient` | `int` | 0x44 | 0x44 | 0x44 | 0x44 | 0x44 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x48+0x8
- **blairwitch2**: 0x48+0x8
- **bw3**: 0x48+0x8
