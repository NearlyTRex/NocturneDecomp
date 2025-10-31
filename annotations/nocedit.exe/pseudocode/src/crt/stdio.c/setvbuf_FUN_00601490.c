// Name: crt_stdio.c_setvbuf_FUN_00601490
// Address: 00601490
// Address Range: [[00601490, 0060153d]]
// Convention: __cdecl
// Signature: int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3abe [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4acf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b36ac [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b2953 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbb3d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baa01 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9b4f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b274a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b334c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_openFileWithRetry_FUN_004b2200 (004b2200) at 004b2257 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl
crt_stdio_c_setvbuf_FUN_00601490
          (FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size)

{
  byte *pbVar1;
  bool bVar2;
  
  if (0x7fffffff < buffer_size) {
    return -1;
  }
  if ((uint)buffer_mode < 0x200) {
    bVar2 = buffer_mode == 0x100;
  }
  else {
    if ((uint)buffer_mode < 0x201) goto LAB_006014da;
    bVar2 = buffer_mode == 0x400;
  }
  if (!bVar2) {
    return -1;
  }
LAB_006014da:
  if ((buffer_ptr != (char *)0x0) && (buffer_size == 0)) {
    return -1;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream_ptr->_handle);
  crt_stdio_c_DetectDeviceAndSetBuffering_FUN_00608ee0(stream_ptr);
  if (buffer_size != 0) {
    stream_ptr->_bufsize = buffer_size;
  }
  stream_ptr->_link->__reserve_end = buffer_ptr;
  pbVar1 = (byte *)((int)&stream_ptr->_flag + 1);
  *pbVar1 = *pbVar1 & 0xf8;
  stream_ptr->_ptr = buffer_ptr;
  stream_ptr->_flag = stream_ptr->_flag | buffer_mode;
  if (buffer_ptr == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(stream_ptr);
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream_ptr->_handle);
  return 0;
}


// Assembly code:
// 00601490: PUSH EBX
//   Label: crt_stdio.c_setvbuf_FUN_00601490
// 00601491: PUSH ESI
// 00601492: PUSH EDI
// 00601493: PUSH EBP
// 00601494: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00601498: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060149c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 006014a0: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 006014a4: CMP EDI,0x7fffffff
// 006014aa: JBE 0x006014b6
//   XREF to: 006014b6 (CONDITIONAL_JUMP)
// 006014ac: MOV EAX,0xffffffff
// 006014b1: POP EBP
// 006014b2: POP EDI
// 006014b3: POP ESI
// 006014b4: POP EBX
// 006014b5: RET
// 006014b6: CMP ESI,0x200
//   Label: LAB_006014b6
// 006014bc: JC 0x006014c8
//   XREF to: 006014c8 (CONDITIONAL_JUMP)
// 006014be: JBE 0x006014da
//   XREF to: 006014da (CONDITIONAL_JUMP)
// 006014c0: CMP ESI,0x400
// 006014c6: JMP 0x006014ce
//   XREF to: 006014ce (UNCONDITIONAL_JUMP)
// 006014c8: CMP ESI,0x100
//   Label: LAB_006014c8
// 006014ce: JZ 0x006014da
//   Label: LAB_006014ce
//   XREF to: 006014da (CONDITIONAL_JUMP)
// 006014d0: MOV EAX,0xffffffff
// 006014d5: POP EBP
// 006014d6: POP EDI
// 006014d7: POP ESI
// 006014d8: POP EBX
// 006014d9: RET
// 006014da: TEST EBP,EBP
//   Label: LAB_006014da
// 006014dc: JZ 0x006014ec
//   XREF to: 006014ec (CONDITIONAL_JUMP)
// 006014de: TEST EDI,EDI
// 006014e0: JNZ 0x006014ec
//   XREF to: 006014ec (CONDITIONAL_JUMP)
// 006014e2: MOV EAX,0xffffffff
// 006014e7: POP EBP
// 006014e8: POP EDI
// 006014e9: POP ESI
// 006014ea: POP EBX
// 006014eb: RET
// 006014ec: MOV EDX,dword ptr [EBX + 0x10]
//   Label: LAB_006014ec
// 006014ef: PUSH EDX
// 006014f0: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006014f6: ADD ESP,0x4
// 006014f9: PUSH EBX
// 006014fa: CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
//   XREF to: 00608ee0 (UNCONDITIONAL_CALL)
// 006014ff: ADD ESP,0x4
// 00601502: TEST EDI,EDI
// 00601504: JZ 0x00601509
//   XREF to: 00601509 (CONDITIONAL_JUMP)
// 00601506: MOV dword ptr [EBX + 0x14],EDI
// 00601509: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_00601509
// 0060150c: MOV dword ptr [EAX + 0x8],EBP
// 0060150f: AND byte ptr [EBX + 0xd],0xf8
// 00601513: MOV ECX,dword ptr [EBX + 0xc]
// 00601516: MOV dword ptr [EBX],EBP
// 00601518: OR ECX,ESI
// 0060151a: MOV dword ptr [EBX + 0xc],ECX
// 0060151d: TEST EBP,EBP
// 0060151f: JNZ 0x0060152a
//   XREF to: 0060152a (CONDITIONAL_JUMP)
// 00601521: PUSH EBX
// 00601522: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 00601527: ADD ESP,0x4
// 0060152a: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_0060152a
// 0060152d: PUSH ESI
// 0060152e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00601534: ADD ESP,0x4
// 00601537: XOR EAX,EAX
// 00601539: POP EBP
// 0060153a: POP EDI
// 0060153b: POP ESI
// 0060153c: POP EBX
// 0060153d: RET
