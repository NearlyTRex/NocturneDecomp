# CMoloch

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 142232 | fields | 142232 |
| nocturne | 141824 | fields | 141824 |
| bw1 | 143456 | fields | 143456 |
| blairwitch2 | 165380 | fields | 165380 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 |  |  |
| `model` | `CDeformableModelInstance` | 0x1fbd4 | 0x1fa3c |  | 0x25640 |
| `in_human_form` | `int` | 0x21e88 | 0x21cf0 | 0x22350 | 0x278f4 |
| `morphing` | `int` | 0x21e8c | 0x21cf4 | 0x22354 | 0x278f8 |
| `morph_timer` | `float` | 0x21e90 | 0x21cf8 | 0x22358 | 0x278fc |
| `human_to_demon_condition` | `char[100]` | 0x21e94 | 0x21cfc | 0x2235c | 0x27900 |
| `demon_to_human_condition` | `char[100]` | 0x21ef8 | 0x21d60 | 0x223c0 | 0x27964 |
| `morph` | `CMorph` | 0x21f5c | 0x21dc4 |  | 0x279c8 |
| `dead1` | `int` | 0x22b88 | 0x229f0 | 0x23050 | 0x285f4 |
| `aim_yaw` | `float` | 0x22b8c | 0x229f4 | 0x23054 | 0x285f8 |
| `dead2` | `int` | 0x22b90 | 0x229f8 | 0x23058 | 0x285fc |
| `dead3` | `int` | 0x22b94 | 0x229fc | 0x2305c | 0x28600 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x0+0x22350, 0x22424+0xc2c
- **blairwitch2**: 0x0+0x25640
