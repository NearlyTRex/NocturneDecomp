---
id: counter-pass-pattern
kind: rule
title: Counter-pass pattern
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

When the question is "where in this chain does control die" or "is function X reachable at all," set silent counter breakpoints on every link and let the program run for a few seconds:

```gdb
delete
set $rs_cnt = 0
set $bd_cnt = 0
set $cf_cnt = 0
set $scan_cnt = 0

break renderScene
commands
silent
set $rs_cnt = $rs_cnt + 1
cont
end

break buildDisplayList
commands
silent
set $bd_cnt = $bd_cnt + 1
cont
end
