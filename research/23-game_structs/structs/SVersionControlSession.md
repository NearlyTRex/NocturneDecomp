# SVersionControlSession

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 352 | fields | — |
| nocturne | 352 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `primary_username` | `char[32]` | 0x0 | 0x0 |
| `overwrite_own_choice` | `int` | 0x20 | 0x20 |
| `overwrite_writeable_choice` | `int` | 0x24 | 0x24 |
| `network_username` | `char[104]` | 0x28 | 0x28 |
| `password` | `char[104]` | 0x90 | 0x90 |
| `domain` | `char[80]` | 0xf8 | 0xf8 |
| `source_path` | `char[20]` | 0x148 | 0x148 |
| `session_handle` | `HANDLE` | 0x15c | 0x15c |
