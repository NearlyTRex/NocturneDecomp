// Name: sound_snddx.cpp_CDirectSoundDevice_FUN_005b0340
// Address: 005b0340
// Address Range: [[005b0340, 005b038c]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_FUN_005b0340(CDirectSoundDevice * this_ptr)
// Globals:
//   undefined4 DAT_00681df0
//   undefined4 DAT_03f6a9c0

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_FUN_005b0340(CDirectSoundDevice *this_ptr)

{
  if (DAT_03f6a9c0 == (int *)0x0) {
    return;
  }
  (**(code **)(*DAT_03f6a9c0 + 0x10))();
  return;
}


// Assembly code:
// 005b0340: SUB ESP,0x10
//   Label: sound_snddx.cpp_CDirectSoundDevice_FUN_005b0340
// 005b0343: MOV EDX,dword ptr [0x03f6a9c0]
//   XREF to: 03f6a9c0 (READ)
// 005b0349: TEST EDX,EDX
// 005b034b: JNZ 0x005b0351
//   XREF to: 005b0351 (CONDITIONAL_JUMP)
// 005b034d: ADD ESP,0x10
// 005b0350: RET
// 005b0351: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005b0351
//   XREF to: Stack[0x8] (READ)
// 005b0355: PUSH 0x10
// 005b0357: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005b035b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b035f: XOR ECX,ECX
// 005b0361: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005b0365: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005b0369: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005b036d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005b0371: MOV EAX,EDX
// 005b0373: MOV ECX,dword ptr [EDX]
// 005b0375: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 005b0379: PUSH EDX
// 005b037a: PUSH 0x0
// 005b037c: PUSH 0x0
// 005b037e: PUSH 0x0
// 005b0380: PUSH 0x681df0
//   XREF to: 00681df0 (DATA)
// 005b0385: PUSH EAX
// 005b0386: CALL dword ptr [ECX + 0x10]
// 005b0389: ADD ESP,0x10
// 005b038c: RET
