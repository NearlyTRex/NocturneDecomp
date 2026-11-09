; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_light_cpp_FUN_004ffac0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f314
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffac0
        ;   Label: engine_light.cpp_FUN_004ffac0
    MOV [0x0061f314],EAX                ; 004ffac4 | DAT_0061f314
    RET                                 ; 004ffac9

