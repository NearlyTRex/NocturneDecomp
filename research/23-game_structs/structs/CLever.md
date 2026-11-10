# CLever

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2068 | fields | 2068 |
| nocturne | 2060 | fields | 2060 |
| bw1 | 2068 | fields | 2068 |
| blairwitch2 | 2416 | fields | 2416 |
| bw3 | 2068 | fields | 2068 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `dead` | `int` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `lever_type` | `ELeverType` | 0x2d8 | 0x2d0 | 0x2d8 | 0x434 | 0x2d8 |
| `param` | `float` | 0x2dc | 0x2d4 | 0x2dc | 0x438 | 0x2dc |
| `on_event` | `char[100]` | 0x2e0 | 0x2d8 | 0x2e0 | 0x43c | 0x2e0 |
| `off_event` | `char[100]` | 0x344 | 0x33c | 0x344 | 0x4a0 | 0x344 |
| `sound` | `char[100]` | 0x3a8 | 0x3a0 | 0x3a8 | 0x504 | 0x3a8 |
| `momentary_flag` | `int` | 0x40c | 0x404 | 0x40c | 0x568 | 0x40c |
| `linked_lever` | `CLever*` | 0x410 | 0x408 | 0x410 | 0x56c | 0x410 |
| `end_vertex_index` | `int` | 0x414 | 0x40c | 0x414 | 0x570 | 0x414 |
| `moving` | `int` | 0x418 | 0x410 | 0x418 | 0x574 | 0x418 |
| `move_to_pct` | `float` | 0x41c | 0x414 | 0x41c | 0x578 | 0x41c |
| `rule` | `CRuleList` | 0x420 | 0x418 | 0x420 |  | 0x420 |
| `allowed_sides` | `ELeverOpenSides` | 0x80c | 0x804 | 0x80c | 0x968 | 0x80c |
| `enable_collision` | `int` | 0x810 | 0x808 | 0x810 | 0x96c | 0x810 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x158+0x15c, 0x57c+0x3ec
