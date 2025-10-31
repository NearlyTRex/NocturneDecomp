// Name: crt_stdio.c_lseek_FUN_00606690
// Address: 00606690
// Address Range: [[00606690, 00606719]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
// Cross-references:
//   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 (0060d881) at 0060d9e4 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae (0060d7ae) at 0060d85e [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8 (0060dbe8) at 0060dc1f [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_sync_FUN_0060dc5e (0060dc5e) at 0060dcc7 [UNCONDITIONAL_CALL]
//   crt_io.c_extend_file_for_append_FUN_00608410 (00608410) at 00608425 [UNCONDITIONAL_CALL]
//   crt_io.c_ftruncate_FUN_00600cf0 (00600cf0) at 00600d3a [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 00602028 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fflushInternal_FUN_006039d0 (006039d0) at 00603a99 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffb57 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600c80 (00600c80) at 00600ca2 [UNCONDITIONAL_CALL]
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 (0060e930) at 0060eae3 [UNCONDITIONAL_CALL]
// Globals:
//   SetFilePointer* SetFilePointer = 002121b6
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_io.c_setFileDescriptorFlags_FUN_00608908
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   SetFilePointer

#include "nocturne.h"

int __watcallStack
crt_stdio_c_lseek_FUN_00606690(int file_handle_index,long distance_to_move,int move_method)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 uStack00000014;
  int in_stack_00000018;
  long in_stack_0000001c;
  DWORD in_stack_00000020;
  undefined4 uStack00000024;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
    if ((0 < in_stack_00000018) && ((uVar1 & 0x80) == 0)) {
      crt_io_c_setFileDescriptorFlags_FUN_00608908(file_handle_index,uVar1 | 0x8000);
    }
    DVar2 = (*SetFilePointer)(g_IOControlBlock->standard_handles[file_handle_index],
                              in_stack_0000001c,(PLONG)0x0,in_stack_00000020);
    uStack00000014 = 0x606707;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    if (DVar2 == 0xffffffff) {
      uStack00000024 = 0x606714;
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
    return DVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}


// Assembly code:
// 00606690: PUSH EBX
//   Label: crt_stdio.c_lseek_FUN_00606690
// 00606691: PUSH ESI
// 00606692: PUSH EDI
// 00606693: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00606697: TEST EBX,EBX
// 00606699: JL 0x006066a3
//   XREF to: 006066a3 (CONDITIONAL_JUMP)
// 0060669b: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 006066a1: JBE 0x006066b6
//   XREF to: 006066b6 (CONDITIONAL_JUMP)
// 006066a3: PUSH 0x4
//   Label: LAB_006066a3
// 006066a5: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006066aa: MOV EAX,0xffffffff
// 006066af: ADD ESP,0x4
// 006066b2: POP EDI
// 006066b3: POP ESI
// 006066b4: POP EBX
// 006066b5: RET
// 006066b6: PUSH EBX
//   Label: LAB_006066b6
// 006066b7: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006066bd: ADD ESP,0x4
// 006066c0: PUSH EBX
// 006066c1: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 006066c6: ADD ESP,0x4
// 006066c9: CMP dword ptr [ESP + 0x14],0x0
// 006066ce: JLE 0x006066e1
//   XREF to: 006066e1 (CONDITIONAL_JUMP)
// 006066d0: TEST AL,0x80
// 006066d2: JNZ 0x006066e1
//   XREF to: 006066e1 (CONDITIONAL_JUMP)
// 006066d4: OR AH,0x80
// 006066d7: PUSH EAX
// 006066d8: PUSH EBX
// 006066d9: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 006066de: ADD ESP,0x8
// 006066e1: MOV ESI,dword ptr [0x0068526c]
//   Label: LAB_006066e1
//   XREF to: 0068526c (READ)
// 006066e7: MOV EAX,dword ptr [ESI + EBX*0x4]
// 006066ea: MOV ESI,dword ptr [ESP + 0x18]
// 006066ee: PUSH ESI
// 006066ef: PUSH 0x0
// 006066f1: MOV EDI,dword ptr [ESP + 0x1c]
// 006066f5: PUSH EDI
// 006066f6: PUSH EAX
// 006066f7: CALL dword ptr CS:[0x61162c]
//   XREF to: EXTERNAL:00000096 (COMPUTED_CALL)
//   XREF to: 0061162c (READ)
// 006066fe: PUSH EBX
// 006066ff: MOV ESI,EAX
// 00606701: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00606707: ADD ESP,0x4
// 0060670a: CMP ESI,-0x1
// 0060670d: JNZ 0x00606714
//   XREF to: 00606714 (CONDITIONAL_JUMP)
// 0060670f: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00606714: MOV EAX,ESI
//   Label: LAB_00606714
// 00606716: POP EDI
// 00606717: POP ESI
// 00606718: POP EBX
// 00606719: RET
