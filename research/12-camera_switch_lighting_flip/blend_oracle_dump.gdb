# Capture one exact input->output pair for the lightmap blend, to validate a
# reimplementation offline before any shader work exists.
#
# Step 1 of the shader migration is a per-pixel lightmap post-pass (see
# [[shader-renderer-modernization-goal]]). Before writing GLSL, reproduce the
# MMX blend in Python from real inputs and check it matches the real output.
#
# CAPTURE ON THE CALLER SIDE, at line 133 -- the statement AFTER the
# blendHBilerp call at line 116. Two earlier attempts failed for capture-timing
# reasons, both worth remembering:
#
#   1. Dumping the grids at compositeLightmapToFramebuffer's ENTRY reads the
#      PREVIOUS frame's data: the composite calls blurCoronaBufferAndClearEdges
#      as its first action, and that is what fills g_CoronaBlurWorkBuffer. It
#      produced a convincing ~33% match that was pure coincidence, because the
#      dark region only contains a handful of distinct values.
#   2. Dumping the blend's output at the NEXT call's entry did not reliably give
#      the finished row either.
#
# Breaking in the caller after the call fixes both: the blend has returned, the
# grids have been blurred, and output_buffer / texture_buffer / texture_indices
# / lightmap_indices are all still live caller locals pointing at exactly the
# row the composite just processed. No addressing assumptions of my own.
#
# Line 116 is the EVEN-row, scale_factor==2 path
# (blendHBilerpLightmapSharedU64toU64pBB12Px2MMX, FUN_004917bc):
#   one iteration consumes ONE index pair and emits TWO pixels (one u64)
#   lm_idx   = lightmap_indices[0] + (texture_indices[1] >> 1)
#   pal_byte = p0 for the first pixel, (p0 + p1) >> 1 for the second
#
# Take the 50th visit so it is a mid-screen row with real content.

delete

set $q_n = 0

break CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270.keep.cpp:133
commands
silent
set $q_n = $q_n + 1
if $q_n == 50
  printf "=== row loop visit 50: out=%p tex=%p texidx=%p lmidx=%p width=%d scale=%d\n", output_buffer, texture_buffer, texture_indices, lightmap_indices, this_ptr->framebuffer_width, this_ptr->scale_factor
  printf "=== solid=0x%x bias1=0x%llx bias2=0x%llx\n", g_SolidColorMode, g_LightmapBlendBias1.mm, g_LightmapBlendBias2.mm
  dump binary memory /tmp/altfocus/tbl_lmdata.bin (char*)g_LightmapData ((char*)g_LightmapData)+4096
  dump binary memory /tmp/altfocus/tbl_palette.bin (char*)g_LightmapTexturePalette ((char*)g_LightmapTexturePalette)+1024
  eval "dump binary memory /tmp/altfocus/in_src_row100.bin (char*)texture_buffer ((char*)texture_buffer)+%d", this_ptr->framebuffer_width * 4
  eval "dump binary memory /tmp/altfocus/out_row100.bin (char*)output_buffer ((char*)output_buffer)+%d", this_ptr->framebuffer_width * 4
  eval "dump binary memory /tmp/altfocus/in_texidx_row.bin (char*)texture_indices ((char*)texture_indices)+%d", this_ptr->framebuffer_width / 2 + 2
  eval "dump binary memory /tmp/altfocus/in_lmidx_row.bin (char*)lightmap_indices ((char*)lightmap_indices)+%d", this_ptr->framebuffer_width / 2 + 2
  printf "=== dumped oracle (post-blend, caller side)\n"
  disable
end
cont
end

printf "blend oracle dump armed (caller side, after the blend)\n"
