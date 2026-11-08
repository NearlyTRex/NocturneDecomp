; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593a50(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00593770 at 005937e8
;
; Referenced Globals:
;   undefined4 DAT_005eed96
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593a50
        ;   Label: FUN_00593a50
    SUB ESP,0x2c                        ; 00593a51
    MOV EDX,dword ptr [ESP + 0x34]      ; 00593a54
    MOV ECX,ESI                         ; 00593a58
    FLD float ptr [EDX]                 ; 00593a5a
    FADD float ptr [EDX + 0x14]         ; 00593a5c
    FST float ptr [ESP + 0x14]          ; 00593a5f
    FADD float ptr [EDX + 0x28]         ; 00593a63
    FLDZ                                ; 00593a66
    FXCH                                ; 00593a68
    FSTP float ptr [ESP + 0x24]         ; 00593a6a
    FCOMP float ptr [ESP + 0x24]        ; 00593a6e
    FNSTSW AX                           ; 00593a72
    SAHF                                ; 00593a74
    JC 0x00593af1                       ; 00593a75
        ;   XREF to: 00593af1 (CONDITIONAL_JUMP)  ; LAB_00593af1
    FLD float ptr [EDX]                 ; 00593a77
    FCOMP float ptr [EDX + 0x14]        ; 00593a79
    FNSTSW AX                           ; 00593a7c
    SAHF                                ; 00593a7e
    JBE 0x00593b91                      ; 00593a7f
        ;   XREF to: 00593b91 (CONDITIONAL_JUMP)  ; LAB_00593b91
    FLD float ptr [EDX]                 ; 00593a85
    FCOMP float ptr [EDX + 0x28]        ; 00593a87
    FNSTSW AX                           ; 00593a8a
    SAHF                                ; 00593a8c
    JBE 0x00593b34                      ; 00593a8d
        ;   XREF to: 00593b34 (CONDITIONAL_JUMP)  ; LAB_00593b34
    FLD float ptr [EDX + 0x14]          ; 00593a93
    FADD float ptr [EDX + 0x28]         ; 00593a96
    FSUBR float ptr [EDX]               ; 00593a99
    FLD1                                ; 00593a9b
    FADDP                               ; 00593a9d
    FSQRT                               ; 00593a9f
    FLD float ptr [0x005eed96]          ; 00593aa1 | DAT_005eed96
    FLD ST0                             ; 00593aa7
    FDIV ST0,ST2                        ; 00593aa9
    FLD ST2                             ; 00593aab
    FMULP ST2                           ; 00593aad
    FLD float ptr [EDX + 0x24]          ; 00593aaf
    FSUB float ptr [EDX + 0x18]         ; 00593ab2
    FXCH                                ; 00593ab5
    FSTP ST3                            ; 00593ab7
    FMUL ST2                            ; 00593ab9
    FLD float ptr [EDX + 0x20]          ; 00593abb
    FLD float ptr [EDX + 0x10]          ; 00593abe
    FADD float ptr [EDX + 0x4]          ; 00593ac1
    FXCH                                ; 00593ac4
    FADD float ptr [EDX + 0x8]          ; 00593ac6
    FXCH                                ; 00593ac9
    FMUL ST4                            ; 00593acb
    FXCH                                ; 00593acd
    FMULP ST4                           ; 00593acf
    FXCH ST2                            ; 00593ad1
    FSTP float ptr [ESP + 0x4]          ; 00593ad3
    FSTP float ptr [ESP]                ; 00593ad7
    FSTP float ptr [ESP + 0x8]          ; 00593ada
        ;   Label: LAB_00593ada
    FSTP float ptr [ESP + 0xc]          ; 00593ade
    MOV ESI,ESP                         ; 00593ae2
    MOV EDI,ECX                         ; 00593ae4
    MOVSD ES:EDI,ESI                    ; 00593ae6
    MOVSD ES:EDI,ESI                    ; 00593ae7
    MOVSD ES:EDI,ESI                    ; 00593ae8
    MOVSD ES:EDI,ESI                    ; 00593ae9
    MOV EAX,ECX                         ; 00593aea
    ADD ESP,0x2c                        ; 00593aec
    POP EDI                             ; 00593aef
    RET                                 ; 00593af0
    FLD1                                ; 00593af1
        ;   Label: LAB_00593af1
    FADD float ptr [ESP + 0x24]         ; 00593af3
    FSQRT                               ; 00593af7
    FLD float ptr [0x005eed96]          ; 00593af9 | DAT_005eed96
    FLD ST0                             ; 00593aff
    FDIV ST0,ST2                        ; 00593b01
    FLD ST2                             ; 00593b03
    FMULP ST2                           ; 00593b05
    FLD float ptr [EDX + 0x24]          ; 00593b07
    FSUB float ptr [EDX + 0x18]         ; 00593b0a
    FXCH                                ; 00593b0d
    FSTP ST3                            ; 00593b0f
    FMUL ST2                            ; 00593b11
    FLD float ptr [EDX + 0x10]          ; 00593b13
    FLD float ptr [EDX + 0x8]           ; 00593b16
    FSUB float ptr [EDX + 0x20]         ; 00593b19
    FXCH                                ; 00593b1c
    FSUB float ptr [EDX + 0x4]          ; 00593b1e
    FXCH                                ; 00593b21
    FMUL ST4                            ; 00593b23
    FXCH                                ; 00593b25
    FMULP ST4                           ; 00593b27
    FXCH ST2                            ; 00593b29
    FSTP float ptr [ESP]                ; 00593b2b
    FSTP float ptr [ESP + 0x4]          ; 00593b2e
    JMP 0x00593ada                      ; 00593b32
        ;   XREF to: 00593ada (UNCONDITIONAL_JUMP)  ; LAB_00593ada
    FLD float ptr [EDX + 0x28]          ; 00593b34
        ;   Label: LAB_00593b34
    FSUB float ptr [ESP + 0x14]         ; 00593b37
    FLD1                                ; 00593b3b
    FADDP                               ; 00593b3d
    FSQRT                               ; 00593b3f
    FLD float ptr [0x005eed96]          ; 00593b41 | DAT_005eed96
    FLD ST0                             ; 00593b47
    FDIV ST0,ST2                        ; 00593b49
    FLD ST2                             ; 00593b4b
    FMULP ST2                           ; 00593b4d
    FLD float ptr [EDX + 0x10]          ; 00593b4f
    FSUB float ptr [EDX + 0x4]          ; 00593b52
    FXCH                                ; 00593b55
    FSTP ST3                            ; 00593b57
    FMUL ST2                            ; 00593b59
    FLD float ptr [EDX + 0x18]          ; 00593b5b
    FLD float ptr [EDX + 0x8]           ; 00593b5e
    FADD float ptr [EDX + 0x20]         ; 00593b61
    FXCH                                ; 00593b64
    FADD float ptr [EDX + 0x24]         ; 00593b66
    FXCH                                ; 00593b69
    FMUL ST4                            ; 00593b6b
    FXCH                                ; 00593b6d
    FMULP ST4                           ; 00593b6f
    FXCH ST2                            ; 00593b71
    FSTP float ptr [ESP + 0xc]          ; 00593b73
    FSTP float ptr [ESP]                ; 00593b77
    FSTP float ptr [ESP + 0x4]          ; 00593b7a
    FSTP float ptr [ESP + 0x8]          ; 00593b7e
    MOV ESI,ESP                         ; 00593b82
    MOV EDI,ECX                         ; 00593b84
    MOVSD ES:EDI,ESI                    ; 00593b86
    MOVSD ES:EDI,ESI                    ; 00593b87
    MOVSD ES:EDI,ESI                    ; 00593b88
    MOVSD ES:EDI,ESI                    ; 00593b89
    MOV EAX,ECX                         ; 00593b8a
    ADD ESP,0x2c                        ; 00593b8c
    POP EDI                             ; 00593b8f
    RET                                 ; 00593b90
    FLD float ptr [EDX + 0x14]          ; 00593b91
        ;   Label: LAB_00593b91
    FCOMP float ptr [EDX + 0x28]        ; 00593b94
    FNSTSW AX                           ; 00593b97
    SAHF                                ; 00593b99
    JBE 0x00593b34                      ; 00593b9a
        ;   XREF to: 00593b34 (CONDITIONAL_JUMP)  ; LAB_00593b34
    FLD float ptr [EDX + 0x28]          ; 00593b9c
    FADD float ptr [EDX]                ; 00593b9f
    FSUBR float ptr [EDX + 0x14]        ; 00593ba1
    FLD1                                ; 00593ba4
    FADDP                               ; 00593ba6
    FSQRT                               ; 00593ba8
    FLD float ptr [0x005eed96]          ; 00593baa | DAT_005eed96
    FLD ST0                             ; 00593bb0
    FDIV ST0,ST2                        ; 00593bb2
    FLD ST2                             ; 00593bb4
    FMULP ST2                           ; 00593bb6
    FLD float ptr [EDX + 0x8]           ; 00593bb8
    FSUB float ptr [EDX + 0x20]         ; 00593bbb
    FXCH                                ; 00593bbe
    FSTP ST3                            ; 00593bc0
    FMUL ST2                            ; 00593bc2
    FLD float ptr [EDX + 0x4]           ; 00593bc4
    FLD float ptr [EDX + 0x24]          ; 00593bc7
    FADD float ptr [EDX + 0x18]         ; 00593bca
    FXCH                                ; 00593bcd
    FADD float ptr [EDX + 0x10]         ; 00593bcf
    FXCH                                ; 00593bd2
    FMUL ST4                            ; 00593bd4
    FXCH                                ; 00593bd6
    FMULP ST4                           ; 00593bd8
    FXCH ST2                            ; 00593bda
    FSTP float ptr [ESP + 0x8]          ; 00593bdc
    FSTP float ptr [ESP]                ; 00593be0
    FSTP float ptr [ESP + 0xc]          ; 00593be3
    FSTP float ptr [ESP + 0x4]          ; 00593be7
    MOV ESI,ESP                         ; 00593beb
    MOV EDI,ECX                         ; 00593bed
    MOVSD ES:EDI,ESI                    ; 00593bef
    MOVSD ES:EDI,ESI                    ; 00593bf0
    MOVSD ES:EDI,ESI                    ; 00593bf1
    MOVSD ES:EDI,ESI                    ; 00593bf2
    MOV EAX,ECX                         ; 00593bf3
    ADD ESP,0x2c                        ; 00593bf5
    POP EDI                             ; 00593bf8
    RET                                 ; 00593bf9

