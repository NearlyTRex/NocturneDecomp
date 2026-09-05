# WHICH of the blade's vertices come out of the lighting pass unwritten?
#
# Established: nothing clobbers 495..529 between lightVerticies and the env
# draw -- the vc=538 call memsets all 35 and its accumulate loop refills only
# 27..31, and the env pass reads exactly that. So a handful of the blade's
# vertices are never accumulated, fall to branch B while their neighbours use
# branch A, and produce the 14 mixed triangles.
#
# The shape of the miss says what to look at next:
#   contiguous tail (e.g. 522..529) -> a count/range problem in the lighting
#                                      call's face list
#   scattered                       -> those vertices are only referenced by
#                                      faces whose normal accumulates to zero
#                                      (degenerate/zero-area), or by faces the
#                                      lighting list does not contain at all

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_call = $q_call + 1
if $q_call % 25 == 0
  printf "zero slots in 495..529:"
  set $q_i = 495
  set $q_n = 0
  while $q_i <= 529
    if g_VertexNormalArray[$q_i].x == 0 && g_VertexNormalArray[$q_i].y == 0 && g_VertexNormalArray[$q_i].z == 0
      printf " %d", $q_i
      set $q_n = $q_n + 1
    end
    set $q_i = $q_i + 1
  end
  printf "   (%d of 35)\n", $q_n
end
cont
end

printf "zero-slot probe armed\n"
