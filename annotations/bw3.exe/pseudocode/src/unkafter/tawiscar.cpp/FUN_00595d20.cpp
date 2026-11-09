// Name: unkafter_tawiscar.cpp_FUN_00595d20
// Address: 00595d20
// Address Range: [[00595d20, 00595e89]]
// Convention: unknown
// Signature: undefined4 unkafter_tawiscar_cpp_FUN_00595d20(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_tawiscar_cpp_FUN_00595d20(CDemonActor *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1020 [1001];
  CVector3f *translation;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar5 = 0;
  if ((*(int *)&param_1[0x1d].field_0xc4 == 0) || (*(int *)&param_1[0x99].field_0x38 != 0)) {
    return 0;
  }
  if (1.0 < *(float *)&param_1[0x9b].field_0x50) {
    *(float *)&param_1[0x9b].field_0x50 = *(float *)&param_1[0x9b].field_0x50 + _DAT_005d93ad;
  }
  if (*(float *)&param_1[0x9b].field_0x50 <= (float)_DAT_005d93b1) {
    if (*(int *)&param_1[0x1d].field_0xc4 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
      puVar3 = (uint *)(&param_1[0xb].field_0x110 + *(int *)&param_1[0x9b].field_0x20 * 0x30);
      puVar4 = (uint *)&stack0xffffff98;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_FUN_00583b10(&stack0xffffff98);
      CStack_2c._0_4_ = CStack_20._0_4_;
      *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_xform_cpp_FUN_00584450(&stack0xffffff98);
      translation = &CStack_38;
      CStack_38._0_4_ = CStack_14._0_4_;
      *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,(CVector3f *)&DAT_02cfd900,translation);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&CStack_2c,(CVector3f *)0x0);
      unkafter_tawiscar_cpp_FUN_00595760(param_1,&DAT_02d24a54);
      unkafter_tawiscar_cpp_FUN_00595760(param_1,&DAT_02d24a60);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    }
    core_charactr_cpp_FUN_0042f510(param_1);
    return *(uint *)&param_1[0x1d].field_0xc4;
  }
  uVar1 = core_charactr_cpp_FUN_0042f510(param_1);
  return uVar1;
}
