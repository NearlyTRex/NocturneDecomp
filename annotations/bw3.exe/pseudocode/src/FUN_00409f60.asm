; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00409f60(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CHolycross_005b5618+1
;   TerminatedCString s_CHero_005b5624
;   TerminatedCString s_s_causing_5_2f_damage_to_005b562a
;   TerminatedCString s_CHolycross_005b5649
;   TerminatedCString s_CHero_005b5654
;   TerminatedCString s_s_causing_5_2f_damage_to_005b565a
;   undefined4 DAT_005b5679
;   undefined4 DAT_005b5681
;   undefined4 DAT_005b5689
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_005fed24
;   undefined4 DAT_00603b28
;   undefined4 DAT_007e2cec
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_007f8fc8
;   ... and 15 more
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_0040c790
;   FUN_0040c840
;   FUN_0041eed0
;   FUN_0042abb0
;   FUN_00441ff0
;   FUN_004461c0
;   FUN_004a7110
;   FUN_004cc040
;   FUN_004cc5d0
;   FUN_004ce9c0
;   FUN_0053ccc0
;   FUN_0053ebd0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409f60
        ;   Label: FUN_00409f60
    PUSH ESI                            ; 00409f61
    PUSH EDI                            ; 00409f62
    PUSH EBP                            ; 00409f63
    MOV EBP,ESP                         ; 00409f64
    SUB ESP,0x394                       ; 00409f66
    AND ESP,0xfffffff8                  ; 00409f6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00409f6f
    XOR EDX,EDX                         ; 00409f72
    MOV ESI,dword ptr [EBP + 0x18]      ; 00409f74
    MOV dword ptr [ESP + 0x360],EDX     ; 00409f77
    MOV dword ptr [ESP + 0x364],EDX     ; 00409f7e
    CMP ESI,0x1                         ; 00409f85
    XOR EAX,EAX                         ; 00409f88
    MOV dword ptr [ESP + 0x2e0],EAX     ; 00409f8a
    MOV dword ptr [ESP + 0x2e4],EAX     ; 00409f91
    PUSH EBX                            ; 00409f98
    MOV EAX,dword ptr [EBX + 0x154]     ; 00409f99
    LEA ESI,[ESP + 0x1d0]               ; 00409f9f
    LEA EDI,[ESP + 0x1e8]               ; 00409fa6
    CALL dword ptr [EAX + 0x1c]         ; 00409fad
    MOV ECX,0x6                         ; 00409fb0
    LEA ESI,[ESP + 0x1d0]               ; 00409fb5
    ADD ESP,0x4                         ; 00409fbc
    MOVSD.REP ES:EDI,ESI                ; 00409fbf
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 00409fc1
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00409fc8
    LEA EAX,[ESP + 0x2e0]               ; 00409fcf
    PUSH EAX                            ; 00409fd6
    PUSH EBX                            ; 00409fd7
    LEA ESI,[ESP + 0x24c]               ; 00409fd8
    LEA EDI,[ESP + 0x2f4]               ; 00409fdf
    CALL FUN_00408b80                   ; 00409fe6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 00409feb
    LEA ESI,[ESP + 0x244]               ; 00409fee
    MOV ECX,dword ptr [ESP + 0x360]     ; 00409ff5
    MOVSD ES:EDI,ESI                    ; 00409ffc
    MOVSD ES:EDI,ESI                    ; 00409ffd
    MOVSD ES:EDI,ESI                    ; 00409ffe
    CMP ECX,0x1                         ; 00409fff
    JNZ 0x0040a0e2                      ; 0040a002
        ;   XREF to: 0040a0e2 (CONDITIONAL_JUMP)  ; LAB_0040a0e2
    MOV dword ptr [ESP + 0x2c4],0xc0400000 ; 0040a008
    LEA EAX,[ESP + 0x2bc]               ; 0040a013
    XOR ESI,ESI                         ; 0040a01a
    PUSH EAX                            ; 0040a01c
    MOV dword ptr [ESP + 0x2c0],ESI     ; 0040a01d
    MOV dword ptr [ESP + 0x2c4],ESI     ; 0040a024
    PUSH EBX                            ; 0040a02b
    LEA ESI,[ESP + 0x330]               ; 0040a02c
    LEA EDI,[ESP + 0x2dc]               ; 0040a033
    CALL FUN_00408b00                   ; 0040a03a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x330]               ; 0040a03f
    LEA EAX,[ESP + 0x240]               ; 0040a046
    ADD ESP,0x8                         ; 0040a04d
    LEA EDX,[ESP + 0x298]               ; 0040a050
    FLD float ptr [ESP + 0x2ec]         ; 0040a057
    FLD float ptr [ESP + 0x2f0]         ; 0040a05e
    MOVSD ES:EDI,ESI                    ; 0040a065
    MOVSD ES:EDI,ESI                    ; 0040a066
    MOVSD ES:EDI,ESI                    ; 0040a067
    FLD float ptr [ESP + 0x2f4]         ; 0040a068
    LEA EDI,[ESP + 0x238]               ; 0040a06f
    LEA ESI,[ESP + 0x2f8]               ; 0040a076
    FXCH ST2                            ; 0040a07d
    FADD float ptr [ESP + 0x2d4]        ; 0040a07f
    FXCH                                ; 0040a086
    FADD float ptr [ESP + 0x2d8]        ; 0040a088
    FXCH ST2                            ; 0040a08f
    FADD float ptr [ESP + 0x2dc]        ; 0040a091
    FXCH                                ; 0040a098
    FSTP float ptr [ESP + 0x2f8]        ; 0040a09a
    FXCH                                ; 0040a0a1
    FSTP float ptr [ESP + 0x2fc]        ; 0040a0a3
    FSTP float ptr [ESP + 0x300]        ; 0040a0aa
    MOVSD ES:EDI,ESI                    ; 0040a0b1
    MOVSD ES:EDI,ESI                    ; 0040a0b2
    MOVSD ES:EDI,ESI                    ; 0040a0b3
    CMP EDX,EAX                         ; 0040a0b4
    JZ 0x0040a0e2                       ; 0040a0b6
        ;   XREF to: 0040a0e2 (CONDITIONAL_JUMP)  ; LAB_0040a0e2
    MOV EAX,dword ptr [ESP + 0x238]     ; 0040a0b8
    MOV dword ptr [ESP + 0x298],EAX     ; 0040a0bf
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0040a0c6
    MOV dword ptr [ESP + 0x29c],EAX     ; 0040a0cd
    MOV EAX,dword ptr [ESP + 0x240]     ; 0040a0d4
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0040a0db
    PUSH 0x5b5619                       ; 0040a0e2 | s_CHolycross_005b5618+1
        ;   Label: LAB_0040a0e2
    PUSH EBX                            ; 0040a0e7
    CALL FUN_0040c790                   ; 0040a0e8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040a0ed
    TEST EAX,EAX                        ; 0040a0f0
    JZ 0x0040a1fc                       ; 0040a0f2
        ;   XREF to: 0040a1fc (CONDITIONAL_JUMP)  ; LAB_0040a1fc
    MOV EDX,0x1                         ; 0040a0f8
    LEA EAX,[ESP + 0x298]               ; 0040a0fd
    MOV dword ptr [ESP + 0x360],EDX     ; 0040a104
    LEA EDX,[EBX + 0x20]                ; 0040a10b
    CMP EAX,EDX                         ; 0040a10e
    JZ 0x0040a12f                       ; 0040a110
        ;   XREF to: 0040a12f (CONDITIONAL_JUMP)  ; LAB_0040a12f
    MOV EAX,dword ptr [EDX]             ; 0040a112
    MOV dword ptr [ESP + 0x298],EAX     ; 0040a114
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040a11b
    MOV dword ptr [ESP + 0x29c],EAX     ; 0040a11e
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040a125
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0040a128
    MOV ESI,0x40000000                  ; 0040a12f
        ;   Label: LAB_0040a12f
    LEA EAX,[ESP + 0x280]               ; 0040a134
    LEA EDI,[ESP + 0x250]               ; 0040a13b
    XOR ECX,ECX                         ; 0040a142
    PUSH EAX                            ; 0040a144
    MOV dword ptr [ESP + 0x284],ECX     ; 0040a145
    MOV dword ptr [ESP + 0x288],ESI     ; 0040a14c
    PUSH EBX                            ; 0040a153
    LEA ESI,[ESP + 0x30c]               ; 0040a154
    MOV dword ptr [ESP + 0x290],ECX     ; 0040a15b
    CALL FUN_00408b00                   ; 0040a162
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x30c]               ; 0040a167
    ADD ESP,0x8                         ; 0040a16e
    LEA EAX,[EBX + 0x20]                ; 0040a171
    MOVSD ES:EDI,ESI                    ; 0040a174
    MOVSD ES:EDI,ESI                    ; 0040a175
    MOVSD ES:EDI,ESI                    ; 0040a176
    LEA EDX,[ESP + 0x2ec]               ; 0040a177
    FLD float ptr [EAX + 0x4]           ; 0040a17e
    FLD float ptr [EAX + 0x8]           ; 0040a181
    FLD float ptr [EAX]                 ; 0040a184
    LEA EDI,[ESP + 0x31c]               ; 0040a186
    LEA ESI,[ESP + 0x2c8]               ; 0040a18d
    LEA EAX,[ESP + 0x31c]               ; 0040a194
    FADD float ptr [ESP + 0x250]        ; 0040a19b
    FXCH ST2                            ; 0040a1a2
    FADD float ptr [ESP + 0x254]        ; 0040a1a4
    FXCH                                ; 0040a1ab
    FADD float ptr [ESP + 0x258]        ; 0040a1ad
    FXCH ST2                            ; 0040a1b4
    FSTP float ptr [ESP + 0x2c8]        ; 0040a1b6
    FSTP float ptr [ESP + 0x2cc]        ; 0040a1bd
    FSTP float ptr [ESP + 0x2d0]        ; 0040a1c4
    MOVSD ES:EDI,ESI                    ; 0040a1cb
    MOVSD ES:EDI,ESI                    ; 0040a1cc
    MOVSD ES:EDI,ESI                    ; 0040a1cd
    CMP EDX,EAX                         ; 0040a1ce
    JZ 0x0040a1fc                       ; 0040a1d0
        ;   XREF to: 0040a1fc (CONDITIONAL_JUMP)  ; LAB_0040a1fc
    MOV EAX,dword ptr [ESP + 0x31c]     ; 0040a1d2
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0040a1d9
    MOV EAX,dword ptr [ESP + 0x320]     ; 0040a1e0
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0040a1e7
    MOV EAX,dword ptr [ESP + 0x324]     ; 0040a1ee
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0040a1f5
    MOV EAX,0x40000000                  ; 0040a1fc
        ;   Label: LAB_0040a1fc
    MOV ESI,0x3f800000                  ; 0040a201
    LEA EDI,[ESP + 0x268]               ; 0040a206
    MOV dword ptr [ESP + 0x378],EAX     ; 0040a20d
    LEA EAX,[ESP + 0x274]               ; 0040a214
    XOR EDX,EDX                         ; 0040a21b
    PUSH EAX                            ; 0040a21d
    MOV dword ptr [ESP + 0x278],EDX     ; 0040a21e
    MOV dword ptr [ESP + 0x280],ESI     ; 0040a225
    PUSH EBX                            ; 0040a22c
    LEA ESI,[ESP + 0x228]               ; 0040a22d
    MOV dword ptr [ESP + 0x280],EDX     ; 0040a234
    CALL FUN_00408b00                   ; 0040a23b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x228]               ; 0040a240
    ADD ESP,0x8                         ; 0040a247
    MOVSD ES:EDI,ESI                    ; 0040a24a
    MOVSD ES:EDI,ESI                    ; 0040a24b
    MOVSD ES:EDI,ESI                    ; 0040a24c
    PUSH EBX                            ; 0040a24d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a24e
    CALL dword ptr [EAX + 0x94]         ; 0040a254
    ADD ESP,0x4                         ; 0040a25a
    MOV EDI,dword ptr [ESP + 0x360]     ; 0040a25d
    MOV dword ptr [ESP + 0x384],EAX     ; 0040a264
    TEST EDI,EDI                        ; 0040a26b
    JNZ 0x0040a666                      ; 0040a26d
        ;   XREF to: 0040a666 (CONDITIONAL_JUMP)  ; LAB_0040a666
    MOV dword ptr [ESP + 0x370],EDI     ; 0040a273
    MOV dword ptr [ESP + 0x37c],EDI     ; 0040a27a
    MOV EAX,[0x00603b28]                ; 0040a281 | DAT_00603b28
        ;   Label: LAB_0040a281
    MOV EDX,dword ptr [ESP + 0x370]     ; 0040a286
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0040a28d | DAT_02024a2c
    JGE 0x0040a666                      ; 0040a293
        ;   XREF to: 0040a666 (CONDITIONAL_JUMP)  ; LAB_0040a666
    ADD EAX,dword ptr [ESP + 0x37c]     ; 0040a299
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0040a2a0 | DAT_02024a30
    CMP ESI,EBX                         ; 0040a2a6
    JNZ 0x0040a2cc                      ; 0040a2a8
        ;   XREF to: 0040a2cc (CONDITIONAL_JUMP)  ; LAB_0040a2cc
    MOV ECX,dword ptr [ESP + 0x370]     ; 0040a2aa
        ;   Label: LAB_0040a2aa
    MOV EDX,dword ptr [ESP + 0x37c]     ; 0040a2b1
    INC ECX                             ; 0040a2b8
    ADD EDX,0x4                         ; 0040a2b9
    MOV dword ptr [ESP + 0x370],ECX     ; 0040a2bc
    MOV dword ptr [ESP + 0x37c],EDX     ; 0040a2c3
    JMP 0x0040a281                      ; 0040a2ca
        ;   XREF to: 0040a281 (UNCONDITIONAL_JUMP)  ; LAB_0040a281
    CMP ESI,dword ptr [ESP + 0x384]     ; 0040a2cc
        ;   Label: LAB_0040a2cc
    JZ 0x0040a2aa                       ; 0040a2d3
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    MOV EAX,[0x007e2cec]                ; 0040a2d5 | DAT_007e2cec
    PUSH EAX                            ; 0040a2da
    PUSH ESI                            ; 0040a2db
    CALL FUN_0040c840                   ; 0040a2dc
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040a2e1
    MOV EDI,EAX                         ; 0040a2e4
    TEST EAX,EAX                        ; 0040a2e6
    JZ 0x0040a40d                       ; 0040a2e8
        ;   XREF to: 0040a40d (CONDITIONAL_JUMP)  ; LAB_0040a40d
    CMP dword ptr [ESP + 0x384],0x0     ; 0040a2ee
    JZ 0x0040a325                       ; 0040a2f6
        ;   XREF to: 0040a325 (CONDITIONAL_JUMP)  ; LAB_0040a325
    PUSH EAX                            ; 0040a2f8
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040a2f9
    CALL dword ptr [EDX + 0xe0]         ; 0040a2ff
    ADD ESP,0x4                         ; 0040a305
    TEST EAX,EAX                        ; 0040a308
    JZ 0x0040a325                       ; 0040a30a
        ;   XREF to: 0040a325 (CONDITIONAL_JUMP)  ; LAB_0040a325
    PUSH 0x5b5624                       ; 0040a30c | = "CHero"
    MOV ECX,dword ptr [ESP + 0x388]     ; 0040a311
    PUSH ECX                            ; 0040a318
    CALL FUN_0040c790                   ; 0040a319
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040a31e
    TEST EAX,EAX                        ; 0040a321
    JNZ 0x0040a2aa                      ; 0040a323
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0x148]               ; 0040a325
        ;   Label: LAB_0040a325
    MOV ESI,0x40000000                  ; 0040a32c
    PUSH EAX                            ; 0040a331
    MOV dword ptr [ESP + 0x37c],ESI     ; 0040a332
    CALL FUN_0042abb0                   ; 0040a339
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040a33e
    PUSH EDI                            ; 0040a341
    LEA EAX,[ESP + 0x14c]               ; 0040a342
    PUSH EAX                            ; 0040a349
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040a34a
    PUSH EAX                            ; 0040a34d
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a34e
    PUSH EBX                            ; 0040a354
    CALL dword ptr [EDX + 0x7c]         ; 0040a355
    ADD ESP,0x10                        ; 0040a358
    LEA EAX,[ESP + 0x148]               ; 0040a35b
    PUSH EAX                            ; 0040a362
    LEA EAX,[ESP + 0x2f0]               ; 0040a363
    PUSH 0x40000000                     ; 0040a36a
    PUSH EAX                            ; 0040a36f
    MOV ESI,dword ptr [EDI + 0x154]     ; 0040a370
    PUSH EDI                            ; 0040a376
    CALL dword ptr [ESI + 0x100]        ; 0040a377
    ADD ESP,0x10                        ; 0040a37d
    FLDZ                                ; 0040a380
    FLD float ptr [ESP + 0x14c]         ; 0040a382
    FSTP double ptr [ESP]               ; 0040a389
    FCOMP double ptr [ESP]              ; 0040a38c
    FNSTSW AX                           ; 0040a38f
    SAHF                                ; 0040a391
    JNC 0x0040a2aa                      ; 0040a392
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    FLD double ptr [ESP]                ; 0040a398
    FMUL double ptr [0x005b5679]        ; 0040a39b | DAT_005b5679
    MOV EDX,dword ptr [EDI + 0x27a0]    ; 0040a3a1
    FLD1                                ; 0040a3a7
    FADDP                               ; 0040a3a9
    PUSH EDX                            ; 0040a3ab
    CALL FUN_005a3120                   ; 0040a3ac
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x394]       ; 0040a3b1
    MOV ECX,dword ptr [ESP + 0x394]     ; 0040a3b8
    PUSH ECX                            ; 0040a3bf
    LEA EAX,[ESP + 0x270]               ; 0040a3c0
    PUSH EAX                            ; 0040a3c7
    LEA EAX,[ESP + 0x2f8]               ; 0040a3c8
    PUSH EAX                            ; 0040a3cf
    MOV ESI,dword ptr [0x005fed24]      ; 0040a3d0 | DAT_005fed24
    PUSH ESI                            ; 0040a3d6
    CALL FUN_004ce9c0                   ; 0040a3d7
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce9c0()
    ADD ESP,0x14                        ; 0040a3dc
    PUSH EDI                            ; 0040a3df
    LEA ESI,[ESP + 0x14c]               ; 0040a3e0
    PUSH ESI                            ; 0040a3e7
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a3e8
    PUSH EDI                            ; 0040a3eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a3ec
    PUSH EBX                            ; 0040a3f2
    CALL dword ptr [EAX + 0x80]         ; 0040a3f3
    MOV EAX,0x1                         ; 0040a3f9
    ADD ESP,0x10                        ; 0040a3fe
    MOV dword ptr [ESP + 0x364],EAX     ; 0040a401
    JMP 0x0040a2aa                      ; 0040a408
        ;   XREF to: 0040a2aa (UNCONDITIONAL_JUMP)  ; LAB_0040a2aa
    MOV EDX,dword ptr [0x02cfd894]      ; 0040a40d | DAT_02cfd894
        ;   Label: LAB_0040a40d
    PUSH EDX                            ; 0040a413
    PUSH ESI                            ; 0040a414
    CALL FUN_0040c840                   ; 0040a415
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV dword ptr [ESP + 0x394],EAX     ; 0040a41a
    ADD ESP,0x8                         ; 0040a421
    TEST EAX,EAX                        ; 0040a424
    JZ 0x0040a540                       ; 0040a426
        ;   XREF to: 0040a540 (CONDITIONAL_JUMP)  ; LAB_0040a540
    PUSH EBX                            ; 0040a42c
    PUSH EAX                            ; 0040a42d
    CALL FUN_0056ede0                   ; 0040a42e
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ede0()
    ADD ESP,0x8                         ; 0040a433
    TEST EAX,EAX                        ; 0040a436
    JZ 0x0040a2aa                       ; 0040a438
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0x2ec]               ; 0040a43e
    PUSH dword ptr [ESP + 0x378]        ; 0040a445
    PUSH EAX                            ; 0040a44c
    MOV EDX,dword ptr [ESP + 0x394]     ; 0040a44d
    PUSH EDX                            ; 0040a454
    LEA ESI,[ESP + 0x358]               ; 0040a455
    LEA EDI,[ESP + 0x2b0]               ; 0040a45c
    CALL FUN_00408bf0                   ; 0040a463
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x358]               ; 0040a468
    ADD ESP,0x8                         ; 0040a46f
    LEA EAX,[ESP + 0x2a8]               ; 0040a472
    MOV ECX,dword ptr [ESP + 0x390]     ; 0040a479
    PUSH EAX                            ; 0040a480
    MOV EAX,dword ptr [ESP + 0x394]     ; 0040a481
    MOVSD ES:EDI,ESI                    ; 0040a488
    MOVSD ES:EDI,ESI                    ; 0040a489
    MOVSD ES:EDI,ESI                    ; 0040a48a
    PUSH ECX                            ; 0040a48b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040a48c
    LEA ESI,[ESP + 0x190]               ; 0040a492
    LEA EDI,[ESP + 0x1a8]               ; 0040a499
    CALL dword ptr [EAX + 0x1c]         ; 0040a4a0
    MOV ECX,0x6                         ; 0040a4a3
    ADD ESP,0x4                         ; 0040a4a8
    LEA EAX,[ESP + 0x1a4]               ; 0040a4ab
    LEA ESI,[ESP + 0x18c]               ; 0040a4b2
    PUSH EAX                            ; 0040a4b9
    MOVSD.REP ES:EDI,ESI                ; 0040a4ba
    CALL FUN_0041eed0                   ; 0040a4bc
        ;   XREF to: 0041eed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041eed0()
    ADD ESP,0xc                         ; 0040a4c1
    TEST EAX,EAX                        ; 0040a4c4
    JZ 0x0040a2aa                       ; 0040a4c6
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0x58]                ; 0040a4cc
    PUSH EAX                            ; 0040a4d0
    CALL FUN_0042abb0                   ; 0040a4d1
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040a4d6
    MOV ESI,dword ptr [ESP + 0x38c]     ; 0040a4d9
    PUSH ESI                            ; 0040a4e0
    LEA EAX,[ESP + 0x5c]                ; 0040a4e1
    PUSH EAX                            ; 0040a4e5
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a4e6
    PUSH EDI                            ; 0040a4e9
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a4ea
    PUSH EBX                            ; 0040a4f0
    CALL dword ptr [EDX + 0x7c]         ; 0040a4f1
    ADD ESP,0x10                        ; 0040a4f4
    PUSH ESI                            ; 0040a4f7
    FLD float ptr [ESP + 0x60]          ; 0040a4f8
    SUB ESP,0x8                         ; 0040a4fc
    FSTP double ptr [ESP]               ; 0040a4ff
    PUSH EBX                            ; 0040a502
    PUSH 0x5b562a                       ; 0040a503 | = "%s causing %5.2f damage to %s\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0040a508 | PTR_DAT_005f1690
    PUSH EDX                            ; 0040a50e | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0040a50f
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x18                        ; 0040a514
    PUSH dword ptr [ESP + 0x5c]         ; 0040a517
    PUSH ESI                            ; 0040a51b
    CALL FUN_0056ee20                   ; 0040a51c
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ee20()
    ADD ESP,0x8                         ; 0040a521
    PUSH ESI                            ; 0040a524
    LEA EAX,[ESP + 0x5c]                ; 0040a525
    PUSH EAX                            ; 0040a529
    PUSH EDI                            ; 0040a52a
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a52b
    PUSH EBX                            ; 0040a531
    CALL dword ptr [EDX + 0x80]         ; 0040a532
    ADD ESP,0x10                        ; 0040a538
    JMP 0x0040a2aa                      ; 0040a53b
        ;   XREF to: 0040a2aa (UNCONDITIONAL_JUMP)  ; LAB_0040a2aa
    MOV EDI,dword ptr [0x01d22e04]      ; 0040a540 | DAT_01d22e04
        ;   Label: LAB_0040a540
    PUSH EDI                            ; 0040a546
    PUSH ESI                            ; 0040a547
    CALL FUN_0040c840                   ; 0040a548
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV dword ptr [ESP + 0x360],EAX     ; 0040a54d
    ADD ESP,0x8                         ; 0040a554
    TEST EAX,EAX                        ; 0040a557
    JZ 0x0040a2aa                       ; 0040a559
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0x2ec]               ; 0040a55f
    PUSH dword ptr [ESP + 0x378]        ; 0040a566
    PUSH EAX                            ; 0040a56d
    MOV EDX,dword ptr [ESP + 0x360]     ; 0040a56e
    PUSH EDX                            ; 0040a575
    LEA ESI,[ESP + 0x220]               ; 0040a576
    LEA EDI,[ESP + 0x2bc]               ; 0040a57d
    CALL FUN_00408bf0                   ; 0040a584
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x220]               ; 0040a589
    ADD ESP,0x8                         ; 0040a590
    LEA EAX,[ESP + 0x2b4]               ; 0040a593
    MOV ECX,dword ptr [ESP + 0x35c]     ; 0040a59a
    PUSH EAX                            ; 0040a5a1
    MOV EAX,dword ptr [ESP + 0x360]     ; 0040a5a2
    MOVSD ES:EDI,ESI                    ; 0040a5a9
    MOVSD ES:EDI,ESI                    ; 0040a5aa
    MOVSD ES:EDI,ESI                    ; 0040a5ab
    PUSH ECX                            ; 0040a5ac
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040a5ad
    LEA ESI,[ESP + 0x1c0]               ; 0040a5b3
    LEA EDI,[ESP + 0x208]               ; 0040a5ba
    CALL dword ptr [EAX + 0x1c]         ; 0040a5c1
    MOV ECX,0x6                         ; 0040a5c4
    ADD ESP,0x4                         ; 0040a5c9
    LEA EAX,[ESP + 0x204]               ; 0040a5cc
    LEA ESI,[ESP + 0x1bc]               ; 0040a5d3
    PUSH EAX                            ; 0040a5da
    MOVSD.REP ES:EDI,ESI                ; 0040a5db
    CALL FUN_0041eed0                   ; 0040a5dd
        ;   XREF to: 0041eed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041eed0()
    ADD ESP,0xc                         ; 0040a5e2
    TEST EAX,EAX                        ; 0040a5e5
    JZ 0x0040a2aa                       ; 0040a5e7
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0xd0]                ; 0040a5ed
    PUSH EAX                            ; 0040a5f4
    CALL FUN_0042abb0                   ; 0040a5f5
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040a5fa
    MOV ESI,dword ptr [ESP + 0x358]     ; 0040a5fd
    PUSH ESI                            ; 0040a604
    LEA EAX,[ESP + 0xd4]                ; 0040a605
    PUSH EAX                            ; 0040a60c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a60d
    PUSH EDI                            ; 0040a610
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a611
    PUSH EBX                            ; 0040a617
    CALL dword ptr [EDX + 0x7c]         ; 0040a618
    ADD ESP,0x10                        ; 0040a61b
    PUSH ESI                            ; 0040a61e
    LEA ESI,[ESP + 0xd4]                ; 0040a61f
    PUSH ESI                            ; 0040a626
    PUSH EDI                            ; 0040a627
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a628
    PUSH EBX                            ; 0040a62e
    CALL dword ptr [EAX + 0x80]         ; 0040a62f
    ADD ESP,0x10                        ; 0040a635
    MOV ESI,dword ptr [ESP + 0x358]     ; 0040a638
    PUSH ESI                            ; 0040a63f
    CALL FUN_004cc5d0                   ; 0040a640
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc5d0()
    ADD ESP,0x4                         ; 0040a645
    TEST EAX,EAX                        ; 0040a648
    JZ 0x0040a2aa                       ; 0040a64a
        ;   XREF to: 0040a2aa (CONDITIONAL_JUMP)  ; LAB_0040a2aa
    LEA EAX,[ESP + 0x2ec]               ; 0040a650
    PUSH EAX                            ; 0040a657
    PUSH ESI                            ; 0040a658
    CALL FUN_004cc040                   ; 0040a659
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc040()
    ADD ESP,0x8                         ; 0040a65e
    JMP 0x0040a2aa                      ; 0040a661
        ;   XREF to: 0040a2aa (UNCONDITIONAL_JUMP)  ; LAB_0040a2aa
    MOV ESI,dword ptr [ESP + 0x360]     ; 0040a666
        ;   Label: LAB_0040a666
    CMP ESI,0x1                         ; 0040a66d
    JZ 0x0040a680                       ; 0040a670
        ;   XREF to: 0040a680 (CONDITIONAL_JUMP)  ; LAB_0040a680
    MOV EAX,dword ptr [ESP + 0x364]     ; 0040a672
        ;   Label: LAB_0040a672
    MOV ESP,EBP                         ; 0040a679
    POP EBP                             ; 0040a67b
    POP EDI                             ; 0040a67c
    POP ESI                             ; 0040a67d
    POP EBX                             ; 0040a67e
    RET                                 ; 0040a67f
    PUSH ESI                            ; 0040a680
        ;   Label: LAB_0040a680
    MOV EDI,dword ptr [0x00603b28]      ; 0040a681 | DAT_00603b28
    PUSH EDI                            ; 0040a687 | DAT_01ed78c8
    CALL FUN_0053ec90                   ; 0040a688
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec90()
    ADD ESP,0x8                         ; 0040a68d
    PUSH EBX                            ; 0040a690
    MOV EAX,[0x00603b28]                ; 0040a691 | DAT_00603b28
    PUSH EAX                            ; 0040a696 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 0040a697
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 0040a69c
    MOV EDX,dword ptr [0x00603b28]      ; 0040a69f | DAT_00603b28
    PUSH EDX                            ; 0040a6a5 | DAT_01ed78c8
    CALL FUN_0053ebd0                   ; 0040a6a6
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebd0()
    ADD ESP,0x4                         ; 0040a6ab
    MOV ECX,dword ptr [ESP + 0x384]     ; 0040a6ae
    TEST ECX,ECX                        ; 0040a6b5
    JNZ 0x0040aacd                      ; 0040a6b7
        ;   XREF to: 0040aacd (CONDITIONAL_JUMP)  ; LAB_0040aacd
    XOR EAX,EAX                         ; 0040a6bd
        ;   Label: LAB_0040a6bd
    MOV dword ptr [ESP + 0x374],EAX     ; 0040a6bf
    LEA EAX,[EBX + 0x20]                ; 0040a6c6
    MOV dword ptr [ESP + 0x380],EAX     ; 0040a6c9
    LEA EAX,[ESP + 0x2ec]               ; 0040a6d0
        ;   Label: LAB_0040a6d0
    PUSH EAX                            ; 0040a6d7
    LEA EAX,[ESP + 0x29c]               ; 0040a6d8
    PUSH EAX                            ; 0040a6df
    MOV EDX,dword ptr [0x00603b28]      ; 0040a6e0 | DAT_00603b28
    PUSH EDX                            ; 0040a6e6 | DAT_01ed78c8
    CALL FUN_0053ccc0                   ; 0040a6e7
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ccc0()
    MOV dword ptr [ESP + 0x39c],EAX     ; 0040a6ec
    FLD float ptr [ESP + 0x39c]         ; 0040a6f3
    ADD ESP,0xc                         ; 0040a6fa
    PUSH 0x5b5649                       ; 0040a6fd | = "CHolycross"
    PUSH EBX                            ; 0040a702
    FSTP float ptr [ESP + 0x20]         ; 0040a703
    CALL FUN_0040c790                   ; 0040a707
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040a70c
    TEST EAX,EAX                        ; 0040a70f
    JZ 0x0040a7a4                       ; 0040a711
        ;   XREF to: 0040a7a4 (CONDITIONAL_JUMP)  ; LAB_0040a7a4
    FLD float ptr [ESP + 0x18]          ; 0040a717
    FLDZ                                ; 0040a71b
    FXCH                                ; 0040a71d
    FSTP double ptr [ESP + 0x8]         ; 0040a71f
    FCOMP double ptr [ESP + 0x8]        ; 0040a723
    FNSTSW AX                           ; 0040a727
    SAHF                                ; 0040a729
    JBE 0x0040aae2                      ; 0040a72a
        ;   XREF to: 0040aae2 (CONDITIONAL_JUMP)  ; LAB_0040aae2
    MOV ECX,dword ptr [ESP + 0x380]     ; 0040a730
        ;   Label: LAB_0040a730
    LEA EAX,[ESP + 0x298]               ; 0040a737
    CMP EAX,ECX                         ; 0040a73e
    JZ 0x0040a75f                       ; 0040a740
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    MOV EAX,dword ptr [ECX]             ; 0040a742
    MOV dword ptr [ESP + 0x298],EAX     ; 0040a744
    MOV EAX,dword ptr [ECX + 0x4]       ; 0040a74b
    MOV dword ptr [ESP + 0x29c],EAX     ; 0040a74e
    MOV EAX,dword ptr [ECX + 0x8]       ; 0040a755
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0040a758
    LEA EAX,[ESP + 0x2ec]               ; 0040a75f
        ;   Label: LAB_0040a75f
    FLD float ptr [ESP + 0x29c]         ; 0040a766
    PUSH EAX                            ; 0040a76d
    LEA EAX,[ESP + 0x29c]               ; 0040a76e
    MOV ESI,dword ptr [0x00603b28]      ; 0040a775 | DAT_00603b28
    PUSH EAX                            ; 0040a77b
    FADD float ptr [0x005b5689]         ; 0040a77c | DAT_005b5689
    PUSH ESI                            ; 0040a782 | DAT_01ed78c8
    FSTP float ptr [ESP + 0x2a8]        ; 0040a783
    CALL FUN_0053ccc0                   ; 0040a78a
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ccc0()
    MOV dword ptr [ESP + 0x39c],EAX     ; 0040a78f
    FLD float ptr [ESP + 0x39c]         ; 0040a796
    ADD ESP,0xc                         ; 0040a79d
    FSTP float ptr [ESP + 0x18]         ; 0040a7a0
    FLD float ptr [ESP + 0x18]          ; 0040a7a4
        ;   Label: LAB_0040a7a4
    FLDZ                                ; 0040a7a8
    FXCH                                ; 0040a7aa
    FSTP double ptr [ESP + 0x10]        ; 0040a7ac
    FCOMP double ptr [ESP + 0x10]       ; 0040a7b0
    FNSTSW AX                           ; 0040a7b4
    SAHF                                ; 0040a7b6
    JA 0x0040a672                       ; 0040a7b7
        ;   XREF to: 0040a672 (CONDITIONAL_JUMP)  ; LAB_0040a672
    FLD1                                ; 0040a7bd
    FCOMP double ptr [ESP + 0x10]       ; 0040a7bf
    FNSTSW AX                           ; 0040a7c3
    SAHF                                ; 0040a7c5
    JC 0x0040a672                       ; 0040a7c6
        ;   XREF to: 0040a672 (CONDITIONAL_JUMP)  ; LAB_0040a672
    MOV EDI,dword ptr [0x007e2cec]      ; 0040a7cc | DAT_007e2cec
    MOV EAX,[0x00603b28]                ; 0040a7d2 | DAT_00603b28
    PUSH EDI                            ; 0040a7d7
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a7d8 | DAT_02024a0c
    PUSH EDX                            ; 0040a7de
    CALL FUN_0040c840                   ; 0040a7df
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040a7e4
    MOV dword ptr [ESP + 0x388],EAX     ; 0040a7e7
    TEST EAX,EAX                        ; 0040a7ee
    JZ 0x0040a80f                       ; 0040a7f0
        ;   XREF to: 0040a80f (CONDITIONAL_JUMP)  ; LAB_0040a80f
    PUSH EAX                            ; 0040a7f2
    MOV ESI,dword ptr [EAX + 0x154]     ; 0040a7f3
    CALL dword ptr [ESI + 0x10c]        ; 0040a7f9
    ADD ESP,0x4                         ; 0040a7ff
    TEST EAX,EAX                        ; 0040a802
    JLE 0x0040a80f                      ; 0040a804
        ;   XREF to: 0040a80f (CONDITIONAL_JUMP)  ; LAB_0040a80f
    XOR ECX,ECX                         ; 0040a806
    MOV dword ptr [ESP + 0x388],ECX     ; 0040a808
    MOV ESI,dword ptr [0x01d22e04]      ; 0040a80f | DAT_01d22e04
        ;   Label: LAB_0040a80f
    MOV EAX,[0x00603b28]                ; 0040a815 | DAT_00603b28
    PUSH ESI                            ; 0040a81a
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0040a81b | DAT_02024a0c
    PUSH EDI                            ; 0040a821
    CALL FUN_0040c840                   ; 0040a822
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040a827
    MOV ESI,EAX                         ; 0040a82a
    MOV EAX,[0x02cfd894]                ; 0040a82c | DAT_02cfd894
    PUSH EAX                            ; 0040a831
    MOV EAX,[0x00603b28]                ; 0040a832 | DAT_00603b28
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a837 | DAT_02024a0c
    PUSH EDX                            ; 0040a83d
    CALL FUN_0040c840                   ; 0040a83e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV ECX,dword ptr [0x007f8fc8]      ; 0040a843 | DAT_007f8fc8
    ADD ESP,0x8                         ; 0040a849
    MOV EDI,EAX                         ; 0040a84c
    MOV dword ptr [ESP + 0x368],EAX     ; 0040a84e
    MOV EAX,[0x00603b28]                ; 0040a855 | DAT_00603b28
    PUSH ECX                            ; 0040a85a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a85b | DAT_02024a0c
    PUSH EDX                            ; 0040a861
    CALL FUN_0040c840                   ; 0040a862
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV dword ptr [ESP + 0x374],EAX     ; 0040a867
    ADD ESP,0x8                         ; 0040a86e
    MOV ECX,dword ptr [0x01d0cf60]      ; 0040a871 | DAT_01d0cf60
    MOV EAX,[0x00603b28]                ; 0040a877 | DAT_00603b28
    PUSH ECX                            ; 0040a87c
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a87d | DAT_02024a0c
    PUSH EDX                            ; 0040a883
    CALL FUN_0040c840                   ; 0040a884
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040a889
    MOV ECX,dword ptr [ESP + 0x388]     ; 0040a88c
    TEST ECX,ECX                        ; 0040a893
    JZ 0x0040ab29                       ; 0040a895
        ;   XREF to: 0040ab29 (CONDITIONAL_JUMP)  ; LAB_0040ab29
    MOV ESI,dword ptr [ESP + 0x384]     ; 0040a89b
    TEST ESI,ESI                        ; 0040a8a2
    JNZ 0x0040aaf6                      ; 0040a8a4
        ;   XREF to: 0040aaf6 (CONDITIONAL_JUMP)  ; LAB_0040aaf6
    LEA EAX,[ESP + 0x10c]               ; 0040a8aa
        ;   Label: LAB_0040a8aa
    PUSH EAX                            ; 0040a8b1
    CALL FUN_0042abb0                   ; 0040a8b2
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040a8b7
    MOV EDX,dword ptr [ESP + 0x388]     ; 0040a8ba
    MOV EAX,[0x00603b28]                ; 0040a8c1 | DAT_00603b28
    PUSH EDX                            ; 0040a8c6
    LEA EDX,[ESP + 0x110]               ; 0040a8c7
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0040a8ce | DAT_02024a10
    PUSH EDX                            ; 0040a8d4
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a8d5
    MOV dword ptr [ESP + 0x114],EAX     ; 0040a8d8
    PUSH ECX                            ; 0040a8df
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a8e0
    PUSH EBX                            ; 0040a8e6
    CALL dword ptr [EAX + 0x7c]         ; 0040a8e7
    MOV EDX,dword ptr [0x00603b28]      ; 0040a8ea | DAT_00603b28
    LEA EDI,[ESP + 0x23c]               ; 0040a8f0
    LEA EAX,[EDX + 0x14d11c]            ; 0040a8f7
    LEA ESI,[ESP + 0x26c]               ; 0040a8fd
    ADD ESP,0x10                        ; 0040a904
    FLD float ptr [EAX]                 ; 0040a907 | DAT_020249e4
    FLD float ptr [EAX + 0x4]           ; 0040a909 | DAT_020249e8
    FLD float ptr [EAX + 0x8]           ; 0040a90c | DAT_020249ec
    FXCH ST2                            ; 0040a90f
    FSUB float ptr [EDX + 0x14d110]     ; 0040a911 | DAT_020249d8
    FXCH                                ; 0040a917
    FSUB float ptr [EDX + 0x14d114]     ; 0040a919 | DAT_020249dc
    FXCH ST2                            ; 0040a91f
    FSUB float ptr [EDX + 0x14d118]     ; 0040a921 | DAT_020249e0
    FXCH                                ; 0040a927
    FSTP float ptr [ESP + 0x25c]        ; 0040a929
    FXCH                                ; 0040a930
    FSTP float ptr [ESP + 0x260]        ; 0040a932
    FSTP float ptr [ESP + 0x264]        ; 0040a939
    MOVSD ES:EDI,ESI                    ; 0040a940
    MOVSD ES:EDI,ESI                    ; 0040a941
    MOVSD ES:EDI,ESI                    ; 0040a942
    FLD float ptr [ESP + 0x230]         ; 0040a943
    FMUL ST0                            ; 0040a94a
    FLD float ptr [ESP + 0x22c]         ; 0040a94c
    FMUL ST0                            ; 0040a953
    FADDP                               ; 0040a955
    FLD float ptr [ESP + 0x234]         ; 0040a957
    FMUL ST0                            ; 0040a95e
    FADDP                               ; 0040a960
    FSQRT                               ; 0040a962
    FDIVR double ptr [0x005b5681]       ; 0040a964 | DAT_005b5681
    FLD float ptr [ESP + 0x22c]         ; 0040a96a
    FXCH                                ; 0040a971
    FSTP float ptr [ESP + 0x35c]        ; 0040a973
    FMUL float ptr [ESP + 0x35c]        ; 0040a97a
    FLD float ptr [ESP + 0x230]         ; 0040a981
    FMUL float ptr [ESP + 0x35c]        ; 0040a988
    FLD float ptr [ESP + 0x234]         ; 0040a98f
    FMUL float ptr [ESP + 0x35c]        ; 0040a996
    LEA EDX,[ESP + 0x118]               ; 0040a99d
    LEA EDI,[ESP + 0x310]               ; 0040a9a4
    LEA ESI,[ESP + 0x340]               ; 0040a9ab
    LEA EAX,[ESP + 0x310]               ; 0040a9b2
    FXCH ST2                            ; 0040a9b9
    FSTP float ptr [ESP + 0x340]        ; 0040a9bb
    FSTP float ptr [ESP + 0x344]        ; 0040a9c2
    FSTP float ptr [ESP + 0x348]        ; 0040a9c9
    MOVSD ES:EDI,ESI                    ; 0040a9d0
    MOVSD ES:EDI,ESI                    ; 0040a9d1
    MOVSD ES:EDI,ESI                    ; 0040a9d2
    CMP EDX,EAX                         ; 0040a9d3
    JZ 0x0040aa01                       ; 0040a9d5
        ;   XREF to: 0040aa01 (CONDITIONAL_JUMP)  ; LAB_0040aa01
    MOV EAX,dword ptr [ESP + 0x310]     ; 0040a9d7
    MOV dword ptr [ESP + 0x118],EAX     ; 0040a9de
    MOV EAX,dword ptr [ESP + 0x314]     ; 0040a9e5
    MOV dword ptr [ESP + 0x11c],EAX     ; 0040a9ec
    MOV EAX,dword ptr [ESP + 0x318]     ; 0040a9f3
    MOV dword ptr [ESP + 0x120],EAX     ; 0040a9fa
    MOV EAX,[0x00603b28]                ; 0040aa01 | DAT_00603b28
        ;   Label: LAB_0040aa01
    ADD EAX,0x14d138                    ; 0040aa06
    PUSH EAX                            ; 0040aa0b | DAT_02024a00
    MOV ESI,dword ptr [ESP + 0x38c]     ; 0040aa0c
    PUSH ESI                            ; 0040aa13
    LEA ESI,[ESP + 0x33c]               ; 0040aa14
    LEA EDI,[ESP + 0x294]               ; 0040aa1b
    CALL FUN_00408bf0                   ; 0040aa22
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x33c]               ; 0040aa27
    LEA EAX,[ESP + 0x294]               ; 0040aa2e
    ADD ESP,0x8                         ; 0040aa35
    LEA EDX,[ESP + 0x128]               ; 0040aa38
    MOVSD ES:EDI,ESI                    ; 0040aa3f
    MOVSD ES:EDI,ESI                    ; 0040aa40
    MOVSD ES:EDI,ESI                    ; 0040aa41
    CMP EDX,EAX                         ; 0040aa42
    JZ 0x0040aa70                       ; 0040aa44
        ;   XREF to: 0040aa70 (CONDITIONAL_JUMP)  ; LAB_0040aa70
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0040aa46
    MOV dword ptr [ESP + 0x128],EAX     ; 0040aa4d
    MOV EAX,dword ptr [ESP + 0x290]     ; 0040aa54
    MOV dword ptr [ESP + 0x12c],EAX     ; 0040aa5b
    MOV EAX,dword ptr [ESP + 0x294]     ; 0040aa62
    MOV dword ptr [ESP + 0x130],EAX     ; 0040aa69
    LEA EDX,[ESP + 0x10c]               ; 0040aa70
        ;   Label: LAB_0040aa70
    MOV EAX,dword ptr [ESP + 0x388]     ; 0040aa77
    PUSH EDX                            ; 0040aa7e
    MOV EDI,dword ptr [ESP + 0x38c]     ; 0040aa7f
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040aa86
    PUSH EDI                            ; 0040aa8c
    CALL dword ptr [EAX + 0x108]        ; 0040aa8d
    ADD ESP,0x8                         ; 0040aa93
    MOV EAX,0x1                         ; 0040aa96
    PUSH EDI                            ; 0040aa9b
    MOV dword ptr [ESP + 0x368],EAX     ; 0040aa9c
    LEA EAX,[ESP + 0x110]               ; 0040aaa3
    PUSH EAX                            ; 0040aaaa
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040aaab
    PUSH ESI                            ; 0040aaae
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040aaaf
    PUSH EBX                            ; 0040aab5
    CALL dword ptr [EDX + 0x80]         ; 0040aab6
    ADD ESP,0x10                        ; 0040aabc
    MOV EAX,dword ptr [ESP + 0x364]     ; 0040aabf
    MOV ESP,EBP                         ; 0040aac6
    POP EBP                             ; 0040aac8
    POP EDI                             ; 0040aac9
    POP ESI                             ; 0040aaca
    POP EBX                             ; 0040aacb
    RET                                 ; 0040aacc
    PUSH ECX                            ; 0040aacd
        ;   Label: LAB_0040aacd
    MOV EDI,dword ptr [0x00603b28]      ; 0040aace | DAT_00603b28
    PUSH EDI                            ; 0040aad4 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 0040aad5
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 0040aada
    JMP 0x0040a6bd                      ; 0040aadd
        ;   XREF to: 0040a6bd (UNCONDITIONAL_JUMP)  ; LAB_0040a6bd
    FLD1                                ; 0040aae2
        ;   Label: LAB_0040aae2
    FCOMP double ptr [ESP + 0x8]        ; 0040aae4
    FNSTSW AX                           ; 0040aae8
    SAHF                                ; 0040aaea
    JC 0x0040a730                       ; 0040aaeb
        ;   XREF to: 0040a730 (CONDITIONAL_JUMP)  ; LAB_0040a730
    JMP 0x0040a7a4                      ; 0040aaf1
        ;   XREF to: 0040a7a4 (UNCONDITIONAL_JUMP)  ; LAB_0040a7a4
    PUSH ECX                            ; 0040aaf6
        ;   Label: LAB_0040aaf6
    MOV EAX,dword ptr [ECX + 0x154]     ; 0040aaf7
    CALL dword ptr [EAX + 0xe0]         ; 0040aafd
    ADD ESP,0x4                         ; 0040ab03
    TEST EAX,EAX                        ; 0040ab06
    JZ 0x0040a8aa                       ; 0040ab08
        ;   XREF to: 0040a8aa (CONDITIONAL_JUMP)  ; LAB_0040a8aa
    PUSH 0x5b5654                       ; 0040ab0e | = "CHero"
    PUSH ESI                            ; 0040ab13
    CALL FUN_0040c790                   ; 0040ab14
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040ab19
    TEST EAX,EAX                        ; 0040ab1c
    JNZ 0x0040ac6b                      ; 0040ab1e
        ;   XREF to: 0040ac6b (CONDITIONAL_JUMP)  ; LAB_0040ac6b
    JMP 0x0040a8aa                      ; 0040ab24
        ;   XREF to: 0040a8aa (UNCONDITIONAL_JUMP)  ; LAB_0040a8aa
    TEST ESI,ESI                        ; 0040ab29
        ;   Label: LAB_0040ab29
    JNZ 0x0040ab5a                      ; 0040ab2b
        ;   XREF to: 0040ab5a (CONDITIONAL_JUMP)  ; LAB_0040ab5a
    TEST EDI,EDI                        ; 0040ab2d
    JNZ 0x0040abc2                      ; 0040ab2f
        ;   XREF to: 0040abc2 (CONDITIONAL_JUMP)  ; LAB_0040abc2
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0040ab35
    TEST ESI,ESI                        ; 0040ab3c
    JNZ 0x0040ac62                      ; 0040ab3e
        ;   XREF to: 0040ac62 (CONDITIONAL_JUMP)  ; LAB_0040ac62
    TEST EAX,EAX                        ; 0040ab44
    JZ 0x0040a672                       ; 0040ab46
        ;   XREF to: 0040a672 (CONDITIONAL_JUMP)  ; LAB_0040a672
    PUSH EAX                            ; 0040ab4c
    CALL FUN_004a7110                   ; 0040ab4d
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7110()
    ADD ESP,0x4                         ; 0040ab52
    JMP 0x0040ac6b                      ; 0040ab55
        ;   XREF to: 0040ac6b (UNCONDITIONAL_JUMP)  ; LAB_0040ac6b
    LEA EAX,[ESP + 0x1c]                ; 0040ab5a
        ;   Label: LAB_0040ab5a
    PUSH EAX                            ; 0040ab5e
    CALL FUN_0042abb0                   ; 0040ab5f
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040ab64
    PUSH ESI                            ; 0040ab67
    LEA EAX,[ESP + 0x20]                ; 0040ab68
    PUSH EAX                            ; 0040ab6c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040ab6d
    PUSH EDX                            ; 0040ab70
    MOV EDI,dword ptr [EBX + 0x154]     ; 0040ab71
    PUSH EBX                            ; 0040ab77
    CALL dword ptr [EDI + 0x7c]         ; 0040ab78
    ADD ESP,0x10                        ; 0040ab7b
    PUSH ESI                            ; 0040ab7e
    LEA EAX,[ESP + 0x20]                ; 0040ab7f
    PUSH EAX                            ; 0040ab83
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040ab84
    PUSH ECX                            ; 0040ab87
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040ab88
    PUSH EBX                            ; 0040ab8e
    CALL dword ptr [EDX + 0x80]         ; 0040ab8f
    ADD ESP,0x10                        ; 0040ab95
    PUSH ESI                            ; 0040ab98
    CALL FUN_004cc5d0                   ; 0040ab99
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc5d0()
    ADD ESP,0x4                         ; 0040ab9e
    TEST EAX,EAX                        ; 0040aba1
    JZ 0x0040a672                       ; 0040aba3
        ;   XREF to: 0040a672 (CONDITIONAL_JUMP)  ; LAB_0040a672
    MOV EAX,[0x00603b28]                ; 0040aba9 | DAT_00603b28
    ADD EAX,0x14d138                    ; 0040abae
    PUSH EAX                            ; 0040abb3 | DAT_02024a00
    PUSH ESI                            ; 0040abb4
    CALL FUN_004cc040                   ; 0040abb5
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc040()
    ADD ESP,0x8                         ; 0040abba
    JMP 0x0040ac6b                      ; 0040abbd
        ;   XREF to: 0040ac6b (UNCONDITIONAL_JUMP)  ; LAB_0040ac6b
    PUSH EBX                            ; 0040abc2
        ;   Label: LAB_0040abc2
    PUSH EDI                            ; 0040abc3
    CALL FUN_0056ede0                   ; 0040abc4
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ede0()
    ADD ESP,0x8                         ; 0040abc9
    TEST EAX,EAX                        ; 0040abcc
    JZ 0x0040ac4a                       ; 0040abce
        ;   XREF to: 0040ac4a (CONDITIONAL_JUMP)  ; LAB_0040ac4a
    LEA EAX,[ESP + 0x94]                ; 0040abd0
    PUSH EAX                            ; 0040abd7
    CALL FUN_0042abb0                   ; 0040abd8
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0040abdd
    PUSH EDI                            ; 0040abe0
    LEA EDX,[ESP + 0x98]                ; 0040abe1
    PUSH EDX                            ; 0040abe8
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040abe9
    PUSH EDX                            ; 0040abec
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040abed
    PUSH EBX                            ; 0040abf3
    CALL dword ptr [EAX + 0x7c]         ; 0040abf4
    ADD ESP,0x10                        ; 0040abf7
    PUSH EDI                            ; 0040abfa
    FLD float ptr [ESP + 0x9c]          ; 0040abfb
    SUB ESP,0x8                         ; 0040ac02
    FSTP double ptr [ESP]               ; 0040ac05
    PUSH EBX                            ; 0040ac08
    PUSH 0x5b565a                       ; 0040ac09 | = "%s causing %5.2f damage to %s\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0040ac0e | PTR_DAT_005f1690
    PUSH ECX                            ; 0040ac14 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0040ac15
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x18                        ; 0040ac1a
    PUSH dword ptr [ESP + 0x98]         ; 0040ac1d
    PUSH EDI                            ; 0040ac24
    CALL FUN_0056ee20                   ; 0040ac25
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ee20()
    ADD ESP,0x8                         ; 0040ac2a
    PUSH ESI                            ; 0040ac2d
    LEA EAX,[ESP + 0x98]                ; 0040ac2e
    PUSH EAX                            ; 0040ac35
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040ac36
    PUSH ESI                            ; 0040ac39
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040ac3a
    PUSH EBX                            ; 0040ac40
    CALL dword ptr [EDX + 0x80]         ; 0040ac41
    ADD ESP,0x10                        ; 0040ac47
    MOV EDI,dword ptr [ESP + 0x368]     ; 0040ac4a
        ;   Label: LAB_0040ac4a
    PUSH EDI                            ; 0040ac51
    MOV EAX,[0x00603b28]                ; 0040ac52 | DAT_00603b28
    PUSH EAX                            ; 0040ac57 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 0040ac58
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 0040ac5d
    JMP 0x0040ac6b                      ; 0040ac60
        ;   XREF to: 0040ac6b (UNCONDITIONAL_JUMP)  ; LAB_0040ac6b
    PUSH ESI                            ; 0040ac62
        ;   Label: LAB_0040ac62
    CALL FUN_004461c0                   ; 0040ac63
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004461c0()
    ADD ESP,0x4                         ; 0040ac68
    MOV EDI,dword ptr [ESP + 0x374]     ; 0040ac6b
        ;   Label: LAB_0040ac6b
    INC EDI                             ; 0040ac72
    MOV dword ptr [ESP + 0x374],EDI     ; 0040ac73
    CMP EDI,0x4                         ; 0040ac7a
    JL 0x0040a6d0                       ; 0040ac7d
        ;   XREF to: 0040a6d0 (CONDITIONAL_JUMP)  ; LAB_0040a6d0
    MOV EAX,dword ptr [ESP + 0x364]     ; 0040ac83
    MOV ESP,EBP                         ; 0040ac8a
    POP EBP                             ; 0040ac8c
    POP EDI                             ; 0040ac8d
    POP ESI                             ; 0040ac8e
    POP EBX                             ; 0040ac8f
    RET                                 ; 0040ac90

