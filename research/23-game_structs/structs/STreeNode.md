# STreeNode

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | — |
| nocturne | 28 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `left_child` | `STreeNode*` | 0x0 | 0x0 |
| `right_child` | `STreeNode*` | 0x4 | 0x4 |
| `node_type` | `int` | 0x8 | 0x8 |
| `data1` | `UTreeNodeData` | 0xc | 0xc |
| `data2` | `UTreeNodeData` | 0x10 | 0x10 |
| `data3` | `UTreeNodeData` | 0x14 | 0x14 |
| `data4` | `UTreeNodeData` | 0x18 | 0x18 |
