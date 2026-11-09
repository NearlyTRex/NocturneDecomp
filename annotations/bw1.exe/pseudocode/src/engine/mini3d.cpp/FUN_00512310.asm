; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512310(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d224bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512310
        ;   Label: engine_mini3d.cpp_FUN_00512310
    MOV [0x01d224bc],EAX                ; 00512314 | DAT_01d224bc
    RET                                 ; 00512319

