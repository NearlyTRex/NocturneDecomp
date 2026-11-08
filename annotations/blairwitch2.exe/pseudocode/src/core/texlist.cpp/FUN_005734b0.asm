; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005734b0(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined1       Stack[-0x129]:1  local_129
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004caac0 at 004cad8c
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_005ec547
;   TerminatedCString s_CTextureList_load_No_ext_005ec55b
;   undefined1 DAT_005ec583
;   undefined1 DAT_005ec584
;   undefined1 DAT_005ec585
;   undefined1 DAT_005ec586
;   undefined4 DAT_005ec588
;   undefined4 DAT_005ec58b
;   TerminatedCString s_core_texlist_cpp_005ec590
;   TerminatedCString s_CTextureList_load_Bad_fi_005ec5a4
;   undefined4 DAT_005ec5c7
;   undefined4 DAT_005ec5cb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00460c70
;   FUN_004e4500
;   FUN_005b8100
;   FUN_005b89c0
;   FUN_005b8e40
;   FUN_005bad20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005734b0
        ;   Label: FUN_005734b0
    PUSH ESI                            ; 005734b1
    PUSH EDI                            ; 005734b2
    PUSH EBP                            ; 005734b3
    SUB ESP,0x11c                       ; 005734b4
    MOV EBP,dword ptr [ESP + 0x130]     ; 005734ba
    MOV ESI,dword ptr [ESP + 0x134]     ; 005734c1
    MOV EDI,ESP                         ; 005734c8
    MOV DL,0x2e                         ; 005734ca
    PUSH EDI                            ; 005734cc
    MOV AL,byte ptr [ESI]               ; 005734cd
        ;   Label: LAB_005734cd
    MOV byte ptr [EDI],AL               ; 005734cf
    CMP AL,0x0                          ; 005734d1
    JZ 0x005734e5                       ; 005734d3
        ;   XREF to: 005734e5 (CONDITIONAL_JUMP)  ; LAB_005734e5
    MOV AL,byte ptr [ESI + 0x1]         ; 005734d5
    ADD ESI,0x2                         ; 005734d8
    MOV byte ptr [EDI + 0x1],AL         ; 005734db
    ADD EDI,0x2                         ; 005734de
    CMP AL,0x0                          ; 005734e1
    JNZ 0x005734cd                      ; 005734e3
        ;   XREF to: 005734cd (CONDITIONAL_JUMP)  ; LAB_005734cd
    POP EDI                             ; 005734e5
        ;   Label: LAB_005734e5
    MOV ESI,ESP                         ; 005734e6
    MOV AL,byte ptr [ESI]               ; 005734e8
        ;   Label: LAB_005734e8
    CMP AL,DL                           ; 005734ea
    JZ 0x00573500                       ; 005734ec
        ;   XREF to: 00573500 (CONDITIONAL_JUMP)  ; LAB_00573500
    CMP AL,0x0                          ; 005734ee
    JZ 0x005734fe                       ; 005734f0
        ;   XREF to: 005734fe (CONDITIONAL_JUMP)  ; LAB_005734fe
    INC ESI                             ; 005734f2
    MOV AL,byte ptr [ESI]               ; 005734f3
    CMP AL,DL                           ; 005734f5
    JZ 0x00573500                       ; 005734f7
        ;   XREF to: 00573500 (CONDITIONAL_JUMP)  ; LAB_00573500
    INC ESI                             ; 005734f9
    CMP AL,0x0                          ; 005734fa
    JNZ 0x005734e8                      ; 005734fc
        ;   XREF to: 005734e8 (CONDITIONAL_JUMP)  ; LAB_005734e8
    SUB ESI,ESI                         ; 005734fe
        ;   Label: LAB_005734fe
    MOV EDI,ESI                         ; 00573500
        ;   Label: LAB_00573500
    TEST ESI,ESI                        ; 00573502
    JZ 0x00573686                       ; 00573504
        ;   XREF to: 00573686 (CONDITIONAL_JUMP)  ; LAB_00573686
    MOV ESI,0x5ec583                    ; 0057350a | DAT_005ec583
        ;   Label: LAB_0057350a
    PUSH EDI                            ; 0057350f
    MOV AL,byte ptr [ESI]               ; 00573510 | DAT_005ec583 | DAT_005ec585
        ;   Label: LAB_00573510
    MOV byte ptr [EDI],AL               ; 00573512
    CMP AL,0x0                          ; 00573514
    JZ 0x00573528                       ; 00573516
        ;   XREF to: 00573528 (CONDITIONAL_JUMP)  ; LAB_00573528
    MOV AL,byte ptr [ESI + 0x1]         ; 00573518 | DAT_005ec584 | DAT_005ec586
    ADD ESI,0x2                         ; 0057351b
    MOV byte ptr [EDI + 0x1],AL         ; 0057351e
    ADD EDI,0x2                         ; 00573521
    CMP AL,0x0                          ; 00573524
    JNZ 0x00573510                      ; 00573526
        ;   XREF to: 00573510 (CONDITIONAL_JUMP)  ; LAB_00573510
    POP EDI                             ; 00573528
        ;   Label: LAB_00573528
    PUSH 0x5ec588                       ; 00573529 | DAT_005ec588
    LEA EAX,[ESP + 0x4]                 ; 0057352e
    PUSH EAX                            ; 00573532
    PUSH 0x5ec58b                       ; 00573533 | DAT_005ec58b
    CALL FUN_00460c70                   ; 00573538
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0057353d
    MOV dword ptr [ESP + 0x100],EAX     ; 00573540
    TEST EAX,EAX                        ; 00573547
    JNZ 0x0057356e                      ; 00573549
        ;   XREF to: 0057356e (CONDITIONAL_JUMP)  ; LAB_0057356e
    MOV EBX,0x5ec590                    ; 0057354b | = "..\\core\\texlist.cpp"
    MOV ESI,0x6a                        ; 00573550
    PUSH 0x5ec5a4                       ; 00573555 | = "CTextureList::load - Bad filename!"
    MOV dword ptr [0x01d046a0],EBX      ; 0057355a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00573560 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00573566
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0057356b
    PUSH EBP                            ; 0057356e
        ;   Label: LAB_0057356e
    PUSH 0x5ec5c7                       ; 0057356f | DAT_005ec5c7
    MOV EDI,dword ptr [ESP + 0x108]     ; 00573574
    PUSH EDI                            ; 0057357b
    CALL FUN_005b8100                   ; 0057357c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00573581
    XOR EAX,EAX                         ; 00573584
    MOV EDX,dword ptr [EBP]             ; 00573586
    MOV dword ptr [ESP + 0x110],EAX     ; 00573589
    TEST EDX,EDX                        ; 00573590
    JLE 0x0057370c                      ; 00573592
        ;   XREF to: 0057370c (CONDITIONAL_JUMP)  ; LAB_0057370c
    LEA EAX,[EBP + 0x4]                 ; 00573598
    XOR ECX,ECX                         ; 0057359b
    MOV dword ptr [ESP + 0x118],EAX     ; 0057359d
    MOV dword ptr [ESP + 0x114],EBP     ; 005735a4
    MOV dword ptr [ESP + 0x104],ECX     ; 005735ab
    ADD EAX,0x8                         ; 005735b2
    MOV dword ptr [ESP + 0x108],EBP     ; 005735b5
    MOV dword ptr [ESP + 0x10c],EAX     ; 005735bc
    MOV EAX,ESP                         ; 005735c3
        ;   Label: LAB_005735c3
    PUSH EAX                            ; 005735c5
    PUSH 0x5ec5cb                       ; 005735c6 | DAT_005ec5cb
    MOV EBX,dword ptr [ESP + 0x108]     ; 005735cb
    PUSH EBX                            ; 005735d2
    CALL FUN_005b8100                   ; 005735d3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005735d8
    MOV ESI,ESP                         ; 005735db
    MOV DL,0x2c                         ; 005735dd
    MOV AL,byte ptr [ESI]               ; 005735df
        ;   Label: LAB_005735df
    CMP AL,DL                           ; 005735e1
    JZ 0x005735f7                       ; 005735e3
        ;   XREF to: 005735f7 (CONDITIONAL_JUMP)  ; LAB_005735f7
    CMP AL,0x0                          ; 005735e5
    JZ 0x005735f5                       ; 005735e7
        ;   XREF to: 005735f5 (CONDITIONAL_JUMP)  ; LAB_005735f5
    INC ESI                             ; 005735e9
    MOV AL,byte ptr [ESI]               ; 005735ea
    CMP AL,DL                           ; 005735ec
    JZ 0x005735f7                       ; 005735ee
        ;   XREF to: 005735f7 (CONDITIONAL_JUMP)  ; LAB_005735f7
    INC ESI                             ; 005735f0
    CMP AL,0x0                          ; 005735f1
    JNZ 0x005735df                      ; 005735f3
        ;   XREF to: 005735df (CONDITIONAL_JUMP)  ; LAB_005735df
    SUB ESI,ESI                         ; 005735f5
        ;   Label: LAB_005735f5
    TEST ESI,ESI                        ; 005735f7
        ;   Label: LAB_005735f7
    JZ 0x0057375b                       ; 005735f9
        ;   XREF to: 0057375b (CONDITIONAL_JUMP)  ; LAB_0057375b
    MOV byte ptr [ESI],0x0              ; 005735ff
    INC ESI                             ; 00573602
    PUSH ESI                            ; 00573603
    CALL FUN_005bad20                   ; 00573604
        ;   XREF to: 005bad20 (UNCONDITIONAL_CALL)  ; undefined FUN_005bad20()
    ADD ESP,0x4                         ; 00573609
    MOV ECX,dword ptr [ESP + 0x114]     ; 0057360c
    MOV dword ptr [ECX + 0x5dc4],EAX    ; 00573613
    MOV ESI,ESP                         ; 00573619
        ;   Label: LAB_00573619
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0057361b
    PUSH EDI                            ; 00573622
    MOV AL,byte ptr [ESI]               ; 00573623
        ;   Label: LAB_00573623
    MOV byte ptr [EDI],AL               ; 00573625
    CMP AL,0x0                          ; 00573627
    JZ 0x0057363b                       ; 00573629
        ;   XREF to: 0057363b (CONDITIONAL_JUMP)  ; LAB_0057363b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057362b
    ADD ESI,0x2                         ; 0057362e
    MOV byte ptr [EDI + 0x1],AL         ; 00573631
    ADD EDI,0x2                         ; 00573634
    CMP AL,0x0                          ; 00573637
    JNZ 0x00573623                      ; 00573639
        ;   XREF to: 00573623 (CONDITIONAL_JUMP)  ; LAB_00573623
    POP EDI                             ; 0057363b
        ;   Label: LAB_0057363b
    MOV EAX,dword ptr [ESP + 0x108]     ; 0057363c
    XOR EBX,EBX                         ; 00573643
    MOV ESI,dword ptr [ESP + 0x104]     ; 00573645
    MOV dword ptr [EAX + 0x8],0x0       ; 0057364c
    MOV EDI,dword ptr [ESP + 0x118]     ; 00573653
        ;   Label: LAB_00573653
    ADD EDI,ESI                         ; 0057365a
    ADD EDI,0x8                         ; 0057365c
    SUB ECX,ECX                         ; 0057365f
    DEC ECX                             ; 00573661
    XOR EAX,EAX                         ; 00573662
    SCASB.REPNE ES:EDI                  ; 00573664
    NOT ECX                             ; 00573666
    DEC ECX                             ; 00573668
    CMP EBX,ECX                         ; 00573669
    JNC 0x005736ae                      ; 0057366b
        ;   XREF to: 005736ae (CONDITIONAL_JUMP)  ; LAB_005736ae
    LEA EDI,[ESI + EBP*0x1]             ; 0057366d
    XOR EAX,EAX                         ; 00573670
    MOV AL,byte ptr [EDI + EBX*0x1 + 0xc] ; 00573672
    PUSH EAX                            ; 00573676
    INC EBX                             ; 00573677
    CALL FUN_005b8e40                   ; 00573678
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 0057367d
    MOV byte ptr [EDI + EBX*0x1 + 0xb],AL ; 00573680
    JMP 0x00573653                      ; 00573684
        ;   XREF to: 00573653 (UNCONDITIONAL_JUMP)  ; LAB_00573653
    MOV EDX,0x5ec547                    ; 00573686 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_00573686
    MOV ECX,0x61                        ; 0057368b
    PUSH 0x5ec55b                       ; 00573690 | = "CTextureList::load - No extension found"
    MOV dword ptr [0x01d046a0],EDX      ; 00573695 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057369b | DAT_01d046a4
    CALL FUN_004e4500                   ; 005736a1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005736a6
    JMP 0x0057350a                      ; 005736a9
        ;   XREF to: 0057350a (UNCONDITIONAL_JUMP)  ; LAB_0057350a
    MOV ECX,dword ptr [ESP + 0x114]     ; 005736ae
        ;   Label: LAB_005736ae
    MOV EBX,dword ptr [ESP + 0x104]     ; 005736b5
    MOV ESI,dword ptr [ESP + 0x108]     ; 005736bc
    MOV EDI,dword ptr [ESP + 0x10c]     ; 005736c3
    MOV EAX,dword ptr [ESP + 0x110]     ; 005736ca
    MOV EDX,dword ptr [EBP]             ; 005736d1
    ADD ECX,0x4                         ; 005736d4
    ADD EBX,0x18                        ; 005736d7
    ADD ESI,0x18                        ; 005736da
    ADD EDI,0x18                        ; 005736dd
    INC EAX                             ; 005736e0
    MOV dword ptr [ESP + 0x114],ECX     ; 005736e1
    MOV dword ptr [ESP + 0x104],EBX     ; 005736e8
    MOV dword ptr [ESP + 0x108],ESI     ; 005736ef
    MOV dword ptr [ESP + 0x10c],EDI     ; 005736f6
    MOV dword ptr [ESP + 0x110],EAX     ; 005736fd
    CMP EAX,EDX                         ; 00573704
    JL 0x005735c3                       ; 00573706
        ;   XREF to: 005735c3 (CONDITIONAL_JUMP)  ; LAB_005735c3
    MOV ESI,dword ptr [EBP]             ; 0057370c
        ;   Label: LAB_0057370c
    CMP ESI,0x3e8                       ; 0057370f
    JGE 0x00573740                      ; 00573715
        ;   XREF to: 00573740 (CONDITIONAL_JUMP)  ; LAB_00573740
    LEA EAX,[ESI*0x4 + 0x0]             ; 00573717
    ADD EAX,EBP                         ; 0057371e
    ADD EAX,0x4                         ; 00573720
        ;   Label: LAB_00573720
    INC ESI                             ; 00573723
    MOV dword ptr [EAX + 0x5dc0],0x0    ; 00573724
    CMP ESI,0x3e8                       ; 0057372e
    JL 0x00573720                       ; 00573734
        ;   XREF to: 00573720 (CONDITIONAL_JUMP)  ; LAB_00573720
    LEA EAX,[EAX]                       ; 00573736
    LEA EDX,[EDX]                       ; 0057373c
    MOV ESI,dword ptr [ESP + 0x100]     ; 00573740
        ;   Label: LAB_00573740
    PUSH ESI                            ; 00573747
    CALL FUN_005b89c0                   ; 00573748
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0057374d
    ADD ESP,0x11c                       ; 00573750
    POP EBP                             ; 00573756
    POP EDI                             ; 00573757
    POP ESI                             ; 00573758
    POP EBX                             ; 00573759
    RET                                 ; 0057375a
    MOV EAX,dword ptr [ESP + 0x114]     ; 0057375b
        ;   Label: LAB_0057375b
    MOV dword ptr [EAX + 0x5dc4],ESI    ; 00573762
    JMP 0x00573619                      ; 00573768
        ;   XREF to: 00573619 (UNCONDITIONAL_JUMP)  ; LAB_00573619

