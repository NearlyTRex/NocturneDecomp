// Name: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// Address: 005f4290
// Address Range: [[005f4290, 005f4304]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290(char * key_path, char * value_name, char * value_data)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005081e2 [UNCONDITIONAL_CALL]
// Globals:
//   RegCloseKey* RegCloseKey = 002119dc
//   RegCreateKeyExA* RegCreateKeyExA = 002119ea
//   RegSetValueExA* RegSetValueExA = 00211a20
//   TerminatedCString s_suck_006581a2
// Function calls:
//   RegCloseKey
//   RegCreateKeyExA
//   RegSetValueExA

#include "nocturne.h"

void __cdecl
wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290
          (char *key_path,char *value_name,char *value_data)

{
  char cVar1;
  LSTATUS LVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  HKEY in_stack_0000001c;
  undefined4 uStack00000028;
  LPCSTR in_stack_00000030;
  HKEY in_stack_00000038;
  HKEY local_c;
  DWORD local_8;
  
  bVar5 = 0;
  LVar2 = (*RegCreateKeyExA)((HKEY)&DAT_80000002,key_path,0,"suck",0,0x20006,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_8);
  if (LVar2 != 0) {
    return;
  }
  uVar3 = 0xffffffff;
  pcVar4 = value_data;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  local_8 = 0x5f42f2;
  (*RegSetValueExA)(in_stack_0000001c,in_stack_00000030,0,1,(BYTE *)value_data,~uVar3);
  uStack00000028 = 0x5f42fe;
  (*RegCloseKey)(in_stack_00000038);
  return;
}


// Assembly code:
// 005f4290: PUSH EBX
//   Label: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
// 005f4291: SUB ESP,0x8
// 005f4294: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f4298: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 005f429c: PUSH EAX
// 005f429d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 005f42a1: PUSH EAX
// 005f42a2: PUSH 0x0
// 005f42a4: PUSH 0x20006
// 005f42a9: PUSH 0x0
// 005f42ab: PUSH 0x6581a2
//   XREF to: 006581a2 (DATA)
// 005f42b0: PUSH 0x0
// 005f42b2: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005f42b6: PUSH EDX
// 005f42b7: PUSH 0x80000002
// 005f42bc: CALL dword ptr CS:[0x611470]
//   XREF to: EXTERNAL:00000029 (COMPUTED_CALL)
//   XREF to: 00611470 (READ)
// 005f42c3: TEST EAX,EAX
// 005f42c5: JZ 0x005f42cc
//   XREF to: 005f42cc (CONDITIONAL_JUMP)
// 005f42c7: ADD ESP,0x8
// 005f42ca: POP EBX
// 005f42cb: RET
// 005f42cc: PUSH EDI
//   Label: LAB_005f42cc
// 005f42cd: PUSH ESI
// 005f42ce: MOV EDI,EBX
// 005f42d0: SUB ECX,ECX
// 005f42d2: DEC ECX
// 005f42d3: XOR EAX,EAX
// 005f42d5: SCASB.REPNE ES:EDI
// 005f42d7: NOT ECX
// 005f42d9: DEC ECX
// 005f42da: INC ECX
// 005f42db: PUSH ECX
// 005f42dc: PUSH EBX
// 005f42dd: PUSH 0x1
// 005f42df: PUSH 0x0
// 005f42e1: MOV ECX,dword ptr [ESP + 0x2c]
// 005f42e5: PUSH ECX
// 005f42e6: MOV EBX,dword ptr [ESP + 0x1c]
// 005f42ea: PUSH EBX
// 005f42eb: CALL dword ptr CS:[0x61147c]
//   XREF to: EXTERNAL:0000002c (COMPUTED_CALL)
//   XREF to: 0061147c (READ)
// 005f42f2: MOV ESI,dword ptr [ESP + 0x8]
// 005f42f6: PUSH ESI
// 005f42f7: CALL dword ptr CS:[0x61146c]
//   XREF to: EXTERNAL:00000028 (COMPUTED_CALL)
//   XREF to: 0061146c (READ)
// 005f42fe: POP ESI
// 005f42ff: POP EDI
// 005f4300: ADD ESP,0x8
// 005f4303: POP EBX
// 005f4304: RET
