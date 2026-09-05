# How many triangles draw their three UVs from DIFFERENT sphere maps?
#
# renderEnvMapTriangles picks each vertex's UV source independently:
#   A: the bone normal, already scaled to +/-0xFFFF
#   B: the normalised eye-to-vertex direction
# These are unrelated directions. A triangle with a mix of A and B vertices
# interpolates between two different sphere maps, so its UVs sweep across an
# arbitrary span of the env map -- garbage on that triangle specifically, while
# its all-A and all-B neighbours look fine.
#
# Per-vertex normals were measured stable across draws (index 9 always a real
# animating normal, index 6 always ~0), so the A/B assignment is spatial. What
# matters is therefore the MIXED triangle count, not the raw A/B ratio.
#
# NOTE: break at line 24 (captureTexture, before the face loop) so face_data is
# still the base pointer. Breaking at line 60 samples a sliding window of faces
# because face_data advances each iteration -- that produces wildly varying
# counts that look like temporal flicker and are purely a probe artefact.

delete

set $q_call = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_call = $q_call + 1
if $q_call % 12 == 0
  set $q_m0 = 0
  set $q_m1 = 0
  set $q_m2 = 0
  set $q_m3 = 0
  set $q_f = 0
  set $q_nf = count
  while $q_f < $q_nf
    set $q_na = 0
    set $q_v = 0
    while $q_v < 3
      set $q_idx = face_data[$q_f].vertex_indices.vertex_index_0
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
        set $q_na = $q_na + 1
      end
      set $q_v = $q_v + 1
    end
    if $q_na == 0
      set $q_m0 = $q_m0 + 1
    end
    if $q_na == 1
      set $q_m1 = $q_m1 + 1
    end
    if $q_na == 2
      set $q_m2 = $q_m2 + 1
    end
    if $q_na == 3
      set $q_m3 = $q_m3 + 1
    end
    set $q_f = $q_f + 1
  end
  printf "[MIX call=%d faces=%d] allB=%d allA=%d MIXED(1A)=%d MIXED(2A)=%d\n", $q_call, $q_nf, $q_m0, $q_m3, $q_m1, $q_m2
end
cont
end

printf "mixed-triangle probe armed (whole face list, sampled 1-in-12 draws)\n"
