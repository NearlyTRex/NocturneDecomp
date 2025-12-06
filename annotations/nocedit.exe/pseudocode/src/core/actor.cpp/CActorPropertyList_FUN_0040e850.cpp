// Name: core_actor.cpp_CActorPropertyList_FUN_0040e850
// Address: 0040e850
// Address Range: [[0040e850, 0040e9b9]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e850()

#include "nocturne.h"

void core_actor_cpp_CActorPropertyList_FUN_0040e850(void)

{
  int y1;
  int border_color;
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  int y_pos;
  int unaff_retaddr;
  int in_stack_00000004;
  int local_24;
  int local_1c;
  
  y1 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
  engine_2d_c_setTextWrapEnabled_FUN_00402800(0);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    iVar2 = in_stack_00000004 + 8;
    y_pos = *(int *)(in_stack_00000004 + 0x2500) + 2;
    do {
      core_actor_cpp_CActorProperty_FUN_0040ea50();
      core_actor_cpp_FUN_0040ee30();
      if (iVar1 == unaff_retaddr) {
        border_color = 0xfa;
        if (*(int *)(iVar2 + 0x54) == 0) {
          border_color = 7;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (*(int *)(in_stack_00000004 + 0x24f8) + 1,y1,
                   *(int *)(in_stack_00000004 + 0x24fc) + -1,local_1c,0,border_color);
      }
      engine_2d_c_drawText_FUN_00401fd0((char *)(y1 + 4),local_24,y_pos);
      engine_2d_c_drawText_FUN_00401fd0(": ",*(int *)(in_stack_00000004 + 0x24f0),y_pos);
      iVar2 = iVar2 + 0xec;
      iVar1 = iVar1 + 1;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff18,*(int *)(in_stack_00000004 + 0x24f4),y_pos)
      ;
      y_pos = y_pos + 0xe;
    } while (iVar1 < *(int *)(in_stack_00000004 + 4));
  }
  engine_2d_c_setTextWrapEnabled_FUN_00402800(local_1c);
  return;
}
