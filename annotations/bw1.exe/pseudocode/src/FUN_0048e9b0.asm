; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048e9b0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[1]:
;   FUN_005572e0 at 005572ef
;
; Referenced Globals:
;   undefined4 DAT_005dbb20
;   undefined4 DAT_005dbb24
;   undefined4 DAT_0061ab68
;
; Called Functions:
;   FUN_0048afe0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e9b0
        ;   Label: FUN_0048e9b0
    PUSH ESI                            ; 0048e9b1
    PUSH EDI                            ; 0048e9b2
    PUSH EBP                            ; 0048e9b3
    MOV EBP,ESP                         ; 0048e9b4
    SUB ESP,0x84                        ; 0048e9b6
    AND ESP,0xfffffff8                  ; 0048e9bc
    MOV EDX,dword ptr [EBP + 0x18]      ; 0048e9bf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048e9c2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0048e9c5
    FLD float ptr [EDX]                 ; 0048e9c8
    FSUB float ptr [ECX + 0x10]         ; 0048e9ca
    FLD float ptr [0x005dbb20]          ; 0048e9cd | DAT_005dbb20
    FLD float ptr [ECX + 0x28]          ; 0048e9d3
    FMUL ST1                            ; 0048e9d6
    FLD1                                ; 0048e9d8
    FDIVRP                              ; 0048e9da
    FLD float ptr [EDX + 0x4]           ; 0048e9dc
    FSUB float ptr [ECX + 0x14]         ; 0048e9df
    FLD float ptr [ECX + 0x2c]          ; 0048e9e2
    FMUL ST3                            ; 0048e9e5
    FLD1                                ; 0048e9e7
    FDIVRP                              ; 0048e9e9
    FXCH ST4                            ; 0048e9eb
    FMUL ST2                            ; 0048e9ed
    FLD float ptr [EDX + 0x8]           ; 0048e9ef
    FSUB float ptr [ECX + 0x18]         ; 0048e9f2
    FXCH                                ; 0048e9f5
    FSTP float ptr [ESP + 0x28]         ; 0048e9f7
    FLD float ptr [ECX + 0x30]          ; 0048e9fb
    FMULP ST4                           ; 0048e9fe
    FLD1                                ; 0048ea00
    FDIVRP ST4,ST0                      ; 0048ea02
    FXCH                                ; 0048ea04
    FMUL ST4                            ; 0048ea06
    FLD float ptr [EAX]                 ; 0048ea08
    FSUB float ptr [ECX + 0x10]         ; 0048ea0a
    FXCH ST2                            ; 0048ea0d
    FMUL ST4                            ; 0048ea0f
    FXCH ST2                            ; 0048ea11
    FMULP ST3                           ; 0048ea13
    FSTP float ptr [ESP + 0x78]         ; 0048ea15
    FLD float ptr [EAX + 0x8]           ; 0048ea19
    FLD float ptr [EAX + 0x4]           ; 0048ea1c
    FSUB float ptr [ECX + 0x14]         ; 0048ea1f
    FXCH                                ; 0048ea22
    FSUB float ptr [ECX + 0x18]         ; 0048ea24
    FXCH                                ; 0048ea27
    FMULP ST5                           ; 0048ea29
    FMULP ST3                           ; 0048ea2b
    FLD float ptr [EAX]                 ; 0048ea2d
    FLD float ptr [EAX + 0x4]           ; 0048ea2f
    FLD float ptr [EAX + 0x8]           ; 0048ea32
    MOV EBX,0x1                         ; 0048ea35
    LEA EDI,[ESP + 0x10]                ; 0048ea3a
    LEA ESI,[ESP + 0x4]                 ; 0048ea3e
    FXCH ST2                            ; 0048ea42
    FSUB float ptr [EDX]                ; 0048ea44
    FXCH                                ; 0048ea46
    FSUB float ptr [EDX + 0x4]          ; 0048ea48
    FXCH ST2                            ; 0048ea4b
    FSUB float ptr [EDX + 0x8]          ; 0048ea4d
    FXCH                                ; 0048ea50
    FSTP float ptr [ESP + 0x4]          ; 0048ea52
    FXCH                                ; 0048ea56
    FSTP float ptr [ESP + 0x8]          ; 0048ea58
    FSTP float ptr [ESP + 0xc]          ; 0048ea5c
    MOVSD ES:EDI,ESI                    ; 0048ea60
    MOVSD ES:EDI,ESI                    ; 0048ea61
    MOVSD ES:EDI,ESI                    ; 0048ea62
    FSTP float ptr [ESP + 0x2c]         ; 0048ea63
    CALL FUN_005c03a0                   ; 0048ea67
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 0048ea6c
    CALL FUN_005c03a0                   ; 0048ea6e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048ea73
    CALL FUN_005c03a0                   ; 0048ea75
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FLD float ptr [ESP + 0x28]          ; 0048ea7a
    FLD float ptr [ESP + 0x78]          ; 0048ea7e
    FLD float ptr [ESP + 0x2c]          ; 0048ea82
    FXCH ST5                            ; 0048ea86
    FISTP dword ptr [ESP + 0x34]        ; 0048ea88
    FXCH ST3                            ; 0048ea8c
    FISTP dword ptr [ESP + 0x38]        ; 0048ea8e
    FXCH                                ; 0048ea92
    FISTP dword ptr [ESP + 0x30]        ; 0048ea94
    CALL FUN_005c03a0                   ; 0048ea98
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048ea9d
    CALL FUN_005c03a0                   ; 0048ea9f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 0048eaa4
    CALL FUN_005c03a0                   ; 0048eaa6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    MOV EDX,dword ptr [ESP + 0x34]      ; 0048eaab
    FXCH                                ; 0048eaaf
    FISTP dword ptr [ESP + 0x60]        ; 0048eab1
    FXCH                                ; 0048eab5
    FISTP dword ptr [ESP + 0x64]        ; 0048eab7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048eabb
    FISTP dword ptr [ESP + 0x6c]        ; 0048eabf
    CMP EAX,EDX                         ; 0048eac3
    JNZ 0x0048ead5                      ; 0048eac5
        ;   XREF to: 0048ead5 (CONDITIONAL_JUMP)  ; LAB_0048ead5
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048eac7
    CMP EAX,dword ptr [ESP + 0x38]      ; 0048eacb
    JZ 0x0048ed96                       ; 0048eacf
        ;   XREF to: 0048ed96 (CONDITIONAL_JUMP)  ; LAB_0048ed96
    FLD float ptr [ESP + 0x14]          ; 0048ead5
        ;   Label: LAB_0048ead5
    FMUL ST0                            ; 0048ead9
    FLD float ptr [ESP + 0x10]          ; 0048eadb
    FMUL ST0                            ; 0048eadf
    FADDP                               ; 0048eae1
    FLD float ptr [ESP + 0x18]          ; 0048eae3
    FMUL ST0                            ; 0048eae7
    FADDP                               ; 0048eae9
    FSQRT                               ; 0048eaeb
    FST float ptr [ESP]                 ; 0048eaed
    FLDZ                                ; 0048eaf0
    FCOMPP                              ; 0048eaf2
    FNSTSW AX                           ; 0048eaf4
    SAHF                                ; 0048eaf6
    JNC 0x0048eda9                      ; 0048eaf7
        ;   XREF to: 0048eda9 (CONDITIONAL_JUMP)  ; LAB_0048eda9
    FLD float ptr [ESP + 0x14]          ; 0048eafd
    FABS                                ; 0048eb01
    FLD float ptr [ESP + 0x18]          ; 0048eb03
    FABS                                ; 0048eb07
    FLD float ptr [ESP + 0x10]          ; 0048eb09
    FLD ST0                             ; 0048eb0d
    FABS                                ; 0048eb0f
    FLD float ptr [0x005dbb24]          ; 0048eb11 | DAT_005dbb24
    FDIV float ptr [ESP]                ; 0048eb17
    FXCH                                ; 0048eb1a
    FMUL ST1                            ; 0048eb1c
    FXCH ST4                            ; 0048eb1e
    FMUL ST1                            ; 0048eb20
    FXCH ST3                            ; 0048eb22
    FMULP                               ; 0048eb24
    FXCH ST3                            ; 0048eb26
    CALL FUN_005c03a0                   ; 0048eb28
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x58]        ; 0048eb2d
    FLDZ                                ; 0048eb31
    FXCH ST2                            ; 0048eb33
    CALL FUN_005c03a0                   ; 0048eb35
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 0048eb3a
    CALL FUN_005c03a0                   ; 0048eb3c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 0048eb41
    FISTP dword ptr [ESP + 0x5c]        ; 0048eb43
    FXCH ST2                            ; 0048eb47
    FISTP dword ptr [ESP + 0x54]        ; 0048eb49
    FCOMPP                              ; 0048eb4d
    FNSTSW AX                           ; 0048eb4f
    SAHF                                ; 0048eb51
    JA 0x0048edb4                       ; 0048eb52
        ;   XREF to: 0048edb4 (CONDITIONAL_JUMP)  ; LAB_0048edb4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048eb58
    MOV ESI,dword ptr [ESP + 0x60]      ; 0048eb5c
    SUB EAX,ESI                         ; 0048eb60
    MOV ECX,0x1                         ; 0048eb62
    ADD EBX,EAX                         ; 0048eb67
    LEA EAX,[ESI + ECX*0x1]             ; 0048eb69
    MOV dword ptr [ESP + 0x80],EAX      ; 0048eb6c
    FILD dword ptr [ESP + 0x80]         ; 0048eb73
    FSUB float ptr [ESP + 0x28]         ; 0048eb7a
    MOV dword ptr [ESP + 0x4c],ECX      ; 0048eb7e
    FSTP float ptr [ESP + 0x3c]         ; 0048eb82
        ;   Label: LAB_0048eb82
    FLD float ptr [ESP + 0x14]          ; 0048eb86
    FLDZ                                ; 0048eb8a
    FCOMPP                              ; 0048eb8c
    FNSTSW AX                           ; 0048eb8e
    SAHF                                ; 0048eb90
    JA 0x0048ede2                       ; 0048eb91
        ;   XREF to: 0048ede2 (CONDITIONAL_JUMP)  ; LAB_0048ede2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048eb97
    MOV ESI,dword ptr [ESP + 0x64]      ; 0048eb9b
    SUB EAX,ESI                         ; 0048eb9f
    MOV ECX,0x1                         ; 0048eba1
    ADD EBX,EAX                         ; 0048eba6
    LEA EAX,[ESI + ECX*0x1]             ; 0048eba8
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ebab
    FILD dword ptr [ESP + 0x80]         ; 0048ebb2
    FSUB float ptr [ESP + 0x78]         ; 0048ebb9
    MOV dword ptr [ESP + 0x44],ECX      ; 0048ebbd
    FSTP float ptr [ESP + 0x40]         ; 0048ebc1
        ;   Label: LAB_0048ebc1
    FLD float ptr [ESP + 0x18]          ; 0048ebc5
    FLDZ                                ; 0048ebc9
    FCOMPP                              ; 0048ebcb
    FNSTSW AX                           ; 0048ebcd
    SAHF                                ; 0048ebcf
    JA 0x0048ee10                       ; 0048ebd0
        ;   XREF to: 0048ee10 (CONDITIONAL_JUMP)  ; LAB_0048ee10
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048ebd6
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0048ebda
    SUB EAX,ESI                         ; 0048ebde
    MOV ECX,0x1                         ; 0048ebe0
    ADD EBX,EAX                         ; 0048ebe5
    LEA EAX,[ESI + ECX*0x1]             ; 0048ebe7
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ebea
    FILD dword ptr [ESP + 0x80]         ; 0048ebf1
    FSUB float ptr [ESP + 0x2c]         ; 0048ebf8
    MOV dword ptr [ESP + 0x48],ECX      ; 0048ebfc
    FSTP float ptr [ESP + 0x7c]         ; 0048ec00
        ;   Label: LAB_0048ec00
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0048ec04
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ec08
    FILD dword ptr [ESP + 0x80]         ; 0048ec0f
    FLD ST0                             ; 0048ec16
    FMUL float ptr [ESP + 0x3c]         ; 0048ec18
    MOV EAX,dword ptr [ESP + 0x58]      ; 0048ec1c
    FXCH                                ; 0048ec20
    FLD float ptr [ESP + 0x7c]          ; 0048ec22
    FXCH                                ; 0048ec26
    FMUL ST1                            ; 0048ec28
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ec2a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048ec31
    FILD dword ptr [ESP + 0x80]         ; 0048ec35
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ec3c
    FLD ST0                             ; 0048ec43
    FMUL float ptr [ESP + 0x40]         ; 0048ec45
    FILD dword ptr [ESP + 0x80]         ; 0048ec49
    FLD ST0                             ; 0048ec50
    FMUL float ptr [ESP + 0x3c]         ; 0048ec52
    FXCH                                ; 0048ec56
    FMUL float ptr [ESP + 0x40]         ; 0048ec58
    FXCH ST2                            ; 0048ec5c
    FSUBP ST6,ST0                       ; 0048ec5e
    FXCH ST2                            ; 0048ec60
    FMULP ST4                           ; 0048ec62
    FXCH ST4                            ; 0048ec64
    CALL FUN_005c03a0                   ; 0048ec66
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 0048ec6b
    FSUBP ST2,ST0                       ; 0048ec6d
    FXCH ST3                            ; 0048ec6f
    FISTP dword ptr [ESP + 0x68]        ; 0048ec71
    CALL FUN_005c03a0                   ; 0048ec75
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048ec7a
    FSUBP ST2,ST0                       ; 0048ec7c
    FISTP dword ptr [ESP + 0x70]        ; 0048ec7e
    CALL FUN_005c03a0                   ; 0048ec82
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x74]        ; 0048ec87
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048ec8b
        ;   Label: LAB_0048ec8b
    MOV EDX,EAX                         ; 0048ec8f
    SAR EDX,0x1f                        ; 0048ec91
    SHL EDX,0x3                         ; 0048ec94
    SBB EAX,EDX                         ; 0048ec97
    SAR EAX,0x3                         ; 0048ec99
    PUSH EAX                            ; 0048ec9c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048ec9d
    MOV EDX,EAX                         ; 0048eca1
    SAR EDX,0x1f                        ; 0048eca3
    SHL EDX,0x3                         ; 0048eca6
    SBB EAX,EDX                         ; 0048eca9
    SAR EAX,0x3                         ; 0048ecab
    PUSH EAX                            ; 0048ecae
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048ecaf
    MOV EDX,EAX                         ; 0048ecb3
    SAR EDX,0x1f                        ; 0048ecb5
    SHL EDX,0x3                         ; 0048ecb8
    SBB EAX,EDX                         ; 0048ecbb
    SAR EAX,0x3                         ; 0048ecbd
    PUSH EAX                            ; 0048ecc0
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048ecc1
    PUSH EDI                            ; 0048ecc4
    CALL FUN_0048afe0                   ; 0048ecc5
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    MOV ECX,EAX                         ; 0048ecca
    ADD ESP,0x10                        ; 0048eccc
    TEST EAX,EAX                        ; 0048eccf
    JZ 0x0048ed2e                       ; 0048ecd1
        ;   XREF to: 0048ed2e (CONDITIONAL_JUMP)  ; LAB_0048ed2e
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048ecd3
    MOV EDX,EAX                         ; 0048ecd7
    MOV ESI,0x8                         ; 0048ecd9
    SAR EDX,0x1f                        ; 0048ecde
    IDIV ESI                            ; 0048ece1
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048ece3
    MOV EDI,EDX                         ; 0048ece7
    MOV EDX,EAX                         ; 0048ece9
    SAR EDX,0x1f                        ; 0048eceb
    IDIV ESI                            ; 0048ecee
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048ecf0
    MOV ESI,EDX                         ; 0048ecf4
    MOV EDX,EAX                         ; 0048ecf6
    MOV dword ptr [ESP + 0x80],0x8      ; 0048ecf8
    SAR EDX,0x1f                        ; 0048ed03
    IDIV dword ptr [ESP + 0x80]         ; 0048ed06
    MOV EAX,dword ptr [ECX]             ; 0048ed0d
    TEST EAX,EAX                        ; 0048ed0f
    JZ 0x0048ed2e                       ; 0048ed11
        ;   XREF to: 0048ed2e (CONDITIONAL_JUMP)  ; LAB_0048ed2e
    SHL EDX,0x3                         ; 0048ed13
    ADD EDX,ESI                         ; 0048ed16
    ADD EAX,EDX                         ; 0048ed18
    XOR EDX,EDX                         ; 0048ed1a
    MOV DL,byte ptr [EAX]               ; 0048ed1c
    XOR EAX,EAX                         ; 0048ed1e
    MOV AL,byte ptr [EDI + 0x61ab68]    ; 0048ed20 | DAT_0061ab68
    TEST EDX,EAX                        ; 0048ed26
    JNZ 0x0048ee3e                      ; 0048ed28
        ;   XREF to: 0048ee3e (CONDITIONAL_JUMP)  ; LAB_0048ee3e
    DEC EBX                             ; 0048ed2e
        ;   Label: LAB_0048ed2e
    TEST EBX,EBX                        ; 0048ed2f
    JLE 0x0048eda9                      ; 0048ed31
        ;   XREF to: 0048eda9 (CONDITIONAL_JUMP)  ; LAB_0048eda9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0048ed33
    MOV ECX,dword ptr [ESP + 0x48]      ; 0048ed37
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048ed3b
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0048ed3f
    MOV EDI,dword ptr [ESP + 0x58]      ; 0048ed43
    ADD ESI,ECX                         ; 0048ed47
    ADD EAX,EDX                         ; 0048ed49
    MOV ECX,dword ptr [ESP + 0x74]      ; 0048ed4b
    MOV EDX,dword ptr [ESP + 0x68]      ; 0048ed4f
    SUB ECX,EDI                         ; 0048ed53
    TEST EDX,EDX                        ; 0048ed55
    JL 0x0048ee4c                       ; 0048ed57
        ;   XREF to: 0048ee4c (CONDITIONAL_JUMP)  ; LAB_0048ee4c
    MOV EDI,dword ptr [ESP + 0x70]      ; 0048ed5d
    TEST EDI,EDI                        ; 0048ed61
    JL 0x0048ee54                       ; 0048ed63
        ;   XREF to: 0048ee54 (CONDITIONAL_JUMP)  ; LAB_0048ee54
    MOV EAX,dword ptr [ESP + 0x44]      ; 0048ed69
    MOV EDX,dword ptr [ESP + 0x64]      ; 0048ed6d
    MOV ECX,dword ptr [ESP + 0x68]      ; 0048ed71
    ADD EDX,EAX                         ; 0048ed75
    MOV EAX,dword ptr [ESP + 0x58]      ; 0048ed77
    MOV ESI,EDI                         ; 0048ed7b
    SUB ECX,EAX                         ; 0048ed7d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048ed7f
    MOV dword ptr [ESP + 0x64],EDX      ; 0048ed83
    SUB ESI,EAX                         ; 0048ed87
    MOV dword ptr [ESP + 0x68],ECX      ; 0048ed89
    MOV dword ptr [ESP + 0x70],ESI      ; 0048ed8d
    JMP 0x0048ec8b                      ; 0048ed91
        ;   XREF to: 0048ec8b (UNCONDITIONAL_JUMP)  ; LAB_0048ec8b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048ed96
        ;   Label: LAB_0048ed96
    CMP EAX,dword ptr [ESP + 0x30]      ; 0048ed9a
    JNZ 0x0048ead5                      ; 0048ed9e
        ;   XREF to: 0048ead5 (CONDITIONAL_JUMP)  ; LAB_0048ead5
    JMP 0x0048ec8b                      ; 0048eda4
        ;   XREF to: 0048ec8b (UNCONDITIONAL_JUMP)  ; LAB_0048ec8b
    XOR EDX,EDX                         ; 0048eda9
        ;   Label: LAB_0048eda9
    MOV EAX,EDX                         ; 0048edab
    MOV ESP,EBP                         ; 0048edad
    POP EBP                             ; 0048edaf
    POP EDI                             ; 0048edb0
    POP ESI                             ; 0048edb1
    POP EBX                             ; 0048edb2
    RET                                 ; 0048edb3
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048edb4
        ;   Label: LAB_0048edb4
    SUB EAX,dword ptr [ESP + 0x34]      ; 0048edb8
    ADD EBX,EAX                         ; 0048edbc
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048edbe
    MOV dword ptr [ESP + 0x80],EAX      ; 0048edc2
    MOV EDI,0xffffffff                  ; 0048edc9
    FILD dword ptr [ESP + 0x80]         ; 0048edce
    FSUBR float ptr [ESP + 0x28]        ; 0048edd5
    MOV dword ptr [ESP + 0x4c],EDI      ; 0048edd9
    JMP 0x0048eb82                      ; 0048eddd
        ;   XREF to: 0048eb82 (UNCONDITIONAL_JUMP)  ; LAB_0048eb82
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048ede2
        ;   Label: LAB_0048ede2
    SUB EAX,dword ptr [ESP + 0x38]      ; 0048ede6
    ADD EBX,EAX                         ; 0048edea
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048edec
    MOV dword ptr [ESP + 0x80],EAX      ; 0048edf0
    MOV EDI,0xffffffff                  ; 0048edf7
    FILD dword ptr [ESP + 0x80]         ; 0048edfc
    FSUBR float ptr [ESP + 0x78]        ; 0048ee03
    MOV dword ptr [ESP + 0x44],EDI      ; 0048ee07
    JMP 0x0048ebc1                      ; 0048ee0b
        ;   XREF to: 0048ebc1 (UNCONDITIONAL_JUMP)  ; LAB_0048ebc1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048ee10
        ;   Label: LAB_0048ee10
    SUB EAX,dword ptr [ESP + 0x30]      ; 0048ee14
    ADD EBX,EAX                         ; 0048ee18
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048ee1a
    MOV dword ptr [ESP + 0x80],EAX      ; 0048ee1e
    MOV EDI,0xffffffff                  ; 0048ee25
    FILD dword ptr [ESP + 0x80]         ; 0048ee2a
    FSUBR float ptr [ESP + 0x2c]        ; 0048ee31
    MOV dword ptr [ESP + 0x48],EDI      ; 0048ee35
    JMP 0x0048ec00                      ; 0048ee39
        ;   XREF to: 0048ec00 (UNCONDITIONAL_JUMP)  ; LAB_0048ec00
    MOV EDX,0x1                         ; 0048ee3e
        ;   Label: LAB_0048ee3e
    MOV EAX,EDX                         ; 0048ee43
    MOV ESP,EBP                         ; 0048ee45
    POP EBP                             ; 0048ee47
    POP EDI                             ; 0048ee48
    POP ESI                             ; 0048ee49
    POP EBX                             ; 0048ee4a
    RET                                 ; 0048ee4b
    MOV EDI,dword ptr [ESP + 0x74]      ; 0048ee4c
        ;   Label: LAB_0048ee4c
    TEST EDI,EDI                        ; 0048ee50
    JL 0x0048ee65                       ; 0048ee52
        ;   XREF to: 0048ee65 (CONDITIONAL_JUMP)  ; LAB_0048ee65
    MOV dword ptr [ESP + 0x74],ECX      ; 0048ee54
        ;   Label: LAB_0048ee54
    MOV dword ptr [ESP + 0x70],EAX      ; 0048ee58
    MOV dword ptr [ESP + 0x6c],ESI      ; 0048ee5c
    JMP 0x0048ec8b                      ; 0048ee60
        ;   XREF to: 0048ec8b (UNCONDITIONAL_JUMP)  ; LAB_0048ec8b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048ee65
        ;   Label: LAB_0048ee65
    MOV EDX,dword ptr [ESP + 0x60]      ; 0048ee69
    MOV ECX,dword ptr [ESP + 0x68]      ; 0048ee6d
    ADD EDX,EAX                         ; 0048ee71
    ADD ECX,dword ptr [ESP + 0x5c]      ; 0048ee73
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048ee77
    MOV dword ptr [ESP + 0x60],EDX      ; 0048ee7b
    LEA ESI,[EDI + EAX*0x1]             ; 0048ee7f
    MOV dword ptr [ESP + 0x68],ECX      ; 0048ee82
    MOV dword ptr [ESP + 0x74],ESI      ; 0048ee86
    JMP 0x0048ec8b                      ; 0048ee8a
        ;   XREF to: 0048ec8b (UNCONDITIONAL_JUMP)  ; LAB_0048ec8b

