delete
set pagination off

# g_CoronaLeftExtent is shared by two producers that disagree about the sentinel
# meaning "this row is empty":
#
#   renderLightCoronas   writes and tests this_ptr->display_width
#   renderGlobeCoronas   writes and tests this_ptr->framebuffer_width
#
# and renderCoronaDepthScanline narrows it with min(col, extent). If the columns
# written are in a different space from the sentinel, empty rows stop compa
# equal and get drawn from whatever the array happens to hold.
#
# Counts, per renderLightCoronas call, how many rows read as having content.
# At a mode that works the count should match the rows a corona actually covers.
set $n = 0
set $last_w = -1

break core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
commands
silent
set $n = $n + 1
if $n < 3 || g_WindowWidth != $last_w
  set $last_w = g_WindowWidth
  set $rows = 0
  set $i = 0
  set $minc = 999999
  set $maxc = -1
  while $i < this_ptr->display_height
    if g_CoronaLeftExtent[$i] != this_ptr->display_width
      set $rows = $rows + 1
      if g_CoronaLeftExtent[$i] < $minc
        set $minc = g_CoronaLeftExtent[$i]
      end
      if g_CoronaRightExtent[$i] > $maxc
        set $maxc = g_CoronaRightExtent[$i]
      end
    end
    set $i = $i + 1
  end
  printf "[light %dx%d] display_w=%d fb_w=%d rows_with_content=%d/%d col_range=%d..%d\n", \
    g_WindowWidth, g_WindowHeight, this_ptr->display_width, this_ptr->framebuffer_width, \
    $rows, this_ptr->display_height, $minc, $maxc
end
cont
end

# Does the globe path run at all, and with which sentinel?
break core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
commands
silent
printf "[globe %dx%d] sentinel=fb_w=%d (light path uses display_w=%d)\n", \
  g_WindowWidth, g_WindowHeight, this_ptr->framebuffer_width, this_ptr->display_width
cont
end
