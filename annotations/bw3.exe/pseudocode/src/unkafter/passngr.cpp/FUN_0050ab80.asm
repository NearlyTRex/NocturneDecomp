; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_passngr_cpp_FUN_0050ab80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed02ac
;   undefined4 DAT_01ed02b0
;   undefined4 DAT_01ed2a2c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0050ab80
        ;   Label: unkafter_passngr.cpp_FUN_0050ab80
    MOV dword ptr [0x01ed02ac],EDX      ; 0050ab82 | DAT_01ed02ac
    MOV dword ptr [0x01ed02b0],EDX      ; 0050ab88 | DAT_01ed02b0
    MOV dword ptr [0x01ed2a2c],EDX      ; 0050ab8e | DAT_01ed2a2c
    RET                                 ; 0050ab94

