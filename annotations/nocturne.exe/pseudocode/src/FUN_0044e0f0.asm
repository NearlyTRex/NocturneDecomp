; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044e0f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01abb4b8
;   undefined4 DAT_01abb4bc
;   undefined4 DAT_01abb4c0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044e0f0
        ;   Label: FUN_0044e0f0
    MOV dword ptr [0x01abb4bc],EDX      ; 0044e0f2 | DAT_01abb4bc
    MOV dword ptr [0x01abb4c0],EDX      ; 0044e0f8 | DAT_01abb4c0
    MOV dword ptr [0x01abb4b8],EDX      ; 0044e0fe | DAT_01abb4b8
    RET                                 ; 0044e104

