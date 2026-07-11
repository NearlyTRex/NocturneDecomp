; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0055a8b0(float *param_1,float *param_2,float *param_3)
;
;
; XREF[24]:
;   FUN_00410cc0 at 00410f4a
;   FUN_00422c70 at 00422e5e
;   FUN_004266a0 at 004268d4
;   FUN_004269b0 at 00426bc9
;   FUN_004277f0 at 0042786d
;   FUN_00427eb0 at 0042807a
;   FUN_0042abd0 at 0042aca3
;   FUN_0042b890 at 0042b8c8
;   FUN_004359e0 at 00435eb7
;   FUN_00436e80 at 00436f99
;   ... and 14 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0055a8b0
        ;   Label: FUN_0055a8b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055a8b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055a8b8
    FLD float ptr [EDX + 0x4]           ; 0055a8bc
    FMUL float ptr [EAX + 0x4]          ; 0055a8bf
    FLD float ptr [EDX]                 ; 0055a8c2
    FMUL float ptr [EAX]                ; 0055a8c4
    FADDP                               ; 0055a8c6
    FLD float ptr [EDX + 0x8]           ; 0055a8c8
    FMUL float ptr [EAX + 0x8]          ; 0055a8cb
    FADDP                               ; 0055a8ce
    FADD float ptr [EAX + 0xc]          ; 0055a8d0
    FSTP float ptr [ECX]                ; 0055a8d3
    FLD float ptr [EDX + 0x4]           ; 0055a8d5
    FMUL float ptr [EAX + 0x14]         ; 0055a8d8
    FLD float ptr [EDX]                 ; 0055a8db
    FMUL float ptr [EAX + 0x10]         ; 0055a8dd
    FADDP                               ; 0055a8e0
    FLD float ptr [EDX + 0x8]           ; 0055a8e2
    FMUL float ptr [EAX + 0x18]         ; 0055a8e5
    FADDP                               ; 0055a8e8
    FADD float ptr [EAX + 0x1c]         ; 0055a8ea
    FSTP float ptr [ECX + 0x4]          ; 0055a8ed
    FLD float ptr [EDX + 0x4]           ; 0055a8f0
    FMUL float ptr [EAX + 0x24]         ; 0055a8f3
    FLD float ptr [EDX]                 ; 0055a8f6
    FMUL float ptr [EAX + 0x20]         ; 0055a8f8
    FADDP                               ; 0055a8fb
    FLD float ptr [EDX + 0x8]           ; 0055a8fd
    FMUL float ptr [EAX + 0x28]         ; 0055a900
    FADDP                               ; 0055a903
    FADD float ptr [EAX + 0x2c]         ; 0055a905
    MOV EAX,ECX                         ; 0055a908
    FSTP float ptr [ECX + 0x8]          ; 0055a90a
    RET                                 ; 0055a90d

