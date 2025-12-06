// Name: core_werewolf.cpp_CWerewolf_FUN_005f1820
// Address: 005f1820
// Address Range: [[005f1820, 005f1975]]
// Convention: __cdecl
// Signature: int core_werewolf.cpp_CWerewolf_FUN_005f1820(CWerewolf * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1820(CWerewolf *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *pCVar2;
  uint *puVar3;
  byte bVar4;
  CWerewolf *pCStack_48;
  byte *puStack_44;
  CVector3i local_14;
  
  bVar4 = 0;
  if ((*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 == 0) ||
     ((this_ptr->base_enemy).pool_me != 0)) {
    return 0;
  }
  if (1.0 < (float)this_ptr->field11_0xbf00) {
    this_ptr->field11_0xbf00 = (int)((float)this_ptr->field11_0xbf00 + _DAT_00657db0);
  }
  if ((float)this_ptr->field11_0xbf00 <= (float)0.80000000000000004) {
    if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base_enemy).base_character.model.bone_transform.bone_world_matrices +
               *(int *)(this_ptr->field4_0xbec0 + 0x10);
      puVar3 = (uint *)&stack0xffffffb4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                ((CVector3f *)&stack0xffffffb4,(CMatrix3x3f *)&local_14.y);
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&pCStack_48,(CMatrix3x4f *)&stack0xffffffe8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,&local_14);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffffc,(CVector3i *)0x0);
      pCStack_48 = (CWerewolf *)&DAT_03f96b44;
      core_werewolf_cpp_FUN_005f1230();
      puStack_44 = &DAT_03f96b50;
      pCStack_48 = this_ptr;
      core_werewolf_cpp_FUN_005f1230();
      puStack_44 = (byte *)0x5f191c;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
    return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  return iVar1;
}
