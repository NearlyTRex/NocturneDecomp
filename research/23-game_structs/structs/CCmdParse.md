# CCmdParse

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 8488 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `template_text` | `char*` | 0x0 |
| `cmd_name` | `char[100]` | 0x4 |
| `argument_text` | `char[100]` | 0x68 |
| `param_count` | `int` | 0xcc |
| `params` | `CCmdParm[10]` | 0xd0 |
| `remaining_text` | `char[200]` | 0x2060 |
