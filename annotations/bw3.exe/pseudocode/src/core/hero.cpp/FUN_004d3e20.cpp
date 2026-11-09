// Name: core_hero.cpp_FUN_004d3e20
// Address: 004d3e20
// Address Range: [[004d3e20, 004d408a]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004d3e20(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004d3e20(CDemonActor *param_1,char *param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  char *pcVar3;
  char acStack_128 [256];
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  local_24 = 0;
  local_28 = 0x7149f2ca;
  local_18 = 0;
  do {
    if (*(int *)&g_CDemonSetPtr->field_0x14d164 <= local_18) {
LAB_004d3fd9:
      return *(int *)&param_1[0x185].field_0xb0 == 4;
    }
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_24);
    if ((((ABS(*(float *)&actor_ptr->field_0x20 - *(float *)&param_1->field_0x20) <=
           (float)_DAT_005c4e75) &&
         (ABS(*(float *)&actor_ptr->field_0x24 - *(float *)&param_1->field_0x24) <=
          (float)_DAT_005c4e75)) &&
        (ABS(*(float *)&actor_ptr->field_0x28 - *(float *)&param_1->field_0x28) <=
         (float)_DAT_005c4e75)) &&
       ((actor_ptr != param_1 &&
        (iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr), iVar1 == 0)))) {
      iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,param_1);
      iStack_1c = iVar1;
      if (iVar1 != 0) {
        iVar2 = core_actor_cpp_FUN_0040c790(actor_ptr,param_2);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x154))
                            (param_1,actor_ptr,iVar1,&local_28);
          if (iVar2 != 0) {
            if ((iVar1 == 5) && (local_28 < 0x40400000)) {
              iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (actor_ptr,g_CAmmoClassInfo.name_hash);
              iStack_20 = iVar1;
              iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (actor_ptr,g_CHealthItemClassInfo.name_hash);
              if (iVar1 == 0) {
                if (((iVar2 != 0) && (*(int *)(iVar2 + 0x2e0) != 0)) &&
                   (*(int *)&param_1[0x1b].field_0xf0 == 0x42c80000)) {
                  pcVar3 = "Already have max health!";
                  goto LAB_004d3f97;
                }
code_r0x004d400c:
                core_inv_cpp_FUN_004da880((CInventory *)&param_1[0x182].field_0x38,actor_ptr,1);
              }
              else {
                if ((*(int *)(iVar1 + 0x318) == 0xb) && (*(int *)&param_1[0x185].field_0xcc == 0x32)
                   ) {
                  pcVar3 = "Already have max bullets!";
                }
                else {
                  if ((*(int *)(iStack_20 + 0x318) != 10) ||
                     (*(int *)&param_1[0x185].field_0xc8 != 100)) goto code_r0x004d400c;
                  pcVar3 = "Already have max mana!";
                }
LAB_004d3f97:
                FUN_005a28c0(acStack_128,pcVar3);
                core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,acStack_128,2.0);
              }
              *(uint *)&param_1[0x185].field_0xb4 = 0;
              *(uint *)&param_1[0x185].field_0xb8 = 0;
              *(uint *)&param_1[0x185].field_0xb0 = 5;
              goto LAB_004d3fd9;
            }
            iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
            if ((iVar1 == 0) && (iStack_1c != 5)) {
              *(uint *)&param_1[0x185].field_0xb0 = 4;
              *(CDemonActor **)&param_1[0x185].field_0xb4 = actor_ptr;
              *(CDemonActor **)&param_1[0x185].field_0xb8 = actor_ptr;
            }
          }
        }
      }
    }
    local_18 = local_18 + 1;
    local_24 = local_24 + 4;
  } while( true );
}
