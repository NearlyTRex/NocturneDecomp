; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508819
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb52c
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004baeb9
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b71ce
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bd147
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6b68
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc3f4
;   engine_fileio.cpp_remountAllPods_FUN_004b5350 at 004b5376
;   engine_pod.cpp_CPod_dtor_FUN_005509b0 at 005509c7
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640776
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550c80
        ;   Label: engine_pod.cpp_CPod_cleanup_FUN_00550c80
    PUSH ESI                            ; 00550c81
    PUSH EDI                            ; 00550c82
    PUSH EBP                            ; 00550c83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00550c84
    MOV EDX,dword ptr [EDI]             ; 00550c88
    XOR ESI,ESI                         ; 00550c8a
    TEST EDX,EDX                        ; 00550c8c
    JLE 0x00550cbf                      ; 00550c8e
        ;   XREF to: 00550cbf (CONDITIONAL_JUMP)  ; LAB_00550cbf
    MOV EBP,0x640776                    ; 00550c90 | = "..\\engine\\pod.cpp"
    MOV EBX,EDI                         ; 00550c95
    MOV dword ptr [0x02f0d944],0x3f8    ; 00550c97 | g_CurrentDebugLine
        ;   Label: LAB_00550c97
    MOV EAX,dword ptr [EBX + 0x4]       ; 00550ca1
    MOV dword ptr [0x0067d20c],EBP      ; 00550ca4 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00550caa
    JNZ 0x00550cca                      ; 00550cac
        ;   XREF to: 00550cca (CONDITIONAL_JUMP)  ; LAB_00550cca
    MOV dword ptr [EBX + 0x4],0x0       ; 00550cae
        ;   Label: LAB_00550cae
    INC ESI                             ; 00550cb5
    MOV ECX,dword ptr [EDI]             ; 00550cb6
    ADD EBX,0x4                         ; 00550cb8
    CMP ESI,ECX                         ; 00550cbb
    JL 0x00550c97                       ; 00550cbd
        ;   XREF to: 00550c97 (CONDITIONAL_JUMP)  ; LAB_00550c97
    MOV dword ptr [EDI],0x0             ; 00550cbf
        ;   Label: LAB_00550cbf
    POP EBP                             ; 00550cc5
    POP EDI                             ; 00550cc6
    POP ESI                             ; 00550cc7
    POP EBX                             ; 00550cc8
    RET                                 ; 00550cc9
    PUSH 0x0                            ; 00550cca
        ;   Label: LAB_00550cca
    PUSH EAX                            ; 00550ccc
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 00550ccd
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 00550cd2
    PUSH EAX                            ; 00550cd5
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00550cd6
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00550cdb
    JMP 0x00550cae                      ; 00550cde
        ;   XREF to: 00550cae (UNCONDITIONAL_JUMP)  ; LAB_00550cae

