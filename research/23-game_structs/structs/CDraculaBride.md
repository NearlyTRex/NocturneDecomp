# CDraculaBride

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 49132 | fields | 49132 |
| nocturne | 48724 | fields | 48724 |
| bw1 | 50192 | fields | 50192 |
| blairwitch2 | 68648 | fields | 68648 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `part_indices` | `int[9]` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `rise_event` | `char[100]` | 0xbee0 | 0xbd48 | 0xc28c | 0x10b1c |
| `freaky_voice_number` | `int` | 0xbf44 | 0xbdac | 0xc2f0 | 0x10b80 |
| `mist_state` | `int` | 0xbf48 | 0xbdb0 | 0xc2f4 | 0x10b84 |
| `vanish_timer` | `float` | 0xbf4c | 0xbdb4 | 0xc2f8 | 0x10b88 |
| `freaky_timer` | `float` | 0xbf50 | 0xbdb8 | 0xc2fc | 0x10b8c |
| `action_delay` | `float` | 0xbf54 | 0xbdbc | 0xc300 | 0x10b90 |
| `new_pos` | `CVector3f` | 0xbf58 | 0xbdc0 | 0xc304 | 0x10b94 |
| `attack_landed` | `int` | 0xbf64 | 0xbdcc | 0xc310 | 0x10ba0 |
| `part_count` | `int` | 0xbf68 | 0xbdd0 | 0xc314 | 0x10ba4 |
| `part_list` | `CBodyPart*[30]` | 0xbf6c | 0xbdd4 | 0xc318 | 0x10ba8 |
| `exploded` | `int` | 0xbfe4 | 0xbe4c | 0xc408 | 0x10c20 |
| `fade_timer` | `float` | 0xbfe8 | 0xbe50 | 0xc40c | 0x10c24 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc390+0x78
