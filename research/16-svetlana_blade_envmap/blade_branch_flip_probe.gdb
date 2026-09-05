# Is the residual handle artefact a per-vertex UV-source flip?
#
# renderEnvMapTriangles picks each vertex's sphere-map source independently:
#
#   if (skip_normal_normalization == 0 || 1.0 <= ABS(n.x)
#                                      || 1.0 <= ABS(n.y)
#                                      || 1.0 <= ABS(n.z))
#        A: use the bone normal directly (already scaled to +/-0xFFFF)
#   else B: use the normalised eye-to-vertex direction
#
# skip_normal_normalization is 1 for Svetlana's whole render, so the branch is
# decided purely by whether any normal component reaches 1.0. The two sources
# are unrelated directions, so a vertex hovering at that threshold produces
# wildly different UVs from one frame to the next -- a localised, animated
# flicker, which is what the handle shows.
#
# This counts the A/B split per draw and, crucially, how many vertices sit NEAR
# the threshold (max |component| within a decade of 1.0). A stable all-A or
# all-B split means the branch is not the flicker; a nonzero near-threshold
# population that changes between samples means it is.
#
# Sampled every 15th env draw and capped to a few faces per sample -- gdb script
# loops are slow enough that instrumenting every vertex freezes the render loop.

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:60
commands
silent
set $q_call = $q_call + 1
if $q_call % 15 == 0
  set $q_a = 0
  set $q_b = 0
  set $q_near = 0
  set $q_f = 0
  set $q_nfaces = count
  if $q_nfaces > 24
    set $q_nfaces = 24
  end
  while $q_f < $q_nfaces
    set $q_v = 0
    while $q_v < 3
      set $q_idx = 0
      if $q_v == 0
        set $q_idx = face_data[$q_f].vertex_indices.vertex_index_0
      end
      if $q_v == 1
        set $q_idx = face_data[$q_f].vertex_indices.vertex_index_1
      end
      if $q_v == 2
        set $q_idx = face_data[$q_f].vertex_indices.vertex_index_2
      end
      set $q_mx = g_VertexNormalArray[$q_idx].x
      if $q_mx < 0
        set $q_mx = -$q_mx
      end
      set $q_my = g_VertexNormalArray[$q_idx].y
      if $q_my < 0
        set $q_my = -$q_my
      end
      set $q_mz = g_VertexNormalArray[$q_idx].z
      if $q_mz < 0
        set $q_mz = -$q_mz
      end
      set $q_m = $q_mx
      if $q_my > $q_m
        set $q_m = $q_my
      end
      if $q_mz > $q_m
        set $q_m = $q_mz
      end
      if $q_m >= 1.0
        set $q_a = $q_a + 1
      end
      if $q_m < 1.0
        set $q_b = $q_b + 1
      end
      if $q_m > 0.1 && $q_m < 10.0
        set $q_near = $q_near + 1
      end
      set $q_v = $q_v + 1
    end
    set $q_f = $q_f + 1
  end
  printf "[BRANCH call=%d faces=%d] A(normal)=%d B(eye)=%d near-threshold=%d\n", $q_call, $q_nfaces, $q_a, $q_b, $q_near
end
cont
end

printf "branch-flip probe armed (sampled 1-in-15 draws, 24 faces each)\n"
