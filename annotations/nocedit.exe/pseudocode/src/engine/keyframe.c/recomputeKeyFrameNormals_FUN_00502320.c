// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// Address: 00502320
// Address Range: [[00502320, 0050240f]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320(void)

#include "nocturne.h"

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(void)

{
  int iVar1;
  uint uVar2;
  CVector3i *vertex_data;
  SSurfaceNormal *pSVar3;
  SSurfaceNormal *in_stack_00000004;
  
  vertex_data = (CVector3i *)0x0;
  iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
  while (pSVar3 = (SSurfaceNormal *)0x0, iVar1 != 0) {
    if (((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type == 2) {
      vertex_data = (CVector3i *)&in_stack_00000004->normal_y;
    }
    iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
    pSVar3 = in_stack_00000004;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)in_stack_00000004);
    in_stack_00000004 =
         (SSurfaceNormal *)(in_stack_00000004->field7_0x1c + ((uVar2 & 0xfffffffc) - 0x1c));
    iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
  }
  if (vertex_data == (CVector3i *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar3 == (SSurfaceNormal *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = in_stack_00000004->unknown;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_0050237f:
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,in_stack_00000004);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                (vertex_data,(SSurfacePackedNormal *)in_stack_00000004);
    }
    else if (uVar2 == 0x29) goto LAB_0050237f;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)in_stack_00000004);
    in_stack_00000004 =
         (SSurfaceNormal *)(in_stack_00000004->field7_0x1c + ((uVar2 & 0xfffffffc) - 0x1c));
    if (in_stack_00000004->unknown == 0) {
      return;
    }
  } while( true );
}
