# Svetlana's blades — is the artefact the SAMPLING or the BLEND?
#
# Bisect inside the overlay. renderEnvMapTriangles is left running, but every
# emitted vertex is forced to the same sphere-map texel, so the overlay becomes
# a flat tint with identical geometry, depth, blend mode and alpha.
#
#   garbage GONE     -> it is the sphere-map sampling: which texels the UVs
#                       select, or how they vary across a triangle
#   garbage REMAINS  -> sampling is innocent; it is the blend or the depth
#                       behaviour of the second draw
#
# Context: the UVs are already fully in range after the halving and clamp
# (0.00 % outside 0..0xFFFF, from 97 % as shipped) and the artefact survived
# that, so "out of range" is already ruled out — this asks whether ANY UV
# variation is involved.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $fl_n = 0

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:126
commands
silent
set $fl_n = $fl_n + 1
set SStack_118.vertices[0].texture_u = 0x800000
set SStack_118.vertices[1].texture_u = 0x800000
set SStack_118.vertices[2].texture_u = 0x800000
set SStack_118.vertices[0].texture_v = 0x800000
set SStack_118.vertices[1].texture_v = 0x800000
set SStack_118.vertices[2].texture_v = 0x800000
cont
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:130
commands
silent
set $fl_n = $fl_n + 1
set SStack_118.vertices[0].texture_u = 0x800000
set SStack_118.vertices[1].texture_u = 0x800000
set SStack_118.vertices[2].texture_u = 0x800000
set SStack_118.vertices[0].texture_v = 0x800000
set SStack_118.vertices[1].texture_v = 0x800000
set SStack_118.vertices[2].texture_v = 0x800000
cont
end

printf "flat-UV probe armed — overlay now samples one texel everywhere\n"
