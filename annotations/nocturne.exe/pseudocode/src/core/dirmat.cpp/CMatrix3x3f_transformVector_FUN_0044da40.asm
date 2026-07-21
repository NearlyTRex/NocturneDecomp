; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(float *param_1,float *param_2,float *param_3)
;
;
; XREF[49]:
;   FUN_00422050 at 00422210
;   FUN_0042af70 at 0042b17d
;   FUN_0044f9b0 at 0044fc69
;   FUN_0046baa0 at 0046bc55
;   FUN_0046bd90 at 0046bf45
;   FUN_00495a20 at 00496c95
;   FUN_004ada20 at 004adaa1
;   FUN_004b27c0 at 004b2acc
;   FUN_004c9580 at 004c987c
;   FUN_005384d0 at 00538dd9
;   ... and 39 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044da40
        ;   Label: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044da44
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044da48
    FLD float ptr [EDX + 0x4]           ; 0044da4c
    FMUL float ptr [EAX + 0x4]          ; 0044da4f
    FLD float ptr [EDX]                 ; 0044da52
    FMUL float ptr [EAX]                ; 0044da54
    FADDP                               ; 0044da56
    FLD float ptr [EDX + 0x8]           ; 0044da58
    FMUL float ptr [EAX + 0x8]          ; 0044da5b
    FADDP                               ; 0044da5e
    FSTP float ptr [ECX]                ; 0044da60
    FLD float ptr [EDX + 0x4]           ; 0044da62
    FMUL float ptr [EAX + 0x10]         ; 0044da65
    FLD float ptr [EDX]                 ; 0044da68
    FMUL float ptr [EAX + 0xc]          ; 0044da6a
    FADDP                               ; 0044da6d
    FLD float ptr [EDX + 0x8]           ; 0044da6f
    FMUL float ptr [EAX + 0x14]         ; 0044da72
    FADDP                               ; 0044da75
    FSTP float ptr [ECX + 0x4]          ; 0044da77
    FLD float ptr [EDX + 0x4]           ; 0044da7a
    FMUL float ptr [EAX + 0x1c]         ; 0044da7d
    FLD float ptr [EDX]                 ; 0044da80
    FMUL float ptr [EAX + 0x18]         ; 0044da82
    FADDP                               ; 0044da85
    FLD float ptr [EDX + 0x8]           ; 0044da87
    FMUL float ptr [EAX + 0x20]         ; 0044da8a
    FADDP                               ; 0044da8d
    MOV EAX,ECX                         ; 0044da8f
    FSTP float ptr [ECX + 0x8]          ; 0044da91
    RET                                 ; 0044da94

