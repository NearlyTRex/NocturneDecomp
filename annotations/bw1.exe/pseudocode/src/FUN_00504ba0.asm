; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504ba0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7465
;   undefined4 DAT_005e746d
;
; Called Functions:
;   FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504ba0
        ;   Label: FUN_00504ba0
    PUSH ESI                            ; 00504ba1
    PUSH EDI                            ; 00504ba2
    PUSH EBP                            ; 00504ba3
    MOV EBP,ESP                         ; 00504ba4
    SUB ESP,0x24                        ; 00504ba6
    AND ESP,0xfffffff8                  ; 00504ba9
    MOV EBX,dword ptr [EBP + 0x18]      ; 00504bac
    PUSH EBX                            ; 00504baf
    MOV EDX,dword ptr [EBP + 0x14]      ; 00504bb0
    PUSH EDX                            ; 00504bb3
    CALL FUN_00409680                   ; 00504bb4
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; undefined FUN_00409680()
    ADD ESP,0x8                         ; 00504bb9
    XOR ESI,ESI                         ; 00504bbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00504bbe
    LEA ECX,[EBX + 0x2c]                ; 00504bc1
    ADD EDX,0x135c                      ; 00504bc4
    FLD float ptr [EDX]                 ; 00504bca
        ;   Label: LAB_00504bca
    FSUB float ptr [ECX]                ; 00504bcc
    FMUL ST0                            ; 00504bce
    FLD float ptr [EDX + 0x4]           ; 00504bd0
    FSUB float ptr [ECX + 0x4]          ; 00504bd3
    FMUL ST0                            ; 00504bd6
    FLD float ptr [EDX + 0x8]           ; 00504bd8
    FXCH                                ; 00504bdb
    FADDP ST2,ST0                       ; 00504bdd
    FSUB float ptr [ECX + 0x8]          ; 00504bdf
    FMUL ST0                            ; 00504be2
    FADDP                               ; 00504be4
    FLD1                                ; 00504be6
    FCOMPP                              ; 00504be8
    FNSTSW AX                           ; 00504bea
    SAHF                                ; 00504bec
    JA 0x00504c63                       ; 00504bed
        ;   XREF to: 00504c63 (CONDITIONAL_JUMP)  ; LAB_00504c63
    INC ESI                             ; 00504bf3
    ADD EDX,0x60                        ; 00504bf4
    CMP ESI,0x2                         ; 00504bf7
    JL 0x00504bca                       ; 00504bfa
        ;   XREF to: 00504bca (CONDITIONAL_JUMP)  ; LAB_00504bca
    CMP dword ptr [EBX + 0x8],0x2       ; 00504bfc
    JNZ 0x00504c5c                      ; 00504c00
        ;   XREF to: 00504c5c (CONDITIONAL_JUMP)  ; LAB_00504c5c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00504c02
    MOV ECX,dword ptr [EBP + 0x14]      ; 00504c05
    LEA EDI,[EBX + 0x2c]                ; 00504c08
    XOR ESI,ESI                         ; 00504c0b
    ADD EDX,0xaa0                       ; 00504c0d
    ADD ECX,0xac4                       ; 00504c13
    MOV dword ptr [ESP + 0x18],EDX      ; 00504c19
    IMUL EDX,ESI,0xb8                   ; 00504c1d
        ;   Label: LAB_00504c1d
    FLD float ptr [ECX]                 ; 00504c23
    FSUB float ptr [EDI]                ; 00504c25
    FMUL ST0                            ; 00504c27
    FLD float ptr [ECX + 0x4]           ; 00504c29
    FSUB float ptr [EDI + 0x4]          ; 00504c2c
    FMUL ST0                            ; 00504c2f
    FLD float ptr [ECX + 0x8]           ; 00504c31
    FXCH                                ; 00504c34
    FADDP ST2,ST0                       ; 00504c36
    FSUB float ptr [EDI + 0x8]          ; 00504c38
    FMUL ST0                            ; 00504c3b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504c3d
    FADDP                               ; 00504c41
    ADD EDX,EAX                         ; 00504c43
    FCOMP double ptr [0x005e746d]       ; 00504c45 | DAT_005e746d
    FNSTSW AX                           ; 00504c4b
    SAHF                                ; 00504c4d
    JC 0x00504c6c                       ; 00504c4e
        ;   XREF to: 00504c6c (CONDITIONAL_JUMP)  ; LAB_00504c6c
    INC ESI                             ; 00504c50
        ;   Label: LAB_00504c50
    ADD ECX,0xb8                        ; 00504c51
    CMP ESI,0xc                         ; 00504c57
    JL 0x00504c1d                       ; 00504c5a
        ;   XREF to: 00504c1d (CONDITIONAL_JUMP)  ; LAB_00504c1d
    MOV ESP,EBP                         ; 00504c5c
        ;   Label: LAB_00504c5c
    POP EBP                             ; 00504c5e
    POP EDI                             ; 00504c5f
    POP ESI                             ; 00504c60
    POP EBX                             ; 00504c61
    RET                                 ; 00504c62
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 00504c63
        ;   Label: LAB_00504c63
    JMP 0x00504c5c                      ; 00504c6a
        ;   XREF to: 00504c5c (UNCONDITIONAL_JUMP)  ; LAB_00504c5c
    FILD dword ptr [EBX + 0xc]          ; 00504c6c
        ;   Label: LAB_00504c6c
    FMUL float ptr [EBX]                ; 00504c6f
    FMUL float ptr [EDX]                ; 00504c71
    FLD double ptr [0x005e7465]         ; 00504c73 | DAT_005e7465
    FXCH                                ; 00504c79
    FMUL ST1                            ; 00504c7b
    FADD float ptr [EDX + 0x18]         ; 00504c7d
    FSTP float ptr [EDX + 0x18]         ; 00504c80
    FILD dword ptr [EBX + 0x10]         ; 00504c83
    FMUL float ptr [EBX]                ; 00504c86
    FMUL float ptr [EDX + 0x4]          ; 00504c88
    FMUL ST1                            ; 00504c8b
    FADD float ptr [EDX + 0x1c]         ; 00504c8d
    FSTP float ptr [EDX + 0x1c]         ; 00504c90
    FILD dword ptr [EBX + 0x14]         ; 00504c93
    FMUL float ptr [EBX]                ; 00504c96
    FMUL float ptr [EDX + 0x8]          ; 00504c98
    FMULP                               ; 00504c9b
    FADD float ptr [EDX + 0x20]         ; 00504c9d
    FSTP float ptr [EDX + 0x20]         ; 00504ca0
    JMP 0x00504c50                      ; 00504ca3
        ;   XREF to: 00504c50 (UNCONDITIONAL_JUMP)  ; LAB_00504c50

