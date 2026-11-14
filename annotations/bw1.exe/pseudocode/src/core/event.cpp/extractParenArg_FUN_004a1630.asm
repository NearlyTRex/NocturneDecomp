; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_event_cpp_extractParenArg_FUN_004a1630(int *param_1,char *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a20d4
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_005dccbd
;   TerminatedCString s_Argument_too_long_005dccd4
;   TerminatedCString s_Can_t_find_closing_paren_005dcce6
;   undefined4 DAT_00626114
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1630
        ;   Label: core_event.cpp_extractParenArg_FUN_004a1630
    PUSH ESI                            ; 004a1631
    PUSH EDI                            ; 004a1632
    PUSH EBP                            ; 004a1633
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a1634
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a1638
    MOV ECX,dword ptr [ESI]             ; 004a163c
    MOV AL,byte ptr [ECX]               ; 004a163e
        ;   Label: LAB_004a163e
    INC AL                              ; 004a1640
    AND EAX,0xff                        ; 004a1642
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a1647 | DAT_00626114
    JZ 0x004a1653                       ; 004a164e
        ;   XREF to: 004a1653 (CONDITIONAL_JUMP)  ; LAB_004a1653
    INC ECX                             ; 004a1650
    JMP 0x004a163e                      ; 004a1651
        ;   XREF to: 004a163e (UNCONDITIONAL_JUMP)  ; LAB_004a163e
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a1653
        ;   Label: LAB_004a1653
    MOV dword ptr [ESI],ECX             ; 004a1657
    TEST EDX,EDX                        ; 004a1659
    JZ 0x004a166b                       ; 004a165b
        ;   XREF to: 004a166b (CONDITIONAL_JUMP)  ; LAB_004a166b
    MOV DH,byte ptr [ECX]               ; 004a165d
    MOV EAX,ECX                         ; 004a165f
    CMP DH,0x28                         ; 004a1661
    JNZ 0x004a16a4                      ; 004a1664
        ;   XREF to: 004a16a4 (CONDITIONAL_JUMP)  ; LAB_004a16a4
    LEA EAX,[ECX + 0x1]                 ; 004a1666
    MOV dword ptr [ESI],EAX             ; 004a1669
    XOR EBX,EBX                         ; 004a166b
        ;   Label: LAB_004a166b
    XOR ECX,ECX                         ; 004a166d
    TEST EDI,EDI                        ; 004a166f
    JLE 0x004a169a                      ; 004a1671
        ;   XREF to: 004a169a (CONDITIONAL_JUMP)  ; LAB_004a169a
    MOV EAX,dword ptr [ESI]             ; 004a1673
        ;   Label: LAB_004a1673
    MOV DL,byte ptr [EAX]               ; 004a1675
    TEST DL,DL                          ; 004a1677
    JZ 0x004a16ae                       ; 004a1679
        ;   XREF to: 004a16ae (CONDITIONAL_JUMP)  ; LAB_004a16ae
    CMP DL,0x28                         ; 004a167b
    JNZ 0x004a16b8                      ; 004a167e
        ;   XREF to: 004a16b8 (CONDITIONAL_JUMP)  ; LAB_004a16b8
    INC EBX                             ; 004a1680
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a1681
        ;   Label: LAB_004a1681
    MOV EAX,ECX                         ; 004a1685
    MOV EBP,dword ptr [ESI]             ; 004a1687
    ADD EDX,EAX                         ; 004a1689
    MOV AL,byte ptr [EBP]               ; 004a168b
    MOV byte ptr [EDX],AL               ; 004a168e
    MOV EBP,dword ptr [ESI]             ; 004a1690
    INC EBP                             ; 004a1692
    INC ECX                             ; 004a1693
    MOV dword ptr [ESI],EBP             ; 004a1694
    CMP ECX,EDI                         ; 004a1696
    JL 0x004a1673                       ; 004a1698
        ;   XREF to: 004a1673 (CONDITIONAL_JUMP)  ; LAB_004a1673
    MOV EAX,0x5dccd4                    ; 004a169a | = "Argument too long"
        ;   Label: LAB_004a169a
    POP EBP                             ; 004a169f
    POP EDI                             ; 004a16a0
    POP ESI                             ; 004a16a1
    POP EBX                             ; 004a16a2
    RET                                 ; 004a16a3
    MOV EAX,0x5dccbd                    ; 004a16a4 | = "No opening parenthesis"
        ;   Label: LAB_004a16a4
    POP EBP                             ; 004a16a9
    POP EDI                             ; 004a16aa
    POP ESI                             ; 004a16ab
    POP EBX                             ; 004a16ac
    RET                                 ; 004a16ad
    MOV EAX,0x5dcce6                    ; 004a16ae | = "Can't find closing parenthesis"
        ;   Label: LAB_004a16ae
    POP EBP                             ; 004a16b3
    POP EDI                             ; 004a16b4
    POP ESI                             ; 004a16b5
    POP EBX                             ; 004a16b6
    RET                                 ; 004a16b7
    CMP DL,0x29                         ; 004a16b8
        ;   Label: LAB_004a16b8
    JNZ 0x004a1681                      ; 004a16bb
        ;   XREF to: 004a1681 (CONDITIONAL_JUMP)  ; LAB_004a1681
    TEST EBX,EBX                        ; 004a16bd
    JZ 0x004a16c4                       ; 004a16bf
        ;   XREF to: 004a16c4 (CONDITIONAL_JUMP)  ; LAB_004a16c4
    DEC EBX                             ; 004a16c1
    JMP 0x004a1681                      ; 004a16c2
        ;   XREF to: 004a1681 (UNCONDITIONAL_JUMP)  ; LAB_004a1681
    INC EAX                             ; 004a16c4
        ;   Label: LAB_004a16c4
    MOV dword ptr [ESI],EAX             ; 004a16c5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a16c7
    ADD ECX,EAX                         ; 004a16cb
    MOV EBP,EAX                         ; 004a16cd
    MOV EDI,EAX                         ; 004a16cf
    MOV byte ptr [ECX],0x0              ; 004a16d1
    SUB ECX,ECX                         ; 004a16d4
    DEC ECX                             ; 004a16d6
    XOR EAX,EAX                         ; 004a16d7
    SCASB.REPNE ES:EDI                  ; 004a16d9
    NOT ECX                             ; 004a16db
    DEC ECX                             ; 004a16dd
    MOV EAX,ECX                         ; 004a16de
    MOV EBX,ECX                         ; 004a16e0
    TEST ECX,ECX                        ; 004a16e2
    JLE 0x004a16fd                      ; 004a16e4
        ;   XREF to: 004a16fd (CONDITIONAL_JUMP)  ; LAB_004a16fd
    LEA EAX,[ECX + EBP*0x1]             ; 004a16e6
    MOV CL,byte ptr [EAX + -0x1]        ; 004a16e9
        ;   Label: LAB_004a16e9
    INC CL                              ; 004a16ec
    AND ECX,0xff                        ; 004a16ee
    TEST byte ptr [ECX + 0x626114],0x2  ; 004a16f4 | DAT_00626114
    JNZ 0x004a1727                      ; 004a16fb
        ;   XREF to: 004a1727 (CONDITIONAL_JUMP)  ; LAB_004a1727
    LEA EAX,[EBX + EBP*0x1]             ; 004a16fd
        ;   Label: LAB_004a16fd
    LEA EDI,[EBP + 0x1]                 ; 004a1700
    MOV byte ptr [EAX],0x0              ; 004a1703
    MOV AL,byte ptr [EBP]               ; 004a1706
        ;   Label: LAB_004a1706
    INC AL                              ; 004a1709
    AND EAX,0xff                        ; 004a170b
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a1710 | DAT_00626114
    JZ 0x004a172f                       ; 004a1717
        ;   XREF to: 004a172f (CONDITIONAL_JUMP)  ; LAB_004a172f
    PUSH EBX                            ; 004a1719
    PUSH EDI                            ; 004a171a
    PUSH EBP                            ; 004a171b
    DEC EBX                             ; 004a171c
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004a171d
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a1722
    JMP 0x004a1706                      ; 004a1725
        ;   XREF to: 004a1706 (UNCONDITIONAL_JUMP)  ; LAB_004a1706
    DEC EBX                             ; 004a1727
        ;   Label: LAB_004a1727
    DEC EAX                             ; 004a1728
    TEST EBX,EBX                        ; 004a1729
    JG 0x004a16e9                       ; 004a172b
        ;   XREF to: 004a16e9 (CONDITIONAL_JUMP)  ; LAB_004a16e9
    JMP 0x004a16fd                      ; 004a172d
        ;   XREF to: 004a16fd (UNCONDITIONAL_JUMP)  ; LAB_004a16fd
    MOV EAX,dword ptr [ESI]             ; 004a172f
        ;   Label: LAB_004a172f
    MOV BL,byte ptr [EAX]               ; 004a1731
        ;   Label: LAB_004a1731
    XOR ECX,ECX                         ; 004a1733
    INC BL                              ; 004a1735
    MOV CL,BL                           ; 004a1737
    TEST byte ptr [ECX + 0x626114],0x2  ; 004a1739 | DAT_00626114
    JZ 0x004a1745                       ; 004a1740
        ;   XREF to: 004a1745 (CONDITIONAL_JUMP)  ; LAB_004a1745
    INC EAX                             ; 004a1742
    JMP 0x004a1731                      ; 004a1743
        ;   XREF to: 004a1731 (UNCONDITIONAL_JUMP)  ; LAB_004a1731
    MOV dword ptr [ESI],EAX             ; 004a1745
        ;   Label: LAB_004a1745
    XOR EAX,EAX                         ; 004a1747
    POP EBP                             ; 004a1749
    POP EDI                             ; 004a174a
    POP ESI                             ; 004a174b
    POP EBX                             ; 004a174c
    RET                                 ; 004a174d

