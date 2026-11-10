# CIniFile

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 512 | fields | — |
| nocturne | 512 | fields | — |
| bw1 | 516 | fields | 516 |
| blairwitch2 | 516 | fields | 516 |
| bw3 | 516 | fields | 516 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `filename` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `section` | `char[256]` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x200+0x4
- **blairwitch2**: 0x200+0x4
- **bw3**: 0x200+0x4
