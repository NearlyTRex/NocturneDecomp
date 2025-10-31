// Name: crt_unknown.c_staticInit_FUN_0060be80
// Address: 0060be80
// Address Range: [[0060be80, 0060bef9]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_0060be80()
// Globals:
//   undefined1 DAT_00684acd
//   byte g_UseSoftwareMath = 0x0
// Function calls:
//   crt_unknown.c_FUN_0060dcf6
//   crt_unknown.c_FUN_0060defc
//   crt_unknown.c_FUN_0060e0b9
//   crt_unknown.c_FUN_0060e256

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_0060be80
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 unaff_retaddr;
  
  cVar3 = SBORROW1(DAT_00684acd,'\x03');
  cVar2 = (char)(DAT_00684acd - 3) < '\0';
  uVar1 = DAT_00684acd == 3;
  if (2 < DAT_00684acd) {
    uVar4 = crt_unknown_c_FUN_0060dcf6(0xc0000000,0x4150017e,0x80000000,0x4147ffff);
    uVar4 = crt_unknown_c_FUN_0060e0b9
                      ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x4147ffff,0xc0000000);
    uVar4 = crt_unknown_c_FUN_0060defc
                      (unaff_EBX,unaff_retaddr,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    crt_unknown_c_FUN_0060e256((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xe2308c3a,0x3e45798e);
    if (!(bool)uVar1 && cVar3 == cVar2) {
      g_UseSoftwareMath = g_UseSoftwareMath | 1;
    }
  }
  return;
}


// Assembly code:
// 0060be80: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_0060be80
// 0060be81: SUB ESP,0x10
// 0060be84: MOV dword ptr [ESP + 0x8],0xc0000000
//   XREF to: Stack[-0xc] (WRITE)
// 0060be8c: MOV dword ptr [ESP + 0xc],0x4150017e
//   XREF to: Stack[-0x8] (WRITE)
// 0060be94: MOV dword ptr [ESP],0x80000000
//   XREF to: Stack[-0x14] (DATA)
// 0060be9b: MOV dword ptr [ESP + 0x4],0x4147ffff
//   XREF to: Stack[-0x10] (WRITE)
// 0060bea3: CMP byte ptr [0x00684acd],0x3
//   XREF to: 00684acd (READ)
// 0060beaa: JC 0x0060bef5
//   XREF to: 0060bef5 (CONDITIONAL_JUMP)
// 0060beac: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0060beb0: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 0060beb4: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0060beb7: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0060bebb: CALL crt_unknown.c_FUN_0060dcf6
//   XREF to: 0060dcf6 (UNCONDITIONAL_CALL)
// 0060bec0: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0060bec3: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0060bec7: CALL crt_unknown.c_FUN_0060e0b9
//   XREF to: 0060e0b9 (UNCONDITIONAL_CALL)
// 0060becc: MOV EBX,EAX
// 0060bece: MOV ECX,EDX
// 0060bed0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0060bed4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 0060bed8: CALL crt_unknown.c_FUN_0060defc
//   XREF to: 0060defc (UNCONDITIONAL_CALL)
// 0060bedd: MOV EBX,0xe2308c3a
// 0060bee2: MOV ECX,0x3e45798e
// 0060bee7: CALL crt_unknown.c_FUN_0060e256
//   XREF to: 0060e256 (UNCONDITIONAL_CALL)
// 0060beec: JLE 0x0060bef5
//   XREF to: 0060bef5 (CONDITIONAL_JUMP)
// 0060beee: OR byte ptr [0x00685060],0x1
//   XREF to: 00685060 (READ_WRITE)
// 0060bef5: ADD ESP,0x10
//   Label: LAB_0060bef5
// 0060bef8: POP EBX
// 0060bef9: RET
