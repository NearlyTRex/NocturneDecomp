// Name: core_manpuz.cpp_FUN_005090d0
// Address: 005090d0
// Address Range: [[005090d0, 005091ca]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005090d0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_005090d0(uint param_1) */

int core_manpuz_cpp_FUN_005090d0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 != 0) {
    iStack_c = (int)ROUND(g_ZeroVector.x * _DAT_00660d70);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1000].projected_vertex,(CVector3i *)&iStack_c
              );
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_00509bf0();
      core_manpuz_cpp_FUN_00509d50();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        core_manpuz_cpp_FUN_00509c60();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_0050a1f0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return 0;
}
