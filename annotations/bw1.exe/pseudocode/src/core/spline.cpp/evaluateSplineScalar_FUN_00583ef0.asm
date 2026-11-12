; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_00583ef0(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)
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

    SUB ESP,0x4                         ; 00583ef0
        ;   Label: core_spline.cpp_evaluateSplineScalar_FUN_00583ef0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00583ef3
    MOV EDX,dword ptr [ESP + 0x10]      ; 00583ef7
    FLD float ptr [EDX]                 ; 00583efb
    FMUL float ptr [EAX + 0x4]          ; 00583efd
    MOV EDX,dword ptr [ESP + 0xc]       ; 00583f00
    FLD float ptr [EDX]                 ; 00583f04
    FMUL float ptr [EAX]                ; 00583f06
    FADDP                               ; 00583f08
    MOV EDX,dword ptr [ESP + 0x14]      ; 00583f0a
    FLD float ptr [EDX]                 ; 00583f0e
    FMUL float ptr [EAX + 0x8]          ; 00583f10
    FADDP                               ; 00583f13
    MOV EDX,dword ptr [ESP + 0x18]      ; 00583f15
    FLD float ptr [EDX]                 ; 00583f19
    FMUL float ptr [EAX + 0xc]          ; 00583f1b
    FADDP                               ; 00583f1e
    FSTP float ptr [ESP]                ; 00583f20
    MOV EAX,dword ptr [ESP]             ; 00583f23
    ADD ESP,0x4                         ; 00583f26
    RET                                 ; 00583f29

