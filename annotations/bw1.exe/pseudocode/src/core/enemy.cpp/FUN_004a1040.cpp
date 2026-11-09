// Name: core_enemy.cpp_FUN_004a1040
// Address: 004a1040
// Address Range: [[004a1040, 004a10ea]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_004a1040(CCharacter *param_1)

#include "nocturne.h"

void core_enemy_cpp_FUN_004a1040(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CVector3f CStack_14;
  
  if (*(int *)&param_1[1].field_0x18 != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CEnemy::stopGrabbing %s\n",*(int *)&param_1[1].field_0x18);
    pCVar1 = (CCharacter *)
             (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0xf4))
                       (*(int *)&param_1[1].field_0x18);
    if (pCVar1 == param_1) {
      (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0xf0))
                (*(int *)&param_1[1].field_0x18);
      if ((*(byte **)&param_1->field_0x68 == &DAT_0078a123) &&
         (*(int *)&param_1->field_0x24f8 != 0)) {
        CStack_14._0_4_ = 0;
        CStack_14._4_4_ = 0;
        CStack_14._8_4_ = 0xba83126f;
        core_charactr_cpp_FUN_0042d750(param_1,&CStack_14);
      }
      *(uint *)&param_1[1].field_0x18 = 0;
      return;
    }
  }
  return;
}
