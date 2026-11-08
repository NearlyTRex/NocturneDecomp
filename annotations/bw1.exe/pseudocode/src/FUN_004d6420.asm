; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6420(int param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x4ac]:8  local_4ac
; undefined8       Stack[-0x4a4]:8  local_4a4
; undefined1       Stack[-0x494]:1  local_494
; undefined1       Stack[-0x493]:1  local_493
; undefined        Stack[-0x390]:1  local_390
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004cf5e0 at 004d00ca
;   FUN_004d1a80 at 004d1cc6
;
; Referenced Globals:
;   undefined4 DAT_005e2eac
;   undefined4 DAT_005e2eb0
;   undefined4 DAT_005e2eb5
;   undefined4 DAT_005e2eb9
;   TerminatedCString s_Save_game_005e2ebe
;   TerminatedCString s_s_noc_005e2ec8
;   TerminatedCString s_save_005e2ecf
;   TerminatedCString s_wt_005e2ed4
;   TerminatedCString s_Warning_Your_game_didn_t_005e2edf
;   TerminatedCString s_NOC_file_version_005e2f00
;   undefined4 DAT_005e2f16
;   TerminatedCString s_Hero_count_local_hero_in_005e2f1a
;   TerminatedCString s_d_d_005e2f46
;   undefined4 DAT_005e2f4e
;   TerminatedCString s_Light_state_005e2f52
;   ... and 30 more
;
; Called Functions:
;   FUN_00442bb0
;   FUN_00442f90
;   FUN_00443490
;   FUN_004434e0
;   FUN_00443530
;   FUN_00443630
;   FUN_004943a0
;   FUN_004958d0
;   FUN_004aa9d0
;   FUN_004b73f0
;   FUN_004bf1c0
;   FUN_0051ac40
;   FUN_00531090
;   FUN_0054b710
;   FUN_00555ce0
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6420
        ;   Label: FUN_004d6420
    PUSH ESI                            ; 004d6421
    PUSH EDI                            ; 004d6422
    PUSH EBP                            ; 004d6423
    SUB ESP,0x484                       ; 004d6424
    MOV EBX,dword ptr [ESP + 0x49c]     ; 004d642a
    PUSH 0x61d978                       ; 004d6431 | = "save\\$$SAVE$$.TMP"
    CALL FUN_005c25c0                   ; 004d6436
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25c0()
    ADD ESP,0x4                         ; 004d643b
    LEA EAX,[ESP + 0x30c]               ; 004d643e
    PUSH EAX                            ; 004d6445
    PUSH 0x0                            ; 004d6446
    PUSH 0x0                            ; 004d6448
    PUSH 0x0                            ; 004d644a
    PUSH 0x1cd05c0                      ; 004d644c | DAT_01cd05c0
    CALL FUN_005c2238                   ; 004d6451
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2238()
    ADD ESP,0x14                        ; 004d6456
    PUSH 0x5e2eac                       ; 004d6459 | DAT_005e2eac
    LEA EAX,[ESP + 0x310]               ; 004d645e
    PUSH EAX                            ; 004d6465
    CALL FUN_005c04e0                   ; 004d6466
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004d646b
    TEST EAX,EAX                        ; 004d646e
    JZ 0x004d648f                       ; 004d6470
        ;   XREF to: 004d648f (CONDITIONAL_JUMP)  ; LAB_004d648f
    PUSH 0x5e2eb0                       ; 004d6472 | DAT_005e2eb0
    LEA EAX,[ESP + 0x310]               ; 004d6477
    PUSH EAX                            ; 004d647e
    CALL FUN_005c04e0                   ; 004d647f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004d6484
    TEST EAX,EAX                        ; 004d6487
    JNZ 0x004d686f                      ; 004d6489
        ;   XREF to: 004d686f (CONDITIONAL_JUMP)  ; LAB_004d686f
    MOV ESI,0x1cd05c0                   ; 004d648f
        ;   Label: LAB_004d648f
    MOV EDI,ESP                         ; 004d6494
    PUSH EDI                            ; 004d6496
    MOV AL,byte ptr [ESI]               ; 004d6497 | DAT_01cd05c0 | DAT_01cd05c2
        ;   Label: LAB_004d6497
    MOV byte ptr [EDI],AL               ; 004d6499
    CMP AL,0x0                          ; 004d649b
    JZ 0x004d64af                       ; 004d649d
        ;   XREF to: 004d64af (CONDITIONAL_JUMP)  ; LAB_004d64af
    MOV AL,byte ptr [ESI + 0x1]         ; 004d649f | DAT_01cd05c1 | DAT_01cd05c3
    ADD ESI,0x2                         ; 004d64a2
    MOV byte ptr [EDI + 0x1],AL         ; 004d64a5
    ADD EDI,0x2                         ; 004d64a8
    CMP AL,0x0                          ; 004d64ab
    JNZ 0x004d6497                      ; 004d64ad
        ;   XREF to: 004d6497 (CONDITIONAL_JUMP)  ; LAB_004d6497
    POP EDI                             ; 004d64af
        ;   Label: LAB_004d64af
    TEST EBX,EBX                        ; 004d64b0
        ;   Label: LAB_004d64b0
    JZ 0x004d6879                       ; 004d64b2
        ;   XREF to: 004d6879 (CONDITIONAL_JUMP)  ; LAB_004d6879
    MOV EDI,ESP                         ; 004d64b8
    MOV ESI,EBX                         ; 004d64ba
    PUSH EDI                            ; 004d64bc
    MOV AL,byte ptr [ESI]               ; 004d64bd
        ;   Label: LAB_004d64bd
    MOV byte ptr [EDI],AL               ; 004d64bf
    CMP AL,0x0                          ; 004d64c1
    JZ 0x004d64d5                       ; 004d64c3
        ;   XREF to: 004d64d5 (CONDITIONAL_JUMP)  ; LAB_004d64d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004d64c5
    ADD ESI,0x2                         ; 004d64c8
    MOV byte ptr [EDI + 0x1],AL         ; 004d64cb
    ADD EDI,0x2                         ; 004d64ce
    CMP AL,0x0                          ; 004d64d1
    JNZ 0x004d64bd                      ; 004d64d3
        ;   XREF to: 004d64bd (CONDITIONAL_JUMP)  ; LAB_004d64bd
    POP EDI                             ; 004d64d5
        ;   Label: LAB_004d64d5
    PUSH 0x5e2ecf                       ; 004d64d6 | = "save"
        ;   Label: LAB_004d64d6
    CALL FUN_005c2000                   ; 004d64db
        ;   XREF to: 005c2000 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2000()
    ADD ESP,0x4                         ; 004d64e0
    PUSH 0x5e2ed4                       ; 004d64e3 | = "wt"
    MOV ECX,0x1                         ; 004d64e8
    PUSH 0x61d978                       ; 004d64ed | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [ESP + 0x488],ECX     ; 004d64f2
    MOV dword ptr [0x007c3040],ECX      ; 004d64f9 | DAT_007c3040
    CALL FUN_005c157c                   ; 004d64ff
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    MOV EBX,EAX                         ; 004d6504
    ADD ESP,0x8                         ; 004d6506
    MOV EBP,EAX                         ; 004d6509
    TEST EAX,EAX                        ; 004d650b
    JZ 0x004d68e2                       ; 004d650d
        ;   XREF to: 004d68e2 (CONDITIONAL_JUMP)  ; LAB_004d68e2
    PUSH 0x5e2f00                       ; 004d6513 | = "// .NOC file version\n"
    PUSH EAX                            ; 004d6518
    CALL FUN_005c03c0                   ; 004d6519
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004d651e
    PUSH 0xa                            ; 004d6521
    PUSH 0x5e2f16                       ; 004d6523 | DAT_005e2f16
    PUSH EBX                            ; 004d6528
    CALL FUN_005c03c0                   ; 004d6529
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 004d652e
    PUSH EBX                            ; 004d6531
    MOV ESI,dword ptr [0x0061f650]      ; 004d6532 | DAT_0061f650
    PUSH ESI                            ; 004d6538 | DAT_01d2c900
    CALL FUN_0051ac40                   ; 004d6539
        ;   XREF to: 0051ac40 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ac40()
    ADD ESP,0x8                         ; 004d653e
    PUSH 0x5e2f1a                       ; 004d6541 | = "// Hero count, local hero index, hero..."
    PUSH EBX                            ; 004d6546
    CALL FUN_005c03c0                   ; 004d6547
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004d654c
    MOV EDI,dword ptr [0x01d06ab4]      ; 004d654f | DAT_01d06ab4
    PUSH EDI                            ; 004d6555
    MOV EAX,[0x01d06aa0]                ; 004d6556 | DAT_01d06aa0
    PUSH EAX                            ; 004d655b
    PUSH 0x5e2f46                       ; 004d655c | = "%d, %d\n"
    PUSH EBX                            ; 004d6561
    CALL FUN_005c03c0                   ; 004d6562
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EDX,dword ptr [0x01d06aa0]      ; 004d6567 | DAT_01d06aa0
    ADD ESP,0x10                        ; 004d656d
    XOR EBX,EBX                         ; 004d6570
    TEST EDX,EDX                        ; 004d6572
    JLE 0x004d65a0                      ; 004d6574
        ;   XREF to: 004d65a0 (CONDITIONAL_JUMP)  ; LAB_004d65a0
    XOR ESI,ESI                         ; 004d6576
    MOV EDI,dword ptr [ESI + 0x1d06aa4] ; 004d6578
        ;   Label: LAB_004d6578
    PUSH EDI                            ; 004d657e
    PUSH 0x5e2f4e                       ; 004d657f | DAT_005e2f4e
    PUSH EBP                            ; 004d6584
    ADD ESI,0x4                         ; 004d6585
    INC EBX                             ; 004d6588
    CALL FUN_005c03c0                   ; 004d6589
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,[0x01d06aa0]                ; 004d658e | DAT_01d06aa0
    ADD ESP,0xc                         ; 004d6593
    CMP EBX,EAX                         ; 004d6596
    JL 0x004d6578                       ; 004d6598
        ;   XREF to: 004d6578 (CONDITIONAL_JUMP)  ; LAB_004d6578
    LEA EAX,[EAX]                       ; 004d659a
    PUSH EBP                            ; 004d65a0
        ;   Label: LAB_004d65a0
    MOV EDX,dword ptr [0x0061b4d0]      ; 004d65a1 | DAT_0061b4d0
    PUSH EDX                            ; 004d65a7
    CALL FUN_004aa9d0                   ; 004d65a8
        ;   XREF to: 004aa9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa9d0()
    ADD ESP,0x8                         ; 004d65ad
    PUSH EBP                            ; 004d65b0
    MOV ECX,dword ptr [0x00622ad0]      ; 004d65b1 | DAT_00622ad0
    PUSH ECX                            ; 004d65b7
    CALL FUN_0054b710                   ; 004d65b8
        ;   XREF to: 0054b710 (UNCONDITIONAL_CALL)  ; undefined FUN_0054b710()
    ADD ESP,0x8                         ; 004d65bd
    PUSH EBP                            ; 004d65c0
    MOV EBX,dword ptr [0x0061c010]      ; 004d65c1 | DAT_0061c010
    PUSH EBX                            ; 004d65c7
    CALL FUN_004b73f0                   ; 004d65c8
        ;   XREF to: 004b73f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b73f0()
    ADD ESP,0x8                         ; 004d65cd
    PUSH 0x5e2f52                       ; 004d65d0 | = "Light state\n"
    PUSH EBP                            ; 004d65d5
    CALL FUN_005c03c0                   ; 004d65d6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004d65db
    PUSH 0x1cd06c4                      ; 004d65de | DAT_01cd06c4
    MOV ESI,dword ptr [0x00622c18]      ; 004d65e3 | DAT_00622c18
    PUSH ESI                            ; 004d65e9 | DAT_01e82168
    CALL FUN_00555ce0                   ; 004d65ea
        ;   XREF to: 00555ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555ce0()
    ADD ESP,0x8                         ; 004d65ef
    MOV EDI,dword ptr [0x01cd06c4]      ; 004d65f2 | DAT_01cd06c4
    PUSH EDI                            ; 004d65f8
    PUSH 0x5e2f5f                       ; 004d65f9 | DAT_005e2f5f
    PUSH EBP                            ; 004d65fe
    MOV ESI,0x1                         ; 004d65ff
    CALL FUN_005c03c0                   ; 004d6604
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,[0x01cd06c4]                ; 004d6609 | DAT_01cd06c4
    ADD ESP,0xc                         ; 004d660e
    CMP EAX,ESI                         ; 004d6611
    JL 0x004d6640                       ; 004d6613
        ;   XREF to: 004d6640 (CONDITIONAL_JUMP)  ; LAB_004d6640
    MOV EDI,0x4                         ; 004d6615
    MOV EDX,dword ptr [EDI + 0x1cd06c4] ; 004d661a | DAT_01cd06c8 | DAT_01cd06cc
        ;   Label: LAB_004d661a
    PUSH EDX                            ; 004d6620
    PUSH 0x5e2f63                       ; 004d6621 | DAT_005e2f63
    PUSH EBP                            ; 004d6626
    ADD EDI,0x4                         ; 004d6627
    INC ESI                             ; 004d662a
    CALL FUN_005c03c0                   ; 004d662b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [0x01cd06c4]      ; 004d6630 | DAT_01cd06c4
    ADD ESP,0xc                         ; 004d6636
    CMP ESI,ECX                         ; 004d6639
    JLE 0x004d661a                      ; 004d663b
        ;   XREF to: 004d661a (CONDITIONAL_JUMP)  ; LAB_004d661a
    LEA EAX,[EAX]                       ; 004d663d
    PUSH 0x5e2f67                       ; 004d6640 | = "Game stats\n"
        ;   Label: LAB_004d6640
    PUSH EBP                            ; 004d6645
    CALL FUN_005c03c0                   ; 004d6646
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004d664b
    MOV EAX,dword ptr [ESP + 0x498]     ; 004d664e
    MOV EBX,dword ptr [EAX + 0x274]     ; 004d6655
    PUSH EBX                            ; 004d665b
    MOV ESI,dword ptr [EAX + 0x26c]     ; 004d665c
    PUSH ESI                            ; 004d6662
    SUB ESP,0x8                         ; 004d6663
    FLD float ptr [EAX + 0x268]         ; 004d6666
    FSTP double ptr [ESP]               ; 004d666c
    SUB ESP,0x8                         ; 004d666f
    FLD float ptr [EAX + 0x270]         ; 004d6672
    FSTP double ptr [ESP]               ; 004d6678
    PUSH 0x5e2f73                       ; 004d667b | = "%f,%f,%d,%d\n"
    PUSH EBP                            ; 004d6680
    CALL FUN_005c03c0                   ; 004d6681
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x20                        ; 004d6686
    PUSH EBP                            ; 004d6689
    MOV EDI,dword ptr [0x00622c18]      ; 004d668a | DAT_00622c18
    PUSH EDI                            ; 004d6690 | DAT_01e82168
    CALL FUN_00555d20                   ; 004d6691
        ;   XREF to: 00555d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00555d20()
    ADD ESP,0x8                         ; 004d6696
    PUSH EBP                            ; 004d6699
    MOV EAX,[0x0061d418]                ; 004d669a | DAT_0061d418
    PUSH EAX                            ; 004d669f | DAT_01cc8004
    CALL FUN_004bf1c0                   ; 004d66a0
        ;   XREF to: 004bf1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bf1c0()
    ADD ESP,0x8                         ; 004d66a5
    PUSH EBP                            ; 004d66a8
    CALL FUN_005c0d10                   ; 004d66a9
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004d66ae
    XOR EDX,EDX                         ; 004d66b1
    MOV ECX,dword ptr [ESP + 0x480]     ; 004d66b3
    MOV dword ptr [0x007c3040],EDX      ; 004d66ba | DAT_007c3040
    TEST ECX,ECX                        ; 004d66c0
    JZ 0x004d6836                       ; 004d66c2
        ;   XREF to: 004d6836 (CONDITIONAL_JUMP)  ; LAB_004d6836
    LEA EAX,[ESP + 0x44c]               ; 004d66c8
    PUSH EAX                            ; 004d66cf
    CALL FUN_005a08d0                   ; 004d66d0
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a08d0()
    ADD ESP,0x4                         ; 004d66d5
    LEA EAX,[ESP + 0x478]               ; 004d66d8
    PUSH EAX                            ; 004d66df
    CALL FUN_005a17d0                   ; 004d66e0
        ;   XREF to: 005a17d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a17d0()
    ADD ESP,0x4                         ; 004d66e5
    PUSH 0x5e2f80                       ; 004d66e8 | = "Warning!  Your game didn't save."
    CALL FUN_00531090                   ; 004d66ed
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d66f2
    PUSH 0x1                            ; 004d66f5
    PUSH 0x61d978                       ; 004d66f7 | = "save\\$$SAVE$$.TMP"
    MOV EBX,EAX                         ; 004d66fc
    LEA EAX,[ESP + 0x454]               ; 004d66fe
    PUSH EAX                            ; 004d6705
    CALL FUN_005a0f60                   ; 004d6706
        ;   XREF to: 005a0f60 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0f60()
    ADD ESP,0xc                         ; 004d670b
    TEST EAX,EAX                        ; 004d670e
    JZ 0x004d6910                       ; 004d6710
        ;   XREF to: 004d6910 (CONDITIONAL_JUMP)  ; LAB_004d6910
    MOV EAX,ESP                         ; 004d6716
    PUSH EAX                            ; 004d6718
    PUSH 0x5e2fa1                       ; 004d6719 | DAT_005e2fa1
    PUSH 0x5e2fa6                       ; 004d671e | = "%s\\%s"
    LEA EAX,[ESP + 0x110]               ; 004d6723
    PUSH EAX                            ; 004d672a
    CALL FUN_005bfb40                   ; 004d672b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004d6730
    PUSH 0x5e2fac                       ; 004d6733 | DAT_005e2fac
    LEA EAX,[ESP + 0x108]               ; 004d6738
    PUSH EAX                            ; 004d673f
    LEA EAX,[ESP + 0x480]               ; 004d6740
    PUSH EAX                            ; 004d6747
    CALL FUN_005a19e0                   ; 004d6748
        ;   XREF to: 005a19e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a19e0()
    ADD ESP,0xc                         ; 004d674d
    TEST EAX,EAX                        ; 004d6750
    JZ 0x004d694f                       ; 004d6752
        ;   XREF to: 004d694f (CONDITIONAL_JUMP)  ; LAB_004d694f
    PUSH 0x4                            ; 004d6758
    PUSH 0x61d98c                       ; 004d675a | DAT_0061d98c
    LEA EAX,[ESP + 0x480]               ; 004d675f
    PUSH EAX                            ; 004d6766
    CALL FUN_005a18f0                   ; 004d6767
        ;   XREF to: 005a18f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a18f0()
    ADD ESP,0xc                         ; 004d676c
    PUSH 0x8                            ; 004d676f
    PUSH 0x8000                         ; 004d6771
    LEA EAX,[ESP + 0x414]               ; 004d6776
    PUSH EAX                            ; 004d677d
    CALL FUN_00443490                   ; 004d677e
        ;   XREF to: 00443490 (UNCONDITIONAL_CALL)  ; undefined FUN_00443490()
    ADD ESP,0xc                         ; 004d6783
    LEA EAX,[ESP + 0x40c]               ; 004d6786
    PUSH EAX                            ; 004d678d
    CALL FUN_004434e0                   ; 004d678e
        ;   XREF to: 004434e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004434e0()
    ADD ESP,0x4                         ; 004d6793
    LEA EAX,[ESP + 0x478]               ; 004d6796
    PUSH EAX                            ; 004d679d
    LEA EAX,[ESP + 0x450]               ; 004d679e
    PUSH EAX                            ; 004d67a5
    LEA EAX,[ESP + 0x414]               ; 004d67a6
    PUSH EAX                            ; 004d67ad
    CALL FUN_00443530                   ; 004d67ae
        ;   XREF to: 00443530 (UNCONDITIONAL_CALL)  ; undefined FUN_00443530()
    ADD ESP,0xc                         ; 004d67b3
    LEA EAX,[ESP + 0x478]               ; 004d67b6
    PUSH EAX                            ; 004d67bd
    LEA EAX,[ESP + 0x410]               ; 004d67be
    PUSH EAX                            ; 004d67c5
    CALL FUN_00443630                   ; 004d67c6
        ;   XREF to: 00443630 (UNCONDITIONAL_CALL)  ; undefined FUN_00443630()
    ADD ESP,0x8                         ; 004d67cb
    LEA EAX,[ESP + 0x44c]               ; 004d67ce
    PUSH EAX                            ; 004d67d5
    CALL FUN_005a0dc0                   ; 004d67d6
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0dc0()
    ADD ESP,0x4                         ; 004d67db
    LEA EAX,[ESP + 0x478]               ; 004d67de
    PUSH EAX                            ; 004d67e5
    CALL FUN_005a19b0                   ; 004d67e6
        ;   XREF to: 005a19b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a19b0()
    ADD ESP,0x4                         ; 004d67eb
    PUSH 0x0                            ; 004d67ee
    LEA EAX,[ESP + 0x414]               ; 004d67f0
    PUSH EAX                            ; 004d67f7
    CALL FUN_00442f90                   ; 004d67f8
        ;   XREF to: 00442f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00442f90()
    ADD ESP,0x8                         ; 004d67fd
    PUSH 0x1                            ; 004d6800
    LEA EAX,[ESP + 0x410]               ; 004d6802
    PUSH EAX                            ; 004d6809
    CALL FUN_00442bb0                   ; 004d680a
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442bb0()
    ADD ESP,0x8                         ; 004d680f
    PUSH 0x0                            ; 004d6812
    LEA EAX,[ESP + 0x47c]               ; 004d6814
    PUSH EAX                            ; 004d681b
    CALL FUN_005a1860                   ; 004d681c
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1860()
    ADD ESP,0x8                         ; 004d6821
    PUSH 0x0                            ; 004d6824
    LEA EAX,[ESP + 0x450]               ; 004d6826
    PUSH EAX                            ; 004d682d
    CALL FUN_005a0a50                   ; 004d682e
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 004d6833
    PUSH 0x61d978                       ; 004d6836 | = "save\\$$SAVE$$.TMP"
        ;   Label: LAB_004d6836
    CALL FUN_005c25c0                   ; 004d683b
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25c0()
    ADD ESP,0x4                         ; 004d6840
    MOV ESI,ESP                         ; 004d6843
    MOV EDI,0x1cd05c0                   ; 004d6845
    PUSH EDI                            ; 004d684a | DAT_01cd05c0
    MOV AL,byte ptr [ESI]               ; 004d684b
        ;   Label: LAB_004d684b
    MOV byte ptr [EDI],AL               ; 004d684d | DAT_01cd05c0 | DAT_01cd05c2
    CMP AL,0x0                          ; 004d684f
    JZ 0x004d6863                       ; 004d6851
        ;   XREF to: 004d6863 (CONDITIONAL_JUMP)  ; LAB_004d6863
    MOV AL,byte ptr [ESI + 0x1]         ; 004d6853
    ADD ESI,0x2                         ; 004d6856
    MOV byte ptr [EDI + 0x1],AL         ; 004d6859 | DAT_01cd05c1 | DAT_01cd05c3
    ADD EDI,0x2                         ; 004d685c
    CMP AL,0x0                          ; 004d685f
    JNZ 0x004d684b                      ; 004d6861
        ;   XREF to: 004d684b (CONDITIONAL_JUMP)  ; LAB_004d684b
    POP EDI                             ; 004d6863
        ;   Label: LAB_004d6863
    ADD ESP,0x484                       ; 004d6864
        ;   Label: LAB_004d6864
    POP EBP                             ; 004d686a
    POP EDI                             ; 004d686b
    POP ESI                             ; 004d686c
    POP EBX                             ; 004d686d
    RET                                 ; 004d686e
    XOR AH,AH                           ; 004d686f
        ;   Label: LAB_004d686f
    MOV byte ptr [ESP],AH               ; 004d6871
    JMP 0x004d64b0                      ; 004d6874
        ;   XREF to: 004d64b0 (UNCONDITIONAL_JUMP)  ; LAB_004d64b0
    PUSH 0x1                            ; 004d6879
        ;   Label: LAB_004d6879
    LEA EAX,[ESP + 0x4]                 ; 004d687b
    PUSH EAX                            ; 004d687f
    PUSH 0x5e2eb5                       ; 004d6880 | DAT_005e2eb5
    PUSH 0x5e2eb9                       ; 004d6885 | DAT_005e2eb9
    PUSH 0x5e2ebe                       ; 004d688a | = "Save game"
    CALL FUN_00531090                   ; 004d688f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d6894
    PUSH EAX                            ; 004d6897
    MOV EDX,dword ptr [0x0061abc0]      ; 004d6898 | DAT_0061abc0
    PUSH EDX                            ; 004d689e
    CALL FUN_004958d0                   ; 004d689f
        ;   XREF to: 004958d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004958d0()
    ADD ESP,0x18                        ; 004d68a4
    TEST EAX,EAX                        ; 004d68a7
    JZ 0x004d6864                       ; 004d68a9
        ;   XREF to: 004d6864 (CONDITIONAL_JUMP)  ; LAB_004d6864
    PUSH EBX                            ; 004d68ab
    LEA EAX,[ESP + 0x20c]               ; 004d68ac
    PUSH EAX                            ; 004d68b3
    PUSH EBX                            ; 004d68b4
    PUSH EBX                            ; 004d68b5
    LEA EAX,[ESP + 0x10]                ; 004d68b6
    PUSH EAX                            ; 004d68ba
    CALL FUN_005c2238                   ; 004d68bb
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2238()
    ADD ESP,0x14                        ; 004d68c0
    LEA EAX,[ESP + 0x208]               ; 004d68c3
    PUSH EAX                            ; 004d68ca
    PUSH 0x5e2ec8                       ; 004d68cb | = "%s.noc"
    LEA EAX,[ESP + 0x8]                 ; 004d68d0
    PUSH EAX                            ; 004d68d4
    CALL FUN_005bfb40                   ; 004d68d5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004d68da
    JMP 0x004d64d6                      ; 004d68dd
        ;   XREF to: 004d64d6 (UNCONDITIONAL_JUMP)  ; LAB_004d64d6
    PUSH 0x5e2edf                       ; 004d68e2 | = "Warning!  Your game didn't save."
        ;   Label: LAB_004d68e2
    CALL FUN_00531090                   ; 004d68e7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d68ec
    PUSH EAX                            ; 004d68ef
    MOV ECX,dword ptr [0x0061abc0]      ; 004d68f0 | DAT_0061abc0
    PUSH ECX                            ; 004d68f6
    CALL FUN_004943a0                   ; 004d68f7
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 004d68fc
    MOV dword ptr [0x007c3040],EBX      ; 004d68ff | DAT_007c3040
    ADD ESP,0x484                       ; 004d6905
    POP EBP                             ; 004d690b
    POP EDI                             ; 004d690c
    POP ESI                             ; 004d690d
    POP EBX                             ; 004d690e
    RET                                 ; 004d690f
    PUSH EBX                            ; 004d6910
        ;   Label: LAB_004d6910
    MOV EBX,dword ptr [0x0061abc0]      ; 004d6911 | DAT_0061abc0
    PUSH EBX                            ; 004d6917
    CALL FUN_004943a0                   ; 004d6918
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 004d691d
    PUSH 0x0                            ; 004d6920
    LEA EAX,[ESP + 0x47c]               ; 004d6922
    PUSH EAX                            ; 004d6929
    CALL FUN_005a1860                   ; 004d692a
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1860()
    ADD ESP,0x8                         ; 004d692f
    PUSH 0x0                            ; 004d6932
    LEA EAX,[ESP + 0x450]               ; 004d6934
    PUSH EAX                            ; 004d693b
    CALL FUN_005a0a50                   ; 004d693c
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 004d6941
    ADD ESP,0x484                       ; 004d6944
    POP EBP                             ; 004d694a
    POP EDI                             ; 004d694b
    POP ESI                             ; 004d694c
    POP EBX                             ; 004d694d
    RET                                 ; 004d694e
    PUSH EBX                            ; 004d694f
        ;   Label: LAB_004d694f
    MOV ESI,dword ptr [0x0061abc0]      ; 004d6950 | DAT_0061abc0
    PUSH ESI                            ; 004d6956
    CALL FUN_004943a0                   ; 004d6957
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 004d695c
    PUSH 0x0                            ; 004d695f
    LEA EAX,[ESP + 0x47c]               ; 004d6961
    PUSH EAX                            ; 004d6968
    CALL FUN_005a1860                   ; 004d6969
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1860()
    ADD ESP,0x8                         ; 004d696e
    PUSH 0x0                            ; 004d6971
    LEA EAX,[ESP + 0x450]               ; 004d6973
    PUSH EAX                            ; 004d697a
    CALL FUN_005a0a50                   ; 004d697b
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 004d6980
    ADD ESP,0x484                       ; 004d6983
    POP EBP                             ; 004d6989
    POP EDI                             ; 004d698a
    POP ESI                             ; 004d698b
    POP EBX                             ; 004d698c
    RET                                 ; 004d698d

