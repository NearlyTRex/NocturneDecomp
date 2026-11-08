; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005744e0(int *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined        Stack[-0x91c]:1  local_91c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined1       Stack[-0x11a]:1  local_11a
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005744b0 at 005744ca
;
; Called Functions:
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005744e0
        ;   Label: FUN_005744e0
    PUSH ESI                            ; 005744e1
    PUSH EDI                            ; 005744e2
    PUSH EBP                            ; 005744e3
    SUB ESP,0x90c                       ; 005744e4
    MOV ESI,dword ptr [ESP + 0x924]     ; 005744ea
    MOV EBX,dword ptr [ESP + 0x928]     ; 005744f1
    XOR EDX,EDX                         ; 005744f8
    MOV AH,byte ptr [ESI]               ; 005744fa
    MOV dword ptr [ESP + 0x900],EDX     ; 005744fc
    TEST AH,AH                          ; 00574503
    JZ 0x005745a5                       ; 00574505
        ;   XREF to: 005745a5 (CONDITIONAL_JUMP)  ; LAB_005745a5
    LEA EAX,[ESP + 0x800]               ; 0057450b
    INC EAX                             ; 00574512
    MOV dword ptr [ESP + 0x908],EAX     ; 00574513
    MOV DH,byte ptr [ESI]               ; 0057451a
        ;   Label: LAB_0057451a
    LEA EBP,[ESI + 0x1]                 ; 0057451c
    CMP DH,0x25                         ; 0057451f
    JNZ 0x005745b7                      ; 00574522
        ;   XREF to: 005745b7 (CONDITIONAL_JUMP)  ; LAB_005745b7
    MOV byte ptr [ESP + 0x800],DH       ; 00574528
    MOV CL,0x20                         ; 0057452f
    MOV EAX,dword ptr [EBX]             ; 00574531
    MOV EDI,dword ptr [ESP + 0x908]     ; 00574533
    MOV dword ptr [ESP + 0x904],EAX     ; 0057453a
    MOV ESI,EBP                         ; 00574541
    MOV CH,byte ptr [EBP]               ; 00574543
    XOR EDX,EDX                         ; 00574546
    TEST CH,CH                          ; 00574548
    JZ 0x00574554                       ; 0057454a
        ;   XREF to: 00574554 (CONDITIONAL_JUMP)  ; LAB_00574554
    TEST EDX,EDX                        ; 0057454c
        ;   Label: LAB_0057454c
    JZ 0x0057467e                       ; 0057454e
        ;   XREF to: 0057467e (CONDITIONAL_JUMP)  ; LAB_0057467e
    LEA EAX,[ESP + 0x904]               ; 00574554
        ;   Label: LAB_00574554
    PUSH EAX                            ; 0057455b
    LEA EAX,[ESP + 0x804]               ; 0057455c
    PUSH EAX                            ; 00574563
    LEA EAX,[ESP + 0x8]                 ; 00574564
    PUSH EAX                            ; 00574568
    MOV byte ptr [EDI],0x0              ; 00574569
    CALL FUN_005a2898                   ; 0057456c
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 00574571
    PUSH EAX                            ; 00574574
    LEA EAX,[ESP + 0x4]                 ; 00574575
    MOV EDX,dword ptr [ESP + 0x924]     ; 00574579
    PUSH EAX                            ; 00574580
    MOV EAX,dword ptr [ESP + 0x928]     ; 00574581
    MOV EDX,dword ptr [EDX]             ; 00574588
    PUSH EAX                            ; 0057458a
    CALL dword ptr [EDX + 0x8]          ; 0057458b
    ADD ESP,0xc                         ; 0057458e
    TEST EAX,EAX                        ; 00574591
    JL 0x005745ac                       ; 00574593
        ;   XREF to: 005745ac (CONDITIONAL_JUMP)  ; LAB_005745ac
    ADD dword ptr [ESP + 0x900],EAX     ; 00574595
    CMP byte ptr [ESI],0x0              ; 0057459c
        ;   Label: LAB_0057459c
    JNZ 0x0057451a                      ; 0057459f
        ;   XREF to: 0057451a (CONDITIONAL_JUMP)  ; LAB_0057451a
    MOV EAX,dword ptr [ESP + 0x900]     ; 005745a5
        ;   Label: LAB_005745a5
    ADD ESP,0x90c                       ; 005745ac
        ;   Label: LAB_005745ac
    POP EBP                             ; 005745b2
    POP EDI                             ; 005745b3
    POP ESI                             ; 005745b4
    POP EBX                             ; 005745b5
    RET                                 ; 005745b6
    XOR EDX,EDX                         ; 005745b7
        ;   Label: LAB_005745b7
    MOV DL,byte ptr [ESI]               ; 005745b9
    MOV EAX,dword ptr [ESP + 0x920]     ; 005745bb
    PUSH EDX                            ; 005745c2
    MOV ECX,dword ptr [ESP + 0x924]     ; 005745c3
    MOV EAX,dword ptr [EAX]             ; 005745ca
    PUSH ECX                            ; 005745cc
    CALL dword ptr [EAX + 0x4]          ; 005745cd
    ADD ESP,0x8                         ; 005745d0
    TEST EAX,EAX                        ; 005745d3
    JNZ 0x005745ac                      ; 005745d5
        ;   XREF to: 005745ac (CONDITIONAL_JUMP)  ; LAB_005745ac
    MOV EDI,dword ptr [ESP + 0x900]     ; 005745d7
    INC EDI                             ; 005745de
    MOV ESI,EBP                         ; 005745df
    MOV dword ptr [ESP + 0x900],EDI     ; 005745e1
    JMP 0x0057459c                      ; 005745e8
        ;   XREF to: 0057459c (UNCONDITIONAL_JUMP)  ; LAB_0057459c
    MOV CL,byte ptr [ESI]               ; 005745ea
        ;   Label: LAB_005745ea
    CMP byte ptr [ESI],0x0              ; 005745ec
    JNZ 0x0057454c                      ; 005745ef
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 005745f5
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    CMP CL,0x6c                         ; 005745fa
        ;   Label: LAB_005745fa
    JNZ 0x00574604                      ; 005745fd
        ;   XREF to: 00574604 (CONDITIONAL_JUMP)  ; LAB_00574604
    ADD dword ptr [EBX],0x4             ; 005745ff
    JMP 0x00574651                      ; 00574602
        ;   XREF to: 00574651 (UNCONDITIONAL_JUMP)  ; LAB_00574651
    CMP CL,0x4c                         ; 00574604
        ;   Label: LAB_00574604
    ADD dword ptr [EBX],0x4             ; 00574607
    MOV EDX,0x1                         ; 0057460a
    CMP byte ptr [ESI],0x0              ; 0057460f
    JNZ 0x0057454c                      ; 00574612
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 00574618
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    MOV EBP,dword ptr [EBX]             ; 0057461d
        ;   Label: LAB_0057461d
    ADD EBP,0x4                         ; 0057461f
    MOV EDX,0x1                         ; 00574622
    MOV dword ptr [EBX],EBP             ; 00574627
    CMP byte ptr [ESI],0x0              ; 00574629
    JNZ 0x0057454c                      ; 0057462c
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 00574632
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    MOV EDX,dword ptr [EBX]             ; 00574637
        ;   Label: LAB_00574637
    ADD EDX,0x4                         ; 00574639
    MOV dword ptr [EBX],EDX             ; 0057463c
    MOV EAX,dword ptr [EDX + -0x4]      ; 0057463e
    MOV EDX,dword ptr [ESP + 0x900]     ; 00574641
    LEA EDI,[ESP + 0x800]               ; 00574648
    MOV dword ptr [EAX],EDX             ; 0057464f
    MOV EDX,0x1                         ; 00574651
        ;   Label: LAB_00574651
    CMP byte ptr [ESI],0x0              ; 00574656
        ;   Label: LAB_00574656
    JNZ 0x0057454c                      ; 00574659
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 0057465f
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    MOV EAX,dword ptr [EBX]             ; 00574664
        ;   Label: LAB_00574664
    ADD EAX,0x4                         ; 00574666
    MOV EDX,0x1                         ; 00574669
    MOV dword ptr [EBX],EAX             ; 0057466e
    CMP byte ptr [ESI],0x0              ; 00574670
    JNZ 0x0057454c                      ; 00574673
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 00574679
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    XOR EAX,EAX                         ; 0057467e
        ;   Label: LAB_0057467e
    INC EDI                             ; 00574680
    MOV AL,byte ptr [ESI]               ; 00574681
    INC ESI                             ; 00574683
    MOV byte ptr [EDI + -0x1],AL        ; 00574684
    CMP EAX,0x64                        ; 00574687
    JNC 0x005746b1                      ; 0057468a
        ;   XREF to: 005746b1 (CONDITIONAL_JUMP)  ; LAB_005746b1
    CMP EAX,0x46                        ; 0057468c
    JNC 0x00574742                      ; 0057468f
        ;   XREF to: 00574742 (CONDITIONAL_JUMP)  ; LAB_00574742
    CMP EAX,0x43                        ; 00574695
    JNC 0x00574791                      ; 00574698
        ;   XREF to: 00574791 (CONDITIONAL_JUMP)  ; LAB_00574791
    CMP EAX,0x25                        ; 0057469e
    JZ 0x00574651                       ; 005746a1
        ;   XREF to: 00574651 (CONDITIONAL_JUMP)  ; LAB_00574651
    CMP byte ptr [ESI],0x0              ; 005746a3
    JNZ 0x0057454c                      ; 005746a6
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 005746ac
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x005745fa                      ; 005746b1
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
        ;   Label: LAB_005746b1
    CMP EAX,0x6e                        ; 005746b7
    JNC 0x005746eb                      ; 005746ba
        ;   XREF to: 005746eb (CONDITIONAL_JUMP)  ; LAB_005746eb
    CMP EAX,0x67                        ; 005746bc
    JC 0x005747a0                       ; 005746bf
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    JBE 0x005747a0                      ; 005746c5
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    CMP EAX,0x68                        ; 005746cb
    JBE 0x005745ea                      ; 005746ce
        ;   XREF to: 005745ea (CONDITIONAL_JUMP)  ; LAB_005745ea
    CMP EAX,0x6c                        ; 005746d4
    JZ 0x005745ea                       ; 005746d7
        ;   XREF to: 005745ea (CONDITIONAL_JUMP)  ; LAB_005745ea
    CMP byte ptr [ESI],0x0              ; 005746dd
    JNZ 0x0057454c                      ; 005746e0
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 005746e6
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x00574637                      ; 005746eb
        ;   XREF to: 00574637 (CONDITIONAL_JUMP)  ; LAB_00574637
        ;   Label: LAB_005746eb
    CMP EAX,0x73                        ; 005746f1
    JNC 0x00574716                      ; 005746f4
        ;   XREF to: 00574716 (CONDITIONAL_JUMP)  ; LAB_00574716
    CMP EAX,0x6f                        ; 005746f6
    JBE 0x005745fa                      ; 005746f9
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
    CMP EAX,0x70                        ; 005746ff
    JZ 0x00574664                       ; 00574702
        ;   XREF to: 00574664 (CONDITIONAL_JUMP)  ; LAB_00574664
    CMP byte ptr [ESI],0x0              ; 00574708
    JNZ 0x0057454c                      ; 0057470b
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 00574711
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x0057461d                      ; 00574716
        ;   XREF to: 0057461d (CONDITIONAL_JUMP)  ; LAB_0057461d
        ;   Label: LAB_00574716
    CMP EAX,0x75                        ; 0057471c
    JC 0x00574656                       ; 0057471f
        ;   XREF to: 00574656 (CONDITIONAL_JUMP)  ; LAB_00574656
    JBE 0x005745fa                      ; 00574725
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
    CMP EAX,0x78                        ; 0057472b
    JZ 0x005745fa                       ; 0057472e
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
    CMP byte ptr [ESI],0x0              ; 00574734
    JNZ 0x0057454c                      ; 00574737
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 0057473d
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x005747a0                      ; 00574742
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
        ;   Label: LAB_00574742
    CMP EAX,0x4f                        ; 00574744
    JNC 0x00574765                      ; 00574747
        ;   XREF to: 00574765 (CONDITIONAL_JUMP)  ; LAB_00574765
    CMP EAX,0x47                        ; 00574749
    JBE 0x005747a0                      ; 0057474c
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    CMP EAX,0x4c                        ; 0057474e
    JZ 0x005745ea                       ; 00574751
        ;   XREF to: 005745ea (CONDITIONAL_JUMP)  ; LAB_005745ea
    CMP byte ptr [ESI],0x0              ; 00574757
    JNZ 0x0057454c                      ; 0057475a
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 00574760
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x005745fa                      ; 00574765
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
        ;   Label: LAB_00574765
    CMP EAX,0x58                        ; 0057476b
    JC 0x00574656                       ; 0057476e
        ;   XREF to: 00574656 (CONDITIONAL_JUMP)  ; LAB_00574656
    JBE 0x005745fa                      ; 00574774
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
    CMP EAX,0x63                        ; 0057477a
    JZ 0x0057461d                       ; 0057477d
        ;   XREF to: 0057461d (CONDITIONAL_JUMP)  ; LAB_0057461d
    CMP byte ptr [ESI],0x0              ; 00574783
    JNZ 0x0057454c                      ; 00574786
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 0057478c
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    JBE 0x0057461d                      ; 00574791
        ;   XREF to: 0057461d (CONDITIONAL_JUMP)  ; LAB_0057461d
        ;   Label: LAB_00574791
    CMP EAX,0x44                        ; 00574797
    JBE 0x005745fa                      ; 0057479a
        ;   XREF to: 005745fa (CONDITIONAL_JUMP)  ; LAB_005745fa
    CMP CL,0x4c                         ; 005747a0
        ;   Label: LAB_005747a0
    ADD dword ptr [EBX],0x8             ; 005747a3
    MOV EDX,0x1                         ; 005747a6
    CMP byte ptr [ESI],0x0              ; 005747ab
    JNZ 0x0057454c                      ; 005747ae
        ;   XREF to: 0057454c (CONDITIONAL_JUMP)  ; LAB_0057454c
    JMP 0x00574554                      ; 005747b4
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554

