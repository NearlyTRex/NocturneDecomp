; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb1e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_005e123c
;   TerminatedCString s_Don_t_know_how_to_carry_005e1251
;   undefined4 DAT_005e1274
;   undefined4 DAT_005e127c
;   undefined4 DAT_005e1284
;   undefined4 DAT_007c5330
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0040c600
;   FUN_005030e0
;   FUN_005b5080
;   FUN_005b5100
;   FUN_005b5200
;   FUN_005b53f0
;   FUN_005b5760
;   FUN_005b5930
;   FUN_005b6e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb1e0
        ;   Label: FUN_004cb1e0
    PUSH EDI                            ; 004cb1e1
    PUSH EBP                            ; 004cb1e2
    MOV EBP,ESP                         ; 004cb1e3
    SUB ESP,0x1dc                       ; 004cb1e5
    AND ESP,0xfffffff8                  ; 004cb1eb
    MOV EBX,ESI                         ; 004cb1ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cb1f0
    SHL EAX,0x3                         ; 004cb1f3
    MOV ESI,EAX                         ; 004cb1f6
    SHL EAX,0x4                         ; 004cb1f8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004cb1fb
    SUB EAX,ESI                         ; 004cb1fe
    ADD EAX,EDX                         ; 004cb200
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 004cb202
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 004cb208
    XOR ECX,ECX                         ; 004cb20e
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004cb210
    MOV dword ptr [ESP + 0x128],ECX     ; 004cb217
    MOV EAX,[0x007c5330]                ; 004cb21e | DAT_007c5330
    MOV dword ptr [ESP + 0x124],ECX     ; 004cb223
    PUSH EAX                            ; 004cb22a
    MOV dword ptr [ESP + 0x124],ECX     ; 004cb22b
    MOV dword ptr [ESP + 0x144],ECX     ; 004cb232
    PUSH ESI                            ; 004cb239
    MOV dword ptr [ESP + 0x144],ECX     ; 004cb23a
    MOV dword ptr [ESP + 0x140],ECX     ; 004cb241
    CALL FUN_0040c600                   ; 004cb248
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004cb24d
    MOV dword ptr [ESP + 0x1d8],EAX     ; 004cb250
    TEST EAX,EAX                        ; 004cb257
    JNZ 0x004cb3eb                      ; 004cb259
        ;   XREF to: 004cb3eb (CONDITIONAL_JUMP)  ; LAB_004cb3eb
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cb25f
        ;   Label: LAB_004cb25f
    TEST EDI,EDI                        ; 004cb262
    JNZ 0x004cb697                      ; 004cb264
        ;   XREF to: 004cb697 (CONDITIONAL_JUMP)  ; LAB_004cb697
    MOV EAX,0xbecccccd                  ; 004cb26a
    LEA ESI,[ESP + 0x1b0]               ; 004cb26f
    MOV dword ptr [ESP + 0x1b4],EDI     ; 004cb276
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004cb27d
    LEA EAX,[ESP + 0x1c8]               ; 004cb284
    MOV dword ptr [ESP + 0x1b8],EDI     ; 004cb28b
    CMP EAX,ESI                         ; 004cb292
    JZ 0x004cb2b0                       ; 004cb294
        ;   XREF to: 004cb2b0 (CONDITIONAL_JUMP)  ; LAB_004cb2b0
    MOV ESI,0xbecccccd                  ; 004cb296
    MOV dword ptr [ESP + 0x1cc],EDI     ; 004cb29b
    MOV dword ptr [ESP + 0x1d0],EDI     ; 004cb2a2
    MOV dword ptr [ESP + 0x1c8],ESI     ; 004cb2a9
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004cb2b0
        ;   Label: LAB_004cb2b0
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb2b7
    SUB EAX,ESI                         ; 004cb2be
    MOV ESI,EAX                         ; 004cb2c0
    MOV EAX,dword ptr [EBP + 0x10]      ; 004cb2c2
    SHL ESI,0x4                         ; 004cb2c5
    ADD EAX,0xfd8                       ; 004cb2c8
    ADD EAX,ESI                         ; 004cb2cd
    PUSH EAX                            ; 004cb2cf
    LEA EAX,[ESP + 0x1cc]               ; 004cb2d0
    PUSH EAX                            ; 004cb2d7
    CALL FUN_005b5100                   ; 004cb2d8
        ;   XREF to: 005b5100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5100()
    ADD ESP,0x8                         ; 004cb2dd
    LEA EAX,[ESP + 0x120]               ; 004cb2e0
    PUSH EAX                            ; 004cb2e7
    LEA EAX,[ESP + 0x1cc]               ; 004cb2e8
    PUSH EAX                            ; 004cb2ef
    LEA EAX,[ESP + 0x98]                ; 004cb2f0
    PUSH EAX                            ; 004cb2f7
    CALL FUN_005b5760                   ; 004cb2f8
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 004cb2fd
    LEA EAX,[ESP + 0x90]                ; 004cb300
    PUSH EAX                            ; 004cb307
    LEA EAX,[ESP + 0x13c]               ; 004cb308
    PUSH EAX                            ; 004cb30f
    LEA ESI,[ESP + 0x1ac]               ; 004cb310
    LEA EDI,[ESP + 0x158]               ; 004cb317
    CALL FUN_005b5080                   ; 004cb31e
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[ESP + 0x1ac]               ; 004cb323
    ADD ESP,0x8                         ; 004cb32a
    MOV ECX,0xc                         ; 004cb32d
    FLD float ptr [ESP + 0x1c8]         ; 004cb332
    FLD float ptr [ESP + 0x1cc]         ; 004cb339
    FLD float ptr [ESP + 0x1d0]         ; 004cb340
    FLD float ptr [ESP + 0x9c]          ; 004cb347
    MOVSD ES:EDI,ESI                    ; 004cb34e
    MOVSD ES:EDI,ESI                    ; 004cb34f
    MOVSD ES:EDI,ESI                    ; 004cb350
    FLD float ptr [ESP + 0xac]          ; 004cb351
    LEA EDI,[ESP + 0x15c]               ; 004cb358
    LEA ESI,[ESP + 0x1bc]               ; 004cb35f
    FXCH ST4                            ; 004cb366
    FSUB float ptr [ESP + 0x150]        ; 004cb368
    FXCH ST3                            ; 004cb36f
    FSUB float ptr [ESP + 0x154]        ; 004cb371
    FXCH ST2                            ; 004cb378
    FSUB float ptr [ESP + 0x158]        ; 004cb37a
    FXCH ST3                            ; 004cb381
    FSTP float ptr [ESP + 0x1bc]        ; 004cb383
    FXCH                                ; 004cb38a
    FSTP float ptr [ESP + 0x1c0]        ; 004cb38c
    FXCH                                ; 004cb393
    FSTP float ptr [ESP + 0x1c4]        ; 004cb395
    MOVSD ES:EDI,ESI                    ; 004cb39c
    MOVSD ES:EDI,ESI                    ; 004cb39d
    MOVSD ES:EDI,ESI                    ; 004cb39e
    FLD float ptr [ESP + 0xbc]          ; 004cb39f
    LEA ESI,[ESP + 0x90]                ; 004cb3a6
    MOV EDI,EBX                         ; 004cb3ad
    FXCH                                ; 004cb3af
    FADD float ptr [ESP + 0x15c]        ; 004cb3b1
    FXCH ST2                            ; 004cb3b8
    FADD float ptr [ESP + 0x160]        ; 004cb3ba
    FXCH                                ; 004cb3c1
    FADD float ptr [ESP + 0x164]        ; 004cb3c3
    FXCH ST2                            ; 004cb3ca
    FSTP float ptr [ESP + 0x9c]         ; 004cb3cc
    FSTP float ptr [ESP + 0xac]         ; 004cb3d3
    FSTP float ptr [ESP + 0xbc]         ; 004cb3da
    MOVSD.REP ES:EDI,ESI                ; 004cb3e1
    MOV EAX,EBX                         ; 004cb3e3
    MOV ESP,EBP                         ; 004cb3e5
    POP EBP                             ; 004cb3e7
    POP EDI                             ; 004cb3e8
    POP EBX                             ; 004cb3e9
    RET                                 ; 004cb3ea
    PUSH ESI                            ; 004cb3eb
        ;   Label: LAB_004cb3eb
    MOV EAX,dword ptr [ESI + 0x154]     ; 004cb3ec
    LEA ESI,[ESP + 0xf4]                ; 004cb3f2
    LEA EDI,[ESP + 0x10c]               ; 004cb3f9
    CALL dword ptr [EAX + 0x1c]         ; 004cb400
    MOV ECX,0x6                         ; 004cb403
    LEA ESI,[ESP + 0xf4]                ; 004cb408
    ADD ESP,0x4                         ; 004cb40f
    MOVSD.REP ES:EDI,ESI                ; 004cb412
    FLD float ptr [ESP + 0x108]         ; 004cb414
    FLD float ptr [ESP + 0x10c]         ; 004cb41b
    FLD float ptr [ESP + 0x110]         ; 004cb422
    LEA EDI,[ESP + 0x180]               ; 004cb429
    LEA ESI,[ESP + 0x18c]               ; 004cb430
    FXCH ST2                            ; 004cb437
    FADD float ptr [ESP + 0x114]        ; 004cb439
    FXCH                                ; 004cb440
    FADD float ptr [ESP + 0x118]        ; 004cb442
    FXCH ST2                            ; 004cb449
    FADD float ptr [ESP + 0x11c]        ; 004cb44b
    FXCH                                ; 004cb452
    FSTP float ptr [ESP + 0x18c]        ; 004cb454
    FXCH                                ; 004cb45b
    FSTP float ptr [ESP + 0x190]        ; 004cb45d
    FSTP float ptr [ESP + 0x194]        ; 004cb464
    MOVSD ES:EDI,ESI                    ; 004cb46b
    MOVSD ES:EDI,ESI                    ; 004cb46c
    MOVSD ES:EDI,ESI                    ; 004cb46d
    FLD float ptr [0x005e1274]          ; 004cb46e | DAT_005e1274
    FLD float ptr [ESP + 0x180]         ; 004cb474
    FMUL ST1                            ; 004cb47b
    FLD float ptr [ESP + 0x184]         ; 004cb47d
    FMUL ST2                            ; 004cb484
    FLD float ptr [ESP + 0x188]         ; 004cb486
    FMULP ST3                           ; 004cb48d
    LEA EDI,[ESP + 0x198]               ; 004cb48f
    LEA ESI,[ESP + 0x174]               ; 004cb496
    FXCH                                ; 004cb49d
    FSTP float ptr [ESP + 0x174]        ; 004cb49f
    FSTP float ptr [ESP + 0x178]        ; 004cb4a6
    FSTP float ptr [ESP + 0x17c]        ; 004cb4ad
    MOVSD ES:EDI,ESI                    ; 004cb4b4
    MOVSD ES:EDI,ESI                    ; 004cb4b5
    MOVSD ES:EDI,ESI                    ; 004cb4b6
    LEA EAX,[ESP + 0x198]               ; 004cb4b7
    LEA ESI,[ESP + 0x138]               ; 004cb4be
    CMP ESI,EAX                         ; 004cb4c5
    JZ 0x004cb4f3                       ; 004cb4c7
        ;   XREF to: 004cb4f3 (CONDITIONAL_JUMP)  ; LAB_004cb4f3
    MOV EAX,dword ptr [ESP + 0x198]     ; 004cb4c9
    MOV dword ptr [ESP + 0x138],EAX     ; 004cb4d0
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004cb4d7
    MOV dword ptr [ESP + 0x13c],EAX     ; 004cb4de
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004cb4e5
    MOV dword ptr [ESP + 0x140],EAX     ; 004cb4ec
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004cb4f3
        ;   Label: LAB_004cb4f3
    MOV EDX,dword ptr [EAX + 0x678]     ; 004cb4fa
    CMP EDX,0x2                         ; 004cb500
    JNZ 0x004cb518                      ; 004cb503
        ;   XREF to: 004cb518 (CONDITIONAL_JUMP)  ; LAB_004cb518
    MOV EAX,dword ptr [ESP + 0x118]     ; 004cb505
    MOV dword ptr [ESP + 0x13c],EAX     ; 004cb50c
    JMP 0x004cb25f                      ; 004cb513
        ;   XREF to: 004cb25f (UNCONDITIONAL_JUMP)  ; LAB_004cb25f
    CMP EDX,0x1                         ; 004cb518
        ;   Label: LAB_004cb518
    JNZ 0x004cb650                      ; 004cb51b
        ;   XREF to: 004cb650 (CONDITIONAL_JUMP)  ; LAB_004cb650
    MOV ECX,dword ptr [EBP + 0x14]      ; 004cb521
    TEST ECX,ECX                        ; 004cb524
    JNZ 0x004cb61a                      ; 004cb526
        ;   XREF to: 004cb61a (CONDITIONAL_JUMP)  ; LAB_004cb61a
    PUSH 0xbfc90fdb                     ; 004cb52c
    LEA ESI,[ESP + 0x34]                ; 004cb531
    LEA EDI,[ESP + 0x64]                ; 004cb535
    CALL FUN_005b6e10                   ; 004cb539
        ;   XREF to: 005b6e10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e10()
    MOV ECX,0xc                         ; 004cb53e
    LEA ESI,[ESP + 0x34]                ; 004cb543
    ADD ESP,0x4                         ; 004cb547
        ;   Label: LAB_004cb547
    MOVSD.REP ES:EDI,ESI                ; 004cb54a
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004cb54c
        ;   Label: LAB_004cb54c
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb553
    SUB EAX,ESI                         ; 004cb55a
    MOV ESI,dword ptr [EBP + 0x10]      ; 004cb55c
    SHL EAX,0x4                         ; 004cb55f
    ADD ESI,0xfd8                       ; 004cb562
    ADD EAX,ESI                         ; 004cb568
    PUSH EAX                            ; 004cb56a
    LEA EAX,[ESP + 0x64]                ; 004cb56b
    PUSH EAX                            ; 004cb56f
    LEA ESI,[ESP + 0xc8]                ; 004cb570
    LEA EDI,[ESP + 0x68]                ; 004cb577
    CALL FUN_005b5200                   ; 004cb57b
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 004cb580
    LEA ESI,[ESP + 0xc8]                ; 004cb585
    ADD ESP,0x8                         ; 004cb58c
    LEA EAX,[ESP + 0x60]                ; 004cb58f
    MOVSD.REP ES:EDI,ESI                ; 004cb593
    PUSH EAX                            ; 004cb595
    LEA ESI,[ESP + 0x130]               ; 004cb596
    LEA EDI,[ESP + 0x16c]               ; 004cb59d
    CALL FUN_005b5930                   ; 004cb5a4
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[ESP + 0x130]               ; 004cb5a9
    ADD ESP,0x4                         ; 004cb5b0
    MOVSD ES:EDI,ESI                    ; 004cb5b3
    MOVSD ES:EDI,ESI                    ; 004cb5b4
    MOVSD ES:EDI,ESI                    ; 004cb5b5
    LEA EAX,[ESP + 0x168]               ; 004cb5b6
    LEA ESI,[ESP + 0x120]               ; 004cb5bd
    CMP ESI,EAX                         ; 004cb5c4
    JZ 0x004cb5f2                       ; 004cb5c6
        ;   XREF to: 004cb5f2 (CONDITIONAL_JUMP)  ; LAB_004cb5f2
    MOV EAX,dword ptr [ESP + 0x168]     ; 004cb5c8
    MOV dword ptr [ESP + 0x120],EAX     ; 004cb5cf
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004cb5d6
    MOV dword ptr [ESP + 0x124],EAX     ; 004cb5dd
    MOV EAX,dword ptr [ESP + 0x170]     ; 004cb5e4
    MOV dword ptr [ESP + 0x128],EAX     ; 004cb5eb
    FLD float ptr [ESP + 0x110]         ; 004cb5f2
        ;   Label: LAB_004cb5f2
    FMUL double ptr [0x005e127c]        ; 004cb5f9 | DAT_005e127c
    FLD float ptr [ESP + 0x11c]         ; 004cb5ff
    FMUL double ptr [0x005e1284]        ; 004cb606 | DAT_005e1284
    FADDP                               ; 004cb60c
    FSTP float ptr [ESP + 0x140]        ; 004cb60e
    JMP 0x004cb25f                      ; 004cb615
        ;   XREF to: 004cb25f (UNCONDITIONAL_JUMP)  ; LAB_004cb25f
    CMP ECX,EDX                         ; 004cb61a
        ;   Label: LAB_004cb61a
    JNZ 0x004cb63e                      ; 004cb61c
        ;   XREF to: 004cb63e (CONDITIONAL_JUMP)  ; LAB_004cb63e
    PUSH 0x3fc90fdb                     ; 004cb61e
    LEA ESI,[ESP + 0x4]                 ; 004cb623
    LEA EDI,[ESP + 0x64]                ; 004cb627
    CALL FUN_005b6e10                   ; 004cb62b
        ;   XREF to: 005b6e10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e10()
    MOV ECX,0xc                         ; 004cb630
    LEA ESI,[ESP + 0x4]                 ; 004cb635
    JMP 0x004cb547                      ; 004cb639
        ;   XREF to: 004cb547 (UNCONDITIONAL_JUMP)  ; LAB_004cb547
    LEA EAX,[ESP + 0x60]                ; 004cb63e
        ;   Label: LAB_004cb63e
    PUSH EAX                            ; 004cb642
    CALL FUN_005b53f0                   ; 004cb643
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b53f0()
    ADD ESP,0x4                         ; 004cb648
    JMP 0x004cb54c                      ; 004cb64b
        ;   XREF to: 004cb54c (UNCONDITIONAL_JUMP)  ; LAB_004cb54c
    CMP EDX,0x3                         ; 004cb650
        ;   Label: LAB_004cb650
    JNZ 0x004cb668                      ; 004cb653
        ;   XREF to: 004cb668 (CONDITIONAL_JUMP)  ; LAB_004cb668
    MOV EAX,dword ptr [ESP + 0x118]     ; 004cb655
    MOV dword ptr [ESP + 0x13c],EAX     ; 004cb65c
    JMP 0x004cb25f                      ; 004cb663
        ;   XREF to: 004cb25f (UNCONDITIONAL_JUMP)  ; LAB_004cb25f
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 004cb668
        ;   Label: LAB_004cb668
    PUSH EDX                            ; 004cb66f
    MOV EDI,0x5e123c                    ; 004cb670 | = "..\\core\\gabriela.cpp"
    MOV EAX,0x944                       ; 004cb675
    PUSH 0x5e1251                       ; 004cb67a | = "Don't know how to carry light %s"
    MOV dword ptr [0x01d1d400],EDI      ; 004cb67f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004cb685 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004cb68a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 004cb68f
    JMP 0x004cb25f                      ; 004cb692
        ;   XREF to: 004cb25f (UNCONDITIONAL_JUMP)  ; LAB_004cb25f
    CMP EDI,0x1                         ; 004cb697
        ;   Label: LAB_004cb697
    JNZ 0x004cb6ea                      ; 004cb69a
        ;   XREF to: 004cb6ea (CONDITIONAL_JUMP)  ; LAB_004cb6ea
    MOV EDI,0x3ecccccd                  ; 004cb69c
    XOR EAX,EAX                         ; 004cb6a1
    LEA ESI,[ESP + 0x1c8]               ; 004cb6a3
    MOV dword ptr [ESP + 0x148],EAX     ; 004cb6aa
    MOV dword ptr [ESP + 0x14c],EAX     ; 004cb6b1
    LEA EAX,[ESP + 0x144]               ; 004cb6b8
    MOV dword ptr [ESP + 0x144],EDI     ; 004cb6bf
    CMP ESI,EAX                         ; 004cb6c6
    JZ 0x004cb2b0                       ; 004cb6c8
        ;   XREF to: 004cb2b0 (CONDITIONAL_JUMP)  ; LAB_004cb2b0
    XOR ESI,ESI                         ; 004cb6ce
    MOV dword ptr [ESP + 0x1c8],EDI     ; 004cb6d0
    MOV dword ptr [ESP + 0x1cc],ESI     ; 004cb6d7
    MOV dword ptr [ESP + 0x1d0],ESI     ; 004cb6de
    JMP 0x004cb2b0                      ; 004cb6e5
        ;   XREF to: 004cb2b0 (UNCONDITIONAL_JUMP)  ; LAB_004cb2b0
    XOR EDX,EDX                         ; 004cb6ea
        ;   Label: LAB_004cb6ea
    MOV dword ptr [ESP + 0x1cc],EDX     ; 004cb6ec
    MOV dword ptr [ESP + 0x1c8],EDX     ; 004cb6f3
    MOV dword ptr [ESP + 0x1d0],EDX     ; 004cb6fa
    JMP 0x004cb2b0                      ; 004cb701
        ;   XREF to: 004cb2b0 (UNCONDITIONAL_JUMP)  ; LAB_004cb2b0

