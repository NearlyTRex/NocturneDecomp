; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b76b2
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb202
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b8542
;   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 at 004bcb21
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b7a2b
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b7201
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9171
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6342
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd2fa
;   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 at 004b8249
;   ... and 4 more
;
; Called Functions:
;   engine_pod.cpp_CPodFile_cleanup_FUN_00550090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f610
        ;   Label: engine_pod.cpp_CPodFile_dtor_FUN_0054f610
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054f611
    PUSH EBX                            ; 0054f615
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090 ; 0054f616
        ;   XREF to: 00550090 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0054f61b
    MOV EAX,EBX                         ; 0054f61e
    POP EBX                             ; 0054f620
    RET                                 ; 0054f621

