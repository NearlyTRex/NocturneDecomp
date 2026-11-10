# CObj

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | 28 |
| nocturne | 28 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `vertex_count` | `int` | 0x0 | 0x0 |
| `vertex_data` | `CVert*` | 0x4 | 0x4 |
| `poly_count` | `int` | 0x8 | 0x8 |
| `poly_array` | `CPoly*` | 0xc | 0xc |
| `flags` | `int` | 0x10 | 0x10 |
| `is_valid` | `int` | 0x14 | 0x14 |
| `vtable` | `CObj_vtable*` | 0x18 | 0x18 |
