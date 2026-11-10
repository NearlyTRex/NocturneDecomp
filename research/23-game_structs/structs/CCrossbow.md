# CCrossbow

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2080 | fields | 2080 |
| nocturne | 2064 | fields | 2064 |
| bw1 | 2080 | fields | 2080 |
| blairwitch2 | 2776 | fields | 2776 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 | 0x0 | 0x0 |
| `flame_active` | `int` | 0x578 | 0x570 | 0x578 | 0x6d4 |
| `bolt_flame` | `CFlame` | 0x57c | 0x574 | 0x57c |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x6d8+0x400
