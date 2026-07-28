; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_spline_cpp_evaluateSplineTangentScalar_FUN_00534030(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00534030
        ;   Label: core_spline.cpp_evaluateSplineTangentScalar_FUN_00534030
    MOV EAX,dword ptr [ESP + 0x8]       ; 00534033
    MOV EDX,dword ptr [ESP + 0xc]       ; 00534037
    FLD float ptr [EDX]                 ; 0053403b
    FMUL float ptr [EAX + 0x10]         ; 0053403d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00534040
    FLD float ptr [EDX]                 ; 00534044
    FMUL float ptr [EAX + 0x14]         ; 00534046
    FADDP                               ; 00534049
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053404b
    FLD float ptr [EDX]                 ; 0053404f
    FMUL float ptr [EAX + 0x18]         ; 00534051
    FADDP                               ; 00534054
    MOV EDX,dword ptr [ESP + 0x18]      ; 00534056
    FLD float ptr [EDX]                 ; 0053405a
    FMUL float ptr [EAX + 0x1c]         ; 0053405c
    FADDP                               ; 0053405f
    FSTP float ptr [ESP]                ; 00534061
    MOV EAX,dword ptr [ESP]             ; 00534064
    ADD ESP,0x4                         ; 00534067
    RET                                 ; 0053406a

