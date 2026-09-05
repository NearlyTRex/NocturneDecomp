# Does the env pass index past what the preceding lighting pass filled?
#
# g_VertexNormalArray is shared scratch. lightVerticies does:
#     memset(g_VertexNormalArray, 0, vertex_count * sizeof(CVector3f));
#     ... accumulate face normals into the slots its own faces reference ...
# so exactly `vertex_count` entries belong to that model. Anything above it
# still holds the previous model's normals -- and those are +/-0xFFFF scale, so
# they sail through renderEnvMapTriangles' `1.0 <= ABS(n)` validity test and are
# used as if they were this vertex's normal.
#
# Watchpoint evidence for the sharing (same slot, one frame):
#   lightVerticies(vertex_count=54)   <- CCloth::render <- CSvetlana::renderOpaque
#   memset at lightVerticies:209
#   lightVerticies(vertex_count=436)  <- CDeformableModel::lightVertices
#
# Record the vertex_count of every lightVerticies call, then at the env draw
# scan the face list for the largest vertex index actually used. If that index
# exceeds the last vertex_count, the surplus vertices are reading another
# model's normals and that is the defect behind the 14 mixed triangles.

delete

set $q_lastvc = -1
set $q_call   = 0


break core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
commands
silent
set $q_lastvc = vertex_count
cont
end

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_call = $q_call + 1
if $q_call % 20 == 0
  set $q_max = -1
  set $q_min = 999999
  set $q_over = 0
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
      if $q_idx > $q_max
        set $q_max = $q_idx
      end
      if $q_idx < $q_min
        set $q_min = $q_idx
      end
      if $q_idx >= $q_lastvc
        set $q_over = $q_over + 1
      end
      set $q_v = $q_v + 1
    end
    set $q_f = $q_f + 1
  end
  printf "[RANGE call=%d faces=%d] idx=[%d..%d]  last lightVerticies vertex_count=%d  ABOVE IT: %d of %d\n", $q_call, count, $q_min, $q_max, $q_lastvc, $q_over, count*3
end
cont
end

printf "index-range probe armed\n"
