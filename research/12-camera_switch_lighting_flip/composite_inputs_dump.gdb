# Bisect the composite's inputs: software vs accelerated.
#
# The window is over-lit on EVERY accelerated frame (ours 20.53/max 56 against
# retail 19.50/29 and our own software 19.50/28), so this needs no alt-tab and
# no timing -- it is a steady-state difference.
#
# compositeLightmapToFramebuffer has three inputs and one output:
#     source  camera->framebuffer_aligned      (the rendered image)
#     lightmap g_CoronaBlurWorkBuffer          (320-wide light indices)
#     fog      g_CameraPlaneWorkBuffer.pixels  (320-wide plane indices)
#     output   g_ScreenBufferArray             (already compared via frontbuffer)
#
# Dump all three at the composite, in each renderer, and diff them offline.
# Whichever first differs localises the fault with no hypothesis needed:
#   source differs   -> the scene is rendered brighter; look upstream of the composite
#   lightmap differs -> addLightmapToCorona / processCorona produce more light
#   all identical    -> the composite's OUTPUT is fine too and the excess is added
#                       after it, i.e. in the DLL / GL layer
#
# One-shot: dumps once and disarms, so it costs a single frame.
# Pass the output prefix in $q_tag before sourcing, e.g.
#   dbg.sh cmd 'set $q_tag = 1'   (1 = software, 2 = accel)

delete

set $q_done = 0

break core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
commands
silent
if $q_done == 0
  set $q_done = 1
  printf "=== composite: fb=%dx%d scale=%d bpp=%d d3d=%d ext=%d shakeX=%d shakeY=%d downscale=%d\n", this_ptr->framebuffer_width, this_ptr->framebuffer_height, this_ptr->scale_factor, g_BitsPerPixel, g_UseDirect3D, g_UseExternalRenderer, g_CameraShakeOffsetX, g_CameraShakeOffsetY, g_CameraDownscaleIterations.bytes[0]
  eval "dump binary memory /tmp/altfocus/src_%d.bin (char*)this_ptr->framebuffer_aligned ((char*)this_ptr->framebuffer_aligned)+%d", $q_tag, this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4
  eval "dump binary memory /tmp/altfocus/lm_%d.bin (char*)g_CoronaBlurWorkBuffer ((char*)g_CoronaBlurWorkBuffer)+76800", $q_tag
  eval "dump binary memory /tmp/altfocus/fog_%d.bin (char*)g_CameraPlaneWorkBuffer.pixels ((char*)g_CameraPlaneWorkBuffer.pixels)+76800", $q_tag
  printf "=== dumped src_%d.bin lm_%d.bin fog_%d.bin\n", $q_tag, $q_tag, $q_tag
  disable
end
cont
end

printf "composite-input dump armed (one-shot). Set $q_tag first: 1=software, 2=accel\n"
