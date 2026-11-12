; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005677c0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)
;
; Parameters:
; float *          Stack[0x4]:4   basis
; float *          Stack[0x8]:4   cp0
; float *          Stack[0xc]:4   cp1
; float *          Stack[0x10]:4   cp2
; float *          Stack[0x14]:4   cp3
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005677c0
        ;   Label: core_spline.cpp_evaluateSplineScalar_FUN_005677c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005677c3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005677c7
    FLD float ptr [EDX]                 ; 005677cb
    FMUL float ptr [EAX + 0x4]          ; 005677cd
    MOV EDX,dword ptr [ESP + 0xc]       ; 005677d0
    FLD float ptr [EDX]                 ; 005677d4
    FMUL float ptr [EAX]                ; 005677d6
    FADDP                               ; 005677d8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005677da
    FLD float ptr [EDX]                 ; 005677de
    FMUL float ptr [EAX + 0x8]          ; 005677e0
    FADDP                               ; 005677e3
    MOV EDX,dword ptr [ESP + 0x18]      ; 005677e5
    FLD float ptr [EDX]                 ; 005677e9
    FMUL float ptr [EAX + 0xc]          ; 005677eb
    FADDP                               ; 005677ee
    FSTP float ptr [ESP]                ; 005677f0
    MOV EAX,dword ptr [ESP]             ; 005677f3
    ADD ESP,0x4                         ; 005677f6
    RET                                 ; 005677f9

