// Name: core_fire.cpp_CLaserBeam_FUN_004c2420
// Address: 004c2420
// Address Range: [[004c2420, 004c24c0]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_FUN_004c2420(CLaserBeam * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7eb0 (004c7eb0) at 004c7ef8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7f20 (004c7f20) at 004c7f67 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_FUN_004c2420(CLaserBeam *this_ptr)

{
  CLaserBeam *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  if (this_ptr != in_stack_00000008) {
    *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)in_stack_00000008->field0_0x0;
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 4);
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 8);
  }
  if (this_ptr->field0_0x0 + 0xc != (char *)in_stack_0000000c) {
    *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = *in_stack_0000000c;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = in_stack_0000000c[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = in_stack_0000000c[2];
  }
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = in_stack_00000010;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x1c) = in_stack_00000014;
  if ((0.0 < *(float *)(this_ptr->field0_0x0 + 0x1c)) &&
     (this_ptr->field0_0x0 + 0x20 != (char *)in_stack_00000018)) {
    *(undefined4 *)(this_ptr->field0_0x0 + 0x20) = *in_stack_00000018;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x24) = in_stack_00000018[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0x28) = in_stack_00000018[2];
  }
  *(int *)(this_ptr->field0_0x0 + 0x2c) = in_stack_0000001c << 7;
  *(int *)(this_ptr->field0_0x0 + 0x30) = in_stack_00000020 << 7;
  *(int *)(this_ptr->field0_0x0 + 0x34) = in_stack_00000024 << 7;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x38) = in_stack_00000028;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x3c) = in_stack_0000002c;
  return;
}


// Assembly code:
// 004c2420: PUSH EBX
//   Label: core_fire.cpp_CLaserBeam_FUN_004c2420
// 004c2421: PUSH ESI
// 004c2422: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c2426: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004c242a: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004c242e: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 004c2432: CMP EDX,EAX
// 004c2434: JNZ 0x004c249d
//   XREF to: 004c249d (CONDITIONAL_JUMP)
// 004c2436: LEA EAX,[EDX + 0xc]
//   Label: LAB_004c2436
// 004c2439: CMP EAX,EBX
// 004c243b: JZ 0x004c244d
//   XREF to: 004c244d (CONDITIONAL_JUMP)
// 004c243d: MOV ESI,dword ptr [EBX]
// 004c243f: MOV dword ptr [EAX],ESI
// 004c2441: MOV ESI,dword ptr [EBX + 0x4]
// 004c2444: MOV dword ptr [EAX + 0x4],ESI
// 004c2447: MOV ESI,dword ptr [EBX + 0x8]
// 004c244a: MOV dword ptr [EAX + 0x8],ESI
// 004c244d: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004c244d
//   XREF to: Stack[0x10] (READ)
// 004c2451: MOV dword ptr [EDX + 0x18],EAX
// 004c2454: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004c2458: MOV dword ptr [EDX + 0x1c],EAX
// 004c245b: FLD float ptr [EDX + 0x1c]
// 004c245e: FLDZ
// 004c2460: FCOMPP
// 004c2462: FNSTSW AX
// 004c2464: SAHF
// 004c2465: JNC 0x004c246e
//   XREF to: 004c246e (CONDITIONAL_JUMP)
// 004c2467: LEA EAX,[EDX + 0x20]
// 004c246a: CMP EAX,ECX
// 004c246c: JNZ 0x004c24af
//   XREF to: 004c24af (CONDITIONAL_JUMP)
// 004c246e: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004c246e
//   XREF to: Stack[0x1c] (READ)
// 004c2472: SHL EAX,0x7
// 004c2475: MOV dword ptr [EDX + 0x2c],EAX
// 004c2478: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x20] (READ)
// 004c247c: SHL EAX,0x7
// 004c247f: MOV dword ptr [EDX + 0x30],EAX
// 004c2482: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x24] (READ)
// 004c2486: SHL EAX,0x7
// 004c2489: MOV dword ptr [EDX + 0x34],EAX
// 004c248c: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x28] (READ)
// 004c2490: MOV dword ptr [EDX + 0x38],EAX
// 004c2493: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x2c] (READ)
// 004c2497: MOV dword ptr [EDX + 0x3c],EAX
// 004c249a: POP ESI
// 004c249b: POP EBX
// 004c249c: RET
// 004c249d: MOV ESI,dword ptr [EAX]
//   Label: LAB_004c249d
// 004c249f: MOV dword ptr [EDX],ESI
// 004c24a1: MOV ESI,dword ptr [EAX + 0x4]
// 004c24a4: MOV dword ptr [EDX + 0x4],ESI
// 004c24a7: MOV ESI,dword ptr [EAX + 0x8]
// 004c24aa: MOV dword ptr [EDX + 0x8],ESI
// 004c24ad: JMP 0x004c2436
//   XREF to: 004c2436 (UNCONDITIONAL_JUMP)
// 004c24af: MOV EBX,dword ptr [ECX]
//   Label: LAB_004c24af
// 004c24b1: MOV dword ptr [EAX],EBX
// 004c24b3: MOV EBX,dword ptr [ECX + 0x4]
// 004c24b6: MOV dword ptr [EAX + 0x4],EBX
// 004c24b9: MOV EBX,dword ptr [ECX + 0x8]
// 004c24bc: MOV dword ptr [EAX + 0x8],EBX
// 004c24bf: JMP 0x004c246e
//   XREF to: 004c246e (UNCONDITIONAL_JUMP)
