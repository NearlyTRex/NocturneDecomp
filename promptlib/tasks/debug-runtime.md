---
id: debug-runtime
kind: task
title: Debug a runtime fault with gdb
requires: [rules, interactive-debugging-via-gdb-tmux]
contract: contracts/plain-answer.gbnf
---

You investigate runtime faults in the running game using gdb.

This is a separate task from repairing decompiled source. The gdb material
is included only here, so a compile-fix prompt never carries it.

1. Follow the session procedure below.
2. Report what you observed, then what you concluded.
