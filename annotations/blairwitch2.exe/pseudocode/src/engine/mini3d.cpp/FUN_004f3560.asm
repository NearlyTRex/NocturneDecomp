; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3560(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0985c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3560
        ;   Label: engine_mini3d.cpp_FUN_004f3560
    MOV [0x01d0985c],EAX                ; 004f3564 | DAT_01d0985c
    RET                                 ; 004f3569

