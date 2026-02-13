; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_event_cpp_extractParenArg_FUN_004aa6c0(char **cursor,char *out_buf,int max_len)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buf
; int              Stack[0xc]:4   max_len
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab821
;
; Referenced Globals:
;   TerminatedCString s_No_opening_parenthesis_00624532
;   TerminatedCString s_Argument_too_long_00624549
;   TerminatedCString s_Can_t_find_closing_paren_0062455b
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa6c0
        ;   Label: core_event.cpp_extractParenArg_FUN_004aa6c0
    PUSH ESI                            ; 004aa6c1
    PUSH EDI                            ; 004aa6c2
    PUSH EBP                            ; 004aa6c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004aa6c4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004aa6c8
    MOV ECX,dword ptr [ESI]             ; 004aa6cc
    MOV AL,byte ptr [ECX]               ; 004aa6ce
        ;   Label: LAB_004aa6ce
    INC AL                              ; 004aa6d0
    AND EAX,0xff                        ; 004aa6d2
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aa6d7 | g_CharacterClassificationTable
    JZ 0x004aa6e3                       ; 004aa6de
        ;   XREF to: 004aa6e3 (CONDITIONAL_JUMP)  ; LAB_004aa6e3
    INC ECX                             ; 004aa6e0
    JMP 0x004aa6ce                      ; 004aa6e1
        ;   XREF to: 004aa6ce (UNCONDITIONAL_JUMP)  ; LAB_004aa6ce
    MOV dword ptr [ESI],ECX             ; 004aa6e3
        ;   Label: LAB_004aa6e3
    CMP byte ptr [ECX],0x28             ; 004aa6e5
    JNZ 0x004aa724                      ; 004aa6e8
        ;   XREF to: 004aa724 (CONDITIONAL_JUMP)  ; LAB_004aa724
    XOR EBX,EBX                         ; 004aa6ea
    XOR ECX,ECX                         ; 004aa6ec
    TEST EDI,EDI                        ; 004aa6ee
    JLE 0x004aa71a                      ; 004aa6f0
        ;   XREF to: 004aa71a (CONDITIONAL_JUMP)  ; LAB_004aa71a
    MOV EDX,dword ptr [ESI]             ; 004aa6f2
        ;   Label: LAB_004aa6f2
    INC EDX                             ; 004aa6f4
    MOV dword ptr [ESI],EDX             ; 004aa6f5
    MOV EAX,EDX                         ; 004aa6f7
    CMP byte ptr [EDX],0x0              ; 004aa6f9
    JZ 0x004aa72e                       ; 004aa6fc
        ;   XREF to: 004aa72e (CONDITIONAL_JUMP)  ; LAB_004aa72e
    MOV DH,byte ptr [EAX]               ; 004aa6fe
    CMP DH,0x28                         ; 004aa700
    JNZ 0x004aa738                      ; 004aa703
        ;   XREF to: 004aa738 (CONDITIONAL_JUMP)  ; LAB_004aa738
    INC EBX                             ; 004aa705
    MOV EDX,dword ptr [ESP + 0x18]      ; 004aa706
        ;   Label: LAB_004aa706
    MOV EAX,ECX                         ; 004aa70a
    MOV EBP,dword ptr [ESI]             ; 004aa70c
    ADD EDX,EAX                         ; 004aa70e
    MOV AL,byte ptr [EBP]               ; 004aa710
    INC ECX                             ; 004aa713
    MOV byte ptr [EDX],AL               ; 004aa714
    CMP ECX,EDI                         ; 004aa716
    JL 0x004aa6f2                       ; 004aa718
        ;   XREF to: 004aa6f2 (CONDITIONAL_JUMP)  ; LAB_004aa6f2
    MOV EAX,0x624549                    ; 004aa71a | = "Argument too long"
        ;   Label: LAB_004aa71a
    POP EBP                             ; 004aa71f
    POP EDI                             ; 004aa720
    POP ESI                             ; 004aa721
    POP EBX                             ; 004aa722
    RET                                 ; 004aa723
    MOV EAX,0x624532                    ; 004aa724 | = "No opening parenthesis"
        ;   Label: LAB_004aa724
    POP EBP                             ; 004aa729
    POP EDI                             ; 004aa72a
    POP ESI                             ; 004aa72b
    POP EBX                             ; 004aa72c
    RET                                 ; 004aa72d
    MOV EAX,0x62455b                    ; 004aa72e | = "Can't find closing parenthesis"
        ;   Label: LAB_004aa72e
    POP EBP                             ; 004aa733
    POP EDI                             ; 004aa734
    POP ESI                             ; 004aa735
    POP EBX                             ; 004aa736
    RET                                 ; 004aa737
    CMP DH,0x29                         ; 004aa738
        ;   Label: LAB_004aa738
    JNZ 0x004aa706                      ; 004aa73b
        ;   XREF to: 004aa706 (CONDITIONAL_JUMP)  ; LAB_004aa706
    TEST EBX,EBX                        ; 004aa73d
    JZ 0x004aa744                       ; 004aa73f
        ;   XREF to: 004aa744 (CONDITIONAL_JUMP)  ; LAB_004aa744
    DEC EBX                             ; 004aa741
    JMP 0x004aa706                      ; 004aa742
        ;   XREF to: 004aa706 (UNCONDITIONAL_JUMP)  ; LAB_004aa706
    MOV EBX,dword ptr [ESP + 0x18]      ; 004aa744
        ;   Label: LAB_004aa744
    INC EAX                             ; 004aa748
    MOV EBP,EBX                         ; 004aa749
    ADD ECX,EBX                         ; 004aa74b
    MOV dword ptr [ESI],EAX             ; 004aa74d
    MOV EDI,EBX                         ; 004aa74f
    MOV byte ptr [ECX],0x0              ; 004aa751
    SUB ECX,ECX                         ; 004aa754
    DEC ECX                             ; 004aa756
    XOR EAX,EAX                         ; 004aa757
    SCASB.REPNE ES:EDI                  ; 004aa759
    NOT ECX                             ; 004aa75b
    DEC ECX                             ; 004aa75d
    MOV EAX,ECX                         ; 004aa75e
    MOV EBX,ECX                         ; 004aa760
    TEST ECX,ECX                        ; 004aa762
    JLE 0x004aa77d                      ; 004aa764
        ;   XREF to: 004aa77d (CONDITIONAL_JUMP)  ; LAB_004aa77d
    LEA EAX,[ECX + EBP*0x1]             ; 004aa766
    MOV DL,byte ptr [EAX + -0x1]        ; 004aa769
        ;   Label: LAB_004aa769
    INC DL                              ; 004aa76c
    AND EDX,0xff                        ; 004aa76e
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aa774 | g_CharacterClassificationTable
    JNZ 0x004aa7a7                      ; 004aa77b
        ;   XREF to: 004aa7a7 (CONDITIONAL_JUMP)  ; LAB_004aa7a7
    LEA EAX,[EBX + EBP*0x1]             ; 004aa77d
        ;   Label: LAB_004aa77d
    LEA EDI,[EBP + 0x1]                 ; 004aa780
    MOV byte ptr [EAX],0x0              ; 004aa783
    MOV AL,byte ptr [EBP]               ; 004aa786
        ;   Label: LAB_004aa786
    INC AL                              ; 004aa789
    AND EAX,0xff                        ; 004aa78b
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aa790 | g_CharacterClassificationTable
    JZ 0x004aa7af                       ; 004aa797
        ;   XREF to: 004aa7af (CONDITIONAL_JUMP)  ; LAB_004aa7af
    PUSH EBX                            ; 004aa799
    PUSH EDI                            ; 004aa79a
    PUSH EBP                            ; 004aa79b
    DEC EBX                             ; 004aa79c
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aa79d
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aa7a2
    JMP 0x004aa786                      ; 004aa7a5
        ;   XREF to: 004aa786 (UNCONDITIONAL_JUMP)  ; LAB_004aa786
    DEC EBX                             ; 004aa7a7
        ;   Label: LAB_004aa7a7
    DEC EAX                             ; 004aa7a8
    TEST EBX,EBX                        ; 004aa7a9
    JG 0x004aa769                       ; 004aa7ab
        ;   XREF to: 004aa769 (CONDITIONAL_JUMP)  ; LAB_004aa769
    JMP 0x004aa77d                      ; 004aa7ad
        ;   XREF to: 004aa77d (UNCONDITIONAL_JUMP)  ; LAB_004aa77d
    MOV EAX,dword ptr [ESI]             ; 004aa7af
        ;   Label: LAB_004aa7af
    MOV BL,byte ptr [EAX]               ; 004aa7b1
        ;   Label: LAB_004aa7b1
    XOR ECX,ECX                         ; 004aa7b3
    INC BL                              ; 004aa7b5
    MOV CL,BL                           ; 004aa7b7
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 004aa7b9 | g_CharacterClassificationTable
    JZ 0x004aa7c5                       ; 004aa7c0
        ;   XREF to: 004aa7c5 (CONDITIONAL_JUMP)  ; LAB_004aa7c5
    INC EAX                             ; 004aa7c2
    JMP 0x004aa7b1                      ; 004aa7c3
        ;   XREF to: 004aa7b1 (UNCONDITIONAL_JUMP)  ; LAB_004aa7b1
    MOV dword ptr [ESI],EAX             ; 004aa7c5
        ;   Label: LAB_004aa7c5
    XOR EAX,EAX                         ; 004aa7c7
    POP EBP                             ; 004aa7c9
    POP EDI                             ; 004aa7ca
    POP ESI                             ; 004aa7cb
    POP EBX                             ; 004aa7cc
    RET                                 ; 004aa7cd

