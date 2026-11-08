; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00574410(undefined4 *param_1)
;
; Local Variables:
; undefined1       Stack[-0x140]:1  local_140
; undefined        Stack[-0x13f]:1  local_13f
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0057d9e0 at 0057da15
;
; Referenced Globals:
;   TerminatedCString s_sound_005f411f
;   undefined4 DAT_005f4125
;   TerminatedCString s_sound_005f4129
;   undefined4 DAT_005f412f
;   TerminatedCString s_sound_sndmain_cpp_005f4133
;   TerminatedCString s_Unknown_sample_file_form_005f4148
;   TerminatedCString s_sound_sndmain_cpp_005f4171
;   TerminatedCString s_getSampleInfo_can_t_dete_005f4186
;   undefined4 DAT_006232d4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c6c088
;   undefined4 DAT_02c6c08c
;   undefined4 DAT_02c745b8
;
; Called Functions:
;   FUN_00478fb0
;   FUN_00479580
;   FUN_005030e0
;   FUN_0052ae40
;   FUN_0052aea0
;   FUN_0052b100
;   FUN_0056db10
;   FUN_0056e130
;   FUN_00573e70
;   FUN_00575d20
;   FUN_005a08d0
;   FUN_005a0a50
;   FUN_005a0d50
;   FUN_005a0dc0
;   FUN_005a0fd0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574410
        ;   Label: FUN_00574410
    PUSH ESI                            ; 00574411
    PUSH EDI                            ; 00574412
    PUSH EBP                            ; 00574413
    SUB ESP,0x130                       ; 00574414
    MOV EBP,dword ptr [ESP + 0x144]     ; 0057441a
    CALL FUN_00575d20                   ; 00574421
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
    XOR ESI,ESI                         ; 00574426
    CMP dword ptr [ESI + 0x2c79104],0x1 ; 00574428
        ;   Label: LAB_00574428
    JGE 0x00574465                      ; 0057442f
        ;   XREF to: 00574465 (CONDITIONAL_JUMP)  ; LAB_00574465
    ADD ESI,0x1b0                       ; 00574431
        ;   Label: LAB_00574431
    CMP ESI,0x6c00                      ; 00574437
    JL 0x00574428                       ; 0057443d
        ;   XREF to: 00574428 (CONDITIONAL_JUMP)  ; LAB_00574428
    CALL FUN_00573e70                   ; 0057443f
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    PUSH EBP                            ; 00574444
    PUSH 0x5f411f                       ; 00574445 | = "sound"
    CALL FUN_00478fb0                   ; 0057444a
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478fb0()
    ADD ESP,0x8                         ; 0057444f
    TEST EAX,EAX                        ; 00574452
    JG 0x00574491                       ; 00574454
        ;   XREF to: 00574491 (CONDITIONAL_JUMP)  ; LAB_00574491
    XOR EBP,EBP                         ; 00574456
    MOV EAX,EBP                         ; 00574458
        ;   Label: LAB_00574458
    ADD ESP,0x130                       ; 0057445a
    POP EBP                             ; 00574460
    POP EDI                             ; 00574461
    POP ESI                             ; 00574462
    POP EBX                             ; 00574463
    RET                                 ; 00574464
    MOV EBX,0x2c78ff4                   ; 00574465
        ;   Label: LAB_00574465
    PUSH EBP                            ; 0057446a
    ADD EBX,ESI                         ; 0057446b
    PUSH EBX                            ; 0057446d
    CALL FUN_005c04e0                   ; 0057446e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00574473
    TEST EAX,EAX                        ; 00574476
    JNZ 0x00574431                      ; 00574478
        ;   XREF to: 00574431 (CONDITIONAL_JUMP)  ; LAB_00574431
    MOV ECX,0x54                        ; 0057447a
    MOV EDI,EBP                         ; 0057447f
    MOV ESI,EBX                         ; 00574481
    MOV EBP,0x1                         ; 00574483
    MOVSD.REP ES:EDI,ESI                ; 00574488
    CALL FUN_00573e70                   ; 0057448a
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    JMP 0x00574458                      ; 0057448f
        ;   XREF to: 00574458 (UNCONDITIONAL_JUMP)  ; LAB_00574458
    MOV EAX,ESP                         ; 00574491
        ;   Label: LAB_00574491
    PUSH EAX                            ; 00574493
    PUSH 0x0                            ; 00574494
    PUSH 0x0                            ; 00574496
    PUSH 0x0                            ; 00574498
    PUSH EBP                            ; 0057449a
    CALL FUN_00479580                   ; 0057449b
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 005744a0
    CMP byte ptr [ESP],0x2e             ; 005744a3
    JNZ 0x005744c8                      ; 005744a7
        ;   XREF to: 005744c8 (CONDITIONAL_JUMP)  ; LAB_005744c8
    MOV EDI,ESP                         ; 005744a9
    SUB ECX,ECX                         ; 005744ab
    DEC ECX                             ; 005744ad
    XOR EAX,EAX                         ; 005744ae
    SCASB.REPNE ES:EDI                  ; 005744b0
    NOT ECX                             ; 005744b2
    DEC ECX                             ; 005744b4
    PUSH ECX                            ; 005744b5
    LEA EAX,[ESP + 0x5]                 ; 005744b6
    PUSH EAX                            ; 005744ba
    LEA EAX,[ESP + 0x8]                 ; 005744bb
    PUSH EAX                            ; 005744bf
    CALL FUN_005c25d0                   ; 005744c0
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 005744c5
    PUSH 0x5f4125                       ; 005744c8 | DAT_005f4125
        ;   Label: LAB_005744c8
    LEA EAX,[ESP + 0x4]                 ; 005744cd
    PUSH EAX                            ; 005744d1
    CALL FUN_005c04e0                   ; 005744d2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005744d7
    TEST EAX,EAX                        ; 005744da
    JNZ 0x005745b1                      ; 005744dc
        ;   XREF to: 005745b1 (CONDITIONAL_JUMP)  ; LAB_005745b1
    LEA EAX,[ESP + 0x100]               ; 005744e2
    PUSH EAX                            ; 005744e9
    CALL FUN_005a08d0                   ; 005744ea
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a08d0()
    ADD ESP,0x4                         ; 005744ef
    PUSH 0x1                            ; 005744f2
    PUSH EBP                            ; 005744f4
    PUSH 0x5f4129                       ; 005744f5 | = "sound"
    LEA EAX,[ESP + 0x10c]               ; 005744fa
    PUSH EAX                            ; 00574501
    CALL FUN_005a0fd0                   ; 00574502
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0fd0()
    ADD ESP,0x10                        ; 00574507
    TEST EAX,EAX                        ; 0057450a
    JZ 0x00574591                       ; 0057450c
        ;   XREF to: 00574591 (CONDITIONAL_JUMP)  ; LAB_00574591
    LEA EAX,[ESP + 0x100]               ; 00574512
    PUSH EAX                            ; 00574519
    CALL FUN_005a0d50                   ; 0057451a
        ;   XREF to: 005a0d50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d50()
    ADD ESP,0x4                         ; 0057451f
    PUSH EBP                            ; 00574522
    MOV dword ptr [ESP + 0x130],EAX     ; 00574523
    LEA EAX,[ESP + 0x130]               ; 0057452a
    PUSH EAX                            ; 00574531
    LEA EAX,[ESP + 0x108]               ; 00574532
    PUSH EAX                            ; 00574539
    CALL FUN_0056db10                   ; 0057453a
        ;   XREF to: 0056db10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056db10()
    ADD ESP,0xc                         ; 0057453f
    TEST EAX,EAX                        ; 00574542
    JZ 0x00574591                       ; 00574544
        ;   XREF to: 00574591 (CONDITIONAL_JUMP)  ; LAB_00574591
    LEA EAX,[ESP + 0x100]               ; 00574546
    PUSH EAX                            ; 0057454d
    CALL FUN_005a0dc0                   ; 0057454e
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0dc0()
    ADD ESP,0x4                         ; 00574553
    PUSH 0x0                            ; 00574556
    LEA EAX,[ESP + 0x104]               ; 00574558
    PUSH EAX                            ; 0057455f
    CALL FUN_005a0a50                   ; 00574560
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 00574565
        ;   Label: LAB_00574565
    PUSH EBP                            ; 00574568
        ;   Label: LAB_00574568
    CALL FUN_0056e130                   ; 00574569
        ;   XREF to: 0056e130 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e130()
    MOV ESI,dword ptr [EBP + 0x110]     ; 0057456e
    ADD ESP,0x4                         ; 00574574
    TEST ESI,ESI                        ; 00574577
    JLE 0x0057466b                      ; 00574579
        ;   XREF to: 0057466b (CONDITIONAL_JUMP)  ; LAB_0057466b
    MOV EBP,0x1                         ; 0057457f
    MOV EAX,EBP                         ; 00574584
    ADD ESP,0x130                       ; 00574586
    POP EBP                             ; 0057458c
    POP EDI                             ; 0057458d
    POP ESI                             ; 0057458e
    POP EBX                             ; 0057458f
    RET                                 ; 00574590
    XOR EBP,EBP                         ; 00574591
        ;   Label: LAB_00574591
    PUSH EBP                            ; 00574593
    LEA EAX,[ESP + 0x104]               ; 00574594
    PUSH EAX                            ; 0057459b
    CALL FUN_005a0a50                   ; 0057459c
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 005745a1
    MOV EAX,EBP                         ; 005745a4
    ADD ESP,0x130                       ; 005745a6
    POP EBP                             ; 005745ac
    POP EDI                             ; 005745ad
    POP ESI                             ; 005745ae
    POP EBX                             ; 005745af
    RET                                 ; 005745b0
    PUSH 0x5f412f                       ; 005745b1 | DAT_005f412f
        ;   Label: LAB_005745b1
    LEA EAX,[ESP + 0x4]                 ; 005745b6
    PUSH EAX                            ; 005745ba
    CALL FUN_005c04e0                   ; 005745bb
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005745c0
    TEST EAX,EAX                        ; 005745c3
    JNZ 0x00574645                      ; 005745c5
        ;   XREF to: 00574645 (CONDITIONAL_JUMP)  ; LAB_00574645
    MOV DL,byte ptr [0x02c745b8]        ; 005745cb | DAT_02c745b8
    TEST DL,0x1                         ; 005745d1
    JNZ 0x005745fb                      ; 005745d4
        ;   XREF to: 005745fb (CONDITIONAL_JUMP)  ; LAB_005745fb
    MOV DH,DL                           ; 005745d6
    OR DH,0x1                           ; 005745d8
    PUSH 0x2c6bf88                      ; 005745db
    MOV byte ptr [0x02c745b8],DH        ; 005745e0 | DAT_02c745b8
    CALL FUN_0052ae40                   ; 005745e6
        ;   XREF to: 0052ae40 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ae40()
    ADD ESP,0x4                         ; 005745eb
    PUSH 0x6232d4                       ; 005745ee | DAT_006232d4
    CALL FUN_005c1093                   ; 005745f3
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005745f8
    PUSH EBP                            ; 005745fb
        ;   Label: LAB_005745fb
    PUSH 0x2c6bf88                      ; 005745fc
    CALL FUN_0052aea0                   ; 00574601
        ;   XREF to: 0052aea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052aea0()
    MOV dword ptr [EBP + 0x104],0x10    ; 00574606
    MOV EAX,[0x02c6c08c]                ; 00574610 | DAT_02c6c08c
    MOV dword ptr [EBP + 0x108],EAX     ; 00574615
    ADD ESP,0x8                         ; 0057461b
    MOV EAX,[0x02c6c088]                ; 0057461e | DAT_02c6c088
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00574623
    PUSH 0x2c6bf88                      ; 0057462d
    MOV dword ptr [EBP + 0x10c],EAX     ; 00574632
    CALL FUN_0052b100                   ; 00574638
        ;   XREF to: 0052b100 (UNCONDITIONAL_CALL)  ; undefined FUN_0052b100()
    ADD ESP,0x4                         ; 0057463d
    JMP 0x00574568                      ; 00574640
        ;   XREF to: 00574568 (UNCONDITIONAL_JUMP)  ; LAB_00574568
    PUSH EBP                            ; 00574645
        ;   Label: LAB_00574645
    MOV ECX,0x5f4133                    ; 00574646 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x12c0                      ; 0057464b
    PUSH 0x5f4148                       ; 00574650 | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 00574655 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0057465b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00574661
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    JMP 0x00574565                      ; 00574666
        ;   XREF to: 00574565 (UNCONDITIONAL_JUMP)  ; LAB_00574565
    PUSH EBP                            ; 0057466b
        ;   Label: LAB_0057466b
    MOV EDI,0x5f4171                    ; 0057466c | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x12cb                      ; 00574671
    PUSH 0x5f4186                       ; 00574676 | = "getSampleInfo - can't determine lengt..."
    MOV dword ptr [0x01d1d400],EDI      ; 0057467b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00574681 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00574686
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0057468b
    MOV EBP,0x1                         ; 0057468e
    MOV EAX,EBP                         ; 00574693
    ADD ESP,0x130                       ; 00574695
    POP EBP                             ; 0057469b
    POP EDI                             ; 0057469c
    POP ESI                             ; 0057469d
    POP EBX                             ; 0057469e
    RET                                 ; 0057469f

