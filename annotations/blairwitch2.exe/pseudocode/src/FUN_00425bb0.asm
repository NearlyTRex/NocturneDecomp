; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425bb0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[3]:
;   FUN_00422930 at 00422a53
;   FUN_00425fb0 at 00426486
;   FUN_00426e70 at 00426f0c
;
; Referenced Globals:
;   undefined4 DAT_005ccd2e
;
; Called Functions:
;   FUN_00408d70
;   FUN_00543190
;   FUN_00547810
;   FUN_00591530
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425bb0
        ;   Label: FUN_00425bb0
    PUSH ESI                            ; 00425bb1
    PUSH EDI                            ; 00425bb2
    PUSH EBP                            ; 00425bb3
    MOV EBP,ESP                         ; 00425bb4
    SUB ESP,0xb8                        ; 00425bb6
    AND ESP,0xfffffff8                  ; 00425bbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425bbf
    CMP dword ptr [EBP + 0x1c],0x0      ; 00425bc2
    JL 0x00425d0e                       ; 00425bc6
        ;   XREF to: 00425d0e (CONDITIONAL_JUMP)  ; LAB_00425d0e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00425bcc
    MOV ECX,0xffffffff                  ; 00425bcf
    LEA EAX,[EBX + 0x30c]               ; 00425bd4
    XOR ESI,ESI                         ; 00425bda
    XOR EDI,EDI                         ; 00425bdc
    MOV dword ptr [ESP + 0x9c],ESI      ; 00425bde
    MOV dword ptr [ESP + 0x7c],EAX      ; 00425be5
    MOV ESI,EAX                         ; 00425be9
    CMP dword ptr [EDX + 0x1d1f8],0x0   ; 00425beb
    JLE 0x00425c15                      ; 00425bf2
        ;   XREF to: 00425c15 (CONDITIONAL_JUMP)  ; LAB_00425c15
    MOV EAX,dword ptr [EDX + 0x1d21c]   ; 00425bf4
        ;   Label: LAB_00425bf4
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00425bfa
    JZ 0x00425d15                       ; 00425bfd
        ;   XREF to: 00425d15 (CONDITIONAL_JUMP)  ; LAB_00425d15
    MOV EAX,dword ptr [EBP + 0x18]      ; 00425c03
        ;   Label: LAB_00425c03
    ADD EDX,0x24                        ; 00425c06
    INC EDI                             ; 00425c09
    ADD ESI,0xc                         ; 00425c0a
    CMP EDI,dword ptr [EAX + 0x1d1f8]   ; 00425c0d
    JL 0x00425bf4                       ; 00425c13
        ;   XREF to: 00425bf4 (CONDITIONAL_JUMP)  ; LAB_00425bf4
    CMP ECX,-0x1                        ; 00425c15
        ;   Label: LAB_00425c15
    JZ 0x00425d0e                       ; 00425c18
        ;   XREF to: 00425d0e (CONDITIONAL_JUMP)  ; LAB_00425d0e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00425c1e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00425c21
    SUB EAX,EDX                         ; 00425c28
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00425c2a
    SHL EAX,0x2                         ; 00425c2e
    ADD EDX,EAX                         ; 00425c31
    LEA EAX,[ECX*0x4 + 0x0]             ; 00425c33
    SUB EAX,ECX                         ; 00425c3a
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00425c3c
    SHL EAX,0x2                         ; 00425c40
    ADD EAX,EDI                         ; 00425c43
    LEA ESI,[ESP + 0x30]                ; 00425c45
    FLD float ptr [EAX]                 ; 00425c49
    FLD float ptr [EAX + 0x4]           ; 00425c4b
    FLD float ptr [EAX + 0x8]           ; 00425c4e
    LEA EDI,[ESP + 0x54]                ; 00425c51
    FXCH ST2                            ; 00425c55
    FSUB float ptr [EDX]                ; 00425c57
    FXCH                                ; 00425c59
    FSUB float ptr [EDX + 0x4]          ; 00425c5b
    FXCH ST2                            ; 00425c5e
    FSUB float ptr [EDX + 0x8]          ; 00425c60
    FXCH                                ; 00425c63
    FSTP float ptr [ESP + 0x30]         ; 00425c65
    FXCH                                ; 00425c69
    FSTP float ptr [ESP + 0x34]         ; 00425c6b
    FSTP float ptr [ESP + 0x38]         ; 00425c6f
    MOVSD ES:EDI,ESI                    ; 00425c73
    MOVSD ES:EDI,ESI                    ; 00425c74
    MOVSD ES:EDI,ESI                    ; 00425c75
    FLD float ptr [ESP + 0x58]          ; 00425c76
    FMUL ST0                            ; 00425c7a
    FLD float ptr [ESP + 0x54]          ; 00425c7c
    FMUL ST0                            ; 00425c80
    FADDP                               ; 00425c82
    FLD float ptr [ESP + 0x5c]          ; 00425c84
    FMUL ST0                            ; 00425c88
    FADDP                               ; 00425c8a
    FSQRT                               ; 00425c8c
    FMUL double ptr [0x005ccd2e]        ; 00425c8e | DAT_005ccd2e
    CALL FUN_005b7ff0                   ; 00425c94
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xb0]        ; 00425c99
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00425ca0
    INC EAX                             ; 00425ca7
    MOV dword ptr [ESP + 0x94],EAX      ; 00425ca8
    XOR EAX,EAX                         ; 00425caf
    MOV EDX,dword ptr [ESP + 0x94]      ; 00425cb1
    MOV dword ptr [ESP + 0xa8],EAX      ; 00425cb8
    TEST EDX,EDX                        ; 00425cbf
    JLE 0x00425d0e                      ; 00425cc1
        ;   XREF to: 00425d0e (CONDITIONAL_JUMP)  ; LAB_00425d0e
    LEA EAX,[EBX + 0x1134]              ; 00425cc3
    MOV dword ptr [ESP + 0x88],EAX      ; 00425cc9
    LEA EAX,[EBX + 0x3a20]              ; 00425cd0
    MOV dword ptr [ESP + 0x84],EAX      ; 00425cd6
    LEA EAX,[EBX + 0x3570]              ; 00425cdd
    MOV dword ptr [ESP + 0x8c],EAX      ; 00425ce3
    LEA EAX,[EBX + 0x2b4]               ; 00425cea
    MOV dword ptr [ESP + 0x80],EAX      ; 00425cf0
    LEA EAX,[EDX + 0x1]                 ; 00425cf7
    MOV dword ptr [ESP + 0x90],EAX      ; 00425cfa
    CMP dword ptr [EBX + 0x3564],0x32   ; 00425d01
        ;   Label: LAB_00425d01
    JL 0x00425d55                       ; 00425d08
        ;   XREF to: 00425d55 (CONDITIONAL_JUMP)  ; LAB_00425d55
    MOV ESP,EBP                         ; 00425d0e
        ;   Label: LAB_00425d0e
    POP EBP                             ; 00425d10
    POP EDI                             ; 00425d11
    POP ESI                             ; 00425d12
    POP EBX                             ; 00425d13
    RET                                 ; 00425d14
    FLD float ptr [ESI + 0x4]           ; 00425d15
        ;   Label: LAB_00425d15
    FMUL ST0                            ; 00425d18
    FLD float ptr [ESI]                 ; 00425d1a
    FMUL ST0                            ; 00425d1c
    FADDP                               ; 00425d1e
    FLD float ptr [ESI + 0x8]           ; 00425d20
    FMUL ST0                            ; 00425d23
    FADDP                               ; 00425d25
    FSQRT                               ; 00425d27
    FST float ptr [ESP + 0xa0]          ; 00425d29
    FCOMP float ptr [ESP + 0x9c]        ; 00425d30
    FNSTSW AX                           ; 00425d37
    SAHF                                ; 00425d39
    JBE 0x00425c03                      ; 00425d3a
        ;   XREF to: 00425c03 (CONDITIONAL_JUMP)  ; LAB_00425c03
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00425d40
    MOV ECX,EDI                         ; 00425d47
    MOV dword ptr [ESP + 0x9c],EAX      ; 00425d49
    JMP 0x00425c03                      ; 00425d50
        ;   XREF to: 00425c03 (UNCONDITIONAL_JUMP)  ; LAB_00425c03
    MOV ESI,dword ptr [EBX + 0x3564]    ; 00425d55
        ;   Label: LAB_00425d55
    IMUL EAX,ESI,0x18                   ; 00425d5b
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00425d5e
    MOV dword ptr [EBX + 0xfc],0x1      ; 00425d65
    ADD EDX,EAX                         ; 00425d6f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00425d71
    LEA EDI,[ESI + 0x1]                 ; 00425d78
    PUSH EAX                            ; 00425d7b
    MOV dword ptr [ESP + 0xb0],EDX      ; 00425d7c
    MOV dword ptr [EBX + 0x3564],EDI    ; 00425d83
    CALL FUN_00547810                   ; 00425d89
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00425d8e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00425d91
    PUSH EDX                            ; 00425d94
    PUSH EAX                            ; 00425d95
    CALL FUN_00543190                   ; 00425d96
        ;   XREF to: 00543190 (UNCONDITIONAL_CALL)  ; undefined FUN_00543190()
    ADD ESP,0x8                         ; 00425d9b
    MOV EDX,dword ptr [ESP + 0xac]      ; 00425d9e
    MOV dword ptr [EDX],EAX             ; 00425da5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00425da7
    MOV dword ptr [EDX + 0x4],EAX       ; 00425daa
    MOV EAX,dword ptr [ESP + 0x90]      ; 00425dad
    MOV dword ptr [ESP + 0xb0],EAX      ; 00425db4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00425dbb
    INC EAX                             ; 00425dc2
    MOV dword ptr [ESP + 0xb4],EAX      ; 00425dc3
    FLD float ptr [ESP + 0x54]          ; 00425dca
    FILD dword ptr [ESP + 0xb4]         ; 00425dce
    FSTP float ptr [ESP + 0xa4]         ; 00425dd5
    FMUL float ptr [ESP + 0xa4]         ; 00425ddc
    FLD float ptr [ESP + 0x58]          ; 00425de3
    FMUL float ptr [ESP + 0xa4]         ; 00425de7
    FLD float ptr [ESP + 0x5c]          ; 00425dee
    FMUL float ptr [ESP + 0xa4]         ; 00425df2
    LEA ESI,[ESP + 0x3c]                ; 00425df9
    LEA EDI,[ESP + 0xc]                 ; 00425dfd
    FLD1                                ; 00425e01
    FILD dword ptr [ESP + 0xb0]         ; 00425e03
    FXCH ST4                            ; 00425e0a
    FSTP float ptr [ESP + 0x3c]         ; 00425e0c
    FXCH ST2                            ; 00425e10
    FSTP float ptr [ESP + 0x40]         ; 00425e12
    FSTP float ptr [ESP + 0x44]         ; 00425e16
    MOVSD ES:EDI,ESI                    ; 00425e1a
    MOVSD ES:EDI,ESI                    ; 00425e1b
    MOVSD ES:EDI,ESI                    ; 00425e1c
    FXCH                                ; 00425e1d
    FSTP float ptr [ESP + 0x98]         ; 00425e1f
    FLD float ptr [ESP + 0xc]           ; 00425e26
    FXCH                                ; 00425e2a
    FDIV float ptr [ESP + 0x98]         ; 00425e2c
    FXCH                                ; 00425e33
    FMUL ST1                            ; 00425e35
    FLD float ptr [ESP + 0x10]          ; 00425e37
    FMUL ST2                            ; 00425e3b
    FLD float ptr [ESP + 0x14]          ; 00425e3d
    FMULP ST3                           ; 00425e41
    LEA EDI,[ESP + 0x60]                ; 00425e43
    LEA ESI,[ESP + 0x18]                ; 00425e47
    FXCH                                ; 00425e4b
    FSTP float ptr [ESP + 0x18]         ; 00425e4d
    FSTP float ptr [ESP + 0x1c]         ; 00425e51
    FSTP float ptr [ESP + 0x20]         ; 00425e55
    MOVSD ES:EDI,ESI                    ; 00425e59
    MOVSD ES:EDI,ESI                    ; 00425e5a
    MOVSD ES:EDI,ESI                    ; 00425e5b
    LEA EAX,[ESP + 0x60]                ; 00425e5c
    LEA ESI,[EDX + 0x8]                 ; 00425e60
    CMP ESI,EAX                         ; 00425e63
    JZ 0x00425e7b                       ; 00425e65
        ;   XREF to: 00425e7b (CONDITIONAL_JUMP)  ; LAB_00425e7b
    MOV EAX,dword ptr [ESP + 0x60]      ; 00425e67
    MOV dword ptr [ESI],EAX             ; 00425e6b
    MOV EAX,dword ptr [ESP + 0x64]      ; 00425e6d
    MOV dword ptr [ESI + 0x4],EAX       ; 00425e71
    MOV EAX,dword ptr [ESP + 0x68]      ; 00425e74
    MOV dword ptr [ESI + 0x8],EAX       ; 00425e78
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425e7b
        ;   Label: LAB_00425e7b
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 00425e82
    ADD EAX,dword ptr [ESP + 0x88]      ; 00425e86
    PUSH EAX                            ; 00425e8d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00425e8e
    ADD EAX,0x8                         ; 00425e95
    PUSH EAX                            ; 00425e98
    LEA ESI,[ESP + 0x74]                ; 00425e99
    LEA EDI,[ESP + 0x2c]                ; 00425e9d
    CALL FUN_00591530                   ; 00425ea1
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00425ea6
    LEA EAX,[ESP + 0x24]                ; 00425ea9
    LEA ESI,[ESP + 0x6c]                ; 00425ead
    PUSH EAX                            ; 00425eb1
    MOVSD ES:EDI,ESI                    ; 00425eb2
    MOVSD ES:EDI,ESI                    ; 00425eb3
    MOVSD ES:EDI,ESI                    ; 00425eb4
    PUSH EBX                            ; 00425eb5
    LEA ESI,[ESP + 0x8]                 ; 00425eb6
    LEA EDI,[ESP + 0x50]                ; 00425eba
    CALL FUN_00408d70                   ; 00425ebe
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x8]                 ; 00425ec3
    ADD ESP,0x8                         ; 00425ec7
    MOVSD ES:EDI,ESI                    ; 00425eca
    MOVSD ES:EDI,ESI                    ; 00425ecb
    MOVSD ES:EDI,ESI                    ; 00425ecc
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425ecd
    DEC EAX                             ; 00425ed3
    MOV EDI,dword ptr [ESP + 0x84]      ; 00425ed4
    SHL EAX,0xa                         ; 00425edb
    ADD EAX,EDI                         ; 00425ede
    LEA ESI,[EAX + 0x20]                ; 00425ee0
    MOV EAX,dword ptr [ESP + 0x48]      ; 00425ee3
    MOV dword ptr [ESI],EAX             ; 00425ee7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00425ee9
    MOV dword ptr [ESI + 0x4],EAX       ; 00425eed
    MOV EAX,dword ptr [ESP + 0x50]      ; 00425ef0
    MOV dword ptr [ESI + 0x8],EAX       ; 00425ef4
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425ef7
    DEC EAX                             ; 00425efd
    SHL EAX,0xa                         ; 00425efe
    MOV dword ptr [EBX + EAX*0x1 + 0x3d28],0x0 ; 00425f01
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425f0c
    MOV dword ptr [EAX + 0x14],0x3f000000 ; 00425f13
    FLD float ptr [EAX + 0x14]          ; 00425f1a
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425f1d
    FLD double ptr [0x005ccd2e]         ; 00425f23 | DAT_005ccd2e
    FXCH                                ; 00425f29
    FMUL ST1                            ; 00425f2b
    DEC EAX                             ; 00425f2d
    SHL EAX,0xa                         ; 00425f2e
    FSTP float ptr [EBX + EAX*0x1 + 0x3cd4] ; 00425f31
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425f38
    DEC EAX                             ; 00425f3e
    MOV EDX,dword ptr [ESP + 0xac]      ; 00425f3f
    SHL EAX,0xa                         ; 00425f46
    MOV ECX,dword ptr [EDX + 0x14]      ; 00425f49
    MOV dword ptr [EBX + EAX*0x1 + 0x3cd8],ECX ; 00425f4c
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425f53
    FLD float ptr [EDX + 0x14]          ; 00425f59
    DEC EAX                             ; 00425f5c
    FMULP                               ; 00425f5d
    SHL EAX,0xa                         ; 00425f5f
    FSTP float ptr [EBX + EAX*0x1 + 0x3cdc] ; 00425f62
    MOV EAX,dword ptr [EBX + 0x3564]    ; 00425f69
    DEC EAX                             ; 00425f6f
    SHL EAX,0xa                         ; 00425f70
    MOV EDX,dword ptr [EBX + 0x3568]    ; 00425f73
    MOV dword ptr [EBX + EAX*0x1 + 0x3d24],EDX ; 00425f79
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00425f80
    INC EAX                             ; 00425f87
    MOV EDX,dword ptr [ESP + 0x94]      ; 00425f88
    MOV dword ptr [ESP + 0xa8],EAX      ; 00425f8f
    CMP EAX,EDX                         ; 00425f96
    JL 0x00425d01                       ; 00425f98
        ;   XREF to: 00425d01 (CONDITIONAL_JUMP)  ; LAB_00425d01
    MOV ESP,EBP                         ; 00425f9e
    POP EBP                             ; 00425fa0
    POP EDI                             ; 00425fa1
    POP ESI                             ; 00425fa2
    POP EBX                             ; 00425fa3
    RET                                 ; 00425fa4

