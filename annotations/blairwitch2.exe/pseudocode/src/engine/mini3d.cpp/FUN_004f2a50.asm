; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2a50(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   undefined4 DAT_01d098b8
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0c398
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2a50
        ;   Label: engine_mini3d.cpp_FUN_004f2a50
    FLD float ptr [0x01d098b0]          ; 004f2a54 | DAT_01d098b0
    MOV EAX,[0x01d09918]                ; 004f2a5a | DAT_01d09918
    FSUB float ptr [EDX]                ; 004f2a5f
    FLD float ptr [0x01d098b4]          ; 004f2a61 | DAT_01d098b4
    FXCH                                ; 004f2a67
    FSTP float ptr [EAX + 0x24]         ; 004f2a69
    FSUB float ptr [EDX + 0x4]          ; 004f2a6c
    FLD float ptr [0x01d098b8]          ; 004f2a6f | DAT_01d098b8
    FXCH                                ; 004f2a75
    FSTP float ptr [EAX + 0x28]         ; 004f2a77
    FSUB float ptr [EDX + 0x8]          ; 004f2a7a
    MOV EDX,0x1                         ; 004f2a7d
    FSTP float ptr [EAX + 0x2c]         ; 004f2a82
    MOV dword ptr [0x01d0c398],EDX      ; 004f2a85 | DAT_01d0c398
    RET                                 ; 004f2a8b

