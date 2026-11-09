; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004f2950(float *param_1)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f5400 at 004f54f3
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2950
        ;   Label: unkafter_minecar.cpp_FUN_004f2950
    FLD float ptr [0x01d098b0]          ; 004f2954 | DAT_01d098b0
    MOV EAX,[0x01d09918]                ; 004f295a | DAT_01d09918
    FSUB float ptr [EDX]                ; 004f295f
    FLD float ptr [0x01d098b4]          ; 004f2961 | DAT_01d098b4
    FXCH                                ; 004f2967
    FSTP float ptr [EAX + 0x24]         ; 004f2969
    FSUB float ptr [EDX + 0x4]          ; 004f296c
    FLD float ptr [0x01d098b8]          ; 004f296f | DAT_01d098b8
    FXCH                                ; 004f2975
    FSTP float ptr [EAX + 0x28]         ; 004f2977
    FSUB float ptr [EDX + 0x8]          ; 004f297a
    MOV EDX,0x1                         ; 004f297d
    FSTP float ptr [EAX + 0x2c]         ; 004f2982
    MOV dword ptr [0x01d0c398],EDX      ; 004f2985 | DAT_01d0c398
    RET                                 ; 004f298b

