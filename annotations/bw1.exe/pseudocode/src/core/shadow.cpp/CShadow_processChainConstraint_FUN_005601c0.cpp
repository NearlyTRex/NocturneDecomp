// Name: core_shadow.cpp_CShadow_processChainConstraint_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005603a3]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_processChainConstraint_FUN_005601c0(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_shadow_cpp_CShadow_processChainConstraint_FUN_005601c0(CShadow *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1084 [1014];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3f CStack_3c;
  double dStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  if ((this_ptr->chain_anchor != (CDemonActor *)0x0) &&
     ((this_ptr->base).victim != (CCharacter *)0x0)) {
    CStack_78.x = 0.0;
    CStack_78.y = -0.3;
    CStack_78.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005b5080
              (&CStack_78,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               this_ptr->bone_indices[3],&CStack_84);
    afStack_68[2] = CStack_84.x;
    afStack_68[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_84 + (uint)bVar2 * -8 + 4);
    afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         *(float *)((int)&CStack_84 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              ((CDemonActor *)this_ptr,&(this_ptr->chain_anchor->location).position,&CStack_90);
    fStack_9c = CStack_90.x;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if (fStack_98 < (float)2) {
      CStack_3c.x = CStack_90.x;
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      CStack_3c.y = 0.0;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_3c);
      return;
    }
    fStack_6c = fStack_9c - afStack_68[2];
    afStack_68[0] = fStack_98 - afStack_68[3];
    afStack_68[1] = fStack_94 - fStack_58;
    fStack_48 = fStack_9c - afStack_68[2];
    afStack_44[(uint)bVar2 * -2] = afStack_68[(uint)bVar2 * -2];
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    fStack_20 = afStack_44[0] * afStack_44[0];
    fStack_28 = SQRT(afStack_44[1] * afStack_44[1] + fStack_48 * fStack_48 + fStack_20);
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Chain stretched to %f\n");
    if ((this_ptr->chain_length < fStack_28) &&
       (fVar1 = this_ptr->chain_length * this_ptr->chain_length - fStack_20,
       dStack_30 = (double)fVar1, 0.0 <= dStack_30)) {
      fVar1 = SQRT(fVar1);
      CStack_54.x = fStack_6c;
      *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + 4) = afStack_68[(uint)bVar2 * -2];
      *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      fStack_1c = SQRT(CStack_54.z * CStack_54.z + CStack_54.x * CStack_54.x);
      if ((0.0 < fStack_1c) && (fStack_24 = fStack_1c - fVar1, 0.0 < fStack_24)) {
        fStack_18 = fStack_24 / fStack_1c;
        CStack_54.x = CStack_54.x * fStack_18;
        CStack_54.y = fStack_18 * 0.0;
        CStack_54.z = CStack_54.z * fStack_18;
        fStack_14 = fVar1;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_54);
        return;
      }
    }
  }
  return;
}
