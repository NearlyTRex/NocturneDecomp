; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b74c8
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004baf53
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b8305
;   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 at 004bca62
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b7712
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6e7a
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8a69
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5bf4
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd1fa
;   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 at 004b7fb8
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054f5a0
        ;   Label: engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
    MOV dword ptr [EAX + 0x414],0x0     ; 0054f5a4
    MOV byte ptr [EAX + 0x4],0x0        ; 0054f5ae
    MOV byte ptr [EAX + 0x108],0x0      ; 0054f5b2
    MOV byte ptr [EAX + 0x208],0x0      ; 0054f5b9
    MOV byte ptr [EAX + 0x308],0x0      ; 0054f5c0
    MOV dword ptr [EAX],0x0             ; 0054f5c7
    MOV dword ptr [EAX + 0x41c],0x0     ; 0054f5cd
    MOV dword ptr [EAX + 0x424],0x0     ; 0054f5d7
    MOV dword ptr [EAX + 0x418],0x0     ; 0054f5e1
    MOV dword ptr [EAX + 0x408],0x3e8   ; 0054f5eb
    MOV dword ptr [EAX + 0x40c],0x0     ; 0054f5f5
    MOV dword ptr [EAX + 0x410],0x0     ; 0054f5ff
    RET                                 ; 0054f609

