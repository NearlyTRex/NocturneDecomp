// Name: core_enemy.cpp_FUN_004889d0
// Address: 004889d0
// Address Range: [[004889d0, 00488a7a]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_004889d0(CCharacter *param_1)

#include "nocturne.h"

void core_enemy_cpp_FUN_004889d0(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CVector3f CStack_14;
  
  if (*(int *)&param_1[1].field_0x18 != 0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"CEnemy::stopGrabbing %s\n",*(int *)&param_1[1].field_0x18);
    pCVar1 = (CCharacter *)
             (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x2b0) + 0xfc))
                       (*(int *)&param_1[1].field_0x18);
    if (pCVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x2b0) + 0xf8))
                (*(int *)&param_1[1].field_0x18);
      if ((*(byte **)&param_1->field_0x68 == &DAT_0078a123) &&
         (*(int *)&param_1->field_0x2564 != 0)) {
        CStack_14._0_4_ = 0;
        CStack_14._4_4_ = 0;
        CStack_14._8_4_ = 0xba83126f;
        core_charactr_cpp_FUN_00423a60(param_1,&CStack_14);
      }
      *(uint *)&param_1[1].field_0x18 = 0;
      return;
    }
  }
  return;
}
