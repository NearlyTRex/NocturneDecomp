# CStrList

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 16 | fields | 16 |
| nocturne | 16 | fields | 16 |
| bw1 | 16 | fields | 16 |
| blairwitch2 | 16 | fields | 16 |
| bw3 | 16 | fields | 16 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `item_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `capacity` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `data_array` | `char**` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `vtable` | `UStrListVTable` | 0xc | 0xc | 0xc | 0xc | 0xc |
