; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c02a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x154c]:4  local_154c
; undefined1       Stack[-0x54d]:1  local_54d
; undefined        Stack[-0x54c]:1  local_54c
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
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
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_004bfee0 at 004c00d7
;   FUN_004ea280 at 004ea46e
;
; Referenced Globals:
;   TerminatedCString s_stats_005c3b88
;   undefined4 DAT_005c3b8e
;   TerminatedCString s_credits_txt_005c3b91
;   undefined4 DAT_005c3b9d
;   undefined4 DAT_005c3ba2
;   TerminatedCString s_core_game_cpp_005c3ba7
;   TerminatedCString s_CGame_rollCredits_Out_of_005c3bb8
;   undefined4 DAT_005c3bdc
;   undefined4 DAT_00600284
;   undefined4 DAT_01549aa8
;   undefined4 DAT_01d70a78
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01dd4890
;
; Called Functions:
;   FUN_004031c0
;   FUN_004032b0
;   FUN_00406bf0
;   FUN_0040d2e0
;   FUN_0040d300
;   FUN_0040d460
;   FUN_004659c0
;   FUN_004b0cb0
;   FUN_004b0fa0
;   FUN_004b30f0
;   FUN_004b4430
;   FUN_004b4440
;   FUN_004e4330
;   FUN_00558050
;   FUN_00560d70
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c02a0
        ;   Label: FUN_004c02a0
    PUSH EBP                            ; 004c02a1
    SUB ESP,0x1544                      ; 004c02a2
    XOR EDX,EDX                         ; 004c02a8
    MOV ECX,0x43f00000                  ; 004c02aa
    MOV dword ptr [ESP + 0x152c],EDX    ; 004c02af
    MOV dword ptr [ESP + 0x1514],ECX    ; 004c02b6
    CALL FUN_004032b0                   ; 004c02bd
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    XOR EAX,EAX                         ; 004c02c2
    ADD EAX,0x4                         ; 004c02c4
        ;   Label: LAB_004c02c4
    XOR EBX,EBX                         ; 004c02c7
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX ; 004c02c9
    CMP EAX,0x1000                      ; 004c02cd
    JNZ 0x004c02c4                      ; 004c02d2
        ;   XREF to: 004c02c4 (CONDITIONAL_JUMP)  ; LAB_004c02c4
    LEA EAX,[ESP + 0x1500]              ; 004c02d4
    PUSH EAX                            ; 004c02db
    CALL FUN_0040d2e0                   ; 004c02dc
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004c02e1
    PUSH 0x1e0                          ; 004c02e4
    PUSH 0x280                          ; 004c02e9
    PUSH 0x5c3b88                       ; 004c02ee | = "stats"
    LEA EAX,[ESP + 0x150c]              ; 004c02f3
    PUSH EAX                            ; 004c02fa
    CALL FUN_0040d460                   ; 004c02fb
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004c0300
    PUSH 0x5c3b8e                       ; 004c0303 | DAT_005c3b8e
    PUSH 0x5c3b91                       ; 004c0308 | = "credits.txt"
    PUSH 0x5c3b9d                       ; 004c030d | DAT_005c3b9d
    CALL FUN_004659c0                   ; 004c0312
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004c0317
    MOV EBX,EAX                         ; 004c031a
    TEST EAX,EAX                        ; 004c031c
    JZ 0x004c060d                       ; 004c031e
        ;   XREF to: 004c060d (CONDITIONAL_JUMP)  ; LAB_004c060d
    PUSH EDI                            ; 004c0324
    PUSH ESI                            ; 004c0325
    MOV EBP,dword ptr [ESP + 0x1534]    ; 004c0326
    SHL EBP,0x2                         ; 004c032d
    TEST byte ptr [EBX + 0xc],0x10      ; 004c0330
        ;   Label: LAB_004c0330
    JNZ 0x004c0342                      ; 004c0334
        ;   XREF to: 004c0342 (CONDITIONAL_JUMP)  ; LAB_004c0342
    CMP EBP,0x1000                      ; 004c0336
    JL 0x004c0627                       ; 004c033c
        ;   XREF to: 004c0627 (CONDITIONAL_JUMP)  ; LAB_004c0627
    PUSH EBX                            ; 004c0342
        ;   Label: LAB_004c0342
    CALL FUN_005a3a90                   ; 004c0343
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004c0348
    CALL FUN_00558050                   ; 004c034b
        ;   XREF to: 00558050 (UNCONDITIONAL_CALL)  ; undefined FUN_00558050()
    CALL FUN_004032b0                   ; 004c0350
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH 0x58                           ; 004c0355
    MOV EAX,[0x01549aa8]                ; 004c0357 | DAT_01549aa8
    PUSH EAX                            ; 004c035c
    MOV dword ptr [ESP + 0x154c],EAX    ; 004c035d
    MOV dword ptr [EAX + 0x4210],0x0    ; 004c0364
    CALL FUN_004b30f0                   ; 004c036e
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 004c0373
    MOV ESI,0xffffffff                  ; 004c0376
    MOV EDI,dword ptr [ESP + 0x1558]    ; 004c037b
    MOV EBX,EAX                         ; 004c0382
    PUSH EDI                            ; 004c0384
    MOV dword ptr [ESP + 0x1524],EAX    ; 004c0385
    MOV dword ptr [ESP + 0x1534],ESI    ; 004c038c
    CALL FUN_004b4430                   ; 004c0393
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4430()
    ADD ESP,0x4                         ; 004c0398
    PUSH 0xffff                         ; 004c039b
    CALL FUN_00406bf0                   ; 004c03a0
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    MOV EAX,0x1df                       ; 004c03a5
    ADD ESP,0x4                         ; 004c03aa
    SUB EAX,EBX                         ; 004c03ad
    MOV dword ptr [ESP + 0x1538],EAX    ; 004c03af
    FLD float ptr [ESP + 0x151c]        ; 004c03b6
        ;   Label: LAB_004c03b6
    MOV EBP,dword ptr [ESP + 0x1530]    ; 004c03bd
    CALL FUN_005a3120                   ; 004c03c4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x1548]      ; 004c03c9
    MOV EAX,dword ptr [ESP + 0x1548]    ; 004c03d0
    CMP EAX,EBP                         ; 004c03d7
    JZ 0x004c058b                       ; 004c03d9
        ;   XREF to: 004c058b (CONDITIONAL_JUMP)  ; LAB_004c058b
    MOV dword ptr [ESP + 0x1530],EAX    ; 004c03df
    CALL FUN_00560d70                   ; 004c03e6
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    XOR EAX,EAX                         ; 004c03eb
    MOV EDX,dword ptr [ESP + 0x1534]    ; 004c03ed
    MOV dword ptr [ESP + 0x153c],EAX    ; 004c03f4
    TEST EDX,EDX                        ; 004c03fb
    JLE 0x004c055b                      ; 004c03fd
        ;   XREF to: 004c055b (CONDITIONAL_JUMP)  ; LAB_004c055b
    MOV dword ptr [ESP + 0x1524],EAX    ; 004c0403
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c040a
    MOV dword ptr [ESP + 0x1540],EAX    ; 004c0411
    MOV dword ptr [ESP + 0x1528],0xf8   ; 004c0418
        ;   Label: LAB_004c0418
    MOV EBP,dword ptr [ESP + 0x1524]    ; 004c0423
    MOV EBP,dword ptr [ESP + EBP*0x1 + 0x8] ; 004c042a
    CMP byte ptr [EBP],0x5c             ; 004c042e
    JNZ 0x004c0448                      ; 004c0432
        ;   XREF to: 004c0448 (CONDITIONAL_JUMP)  ; LAB_004c0448
    CMP byte ptr [EBP + 0x1],0x62       ; 004c0434
    JNZ 0x004c0448                      ; 004c0438
        ;   XREF to: 004c0448 (CONDITIONAL_JUMP)  ; LAB_004c0448
    MOV EAX,0x2                         ; 004c043a
    MOV dword ptr [ESP + 0x1528],EAX    ; 004c043f
    ADD EBP,EAX                         ; 004c0446
    MOV EDX,dword ptr [ESP + 0x1548]    ; 004c0448
        ;   Label: LAB_004c0448
    TEST EDX,EDX                        ; 004c044f
    JL 0x004c0524                       ; 004c0451
        ;   XREF to: 004c0524 (CONDITIONAL_JUMP)  ; LAB_004c0524
    CMP EDX,dword ptr [ESP + 0x1538]    ; 004c0457
    JGE 0x004c0524                      ; 004c045e
        ;   XREF to: 004c0524 (CONDITIONAL_JUMP)  ; LAB_004c0524
    MOV dword ptr [ESP + 0x153c],0x1    ; 004c0464
    CMP byte ptr [EBP],0x5c             ; 004c046f
    JNZ 0x004c0703                      ; 004c0473
        ;   XREF to: 004c0703 (CONDITIONAL_JUMP)  ; LAB_004c0703
    CMP byte ptr [EBP + 0x1],0x31       ; 004c0479
    JNZ 0x004c0703                      ; 004c047d
        ;   XREF to: 004c0703 (CONDITIONAL_JUMP)  ; LAB_004c0703
    ADD EBP,0x2                         ; 004c0483
    MOV EAX,0xffffffff                  ; 004c0486
    MOV EDI,EBP                         ; 004c048b
    MOV dword ptr [ESP + 0x152c],EAX    ; 004c048d
    SUB ECX,ECX                         ; 004c0494
    DEC ECX                             ; 004c0496
    XOR EAX,EAX                         ; 004c0497
    SCASB.REPNE ES:EDI                  ; 004c0499
    NOT ECX                             ; 004c049b
    DEC ECX                             ; 004c049d
    MOV ESI,ECX                         ; 004c049e
    XOR EAX,EAX                         ; 004c04a0
    TEST ECX,ECX                        ; 004c04a2
    JLE 0x004c04b3                      ; 004c04a4
        ;   XREF to: 004c04b3 (CONDITIONAL_JUMP)  ; LAB_004c04b3
    MOV EDX,EBP                         ; 004c04a6
    SUB ECX,0x2                         ; 004c04a8
    CMP EAX,ECX                         ; 004c04ab
        ;   Label: LAB_004c04ab
    JL 0x004c06ec                       ; 004c04ad
        ;   XREF to: 004c06ec (CONDITIONAL_JUMP)  ; LAB_004c06ec
    MOV EDX,dword ptr [ESP + 0x152c]    ; 004c04b3
        ;   Label: LAB_004c04b3
    TEST EDX,EDX                        ; 004c04ba
    JLE 0x004c0524                      ; 004c04bc
        ;   XREF to: 004c0524 (CONDITIONAL_JUMP)  ; LAB_004c0524
    PUSH EDX                            ; 004c04be
    PUSH EBP                            ; 004c04bf
    LEA EAX,[ESP + 0x1010]              ; 004c04c0
    PUSH EAX                            ; 004c04c7
    CALL FUN_005a4ee0                   ; 004c04c8
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 004c04cd
    MOV EAX,dword ptr [ESP + 0x152c]    ; 004c04d0
    ADD EAX,0x2                         ; 004c04d7
    XOR CL,CL                           ; 004c04da
    MOV byte ptr [ESP + EAX*0x1 + 0x1006],CL ; 004c04dc
    ADD EBP,EAX                         ; 004c04e3
    LEA EAX,[ESP + 0x1008]              ; 004c04e5
    PUSH EAX                            ; 004c04ec
    PUSH 0x0                            ; 004c04ed
    MOV EBX,dword ptr [ESP + 0x1530]    ; 004c04ef
    PUSH EBX                            ; 004c04f6
    MOV ESI,dword ptr [ESP + 0x1554]    ; 004c04f7
    PUSH ESI                            ; 004c04fe
    PUSH 0x64                           ; 004c04ff
    MOV EDI,dword ptr [ESP + 0x1558]    ; 004c0501
    PUSH EDI                            ; 004c0508
    CALL FUN_004b0cb0                   ; 004c0509
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004c050e
    PUSH EBP                            ; 004c0511
    PUSH 0x0                            ; 004c0512
    PUSH EBX                            ; 004c0514
    PUSH ESI                            ; 004c0515
    PUSH 0x12c                          ; 004c0516
    PUSH EDI                            ; 004c051b
    CALL FUN_004b0cb0                   ; 004c051c
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004c0521
    MOV EAX,dword ptr [ESP + 0x1520]    ; 004c0524
        ;   Label: LAB_004c0524
    MOV ECX,dword ptr [ESP + 0x1548]    ; 004c052b
    MOV EBX,dword ptr [ESP + 0x1524]    ; 004c0532
    MOV ESI,dword ptr [ESP + 0x1540]    ; 004c0539
    ADD ECX,EAX                         ; 004c0540
    ADD EBX,0x4                         ; 004c0542
    MOV dword ptr [ESP + 0x1548],ECX    ; 004c0545
    MOV dword ptr [ESP + 0x1524],EBX    ; 004c054c
    CMP EBX,ESI                         ; 004c0553
    JL 0x004c0418                       ; 004c0555
        ;   XREF to: 004c0418 (CONDITIONAL_JUMP)  ; LAB_004c0418
    PUSH 0x0                            ; 004c055b
        ;   Label: LAB_004c055b
    PUSH 0x1e                           ; 004c055d
    PUSH 0x27f                          ; 004c055f
    PUSH 0x0                            ; 004c0564
    PUSH 0x0                            ; 004c0566
    CALL FUN_004031c0                   ; 004c0568
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004c056d
    PUSH 0x0                            ; 004c0570
    PUSH 0x1df                          ; 004c0572
    PUSH 0x27f                          ; 004c0577
    PUSH 0x1b7                          ; 004c057c
    PUSH 0x0                            ; 004c0581
    CALL FUN_004031c0                   ; 004c0583
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004c0588
    CALL FUN_0057a8a0                   ; 004c058b
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004c058b
    PUSH 0x1                            ; 004c0590
    MOV EAX,[0x00600284]                ; 004c0592 | DAT_00600284
    PUSH EAX                            ; 004c0597 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004c0598 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004c059a
    ADD ESP,0x8                         ; 004c059c
    TEST EAX,EAX                        ; 004c059f
    JZ 0x004c0732                       ; 004c05a1
        ;   XREF to: 004c0732 (CONDITIONAL_JUMP)  ; LAB_004c0732
    CMP dword ptr [0x01dd4890],0x0      ; 004c05a7 | DAT_01dd4890
    JZ 0x004c05c1                       ; 004c05ae
        ;   XREF to: 004c05c1 (CONDITIONAL_JUMP)  ; LAB_004c05c1
    MOV EAX,dword ptr [ESP + 0x1544]    ; 004c05b0
    MOV dword ptr [EAX + 0x4210],0x1    ; 004c05b7
    CALL FUN_004032b0                   ; 004c05c1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_004c05c1
    MOV EAX,dword ptr [ESP + 0x1534]    ; 004c05c6
    TEST EAX,EAX                        ; 004c05cd
    JLE 0x004c05f0                      ; 004c05cf
        ;   XREF to: 004c05f0 (CONDITIONAL_JUMP)  ; LAB_004c05f0
    LEA EBX,[EAX*0x4 + 0x0]             ; 004c05d1
    XOR ESI,ESI                         ; 004c05d8
    MOV EDX,dword ptr [ESP + ESI*0x1 + 0x8] ; 004c05da
        ;   Label: LAB_004c05da
    PUSH EDX                            ; 004c05de
    ADD ESI,0x4                         ; 004c05df
    CALL FUN_005a3770                   ; 004c05e2
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 004c05e7
    CMP ESI,EBX                         ; 004c05ea
    JL 0x004c05da                       ; 004c05ec
        ;   XREF to: 004c05da (CONDITIONAL_JUMP)  ; LAB_004c05da
    MOV EAX,EAX                         ; 004c05ee
    PUSH 0x0                            ; 004c05f0
        ;   Label: LAB_004c05f0
    LEA EAX,[ESP + 0x150c]              ; 004c05f2
    PUSH EAX                            ; 004c05f9
    CALL FUN_0040d300                   ; 004c05fa
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004c05ff
    POP ESI                             ; 004c0602
    POP EDI                             ; 004c0603
    ADD ESP,0x1544                      ; 004c0604
    POP EBP                             ; 004c060a
    POP EBX                             ; 004c060b
    RET                                 ; 004c060c
    PUSH EAX                            ; 004c060d
        ;   Label: LAB_004c060d
    LEA EAX,[ESP + 0x1504]              ; 004c060e
    PUSH EAX                            ; 004c0615
    CALL FUN_0040d300                   ; 004c0616
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004c061b
    ADD ESP,0x1544                      ; 004c061e
    POP EBP                             ; 004c0624
    POP EBX                             ; 004c0625
    RET                                 ; 004c0626
    PUSH EBX                            ; 004c0627
        ;   Label: LAB_004c0627
    PUSH 0xff                           ; 004c0628
    LEA EAX,[ESP + 0x1410]              ; 004c062d
    PUSH EAX                            ; 004c0634
    CALL FUN_005a3f00                   ; 004c0635
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004c063a
    PUSH 0x5c3ba2                       ; 004c063d | DAT_005c3ba2
    LEA EAX,[ESP + 0x140c]              ; 004c0642
    PUSH EAX                            ; 004c0649
    CALL FUN_005a3d00                   ; 004c064a
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004c064f
    TEST EAX,EAX                        ; 004c0652
    JZ 0x004c0342                       ; 004c0654
        ;   XREF to: 004c0342 (CONDITIONAL_JUMP)  ; LAB_004c0342
    LEA EDI,[ESP + 0x1408]              ; 004c065a
    SUB ECX,ECX                         ; 004c0661
    DEC ECX                             ; 004c0663
    XOR EAX,EAX                         ; 004c0664
    SCASB.REPNE ES:EDI                  ; 004c0666
    NOT ECX                             ; 004c0668
    DEC ECX                             ; 004c066a
    ADD ECX,0xa                         ; 004c066b
    PUSH ECX                            ; 004c066e
    CALL FUN_005a3650                   ; 004c066f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 004c0674
    MOV dword ptr [ESP + EBP*0x1 + 0x8],EAX ; 004c0677
    TEST EAX,EAX                        ; 004c067b
    JNZ 0x004c06a1                      ; 004c067d
        ;   XREF to: 004c06a1 (CONDITIONAL_JUMP)  ; LAB_004c06a1
    MOV EDI,0x5c3ba7                    ; 004c067f | = "..\\core\\game.cpp"
    MOV EAX,0x14af                      ; 004c0684
    PUSH 0x5c3bb8                       ; 004c0689 | = "CGame::rollCredits - Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 004c068e | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004c0694 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004c0699
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004c069e
    LEA ESI,[ESP + 0x1408]              ; 004c06a1
        ;   Label: LAB_004c06a1
    MOV EDI,dword ptr [ESP + EBP*0x1 + 0x8] ; 004c06a8
    MOV EDX,dword ptr [ESP + 0x1534]    ; 004c06ac
    PUSH EDI                            ; 004c06b3
    MOV AL,byte ptr [ESI]               ; 004c06b4
        ;   Label: LAB_004c06b4
    MOV byte ptr [EDI],AL               ; 004c06b6
    CMP AL,0x0                          ; 004c06b8
    JZ 0x004c06cc                       ; 004c06ba
        ;   XREF to: 004c06cc (CONDITIONAL_JUMP)  ; LAB_004c06cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004c06bc
    ADD ESI,0x2                         ; 004c06bf
    MOV byte ptr [EDI + 0x1],AL         ; 004c06c2
    ADD EDI,0x2                         ; 004c06c5
    CMP AL,0x0                          ; 004c06c8
    JNZ 0x004c06b4                      ; 004c06ca
        ;   XREF to: 004c06b4 (CONDITIONAL_JUMP)  ; LAB_004c06b4
    POP EDI                             ; 004c06cc
        ;   Label: LAB_004c06cc
    INC EDX                             ; 004c06cd
    ADD EBP,0x4                         ; 004c06ce
    MOV dword ptr [ESP + 0x1534],EDX    ; 004c06d1
    JMP 0x004c0330                      ; 004c06d8
        ;   XREF to: 004c0330 (UNCONDITIONAL_JUMP)  ; LAB_004c0330
    INC EAX                             ; 004c06dd
        ;   Label: LAB_004c06dd
    INC EDX                             ; 004c06de
    CMP EAX,ESI                         ; 004c06df
    JL 0x004c04ab                       ; 004c06e1
        ;   XREF to: 004c04ab (CONDITIONAL_JUMP)  ; LAB_004c04ab
    JMP 0x004c04b3                      ; 004c06e7
        ;   XREF to: 004c04b3 (UNCONDITIONAL_JUMP)  ; LAB_004c04b3
    CMP byte ptr [EDX],0x5c             ; 004c06ec
        ;   Label: LAB_004c06ec
    JNZ 0x004c06dd                      ; 004c06ef
        ;   XREF to: 004c06dd (CONDITIONAL_JUMP)  ; LAB_004c06dd
    CMP byte ptr [EDX + 0x1],0x32       ; 004c06f1
    JNZ 0x004c06dd                      ; 004c06f5
        ;   XREF to: 004c06dd (CONDITIONAL_JUMP)  ; LAB_004c06dd
    MOV dword ptr [ESP + 0x152c],EAX    ; 004c06f7
    JMP 0x004c04b3                      ; 004c06fe
        ;   XREF to: 004c04b3 (UNCONDITIONAL_JUMP)  ; LAB_004c04b3
    PUSH EBP                            ; 004c0703
        ;   Label: LAB_004c0703
    PUSH 0x0                            ; 004c0704
    MOV ESI,dword ptr [ESP + 0x1530]    ; 004c0706
    PUSH ESI                            ; 004c070d
    MOV EDI,dword ptr [ESP + 0x1554]    ; 004c070e
    PUSH EDI                            ; 004c0715
    PUSH 0x190                          ; 004c0716
    PUSH 0x64                           ; 004c071b
    MOV EBP,dword ptr [ESP + 0x155c]    ; 004c071d
    PUSH EBP                            ; 004c0724
    CALL FUN_004b0fa0                   ; 004c0725
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0fa0()
    ADD ESP,0x1c                        ; 004c072a
    JMP 0x004c0524                      ; 004c072d
        ;   XREF to: 004c0524 (UNCONDITIONAL_JUMP)  ; LAB_004c0524
    MOV ECX,dword ptr [ESP + 0x1558]    ; 004c0732
        ;   Label: LAB_004c0732
    PUSH ECX                            ; 004c0739
    CALL FUN_004b4440                   ; 004c073a
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4440()
    ADD ESP,0x4                         ; 004c073f
    MOV EAX,dword ptr [ESP + 0x1558]    ; 004c0742
    FLD float ptr [EAX + 0x314]         ; 004c0749
    FMUL float ptr [0x005c3bdc]         ; 004c074f | DAT_005c3bdc
    FSUBR float ptr [ESP + 0x151c]      ; 004c0755
    MOV EBX,dword ptr [ESP + 0x153c]    ; 004c075c
    FSTP float ptr [ESP + 0x151c]       ; 004c0763
    TEST EBX,EBX                        ; 004c076a
    JNZ 0x004c03b6                      ; 004c076c
        ;   XREF to: 004c03b6 (CONDITIONAL_JUMP)  ; LAB_004c03b6
    FLDZ                                ; 004c0772
    FCOMP float ptr [ESP + 0x151c]      ; 004c0774
    FNSTSW AX                           ; 004c077b
    SAHF                                ; 004c077d
    JBE 0x004c03b6                      ; 004c077e
        ;   XREF to: 004c03b6 (CONDITIONAL_JUMP)  ; LAB_004c03b6
    MOV EDI,0x43f00000                  ; 004c0784
    MOV ESI,0xffffffff                  ; 004c0789
    MOV dword ptr [ESP + 0x151c],EDI    ; 004c078e
    MOV dword ptr [ESP + 0x1530],ESI    ; 004c0795
    JMP 0x004c03b6                      ; 004c079c
        ;   XREF to: 004c03b6 (UNCONDITIONAL_JUMP)  ; LAB_004c03b6

