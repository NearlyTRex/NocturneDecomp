// Name: support_trisock.cpp_buildIPAddress_FUN_005e1870
// Address: 005e1870
// Address Range: [[005e1870, 005e18d1]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_buildIPAddress_FUN_005e1870(uint8_t * dest_ip, int octet1, int octet2, int octet3, int octet4)
// Cross-references:
//   support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750 (005e1750) at 005e176d [UNCONDITIONAL_CALL]
//   support_trisock.cpp_parseIPComponents_FUN_005e1800 (005e1800) at 005e1852 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
support_trisock_cpp_buildIPAddress_FUN_005e1870
          (uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  if (((((-1 < octet1) && (octet1 < 0x100)) && (-1 < octet2)) && ((octet2 < 0x100 && (-1 < octet3)))
      ) && ((octet3 < 0x100 && ((-1 < octet4 && (octet4 < 0x100)))))) {
    dest_ip[1] = (uint8_t)octet2;
    dest_ip[2] = (uint8_t)octet3;
    dest_ip[3] = (uint8_t)octet4;
    *dest_ip = (uint8_t)octet1;
    return 1;
  }
  return 0;
}


// Assembly code:
// 005e1870: PUSH EBX
//   Label: support_trisock.cpp_buildIPAddress_FUN_005e1870
// 005e1871: PUSH ESI
// 005e1872: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e1876: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005e187a: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005e187e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 005e1882: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e1886: TEST ESI,ESI
// 005e1888: JL 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e188a: CMP ESI,0xff
// 005e1890: JG 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e1892: TEST EBX,EBX
// 005e1894: JL 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e1896: CMP EBX,0xff
// 005e189c: JG 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e189e: TEST ECX,ECX
// 005e18a0: JL 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e18a2: CMP ECX,0xff
// 005e18a8: JG 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e18aa: TEST EDX,EDX
// 005e18ac: JL 0x005e18b6
//   XREF to: 005e18b6 (CONDITIONAL_JUMP)
// 005e18ae: CMP EDX,0xff
// 005e18b4: JLE 0x005e18bb
//   XREF to: 005e18bb (CONDITIONAL_JUMP)
// 005e18b6: XOR EAX,EAX
//   Label: LAB_005e18b6
// 005e18b8: POP ESI
// 005e18b9: POP EBX
// 005e18ba: RET
// 005e18bb: MOV byte ptr [EAX + 0x1],BL
//   Label: LAB_005e18bb
// 005e18be: MOV DH,byte ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e18c2: MOV byte ptr [EAX + 0x2],CL
// 005e18c5: MOV byte ptr [EAX + 0x3],DL
// 005e18c8: MOV byte ptr [EAX],DH
// 005e18ca: MOV EAX,0x1
// 005e18cf: POP ESI
// 005e18d0: POP EBX
// 005e18d1: RET
