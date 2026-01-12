// Name: core_emitter.cpp_FUN_004a8860
// Address: 004a8860
// Address Range: [[004a8860, 004a8a71]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8860()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8860(uint param_1) */

uint core_emitter_cpp_FUN_004a8860(void)

{
  uchar uVar1;
  int iVar2;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CQuaternion4f *in_stack_fffffeb2;
  void *in_stack_fffffeb6;
  byte local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  char local_64 [60];
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    if ((*(int *)in_stack_00000004[1].actor_name == 3) &&
       (*(int *)(in_stack_00000004[1].actor_name + 0x10) != 0)) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)local_7c);
      local_7c._8_4_ = in_stack_00000004[1].field12_0xe0.x;
      local_70 = in_stack_00000004[1].field12_0xe0.y;
      local_6c = in_stack_00000004[1].field12_0xe0.z;
      local_68 = in_stack_00000004[1].field13_0xec.x;
      local_64[0] = '\0';
      local_64[1] = '\0';
      local_64[2] = '\0';
      local_64[3] = '\0';
      local_64[4] = '\0';
      local_64[5] = '\0';
      local_64[6] = '\0';
      local_64[7] = '\0';
      local_7c[0] = '\0';
      local_7c[1] = '\0';
      local_7c[2] = -0x80;
      local_7c[3] = '?';
      local_1c.x = 0.0;
      local_1c.y = 0.0;
      local_1c.z = 100.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&local_28,&local_1c)
      ;
      core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      return 1;
    }
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar2 == 0) {
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000004,0xfb);
        if ((((*(int *)in_stack_00000004[1].actor_name == 3) && (DAT_02cf2b5c != 0)) &&
            (in_stack_00000004 == DAT_02cf2b78)) &&
           (DAT_02cf2b78 == *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
          uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                    (g_CEditorToolsPtr,0x3f800000,(CQuaternion4f *)CONCAT31 /* combine 2-byte values */(extraout_var,uVar1),
                     in_stack_fffffeb2,in_stack_fffffeb6);
          return 0;
        }
      }
    }
  }
  return 0;
}
