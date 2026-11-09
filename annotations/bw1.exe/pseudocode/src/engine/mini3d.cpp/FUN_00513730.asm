; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00513730(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d2adbc
;   undefined4 DAT_01d2adc0
;   undefined4 DAT_01d2adc4
;   undefined4 DAT_01d2adcc
;   undefined4 DAT_01d2add0
;   undefined4 DAT_01d2add4
;   undefined4 DAT_01d2addc
;   undefined4 DAT_01d2ade0
;   undefined4 DAT_01d2ade4
;
; Called Functions:
;   engine_mini3d.cpp_FUN_005124f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513730
        ;   Label: engine_mini3d.cpp_FUN_00513730
    PUSH ESI                            ; 00513731
    MOV EBX,dword ptr [ESP + 0xc]       ; 00513732
    MOV ESI,dword ptr [ESP + 0x10]      ; 00513736
    CALL engine_mini3d.cpp_FUN_005124f0 ; 0051373a
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
    FLD float ptr [EBX + 0x4]           ; 0051373f
    FMUL float ptr [0x01d2adc0]         ; 00513742 | DAT_01d2adc0
    FLD float ptr [EBX]                 ; 00513748
    FMUL float ptr [0x01d2adbc]         ; 0051374a | DAT_01d2adbc
    FADDP                               ; 00513750
    FLD float ptr [EBX + 0x8]           ; 00513752
    FMUL float ptr [0x01d2adc4]         ; 00513755 | DAT_01d2adc4
    FADDP                               ; 0051375b
    FSTP float ptr [ESI]                ; 0051375d
    FLD float ptr [EBX + 0x4]           ; 0051375f
    FMUL float ptr [0x01d2add0]         ; 00513762 | DAT_01d2add0
    FLD float ptr [EBX]                 ; 00513768
    FMUL float ptr [0x01d2adcc]         ; 0051376a | DAT_01d2adcc
    FADDP                               ; 00513770
    FLD float ptr [EBX + 0x8]           ; 00513772
    FMUL float ptr [0x01d2add4]         ; 00513775 | DAT_01d2add4
    FADDP                               ; 0051377b
    FSTP float ptr [ESI + 0x4]          ; 0051377d
    FLD float ptr [EBX + 0x4]           ; 00513780
    FMUL float ptr [0x01d2ade0]         ; 00513783 | DAT_01d2ade0
    FLD float ptr [EBX]                 ; 00513789
    FMUL float ptr [0x01d2addc]         ; 0051378b | DAT_01d2addc
    FADDP                               ; 00513791
    FLD float ptr [EBX + 0x8]           ; 00513793
    FMUL float ptr [0x01d2ade4]         ; 00513796 | DAT_01d2ade4
    FADDP                               ; 0051379c
    FSTP float ptr [ESI + 0x8]          ; 0051379e
    POP ESI                             ; 005137a1
    POP EBX                             ; 005137a2
    RET                                 ; 005137a3

