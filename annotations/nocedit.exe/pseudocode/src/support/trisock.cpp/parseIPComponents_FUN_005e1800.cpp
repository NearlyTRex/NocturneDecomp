// Name: support_trisock.cpp_parseIPComponents_FUN_005e1800
// Address: 005e1800
// Address Range: [[005e1800, 005e1861]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_parseIPComponents_FUN_005e1800(uint * result_ptr, char * dotted_decimal_string)
// Cross-references:
//   support_trisock.cpp_parseIPAddress_FUN_005e1700 (005e1700) at 005e170b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_d_d_006564e8
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   support_trisock.cpp_buildIPAddress_FUN_005e1870

#include "nocturne.h"

int __cdecl
support_trisock_cpp_parseIPComponents_FUN_005e1800(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = crt_stdio_c_sscanf_FUN_0060013c
                    (dotted_decimal_string,"%d.%d.%d.%d",&stack0xffffffec,&local_10,&local_c,
                     &local_8);
  if (iVar1 != 4) {
    return 0;
  }
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_005e1870
                    ((uint8_t *)dotted_decimal_string,local_10,local_c,local_8,unaff_EBP);
  return iVar1;
}


// Assembly code:
// 005e1800: PUSH EBP
//   Label: support_trisock.cpp_parseIPComponents_FUN_005e1800
// 005e1801: SUB ESP,0x10
// 005e1804: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x8] (DATA)
// 005e1808: PUSH EAX
// 005e1809: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xc] (DATA)
// 005e180d: PUSH EAX
// 005e180e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 005e1812: PUSH EAX
// 005e1813: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 005e1817: PUSH EAX
// 005e1818: PUSH 0x6564e8
//   XREF to: 006564e8 (DATA)
// 005e181d: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 005e1821: PUSH EDX
// 005e1822: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005e1827: ADD ESP,0x18
// 005e182a: CMP EAX,0x4
// 005e182d: JZ 0x005e1836
//   XREF to: 005e1836 (CONDITIONAL_JUMP)
// 005e182f: XOR EAX,EAX
// 005e1831: ADD ESP,0x10
// 005e1834: POP EBP
// 005e1835: RET
// 005e1836: PUSH EDI
//   Label: LAB_005e1836
// 005e1837: PUSH ESI
// 005e1838: PUSH EBX
// 005e1839: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 005e183d: PUSH ECX
// 005e183e: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 005e1842: PUSH EBX
// 005e1843: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 005e1847: PUSH ESI
// 005e1848: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 005e184c: PUSH EDI
// 005e184d: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005e1851: PUSH EBP
// 005e1852: CALL support_trisock.cpp_buildIPAddress_FUN_005e1870
//   XREF to: 005e1870 (UNCONDITIONAL_CALL)
// 005e1857: ADD ESP,0x14
// 005e185a: POP EBX
// 005e185b: POP ESI
// 005e185c: POP EDI
// 005e185d: ADD ESP,0x10
// 005e1860: POP EBP
// 005e1861: RET
