// Name: crt_sync.c_CriticalSectionStub_FUN_00602434
// Address: 00602434
// Address Range: [[00602434, 00602434]]
// Convention: __cdecl
// Signature: void crt_sync.c_CriticalSectionStub_FUN_00602434(void)
// Cross-references:
//   crt_exit.c_ExitProcess_FUN_00602700 (00602700) at 00602735 [COMPUTED_CALL]
//   crt_heap.c_CompactHeapBlocks_FUN_0060c920 (0060c920) at 0060c922 [COMPUTED_CALL]
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 (00601bc0) at 00601bf6 [COMPUTED_CALL]
//   crt_heap.c_TryResizeInPlace_FUN_00609974 (00609974) at 006099a4 [COMPUTED_CALL]
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 (00601ce0) at 00601cef [COMPUTED_CALL]
//   crt_heap.c_heapCheck_FUN_00601374 (00601374) at 00601391 [COMPUTED_CALL]
//   crt_io.c_IsSpecialDevice_FUN_0060c270 (0060c270) at 0060c2cf [COMPUTED_CALL]
//   crt_io.c_close_handle_safe_FUN_0060c2e0 (0060c2e0) at 0060c305 [COMPUTED_CALL]
//   crt_io.c_ftruncate_FUN_00600cf0 (00600cf0) at 00600d2c [COMPUTED_CALL]
//   crt_io.c_invalidate_handle_FUN_00608af4 (00608af4) at 00608b18 [COMPUTED_CALL]
//   crt_io.c_register_handle_FUN_00608990 (00608990) at 00608a0d [COMPUTED_CALL]
//   crt_io.c_tell_FUN_00606720 (00606720) at 00606768 [COMPUTED_CALL]
//   crt_io.c_write_FUN_006084ec (006084ec) at 00608564 [COMPUTED_CALL]
//   crt_stdio.c_AllocateFileStruct_FUN_006092f0 (006092f0) at 006093a2 [COMPUTED_CALL]
//   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 (0060b3f8) at 0060b470 [COMPUTED_CALL]
//   crt_stdio.c_FlushFilesByMask_FUN_0060595c (0060595c) at 00605963 [COMPUTED_CALL]
//   crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc (0060cdbc) at 0060ce23 [COMPUTED_CALL]
//   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880 (00602880) at 006028e4 [COMPUTED_CALL]
//   crt_stdio.c_WriteConsoleChar_FUN_0060b490 (0060b490) at 0060b4c0 [COMPUTED_CALL]
//   crt_stdio.c_closeTrackedFile_FUN_00601ea0 (00601ea0) at 00601ea5 [COMPUTED_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 0060200a [COMPUTED_CALL]
//   crt_stdio.c_fflushInternal_FUN_006039d0 (006039d0) at 006039e1 [COMPUTED_CALL]
//   crt_stdio.c_fgetc_FUN_005fe840 (005fe840) at 005fe84c [COMPUTED_CALL]
//   crt_stdio.c_fgets_FUN_005fefd0 (005fefd0) at 005fefe7 [COMPUTED_CALL]
//   crt_stdio.c_flushFileBuffers_FUN_0060af00 (0060af00) at 0060af27 [COMPUTED_CALL]
//   crt_stdio.c_fopenThreadSafe_FUN_00601b14 (00601b14) at 00601b93 [COMPUTED_CALL]
//   crt_stdio.c_fputc_FUN_005fea10 (005fea10) at 005fea48 [COMPUTED_CALL]
//   crt_stdio.c_fputc_FUN_006007a0 (006007a0) at 006007c8 [COMPUTED_CALL]
//   crt_stdio.c_fputs_FUN_0060ebb0 (0060ebb0) at 0060ebc3 [COMPUTED_CALL]
//   crt_stdio.c_fread_FUN_005fd990 (005fd990) at 005fd9a3 [COMPUTED_CALL]
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffae0 [COMPUTED_CALL]
//   crt_stdio.c_ftell_FUN_00601560 (00601560) at 00601596 [COMPUTED_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdc13 [COMPUTED_CALL]
//   crt_stdio.c_lseek_FUN_00606690 (00606690) at 00606701 [COMPUTED_CALL]
//   crt_stdio.c_setvbuf_FUN_00601490 (00601490) at 0060152e [COMPUTED_CALL]
//   crt_stdio.c_vfprintf_FUN_00604850 (00604850) at 00604878 [COMPUTED_CALL]
//   crt_stdio.c_vfscanf_FUN_005fe738 (005fe738) at 005fe763 [COMPUTED_CALL]
//   crt_stdio.c_write_FUN_006038c0 (006038c0) at 00603923 [COMPUTED_CALL]
//   crt_tls.c_getThreadLocalData_FUN_0060caf8 (0060caf8) at 0060cbc0 [COMPUTED_CALL]
//   crt_tls.c_register_thread_data_FUN_0060cbd0 (0060cbd0) at 0060cc30 [COMPUTED_CALL]
//   crt_tls.c_unregister_thread_data_FUN_0060cc3c (0060cc3c) at 0060cc43 [COMPUTED_CALL]
//   crt_unknown.c_FUN_006008f0 (006008f0) at 006008f2 [COMPUTED_CALL]
//   crt_unknown.c_FUN_00600940 (00600940) at 00600942 [COMPUTED_CALL]
//   crt_unknown.c_FUN_00600ad0 (00600ad0) at 00600ad4 [COMPUTED_CALL]
//   crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94 (00601a94) at 00601ac0 [COMPUTED_CALL]
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 (0060e930) at 0060ea21 [COMPUTED_CALL]
//   crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c (00608a1c) at 00608a32 [COMPUTED_CALL]

#include "nocturne.h"

void __cdecl crt_sync_c_CriticalSectionStub_FUN_00602434(void)

{
  return;
}


// Assembly code:
// 00602434: RET
//   Label: crt_sync.c_CriticalSectionStub_FUN_00602434
