; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00584130(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00584130
        ;   Label: FUN_00584130
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

