; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00478ac0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   FUN_004618a0 at 00461aca
;   FUN_004795c0 at 004797e3
;   FUN_0054ac50 at 0054adc8
;   FUN_00568570 at 005685bb
;   FUN_00578d30 at 00578e23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478ac0
        ;   Label: FUN_00478ac0
    PUSH EBP                            ; 00478ac1
    MOV EBP,ESP                         ; 00478ac2
    SUB ESP,0x3c                        ; 00478ac4
    AND ESP,0xfffffff8                  ; 00478ac7
    MOV EDX,dword ptr [EBP + 0xc]       ; 00478aca
    MOV EBX,dword ptr [EBP + 0x10]      ; 00478acd
    MOV ECX,dword ptr [EBP + 0x14]      ; 00478ad0
    FLD float ptr [EDX + 0x28]          ; 00478ad3
    FMUL float ptr [ECX + 0x4]          ; 00478ad6
    FLD float ptr [EDX + 0x24]          ; 00478ad9
    FMUL float ptr [ECX]                ; 00478adc
    FADDP                               ; 00478ade
    FLD float ptr [EDX + 0x2c]          ; 00478ae0
    FMUL float ptr [ECX + 0x8]          ; 00478ae3
    FADDP                               ; 00478ae6
    FST float ptr [ESP]                 ; 00478ae8
    FLDZ                                ; 00478aeb
    FCOMPP                              ; 00478aed
    FNSTSW AX                           ; 00478aef
    SAHF                                ; 00478af1
    JNC 0x00478c4e                      ; 00478af2
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    FLD float ptr [EDX + 0x24]          ; 00478af8
    FMUL float ptr [EBX]                ; 00478afb
    FADD float ptr [EDX + 0x30]         ; 00478afd
    FLD float ptr [EDX + 0x28]          ; 00478b00
    FMUL float ptr [EBX + 0x4]          ; 00478b03
    FADDP                               ; 00478b06
    FLD float ptr [EDX + 0x2c]          ; 00478b08
    FMUL float ptr [EBX + 0x8]          ; 00478b0b
    FADDP                               ; 00478b0e
    FCHS                                ; 00478b10
    FST float ptr [ESP + 0x4]           ; 00478b12
    FLDZ                                ; 00478b16
    FCOMPP                              ; 00478b18
    FNSTSW AX                           ; 00478b1a
    SAHF                                ; 00478b1c
    JA 0x00478c4e                       ; 00478b1d
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    FLD float ptr [ESP + 0x4]           ; 00478b23
    FCOMP float ptr [ESP]               ; 00478b27
    FNSTSW AX                           ; 00478b2a
    SAHF                                ; 00478b2c
    JA 0x00478c4e                       ; 00478b2d
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    FLD float ptr [ESP + 0x4]           ; 00478b33
    FDIV float ptr [ESP]                ; 00478b37
    FST float ptr [ESP + 0x4]           ; 00478b3a
    FMUL float ptr [ECX]                ; 00478b3e
    FLD float ptr [ESP + 0x4]           ; 00478b40
    FMUL float ptr [ECX + 0x4]          ; 00478b44
    FLD float ptr [ESP + 0x4]           ; 00478b47
    FMUL float ptr [ECX + 0x8]          ; 00478b4b
    MOV EAX,dword ptr [EDX + 0x34]      ; 00478b4e
    FXCH ST2                            ; 00478b51
    FADD float ptr [EBX]                ; 00478b53
    FXCH                                ; 00478b55
    FADD float ptr [EBX + 0x4]          ; 00478b57
    FXCH ST2                            ; 00478b5a
    FADD float ptr [EBX + 0x8]          ; 00478b5c
    FXCH                                ; 00478b5f
    FSTP float ptr [ESP + 0x10]         ; 00478b61
    FXCH                                ; 00478b65
    FSTP float ptr [ESP + 0x14]         ; 00478b67
    FSTP float ptr [ESP + 0x18]         ; 00478b6b
    CMP EAX,0x1                         ; 00478b6f
    JNC 0x00478cb8                      ; 00478b72
        ;   XREF to: 00478cb8 (CONDITIONAL_JUMP)  ; LAB_00478cb8
    TEST EAX,EAX                        ; 00478b78
    JNZ 0x00478bce                      ; 00478b7a
        ;   XREF to: 00478bce (CONDITIONAL_JUMP)  ; LAB_00478bce
    FLD float ptr [ESP + 0x14]          ; 00478b7c
    FLD float ptr [ESP + 0x18]          ; 00478b80
    FLD float ptr [EDX + 0x10]          ; 00478b84
    FLD float ptr [EDX + 0x1c]          ; 00478b87
    FLD float ptr [EDX + 0x14]          ; 00478b8a
    FLD float ptr [EDX + 0x20]          ; 00478b8d
    FXCH ST5                            ; 00478b90
    FSUB float ptr [EDX + 0x4]          ; 00478b92
    FXCH ST3                            ; 00478b95
    FSUB float ptr [EDX + 0x4]          ; 00478b97
    FXCH ST2                            ; 00478b9a
    FSUB float ptr [EDX + 0x4]          ; 00478b9c
    FXCH ST4                            ; 00478b9f
        ;   Label: LAB_00478b9f
    FSUB float ptr [EDX + 0x8]          ; 00478ba1
    FXCH                                ; 00478ba4
    FSUB float ptr [EDX + 0x8]          ; 00478ba6
    FXCH ST5                            ; 00478ba9
    FSUB float ptr [EDX + 0x8]          ; 00478bab
    FXCH ST2                            ; 00478bae
        ;   Label: LAB_00478bae
    FSTP float ptr [ESP + 0x20]         ; 00478bb0
    FXCH ST3                            ; 00478bb4
    FSTP float ptr [ESP + 0x24]         ; 00478bb6
    FXCH ST2                            ; 00478bba
    FSTP float ptr [ESP + 0x38]         ; 00478bbc
    FXCH ST2                            ; 00478bc0
    FSTP float ptr [ESP + 0x34]         ; 00478bc2
    FSTP float ptr [ESP + 0x1c]         ; 00478bc6
    FSTP float ptr [ESP + 0x28]         ; 00478bca
    FLD float ptr [ESP + 0x1c]          ; 00478bce
        ;   Label: LAB_00478bce
    FLD float ptr [ESP + 0x20]          ; 00478bd2
    FMUL ST1                            ; 00478bd6
    FLD float ptr [ESP + 0x24]          ; 00478bd8
    FLD float ptr [ESP + 0x34]          ; 00478bdc
    FMUL ST1                            ; 00478be0
    FSUBP ST2,ST0                       ; 00478be2
    FLD1                                ; 00478be4
    FDIVRP ST2,ST0                      ; 00478be6
    FLD float ptr [ESP + 0x28]          ; 00478be8
    FMULP ST3                           ; 00478bec
    FMUL float ptr [ESP + 0x38]         ; 00478bee
    FSUBP ST2,ST0                       ; 00478bf2
    FSTP float ptr [ESP + 0x30]         ; 00478bf4
    FMUL float ptr [ESP + 0x30]         ; 00478bf8
    FST float ptr [ESP + 0x8]           ; 00478bfc
    FLDZ                                ; 00478c00
    FCOMPP                              ; 00478c02
    FNSTSW AX                           ; 00478c04
    SAHF                                ; 00478c06
    JA 0x00478c4e                       ; 00478c07
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    FLD float ptr [ESP + 0x20]          ; 00478c09
    FMUL float ptr [ESP + 0x38]         ; 00478c0d
    FLD float ptr [ESP + 0x34]          ; 00478c11
    FMUL float ptr [ESP + 0x28]         ; 00478c15
    FSUBP                               ; 00478c19
    FMUL float ptr [ESP + 0x30]         ; 00478c1b
    FST float ptr [ESP + 0xc]           ; 00478c1f
    FLDZ                                ; 00478c23
    FCOMPP                              ; 00478c25
    FNSTSW AX                           ; 00478c27
    SAHF                                ; 00478c29
    JA 0x00478c4e                       ; 00478c2a
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    FLD float ptr [ESP + 0x8]           ; 00478c2c
    FADD float ptr [ESP + 0xc]          ; 00478c30
    FLD1                                ; 00478c34
    FCOMPP                              ; 00478c36
    FNSTSW AX                           ; 00478c38
    SAHF                                ; 00478c3a
    JC 0x00478c4e                       ; 00478c3b
        ;   XREF to: 00478c4e (CONDITIONAL_JUMP)  ; LAB_00478c4e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00478c3d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00478c41
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00478c45
    MOV ESP,EBP                         ; 00478c49
    POP EBP                             ; 00478c4b
    POP EBX                             ; 00478c4c
    RET                                 ; 00478c4d
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 00478c4e
        ;   Label: LAB_00478c4e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00478c56
    MOV ESP,EBP                         ; 00478c5a
    POP EBP                             ; 00478c5c
    POP EBX                             ; 00478c5d
    RET                                 ; 00478c5e
    FLD float ptr [ESP + 0x10]          ; 00478c5f
        ;   Label: LAB_00478c5f
    FLD float ptr [ESP + 0x18]          ; 00478c63
    FLD float ptr [EDX + 0xc]           ; 00478c67
    FLD float ptr [EDX + 0x18]          ; 00478c6a
    FLD float ptr [EDX + 0x14]          ; 00478c6d
    FLD float ptr [EDX + 0x20]          ; 00478c70
    FXCH ST5                            ; 00478c73
    FSUB float ptr [EDX]                ; 00478c75
    FXCH ST3                            ; 00478c77
    FSUB float ptr [EDX]                ; 00478c79
    FXCH ST2                            ; 00478c7b
    FSUB float ptr [EDX]                ; 00478c7d
    JMP 0x00478b9f                      ; 00478c7f
        ;   XREF to: 00478b9f (UNCONDITIONAL_JUMP)  ; LAB_00478b9f
    FLD float ptr [ESP + 0x10]          ; 00478c84
        ;   Label: LAB_00478c84
    FLD float ptr [ESP + 0x14]          ; 00478c88
    FLD float ptr [EDX + 0xc]           ; 00478c8c
    FLD float ptr [EDX + 0x18]          ; 00478c8f
    FLD float ptr [EDX + 0x10]          ; 00478c92
    FLD float ptr [EDX + 0x1c]          ; 00478c95
    FXCH ST5                            ; 00478c98
    FSUB float ptr [EDX]                ; 00478c9a
    FXCH ST3                            ; 00478c9c
    FSUB float ptr [EDX]                ; 00478c9e
    FXCH ST2                            ; 00478ca0
    FSUB float ptr [EDX]                ; 00478ca2
    FXCH ST4                            ; 00478ca4
    FSUB float ptr [EDX + 0x4]          ; 00478ca6
    FXCH                                ; 00478ca9
    FSUB float ptr [EDX + 0x4]          ; 00478cab
    FXCH ST5                            ; 00478cae
    FSUB float ptr [EDX + 0x4]          ; 00478cb0
    JMP 0x00478bae                      ; 00478cb3
        ;   XREF to: 00478bae (UNCONDITIONAL_JUMP)  ; LAB_00478bae
    JBE 0x00478c5f                      ; 00478cb8
        ;   XREF to: 00478c5f (CONDITIONAL_JUMP)  ; LAB_00478c5f
        ;   Label: LAB_00478cb8
    CMP EAX,0x2                         ; 00478cba
    JZ 0x00478c84                       ; 00478cbd
        ;   XREF to: 00478c84 (CONDITIONAL_JUMP)  ; LAB_00478c84
    JMP 0x00478bce                      ; 00478cbf
        ;   XREF to: 00478bce (UNCONDITIONAL_JUMP)  ; LAB_00478bce

