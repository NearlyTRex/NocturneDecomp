// Name: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// Address: 00570d60
// Address Range: [[00570d60, 00570de9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db251 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd253 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064606b = 0.0000152587890625
//   double DOUBLE_00646073 = 65536
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_0327d778
//   undefined4 DAT_0327d77c
// Function calls:
//   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
//   crt_math.c_pow_FUN_005ffd76
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)

{
  undefined4 extraout_EAX;
  int extraout_ECX;
  int iVar1;
  undefined4 extraout_EDX;
  float10 fVar2;
  double dVar3;
  float local_14;
  int iVar4;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(&g_CDemonCameraInstance,gamma);
  local_14 = (float)gamma * (float)DOUBLE_0064606b;
  iVar1 = 0;
  do {
    fVar2 = crt_math_c_pow_FUN_005ffd76((float10)iVar1 * (float10)DOUBLE_0064606b,(float10)local_14)
    ;
    fVar2 = fVar2 * (float10)DOUBLE_00646073;
    local_14 = 7.994614e-39;
    dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    iVar4 = (int)ROUND(fVar2);
    if (iVar4 < 0x100) {
      iVar4 = 0x100;
    }
    iVar1 = (int)((ulonglong)dVar3 >> 0x20) + 1;
    *(int *)(&DAT_0327d77c + extraout_ECX) = iVar4;
  } while (iVar1 < 0x10000);
  return;
}


// Assembly code:
// 00570d60: PUSH ESI
//   Label: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
// 00570d61: PUSH EBP
// 00570d62: MOV EBP,ESP
// 00570d64: SUB ESP,0xc
// 00570d67: AND ESP,0xfffffff8
// 00570d6a: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00570d6d: PUSH EDX
// 00570d6e: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00570d73: CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
//   XREF to: 00453bd0 (UNCONDITIONAL_CALL)
// 00570d78: ADD ESP,0x8
// 00570d7b: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00570d7e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00570d82: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 00570d86: FMUL double ptr [0x0064606b]
//   XREF to: 0064606b (READ)
// 00570d8c: MOV ESI,0x100
// 00570d91: XOR EDX,EDX
// 00570d93: XOR ECX,ECX
// 00570d95: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00570d98: MOV dword ptr [ESP + 0x8],EDX
//   Label: LAB_00570d98
//   XREF to: Stack[-0x10] (WRITE)
// 00570d9c: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 00570da0: FMUL double ptr [0x0064606b]
//   XREF to: 0064606b (READ)
// 00570da6: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00570da9: FXCH
// 00570dab: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00570db0: FMUL double ptr [0x00646073]
//   XREF to: 00646073 (READ)
// 00570db6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00570dbb: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00570dbf: CMP dword ptr [ESP + 0x4],0x100
//   XREF to: Stack[-0x14] (READ)
// 00570dc7: JL 0x00570de4
//   XREF to: 00570de4 (CONDITIONAL_JUMP)
// 00570dc9: ADD ECX,0x4
//   Label: LAB_00570dc9
// 00570dcc: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00570dd0: INC EDX
// 00570dd1: MOV dword ptr [ECX + 0x327d778],EAX
//   XREF to: 0327d778 (DATA)
//   XREF to: 0327d77c (DATA)
// 00570dd7: CMP EDX,0x10000
// 00570ddd: JL 0x00570d98
//   XREF to: 00570d98 (CONDITIONAL_JUMP)
// 00570ddf: MOV ESP,EBP
// 00570de1: POP EBP
// 00570de2: POP ESI
// 00570de3: RET
// 00570de4: MOV dword ptr [ESP + 0x4],ESI
//   Label: LAB_00570de4
//   XREF to: Stack[-0x14] (WRITE)
// 00570de8: JMP 0x00570dc9
//   XREF to: 00570dc9 (UNCONDITIONAL_JUMP)
