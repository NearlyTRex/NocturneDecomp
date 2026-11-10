// Name: core_thehand.cpp_FUN_0056c900
// Address: 0056c900
// Address Range: [[0056c900, 0056c9f7]]
// Convention: unknown
// Signature: undefined4 core_thehand_cpp_FUN_0056c900(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_thehand_cpp_FUN_0056c900(CDemonActor *param_1,char *param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CLocation *pCStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar2 = 0;
  pCStack_20 = &param_1->location;
  iStack_18 = 0;
  iStack_1c = 0;
  do {
    if (g_CDemonSetPtr->character_count <= iStack_1c) {
      return 0;
    }
    actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iStack_18);
    if (actor_ptr != param_1) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,param_2);
      if (iVar1 != 0) {
        fStack_34 = (actor_ptr->location).position.x - (pCStack_20->position).x;
        fStack_30 = (actor_ptr->location).position.y - (pCStack_20->position).y;
        fStack_2c = (actor_ptr->location).position.z - (pCStack_20->position).z;
        fStack_40 = fStack_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        fStack_3c = fStack_3c * (float)_DAT_005d6553;
        if (SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <
            param_1[0x99].orient_matrix.m[0].z) {
          param_1[0x99].orient_matrix.m[1].y = (float)actor_ptr;
          return 1;
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_18 = iStack_18 + 4;
  } while( true );
}
