// Name: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
// Address: 004a9410
// Address Range: [[004a9410, 004a94b7]]
// Convention: __cdecl
// Signature: void core_emitter.cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo * this_ptr, SLaserInfo * copy)

#include "nocturne.h"

void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy)

{
  *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)copy->field0_0x0;
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(copy->field0_0x0 + 4);
  *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(copy->field0_0x0 + 8);
  *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = *(undefined4 *)(copy->field0_0x0 + 0xc);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = *(undefined4 *)(copy->field0_0x0 + 0x10);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = *(undefined4 *)(copy->field0_0x0 + 0x14);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = *(undefined4 *)(copy->field0_0x0 + 0x18);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x1c) = *(undefined4 *)(copy->field0_0x0 + 0x1c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x20) = *(undefined4 *)(copy->field0_0x0 + 0x20);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x24) = *(undefined4 *)(copy->field0_0x0 + 0x24);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x28) = *(undefined4 *)(copy->field0_0x0 + 0x28);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x2c) = *(undefined4 *)(copy->field0_0x0 + 0x2c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x30) = *(undefined4 *)(copy->field0_0x0 + 0x30);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x34) = *(undefined4 *)(copy->field0_0x0 + 0x34);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x38) = *(undefined4 *)(copy->field0_0x0 + 0x38);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x3c) = *(undefined4 *)(copy->field0_0x0 + 0x3c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x40) = *(undefined4 *)(copy->field0_0x0 + 0x40);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x44) = *(undefined4 *)(copy->field0_0x0 + 0x44);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x48) = *(undefined4 *)(copy->field0_0x0 + 0x48);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x4c) = *(undefined4 *)(copy->field0_0x0 + 0x4c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x50) = *(undefined4 *)(copy->field0_0x0 + 0x50);
  return;
}


// Assembly code:
// 004a9410: PUSH EBX
//   Label: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
// 004a9411: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a9415: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a9419: MOV ECX,dword ptr [EDX]
// 004a941b: MOV dword ptr [EAX],ECX
// 004a941d: MOV ECX,dword ptr [EDX + 0x4]
// 004a9420: MOV dword ptr [EAX + 0x4],ECX
// 004a9423: MOV ECX,dword ptr [EDX + 0x8]
// 004a9426: MOV dword ptr [EAX + 0x8],ECX
// 004a9429: MOV ECX,dword ptr [EDX + 0xc]
// 004a942c: MOV dword ptr [EAX + 0xc],ECX
// 004a942f: MOV ECX,dword ptr [EDX + 0x10]
// 004a9432: MOV dword ptr [EAX + 0x10],ECX
// 004a9435: MOV ECX,dword ptr [EDX + 0x14]
// 004a9438: MOV dword ptr [EAX + 0x14],ECX
// 004a943b: MOV ECX,dword ptr [EDX + 0x18]
// 004a943e: MOV dword ptr [EAX + 0x18],ECX
// 004a9441: MOV ECX,dword ptr [EDX + 0x1c]
// 004a9444: MOV dword ptr [EAX + 0x1c],ECX
// 004a9447: LEA ECX,[EAX + 0x20]
// 004a944a: LEA EAX,[EDX + 0x20]
// 004a944d: MOV EBX,dword ptr [EAX]
// 004a944f: MOV dword ptr [ECX],EBX
// 004a9451: LEA EBX,[EAX + 0x4]
// 004a9454: ADD ECX,0x4
// 004a9457: MOV EBX,dword ptr [EBX]
// 004a9459: MOV dword ptr [ECX],EBX
// 004a945b: ADD ECX,0x4
// 004a945e: MOV EAX,dword ptr [EAX + 0x8]
// 004a9461: MOV dword ptr [ECX],EAX
// 004a9463: LEA EAX,[EDX + 0x2c]
// 004a9466: ADD ECX,0x4
// 004a9469: MOV EBX,dword ptr [EAX]
// 004a946b: MOV dword ptr [ECX],EBX
// 004a946d: LEA EBX,[EAX + 0x4]
// 004a9470: ADD ECX,0x4
// 004a9473: MOV EBX,dword ptr [EBX]
// 004a9475: MOV dword ptr [ECX],EBX
// 004a9477: ADD ECX,0x4
// 004a947a: MOV EAX,dword ptr [EAX + 0x8]
// 004a947d: MOV dword ptr [ECX],EAX
// 004a947f: LEA EAX,[EDX + 0x38]
// 004a9482: ADD ECX,0x4
// 004a9485: MOV EBX,dword ptr [EAX]
// 004a9487: MOV dword ptr [ECX],EBX
// 004a9489: LEA EBX,[EAX + 0x4]
// 004a948c: ADD ECX,0x4
// 004a948f: MOV EBX,dword ptr [EBX]
// 004a9491: MOV dword ptr [ECX],EBX
// 004a9493: ADD ECX,0x4
// 004a9496: MOV EAX,dword ptr [EAX + 0x8]
// 004a9499: MOV dword ptr [ECX],EAX
// 004a949b: LEA EAX,[ECX + -0x40]
// 004a949e: MOV ECX,dword ptr [EDX + 0x44]
// 004a94a1: MOV dword ptr [EAX + 0x44],ECX
// 004a94a4: MOV ECX,dword ptr [EDX + 0x48]
// 004a94a7: MOV dword ptr [EAX + 0x48],ECX
// 004a94aa: MOV ECX,dword ptr [EDX + 0x4c]
// 004a94ad: MOV dword ptr [EAX + 0x4c],ECX
// 004a94b0: MOV ECX,dword ptr [EDX + 0x50]
// 004a94b3: MOV dword ptr [EAX + 0x50],ECX
// 004a94b6: POP EBX
// 004a94b7: RET
