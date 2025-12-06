// Name: core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
// Address: 00580310
// Address Range: [[00580310, 00580553]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_SomethingMemoryConstructorMaybe(uint param_1) */

void core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310(void)

{
  int iVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  int *in_stack_0000000c;
  CDemonSet *in_stack_00000020;
  int *in_stack_00000028;
  int *piVar4;
  CVector3i *point_ptr;
  int iVar5;
  
  if ((DAT_03659384 == (void *)0x0) && (0 < *in_stack_00000004)) {
    DAT_03659384 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (*in_stack_00000004 * 0x4b030,"..\\core\\setedit.cpp",0x1007);
    if (DAT_03659384 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x1008;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
    }
    iVar5 = 0;
    if (0 < *in_stack_0000000c) {
      piVar4 = in_stack_0000000c + 1;
      point_ptr = (CVector3i *)(in_stack_0000000c + 0x44);
      do {
        engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                  (g_CDemonRendererPtr,0,0,0x140,0xf0);
        engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                  (g_CDemonRendererPtr,point_ptr);
        engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                  (g_CDemonRendererPtr,(float)piVar4[iVar5 * 0x69 + 0x51]);
        piVar4 = (int *)0x580420;
        engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
        in_stack_00000004[3] = g_TransformMatrix.m[0].x;
        in_stack_00000004[4] = g_TransformMatrix.m[0].y;
        in_stack_00000004[5] = g_TransformMatrix.m[0].z;
        in_stack_00000004[6] = g_TransformMatrix.m[1].x;
        in_stack_00000004[7] = g_TransformMatrix.m[1].y;
        in_stack_00000004[8] = g_TransformMatrix.m[1].z;
        in_stack_00000004[9] = g_TransformMatrix.m[2].x;
        in_stack_00000004[10] = g_TransformMatrix.m[2].y;
        in_stack_00000004[0xb] = g_TransformMatrix.m[2].z;
        this_ptr = g_CDemonRendererPtr;
        *in_stack_00000004 = g_CameraOriginX;
        in_stack_00000004[1] = g_CameraOriginY;
        in_stack_00000004[2] = g_CameraOriginZ;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (this_ptr,&g_ZeroVector);
        point_ptr = (CVector3i *)0x461c3f9a;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000020,9999.9,0);
        iVar5 = 0;
        do {
          iVar3 = 0;
          iVar2 = (int)in_stack_0000000c + iVar5;
          do {
            iVar1 = *(int *)(iVar3 + *(int *)((int)g_ZBufferScanlineArray + iVar5));
            if (iVar1 < 1) {
              *(uint *)(iVar2 + 0x30) = 0x7fffffff;
            }
            else {
              *(int *)(iVar2 + 0x30) = (int)(0x7fffffff / (longlong)iVar1);
            }
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 0x3c0;
          } while (iVar3 != 0x500);
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x3c0);
        iVar5 = 0x580502;
        engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
        in_stack_00000004 = in_stack_00000004 + 0x69;
        in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      } while ((int)in_stack_0000000c < *in_stack_00000028);
    }
  }
  return;
}
