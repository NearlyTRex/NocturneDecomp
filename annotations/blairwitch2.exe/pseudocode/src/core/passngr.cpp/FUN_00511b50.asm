; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_FUN_00511b50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e5ec6c
;   undefined4 DAT_01e5ec70
;   undefined4 DAT_01e613ec
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00511b50
        ;   Label: core_passngr.cpp_FUN_00511b50
    MOV dword ptr [0x01e5ec6c],EDX      ; 00511b52 | DAT_01e5ec6c
    MOV dword ptr [0x01e5ec70],EDX      ; 00511b58 | DAT_01e5ec70
    MOV dword ptr [0x01e613ec],EDX      ; 00511b5e | DAT_01e613ec
    RET                                 ; 00511b64

