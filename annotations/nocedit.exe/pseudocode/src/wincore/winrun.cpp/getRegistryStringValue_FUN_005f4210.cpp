// Name: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// Address: 005f4210
// Address Range: [[005f4210, 005f4285]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210(char * key_path, char * value_name, char * output_buffer, uint * buffer_size)
// Globals:
//   RegCloseKey* RegCloseKey = 002119dc
//   RegOpenKeyExA* PTR_RegOpenKeyExA_00611474 = 002119fc
//   RegQueryValueExA* PTR_RegQueryValueExA_00611478 = 00211a0c
//   undefined4 DAT_80000002

#include "nocturne.h"

void __cdecl
wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210
          (char *key_path,char *value_name,char *output_buffer,uint *buffer_size)

{
  LSTATUS LVar1;
  BADSPACEBASE *in_ESP;
  LPCSTR in_stack_00000004;
  LPCSTR in_stack_00000020;
  HKEY in_stack_00000024;
  char *in_stack_00000028;
  
  *value_name = '\0';
  LVar1 = (*PTR_RegOpenKeyExA_00611474)
                    ((HKEY)&DAT_80000002,in_stack_00000004,0,1,(PHKEY)&stack0xfffffff0);
  if (LVar1 != 0) {
    return;
  }
  value_name = in_stack_00000028;
  output_buffer = &DAT_00000001;
  (*PTR_RegQueryValueExA_00611478)
            ((HKEY)key_path,in_stack_00000020,(LPDWORD)0x0,(LPDWORD)&output_buffer,
             (LPBYTE)in_stack_00000024,(LPDWORD)&value_name);
  buffer_size = (uint *)in_stack_00000024;
  output_buffer = (char *)0x5f427e;
  (*RegCloseKey)(in_stack_00000024);
  return;
}


// Assembly code:
// 005f4210: PUSH EBP
//   Label: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
// 005f4211: SUB ESP,0xc
// 005f4214: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005f4218: MOV byte ptr [EAX],0x0
// 005f421b: MOV EAX,ESP
// 005f421d: PUSH EAX
// 005f421e: PUSH 0x1
// 005f4220: PUSH 0x0
// 005f4222: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005f4226: PUSH EDX
// 005f4227: PUSH 0x80000002
//   XREF to: 80000002 (DATA)
// 005f422c: CALL dword ptr CS:[0x611474]
//   XREF to: 00611474 (READ)
// 005f4233: TEST EAX,EAX
// 005f4235: JZ 0x005f423c
//   XREF to: 005f423c (CONDITIONAL_JUMP)
// 005f4237: ADD ESP,0xc
// 005f423a: POP EBP
// 005f423b: RET
// 005f423c: PUSH EDI
//   Label: LAB_005f423c
// 005f423d: PUSH ESI
// 005f423e: PUSH EBX
// 005f423f: MOV EAX,dword ptr [ESP + 0x2c]
// 005f4243: MOV dword ptr [ESP + 0x10],EAX
// 005f4247: LEA EAX,[ESP + 0x10]
// 005f424b: PUSH EAX
// 005f424c: MOV EBX,dword ptr [ESP + 0x2c]
// 005f4250: PUSH EBX
// 005f4251: LEA EAX,[ESP + 0x1c]
// 005f4255: PUSH EAX
// 005f4256: PUSH 0x0
// 005f4258: MOV ESI,dword ptr [ESP + 0x34]
// 005f425c: PUSH ESI
// 005f425d: MOV EDI,dword ptr [ESP + 0x20]
// 005f4261: MOV ECX,0x1
// 005f4266: PUSH EDI
// 005f4267: MOV dword ptr [ESP + 0x2c],ECX
// 005f426b: CALL dword ptr CS:[0x611478]
//   XREF to: 00611478 (READ)
// 005f4272: MOV EBP,dword ptr [ESP + 0xc]
// 005f4276: PUSH EBP
// 005f4277: CALL dword ptr CS:[0x61146c]
//   XREF to: 0061146c (READ)
// 005f427e: POP EBX
// 005f427f: POP ESI
// 005f4280: POP EDI
// 005f4281: ADD ESP,0xc
// 005f4284: POP EBP
// 005f4285: RET
