; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_extractParenArg_FUN_0047a650(int *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047ae76
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_0057f4ac
;   TerminatedCString s_Argument_too_long_0057f4c3
;   TerminatedCString s_Can_t_find_closing_paren_0057f4d5
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a650
        ;   Label: core_event.cpp_extractParenArg_FUN_0047a650
    PUSH ESI                            ; 0047a651
    PUSH EDI                            ; 0047a652
    PUSH EBP                            ; 0047a653
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047a654
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047a658
    MOV ECX,dword ptr [ESI]             ; 0047a65c
    MOV AL,byte ptr [ECX]               ; 0047a65e
        ;   Label: LAB_0047a65e
    INC AL                              ; 0047a660
    AND EAX,0xff                        ; 0047a662
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047a667 | DAT_005c168c
    JZ 0x0047a673                       ; 0047a66e
        ;   XREF to: 0047a673 (CONDITIONAL_JUMP)  ; LAB_0047a673
    INC ECX                             ; 0047a670
    JMP 0x0047a65e                      ; 0047a671
        ;   XREF to: 0047a65e (UNCONDITIONAL_JUMP)  ; LAB_0047a65e
    MOV dword ptr [ESI],ECX             ; 0047a673
        ;   Label: LAB_0047a673
    CMP byte ptr [ECX],0x28             ; 0047a675
    JNZ 0x0047a6b4                      ; 0047a678
        ;   XREF to: 0047a6b4 (CONDITIONAL_JUMP)  ; LAB_0047a6b4
    XOR EBX,EBX                         ; 0047a67a
    XOR ECX,ECX                         ; 0047a67c
    TEST EDI,EDI                        ; 0047a67e
    JLE 0x0047a6aa                      ; 0047a680
        ;   XREF to: 0047a6aa (CONDITIONAL_JUMP)  ; LAB_0047a6aa
    MOV EDX,dword ptr [ESI]             ; 0047a682
        ;   Label: LAB_0047a682
    INC EDX                             ; 0047a684
    MOV dword ptr [ESI],EDX             ; 0047a685
    MOV EAX,EDX                         ; 0047a687
    CMP byte ptr [EDX],0x0              ; 0047a689
    JZ 0x0047a6be                       ; 0047a68c
        ;   XREF to: 0047a6be (CONDITIONAL_JUMP)  ; LAB_0047a6be
    MOV DH,byte ptr [EAX]               ; 0047a68e
    CMP DH,0x28                         ; 0047a690
    JNZ 0x0047a6c8                      ; 0047a693
        ;   XREF to: 0047a6c8 (CONDITIONAL_JUMP)  ; LAB_0047a6c8
    INC EBX                             ; 0047a695
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047a696
        ;   Label: LAB_0047a696
    MOV EAX,ECX                         ; 0047a69a
    MOV EBP,dword ptr [ESI]             ; 0047a69c
    ADD EDX,EAX                         ; 0047a69e
    MOV AL,byte ptr [EBP]               ; 0047a6a0
    INC ECX                             ; 0047a6a3
    MOV byte ptr [EDX],AL               ; 0047a6a4
    CMP ECX,EDI                         ; 0047a6a6
    JL 0x0047a682                       ; 0047a6a8
        ;   XREF to: 0047a682 (CONDITIONAL_JUMP)  ; LAB_0047a682
    MOV EAX,0x57f4c3                    ; 0047a6aa | = "Argument too long"
        ;   Label: LAB_0047a6aa
    POP EBP                             ; 0047a6af
    POP EDI                             ; 0047a6b0
    POP ESI                             ; 0047a6b1
    POP EBX                             ; 0047a6b2
    RET                                 ; 0047a6b3
    MOV EAX,0x57f4ac                    ; 0047a6b4 | = "No opening parenthesis"
        ;   Label: LAB_0047a6b4
    POP EBP                             ; 0047a6b9
    POP EDI                             ; 0047a6ba
    POP ESI                             ; 0047a6bb
    POP EBX                             ; 0047a6bc
    RET                                 ; 0047a6bd
    MOV EAX,0x57f4d5                    ; 0047a6be | = "Can't find closing parenthesis"
        ;   Label: LAB_0047a6be
    POP EBP                             ; 0047a6c3
    POP EDI                             ; 0047a6c4
    POP ESI                             ; 0047a6c5
    POP EBX                             ; 0047a6c6
    RET                                 ; 0047a6c7
    CMP DH,0x29                         ; 0047a6c8
        ;   Label: LAB_0047a6c8
    JNZ 0x0047a696                      ; 0047a6cb
        ;   XREF to: 0047a696 (CONDITIONAL_JUMP)  ; LAB_0047a696
    TEST EBX,EBX                        ; 0047a6cd
    JZ 0x0047a6d4                       ; 0047a6cf
        ;   XREF to: 0047a6d4 (CONDITIONAL_JUMP)  ; LAB_0047a6d4
    DEC EBX                             ; 0047a6d1
    JMP 0x0047a696                      ; 0047a6d2
        ;   XREF to: 0047a696 (UNCONDITIONAL_JUMP)  ; LAB_0047a696
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047a6d4
        ;   Label: LAB_0047a6d4
    INC EAX                             ; 0047a6d8
    MOV EBP,EBX                         ; 0047a6d9
    ADD ECX,EBX                         ; 0047a6db
    MOV dword ptr [ESI],EAX             ; 0047a6dd
    MOV EDI,EBX                         ; 0047a6df
    MOV byte ptr [ECX],0x0              ; 0047a6e1
    SUB ECX,ECX                         ; 0047a6e4
    DEC ECX                             ; 0047a6e6
    XOR EAX,EAX                         ; 0047a6e7
    SCASB.REPNE ES:EDI                  ; 0047a6e9
    NOT ECX                             ; 0047a6eb
    DEC ECX                             ; 0047a6ed
    MOV EAX,ECX                         ; 0047a6ee
    MOV EBX,ECX                         ; 0047a6f0
    TEST ECX,ECX                        ; 0047a6f2
    JLE 0x0047a70d                      ; 0047a6f4
        ;   XREF to: 0047a70d (CONDITIONAL_JUMP)  ; LAB_0047a70d
    LEA EAX,[ECX + EBP*0x1]             ; 0047a6f6
    MOV DL,byte ptr [EAX + -0x1]        ; 0047a6f9
        ;   Label: LAB_0047a6f9
    INC DL                              ; 0047a6fc
    AND EDX,0xff                        ; 0047a6fe
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047a704 | DAT_005c168c
    JNZ 0x0047a737                      ; 0047a70b
        ;   XREF to: 0047a737 (CONDITIONAL_JUMP)  ; LAB_0047a737
    LEA EAX,[EBX + EBP*0x1]             ; 0047a70d
        ;   Label: LAB_0047a70d
    LEA EDI,[EBP + 0x1]                 ; 0047a710
    MOV byte ptr [EAX],0x0              ; 0047a713
    MOV AL,byte ptr [EBP]               ; 0047a716
        ;   Label: LAB_0047a716
    INC AL                              ; 0047a719
    AND EAX,0xff                        ; 0047a71b
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047a720 | DAT_005c168c
    JZ 0x0047a73f                       ; 0047a727
        ;   XREF to: 0047a73f (CONDITIONAL_JUMP)  ; LAB_0047a73f
    PUSH EBX                            ; 0047a729
    PUSH EDI                            ; 0047a72a
    PUSH EBP                            ; 0047a72b
    DEC EBX                             ; 0047a72c
    CALL crt_string.c_memmove_FUN_00566170 ; 0047a72d
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047a732
    JMP 0x0047a716                      ; 0047a735
        ;   XREF to: 0047a716 (UNCONDITIONAL_JUMP)  ; LAB_0047a716
    DEC EBX                             ; 0047a737
        ;   Label: LAB_0047a737
    DEC EAX                             ; 0047a738
    TEST EBX,EBX                        ; 0047a739
    JG 0x0047a6f9                       ; 0047a73b
        ;   XREF to: 0047a6f9 (CONDITIONAL_JUMP)  ; LAB_0047a6f9
    JMP 0x0047a70d                      ; 0047a73d
        ;   XREF to: 0047a70d (UNCONDITIONAL_JUMP)  ; LAB_0047a70d
    MOV EAX,dword ptr [ESI]             ; 0047a73f
        ;   Label: LAB_0047a73f
    MOV BL,byte ptr [EAX]               ; 0047a741
        ;   Label: LAB_0047a741
    XOR ECX,ECX                         ; 0047a743
    INC BL                              ; 0047a745
    MOV CL,BL                           ; 0047a747
    TEST byte ptr [ECX + 0x5c168c],0x2  ; 0047a749 | DAT_005c168c
    JZ 0x0047a755                       ; 0047a750
        ;   XREF to: 0047a755 (CONDITIONAL_JUMP)  ; LAB_0047a755
    INC EAX                             ; 0047a752
    JMP 0x0047a741                      ; 0047a753
        ;   XREF to: 0047a741 (UNCONDITIONAL_JUMP)  ; LAB_0047a741
    MOV dword ptr [ESI],EAX             ; 0047a755
        ;   Label: LAB_0047a755
    XOR EAX,EAX                         ; 0047a757
    POP EBP                             ; 0047a759
    POP EDI                             ; 0047a75a
    POP ESI                             ; 0047a75b
    POP EBX                             ; 0047a75c
    RET                                 ; 0047a75d

