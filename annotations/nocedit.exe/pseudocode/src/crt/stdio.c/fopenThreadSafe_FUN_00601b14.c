// Name: crt_stdio.c_fopenThreadSafe_FUN_00601b14
// Address: 00601b14
// Address Range: [[00601b14, 00601ba5]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_fopenThreadSafe_FUN_00601b14(char * filename, char * mode, FILE * * output_file_ptr)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b2e [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = 00000000
// Function calls:
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
//   crt_stdio.c_OpenModeStringParser_FUN_006017d0
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_fopenThreadSafe_FUN_00601b14(char *filename,char *mode,FILE **output_file_ptr)

{
  FILE *file_index;
  FILE *parsed_mode_flags;
  FILE *file_struct;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000024;
  char *in_stack_00000028;
  
  parsed_mode_flags = (FILE *)crt_stdio_c_OpenModeStringParser_FUN_006017d0(mode,&stack0xffffffec);
  if (parsed_mode_flags != (FILE *)0x0) {
    file_index = output_file_ptr[4];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)((int)file_index);
    if (g_SpecialDeviceCleanupFunc != (SPECIAL_DEVICE_CLEANUP_FUNC *)0x0) {
      (*g_SpecialDeviceCleanupFunc)((int)file_index);
    }
    file_struct = (FILE *)crt_unknown_c_MultipleDoNothingCalls_FUN_00601a94();
    if (file_struct != (FILE *)0x0) {
      file_struct->_flag = file_struct->_flag & 0x4000;
      file_struct = crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
                              (in_stack_00000024,*in_stack_00000028,(int)parsed_mode_flags,
                               (int)output_file_ptr,0,file_struct);
    }
    parsed_mode_flags = file_struct;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)((int)file_index);
  }
  return parsed_mode_flags;
}


// Assembly code:
// 00601b14: PUSH EBX
//   Label: crt_stdio.c_fopenThreadSafe_FUN_00601b14
// 00601b15: PUSH ESI
// 00601b16: PUSH EDI
// 00601b17: PUSH EBP
// 00601b18: SUB ESP,0x4
// 00601b1b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00601b1f: MOV EAX,ESP
// 00601b21: PUSH EAX
// 00601b22: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00601b26: PUSH EDX
// 00601b27: CALL crt_stdio.c_OpenModeStringParser_FUN_006017d0
//   XREF to: 006017d0 (UNCONDITIONAL_CALL)
// 00601b2c: ADD ESP,0x8
// 00601b2f: MOV EDI,EAX
// 00601b31: TEST EAX,EAX
// 00601b33: JZ 0x00601b9e
//   XREF to: 00601b9e (CONDITIONAL_JUMP)
// 00601b35: MOV EBX,dword ptr [ESI + 0x10]
// 00601b38: PUSH EBX
// 00601b39: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 00601b3f: MOV ECX,dword ptr [0x00685288]
//   XREF to: 00685288 (READ)
// 00601b45: ADD ESP,0x4
// 00601b48: TEST ECX,ECX
// 00601b4a: JZ 0x00601b56
//   XREF to: 00601b56 (CONDITIONAL_JUMP)
// 00601b4c: PUSH EBX
// 00601b4d: CALL dword ptr [g_SpecialDeviceCleanupFunc]
//   XREF to: 00685288 (READ)
// 00601b53: ADD ESP,0x4
// 00601b56: PUSH ESI
//   Label: LAB_00601b56
// 00601b57: CALL crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
//   XREF to: 00601a94 (UNCONDITIONAL_CALL)
// 00601b5c: ADD ESP,0x4
// 00601b5f: MOV ESI,EAX
// 00601b61: TEST EAX,EAX
// 00601b63: JZ 0x00601b92
//   XREF to: 00601b92 (CONDITIONAL_JUMP)
// 00601b65: MOV ESI,dword ptr [EAX + 0xc]
// 00601b68: AND ESI,0x4000
// 00601b6e: PUSH EAX
// 00601b6f: MOV dword ptr [EAX + 0xc],ESI
// 00601b72: PUSH 0x0
// 00601b74: MOV EBP,dword ptr [ESP + 0x8]
// 00601b78: PUSH EBP
// 00601b79: MOV ESI,dword ptr [ESP + 0x28]
// 00601b7d: XOR EAX,EAX
// 00601b7f: PUSH EDI
// 00601b80: MOV AL,byte ptr [ESI]
// 00601b82: PUSH EAX
// 00601b83: MOV EAX,dword ptr [ESP + 0x2c]
// 00601b87: PUSH EAX
// 00601b88: CALL crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
//   XREF to: 0060190c (UNCONDITIONAL_CALL)
// 00601b8d: ADD ESP,0x18
// 00601b90: MOV ESI,EAX
// 00601b92: PUSH EBX
//   Label: LAB_00601b92
// 00601b93: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00601b99: ADD ESP,0x4
// 00601b9c: MOV EAX,ESI
// 00601b9e: ADD ESP,0x4
//   Label: LAB_00601b9e
// 00601ba1: POP EBP
// 00601ba2: POP EDI
// 00601ba3: POP ESI
// 00601ba4: POP EBX
// 00601ba5: RET
