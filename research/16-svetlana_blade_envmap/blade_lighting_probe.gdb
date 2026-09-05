# Svetlana's blades — is the artefact the MIXED vertex lighting?
#
# skip_normal_normalization has three consumers, not two. Besides the two blocks
# in renderEnvMapTriangles it also gates a branch in CDemonSet::lightVerticies
# that decides how each vertex is COLOURED:
#
#   if (1.0 <= |n.x| || 1.0 <= |n.y| || 1.0 <= |n.z|) {
#       normalise(n); surface_normal = &local_f4;        // fully lit
#   } else {
#       surface_normal = (CVector3i *)0x0;               // lit with NO normal
#   }
#   lightVertexColor(this, world_position, surface_normal, ...);
#
# On the blade pass that split measures 44 vertices lit with a normal against
# 184 lit without, so unrelated colours meet inside single triangles and are
# interpolated across them.
#
# This fits every bisect result so far: the emitted polygons carry the artefact
# (they are what shows the colour), forcing a flat texel did not help (the
# variation is in vertex colour, not the texture), and suppressing
# calculateSurfaceNormal did nothing (it is not involved).
#
# The test: clear skip_normal_normalization at the entry of both consumers, so
# every vertex takes the normalise-and-light path and the population is uniform.
#
#   garbage GONE     -> the mixed lighting is the cause
#   garbage REMAINS  -> vertex colour is not it either
#
# Note this also switches renderEnvMapTriangles' UV branch, so it is a test of
# the mechanism rather than a candidate fix.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $lt_n = 0

break core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
commands
silent
set $lt_n = $lt_n + 1
set this_ptr->skip_normal_normalization = 0
cont
end

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set this_ptr->skip_normal_normalization = 0
cont
end

printf "skip_normal_normalization forced to 0 in both consumers\n"
