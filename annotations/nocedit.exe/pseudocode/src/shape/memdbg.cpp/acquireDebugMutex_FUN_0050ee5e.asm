; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e(void)
;
;
; Referenced Globals:
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;
; Called Functions:
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0050ee5e
        ;   Label: shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e
    CMP dword ptr [0x02f0ca50],0x0      ; 0050ee60 | g_RecursiveCallFlag
    JNZ 0x0050ee8d                      ; 0050ee67
        ;   XREF to: 0050ee8d (CONDITIONAL_JUMP)  ; LAB_0050ee8d
    CMP dword ptr [0x02f0d93c],0x0      ; 0050ee69 | g_FileMutex
    JNZ 0x0050ee7c                      ; 0050ee70
        ;   XREF to: 0050ee7c (CONDITIONAL_JUMP)  ; LAB_0050ee7c
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050ee72
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050ee77 | g_FileMutex
    PUSH EBX                            ; 0050ee7c
        ;   Label: LAB_0050ee7c
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050ee7d | g_FileMutex
    PUSH EBX                            ; 0050ee83
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050ee84
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050ee89
    POP EBX                             ; 0050ee8c
    RET                                 ; 0050ee8d
        ;   Label: LAB_0050ee8d

