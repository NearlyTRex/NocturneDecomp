// Name: core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
// Address: 0057fd00
// Address Range: [[0057fd00, 0057ff02]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_Something2MemoryConstructorMaybe(uint param_1,
   uint param_2, uint param_3) */

void __cdecl core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int *in_stack_00000004;
  void *in_stack_00000008;
  int in_stack_0000000c;
  int aiStackY_1038 [1015];
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  int *local_2c;
  CBoundingBox3D *local_28;
  CVector3i *local_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  memset(in_stack_00000008,0,g_WindowWidth * g_WindowHeight);
  local_2c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (g_CDemonCameraInstance.framebuffer_height *
                        g_CDemonCameraInstance.framebuffer_width * 0xc,"..\\core\\setedit.cpp",
                        0xf22);
  if (local_2c == (int *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xf23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  piVar4 = local_2c;
  for (local_1c = 0; local_1c < g_CDemonCameraInstance.framebuffer_height; local_1c = local_1c + 1)
  {
    for (local_18 = 0; local_18 < g_CDemonCameraInstance.framebuffer_width; local_18 = local_18 + 1)
    {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (&g_CDemonCameraInstance,local_18,local_1c,&local_38);
      local_44.x = local_38.x;
      *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_38 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (local_44.z < 0x40000000) {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,&local_44,&local_50);
        *piVar4 = local_50.x;
        piVar4[(uint)bVar6 * -2 + 1] = *(int *)((int)&local_50 + (uint)bVar6 * -8 + 4);
        (piVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
             *(int *)((int)&local_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      }
      else {
        *piVar4 = 0x7fffffff;
      }
      piVar4 = piVar4 + 3;
    }
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
  local_14 = 0;
  if (0 < *in_stack_00000004) {
    local_28 = (CBoundingBox3D *)(in_stack_00000004 + 0x60);
    local_24 = (CVector3i *)(in_stack_00000004 + 0x44);
    local_20 = (CVector3f *)(in_stack_00000004 + 0x41);
    do {
      if (local_14 != in_stack_0000000c) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_24,(CVector3i *)0x0);
        iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(local_28);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        if (iVar2 != 0) {
          iVar2 = 0;
          piVar4 = local_2c;
          while (iVar2 < g_CDemonCameraInstance.framebuffer_height) {
            iVar5 = 0;
            if (g_CDemonCameraInstance.framebuffer_width < 1) {
              iVar2 = iVar2 + 1;
            }
            else {
              do {
                if (*piVar4 < 0x7fffffff) {
                  bVar1 = core_setedit_cpp_FUN_005801b0();
                  if (CONCAT31(extraout_var,bVar1) != 0) {
                    pcVar3 = (char *)(g_WindowWidth * iVar2 + iVar5 + (int)in_stack_00000008);
                    *pcVar3 = *pcVar3 + '\x01';
                  }
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar4 + 3;
              } while (iVar5 < g_CDemonCameraInstance.framebuffer_width);
              iVar2 = iVar2 + 1;
            }
          }
        }
      }
      local_28 = (CBoundingBox3D *)&local_28[0x11].max;
      local_24 = local_24 + 0x23;
      local_14 = local_14 + 1;
      local_20 = local_20 + 0x23;
    } while (local_14 < *in_stack_00000004);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  g_CurrentDebugLine = 0xf73;
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  shape_memdbg_cpp_free_FUN_005fe659(local_2c);
  return;
}
