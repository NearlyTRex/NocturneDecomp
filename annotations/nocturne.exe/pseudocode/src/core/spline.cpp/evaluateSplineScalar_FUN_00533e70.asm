; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_spline_cpp_evaluateSplineScalar_FUN_00533e70(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00533e70
        ;   Label: core_spline.cpp_evaluateSplineScalar_FUN_00533e70
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533e73
    MOV EDX,dword ptr [ESP + 0x10]      ; 00533e77
    FLD float ptr [EDX]                 ; 00533e7b
    FMUL float ptr [EAX + 0x4]          ; 00533e7d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00533e80
    FLD float ptr [EDX]                 ; 00533e84
    FMUL float ptr [EAX]                ; 00533e86
    FADDP                               ; 00533e88
    MOV EDX,dword ptr [ESP + 0x14]      ; 00533e8a
    FLD float ptr [EDX]                 ; 00533e8e
    FMUL float ptr [EAX + 0x8]          ; 00533e90
    FADDP                               ; 00533e93
    MOV EDX,dword ptr [ESP + 0x18]      ; 00533e95
    FLD float ptr [EDX]                 ; 00533e99
    FMUL float ptr [EAX + 0xc]          ; 00533e9b
    FADDP                               ; 00533e9e
    FSTP float ptr [ESP]                ; 00533ea0
    MOV EAX,dword ptr [ESP]             ; 00533ea3
    ADD ESP,0x4                         ; 00533ea6
    RET                                 ; 00533ea9

