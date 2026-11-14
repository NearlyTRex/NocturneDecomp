; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_00584130(float *basis,float *cp0,float *cp1,float *cp2,float *cp3)
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

    SUB ESP,0x4                         ; 00584130
        ;   Label: core_spline.cpp_evaluateSplineTangentScalar_FUN_00584130
    MOV EAX,dword ptr [ESP + 0x8]       ; 00584133
    MOV EDX,dword ptr [ESP + 0xc]       ; 00584137
    FLD float ptr [EDX]                 ; 0058413b
    FMUL float ptr [EAX + 0x10]         ; 0058413d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00584140
    FLD float ptr [EDX]                 ; 00584144
    FMUL float ptr [EAX + 0x14]         ; 00584146
    FADDP                               ; 00584149
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058414b
    FLD float ptr [EDX]                 ; 0058414f
    FMUL float ptr [EAX + 0x18]         ; 00584151
    FADDP                               ; 00584154
    MOV EDX,dword ptr [ESP + 0x18]      ; 00584156
    FLD float ptr [EDX]                 ; 0058415a
    FMUL float ptr [EAX + 0x1c]         ; 0058415c
    FADDP                               ; 0058415f
    FSTP float ptr [ESP]                ; 00584161
    MOV EAX,dword ptr [ESP]             ; 00584164
    ADD ESP,0x4                         ; 00584167
    RET                                 ; 0058416a

