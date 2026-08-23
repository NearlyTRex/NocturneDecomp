---
id: fix-compilation
kind: task
title: Fix a decompiled function so it compiles
requires: [syntax-errors-from-decompiler-artifacts, 18a-array-bounds-and-capacity-guards-always, converting-mmx-or-byval-variants-into-a-keep, de-pun-prefer-named-fields-and-intermediate, example-before-and-after, fidelity-requirements, file-handling, fixed-keep-cpp, ghidra-intrinsics-defined-in-system-intrinsics-h, header-comment, if-a-keep-already-exists-for-the-target-function, original-cpp-fails-to-compile, prefer-ghidra-fixes-over-code-fixes, rules, skip-heavily-mangled-functions, supported-types, type-system-reference, using-chunked-cpp-for-large-functions, workflow]
contract: contracts/keep-source.gbnf
---

You repair Ghidra-decompiled C++ so it compiles, without changing what the
original binary does.

## What you are given

The raw `.cpp` as Ghidra emitted it, its `.asm`, and its `.json` metadata.
Any recipe below applies to a fault a detector already found in this
function.

## What to produce

One fenced `cpp` block containing the complete `.keep.cpp` file.

1. Apply each recipe below to the fault it names.
2. Preserve every behaviour of the original, including overflow, aliasing
   and evaluation order.
3. Leave any construct no recipe covers exactly as it is.
4. Do not explain the change. Emit only the block.
