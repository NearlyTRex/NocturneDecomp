; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90(void)
;
;
; Referenced Globals:
;   HANDLE g_FileMutex
;
; Called Functions:
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02f0d93c]      ; 0050ee90 | g_FileMutex
        ;   Label: shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90
    PUSH EDX                            ; 0050ee96
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050ee97
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050ee9c
    RET                                 ; 0050ee9f

