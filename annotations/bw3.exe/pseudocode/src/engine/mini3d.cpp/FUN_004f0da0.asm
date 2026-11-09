; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0da0(undefined4 param_1)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f12b0 at 004f1342
;
; Referenced Globals:
;   undefined4 DAT_01d7a6c8
;   undefined4 DAT_01d7a6cc
;   undefined4 DAT_01d7a6d0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f0da0
        ;   Label: engine_mini3d.cpp_FUN_004f0da0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0da2
    MOV dword ptr [0x01d7a6cc],EDX      ; 004f0da6 | DAT_01d7a6cc
    MOV dword ptr [0x01d7a6d0],EDX      ; 004f0dac | DAT_01d7a6d0
    MOV [0x01d7a6c8],EAX                ; 004f0db2 | DAT_01d7a6c8
    RET                                 ; 004f0db7

