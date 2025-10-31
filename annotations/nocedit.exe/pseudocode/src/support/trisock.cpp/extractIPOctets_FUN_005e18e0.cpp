// Name: support_trisock.cpp_extractIPOctets_FUN_005e18e0
// Address: 005e18e0
// Address Range: [[005e18e0, 005e192b]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_extractIPOctets_FUN_005e18e0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, uint * octet4_ptr)

#include "nocturne.h"

void __cdecl
support_trisock_cpp_extractIPOctets_FUN_005e18e0
          (uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)

{
  if (octet1_ptr != (uint *)0x0) {
    *octet1_ptr = (uint)*ip_bytes;
  }
  if (octet2_ptr != (uint *)0x0) {
    *octet2_ptr = (uint)ip_bytes[1];
  }
  if (octet3_ptr != (uint *)0x0) {
    *octet3_ptr = (uint)ip_bytes[2];
  }
  if (octet4_ptr == (uint *)0x0) {
    return;
  }
  *octet4_ptr = (uint)ip_bytes[3];
  return;
}


// Assembly code:
// 005e18e0: PUSH EBX
//   Label: support_trisock.cpp_extractIPOctets_FUN_005e18e0
// 005e18e1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e18e5: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e18e9: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005e18ed: TEST EBX,EBX
// 005e18ef: JNZ 0x005e1918
//   XREF to: 005e1918 (CONDITIONAL_JUMP)
// 005e18f1: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_005e18f1
//   XREF to: Stack[0xc] (READ)
// 005e18f6: JZ 0x005e1903
//   XREF to: 005e1903 (CONDITIONAL_JUMP)
// 005e18f8: XOR EDX,EDX
// 005e18fa: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005e18fe: MOV DL,byte ptr [EAX + 0x1]
// 005e1901: MOV dword ptr [EBX],EDX
// 005e1903: TEST ECX,ECX
//   Label: LAB_005e1903
// 005e1905: JZ 0x005e190e
//   XREF to: 005e190e (CONDITIONAL_JUMP)
// 005e1907: XOR EDX,EDX
// 005e1909: MOV DL,byte ptr [EAX + 0x2]
// 005e190c: MOV dword ptr [ECX],EDX
// 005e190e: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_005e190e
//   XREF to: Stack[0x14] (READ)
// 005e1912: TEST ECX,ECX
// 005e1914: JNZ 0x005e1920
//   XREF to: 005e1920 (CONDITIONAL_JUMP)
// 005e1916: POP EBX
// 005e1917: RET
// 005e1918: XOR EDX,EDX
//   Label: LAB_005e1918
// 005e191a: MOV DL,byte ptr [EAX]
// 005e191c: MOV dword ptr [EBX],EDX
// 005e191e: JMP 0x005e18f1
//   XREF to: 005e18f1 (UNCONDITIONAL_JUMP)
// 005e1920: MOV AL,byte ptr [EAX + 0x3]
//   Label: LAB_005e1920
// 005e1923: AND EAX,0xff
// 005e1928: MOV dword ptr [ECX],EAX
// 005e192a: POP EBX
// 005e192b: RET
