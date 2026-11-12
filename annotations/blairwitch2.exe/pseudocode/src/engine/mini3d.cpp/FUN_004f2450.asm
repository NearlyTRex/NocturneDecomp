; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2450(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d098c8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2450
        ;   Label: engine_mini3d.cpp_FUN_004f2450
    MOV [0x01d098c8],EAX                ; 004f2454 | DAT_01d098c8
    RET                                 ; 004f2459

