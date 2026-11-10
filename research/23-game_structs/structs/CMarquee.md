# CMarquee

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 444 | fields | 444 |
| nocturne | 436 | fields | 436 |
| bw1 | 444 | fields | 444 |
| blairwitch2 | 792 | fields | 792 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 |
| `course_name` | `char[32]` | 0x158 | 0x150 | 0x158 | 0x2b4 |
| `total_time` | `float` | 0x178 | 0x170 | 0x178 | 0x2d4 |
| `param` | `float` | 0x17c | 0x174 | 0x17c | 0x2d8 |
| `phase` | `int` | 0x180 | 0x178 | 0x180 | 0x2dc |
| `bounding_box` | `CBoundingBox3D` | 0x184 | 0x17c | 0x184 | 0x2e0 |
| `is_visible` | `int` | 0x19c | 0x194 | 0x19c | 0x2f8 |
| `type` | `EMarqueeDisplayType` | 0x1a0 | 0x198 | 0x1a0 | 0x2fc |
| `course` | `CCourse` | 0x1a4 | 0x19c | 0x1a4 | 0x300 |
| `dead` | `char[12]` | 0x1b0 | 0x1a8 | 0x1b0 | 0x30c |
