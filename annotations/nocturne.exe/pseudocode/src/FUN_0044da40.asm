; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0044da40(float *param_1,float *param_2,float *param_3)
;
;
; XREF[40]:
;   FUN_0040a200 at 0040a213
;   FUN_0040a240 at 0040a25a
;   FUN_0041aaa0 at 0041ac2c
;   FUN_0041ad10 at 0041af66
;   FUN_0041c850 at 0041c9a9
;   FUN_00422050 at 00422210
;   FUN_00422370 at 004226a6
;   FUN_00427b60 at 00427d5e
;   FUN_0042af70 at 0042b17d
;   FUN_004366f0 at 00436ca3
;   ... and 30 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044da40
        ;   Label: FUN_0044da40
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

