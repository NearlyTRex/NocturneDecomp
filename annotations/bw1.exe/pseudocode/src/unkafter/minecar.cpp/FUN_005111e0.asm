; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_005111e0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d22528
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005111e0
        ;   Label: unkafter_minecar.cpp_FUN_005111e0
    MOV [0x01d22528],EAX                ; 005111e4 | DAT_01d22528
    RET                                 ; 005111e9

