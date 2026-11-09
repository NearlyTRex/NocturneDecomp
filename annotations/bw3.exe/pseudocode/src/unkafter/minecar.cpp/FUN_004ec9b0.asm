; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004ec9b0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76ca8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec9b0
        ;   Label: unkafter_minecar.cpp_FUN_004ec9b0
    MOV [0x01d76ca8],EAX                ; 004ec9b4 | DAT_01d76ca8
    RET                                 ; 004ec9b9

