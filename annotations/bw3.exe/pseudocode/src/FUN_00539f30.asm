; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539f30(int param_1,uint param_2)
;
; Local Variables:
; undefined8       Stack[-0xdc]:8  local_dc
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_00534890 at 00534f18
;   FUN_00535a80 at 00535bb9
;   FUN_00535da0 at 005360a3
;   FUN_005365c0 at 00536761
;   FUN_00536990 at 00536b1e
;
; Referenced Globals:
;   TerminatedCString s_buildDispList_d_items_3_005d0813
;   undefined4 DAT_005d0837
;   undefined4 DAT_005d083f
;   undefined4 DAT_005d0847
;   undefined4 DAT_005d084f
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d2153c
;   undefined4 DAT_01d21570
;   undefined4 DAT_01d21620
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_0203a598
;   ... and 4 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_00441ff0
;   FUN_0046d1a0
;   FUN_0046d1c0
;   FUN_0053b9a0
;   FUN_005806a0
;   FUN_005a29e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539f30
        ;   Label: FUN_00539f30
    PUSH ESI                            ; 00539f31
    PUSH EDI                            ; 00539f32
    PUSH EBP                            ; 00539f33
    SUB ESP,0xc4                        ; 00539f34
    MOV EAX,[0x005fe9dc]                ; 00539f3a | DAT_005fe9dc
    CMP dword ptr [EAX + 0x230],0x0     ; 00539f3f | DAT_01d2153c
    JNZ 0x0053a0d0                      ; 00539f46
        ;   XREF to: 0053a0d0 (CONDITIONAL_JUMP)  ; LAB_0053a0d0
    MOV EBX,dword ptr [0x005f2afc]      ; 00539f4c | DAT_005f2afc
        ;   Label: LAB_00539f4c
    XOR ECX,ECX                         ; 00539f52
    PUSH EBX                            ; 00539f54 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x64]                ; 00539f55
    MOV dword ptr [0x0211e350],ECX      ; 00539f59 | DAT_0211e350
    CALL FUN_0046d1a0                   ; 00539f5f
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d1a0()
    ADD ESP,0x4                         ; 00539f64
    MOV ESI,dword ptr [0x005f2afc]      ; 00539f67 | DAT_005f2afc
    PUSH ESI                            ; 00539f6d | DAT_01bdd7e4
    LEA ESI,[ESP + 0x70]                ; 00539f6e
    LEA EDI,[ESP + 0x34]                ; 00539f72
    CALL FUN_0046d1c0                   ; 00539f76
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d1c0()
    LEA ESI,[ESP + 0x70]                ; 00539f7b
    ADD ESP,0x4                         ; 00539f7f
    MOVSD ES:EDI,ESI                    ; 00539f82
    MOVSD ES:EDI,ESI                    ; 00539f83
    MOVSD ES:EDI,ESI                    ; 00539f84
    MOV EDI,0xc                         ; 00539f85
    MOV EBP,dword ptr [0x0203ad1c]      ; 00539f8a | DAT_0203ad1c
    MOV dword ptr [ESP + 0xac],EDI      ; 00539f90
    TEST EBP,EBP                        ; 00539f97
    JZ 0x0053a0e1                       ; 00539f99
        ;   XREF to: 0053a0e1 (CONDITIONAL_JUMP)  ; LAB_0053a0e1
    OR byte ptr [ESP + 0xac],0x1        ; 00539f9f
        ;   Label: LAB_00539f9f
    CMP dword ptr [0x0203a598],0x0      ; 00539fa7 | DAT_0203a598
        ;   Label: LAB_00539fa7
    JZ 0x00539fb8                       ; 00539fae
        ;   XREF to: 00539fb8 (CONDITIONAL_JUMP)  ; LAB_00539fb8
    OR byte ptr [ESP + 0xac],0x22       ; 00539fb0
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00539fb8
        ;   Label: LAB_00539fb8
    MOV EBX,dword ptr [EAX + 0x158cfc]  ; 00539fbf
    XOR EBP,EBP                         ; 00539fc5
    TEST EBX,EBX                        ; 00539fc7
    JLE 0x0053a02b                      ; 00539fc9
        ;   XREF to: 0053a02b (CONDITIONAL_JUMP)  ; LAB_0053a02b
    LEA EAX,[ESP + 0x18]                ; 00539fcb
    ADD EAX,0xc                         ; 00539fcf
    MOV dword ptr [ESP + 0xbc],EAX      ; 00539fd2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00539fd9
    MOV dword ptr [ESP + 0xb0],EAX      ; 00539fe0
    MOV EAX,[0x01d5ba14]                ; 00539fe7 | DAT_01d5ba14
        ;   Label: LAB_00539fe7
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00539fec
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00539ff3
    MOV EBX,dword ptr [EBX + 0x158d00]  ; 00539ffa
    CMP EBX,ESI                         ; 0053a000
    JNZ 0x0053a0f8                      ; 0053a002
        ;   XREF to: 0053a0f8 (CONDITIONAL_JUMP)  ; LAB_0053a0f8
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0053a008
        ;   Label: LAB_0053a008
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0053a00f
    INC EBP                             ; 0053a016
    ADD ESI,0x4                         ; 0053a017
    MOV EDI,dword ptr [EAX + 0x158cfc]  ; 0053a01a
    MOV dword ptr [ESP + 0xb0],ESI      ; 0053a020
    CMP EBP,EDI                         ; 0053a027
    JL 0x00539fe7                       ; 0053a029
        ;   XREF to: 00539fe7 (CONDITIONAL_JUMP)  ; LAB_00539fe7
    PUSH 0x539f00                       ; 0053a02b | LAB_00539f00
        ;   Label: LAB_0053a02b
    PUSH 0x8                            ; 0053a030
    MOV EBP,dword ptr [0x0211e350]      ; 0053a032 | DAT_0211e350
    PUSH EBP                            ; 0053a038
    PUSH 0x211e354                      ; 0053a039 | DAT_0211e354
    CALL FUN_005a29e8                   ; 0053a03e
        ;   XREF to: 005a29e8 (UNCONDITIONAL_CALL)  ; undefined FUN_005a29e8()
    MOV ESI,dword ptr [0x01d5ba14]      ; 0053a043 | DAT_01d5ba14
    SHL ESI,0x2                         ; 0053a049
    MOV EAX,dword ptr [ESI + 0x1d5ba04] ; 0053a04c
    ADD ESP,0x10                        ; 0053a052
    TEST EAX,EAX                        ; 0053a055
    JZ 0x0053a334                       ; 0053a057
        ;   XREF to: 0053a334 (CONDITIONAL_JUMP)  ; LAB_0053a334
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0053a05d
    MOV ECX,dword ptr [0x0211e350]      ; 0053a064 | DAT_0211e350
    XOR ESI,ESI                         ; 0053a06a
    MOV dword ptr [EDX + 0x15f700],EAX  ; 0053a06c
    TEST ECX,ECX                        ; 0053a072
    JLE 0x0053a0a0                      ; 0053a074
        ;   XREF to: 0053a0a0 (CONDITIONAL_JUMP)  ; LAB_0053a0a0
    MOV ECX,EDX                         ; 0053a076
    XOR EDX,EDX                         ; 0053a078
    MOV EDI,dword ptr [0x0211e350]      ; 0053a07a | DAT_0211e350
        ;   Label: LAB_0053a07a
    ADD ECX,0x4                         ; 0053a080
    MOV EAX,dword ptr [EDX + 0x211e354] ; 0053a083
    ADD EDX,0x8                         ; 0053a089
    INC ESI                             ; 0053a08c
    MOV dword ptr [ECX + 0x15f700],EAX  ; 0053a08d
    CMP ESI,EDI                         ; 0053a093
    JL 0x0053a07a                       ; 0053a095
        ;   XREF to: 0053a07a (CONDITIONAL_JUMP)  ; LAB_0053a07a
    LEA EAX,[EAX]                       ; 0053a097
    LEA EDX,[EDX]                       ; 0053a09d
    MOV EAX,[0x0211e350]                ; 0053a0a0 | DAT_0211e350
        ;   Label: LAB_0053a0a0
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0053a0a5
    INC EAX                             ; 0053a0ac
    MOV dword ptr [EDX + 0x15f6fc],EAX  ; 0053a0ad
        ;   Label: LAB_0053a0ad
    MOV EAX,[0x005fe9dc]                ; 0053a0b3 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x230],0x0     ; 0053a0b8 | DAT_01d2153c
    JNZ 0x0053a381                      ; 0053a0bf
        ;   XREF to: 0053a381 (CONDITIONAL_JUMP)  ; LAB_0053a381
    ADD ESP,0xc4                        ; 0053a0c5
    POP EBP                             ; 0053a0cb
    POP EDI                             ; 0053a0cc
    POP ESI                             ; 0053a0cd
    POP EBX                             ; 0053a0ce
    RET                                 ; 0053a0cf
    CALL FUN_005806a0                   ; 0053a0d0
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: LAB_0053a0d0
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053a0d5
    JMP 0x00539f4c                      ; 0053a0dc
        ;   XREF to: 00539f4c (UNCONDITIONAL_JUMP)  ; LAB_00539f4c
    MOV EAX,[0x005fe9dc]                ; 0053a0e1 | DAT_005fe9dc
        ;   Label: LAB_0053a0e1
    CMP dword ptr [EAX + 0x264],0x0     ; 0053a0e6 | DAT_01d21570
    JNZ 0x00539f9f                      ; 0053a0ed
        ;   XREF to: 00539f9f (CONDITIONAL_JUMP)  ; LAB_00539f9f
    JMP 0x00539fa7                      ; 0053a0f3
        ;   XREF to: 00539fa7 (UNCONDITIONAL_JUMP)  ; LAB_00539fa7
    MOV EAX,[0x005fe9dc]                ; 0053a0f8 | DAT_005fe9dc
        ;   Label: LAB_0053a0f8
    CMP dword ptr [EAX + 0x264],0x0     ; 0053a0fd | DAT_01d21570
    JZ 0x0053a247                       ; 0053a104
        ;   XREF to: 0053a247 (CONDITIONAL_JUMP)  ; LAB_0053a247
    LEA ECX,[EBX + 0x20]                ; 0053a10a
        ;   Label: LAB_0053a10a
    LEA EDX,[EBX + 0x12c]               ; 0053a10d
    FLD float ptr [ECX]                 ; 0053a113
    FCOMP float ptr [EDX]               ; 0053a115
    FNSTSW AX                           ; 0053a117
    SAHF                                ; 0053a119
    JZ 0x0053a2ca                       ; 0053a11a
        ;   XREF to: 0053a2ca (CONDITIONAL_JUMP)  ; LAB_0053a2ca
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0053a120
        ;   Label: LAB_0053a120
    OR dword ptr [EBX + 0x144],EAX      ; 0053a127
    MOV EDI,dword ptr [ESP + 0xac]      ; 0053a12d
        ;   Label: LAB_0053a12d
    TEST dword ptr [EBX + 0x144],EDI    ; 0053a134
    JZ 0x0053a008                       ; 0053a13a
        ;   XREF to: 0053a008 (CONDITIONAL_JUMP)  ; LAB_0053a008
        ;   Label: LAB_0053a13a
    PUSH EBX                            ; 0053a140
        ;   Label: LAB_0053a140
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053a141
    LEA ESI,[ESP + 0x4]                 ; 0053a147
    LEA EDI,[ESP + 0x1c]                ; 0053a14b
    CALL dword ptr [EAX + 0x1c]         ; 0053a14f
    MOV ECX,0x6                         ; 0053a152
    LEA ESI,[ESP + 0x4]                 ; 0053a157
    ADD ESP,0x4                         ; 0053a15b
    MOVSD.REP ES:EDI,ESI                ; 0053a15e
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053a160
    FLD float ptr [ESP + 0x18]          ; 0053a167
    FLD float ptr [ESP + 0x1c]          ; 0053a16b
    FLD float ptr [ESP + 0x20]          ; 0053a16f
    LEA EDI,[ESP + 0x90]                ; 0053a173
    LEA ESI,[ESP + 0x48]                ; 0053a17a
    FXCH ST2                            ; 0053a17e
    FADD float ptr [EAX]                ; 0053a180
    FXCH                                ; 0053a182
    FADD float ptr [EAX + 0x4]          ; 0053a184
    FXCH ST2                            ; 0053a187
    FADD float ptr [EAX + 0x8]          ; 0053a189
    FXCH                                ; 0053a18c
    FSTP float ptr [ESP + 0x48]         ; 0053a18e
    FXCH                                ; 0053a192
    FSTP float ptr [ESP + 0x4c]         ; 0053a194
    FSTP float ptr [ESP + 0x50]         ; 0053a198
    MOVSD ES:EDI,ESI                    ; 0053a19c
    MOVSD ES:EDI,ESI                    ; 0053a19d
    MOVSD ES:EDI,ESI                    ; 0053a19e
    FLD float ptr [0x005d0837]          ; 0053a19f | DAT_005d0837
    FLD float ptr [ESP + 0x90]          ; 0053a1a5
    FMUL ST1                            ; 0053a1ac
    FLD float ptr [ESP + 0x94]          ; 0053a1ae
    FMUL ST2                            ; 0053a1b5
    LEA EAX,[ESP + 0x84]                ; 0053a1b7
    FLD float ptr [ESP + 0x98]          ; 0053a1be
    FMULP ST3                           ; 0053a1c5
    PUSH EAX                            ; 0053a1c7
    LEA EDI,[ESP + 0x88]                ; 0053a1c8
    LEA ESI,[ESP + 0x7c]                ; 0053a1cf
    FXCH                                ; 0053a1d3
    FSTP float ptr [ESP + 0x7c]         ; 0053a1d5
    FSTP float ptr [ESP + 0x80]         ; 0053a1d9
    FSTP float ptr [ESP + 0x84]         ; 0053a1e0
    MOVSD ES:EDI,ESI                    ; 0053a1e7
    MOVSD ES:EDI,ESI                    ; 0053a1e8
    MOVSD ES:EDI,ESI                    ; 0053a1e9
    PUSH EBX                            ; 0053a1ea
    LEA ESI,[ESP + 0x5c]                ; 0053a1eb
    LEA EDI,[ESP + 0x44]                ; 0053a1ef
    CALL FUN_00408b80                   ; 0053a1f3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 0053a1f8
    ADD ESP,0x8                         ; 0053a1fc
    MOVSD ES:EDI,ESI                    ; 0053a1ff
    MOVSD ES:EDI,ESI                    ; 0053a200
    MOVSD ES:EDI,ESI                    ; 0053a201
    FLD float ptr [ESP + 0x30]          ; 0053a202
    FSUB float ptr [ESP + 0x3c]         ; 0053a206
    FMUL ST0                            ; 0053a20a
    FLD float ptr [ESP + 0x34]          ; 0053a20c
    FSUB float ptr [ESP + 0x40]         ; 0053a210
    FMUL ST0                            ; 0053a214
    MOV EDX,dword ptr [0x0211e350]      ; 0053a216 | DAT_0211e350
    FLD float ptr [ESP + 0x38]          ; 0053a21c
    FXCH                                ; 0053a220
    FADDP ST2,ST0                       ; 0053a222
    FSUB float ptr [ESP + 0x44]         ; 0053a224
    FMUL ST0                            ; 0053a228
    LEA EAX,[EDX + 0x1]                 ; 0053a22a
    MOV dword ptr [EDX*0x8 + 0x211e354],EBX ; 0053a22d | DAT_0211e354
    FADDP                               ; 0053a234
    MOV [0x0211e350],EAX                ; 0053a236 | DAT_0211e350
    FSTP float ptr [EDX*0x8 + 0x211e358] ; 0053a23b | DAT_0211e358
    JMP 0x0053a008                      ; 0053a242
        ;   XREF to: 0053a008 (UNCONDITIONAL_JUMP)  ; LAB_0053a008
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0053a247
        ;   Label: LAB_0053a247
    PUSH EAX                            ; 0053a24e
    CALL FUN_0053b9a0                   ; 0053a24f
        ;   XREF to: 0053b9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b9a0()
    ADD ESP,0x4                         ; 0053a254
    TEST EAX,EAX                        ; 0053a257
    JZ 0x0053a10a                       ; 0053a259
        ;   XREF to: 0053a10a (CONDITIONAL_JUMP)  ; LAB_0053a10a
    LEA EDX,[EBX + 0x20]                ; 0053a25f
    LEA ECX,[EBX + 0x12c]               ; 0053a262
    FLD float ptr [EDX]                 ; 0053a268
    FCOMP float ptr [ECX]               ; 0053a26a
    FNSTSW AX                           ; 0053a26c
    SAHF                                ; 0053a26e
    JZ 0x0053a280                       ; 0053a26f
        ;   XREF to: 0053a280 (CONDITIONAL_JUMP)  ; LAB_0053a280
    MOV dword ptr [EBX + 0x148],0x1     ; 0053a271
        ;   Label: LAB_0053a271
    JMP 0x0053a140                      ; 0053a27b
        ;   XREF to: 0053a140 (UNCONDITIONAL_JUMP)  ; LAB_0053a140
    FLD float ptr [EDX + 0x4]           ; 0053a280
        ;   Label: LAB_0053a280
    FCOMP float ptr [ECX + 0x4]         ; 0053a283
    FNSTSW AX                           ; 0053a286
    SAHF                                ; 0053a288
    JNZ 0x0053a271                      ; 0053a289
        ;   XREF to: 0053a271 (CONDITIONAL_JUMP)  ; LAB_0053a271
    FLD float ptr [EDX + 0x8]           ; 0053a28b
    FCOMP float ptr [ECX + 0x8]         ; 0053a28e
    FNSTSW AX                           ; 0053a291
    SAHF                                ; 0053a293
    JNZ 0x0053a271                      ; 0053a294
        ;   XREF to: 0053a271 (CONDITIONAL_JUMP)  ; LAB_0053a271
    LEA ECX,[EBX + 0x30]                ; 0053a296
    LEA EDX,[EBX + 0x138]               ; 0053a299
    FLD float ptr [ECX]                 ; 0053a29f
    FCOMP float ptr [EDX]               ; 0053a2a1
    FNSTSW AX                           ; 0053a2a3
    SAHF                                ; 0053a2a5
    JNZ 0x0053a271                      ; 0053a2a6
        ;   XREF to: 0053a271 (CONDITIONAL_JUMP)  ; LAB_0053a271
    FLD float ptr [ECX + 0x4]           ; 0053a2a8
    FCOMP float ptr [EDX + 0x4]         ; 0053a2ab
    FNSTSW AX                           ; 0053a2ae
    SAHF                                ; 0053a2b0
    JNZ 0x0053a271                      ; 0053a2b1
        ;   XREF to: 0053a271 (CONDITIONAL_JUMP)  ; LAB_0053a271
    FLD float ptr [ECX + 0x8]           ; 0053a2b3
    FCOMP float ptr [EDX + 0x8]         ; 0053a2b6
    FNSTSW AX                           ; 0053a2b9
    SAHF                                ; 0053a2bb
    JNZ 0x0053a271                      ; 0053a2bc
        ;   XREF to: 0053a271 (CONDITIONAL_JUMP)  ; LAB_0053a271
    CMP dword ptr [EBX + 0x148],0x0     ; 0053a2be
    JMP 0x0053a13a                      ; 0053a2c5
        ;   XREF to: 0053a13a (UNCONDITIONAL_JUMP)  ; LAB_0053a13a
    FLD float ptr [ECX + 0x4]           ; 0053a2ca
        ;   Label: LAB_0053a2ca
    FCOMP float ptr [EDX + 0x4]         ; 0053a2cd
    FNSTSW AX                           ; 0053a2d0
    SAHF                                ; 0053a2d2
    JNZ 0x0053a120                      ; 0053a2d3
        ;   XREF to: 0053a120 (CONDITIONAL_JUMP)  ; LAB_0053a120
    FLD float ptr [ECX + 0x8]           ; 0053a2d9
    FCOMP float ptr [EDX + 0x8]         ; 0053a2dc
    FNSTSW AX                           ; 0053a2df
    SAHF                                ; 0053a2e1
    JNZ 0x0053a120                      ; 0053a2e2
        ;   XREF to: 0053a120 (CONDITIONAL_JUMP)  ; LAB_0053a120
    LEA ECX,[EBX + 0x30]                ; 0053a2e8
    LEA EDX,[EBX + 0x138]               ; 0053a2eb
    FLD float ptr [ECX]                 ; 0053a2f1
    FCOMP float ptr [EDX]               ; 0053a2f3
    FNSTSW AX                           ; 0053a2f5
    SAHF                                ; 0053a2f7
    JNZ 0x0053a120                      ; 0053a2f8
        ;   XREF to: 0053a120 (CONDITIONAL_JUMP)  ; LAB_0053a120
    FLD float ptr [ECX + 0x4]           ; 0053a2fe
    FCOMP float ptr [EDX + 0x4]         ; 0053a301
    FNSTSW AX                           ; 0053a304
    SAHF                                ; 0053a306
    JNZ 0x0053a120                      ; 0053a307
        ;   XREF to: 0053a120 (CONDITIONAL_JUMP)  ; LAB_0053a120
    FLD float ptr [ECX + 0x8]           ; 0053a30d
    FCOMP float ptr [EDX + 0x8]         ; 0053a310
    FNSTSW AX                           ; 0053a313
    SAHF                                ; 0053a315
    JNZ 0x0053a120                      ; 0053a316
        ;   XREF to: 0053a120 (CONDITIONAL_JUMP)  ; LAB_0053a120
    MOV ESI,dword ptr [ESP + 0xac]      ; 0053a31c
    TEST dword ptr [EBX + 0x144],ESI    ; 0053a323
    JZ 0x0053a008                       ; 0053a329
        ;   XREF to: 0053a008 (CONDITIONAL_JUMP)  ; LAB_0053a008
    JMP 0x0053a12d                      ; 0053a32f
        ;   XREF to: 0053a12d (UNCONDITIONAL_JUMP)  ; LAB_0053a12d
    MOV EDX,dword ptr [0x0211e350]      ; 0053a334 | DAT_0211e350
        ;   Label: LAB_0053a334
    XOR ESI,ESI                         ; 0053a33a
    TEST EDX,EDX                        ; 0053a33c
    JLE 0x0053a370                      ; 0053a33e
        ;   XREF to: 0053a370 (CONDITIONAL_JUMP)  ; LAB_0053a370
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0053a340
    XOR ECX,ECX                         ; 0053a347
    MOV EBX,dword ptr [0x0211e350]      ; 0053a349 | DAT_0211e350
        ;   Label: LAB_0053a349
    ADD EDX,0x4                         ; 0053a34f
    MOV EAX,dword ptr [ECX + 0x211e354] ; 0053a352
    ADD ECX,0x8                         ; 0053a358
    INC ESI                             ; 0053a35b
    MOV dword ptr [EDX + 0x15f6fc],EAX  ; 0053a35c
    CMP ESI,EBX                         ; 0053a362
    JL 0x0053a349                       ; 0053a364
        ;   XREF to: 0053a349 (CONDITIONAL_JUMP)  ; LAB_0053a349
    LEA EAX,[EAX]                       ; 0053a366
    LEA EDX,[EDX]                       ; 0053a36c
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0053a370
        ;   Label: LAB_0053a370
    MOV EAX,[0x0211e350]                ; 0053a377 | DAT_0211e350
    JMP 0x0053a0ad                      ; 0053a37c
        ;   XREF to: 0053a0ad (UNCONDITIONAL_JUMP)  ; LAB_0053a0ad
    CALL FUN_005806a0                   ; 0053a381
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: LAB_0053a381
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0053a386
    SUB EAX,EDX                         ; 0053a38d
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053a38f
    FILD dword ptr [ESP + 0xc0]         ; 0053a396
    FMUL double ptr [0x005d083f]        ; 0053a39d | DAT_005d083f
    MOV EAX,[0x005fe9dc]                ; 0053a3a3 | DAT_005fe9dc
    FMUL double ptr [0x005d0847]        ; 0053a3a8 | DAT_005d0847
    FLD float ptr [EAX + 0x314]         ; 0053a3ae | DAT_01d21620
    FXCH                                ; 0053a3b4
    FMUL double ptr [0x005d084f]        ; 0053a3b6 | DAT_005d084f
    FDIVRP                              ; 0053a3bc
    SUB ESP,0x8                         ; 0053a3be
    MOV ECX,dword ptr [0x0211e350]      ; 0053a3c1 | DAT_0211e350
    FSTP double ptr [ESP]               ; 0053a3c7
    PUSH ECX                            ; 0053a3ca
    PUSH 0x5d0813                       ; 0053a3cb | = "buildDispList %d items : %3.2f ms\n"
    MOV EBX,dword ptr [0x005f1690]      ; 0053a3d0 | PTR_DAT_005f1690
    PUSH EBX                            ; 0053a3d6 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0053a3d7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x14                        ; 0053a3dc
    ADD ESP,0xc4                        ; 0053a3df
    POP EBP                             ; 0053a3e5
    POP EDI                             ; 0053a3e6
    POP ESI                             ; 0053a3e7
    POP EBX                             ; 0053a3e8
    RET                                 ; 0053a3e9

