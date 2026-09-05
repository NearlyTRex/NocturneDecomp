# How far apart are a triangle's three sphere-map UVs?
#
# This is the objective measure of the artefact. A triangle whose vertices draw
# their UVs from the same mapping spans a small patch of the env map; one that
# mixes the bone normal with the eye-to-vertex direction interpolates between
# two unrelated mappings and sweeps an arbitrary span of it -- the smear.
#
# Measured before the fix: 14 of 78 triangles were mixed-source. With the
# fallback changed to the triangle's own face normal (same +/-0xFFFF space as
# the primary branch), every vertex of a triangle should now land in one
# mapping, so the wide-spread population should collapse.
#
# Break at line 168, the write-back loop, where local_d0[0..2] / local_90[0..2]
# hold the final coordinates for all three vertices (after the seam fixup).
# Units are 0..0xFFFF across the texture, so a spread of 0x4000 is a quarter of
# the whole env map on one triangle -- far more than any sane blade facet.

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:168
commands
silent
set $q_n = $q_n + 1
set $q_du = local_d0[0] - local_d0[1]
if $q_du < 0
  set $q_du = -$q_du
end
set $q_d2 = local_d0[0] - local_d0[2]
if $q_d2 < 0
  set $q_d2 = -$q_d2
end
if $q_d2 > $q_du
  set $q_du = $q_d2
end
set $q_d2 = local_d0[1] - local_d0[2]
if $q_d2 < 0
  set $q_d2 = -$q_d2
end
if $q_d2 > $q_du
  set $q_du = $q_d2
end
set $q_dv = local_90[0] - local_90[1]
if $q_dv < 0
  set $q_dv = -$q_dv
end
set $q_d3 = local_90[0] - local_90[2]
if $q_d3 < 0
  set $q_d3 = -$q_d3
end
if $q_d3 > $q_dv
  set $q_dv = $q_d3
end
set $q_d3 = local_90[1] - local_90[2]
if $q_d3 < 0
  set $q_d3 = -$q_d3
end
if $q_d3 > $q_dv
  set $q_dv = $q_d3
end
set $q_m = $q_du
if $q_dv > $q_m
  set $q_m = $q_dv
end
if $q_m > 0x4000
  set $q_wide = $q_wide + 1
end
if $q_m > 0x2000
  set $q_mid = $q_mid + 1
end
if $q_m > $q_max
  set $q_max = $q_m
end
set $q_sum = $q_sum + $q_m
cont
end

set $q_n = 0
set $q_wide = 0
set $q_mid = 0
set $q_max = 0
set $q_sum = 0

printf "UV-spread probe armed. Read with:\n"
printf "  dbg.sh cmd 'printf \"tris=%%d wide(>0x4000)=%%d mid(>0x2000)=%%d max=0x%%x mean=0x%%x\\n\", $q_n, $q_wide, $q_mid, $q_max, $q_sum/$q_n'\n"
