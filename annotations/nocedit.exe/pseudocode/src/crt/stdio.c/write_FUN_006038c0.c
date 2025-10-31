// Name: crt_stdio.c_write_FUN_006038c0
// Address: 006038c0
// Address Range: [[006038c0, 006039c9]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_write_FUN_006038c0(int file_handle_index, void * buffer, int bytes_to_write)
// Cross-references:
//   crt_stdio.c_fflushInternal_FUN_006039d0 (006039d0) at 00603a32 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdcc8 [UNCONDITIONAL_CALL]
// Globals:
//   SetFilePointer* SetFilePointer = 002121b6
//   WriteFile* PTR_WriteFile_00611678 = 00212300
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   SetFilePointer
//   WriteFile

#include "nocturne.h"

int __watcallStack
crt_stdio_c_write_FUN_006038c0(int file_handle_index,void *buffer,int bytes_to_write)

{
  HANDLE hFile;
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000018;
  undefined4 in_stack_00000020;
  int in_stack_00000028;
  void *in_stack_0000002c;
  undefined4 uStack00000030;
  int in_stack_00000038;
  
  if ((file_handle_index < 0) || (g_MaxHandleCount < (uint)file_handle_index)) {
    crt_errno_c_setErrno_FUN_00602790(SYSTEM_WATCOM_EBADF);
    in_stack_00000038 = -1;
  }
  else {
    hFile = g_IOControlBlock->standard_handles[file_handle_index];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
    if ((uVar1 & 0x80) != 0) {
      DVar2 = (*SetFilePointer)(hFile,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
        uStack00000018 = 0x603931;
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    if (g_SpecialDeviceWriteFuncPtr != (SPECIAL_DEVICE_WRITE_FUNC *)0x0) {
      iVar3 = (*g_IsSpecialDeviceFuncPtr)(file_handle_index);
      if (iVar3 != 0) {
        iVar3 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,in_stack_0000002c,bytes_to_write);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
        return iVar3;
      }
    }
    BVar4 = (*PTR_WriteFile_00611678)
                      (hFile,in_stack_0000002c,bytes_to_write,(LPDWORD)&stack0x00000010,
                       (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      in_stack_00000020 = 0x603996;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
      uStack00000030 = 0x60399e;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    if (bytes_to_write != in_stack_00000028) {
      in_stack_00000020 = 0x6039b2;
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_WATCOM_ENOMEM);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
  }
  return in_stack_00000038;
}


// Assembly code:
// 006038c0: PUSH EBX
//   Label: crt_stdio.c_write_FUN_006038c0
// 006038c1: PUSH ESI
// 006038c2: PUSH EDI
// 006038c3: PUSH EBP
// 006038c4: SUB ESP,0x4
// 006038c7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006038cb: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006038cf: TEST EBX,EBX
// 006038d1: JL 0x006038db
//   XREF to: 006038db (CONDITIONAL_JUMP)
// 006038d3: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 006038d9: JBE 0x006038ef
//   XREF to: 006038ef (CONDITIONAL_JUMP)
// 006038db: PUSH 0x4
//   Label: LAB_006038db
// 006038dd: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006038e2: MOV EAX,0xffffffff
// 006038e7: ADD ESP,0x4
// 006038ea: JMP 0x006039c2
//   XREF to: 006039c2 (UNCONDITIONAL_JUMP)
// 006038ef: MOV ESI,dword ptr [0x0068526c]
//   Label: LAB_006038ef
//   XREF to: 0068526c (READ)
// 006038f5: PUSH EBX
// 006038f6: MOV ESI,dword ptr [ESI + EBX*0x4]
// 006038f9: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006038ff: ADD ESP,0x4
// 00603902: PUSH EBX
// 00603903: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 00603908: ADD ESP,0x4
// 0060390b: TEST AL,0x80
// 0060390d: JZ 0x00603939
//   XREF to: 00603939 (CONDITIONAL_JUMP)
// 0060390f: PUSH 0x2
// 00603911: PUSH 0x0
// 00603913: PUSH 0x0
// 00603915: PUSH ESI
// 00603916: CALL dword ptr CS:[0x61162c]
//   XREF to: EXTERNAL:00000096 (COMPUTED_CALL)
//   XREF to: 0061162c (READ)
// 0060391d: CMP EAX,-0x1
// 00603920: JNZ 0x00603939
//   XREF to: 00603939 (CONDITIONAL_JUMP)
// 00603922: PUSH EBX
// 00603923: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00603929: ADD ESP,0x4
// 0060392c: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00603931: ADD ESP,0x4
// 00603934: POP EBP
// 00603935: POP EDI
// 00603936: POP ESI
// 00603937: POP EBX
// 00603938: RET
// 00603939: CMP dword ptr [0x006852b0],0x0
//   Label: LAB_00603939
//   XREF to: 006852b0 (READ)
// 00603940: JZ 0x00603976
//   XREF to: 00603976 (CONDITIONAL_JUMP)
// 00603942: PUSH EBX
// 00603943: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 00603949: ADD ESP,0x4
// 0060394c: TEST EAX,EAX
// 0060394e: JZ 0x00603976
//   XREF to: 00603976 (CONDITIONAL_JUMP)
// 00603950: PUSH EDI
// 00603951: MOV EDX,dword ptr [ESP + 0x20]
// 00603955: PUSH EDX
// 00603956: PUSH EAX
// 00603957: CALL dword ptr [g_SpecialDeviceWriteFuncPtr]
//   XREF to: 006852b0 (READ)
// 0060395d: ADD ESP,0xc
// 00603960: PUSH EBX
// 00603961: MOV ESI,EAX
// 00603963: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00603969: ADD ESP,0x4
// 0060396c: MOV EAX,ESI
// 0060396e: ADD ESP,0x4
// 00603971: POP EBP
// 00603972: POP EDI
// 00603973: POP ESI
// 00603974: POP EBX
// 00603975: RET
// 00603976: PUSH 0x0
//   Label: LAB_00603976
// 00603978: LEA EAX,[ESP + 0x4]
// 0060397c: PUSH EAX
// 0060397d: PUSH EDI
// 0060397e: MOV EBP,dword ptr [ESP + 0x28]
// 00603982: PUSH EBP
// 00603983: PUSH ESI
// 00603984: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 0060398b: TEST EAX,EAX
// 0060398d: JNZ 0x006039a6
//   XREF to: 006039a6 (CONDITIONAL_JUMP)
// 0060398f: PUSH EBX
// 00603990: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00603996: ADD ESP,0x4
// 00603999: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060399e: ADD ESP,0x4
// 006039a1: POP EBP
// 006039a2: POP EDI
// 006039a3: POP ESI
// 006039a4: POP EBX
// 006039a5: RET
// 006039a6: CMP EDI,dword ptr [ESP]
//   Label: LAB_006039a6
// 006039a9: JZ 0x006039b5
//   XREF to: 006039b5 (CONDITIONAL_JUMP)
// 006039ab: PUSH 0xc
// 006039ad: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006039b2: ADD ESP,0x4
// 006039b5: PUSH EBX
//   Label: LAB_006039b5
// 006039b6: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 006039bc: ADD ESP,0x4
// 006039bf: MOV EAX,dword ptr [ESP]
// 006039c2: ADD ESP,0x4
//   Label: LAB_006039c2
// 006039c5: POP EBP
// 006039c6: POP EDI
// 006039c7: POP ESI
// 006039c8: POP EBX
// 006039c9: RET
