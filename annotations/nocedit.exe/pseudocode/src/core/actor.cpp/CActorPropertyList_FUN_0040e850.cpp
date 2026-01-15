// Name: core_actor.cpp_CActorPropertyList_FUN_0040e850
// Address: 0040e850
// Address Range: [[0040e850, 0040e9b9]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e850()

#include "nocturne.h"

void core_actor_cpp_CActorPropertyList_FUN_0040e850(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int y_pos;
  int in_stack_00000004;
  int in_stack_00000008;
  char local_ec [200];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
  engine_2d_c_setTextWrapEnabled_FUN_00402800(0);
  iVar2 = 0;
  iVar1 = *(int *)(in_stack_00000004 + 0x2500);
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    local_14 = iVar1 + 0xd;
    iVar3 = in_stack_00000004 + 8;
    y_pos = iVar1 + 2;
    local_18 = iVar1;
    do {
      local_1c = iVar3;
      core_actor_cpp_CActorProperty_FUN_0040ea50();
      local_20 = core_actor_cpp_FUN_0040ee30();
      local_20 = *(int *)(in_stack_00000004 + 0x24f0) - local_20;
      if (iVar2 == in_stack_00000008) {
        iVar1 = 0xfa;
        if (*(int *)(iVar3 + 0x54) == 0) {
          iVar1 = 7;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (*(int *)(in_stack_00000004 + 0x24f8) + 1,local_18,
                   *(int *)(in_stack_00000004 + 0x24fc) + -1,local_14,0,iVar1);
      }
      engine_2d_c_drawText_FUN_00401fd0((char *)(local_1c + 4),local_20,y_pos);
      engine_2d_c_drawText_FUN_00401fd0(": ",*(int *)(in_stack_00000004 + 0x24f0),y_pos);
      iVar3 = iVar3 + 0xec;
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,*(int *)(in_stack_00000004 + 0x24f4),y_pos);
      local_18 = local_18 + 0xe;
      local_14 = local_14 + 0xe;
      y_pos = y_pos + 0xe;
    } while (iVar2 < *(int *)(in_stack_00000004 + 4));
  }
  engine_2d_c_setTextWrapEnabled_FUN_00402800(local_24);
  return;
}
