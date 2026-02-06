// Name: core_stranger.cpp_CStranger_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(CStranger *this_ptr)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  CDynamite *this_ptr_00;
  undefined3 extraout_var;
  
  if (*(int *)(this_ptr->unk1 + 0x54) != 0) {
    (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 4))();
    this_ptr_00 = (CDynamite *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(this_ptr->unk1 + 0x54),g_CDynamiteClassInfo.name_hash
                            );
    if (this_ptr_00 != (CDynamite *)0x0) {
      bVar3 = core_dynamite_cpp_CDynamite_FUN_0049cf90(this_ptr_00);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        this_ptr_00->unk[0xc] = '\0';
        this_ptr_00->unk[0xd] = '\0';
        this_ptr_00->unk[0xe] = '\0';
        this_ptr_00->unk[0xf] = '\0';
        *(uint *)(this_ptr_00->unk + 8) = *(uint *)(this_ptr_00->unk + 0xc);
        *(uint *)(this_ptr_00->unk + 4) = *(uint *)(this_ptr_00->unk + 8);
        (*(((this_ptr_00->base).base.vtable._uc)->_uc).cfunc4)();
        this_ptr->unk1[0x54] = '\0';
        this_ptr->unk1[0x55] = '\0';
        this_ptr->unk1[0x56] = '\0';
        this_ptr->unk1[0x57] = '\0';
        (this_ptr->base).base.field47_0x2a8c = 0;
        fVar2 = 10.0f;
        (this_ptr->base).base.field48_0x2a90 = 0;
        iVar1 = this_ptr->action_pending;
        *(float *)(this_ptr->unk1 + 0xc) = fVar2;
        if (iVar1 == 3) {
          this_ptr->action_pending = 0;
          return;
        }
      }
    }
  }
  return;
}
