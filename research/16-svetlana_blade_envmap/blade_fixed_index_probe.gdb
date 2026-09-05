# Does a FIXED vertex index keep its normal across draws?
#
# The previous probe broke inside the per-face loop, so each sample was a
# different face -- it showed the population is bimodal but could not show
# whether any single vertex is stable.
#
# Break once per env draw instead (line 24, the captureTexture call, before the
# face loop) and print the same three indices every time.
#
#   stable values  => g_VertexNormalArray really holds these vertices' normals,
#                     the >= 1.0 validity test is meaningful, and the flicker is
#                     something else
#   values churning for a fixed index => the array is not filled for this pass
#                     and branch A is trusting another model's leftovers
#
# Indices 9 and 12 measured huge (branch A); 6 measured ~0 (branch B). Watching
# one of each separates "this vertex has a normal" from "this slot happens to
# hold a normal right now".

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_call = $q_call + 1
if $q_call % 8 == 0
  printf "[FIX call=%d] v9=(%g,%g,%g) v12=(%g,%g,%g) v6=(%g,%g,%g)\n", $q_call, g_VertexNormalArray[9].x, g_VertexNormalArray[9].y, g_VertexNormalArray[9].z, g_VertexNormalArray[12].x, g_VertexNormalArray[12].y, g_VertexNormalArray[12].z, g_VertexNormalArray[6].x, g_VertexNormalArray[6].y, g_VertexNormalArray[6].z
end
cont
end

printf "fixed-index normal probe armed\n"
