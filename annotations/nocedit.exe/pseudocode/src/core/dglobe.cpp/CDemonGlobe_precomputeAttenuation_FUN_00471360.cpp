// Name: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 004713f9]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422b5d [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a81e2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0bca [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c1940 (004c1940) at 004c196c [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501710 (00501710) at 0050178f [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee605 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0061ec3a = 256
//   double DOUBLE_0061ec42 = 65536
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  float in_stack_00000010;
  
  fVar3 = (float10)radius * (float10)FLOAT_0061ec3a;
  fVar4 = (float10)radius * (float10)radius * (float10)DOUBLE_0061ec42;
  this_ptr->radius = radius;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr,radius));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  iVar2 = (int)((ulonglong)dVar5 >> 0x20);
  *(int *)(iVar2 + 0x10) = (int)ROUND(fVar4);
  *(int *)(iVar2 + 0xc) = (int)ROUND(fVar3);
  if (*(int *)(iVar2 + 0x10) < 0x10000) {
    *(undefined4 *)(iVar2 + 0x10) = 0x10000;
  }
  *(float *)(iVar2 + 0x18) = in_stack_00000010 * in_stack_00000010;
  iVar1 = *(int *)(iVar2 + 0x10) >> 0x10;
  fVar3 = ((float10)*(byte *)(iVar2 + 0x1c) * (float10)DOUBLE_0061ec42) / (float10)iVar1;
  *(float *)(iVar2 + 0x34) = 1.0 / in_stack_00000010;
  *(float *)(iVar2 + 0x38) = 1.0 / (in_stack_00000010 * in_stack_00000010);
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2,iVar1));
  *(int *)((int)((ulonglong)dVar5 >> 0x20) + 0x14) = (int)ROUND(fVar3);
  return;
}


// Assembly code:
// 00471360: SUB ESP,0x8
//   Label: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
// 00471363: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00471367: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047136b: FMUL ST0
// 0047136d: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00471371: FMUL float ptr [0x0061ec3a]
//   XREF to: 0061ec3a (READ)
// 00471377: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047137b: FXCH
// 0047137d: FMUL double ptr [0x0061ec42]
//   XREF to: 0061ec42 (READ)
// 00471383: MOV dword ptr [EDX + 0x30],EAX
// 00471386: FXCH
// 00471388: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047138d: FXCH
// 0047138f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00471394: FISTP dword ptr [EDX + 0x10]
// 00471397: MOV ECX,dword ptr [EDX + 0x10]
// 0047139a: FISTP dword ptr [EDX + 0xc]
// 0047139d: CMP ECX,0x10000
// 004713a3: JL 0x004713f1
//   XREF to: 004713f1 (CONDITIONAL_JUMP)
// 004713a5: FLD float ptr [ESP + 0x10]
//   Label: LAB_004713a5
//   XREF to: Stack[0x8] (READ)
// 004713a9: FLD ST0
// 004713ab: FLD1
// 004713ad: FDIVRP
// 004713af: FLD ST1
// 004713b1: FMULP ST2
// 004713b3: FXCH
// 004713b5: FST float ptr [EDX + 0x18]
// 004713b8: FLD1
// 004713ba: FDIVRP
// 004713bc: XOR EAX,EAX
// 004713be: MOV AL,byte ptr [EDX + 0x1c]
// 004713c1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 004713c5: MOV EAX,dword ptr [EDX + 0x10]
// 004713c8: FILD word ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 004713cc: SAR EAX,0x10
// 004713cf: FMUL double ptr [0x0061ec42]
//   XREF to: 0061ec42 (READ)
// 004713d5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 004713d8: FILD dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004713db: FDIVP
// 004713dd: FXCH ST2
// 004713df: FSTP float ptr [EDX + 0x34]
// 004713e2: FSTP float ptr [EDX + 0x38]
// 004713e5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004713ea: FISTP dword ptr [EDX + 0x14]
// 004713ed: ADD ESP,0x8
// 004713f0: RET
// 004713f1: MOV dword ptr [EDX + 0x10],0x10000
//   Label: LAB_004713f1
// 004713f8: JMP 0x004713a5
//   XREF to: 004713a5 (UNCONDITIONAL_JUMP)
