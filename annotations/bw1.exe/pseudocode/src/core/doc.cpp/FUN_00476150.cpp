// Name: core_doc.cpp_FUN_00476150
// Address: 00476150
// Address Range: [[00476150, 0047620d]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00476150(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_doc_cpp_FUN_00476150(int param_1,uint param_2)

{
  uint uVar1;
  CCharacter *this_ptr;
  int iVar2;
  CDemonActor *unaff_EDI;
  
  iVar2 = *(int *)(param_1 + 0x20004);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,param_2);
    this_ptr = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)(param_1 + 0x20004),g_CDynamiteClassInfo.name_hash);
    if (this_ptr != (CCharacter *)0x0) {
      iVar2 = core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0((CDynamite *)this_ptr);
      if (iVar2 != 0) {
        (this_ptr->model).bone_origins[0x51].z = 0.0;
        (this_ptr->model).bone_origins[0x51].y = (this_ptr->model).bone_origins[0x51].z;
        (this_ptr->model).bone_origins[0x51].x = (this_ptr->model).bone_origins[0x51].y;
        (*(((this_ptr->base).vtable._uc)->_uc).isGrabbable)(this_ptr,unaff_EDI);
        *(uint *)(param_1 + 0x20004) = 0;
        *(uint *)(param_1 + 0x2c98) = 0;
        uVar1 = 0x41200000;
        *(uint *)(param_1 + 0x2c9c) = 0;
        *(uint *)(param_1 + 0x1ffbc) = uVar1;
        if (*(int *)(param_1 + 0x1ff5c) == 3) {
          *(uint *)(param_1 + 0x1ff5c) = 0;
          return;
        }
      }
    }
  }
  return;
}
