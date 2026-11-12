; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f242e(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   undefined4 DAT_01d098b8
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f242e
        ;   Label: engine_mini3d.cpp_FUN_004f242e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2430
    FLD float ptr [EAX]                 ; 004f2434
    FLD float ptr [EAX + 0x8]           ; 004f2436
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f2439
    MOV dword ptr [0x01d098b4],EDX      ; 004f243c | DAT_01d098b4
    FSTP float ptr [0x01d098b8]         ; 004f2442 | DAT_01d098b8
    FSTP float ptr [0x01d098b0]         ; 004f2448 | DAT_01d098b0
    RET                                 ; 004f244e

