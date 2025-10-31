// Name: crt_file.c_setReadonlyAttribute_FUN_00600c30
// Address: 00600c30
// Address Range: [[00600c30, 00600c72]]
// Convention: __cdecl
// Signature: DWORD crt_file.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fbda3 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507aeb [UNCONDITIONAL_CALL]
//   engine_dosio.c_setFileAttributes_FUN_004819f0 (004819f0) at 00481a09 [UNCONDITIONAL_CALL]
// Globals:
//   SetFileAttributesA* SetFileAttributesA = 002121a0
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_file.c_get_file_attributes_FUN_006082e0
//   SetFileAttributesA

#include "nocturne.h"

DWORD __cdecl crt_file_c_setReadonlyAttribute_FUN_00600c30(char *filename,DWORD file_attributes)

{
  DWORD DVar1;
  BOOL BVar2;
  byte in_stack_0000000c;
  
  DVar1 = crt_file_c_get_file_attributes_FUN_006082e0(filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar1;
  }
  DVar1 = DVar1 & 0xfffffffe;
  if ((in_stack_0000000c & 0x80) == 0) {
    DVar1 = DVar1 | 1;
  }
  BVar2 = (*SetFileAttributesA)((LPCSTR)file_attributes,DVar1);
  if (BVar2 == 0) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar1;
  }
  return 0;
}


// Assembly code:
// 00600c30: PUSH EBX
//   Label: crt_file.c_setReadonlyAttribute_FUN_00600c30
// 00600c31: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600c35: PUSH EDX
// 00600c36: CALL crt_file.c_get_file_attributes_FUN_006082e0
//   XREF to: 006082e0 (UNCONDITIONAL_CALL)
// 00600c3b: ADD ESP,0x4
// 00600c3e: CMP EAX,-0x1
// 00600c41: JNZ 0x00600c4a
//   XREF to: 00600c4a (CONDITIONAL_JUMP)
// 00600c43: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00600c48: POP EBX
// 00600c49: RET
// 00600c4a: MOV DL,byte ptr [ESP + 0xc]
//   Label: LAB_00600c4a
//   XREF to: Stack[0x8] (READ)
// 00600c4e: AND AL,0xfe
// 00600c50: TEST DL,0x80
// 00600c53: JNZ 0x00600c57
//   XREF to: 00600c57 (CONDITIONAL_JUMP)
// 00600c55: OR AL,0x1
// 00600c57: PUSH EAX
//   Label: LAB_00600c57
// 00600c58: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00600c5c: PUSH EBX
// 00600c5d: CALL dword ptr CS:[0x611628]
//   XREF to: EXTERNAL:00000095 (COMPUTED_CALL)
//   XREF to: 00611628 (READ)
// 00600c64: TEST EAX,EAX
// 00600c66: JNZ 0x00600c6f
//   XREF to: 00600c6f (CONDITIONAL_JUMP)
// 00600c68: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00600c6d: POP EBX
// 00600c6e: RET
// 00600c6f: XOR EAX,EAX
//   Label: LAB_00600c6f
// 00600c71: POP EBX
// 00600c72: RET
