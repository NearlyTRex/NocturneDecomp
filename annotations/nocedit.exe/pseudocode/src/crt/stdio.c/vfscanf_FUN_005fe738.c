// Name: crt_stdio.c_vfscanf_FUN_005fe738
// Address: 005fe738
// Address Range: [[005fe738, 005fe7bc]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vfscanf_FUN_005fe738(FILE * file, char * format, va_list_t args)
// Cross-references:
//   crt_stdio.c_fscanf_FUN_005fe7c0 (005fe7c0) at 005fe7d8 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_doscan_FUN_00604950
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl crt_stdio_c_vfscanf_FUN_005fe738(FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char **in_stack_00000014;
  va_list_t *in_stack_00000018;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  iVar2 = crt_stdio_c_doscan_FUN_00604950
                    ((scanf_state_t *)&stack0xffffffe8,in_stack_00000014,in_stack_00000018);
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar2;
}


// Assembly code:
// 005fe738: PUSH EBX
//   Label: crt_stdio.c_vfscanf_FUN_005fe738
// 005fe739: PUSH ESI
// 005fe73a: PUSH EDI
// 005fe73b: PUSH EBP
// 005fe73c: SUB ESP,0x14
// 005fe73f: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fe743: MOV EDX,dword ptr [EBX + 0x10]
// 005fe746: PUSH EDX
// 005fe747: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fe74d: MOV EAX,dword ptr [EBX + 0x8]
// 005fe750: MOV ECX,dword ptr [EAX + 0xc]
// 005fe753: ADD ESP,0x4
// 005fe756: CMP ECX,0x1
// 005fe759: JZ 0x005fe777
//   XREF to: 005fe777 (CONDITIONAL_JUMP)
// 005fe75b: TEST ECX,ECX
// 005fe75d: JZ 0x005fe770
//   XREF to: 005fe770 (CONDITIONAL_JUMP)
// 005fe75f: MOV EDI,dword ptr [EBX + 0x10]
// 005fe762: PUSH EDI
// 005fe763: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fe769: ADD ESP,0x4
// 005fe76c: XOR EAX,EAX
// 005fe76e: JMP 0x005fe7b5
//   XREF to: 005fe7b5 (UNCONDITIONAL_JUMP)
// 005fe770: MOV dword ptr [EAX + 0xc],0x1
//   Label: LAB_005fe770
// 005fe777: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_005fe777
// 005fe77b: MOV EAX,0x5fe720
//   XREF to: 005fe720 (DATA)
// 005fe780: PUSH EDX
// 005fe781: MOV ECX,dword ptr [ESP + 0x30]
// 005fe785: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: 005fe720 (DATA)
// 005fe789: PUSH ECX
// 005fe78a: LEA EAX,[ESP + 0x8]
// 005fe78e: MOV EBP,0x5fe700
//   XREF to: 005fe700 (DATA)
// 005fe793: PUSH EAX
// 005fe794: MOV dword ptr [ESP + 0x14],EBX
// 005fe798: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: 005fe700 (DATA)
// 005fe79c: CALL crt_stdio.c_doscan_FUN_00604950
//   XREF to: 00604950 (UNCONDITIONAL_CALL)
// 005fe7a1: ADD ESP,0xc
// 005fe7a4: MOV EDI,dword ptr [EBX + 0x10]
// 005fe7a7: PUSH EDI
// 005fe7a8: MOV ESI,EAX
// 005fe7aa: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fe7b0: ADD ESP,0x4
// 005fe7b3: MOV EAX,ESI
// 005fe7b5: ADD ESP,0x14
//   Label: LAB_005fe7b5
// 005fe7b8: POP EBP
// 005fe7b9: POP EDI
// 005fe7ba: POP ESI
// 005fe7bb: POP EBX
// 005fe7bc: RET
