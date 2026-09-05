# Who writes the slots renderEnvMapTriangles reads?
#
# g_VertexNormalArray is a shared scratch array indexed by vertex index within
# the CURRENT model's buffer, and lightVerticies is called for every model in
# the frame. So a slot the blade pass reads may have been written by the blade's
# own lighting call, or left behind by whatever model was lit before it.
#
# That distinction is the whole question:
#   written by the blade's own call  -> the bimodal population is by design and
#                                       the >= 1.0 discriminator is meaningful
#   left over from another model     -> branch A is trusting another model's
#                                       normals, and the 14 mixed triangles are
#                                       a real bug
#
# Index 9 reads as a large float (branch A); index 6 reads ~0 (branch B).
# Watch index 9 and report the writer. Burst-limited and self-disabling: a
# watchpoint on a per-model scratch array fires constantly.

delete

set $q_w = 0

watch -l g_VertexNormalArray[9].x
commands
silent
set $q_w = $q_w + 1
if $q_w <= 10
  # NOTE: do not print $_old/$_new here -- they do not cast to float on this
  # watchpoint and the failed printf aborts the commands block before `cont`,
  # freezing the game at the watchpoint.
  printf "=== write #%d to g_VertexNormalArray[9].x, now %g\n", $q_w, g_VertexNormalArray[9].x
  where 3
end
if $q_w > 10
  disable
  printf "=== watchpoint disabled after %d writes\n", $q_w
end
cont
end

printf "normal-writer watchpoint armed on g_VertexNormalArray[9].x\n"
