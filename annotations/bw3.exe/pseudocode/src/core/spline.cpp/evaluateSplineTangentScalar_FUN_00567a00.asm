; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00567a00(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)
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

    SUB ESP,0x4                         ; 00567a00
        ;   Label: core_spline.cpp_evaluateSplineTangentScalar_FUN_00567a00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00567a03
    MOV EDX,dword ptr [ESP + 0xc]       ; 00567a07
    FLD float ptr [EDX]                 ; 00567a0b
    FMUL float ptr [EAX + 0x10]         ; 00567a0d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00567a10
    FLD float ptr [EDX]                 ; 00567a14
    FMUL float ptr [EAX + 0x14]         ; 00567a16
    FADDP                               ; 00567a19
    MOV EDX,dword ptr [ESP + 0x14]      ; 00567a1b
    FLD float ptr [EDX]                 ; 00567a1f
    FMUL float ptr [EAX + 0x18]         ; 00567a21
    FADDP                               ; 00567a24
    MOV EDX,dword ptr [ESP + 0x18]      ; 00567a26
    FLD float ptr [EDX]                 ; 00567a2a
    FMUL float ptr [EAX + 0x1c]         ; 00567a2c
    FADDP                               ; 00567a2f
    FSTP float ptr [ESP]                ; 00567a31
    MOV EAX,dword ptr [ESP]             ; 00567a34
    ADD ESP,0x4                         ; 00567a37
    RET                                 ; 00567a3a

