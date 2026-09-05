# Is the env pass's normal data being clobbered, or was it never written?
#
# Two competing explanations for slots 495..529 reading ~0 at the env draw:
#
#   (a) CLOBBERED -- another model's lightVerticies call ran in between and
#       memset/overwrote them. Splitting g_VertexNormalArray so the env pass
#       has its own scratch would fix it.
#   (b) NEVER WRITTEN -- the lighting call that covers this range accumulates
#       over a different face list than the env pass renders (the body is lit at
#       lod_index=2, the env pass draws part_indices[0..1]), so those vertices
#       stay at the memset zero. Splitting the scratch would change nothing.
#
# Trace the nonzero population of 495..529 through the frame: at every big
# lightVerticies call (entry, so it reports the state left by the PREVIOUS call)
# and at the env draw. The sequence separates the two.
#
#   high after the covering call, low at the env draw   -> (a) clobbered
#   low throughout                                      -> (b) never written

delete

set $q_seq = 0

break core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
commands
silent
if vertex_count > 400
  set $q_seq = $q_seq + 1
  if $q_seq < 40
    set $q_nz = 0
    set $q_i = 495
    while $q_i <= 529
      if g_VertexNormalArray[$q_i].x != 0 || g_VertexNormalArray[$q_i].y != 0 || g_VertexNormalArray[$q_i].z != 0
        set $q_nz = $q_nz + 1
      end
      set $q_i = $q_i + 1
    end
    printf "  LIGHT vc=%d tri=%d vpf=%d : nonzero(495..529) on ENTRY = %d/35\n", vertex_count, tri_count, vertices_per_face, $q_nz
  end
end
cont
end

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_seq = $q_seq + 1
if $q_seq < 40
  set $q_nz = 0
  set $q_i = 495
  while $q_i <= 529
    if g_VertexNormalArray[$q_i].x != 0 || g_VertexNormalArray[$q_i].y != 0 || g_VertexNormalArray[$q_i].z != 0
      set $q_nz = $q_nz + 1
    end
    set $q_i = $q_i + 1
  end
  printf "ENV   faces=%d : nonzero(495..529) = %d/35\n", count, $q_nz
end
cont
end

printf "scratch-clobber probe armed\n"
