; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d7a69c
;   undefined4 DAT_01d7a6a0
;   undefined4 DAT_01d7a6a4
;   undefined4 DAT_01d7a6a8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0410
        ;   Label: engine_mini3d.cpp_FUN_004f0410
    MOV [0x01d7a69c],EAX                ; 004f0414 | DAT_01d7a69c
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0419
    MOV [0x01d7a6a0],EAX                ; 004f041d | DAT_01d7a6a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f0422
    MOV [0x01d7a6a4],EAX                ; 004f0426 | DAT_01d7a6a4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f042b
    MOV [0x01d7a6a8],EAX                ; 004f042f | DAT_01d7a6a8
    RET                                 ; 004f0434

