; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490470(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x16c]:1  local_16c
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
; XREF[1]:
;   FUN_0048ff70 at 0049017f
;
; Referenced Globals:
;   string s_..\\engine\\font.cpp_00581829
;   string s_Out_of_memory_0058183c
;   string s_No_character_markers_found_in_fo_0058184a
;   string s_..\\engine\\font.cpp_00581878
;   string s_Too_many_chars:_fontfile_%s,_cha_0058188b
;   string s_..\\engine\\font.cpp_005818b1
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00490920
;   FUN_004c8440
;   FUN_00563c90
;   FUN_00564486
;   FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490470
        ;   Label: FUN_00490470
    PUSH ESI                            ; 00490471
    PUSH EDI                            ; 00490472
    PUSH EBP                            ; 00490473
    SUB ESP,0x15c                       ; 00490474
    MOV ESI,dword ptr [ESP + 0x170]     ; 0049047a
    MOV EBX,dword ptr [ESP + 0x178]     ; 00490481
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00490488
    IMUL EBX,EDX                        ; 0049048f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00490492
    PUSH EAX                            ; 00490499
    CALL FUN_00564c18                   ; 0049049a
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c18()
    ADD ESP,0x4                         ; 0049049f
    MOV dword ptr [ESP + 0x12c],EAX     ; 004904a2
    TEST EAX,EAX                        ; 004904a9
    JZ 0x004906e1                       ; 004904ab
        ;   XREF to: 004906e1 (CONDITIONAL_JUMP)  ; LAB_004906e1
    MOV EAX,dword ptr [ESI + 0x3188]    ; 004904b1
        ;   Label: LAB_004904b1
    MOV dword ptr [ESP + 0x14c],EAX     ; 004904b7
    MOV EAX,dword ptr [ESP + 0x174]     ; 004904be
    XOR EDX,EDX                         ; 004904c5
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x144] ; 004904c7
    TEST EBX,EBX                        ; 004904ce
    JLE 0x004904eb                      ; 004904d0
        ;   XREF to: 004904eb (CONDITIONAL_JUMP)  ; LAB_004904eb
    XOR ECX,ECX                         ; 004904d2
        ;   Label: LAB_004904d2
    MOV EBP,dword ptr [ESI + 0x3188]    ; 004904d4
    MOV CL,byte ptr [EAX]               ; 004904da
    CMP ECX,EBP                         ; 004904dc
    JZ 0x00490709                       ; 004904de
        ;   XREF to: 00490709 (CONDITIONAL_JUMP)  ; LAB_00490709
    MOV dword ptr [ESP + 0x14c],ECX     ; 004904e4
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004904eb
        ;   Label: LAB_004904eb
    CMP EAX,dword ptr [ESI + 0x3188]    ; 004904f2
    JNZ 0x00490546                      ; 004904f8
        ;   XREF to: 00490546 (CONDITIONAL_JUMP)  ; LAB_00490546
    MOV EDX,dword ptr [ESP + 0x174]     ; 004904fa
    LEA EAX,[EDX*0x4 + 0x0]             ; 00490501
    ADD EAX,EDX                         ; 00490508
    SHL EAX,0x4                         ; 0049050a
    LEA EDX,[ESI + 0x4]                 ; 0049050d
    ADD EAX,EDX                         ; 00490510
    PUSH EAX                            ; 00490512
    PUSH 0x58184a                       ; 00490513 | = "No character markers found in font fi..."
    LEA EAX,[ESP + 0x8]                 ; 00490518
    PUSH EAX                            ; 0049051c
    MOV EBX,0x1ce                       ; 0049051d
    CALL FUN_00563c90                   ; 00490522
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 00490527
    MOV EAX,ESP                         ; 0049052a
    MOV ECX,0x581878                    ; 0049052c | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 00490531
    MOV dword ptr [0x01cc4804],EBX      ; 00490532 | DAT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 00490538 | DAT_01cc4800
    CALL FUN_004c8440                   ; 0049053e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00490543
    MOV EAX,dword ptr [ESP + 0x174]     ; 00490546
        ;   Label: LAB_00490546
    XOR EDI,EDI                         ; 0049054d
    XOR EBP,EBP                         ; 0049054f
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x144] ; 00490551
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00490558
    MOV dword ptr [ESP + 0x138],EDI     ; 0049055f
    TEST EAX,EAX                        ; 00490566
    JLE 0x004905bb                      ; 00490568
        ;   XREF to: 004905bb (CONDITIONAL_JUMP)  ; LAB_004905bb
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0049056a
    MOV EAX,dword ptr [ESP + 0x178]     ; 00490571
        ;   Label: LAB_00490571
    MOV EDI,EDX                         ; 00490578
    XOR EBX,EBX                         ; 0049057a
    TEST EAX,EAX                        ; 0049057c
    JLE 0x004905a6                      ; 0049057e
        ;   XREF to: 004905a6 (CONDITIONAL_JUMP)  ; LAB_004905a6
    XOR EAX,EAX                         ; 00490580
        ;   Label: LAB_00490580
    MOV AL,byte ptr [EDI]               ; 00490582
    CMP EAX,dword ptr [ESP + 0x14c]     ; 00490584
    JNZ 0x00490718                      ; 0049058b
        ;   XREF to: 00490718 (CONDITIONAL_JUMP)  ; LAB_00490718
    MOV EBX,dword ptr [ESP + 0x138]     ; 00490591
    ADD ECX,0x4                         ; 00490598
    INC EBX                             ; 0049059b
    MOV dword ptr [ECX + -0x4],EBP      ; 0049059c
    MOV dword ptr [ESP + 0x138],EBX     ; 0049059f
    MOV EBX,dword ptr [ESP + 0x178]     ; 004905a6
        ;   Label: LAB_004905a6
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004905ad
    INC EBP                             ; 004905b4
    ADD EDX,EBX                         ; 004905b5
    CMP EBP,EDI                         ; 004905b7
    JL 0x00490571                       ; 004905b9
        ;   XREF to: 00490571 (CONDITIONAL_JUMP)  ; LAB_00490571
    MOV EDX,dword ptr [ESP + 0x138]     ; 004905bb
        ;   Label: LAB_004905bb
    MOV EBP,dword ptr [ESP + 0x180]     ; 004905c2
    XOR EAX,EAX                         ; 004905c9
    DEC EDX                             ; 004905cb
    MOV dword ptr [ESP + 0x134],EAX     ; 004905cc
    MOV dword ptr [ESP + 0x138],EDX     ; 004905d3
    TEST EDX,EDX                        ; 004905da
    JLE 0x004908c7                      ; 004905dc
        ;   XREF to: 004908c7 (CONDITIONAL_JUMP)  ; LAB_004908c7
    MOV EDX,dword ptr [ESP + 0x174]     ; 004905e2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004905e9
    ADD EDX,EAX                         ; 004905f0
    SHL EDX,0x4                         ; 004905f2
    LEA EAX,[ESI + 0x4]                 ; 004905f5
    ADD EAX,EDX                         ; 004905f8
    MOV dword ptr [ESP + 0x140],EAX     ; 004905fa
    MOV EAX,dword ptr [ESP + 0x174]     ; 00490601
    SHL EAX,0x2                         ; 00490608
    LEA EDX,[ESI + EAX*0x1]             ; 0049060b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0049060e
    MOV dword ptr [ESP + 0x130],EDX     ; 00490615
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049061c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00490623
        ;   Label: LAB_00490623
    MOV EBX,dword ptr [ESP + 0x178]     ; 0049062a
    MOV EAX,dword ptr [EAX]             ; 00490631
    IMUL EAX,EBX                        ; 00490633
    MOV EDX,dword ptr [ESP + 0x130]     ; 00490636
    XOR EDI,EDI                         ; 0049063d
    MOV EDX,dword ptr [EDX + 0x144]     ; 0049063f
    MOV dword ptr [ESP + 0x154],EDI     ; 00490645
    ADD EDX,EAX                         ; 0049064c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0049064e
    MOV dword ptr [ESP + 0x158],EDX     ; 00490655
    MOV dword ptr [ESP + 0x148],EAX     ; 0049065c
    MOV EAX,EDX                         ; 00490663
    MOV EDX,dword ptr [ESP + 0x178]     ; 00490665
    LEA EBX,[EBP*0x4 + 0x0]             ; 0049066c
    ADD EAX,EDX                         ; 00490673
    ADD EBX,ESI                         ; 00490675
    MOV dword ptr [ESP + 0x150],EAX     ; 00490677
    MOV ECX,dword ptr [ESP + 0x144]     ; 0049067e
        ;   Label: LAB_0049067e
    MOV EAX,EDI                         ; 00490685
    MOV EDX,dword ptr [ESP + 0x178]     ; 00490687
    SUB EAX,ECX                         ; 0049068e
    CMP EDI,EDX                         ; 00490690
    JGE 0x00490824                      ; 00490692
        ;   XREF to: 00490824 (CONDITIONAL_JUMP)  ; LAB_00490824
    CMP dword ptr [ESP + 0x154],0x0     ; 00490698
    JNZ 0x00490796                      ; 004906a0
        ;   XREF to: 00490796 (CONDITIONAL_JUMP)  ; LAB_00490796
    MOV EDX,dword ptr [ESP + 0x158]     ; 004906a6
    XOR EAX,EAX                         ; 004906ad
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004906af
    MOV AL,byte ptr [EDX]               ; 004906b6
    CMP EAX,ECX                         ; 004906b8
    JZ 0x0049072e                       ; 004906ba
        ;   XREF to: 0049072e (CONDITIONAL_JUMP)  ; LAB_0049072e
    MOV EDX,dword ptr [ESP + 0x150]     ; 004906c0
        ;   Label: LAB_004906c0
    MOV ECX,dword ptr [ESP + 0x158]     ; 004906c7
    INC EDI                             ; 004906ce
    INC EDX                             ; 004906cf
    INC ECX                             ; 004906d0
    MOV dword ptr [ESP + 0x150],EDX     ; 004906d1
    MOV dword ptr [ESP + 0x158],ECX     ; 004906d8
    JMP 0x0049067e                      ; 004906df
        ;   XREF to: 0049067e (UNCONDITIONAL_JUMP)  ; LAB_0049067e
    MOV ECX,0x581829                    ; 004906e1 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004906e1
    MOV EDI,0x1b9                       ; 004906e6
    PUSH 0x58183c                       ; 004906eb | = "Out of memory"
    MOV dword ptr [0x01cc4800],ECX      ; 004906f0 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004906f6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004906fc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00490701
    JMP 0x004904b1                      ; 00490704
        ;   XREF to: 004904b1 (UNCONDITIONAL_JUMP)  ; LAB_004904b1
    INC EDX                             ; 00490709
        ;   Label: LAB_00490709
    INC EAX                             ; 0049070a
    CMP EDX,EBX                         ; 0049070b
    JL 0x004904d2                       ; 0049070d
        ;   XREF to: 004904d2 (CONDITIONAL_JUMP)  ; LAB_004904d2
    JMP 0x004904eb                      ; 00490713
        ;   XREF to: 004904eb (UNCONDITIONAL_JUMP)  ; LAB_004904eb
    MOV EAX,dword ptr [ESP + 0x178]     ; 00490718
        ;   Label: LAB_00490718
    INC EBX                             ; 0049071f
    INC EDI                             ; 00490720
    CMP EBX,EAX                         ; 00490721
    JL 0x00490580                       ; 00490723
        ;   XREF to: 00490580 (CONDITIONAL_JUMP)  ; LAB_00490580
    JMP 0x004905a6                      ; 00490729
        ;   XREF to: 004905a6 (UNCONDITIONAL_JUMP)  ; LAB_004905a6
    MOV EAX,0x1                         ; 0049072e
        ;   Label: LAB_0049072e
    MOV dword ptr [ESP + 0x144],EDI     ; 00490733
    MOV dword ptr [ESP + 0x154],EAX     ; 0049073a
    CMP EBP,0x100                       ; 00490741
    JL 0x00490784                       ; 00490747
        ;   XREF to: 00490784 (CONDITIONAL_JUMP)  ; LAB_00490784
    PUSH EBP                            ; 00490749
    MOV EDX,dword ptr [ESP + 0x144]     ; 0049074a
    PUSH EDX                            ; 00490751
    PUSH 0x58188b                       ; 00490752 | = "Too many chars: fontfile %s, chars %d"
    LEA EAX,[ESP + 0xc]                 ; 00490757
    PUSH EAX                            ; 0049075b
    CALL FUN_00563c90                   ; 0049075c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    MOV EAX,0x202                       ; 00490761
    ADD ESP,0x10                        ; 00490766
    MOV [0x01cc4804],EAX                ; 00490769 | DAT_01cc4804
    MOV EAX,ESP                         ; 0049076e
    MOV ECX,0x5818b1                    ; 00490770 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 00490775
    MOV dword ptr [0x01cc4800],ECX      ; 00490776 | DAT_01cc4800
    CALL FUN_004c8440                   ; 0049077c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00490781
    MOV EAX,dword ptr [ESP + 0x150]     ; 00490784
        ;   Label: LAB_00490784
    MOV dword ptr [EBX + 0x1d68],EAX    ; 0049078b
    JMP 0x004906c0                      ; 00490791
        ;   XREF to: 004906c0 (UNCONDITIONAL_JUMP)  ; LAB_004906c0
    MOV ECX,dword ptr [ESP + 0x158]     ; 00490796
        ;   Label: LAB_00490796
    XOR EDX,EDX                         ; 0049079d
    MOV DL,byte ptr [ECX]               ; 0049079f
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004907a1
    CMP EDX,ECX                         ; 004907a8
    JZ 0x004906c0                       ; 004907aa
        ;   XREF to: 004906c0 (CONDITIONAL_JUMP)  ; LAB_004906c0
    MOV dword ptr [EBX + 0x2568],EAX    ; 004907b0
    XOR EDX,EDX                         ; 004907b6
    MOV ECX,dword ptr [ESI + 0x3168]    ; 004907b8
    MOV dword ptr [ESP + 0x154],EDX     ; 004907be
    CMP EAX,ECX                         ; 004907c5
    JLE 0x004907cf                      ; 004907c7
        ;   XREF to: 004907cf (CONDITIONAL_JUMP)  ; LAB_004907cf
    MOV dword ptr [ESI + 0x3168],EAX    ; 004907c9
    MOV EAX,dword ptr [ESP + 0x178]     ; 004907cf
        ;   Label: LAB_004907cf
    PUSH EAX                            ; 004907d6
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004907d7
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004907de
    MOV EAX,dword ptr [EAX]             ; 004907e5
    MOV EDX,dword ptr [EDX + 0x4]       ; 004907e7
    INC EAX                             ; 004907ea
    SUB EDX,EAX                         ; 004907eb
    PUSH EDX                            ; 004907ed
    MOV EDX,dword ptr [EBX + 0x2568]    ; 004907ee
    PUSH EDX                            ; 004907f4
    MOV ECX,dword ptr [EBX + 0x1d68]    ; 004907f5
    PUSH ECX                            ; 004907fb
    PUSH ESI                            ; 004907fc
    CALL FUN_00490920                   ; 004907fd
        ;   XREF to: 00490920 (UNCONDITIONAL_CALL)  ; undefined FUN_00490920()
    MOV dword ptr [EBX + 0x2968],EAX    ; 00490802
    MOV EDX,dword ptr [ESI + 0x316c]    ; 00490808
    ADD ESP,0x14                        ; 0049080e
    CMP EAX,EDX                         ; 00490811
    JLE 0x0049081b                      ; 00490813
        ;   XREF to: 0049081b (CONDITIONAL_JUMP)  ; LAB_0049081b
    MOV dword ptr [ESI + 0x316c],EAX    ; 00490815
    INC EBP                             ; 0049081b
        ;   Label: LAB_0049081b
    ADD EBX,0x4                         ; 0049081c
    JMP 0x004906c0                      ; 0049081f
        ;   XREF to: 004906c0 (UNCONDITIONAL_JUMP)  ; LAB_004906c0
    CMP dword ptr [ESP + 0x154],0x1     ; 00490824
        ;   Label: LAB_00490824
    JNZ 0x00490898                      ; 0049082c
        ;   XREF to: 00490898 (CONDITIONAL_JUMP)  ; LAB_00490898
    MOV dword ptr [EBX + 0x2568],EAX    ; 0049082e
    CMP EAX,dword ptr [ESI + 0x3168]    ; 00490834
    JLE 0x00490842                      ; 0049083a
        ;   XREF to: 00490842 (CONDITIONAL_JUMP)  ; LAB_00490842
    MOV dword ptr [ESI + 0x3168],EAX    ; 0049083c
    MOV EAX,dword ptr [ESP + 0x178]     ; 00490842
        ;   Label: LAB_00490842
    PUSH EAX                            ; 00490849
    MOV EAX,dword ptr [ESP + 0x140]     ; 0049084a
    MOV EDX,dword ptr [ESP + 0x140]     ; 00490851
    MOV EAX,dword ptr [EAX]             ; 00490858
    MOV EDX,dword ptr [EDX + 0x4]       ; 0049085a
    INC EAX                             ; 0049085d
    LEA EBX,[EBP*0x4 + 0x0]             ; 0049085e
    SUB EDX,EAX                         ; 00490865
    ADD EBX,ESI                         ; 00490867
    PUSH EDX                            ; 00490869
    MOV EDX,dword ptr [EBX + 0x2568]    ; 0049086a
    PUSH EDX                            ; 00490870
    MOV ECX,dword ptr [EBX + 0x1d68]    ; 00490871
    PUSH ECX                            ; 00490877
    PUSH ESI                            ; 00490878
    CALL FUN_00490920                   ; 00490879
        ;   XREF to: 00490920 (UNCONDITIONAL_CALL)  ; undefined FUN_00490920()
    MOV dword ptr [EBX + 0x2968],EAX    ; 0049087e
    MOV EDI,dword ptr [ESI + 0x316c]    ; 00490884
    ADD ESP,0x14                        ; 0049088a
    CMP EAX,EDI                         ; 0049088d
    JLE 0x00490897                      ; 0049088f
        ;   XREF to: 00490897 (CONDITIONAL_JUMP)  ; LAB_00490897
    MOV dword ptr [ESI + 0x316c],EAX    ; 00490891
    INC EBP                             ; 00490897
        ;   Label: LAB_00490897
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00490898
        ;   Label: LAB_00490898
    MOV EAX,dword ptr [ESP + 0x134]     ; 0049089f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004908a6
    ADD EDI,0x4                         ; 004908ad
    INC EAX                             ; 004908b0
    MOV dword ptr [ESP + 0x13c],EDI     ; 004908b1
    MOV dword ptr [ESP + 0x134],EAX     ; 004908b8
    CMP EAX,EDX                         ; 004908bf
    JL 0x00490623                       ; 004908c1
        ;   XREF to: 00490623 (CONDITIONAL_JUMP)  ; LAB_00490623
    MOV EBX,dword ptr [ESP + 0x180]     ; 004908c7
        ;   Label: LAB_004908c7
    CMP EBP,EBX                         ; 004908ce
    JLE 0x004908f0                      ; 004908d0
        ;   XREF to: 004908f0 (CONDITIONAL_JUMP)  ; LAB_004908f0
    LEA EAX,[EBX*0x4 + 0x0]             ; 004908d2
    MOV EDX,dword ptr [ESP + 0x174]     ; 004908d9
    ADD EAX,ESI                         ; 004908e0
    ADD EAX,0x4                         ; 004908e2
        ;   Label: LAB_004908e2
    INC EBX                             ; 004908e5
    MOV dword ptr [EAX + 0x2164],EDX    ; 004908e6
    CMP EBX,EBP                         ; 004908ec
    JL 0x004908e2                       ; 004908ee
        ;   XREF to: 004908e2 (CONDITIONAL_JUMP)  ; LAB_004908e2
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004908f0
        ;   Label: LAB_004908f0
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004908f7
    PUSH EBX                            ; 004908fd
    MOV dword ptr [ESI + 0x3170],EAX    ; 004908fe
    CALL FUN_00564486                   ; 00490904
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00490909
    ADD ESP,0x15c                       ; 0049090c
    POP EBP                             ; 00490912
    POP EDI                             ; 00490913
    POP ESI                             ; 00490914
    POP EBX                             ; 00490915
    RET                                 ; 00490916

