// Name: crt_stdio.c_vfprintf_FUN_00604850
// Address: 00604850
// Address Range: [[00604850, 0060492d]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_vfprintf_FUN_00604850(FILE * file, char * format, va_list_t args)
// Cross-references:
//   crt_stdio.c_fprintf_FUN_005fe6d0 (005fe6d0) at 005fe6e8 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_005ff0d0 (005ff0d0) at 005ff0e7 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006021c0 (006021c0) at 006021d0 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_FormatEngine_FUN_00602950
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_vfprintf_FUN_00604850(FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  char *in_stack_00000018;
  va_list_t in_stack_0000001c;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  uVar2 = file->_flag;
  *(byte *)&file->_flag = (byte)file->_flag & 0xcf;
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  bVar4 = *(byte *)((int)&file->_flag + 1);
  bVar5 = (bVar4 & 4) != 0;
  if (bVar5) {
    bVar4 = bVar4 & 0xfa;
    *(byte *)((int)&file->_flag + 1) = bVar4;
    *(byte *)((int)&file->_flag + 1) = bVar4 | 1;
  }
  iVar3 = crt_stdio_c_FormatEngine_FUN_00602950
                    (file,in_stack_00000018,in_stack_0000001c,
                     crt_stdio_c_OutputCallback_FUN_00604830);
  if (bVar5) {
    bVar4 = *(byte *)((int)&file->_flag + 1) & 0xfa;
    *(byte *)((int)&file->_flag + 1) = bVar4;
    *(byte *)((int)&file->_flag + 1) = bVar4 | 4;
    crt_stdio_c_fflushInternal_FUN_006039d0(file);
  }
  if ((file->_flag & 0x20) != 0) {
    iVar3 = -1;
  }
  file->_flag = file->_flag | uVar2 & 0x30;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar3;
}


// Assembly code:
// 00604850: PUSH EBX
//   Label: crt_stdio.c_vfprintf_FUN_00604850
// 00604851: PUSH ESI
// 00604852: PUSH EDI
// 00604853: PUSH EBP
// 00604854: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00604858: MOV EDX,dword ptr [EBX + 0x10]
// 0060485b: PUSH EDX
// 0060485c: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 00604862: MOV EAX,dword ptr [EBX + 0x8]
// 00604865: MOV ECX,dword ptr [EAX + 0xc]
// 00604868: ADD ESP,0x4
// 0060486b: CMP ECX,0x1
// 0060486e: JZ 0x0060488f
//   XREF to: 0060488f (CONDITIONAL_JUMP)
// 00604870: TEST ECX,ECX
// 00604872: JZ 0x00604888
//   XREF to: 00604888 (CONDITIONAL_JUMP)
// 00604874: MOV EDI,dword ptr [EBX + 0x10]
// 00604877: PUSH EDI
// 00604878: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060487e: ADD ESP,0x4
// 00604881: XOR EAX,EAX
// 00604883: POP EBP
// 00604884: POP EDI
// 00604885: POP ESI
// 00604886: POP EBX
// 00604887: RET
// 00604888: MOV dword ptr [EAX + 0xc],0x1
//   Label: LAB_00604888
// 0060488f: MOV AH,byte ptr [EBX + 0xc]
//   Label: LAB_0060488f
// 00604892: AND AH,0xcf
// 00604895: MOV EBP,dword ptr [EBX + 0xc]
// 00604898: MOV byte ptr [EBX + 0xc],AH
// 0060489b: MOV EAX,dword ptr [EBX + 0x8]
// 0060489e: MOV EDX,dword ptr [EAX + 0x8]
// 006048a1: AND EBP,0x30
// 006048a4: TEST EDX,EDX
// 006048a6: JNZ 0x006048b1
//   XREF to: 006048b1 (CONDITIONAL_JUMP)
// 006048a8: PUSH EBX
// 006048a9: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 006048ae: ADD ESP,0x4
// 006048b1: MOV DL,byte ptr [EBX + 0xd]
//   Label: LAB_006048b1
// 006048b4: XOR EDI,EDI
// 006048b6: TEST DL,0x4
// 006048b9: JZ 0x006048d0
//   XREF to: 006048d0 (CONDITIONAL_JUMP)
// 006048bb: MOV DH,DL
// 006048bd: AND DH,0xfa
// 006048c0: MOV CL,DH
// 006048c2: MOV byte ptr [EBX + 0xd],DH
// 006048c5: OR CL,0x1
// 006048c8: MOV EDI,0x1
// 006048cd: MOV byte ptr [EBX + 0xd],CL
// 006048d0: PUSH 0x604830
//   Label: LAB_006048d0
//   XREF to: 00604830 (DATA)
// 006048d5: MOV ECX,dword ptr [ESP + 0x20]
// 006048d9: PUSH ECX
// 006048da: MOV ESI,dword ptr [ESP + 0x20]
// 006048de: PUSH ESI
// 006048df: PUSH EBX
// 006048e0: CALL crt_stdio.c_FormatEngine_FUN_00602950
//   XREF to: 00602950 (UNCONDITIONAL_CALL)
// 006048e5: ADD ESP,0x10
// 006048e8: MOV ESI,EAX
// 006048ea: TEST EDI,EDI
// 006048ec: JZ 0x00604907
//   XREF to: 00604907 (CONDITIONAL_JUMP)
// 006048ee: MOV CH,byte ptr [EBX + 0xd]
// 006048f1: AND CH,0xfa
// 006048f4: MOV AL,CH
// 006048f6: MOV byte ptr [EBX + 0xd],CH
// 006048f9: OR AL,0x4
// 006048fb: PUSH EBX
// 006048fc: MOV byte ptr [EBX + 0xd],AL
// 006048ff: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 00604904: ADD ESP,0x4
// 00604907: TEST byte ptr [EBX + 0xc],0x20
//   Label: LAB_00604907
// 0060490b: JZ 0x00604912
//   XREF to: 00604912 (CONDITIONAL_JUMP)
// 0060490d: MOV ESI,0xffffffff
// 00604912: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_00604912
// 00604915: OR EDI,EBP
// 00604917: MOV EBP,dword ptr [EBX + 0x10]
// 0060491a: PUSH EBP
// 0060491b: MOV dword ptr [EBX + 0xc],EDI
// 0060491e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00604924: ADD ESP,0x4
// 00604927: MOV EAX,ESI
// 00604929: POP EBP
// 0060492a: POP EDI
// 0060492b: POP ESI
// 0060492c: POP EBX
// 0060492d: RET
