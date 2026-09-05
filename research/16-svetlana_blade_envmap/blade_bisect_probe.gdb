# Svetlana's blades — is the discoloration the env-map pass at all?
#
# CSvetlana::renderOpaque draws her blades TWICE:
#   1. CCharacter::renderOpaque            — the normal opaque character pass
#   2. if (faceCount == 0 && g_PerspectiveReciprocal < 0x4000):
#        clear all visibility flags, re-enable only part_indices[0] and [1],
#        render_mode = 2, setBlendMode(0), setRenderAlpha(48000),
#        CCharacter::renderOpaque again    — the blade shine pass
#
# So the same triangles are rasterised twice at the same depth, which is a
# candidate for depth fighting independent of anything the sphere map does.
#
# This suppresses the env-map draw entirely by returning from
# renderEnvMapTriangles before it emits a polygon. It needs no rebuild.
#
#   discoloration GONE      -> the sphere-mapped overlay is the source, and the
#                              question is its UVs
#   discoloration REMAINS   -> the env map is innocent; the artefact belongs to
#                              the double opaque draw (depth fighting) or to
#                              something else in the second pass
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/16-svetlana_blade_envmap/blade_bisect_probe.gdb
#   ... look at the blades ...
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete
set confirm off

set $bis_n = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $bis_n = $bis_n + 1
return
cont
end

printf "env-map suppression armed — blades should now draw with NO sphere-map overlay\n"
