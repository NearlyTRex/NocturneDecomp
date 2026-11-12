; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_spline_cpp_evaluateSplineScalar_FUN_005614a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005614a0
        ;   Label: core_spline.cpp_evaluateSplineScalar_FUN_005614a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005614a3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005614a7
    FLD float ptr [EDX]                 ; 005614ab
    FMUL float ptr [EAX + 0x4]          ; 005614ad
    MOV EDX,dword ptr [ESP + 0xc]       ; 005614b0
    FLD float ptr [EDX]                 ; 005614b4
    FMUL float ptr [EAX]                ; 005614b6
    FADDP                               ; 005614b8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005614ba
    FLD float ptr [EDX]                 ; 005614be
    FMUL float ptr [EAX + 0x8]          ; 005614c0
    FADDP                               ; 005614c3
    MOV EDX,dword ptr [ESP + 0x18]      ; 005614c5
    FLD float ptr [EDX]                 ; 005614c9
    FMUL float ptr [EAX + 0xc]          ; 005614cb
    FADDP                               ; 005614ce
    FSTP float ptr [ESP]                ; 005614d0
    MOV EAX,dword ptr [ESP]             ; 005614d3
    ADD ESP,0x4                         ; 005614d6
    RET                                 ; 005614d9

