// Name: core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
// Address: 0057fd00
// Address Range: [[0057fd00, 0057ff02]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_Something2MemoryConstructorMaybe(uint param_1,
   uint param_2, uint param_3) */

void core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  int *in_stack_00000004;
  void *in_stack_00000008;
  int in_stack_0000000c;
  int aiStackY_1038 [1016];
  int iVar6;
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int *local_2c;
  CBoundingBox3D *local_28;
  CVector3i *local_24;
  CVector3f *local_20;
  int local_1c;
  CVector3i *local_18;
  int local_14;
  
  bVar5 = 0;
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  crt_memory_c_memset_FUN_005fde40(in_stack_00000008,0,g_WindowWidth * g_WindowHeight);
  local_2c = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (g_CDemonCameraInstance.framebuffer_height *
                               g_CDemonCameraInstance.framebuffer_width * 0xc,
                               "..\\core\\setedit.cpp",0xf22);
  if (local_2c == (int *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xf23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  piVar3 = local_2c;
  for (local_1c = 0; local_1c < g_CDemonCameraInstance.framebuffer_height; local_1c = local_1c + 1)
  {
    local_18 = (CVector3i *)0x0;
    while( true ) {
      if (g_CDemonCameraInstance.framebuffer_width <= (int)local_18) break;
      iVar6 = 0x57fdca;
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (&g_CDemonCameraInstance,local_18,local_1c,(int)in_stack_ffffffc0);
      *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if ((int)in_stack_ffffffc4 < 0x40000000) {
        in_stack_ffffffc0 = (CVector3i *)&stack0xffffffbc;
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,in_stack_ffffffc0,in_stack_ffffffc4);
        *piVar3 = iVar6;
        piVar3[(uint)bVar5 * -2 + 1] = *(int *)(&stack0xffffffb4 + (uint)bVar5 * -8);
        (piVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
             *(int *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      else {
        *piVar3 = 0x7fffffff;
      }
      local_18 = (CVector3i *)((int)&local_18->x + 1);
      piVar3 = piVar3 + 3;
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
                  (g_CDemonRendererPtr,local_20);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,local_24,(CVector3i *)0x0);
        iVar6 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(local_28);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        if (iVar6 != 0) {
          iVar6 = 0;
          piVar3 = local_2c;
          while (iVar6 < g_CDemonCameraInstance.framebuffer_height) {
            iVar4 = 0;
            if (g_CDemonCameraInstance.framebuffer_width < 1) {
              iVar6 = iVar6 + 1;
            }
            else {
              do {
                if (*piVar3 < 0x7fffffff) {
                  iVar1 = core_setedit_cpp_FUN_005801b0();
                  if (iVar1 != 0) {
                    pcVar2 = (char *)(g_WindowWidth * iVar6 + iVar4 + (int)in_stack_00000008);
                    *pcVar2 = *pcVar2 + '\x01';
                  }
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 3;
              } while (iVar4 < g_CDemonCameraInstance.framebuffer_width);
              iVar6 = iVar6 + 1;
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
  crt_memory_c_free_FUN_005fe659(local_2c);
  return;
}
