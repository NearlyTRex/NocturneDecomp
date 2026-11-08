; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438560(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438560
        ;   Label: FUN_00438560
    PUSH ESI                            ; 00438561
    PUSH EDI                            ; 00438562
    PUSH EBP                            ; 00438563
    SUB ESP,0x30                        ; 00438564
    MOV EBP,dword ptr [ESP + 0x48]      ; 00438567
    CALL FUN_00437270                   ; 0043856b
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined FUN_00437270()
    MOV EDX,dword ptr [0x0061b4a0]      ; 00438570 | DAT_0061b4a0
    MOV EDI,EAX                         ; 00438576
    CMP EDX,0x8                         ; 00438578
    JNZ 0x00438641                      ; 0043857b
        ;   XREF to: 00438641 (CONDITIONAL_JUMP)  ; LAB_00438641
    MOV EAX,[0x01c4f00c]                ; 00438581 | DAT_01c4f00c
    MOV EBX,dword ptr [0x01c4f014]      ; 00438586 | DAT_01c4f014
    MOV dword ptr [ESP + 0x14],EAX      ; 0043858c
    CMP EAX,EBX                         ; 00438590
    JG 0x00438616                       ; 00438592
        ;   XREF to: 00438616 (CONDITIONAL_JUMP)  ; LAB_00438616
    MOV EDX,EAX                         ; 00438598
    SHL EAX,0x5                         ; 0043859a
    ADD EAX,EDX                         ; 0043859d
    SHL EAX,0x2                         ; 0043859f
    MOV dword ptr [ESP + 0xc],EAX       ; 004385a2
    MOV EAX,EDX                         ; 004385a6
    SHL EAX,0x2                         ; 004385a8
    MOV dword ptr [ESP + 0x8],EAX       ; 004385ab
    MOV EAX,dword ptr [ESP + 0x8]       ; 004385af
        ;   Label: LAB_004385af
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 004385b3
    MOV ECX,dword ptr [0x0061b498]      ; 004385b9 | DAT_0061b498
    MOV dword ptr [ESP + 0x18],EAX      ; 004385bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 004385c3
    IMUL EAX,ECX                        ; 004385c7
    MOV EDX,dword ptr [ESP + 0x44]      ; 004385ca
    XOR EBX,EBX                         ; 004385ce
    XOR ESI,ESI                         ; 004385d0
    ADD EDX,EAX                         ; 004385d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004385d4
    MOV dword ptr [ESP + 0x24],EDX      ; 004385d8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004385dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004385e0
        ;   Label: LAB_004385e0
    ADD EAX,EBP                         ; 004385e4
    CMP EBX,dword ptr [EAX]             ; 004385e6
    JL 0x0043861e                       ; 004385e8
        ;   XREF to: 0043861e (CONDITIONAL_JUMP)  ; LAB_0043861e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004385ea
    MOV EBX,dword ptr [ESP + 0x8]       ; 004385ee
    MOV ESI,dword ptr [ESP + 0x14]      ; 004385f2
    MOV EDX,dword ptr [0x01c4f014]      ; 004385f6 | DAT_01c4f014
    ADD ECX,0x84                        ; 004385fc
    ADD EBX,0x4                         ; 00438602
    INC ESI                             ; 00438605
    MOV dword ptr [ESP + 0xc],ECX       ; 00438606
    MOV dword ptr [ESP + 0x8],EBX       ; 0043860a
    MOV dword ptr [ESP + 0x14],ESI      ; 0043860e
    CMP ESI,EDX                         ; 00438612
    JLE 0x004385af                      ; 00438614
        ;   XREF to: 004385af (CONDITIONAL_JUMP)  ; LAB_004385af
    ADD ESP,0x30                        ; 00438616
        ;   Label: LAB_00438616
    POP EBP                             ; 00438619
    POP EDI                             ; 0043861a
    POP ESI                             ; 0043861b
    POP EBX                             ; 0043861c
    RET                                 ; 0043861d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0043861e
        ;   Label: LAB_0043861e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00438622
    PUSH ECX                            ; 00438626
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00438627
    ADD EDX,ECX                         ; 0043862b
    PUSH EDX                            ; 0043862d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043862e
    LEA EAX,[EDX + ECX*0x1]             ; 00438632
    PUSH EAX                            ; 00438635
    ADD ESI,0x4                         ; 00438636
    INC EBX                             ; 00438639
    CALL EDI                            ; 0043863a
    ADD ESP,0xc                         ; 0043863c
    JMP 0x004385e0                      ; 0043863f
        ;   XREF to: 004385e0 (UNCONDITIONAL_JUMP)  ; LAB_004385e0
    MOV EAX,[0x01c4f00c]                ; 00438641 | DAT_01c4f00c
        ;   Label: LAB_00438641
    MOV ECX,dword ptr [0x01c4f014]      ; 00438646 | DAT_01c4f014
    MOV dword ptr [ESP + 0x10],EAX      ; 0043864c
    CMP EAX,ECX                         ; 00438650
    JG 0x00438616                       ; 00438652
        ;   XREF to: 00438616 (CONDITIONAL_JUMP)  ; LAB_00438616
    MOV EDX,EAX                         ; 00438654
    SHL EAX,0x5                         ; 00438656
    ADD EAX,EDX                         ; 00438659
    SHL EAX,0x2                         ; 0043865b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043865e
    MOV EAX,EDX                         ; 00438662
    SHL EAX,0x2                         ; 00438664
    MOV dword ptr [ESP],EAX             ; 00438667
    MOV EAX,dword ptr [ESP]             ; 0043866a
        ;   Label: LAB_0043866a
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 0043866d
    MOV EBX,dword ptr [0x0061b498]      ; 00438673 | DAT_0061b498
    MOV dword ptr [ESP + 0x28],EAX      ; 00438679
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043867d
    IMUL EAX,EBX                        ; 00438681
    MOV EDX,dword ptr [ESP + 0x44]      ; 00438684
    XOR ESI,ESI                         ; 00438688
    ADD EDX,EAX                         ; 0043868a
    XOR EBX,EBX                         ; 0043868c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043868e
    MOV dword ptr [ESP + 0x2c],EDX      ; 00438692
    MOV dword ptr [ESP + 0x20],EAX      ; 00438696
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043869a
        ;   Label: LAB_0043869a
    ADD EAX,EBP                         ; 0043869e
    CMP ESI,dword ptr [EAX]             ; 004386a0
    JL 0x004386d4                       ; 004386a2
        ;   XREF to: 004386d4 (CONDITIONAL_JUMP)  ; LAB_004386d4
    MOV ESI,dword ptr [ESP + 0x4]       ; 004386a4
    MOV EAX,dword ptr [ESP]             ; 004386a8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004386ab
    MOV ECX,dword ptr [0x01c4f014]      ; 004386af | DAT_01c4f014
    ADD ESI,0x84                        ; 004386b5
    ADD EAX,0x4                         ; 004386bb
    INC EDX                             ; 004386be
    MOV dword ptr [ESP + 0x4],ESI       ; 004386bf
    MOV dword ptr [ESP],EAX             ; 004386c3
    MOV dword ptr [ESP + 0x10],EDX      ; 004386c6
    CMP EDX,ECX                         ; 004386ca
    JG 0x00438616                       ; 004386cc
        ;   XREF to: 00438616 (CONDITIONAL_JUMP)  ; LAB_00438616
    JMP 0x0043866a                      ; 004386d2
        ;   XREF to: 0043866a (UNCONDITIONAL_JUMP)  ; LAB_0043866a
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44] ; 004386d4
        ;   Label: LAB_004386d4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004386d8
    PUSH ECX                            ; 004386dc
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 004386dd
    ADD EDX,ECX                         ; 004386e1
    PUSH EDX                            ; 004386e3
    LEA EAX,[ECX + ECX*0x1]             ; 004386e4
    ADD EAX,dword ptr [ESP + 0x30]      ; 004386e7
    PUSH EAX                            ; 004386eb
    ADD EBX,0x4                         ; 004386ec
    INC ESI                             ; 004386ef
    CALL EDI                            ; 004386f0
    ADD ESP,0xc                         ; 004386f2
    JMP 0x0043869a                      ; 004386f5
        ;   XREF to: 0043869a (UNCONDITIONAL_JUMP)  ; LAB_0043869a

