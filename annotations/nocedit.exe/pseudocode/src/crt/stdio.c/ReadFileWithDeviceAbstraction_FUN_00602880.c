// Name: crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
// Address: 00602880
// Address Range: [[00602880, 00602948]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index, void * buffer, int bytes_to_read)
// Cross-references:
//   crt_stdio.c_FillInputBuffer_FUN_005fe940 (005fe940) at 005fe9cf [UNCONDITIONAL_CALL]
//   crt_stdio.c_fread_FUN_005fd990 (005fd990) at 005fdaa9 [UNCONDITIONAL_CALL]
// Globals:
//   ReadFile* PTR_ReadFile_00611604 = 002120f2
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   ReadFile

#include "nocturne.h"

int __watcallStack
crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880
          (int file_handle_index,void *buffer,int bytes_to_read)

{
  int file_handle_index_00;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000014;
  void *in_stack_00000020;
  DWORD in_stack_00000024;
  int in_stack_00000028;
  
  file_handle_index_00 = file_handle_index;
  if ((file_handle_index < 0) || (g_MaxHandleCount < (uint)file_handle_index)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    in_stack_00000028 = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    if (g_SpecialDeviceReadFuncPtr != (SPECIAL_DEVICE_READ_FUNC *)0x0) {
      iVar1 = (*g_IsSpecialDeviceFuncPtr)(file_handle_index_00);
      if (iVar1 != 0) {
        iVar1 = (*g_SpecialDeviceReadFuncPtr)(iVar1,in_stack_00000020,in_stack_00000024);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
        return iVar1;
      }
    }
    BVar2 = (*PTR_ReadFile_00611604)
                      (g_IOControlBlock->standard_handles[file_handle_index_00],in_stack_00000020,
                       in_stack_00000024,(LPDWORD)&file_handle_index,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      uStack00000014 = 0x602924;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
      DVar3 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar3;
    }
    uStack00000014 = 0x60293b;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
  }
  return in_stack_00000028;
}


// Assembly code:
// 00602880: PUSH EBX
//   Label: crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
// 00602881: PUSH ESI
// 00602882: PUSH EDI
// 00602883: PUSH EBP
// 00602884: SUB ESP,0x4
// 00602887: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060288b: TEST EBX,EBX
// 0060288d: JL 0x00602897
//   XREF to: 00602897 (CONDITIONAL_JUMP)
// 0060288f: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00602895: JBE 0x006028ab
//   XREF to: 006028ab (CONDITIONAL_JUMP)
// 00602897: PUSH 0x4
//   Label: LAB_00602897
// 00602899: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060289e: MOV EAX,0xffffffff
// 006028a3: ADD ESP,0x4
// 006028a6: JMP 0x00602941
//   XREF to: 00602941 (UNCONDITIONAL_JUMP)
// 006028ab: PUSH EBX
//   Label: LAB_006028ab
// 006028ac: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006028b2: MOV ECX,dword ptr [0x006852ac]
//   XREF to: 006852ac (READ)
// 006028b8: ADD ESP,0x4
// 006028bb: TEST ECX,ECX
// 006028bd: JZ 0x006028f7
//   XREF to: 006028f7 (CONDITIONAL_JUMP)
// 006028bf: PUSH EBX
// 006028c0: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 006028c6: ADD ESP,0x4
// 006028c9: TEST EAX,EAX
// 006028cb: JZ 0x006028f7
//   XREF to: 006028f7 (CONDITIONAL_JUMP)
// 006028cd: MOV EDX,dword ptr [ESP + 0x20]
// 006028d1: PUSH EDX
// 006028d2: MOV ECX,dword ptr [ESP + 0x20]
// 006028d6: PUSH ECX
// 006028d7: PUSH EAX
// 006028d8: CALL dword ptr [g_SpecialDeviceReadFuncPtr]
//   XREF to: 006852ac (READ)
// 006028de: ADD ESP,0xc
// 006028e1: PUSH EBX
// 006028e2: MOV ESI,EAX
// 006028e4: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006028ea: ADD ESP,0x4
// 006028ed: MOV EAX,ESI
// 006028ef: ADD ESP,0x4
// 006028f2: POP EBP
// 006028f3: POP EDI
// 006028f4: POP ESI
// 006028f5: POP EBX
// 006028f6: RET
// 006028f7: PUSH 0x0
//   Label: LAB_006028f7
// 006028f9: LEA EAX,[ESP + 0x4]
// 006028fd: PUSH EAX
// 006028fe: MOV EDI,dword ptr [ESP + 0x28]
// 00602902: PUSH EDI
// 00602903: MOV EBP,dword ptr [ESP + 0x28]
// 00602907: MOV ESI,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 0060290d: PUSH EBP
// 0060290e: MOV ESI,dword ptr [ESI + EBX*0x4]
// 00602911: PUSH ESI
// 00602912: CALL dword ptr CS:[0x611604]
//   XREF to: EXTERNAL:0000008c (COMPUTED_CALL)
//   XREF to: 00611604 (READ)
// 00602919: TEST EAX,EAX
// 0060291b: JNZ 0x00602934
//   XREF to: 00602934 (CONDITIONAL_JUMP)
// 0060291d: PUSH EBX
// 0060291e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00602924: ADD ESP,0x4
// 00602927: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060292c: ADD ESP,0x4
// 0060292f: POP EBP
// 00602930: POP EDI
// 00602931: POP ESI
// 00602932: POP EBX
// 00602933: RET
// 00602934: PUSH EBX
//   Label: LAB_00602934
// 00602935: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060293b: ADD ESP,0x4
// 0060293e: MOV EAX,dword ptr [ESP]
// 00602941: ADD ESP,0x4
//   Label: LAB_00602941
// 00602944: POP EBP
// 00602945: POP EDI
// 00602946: POP ESI
// 00602947: POP EBX
// 00602948: RET
