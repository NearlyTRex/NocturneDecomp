// Name: core_keyactor.cpp_FUN_00501710
// Address: 00501710
// Address Range: [[00501710, 005017b3]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501710()
// Globals:
//   double DOUBLE_00630c3d = 3.14159265350000
//   double DOUBLE_00630c45 = 8192
//   double DOUBLE_00630c4d = 16384
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_set.cpp_CDemonSet_FUN_0056d110
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501710(undefined4 param_1, undefined4
   param_2) */

void core_keyactor_cpp_FUN_00501710(void)

{
  CDemonSet *this_ptr;
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  int iVar2;
  float10 fVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  *(float *)(in_stack_00000004 + 0x2d8) =
       in_stack_00000008 * (float)DOUBLE_00630c3d + *(float *)(in_stack_00000004 + 0x2d8);
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 0x2dc),(CColor3f *)(in_stack_00000004 + 0x20));
  fVar3 = (float10)fsin((float10)*(float *)(in_stack_00000004 + 0x2d8));
  fVar3 = fVar3 * (float10)DOUBLE_00630c45 + (float10)DOUBLE_00630c4d;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iVar1 = (int)ROUND(fVar3);
  *(int *)(in_stack_00000004 + 0x318) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(in_stack_00000004 + 0x2f8) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 0x2dc),1.0);
  this_ptr = g_CDemonSetPtr;
  *(undefined4 *)(in_stack_00000004 + 0x2fc) = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  return;
}


// Assembly code:
// 00501710: PUSH EBX
//   Label: core_keyactor.cpp_FUN_00501710
// 00501711: PUSH ESI
// 00501712: SUB ESP,0xc
// 00501715: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00501719: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050171d: LEA EAX,[ESI + 0x20]
// 00501720: FMUL double ptr [0x00630c3d]
//   XREF to: 00630c3d (READ)
// 00501726: PUSH EAX
// 00501727: LEA EBX,[ESI + 0x2dc]
// 0050172d: FLD float ptr [ESI + 0x2d8]
// 00501733: FXCH
// 00501735: FADD ST0,ST1
// 00501737: PUSH EBX
// 00501738: FSTP ST1
// 0050173a: FSTP float ptr [ESI + 0x2d8]
// 00501740: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 00501745: FLD float ptr [ESI + 0x2d8]
// 0050174b: FSIN
// 0050174d: FMUL double ptr [0x00630c45]
//   XREF to: 00630c45 (READ)
// 00501753: FADD double ptr [0x00630c4d]
//   XREF to: 00630c4d (READ)
// 00501759: ADD ESP,0x8
// 0050175c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00501761: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 00501765: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 00501769: MOV EDX,EAX
// 0050176b: SAR EDX,0x1f
// 0050176e: MOV dword ptr [EBX + 0x3c],EAX
// 00501771: SHL EDX,0x8
// 00501774: SBB EAX,EDX
// 00501776: SAR EAX,0x8
// 00501779: MOV EDX,EAX
// 0050177b: SAR EDX,0x1f
// 0050177e: SHL EDX,0x2
// 00501781: SBB EAX,EDX
// 00501783: SAR EAX,0x2
// 00501786: PUSH 0x3f800000
// 0050178b: PUSH EBX
// 0050178c: MOV byte ptr [EBX + 0x1c],AL
// 0050178f: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 00501794: ADD ESP,0x8
// 00501797: PUSH EBX
// 00501798: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0050179e: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0050179f: MOV dword ptr [EBX + 0x20],0x0
// 005017a6: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 005017ab: ADD ESP,0x8
// 005017ae: ADD ESP,0xc
// 005017b1: POP ESI
// 005017b2: POP EBX
// 005017b3: RET
