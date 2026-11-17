; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00511b50(void)
;
;
; Referenced Globals:
;   int g_INT_01e5ec6c
;   int g_INT_01e5ec70
;   int g_INT_01e613ec
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00511b50
        ;   Label: core_passngr.cpp_resetPathfindingQueue_FUN_00511b50
    MOV dword ptr [0x01e5ec6c],EDX      ; 00511b52 | g_INT_01e5ec6c
    MOV dword ptr [0x01e5ec70],EDX      ; 00511b58 | g_INT_01e5ec70
    MOV dword ptr [0x01e613ec],EDX      ; 00511b5e | g_INT_01e613ec
    RET                                 ; 00511b64

