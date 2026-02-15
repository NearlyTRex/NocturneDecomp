; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_errno_c__errno_FUN_00601450(void)
;
;
; XREF[13]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 005070ab
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3c5f
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4b37
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b3764
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 at 004b29f0
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbc9e
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bab12
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9c43
;   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 at 004b20ac
;   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 at 004b2671
;   ... and 3 more
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 00601450 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_errno.c__errno_FUN_00601450
    ADD EAX,0x4                         ; 00601456
    RET                                 ; 00601459

