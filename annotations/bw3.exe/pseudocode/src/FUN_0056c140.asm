; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c140(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_attack_nocollision_005d64ea
;   TerminatedCString s_Bip01_Pelvis_005d64fd
;   undefined4 DAT_005d650b
;   undefined4 DAT_005d650f
;   undefined4 DAT_005d6513
;   undefined4 DAT_005d6517
;   undefined4 DAT_005d651b
;   undefined4 DAT_005d6523
;   undefined4 DAT_005e54f8
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_02cfd798
;   undefined4 DAT_02cfd79c
;   undefined4 DAT_02cfd7a0
;   undefined4 DAT_02cfd7a4
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_0042cd30
;   FUN_00433350
;   FUN_0045b550
;   FUN_004fb9c0
;   FUN_004fbb70
;   FUN_004fc070
;   FUN_004fc310
;   FUN_00548090
;   FUN_0054c130
;   FUN_0054c180
;   FUN_0054dbd0
;   FUN_0054e170
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c140
        ;   Label: FUN_0056c140
    PUSH ESI                            ; 0056c141
    PUSH EDI                            ; 0056c142
    PUSH EBP                            ; 0056c143
    MOV EBP,ESP                         ; 0056c144
    SUB ESP,0x1df0                      ; 0056c146
    SUB EBP,0x7a                        ; 0056c14c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0056c14f
    PUSH dword ptr [EBP + 0x92]         ; 0056c155
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056c15b
    PUSH EBX                            ; 0056c161
    CALL dword ptr [EAX + 0x148]        ; 0056c162
    ADD ESP,0x8                         ; 0056c168
    TEST EAX,EAX                        ; 0056c16b
    JZ 0x0056c24c                       ; 0056c16d
        ;   XREF to: 0056c24c (CONDITIONAL_JUMP)  ; LAB_0056c24c
    FLD float ptr [EBP + 0x92]          ; 0056c173
    LEA EAX,[EBX + 0xd090]              ; 0056c179
    FMUL float ptr [EBX + 0xcdcc]       ; 0056c17f
    MOV dword ptr [EBP + 0x6a],EAX      ; 0056c185
    LEA EAX,[EBX + 0x20]                ; 0056c188
    MOV dword ptr [EBP + 0x76],EAX      ; 0056c18b
    LEA EAX,[EBX + 0x30]                ; 0056c18e
    MOV dword ptr [EBP + 0x6e],EAX      ; 0056c191
    LEA EAX,[EBX + 0x158]               ; 0056c194
    FSTP float ptr [EBP + 0x5a]         ; 0056c19a
    MOV dword ptr [EBP + 0x72],EAX      ; 0056c19d
    FLD float ptr [EBP + 0x5a]          ; 0056c1a0
        ;   Label: LAB_0056c1a0
    FLDZ                                ; 0056c1a3
    FCOMPP                              ; 0056c1a5
    FNSTSW AX                           ; 0056c1a7
    SAHF                                ; 0056c1a9
    JC 0x0056c4b3                       ; 0056c1aa
        ;   XREF to: 0056c4b3 (CONDITIONAL_JUMP)  ; LAB_0056c4b3
    MOV EDX,dword ptr [EBP + 0x72]      ; 0056c1b0
    PUSH EDX                            ; 0056c1b3
    CALL FUN_004fc070                   ; 0056c1b4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056c1b9
    ADD ESP,0x4                         ; 0056c1bc
    TEST EAX,EAX                        ; 0056c1bf
    JBE 0x0056c1e2                      ; 0056c1c1
        ;   XREF to: 0056c1e2 (CONDITIONAL_JUMP)  ; LAB_0056c1e2
    CMP EAX,0x1                         ; 0056c1c3
    JNZ 0x0056c1e2                      ; 0056c1c6
        ;   XREF to: 0056c1e2 (CONDITIONAL_JUMP)  ; LAB_0056c1e2
    MOV EAX,[0x01d5ba14]                ; 0056c1c8 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0056c1cd
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0056c1d4
    TEST EAX,EAX                        ; 0056c1da
    JNZ 0x0056c4de                      ; 0056c1dc
        ;   XREF to: 0056c4de (CONDITIONAL_JUMP)  ; LAB_0056c4de
    FLD float ptr [EBP + 0x92]          ; 0056c1e2
        ;   Label: LAB_0056c1e2
    FDIV float ptr [0x005e54f8]         ; 0056c1e8 | DAT_005e54f8
    FADD float ptr [EBX + 0xd05c]       ; 0056c1ee
    FST float ptr [EBX + 0xd05c]        ; 0056c1f4
    FLD1                                ; 0056c1fa
    FCOMPP                              ; 0056c1fc
    FNSTSW AX                           ; 0056c1fe
    SAHF                                ; 0056c200
    JNC 0x0056c20d                      ; 0056c201
        ;   XREF to: 0056c20d (CONDITIONAL_JUMP)  ; LAB_0056c20d
    MOV dword ptr [EBX + 0xd05c],0x3f800000 ; 0056c203
    PUSH EBX                            ; 0056c20d
        ;   Label: LAB_0056c20d
    CALL FUN_0042cd30                   ; 0056c20e
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cd30()
    ADD ESP,0x4                         ; 0056c213
    LEA EAX,[EBX + 0x158]               ; 0056c216
    PUSH EAX                            ; 0056c21c
    CALL FUN_0054c130                   ; 0056c21d
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0056c222
    LEA EAX,[EBX + 0x249c]              ; 0056c225
    PUSH dword ptr [EBP + 0x92]         ; 0056c22b
    MOV dword ptr [EAX + 0x8],0x0       ; 0056c231
    PUSH EBX                            ; 0056c238
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056c239
    MOV dword ptr [EAX + 0x4],EDX       ; 0056c23c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056c23f
    MOV dword ptr [EAX],EDX             ; 0056c242
    CALL FUN_00433350                   ; 0056c244
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 0056c249
    LEA ESP,[EBP + 0x7a]                ; 0056c24c
        ;   Label: LAB_0056c24c
    POP EBP                             ; 0056c24f
    POP EDI                             ; 0056c250
    POP ESI                             ; 0056c251
    POP EBX                             ; 0056c252
    RET                                 ; 0056c253
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0056c254
        ;   Label: LAB_0056c254
    TEST EDI,EDI                        ; 0056c25a
    JZ 0x0056c1a0                       ; 0056c25c
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    PUSH EDI                            ; 0056c262
    MOV EDX,dword ptr [EDI + 0x154]     ; 0056c263
    CALL dword ptr [EDX + 0xf4]         ; 0056c269
    ADD ESP,0x4                         ; 0056c26f
    TEST EAX,EAX                        ; 0056c272
    JNZ 0x0056c1a0                      ; 0056c274
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    PUSH EBX                            ; 0056c27a
    LEA ESI,[EBP + 0xfffffe46]          ; 0056c27b
    LEA EDI,[EBP + 0xfffffe16]          ; 0056c281
    CALL FUN_0056cbd0                   ; 0056c287
        ;   XREF to: 0056cbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cbd0()
    MOV ECX,0xc                         ; 0056c28c
    LEA ESI,[EBP + 0xfffffe46]          ; 0056c291
    LEA EAX,[EBP + 0xfffffe16]          ; 0056c297
    ADD ESP,0x4                         ; 0056c29d
    MOVSD.REP ES:EDI,ESI                ; 0056c2a0
    PUSH EAX                            ; 0056c2a2
    LEA ESI,[EBP + -0x5a]               ; 0056c2a3
    LEA EDI,[EBP + 0xffffff76]          ; 0056c2a6
    CALL FUN_00584450                   ; 0056c2ac
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined FUN_00584450()
    ADD ESP,0x4                         ; 0056c2b1
    LEA EAX,[EBP + 0xffffff76]          ; 0056c2b4
    LEA ESI,[EBP + -0x5a]               ; 0056c2ba
    PUSH EAX                            ; 0056c2bd
    MOVSD ES:EDI,ESI                    ; 0056c2be
    MOVSD ES:EDI,ESI                    ; 0056c2bf
    MOVSD ES:EDI,ESI                    ; 0056c2c0
    PUSH EBX                            ; 0056c2c1
    LEA ESI,[EBP + -0x4e]               ; 0056c2c2
    LEA EDI,[EBP + -0x7e]               ; 0056c2c5
    CALL FUN_00408b80                   ; 0056c2c8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[EBP + -0x4e]               ; 0056c2cd
    MOVSD ES:EDI,ESI                    ; 0056c2d0
    MOVSD ES:EDI,ESI                    ; 0056c2d1
    MOVSD ES:EDI,ESI                    ; 0056c2d2
    FLD float ptr [EBP + -0x7e]         ; 0056c2d3
    FLD float ptr [EBP + -0x7a]         ; 0056c2d6
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0056c2d9
    FLD float ptr [EBP + -0x76]         ; 0056c2df
    LEA EAX,[EDX + 0x20]                ; 0056c2e2
    LEA EDI,[EBP + 0xffffff16]          ; 0056c2e5
    LEA ESI,[EBP + 0xffffff6a]          ; 0056c2eb
    FXCH ST2                            ; 0056c2f1
    FSUB float ptr [EAX]                ; 0056c2f3
    FXCH                                ; 0056c2f5
    FSUB float ptr [EAX + 0x4]          ; 0056c2f7
    FXCH ST2                            ; 0056c2fa
    FSUB float ptr [EAX + 0x8]          ; 0056c2fc
    FXCH                                ; 0056c2ff
    FSTP float ptr [EBP + 0xffffff6a]   ; 0056c301
    FXCH                                ; 0056c307
    FSTP float ptr [EBP + 0xffffff6e]   ; 0056c309
    FSTP float ptr [EBP + 0xffffff72]   ; 0056c30f
    MOVSD ES:EDI,ESI                    ; 0056c315
    MOVSD ES:EDI,ESI                    ; 0056c316
    MOVSD ES:EDI,ESI                    ; 0056c317
    FLD float ptr [EBP + 0xffffff1a]    ; 0056c318
    FABS                                ; 0056c31e
    ADD ESP,0x8                         ; 0056c320
    FCOMP double ptr [0x005d651b]       ; 0056c323 | DAT_005d651b
    FNSTSW AX                           ; 0056c329
    SAHF                                ; 0056c32b
    JA 0x0056c1a0                       ; 0056c32c
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    FLD float ptr [EBP + 0xffffff1e]    ; 0056c332
    FMUL ST0                            ; 0056c338
    FLD float ptr [EBP + 0xffffff16]    ; 0056c33a
    FMUL ST0                            ; 0056c340
    FADDP                               ; 0056c342
    FCOMP double ptr [0x005d6523]       ; 0056c344 | DAT_005d6523
    FNSTSW AX                           ; 0056c34a
    SAHF                                ; 0056c34c
    JA 0x0056c1a0                       ; 0056c34d
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    PUSH 0x1                            ; 0056c353
    PUSH EBX                            ; 0056c355
    MOV EAX,dword ptr [EDX + 0x154]     ; 0056c356
    PUSH EDX                            ; 0056c35c
    CALL dword ptr [EAX + 0xec]         ; 0056c35d
    ADD ESP,0xc                         ; 0056c363
    TEST EAX,EAX                        ; 0056c366
    JZ 0x0056c1a0                       ; 0056c368
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0056c36e
    LEA EDX,[EAX + 0x30]                ; 0056c374
    PUSH EDX                            ; 0056c377
    ADD EAX,0x20                        ; 0056c378
    PUSH EAX                            ; 0056c37b
    LEA EAX,[EBP + 0xfffffde6]          ; 0056c37c
    PUSH EAX                            ; 0056c382
    MOV dword ptr [EBX + 0xd05c],0x0    ; 0056c383
    CALL FUN_00583940                   ; 0056c38d
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 0056c392
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0056c395
    PUSH EAX                            ; 0056c398
    MOV EDX,dword ptr [EBP + 0x76]      ; 0056c399
    PUSH EDX                            ; 0056c39c
    LEA EAX,[EBP + 0xfffffd56]          ; 0056c39d
    PUSH EAX                            ; 0056c3a3
    CALL FUN_00583800                   ; 0056c3a4
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; undefined FUN_00583800()
    ADD ESP,0xc                         ; 0056c3a9
    LEA EAX,[EBP + 0xfffffe16]          ; 0056c3ac
    PUSH EAX                            ; 0056c3b2
    LEA ESI,[EBP + 0xfffffe76]          ; 0056c3b3
    LEA EDI,[EBP + 0xfffffd86]          ; 0056c3b9
    CALL FUN_00584560                   ; 0056c3bf
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined FUN_00584560()
    ADD ESP,0x4                         ; 0056c3c4
    LEA EAX,[EBP + 0xfffffd86]          ; 0056c3c7
    MOV ECX,0xc                         ; 0056c3cd
    PUSH EAX                            ; 0056c3d2
    LEA EAX,[EBP + 0xfffffd56]          ; 0056c3d3
    LEA ESI,[EBP + 0xfffffe76]          ; 0056c3d9
    PUSH EAX                            ; 0056c3df
    LEA EAX,[EBP + 0xfffffde6]          ; 0056c3e0
    MOVSD.REP ES:EDI,ESI                ; 0056c3e6
    PUSH EAX                            ; 0056c3e8
    LEA ESI,[EBP + 0xfffffea6]          ; 0056c3e9
    LEA EDI,[EBP + 0xfffffdb6]          ; 0056c3ef
    CALL FUN_005833e0                   ; 0056c3f5
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0056c3fa
    LEA ESI,[EBP + 0xfffffea6]          ; 0056c3ff
    LEA EAX,[EBP + 0xfffffdb6]          ; 0056c405
    ADD ESP,0x8                         ; 0056c40b
    MOVSD.REP ES:EDI,ESI                ; 0056c40e
    PUSH EAX                            ; 0056c410
    LEA ESI,[EBP + 0xfffffd26]          ; 0056c411
    CALL FUN_005833e0                   ; 0056c417
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0056c41c
    LEA ESI,[EBP + 0xfffffd26]          ; 0056c421
    LEA EAX,[EBP + -0x42]               ; 0056c427
    LEA EDI,[EBX + 0xd060]              ; 0056c42a
    MOV EDX,0xbff530be                  ; 0056c430
    ADD ESP,0x8                         ; 0056c435
    MOVSD.REP ES:EDI,ESI                ; 0056c438
    PUSH EAX                            ; 0056c43a
    MOV ECX,0x3e6b395c                  ; 0056c43b
    MOV ESI,0xbf44b945                  ; 0056c440
    MOV EDI,0x3dcf14db                  ; 0056c445
    MOV EAX,0xc01c8e61                  ; 0056c44a
    MOV dword ptr [EBP + 0xffffff3a],ECX ; 0056c44f
    MOV dword ptr [EBP + 0xffffff42],ESI ; 0056c455
    MOV dword ptr [EBP + 0xffffff3e],EDI ; 0056c45b
    LEA EDI,[EBP + -0x42]               ; 0056c461
    LEA ESI,[EBP + 0xffffff3a]          ; 0056c464
    MOV dword ptr [EBP + 0x2a],EAX      ; 0056c46a
    LEA EAX,[EBP + 0x2a]                ; 0056c46d
    MOVSD ES:EDI,ESI                    ; 0056c470
    MOVSD ES:EDI,ESI                    ; 0056c471
    MOVSD ES:EDI,ESI                    ; 0056c472
    PUSH EAX                            ; 0056c473
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0056c474
    MOV ECX,0xbf448777                  ; 0056c477
    PUSH ESI                            ; 0056c47c
    MOV dword ptr [EBP + 0x2e],EDX      ; 0056c47d
    MOV dword ptr [EBP + 0x32],ECX      ; 0056c480
    CALL FUN_00583940                   ; 0056c483
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 0056c488
    JMP 0x0056c1a0                      ; 0056c48b
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_JUMP)  ; LAB_0056c1a0
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0056c490
        ;   Label: LAB_0056c490
    TEST ESI,ESI                        ; 0056c496
    JZ 0x0056c1a0                       ; 0056c498
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    PUSH ESI                            ; 0056c49e
    MOV EDX,dword ptr [ESI + 0x154]     ; 0056c49f
    CALL dword ptr [EDX + 0xf4]         ; 0056c4a5
    ADD ESP,0x4                         ; 0056c4ab
    JMP 0x0056c1a0                      ; 0056c4ae
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_JUMP)  ; LAB_0056c1a0
    LEA EAX,[EBP + 0x5a]                ; 0056c4b3
        ;   Label: LAB_0056c4b3
    PUSH EAX                            ; 0056c4b6
    MOV ECX,dword ptr [EBP + 0x72]      ; 0056c4b7
    PUSH ECX                            ; 0056c4ba
    CALL FUN_004fbb70                   ; 0056c4bb
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    ADD ESP,0x8                         ; 0056c4c0
    CMP EAX,0x23                        ; 0056c4c3
    JC 0x0056c1a0                       ; 0056c4c6
        ;   XREF to: 0056c1a0 (CONDITIONAL_JUMP)  ; LAB_0056c1a0
    JBE 0x0056c254                      ; 0056c4cc
        ;   XREF to: 0056c254 (CONDITIONAL_JUMP)  ; LAB_0056c254
    CMP EAX,0x5dc                       ; 0056c4d2
    JZ 0x0056c490                       ; 0056c4d7
        ;   XREF to: 0056c490 (CONDITIONAL_JUMP)  ; LAB_0056c490
    JMP 0x0056c1a0                      ; 0056c4d9
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_JUMP)  ; LAB_0056c1a0
    PUSH EAX                            ; 0056c4de
        ;   Label: LAB_0056c4de
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c4df
    CALL dword ptr [EDX + 0x10c]        ; 0056c4e5
    ADD ESP,0x4                         ; 0056c4eb
    TEST EAX,EAX                        ; 0056c4ee
    JG 0x0056c1e2                       ; 0056c4f0
        ;   XREF to: 0056c1e2 (CONDITIONAL_JUMP)  ; LAB_0056c1e2
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0056c4f6
    PUSH EAX                            ; 0056c4fc
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c4fd
    CALL dword ptr [EDX + 0xf4]         ; 0056c503
    ADD ESP,0x4                         ; 0056c509
    TEST EAX,EAX                        ; 0056c50c
    JNZ 0x0056c1e2                      ; 0056c50e
        ;   XREF to: 0056c1e2 (CONDITIONAL_JUMP)  ; LAB_0056c1e2
    CMP dword ptr [0x02cfd7a4],0x0      ; 0056c514 | DAT_02cfd7a4
    JNZ 0x0056c681                      ; 0056c51b
        ;   XREF to: 0056c681 (CONDITIONAL_JUMP)  ; LAB_0056c681
    LEA EAX,[EBP + 0xffffe28a]          ; 0056c521
    PUSH EAX                            ; 0056c527
    MOV EDI,dword ptr [EBP + 0x72]      ; 0056c528
    PUSH EDI                            ; 0056c52b
    CALL FUN_0054f850                   ; 0056c52c
        ;   XREF to: 0054f850 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f850()
    ADD ESP,0x8                         ; 0056c531
    PUSH 0x1                            ; 0056c534
    PUSH 0x5d64ea                       ; 0056c536 | = "attack_nocollision"
    PUSH EDI                            ; 0056c53b
    CALL FUN_004fc310                   ; 0056c53c
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 0056c541
    PUSH EAX                            ; 0056c544
    CALL FUN_004fb9c0                   ; 0056c545
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 0056c54a
    PUSH 0x41f00000                     ; 0056c54d
    PUSH EAX                            ; 0056c552
    PUSH EDI                            ; 0056c553
    CALL FUN_0054c180                   ; 0056c554
        ;   XREF to: 0054c180 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c180()
    ADD ESP,0xc                         ; 0056c559
    MOV ECX,dword ptr [0x02cfd798]      ; 0056c55c | DAT_02cfd798
    PUSH ECX                            ; 0056c562
    PUSH EDI                            ; 0056c563
    LEA ESI,[EBP + 0x4e]                ; 0056c564
    CALL FUN_0054dbd0                   ; 0056c567
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    LEA EDI,[EBP + 0xffffff5e]          ; 0056c56c
    LEA ESI,[EBP + 0x4e]                ; 0056c572
    LEA EAX,[EBP + 0xffffe28a]          ; 0056c575
    ADD ESP,0x8                         ; 0056c57b
    MOVSD ES:EDI,ESI                    ; 0056c57e
    MOVSD ES:EDI,ESI                    ; 0056c57f
    MOVSD ES:EDI,ESI                    ; 0056c580
    PUSH EAX                            ; 0056c581
    MOV EDI,dword ptr [EBP + 0x72]      ; 0056c582
    PUSH EDI                            ; 0056c585
    CALL FUN_0054f920                   ; 0056c586
        ;   XREF to: 0054f920 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f920()
    MOV dword ptr [EBX + 0x30],0x0      ; 0056c58b
    MOV dword ptr [EBX + 0x38],0x0      ; 0056c592
    MOV EAX,[0x01d5ba14]                ; 0056c599 | DAT_01d5ba14
    MOV dword ptr [EBX + 0x34],0xbfc90fdb ; 0056c59e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0056c5a5
    MOV EDX,dword ptr [EBP + 0x76]      ; 0056c5ac
    MOV ECX,dword ptr [EAX + 0x20]      ; 0056c5af
    MOV dword ptr [EDX],ECX             ; 0056c5b2
    MOV ECX,dword ptr [EAX + 0x24]      ; 0056c5b4
    MOV dword ptr [EDX + 0x4],ECX       ; 0056c5b7
    MOV ECX,dword ptr [EAX + 0x28]      ; 0056c5ba
    MOV dword ptr [EDX + 0x8],ECX       ; 0056c5bd
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0056c5c0
    ADD ESP,0x8                         ; 0056c5c3
    MOV dword ptr [EDX + 0xc],EAX       ; 0056c5c6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0056c5c9
    FLD float ptr [EBX + 0x24]          ; 0056c5cc
    PUSH EAX                            ; 0056c5cf
    LEA EAX,[EBX + 0x3c]                ; 0056c5d0
    FADD float ptr [0x005d650b]         ; 0056c5d3 | DAT_005d650b
    PUSH EAX                            ; 0056c5d9
    FSTP float ptr [EBX + 0x24]         ; 0056c5da
    CALL FUN_0045b550                   ; 0056c5dd
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 0056c5e2
    LEA EAX,[EBP + 0xffffff5e]          ; 0056c5e5
    PUSH EAX                            ; 0056c5eb
    PUSH EBX                            ; 0056c5ec
    LEA ESI,[EBP + -0x12]               ; 0056c5ed
    LEA EDI,[EBP + -0x72]               ; 0056c5f0
    CALL FUN_00408b00                   ; 0056c5f3
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[EBP + -0x12]               ; 0056c5f8
    MOV EAX,dword ptr [EBP + 0x76]      ; 0056c5fb
    ADD ESP,0x8                         ; 0056c5fe
    MOVSD ES:EDI,ESI                    ; 0056c601
    MOVSD ES:EDI,ESI                    ; 0056c602
    MOVSD ES:EDI,ESI                    ; 0056c603
    XOR EDX,EDX                         ; 0056c604
    FLD float ptr [EAX]                 ; 0056c606
    FLD float ptr [EAX + 0x4]           ; 0056c608
    FLD float ptr [EAX + 0x8]           ; 0056c60b
    MOV ESI,0xbf800000                  ; 0056c60e
    FXCH ST2                            ; 0056c613
    FSUB float ptr [EBP + -0x72]        ; 0056c615
    FXCH                                ; 0056c618
    FSUB float ptr [EBP + -0x6e]        ; 0056c61a
    FXCH ST2                            ; 0056c61d
    FSUB float ptr [EBP + -0x6a]        ; 0056c61f
    FXCH                                ; 0056c622
    FSTP float ptr [EAX]                ; 0056c624
    FXCH                                ; 0056c626
    FSTP float ptr [EAX + 0x4]          ; 0056c628
    FSTP float ptr [EAX + 0x8]          ; 0056c62b
    LEA EAX,[EBP + -0x36]               ; 0056c62e
    LEA EDI,[EBP + 0x36]                ; 0056c631
    PUSH EAX                            ; 0056c634
    MOV dword ptr [EBP + -0x36],EDX     ; 0056c635
    MOV dword ptr [EBP + -0x2e],ESI     ; 0056c638
    PUSH EBX                            ; 0056c63b
    LEA ESI,[EBP + 0x1e]                ; 0056c63c
    MOV dword ptr [EBP + -0x32],EDX     ; 0056c63f
    CALL FUN_00408b00                   ; 0056c642
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[EBP + 0x1e]                ; 0056c647
    MOV EAX,dword ptr [EBP + 0x76]      ; 0056c64a
    MOVSD ES:EDI,ESI                    ; 0056c64d
    MOVSD ES:EDI,ESI                    ; 0056c64e
    MOVSD ES:EDI,ESI                    ; 0056c64f
    ADD ESP,0x8                         ; 0056c650
    FLD float ptr [EAX]                 ; 0056c653
    FLD float ptr [EAX + 0x4]           ; 0056c655
    FLD float ptr [EAX + 0x8]           ; 0056c658
    MOV EDI,0x1                         ; 0056c65b
    FXCH ST2                            ; 0056c660
    FSUB float ptr [EBP + 0x36]         ; 0056c662
    FXCH                                ; 0056c665
    FSUB float ptr [EBP + 0x3a]         ; 0056c667
    FXCH ST2                            ; 0056c66a
    FSUB float ptr [EBP + 0x3e]         ; 0056c66c
    MOV dword ptr [0x02cfd7a4],EDI      ; 0056c66f | DAT_02cfd7a4
    FXCH                                ; 0056c675
    FSTP float ptr [EAX]                ; 0056c677
    FXCH                                ; 0056c679
    FSTP float ptr [EAX + 0x4]          ; 0056c67b
    FSTP float ptr [EAX + 0x8]          ; 0056c67e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0056c681
        ;   Label: LAB_0056c681
    ADD EAX,0x158                       ; 0056c687
    PUSH EAX                            ; 0056c68c
    CALL FUN_0054eac0                   ; 0056c68d
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0056c692
    PUSH 0x1                            ; 0056c695
    PUSH 0x5d64fd                       ; 0056c697 | = "Bip01 Pelvis"
    PUSH EAX                            ; 0056c69c
    CALL FUN_00548090                   ; 0056c69d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0056c6a2
    PUSH EAX                            ; 0056c6a5
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0056c6a6
    ADD EAX,0x158                       ; 0056c6ac
    PUSH EAX                            ; 0056c6b1
    LEA ESI,[EBP + 0x42]                ; 0056c6b2
    LEA EDI,[EBP + 0x12]                ; 0056c6b5
    CALL FUN_0054dbd0                   ; 0056c6b8
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 0056c6bd
    LEA EAX,[EBP + 0x12]                ; 0056c6c0
    LEA ESI,[EBP + 0x42]                ; 0056c6c3
    PUSH EAX                            ; 0056c6c6
    MOVSD ES:EDI,ESI                    ; 0056c6c7
    MOVSD ES:EDI,ESI                    ; 0056c6c8
    MOVSD ES:EDI,ESI                    ; 0056c6c9
    PUSH EBX                            ; 0056c6ca
    LEA ESI,[EBP + 0x6]                 ; 0056c6cb
    LEA EDI,[EBP + 0xffffff2e]          ; 0056c6ce
    CALL FUN_00408bf0                   ; 0056c6d4
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[EBP + 0x6]                 ; 0056c6d9
    LEA EAX,[EBP + 0xffffff2e]          ; 0056c6dc
    ADD ESP,0x8                         ; 0056c6e2
    LEA EDX,[EBX + 0xd0c0]              ; 0056c6e5
    MOVSD ES:EDI,ESI                    ; 0056c6eb
    MOVSD ES:EDI,ESI                    ; 0056c6ec
    MOVSD ES:EDI,ESI                    ; 0056c6ed
    CMP EDX,EAX                         ; 0056c6ee
    JZ 0x0056c70c                       ; 0056c6f0
        ;   XREF to: 0056c70c (CONDITIONAL_JUMP)  ; LAB_0056c70c
    MOV EAX,dword ptr [EBP + 0xffffff2e] ; 0056c6f2
    MOV dword ptr [EDX],EAX             ; 0056c6f8
    MOV EAX,dword ptr [EBP + 0xffffff32] ; 0056c6fa
    MOV dword ptr [EDX + 0x4],EAX       ; 0056c700
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 0056c703
    MOV dword ptr [EDX + 0x8],EAX       ; 0056c709
    LEA EDI,[EBP + 0xffffff52]          ; 0056c70c
        ;   Label: LAB_0056c70c
    MOV EAX,[0x02cfd79c]                ; 0056c712 | DAT_02cfd79c
    LEA ESI,[EBX + 0xd0c0]              ; 0056c717
    PUSH EAX                            ; 0056c71d
    MOVSD ES:EDI,ESI                    ; 0056c71e
    MOVSD ES:EDI,ESI                    ; 0056c71f
    MOVSD ES:EDI,ESI                    ; 0056c720
    LEA EAX,[EBX + 0x158]               ; 0056c721
    LEA ESI,[EBP + 0xffffff22]          ; 0056c727
    PUSH EAX                            ; 0056c72d
    LEA EDI,[EBP + -0x6]                ; 0056c72e
    MOV dword ptr [EBP + 0x5e],EAX      ; 0056c731
    CALL FUN_0054dbd0                   ; 0056c734
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    FLD float ptr [EBP + 0xffffff52]    ; 0056c739
    FLD float ptr [EBP + 0xffffff56]    ; 0056c73f
    LEA ESI,[EBP + 0xffffff22]          ; 0056c745
    FLD float ptr [EBP + 0xffffff5a]    ; 0056c74b
    LEA EAX,[EBP + 0xffffff46]          ; 0056c751
    MOVSD ES:EDI,ESI                    ; 0056c757
    MOVSD ES:EDI,ESI                    ; 0056c758
    MOVSD ES:EDI,ESI                    ; 0056c759
    ADD ESP,0x8                         ; 0056c75a
    LEA EDI,[EBP + 0xffffff46]          ; 0056c75d
    LEA ESI,[EBP + -0x66]               ; 0056c763
    FXCH ST2                            ; 0056c766
    FSUB float ptr [EBP + -0x6]         ; 0056c768
    FXCH                                ; 0056c76b
    FSUB float ptr [EBP + -0x2]         ; 0056c76d
    FXCH ST2                            ; 0056c770
    FSUB float ptr [EBP + 0x2]          ; 0056c772
    FXCH                                ; 0056c775
    FSTP float ptr [EBP + -0x66]        ; 0056c777
    FXCH                                ; 0056c77a
    FSTP float ptr [EBP + -0x62]        ; 0056c77c
    FSTP float ptr [EBP + -0x5e]        ; 0056c77f
    MOVSD ES:EDI,ESI                    ; 0056c782
    MOVSD ES:EDI,ESI                    ; 0056c783
    MOVSD ES:EDI,ESI                    ; 0056c784
    PUSH EAX                            ; 0056c785
    LEA ESI,[EBP + -0x2a]               ; 0056c786
    LEA EDI,[EBP + -0x1e]               ; 0056c789
    CALL FUN_00576250                   ; 0056c78c
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[EBP + -0x2a]               ; 0056c791
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0056c794
    MOVSD ES:EDI,ESI                    ; 0056c797
    MOVSD ES:EDI,ESI                    ; 0056c798
    MOVSD ES:EDI,ESI                    ; 0056c799
    MOV EAX,dword ptr [EAX + 0x8]       ; 0056c79a
    MOV dword ptr [EBP + 0x62],EAX      ; 0056c79d
    ADD ESP,0x4                         ; 0056c7a0
    FLD float ptr [EBP + 0x62]          ; 0056c7a3
    FCOMP float ptr [0x005d650f]        ; 0056c7a6 | DAT_005d650f
    FNSTSW AX                           ; 0056c7ac
    SAHF                                ; 0056c7ae
    JNC 0x0056c851                      ; 0056c7af
        ;   XREF to: 0056c851 (CONDITIONAL_JUMP)  ; LAB_0056c851
    FLD float ptr [EBP + 0x62]          ; 0056c7b5
    FMUL float ptr [0x005d6517]         ; 0056c7b8 | DAT_005d6517
    FSTP float ptr [EBP + 0x66]         ; 0056c7be
    PUSH dword ptr [EBP + -0x1e]        ; 0056c7c1
        ;   Label: LAB_0056c7c1
    LEA ESI,[EBP + 0xfffffee6]          ; 0056c7c4
    LEA EDI,[EBP + 0xffffff06]          ; 0056c7ca
    CALL FUN_00585cd0                   ; 0056c7d0
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585cd0()
    LEA ESI,[EBP + 0xfffffee6]          ; 0056c7d5
    ADD ESP,0x4                         ; 0056c7db
    MOVSD ES:EDI,ESI                    ; 0056c7de
    MOVSD ES:EDI,ESI                    ; 0056c7df
    MOVSD ES:EDI,ESI                    ; 0056c7e0
    MOVSD ES:EDI,ESI                    ; 0056c7e1
    PUSH 0x54bef0                       ; 0056c7e2 | LAB_0054bef0
    MOV ESI,dword ptr [0x02cfd7a0]      ; 0056c7e7 | DAT_02cfd7a0
    PUSH ESI                            ; 0056c7ed
    LEA EAX,[EBP + 0xffffff06]          ; 0056c7ee
    PUSH dword ptr [EBP + 0x66]         ; 0056c7f4
    PUSH EAX                            ; 0056c7f7
    LEA EAX,[EBX + 0x158]               ; 0056c7f8
    PUSH EAX                            ; 0056c7fe
    MOV dword ptr [EBP + 0x5e],EAX      ; 0056c7ff
    CALL FUN_0054e170                   ; 0056c802
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0056c807
    LEA ESI,[EBP + 0xfffffef6]          ; 0056c80a
    PUSH dword ptr [EBP + -0x1a]        ; 0056c810
    CALL FUN_00585d10                   ; 0056c813
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d10()
    ADD ESP,0x4                         ; 0056c818
    PUSH 0x54bef0                       ; 0056c81b | LAB_0054bef0
    MOV EAX,[0x02cfd79c]                ; 0056c820 | DAT_02cfd79c
    PUSH EAX                            ; 0056c825
    PUSH dword ptr [EBP + 0x66]         ; 0056c826
    LEA EAX,[EBP + 0xfffffed6]          ; 0056c829
    LEA EDI,[EBP + 0xfffffed6]          ; 0056c82f
    PUSH EAX                            ; 0056c835
    MOV EDX,dword ptr [EBP + 0x5e]      ; 0056c836
    LEA ESI,[EBP + 0xfffffef6]          ; 0056c839
    PUSH EDX                            ; 0056c83f
    MOVSD ES:EDI,ESI                    ; 0056c840
    MOVSD ES:EDI,ESI                    ; 0056c841
    MOVSD ES:EDI,ESI                    ; 0056c842
    MOVSD ES:EDI,ESI                    ; 0056c843
    CALL FUN_0054e170                   ; 0056c844
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0056c849
    JMP 0x0056c1e2                      ; 0056c84c
        ;   XREF to: 0056c1e2 (UNCONDITIONAL_JUMP)  ; LAB_0056c1e2
    FLD float ptr [EBP + 0x62]          ; 0056c851
        ;   Label: LAB_0056c851
    FADD float ptr [0x005d6513]         ; 0056c854 | DAT_005d6513
    FMUL float ptr [0x005d6517]         ; 0056c85a | DAT_005d6517
    FLD1                                ; 0056c860
    FSUBRP                              ; 0056c862
    FST float ptr [EBP + 0x66]          ; 0056c864
    FLDZ                                ; 0056c867
    FCOMPP                              ; 0056c869
    FNSTSW AX                           ; 0056c86b
    SAHF                                ; 0056c86d
    JBE 0x0056c7c1                      ; 0056c86e
        ;   XREF to: 0056c7c1 (CONDITIONAL_JUMP)  ; LAB_0056c7c1
    XOR ECX,ECX                         ; 0056c874
    MOV dword ptr [EBP + 0x66],ECX      ; 0056c876
    JMP 0x0056c7c1                      ; 0056c879
        ;   XREF to: 0056c7c1 (UNCONDITIONAL_JUMP)  ; LAB_0056c7c1

