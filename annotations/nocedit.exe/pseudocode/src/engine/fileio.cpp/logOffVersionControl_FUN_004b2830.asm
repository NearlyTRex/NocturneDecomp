; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_logOffVersionControl_FUN_004b2830(void)
;
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3b18
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4803
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b3701
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb8e2
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004baa5b
;   engine_fileio.cpp_logOffVersionControlThunk_FUN_004bceb0 at 004bceb0
;
; Referenced Globals:
;   REVERT_TO_SELF_FUNC* g_RevertToSelfFunc = 00211a32
;   CLOSE_HANDLE_FUNC* g_CloseHandleFunc = 00211c38
;   undefined4 g_VersionControlSessionHandle
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d12d2c],0x0      ; 004b2830 | g_VersionControlSessionHandle
        ;   Label: engine_fileio.cpp_logOffVersionControl_FUN_004b2830
    JNZ 0x004b283a                      ; 004b2837
        ;   XREF to: 004b283a (CONDITIONAL_JUMP)  ; LAB_004b283a
    RET                                 ; 004b2839
    PUSH EBX                            ; 004b283a
        ;   Label: LAB_004b283a
    CALL dword ptr CS:[0x611480]        ; 004b283b | g_RevertToSelfFunc
    MOV ECX,dword ptr [0x02d12d2c]      ; 004b2842 | g_VersionControlSessionHandle
    PUSH ECX                            ; 004b2848
    XOR EBX,EBX                         ; 004b2849
    CALL dword ptr CS:[0x611504]        ; 004b284b | g_CloseHandleFunc
    MOV dword ptr [0x02d12d2c],EBX      ; 004b2852 | g_VersionControlSessionHandle
    POP EBX                             ; 004b2858
    RET                                 ; 004b2859

