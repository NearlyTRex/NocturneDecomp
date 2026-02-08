// Name: core_teleport.cpp_CTeleportDest_renderOpaque_FUN_005da7d0
// Address: 005da7d0
// Address Range: [[005da7d0, 005da844]]
// Convention: __cdecl
// Signature: int __cdecl core_teleport_cpp_CTeleportDest_renderOpaque_FUN_005da7d0(CTeleportDest *this_ptr)

#include "nocturne.h"

int __cdecl core_teleport_cpp_CTeleportDest_renderOpaque_FUN_005da7d0(CTeleportDest *this_ptr)

{
  int iVar1;
  uint32_t color;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      color = 1;
      if (g_CDemonMissionPtr->selected_actor != (CDemonActor *)0x0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (g_CDemonMissionPtr->selected_actor,"CTeleport");
        if ((iVar1 != 0) &&
           (this_ptr == *(CTeleportDest **)(g_CDemonMissionPtr->selected_actor[1].actor_name + 0xc))
           ) {
          color = 0xf9;
        }
      }
      core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,color);
      return 0;
    }
  }
  return 0;
}
