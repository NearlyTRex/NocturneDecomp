delete
set pagination off

set $p_frame = 0
set $p_scene = 0
set $p_banner = 0
set $p_geom = 0

# Scene render — the only thing that repaints the banner's pixels.
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
set $p_scene = $p_scene + 1
cont
end

# Geometry pass, in case renderScene runs but paints nothing.
break core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
commands
silent
set $p_geom = $p_geom + 1
cont
end

# The death banner draw. Reports position and scale per call, so a second
# call in one frame is distinguishable from one call per frame.
break nocturne_ui_draw_text
commands
silent
if text[0] == 'Y' || text[0] == 'W'
  set $p_banner = $p_banner + 1
  printf "[BANNER f=%d n=%d] x=%d y=%d scale=%d text='%s'\n", $p_frame, $p_banner, x, y, scale, text
end
cont
end

# Iris state at the point it wipes the buffer.
break core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0
commands
silent
if g_IrisFadeType != 0
  printf "[IRIS  f=%d] type=%d radius=%g cx=%d cy=%d\n", $p_frame, g_IrisFadeType, g_IrisFadeRadius, g_IrisFadeCenterX, g_IrisFadeCenterY
end
cont
end

# Frame boundary. Prints only on frames that drew a banner, so the log stays
# readable; scene=0 with banner=1 is the accumulation case.
break engine_special_cpp_unlockFrame_FUN_005b7250
commands
silent
set $p_frame = $p_frame + 1
if $p_banner > 0
  printf "[FRAME %d] scene=%d geom=%d banner=%d iris=%d bpp=%d\n", $p_frame, $p_scene, $p_geom, $p_banner, g_IrisFadeType, g_BitsPerPixel
end
set $p_scene = 0
set $p_geom = 0
set $p_banner = 0
cont
end
