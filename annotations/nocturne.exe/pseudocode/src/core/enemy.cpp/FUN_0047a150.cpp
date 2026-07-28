// Name: core_enemy.cpp_FUN_0047a150
// Address: 0047a150
// Address Range: [[0047a150, 0047a1cb]]
// Convention: unknown
// Signature: int core_enemy_cpp_FUN_0047a150(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_enemy_cpp_FUN_0047a150(CDemonActor *param_1)

{
  CCharacter *this_ptr;
  char *class_name;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x150bf4) <= iVar4) break;
    this_ptr = *(CCharacter **)(iVar3 + 0x150bf8 + 0x01E57284);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,class_name);
    if (iVar1 != 0) {
      iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr);
      if ((iVar1 == 0) &&
         (*(int *)(this_ptr[1].base.actor_name + 0x18) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)))
      {
        iVar2 = iVar2 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar2;
}
