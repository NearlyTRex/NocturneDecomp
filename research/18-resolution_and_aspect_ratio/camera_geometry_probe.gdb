delete
set pagination off

# What geometry the camera derives for a given mode, and which height-conditional
# paths that selects.
#
# CDemonCamera::init clamps the camera height to 480, derives the width as
# height*4/3, then halves until the width is <= 320. Several code paths key off
# framebuffer_height against exactly 0x1e0 (480) rather than off the derived
# geometry -- precomputeNormals' edge detection runs only above it, and
# precomputeLight ignores its rect below it.
#
# Prints once per distinct mode. A bare `disable` would switch off every
# breakpoint in the session, not just this one.
set $last_w = -1
set $last_h = -1

break core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360
commands
silent
if g_WindowWidth != $last_w || g_WindowHeight != $last_h
  set $last_w = g_WindowWidth
  set $last_h = g_WindowHeight
  printf "[camera] screen=%dx%d fb=%dx%d display=%dx%d scale=%d iters=%d  edge_detect=%s  light_uses_rect=%s\n", \
    g_WindowWidth, g_WindowHeight, \
    this_ptr->framebuffer_width, this_ptr->framebuffer_height, \
    this_ptr->display_width, this_ptr->display_height, \
    this_ptr->scale_factor, g_CameraDownscaleIterations.bytes[0], \
    this_ptr->framebuffer_height > 479 ? "yes" : "NO", \
    this_ptr->framebuffer_height == 480 ? "yes" : "NO"
end
cont
end
