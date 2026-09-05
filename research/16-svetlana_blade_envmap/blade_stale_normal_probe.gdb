# Are the normals the env pass reads actually this pass's normals?
#
# The A/B branch split swings wildly between draws over the same faces, and no
# normal component ever lands between 0.1 and 10 -- the population is bimodal,
# ~0 or ~65535. That is not a value drifting across the 1.0 validity test; it
# is the same vertex index reading a different entry's worth of data each time.
#
# renderEnvMapTriangles indexes g_VertexNormalArray by the face's vertex index,
# but the pass only renders two parts of the model. If the array is not filled
# for those indices on this pass, branch A ("the normal looks pre-scaled, so
# trust it") fires on leftovers from whatever geometry was transformed before --
# a valid-looking +/-0xFFFF direction belonging to a different vertex.
#
# Print the SAME face's three vertex indices and their normals on consecutive
# sampled draws. Stable values => the normals are this pass's and the branch
# test is meaningful. Values changing for a fixed index => stale data, and the
# validity test is being passed by garbage.

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:60
commands
silent
set $q_call = $q_call + 1
if $q_call % 15 == 0
  set $q_i0 = face_data[0].vertex_indices.vertex_index_0
  set $q_i1 = face_data[0].vertex_indices.vertex_index_1
  set $q_i2 = face_data[0].vertex_indices.vertex_index_2
  printf "[NRM call=%d cnt=%d] v%d=(%g,%g,%g) v%d=(%g,%g,%g) v%d=(%g,%g,%g)\n", $q_call, count, $q_i0, g_VertexNormalArray[$q_i0].x, g_VertexNormalArray[$q_i0].y, g_VertexNormalArray[$q_i0].z, $q_i1, g_VertexNormalArray[$q_i1].x, g_VertexNormalArray[$q_i1].y, g_VertexNormalArray[$q_i1].z, $q_i2, g_VertexNormalArray[$q_i2].x, g_VertexNormalArray[$q_i2].y, g_VertexNormalArray[$q_i2].z
  printf "                    tv%d=(%d,%d,%d)\n", $q_i0, g_TransformedVertexArray[$q_i0].x, g_TransformedVertexArray[$q_i0].y, g_TransformedVertexArray[$q_i0].z
end
cont
end

printf "stale-normal probe armed (same face, sampled 1-in-15 draws)\n"
