; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005616e0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005616e0
        ;   Label: core_spline.cpp_evaluateSplineTangentScalar_FUN_005616e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005616e3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005616e7
    FLD float ptr [EDX]                 ; 005616eb
    FMUL float ptr [EAX + 0x10]         ; 005616ed
    MOV EDX,dword ptr [ESP + 0x10]      ; 005616f0
    FLD float ptr [EDX]                 ; 005616f4
    FMUL float ptr [EAX + 0x14]         ; 005616f6
    FADDP                               ; 005616f9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005616fb
    FLD float ptr [EDX]                 ; 005616ff
    FMUL float ptr [EAX + 0x18]         ; 00561701
    FADDP                               ; 00561704
    MOV EDX,dword ptr [ESP + 0x18]      ; 00561706
    FLD float ptr [EDX]                 ; 0056170a
    FMUL float ptr [EAX + 0x1c]         ; 0056170c
    FADDP                               ; 0056170f
    FSTP float ptr [ESP]                ; 00561711
    MOV EAX,dword ptr [ESP]             ; 00561714
    ADD ESP,0x4                         ; 00561717
    RET                                 ; 0056171a

