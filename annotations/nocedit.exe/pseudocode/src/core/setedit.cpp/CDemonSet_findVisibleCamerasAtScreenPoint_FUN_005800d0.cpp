// Name: core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
// Address: 005800d0
// Address Range: [[005800d0, 005801a2] [0060c6b0, 0060c6ef]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0(CDemonSet *this_ptr,int screen_x,int screen_y,int *result_cameras,int exclude_camera_index)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0(CDemonSet *this_ptr,int screen_x,int screen_y,int *result_cameras,int exclude_camera_index)

{
  int iVar1;
  int camera_index;
  int camera_index_00;
  int iVar2;
  byte bVar3;
  int aiStackY_1028 [1015];
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  if ((((0 < screen_x) && (0 < screen_y)) &&
      (screen_x <= g_CDemonCameraInstance.framebuffer_width + -1)) &&
     ((screen_y <= g_CDemonCameraInstance.framebuffer_height + -1 &&
      (core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                 (&g_CDemonCameraInstance,screen_x,screen_y,&local_28), local_28.z < 0x40000000))))
  {
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
              (&g_CDemonCameraInstance,&local_1c,&local_40);
    camera_index_00 = 0;
    iVar2 = 0;
    if (0 < this_ptr->camera_count) {
      do {
        while ((camera_index_00 != exclude_camera_index &&
               (iVar1 = core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
                                  (this_ptr,&local_34,camera_index_00), iVar1 != 0))) {
          iVar2 = iVar2 + 1;
          *result_cameras = camera_index_00;
          camera_index_00 = camera_index_00 + 1;
          result_cameras = result_cameras + 1;
          if (this_ptr->camera_count <= camera_index_00) {
            return iVar2;
          }
        }
        camera_index_00 = camera_index_00 + 1;
      } while (camera_index_00 < this_ptr->camera_count);
    }
    return iVar2;
  }
  return 0;
}
