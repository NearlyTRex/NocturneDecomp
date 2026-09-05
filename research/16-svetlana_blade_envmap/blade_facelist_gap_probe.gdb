# Does the env pass render vertices the lighting pass never lit?
#
# Measured: the covering lightVerticies call (vertex_count=538, tri_count=1208,
# triangles) references NONE of 496/510/511/529 in its face list, which is why
# they stay at the memset zero. Cancellation is ruled out -- there was nothing
# to cancel.
#
# That is only the explanation for the artefact if renderEnvMapTriangles' own
# face list *does* use those vertices. Check it: scan the env pass's faces and
# report which of the dead vertices appear and how often.
#
#   they appear -> the env pass renders geometry the lighting pass did not
#                  cover, so those vertices have no normal, fall to branch B,
#                  and produce the mixed-source triangles. The two face lists
#                  disagree (the body is lit at lod_index=2 while the env pass
#                  draws part_indices[0..1]) and that is the defect.
#   absent      -> the dead vertices are irrelevant and the mixed triangles come
#                  from some other vertex entirely; re-derive which.
#
# One-shot per draw size, cheap: 78 faces x 3 indices.

delete

set $q_done = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
if $q_done < 2
  set $q_done = $q_done + 1
  set $q_n496 = 0
  set $q_n510 = 0
  set $q_n511 = 0
  set $q_n529 = 0
  set $q_dead = 0
  set $q_live = 0
  set $q_f = 0
  while $q_f < count
    set $q_v = 0
    while $q_v < 3
      set $q_idx = face_data[$q_f].vertex_indices.vertex_index_0
      if $q_v == 1
        set $q_idx = face_data[$q_f].vertex_indices.vertex_index_1
      end
      if $q_v == 2
        set $q_idx = face_data[$q_f].vertex_indices.vertex_index_2
      end
      if $q_idx == 496
        set $q_n496 = $q_n496 + 1
      end
      if $q_idx == 510
        set $q_n510 = $q_n510 + 1
      end
      if $q_idx == 511
        set $q_n511 = $q_n511 + 1
      end
      if $q_idx == 529
        set $q_n529 = $q_n529 + 1
      end
      if g_VertexNormalArray[$q_idx].x == 0 && g_VertexNormalArray[$q_idx].y == 0 && g_VertexNormalArray[$q_idx].z == 0
        set $q_dead = $q_dead + 1
      end
      if g_VertexNormalArray[$q_idx].x != 0 || g_VertexNormalArray[$q_idx].y != 0 || g_VertexNormalArray[$q_idx].z != 0
        set $q_live = $q_live + 1
      end
      set $q_v = $q_v + 1
    end
    set $q_f = $q_f + 1
  end
  printf "[ENV faces=%d] uses of dead verts: 496 x%d, 510 x%d, 511 x%d, 529 x%d\n", count, $q_n496, $q_n510, $q_n511, $q_n529
  printf "               vertex refs with NO normal: %d of %d  (with a normal: %d)\n", $q_dead, count*3, $q_live
end
cont
end

printf "face-list gap probe armed\n"
