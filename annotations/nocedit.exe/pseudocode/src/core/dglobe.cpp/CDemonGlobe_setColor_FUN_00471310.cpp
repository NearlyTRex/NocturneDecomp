// Name: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
// Address: 00471310
// Address Range: [[00471310, 0047135c]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422b22 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a81a5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0b99 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c1940 (004c1940) at 004c1953 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cad90 (004cad90) at 004caddc [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501710 (00501710) at 00501740 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee5e0 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061ec32 = 256
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe *this_ptr,CColor3f *color)

{
  CVector3f *pCVar1;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  
  pCVar1 = &this_ptr->position;
  if ((CColor3f *)pCVar1 != color) {
    pCVar1->x = color->r;
    (this_ptr->position).y = color->g;
    (this_ptr->position).z = color->b;
  }
  fVar2 = (float10)DOUBLE_0061ec32;
  fVar3 = (float10)color->r * fVar2;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar1,color));
  *extraout_ECX = (int)ROUND(fVar3);
  fVar3 = (float10)*(float *)(SUB84(dVar4,0) + 4) * fVar2;
  dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4);
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(fVar3);
  fVar2 = fVar2 * (float10)*(float *)(SUB84(dVar4,0) + 8);
  crt_math_c_round_FUN_005fe6b0(dVar4);
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(fVar2);
  return;
}


// Assembly code:
// 00471310: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: Stack[0x4] (READ)
// 00471314: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00471318: LEA EDX,[ECX + 0x24]
// 0047131b: CMP EDX,EAX
// 0047131d: JNZ 0x00471349
//   XREF to: 00471349 (CONDITIONAL_JUMP)
// 0047131f: FLD double ptr [0x0061ec32]
//   Label: LAB_0047131f
//   XREF to: 0061ec32 (READ)
// 00471325: FLD float ptr [EAX]
// 00471327: FMUL ST1
// 00471329: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047132e: FISTP dword ptr [ECX]
// 00471330: FLD float ptr [EAX + 0x4]
// 00471333: FMUL ST1
// 00471335: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047133a: FISTP dword ptr [ECX + 0x4]
// 0047133d: FMUL float ptr [EAX + 0x8]
// 00471340: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00471345: FISTP dword ptr [ECX + 0x8]
// 00471348: RET
// 00471349: PUSH EBX
//   Label: LAB_00471349
// 0047134a: MOV EBX,dword ptr [EAX]
// 0047134c: MOV dword ptr [EDX],EBX
// 0047134e: MOV EBX,dword ptr [EAX + 0x4]
// 00471351: MOV dword ptr [EDX + 0x4],EBX
// 00471354: MOV EBX,dword ptr [EAX + 0x8]
// 00471357: MOV dword ptr [EDX + 0x8],EBX
// 0047135a: POP EBX
// 0047135b: JMP 0x0047131f
//   XREF to: 0047131f (UNCONDITIONAL_JUMP)
