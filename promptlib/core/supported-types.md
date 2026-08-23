---
id: supported-types
kind: rule
title: Supported types
requires: [type-system-reference]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

`char`, `uchar`, `short`, `ushort`, `int`, `uint`, `float`, `double`, `bool`, `void *`

Avoid: `const`, `long double`, `volatile`, `register`, `static`, `inline`
