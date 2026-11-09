// Name: engine_3d.c_clipAndDrawLine2D_FUN_00407af0
// Address: 00407af0
// Address Range: [[00407af0, 00407d6d]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407af0(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

#include "nocturne.h"

void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407af0(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  uint local_40 [12];
  
  bVar5 = 0;
  if (((param_5 & in_stack_00000044 & 0x80000000) == 0) ||
     ((char)(param_5 & in_stack_00000044) == '\0')) {
    iVar2 = 0;
    do {
      if (in_stack_0000003c < in_stack_00000034) {
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(&param_1,&stack0x00000034,local_40)
        ;
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && in_stack_00000034 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (in_stack_0000003c < in_stack_00000038) {
        engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && in_stack_00000038 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0
                  (&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (param_3 < param_1) {
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(&stack0x00000034,&param_1,local_40)
        ;
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-param_1 != param_3 && param_1 <= -param_3) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (param_3 < param_2) {
        engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-param_2 != param_3 && param_2 <= -param_3) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0
                  (&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if ((((((param_1 <= param_3) && (-param_1 == param_3 || -param_3 < param_1)) &&
          (param_2 <= param_3)) &&
         ((-param_2 == param_3 || -param_3 < param_2 && (in_stack_00000034 <= in_stack_0000003c))))
        && ((-in_stack_00000034 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000034 &&
            ((in_stack_00000038 <= in_stack_0000003c &&
             (-in_stack_00000038 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000038)))))
        ) && ((0 < param_3 && (0 < in_stack_0000003c)))) {
      puVar3 = &param_1;
      puVar4 = &DAT_007135b4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puVar3 = &stack0x00000034;
      puVar4 = &DAT_007135e4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(19999);
      engine_2d_c_drawLine_FUN_004011a0
                (DAT_007135c4 >> 0x10,DAT_007135c8 >> 0x10,DAT_007135f4 >> 0x10,DAT_007135f8 >> 0x10
                );
      return;
    }
  }
  return;
}
