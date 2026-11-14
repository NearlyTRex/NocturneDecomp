# SMRGLKeyframeModelOnDisk

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 344 | fields | — |
| nocturne | 344 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `header` | `SMRGLHeaderExtended` | 0x0 | 0x0 |
| `cycle_length` | `int` | 0xc | 0xc |
| `current_position` | `int` | 0x10 | 0x10 |
| `base_keyframes` | `uint` | 0x14 | 0x14 |
| `filenames` | `char[16][16]` | 0x18 | 0x18 |
| `loaded_frames` | `uint[16]` | 0x118 | 0x118 |
