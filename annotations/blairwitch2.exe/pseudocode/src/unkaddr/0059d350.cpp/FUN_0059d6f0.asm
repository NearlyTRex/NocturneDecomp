; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_0059d350_cpp_FUN_0059d6f0(char *param_1,char *param_2,char *param_3)
;
;
; XREF[5]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 005a0154
;   core_dog1.cpp_CDog_ctor_FUN_005aba40 at 005abb0a
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a9309
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9ce3
;   unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 at 0059e572
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d6f0
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d6f0
    PUSH ESI                            ; 0059d6f1
    PUSH EDI                            ; 0059d6f2
    PUSH EBP                            ; 0059d6f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0059d6f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059d6f8
    MOV EDX,dword ptr [EBP + 0x838]     ; 0059d6fc
    CMP EDX,0x32                        ; 0059d702
    JZ 0x0059d78c                       ; 0059d705
        ;   XREF to: 0059d78c (CONDITIONAL_JUMP)  ; LAB_0059d78c
    MOV EAX,EDX                         ; 0059d70b
    SHL EAX,0x5                         ; 0059d70d
    MOV dword ptr [EAX + EBP*0x1 + 0x210],0x0 ; 0059d710
    MOV ECX,dword ptr [EBP + 0x838]     ; 0059d71b
    XOR ESI,ESI                         ; 0059d721
    TEST ECX,ECX                        ; 0059d723
    JLE 0x0059d749                      ; 0059d725
        ;   XREF to: 0059d749 (CONDITIONAL_JUMP)  ; LAB_0059d749
    LEA EBX,[EBP + 0x1f4]               ; 0059d727
    PUSH EBX                            ; 0059d72d
        ;   Label: LAB_0059d72d
    PUSH EDI                            ; 0059d72e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d72f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059d734
    TEST EAX,EAX                        ; 0059d737
    JZ 0x0059d793                       ; 0059d739
        ;   XREF to: 0059d793 (CONDITIONAL_JUMP)  ; LAB_0059d793
    INC ESI                             ; 0059d73b
    MOV EAX,dword ptr [EBP + 0x838]     ; 0059d73c
    ADD EBX,0x20                        ; 0059d742
    CMP ESI,EAX                         ; 0059d745
    JL 0x0059d72d                       ; 0059d747
        ;   XREF to: 0059d72d (CONDITIONAL_JUMP)  ; LAB_0059d72d
    MOV EDX,dword ptr [EBP + 0x834]     ; 0059d749
        ;   Label: LAB_0059d749
    XOR ESI,ESI                         ; 0059d74f
    TEST EDX,EDX                        ; 0059d751
    JLE 0x0059d777                      ; 0059d753
        ;   XREF to: 0059d777 (CONDITIONAL_JUMP)  ; LAB_0059d777
    MOV EBX,EBP                         ; 0059d755
    PUSH EBX                            ; 0059d757
        ;   Label: LAB_0059d757
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059d758
    PUSH EAX                            ; 0059d75c
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d75d
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059d762
    TEST EAX,EAX                        ; 0059d765
    JZ 0x0059d79d                       ; 0059d767
        ;   XREF to: 0059d79d (CONDITIONAL_JUMP)  ; LAB_0059d79d
    INC ESI                             ; 0059d769
    MOV ECX,dword ptr [EBP + 0x834]     ; 0059d76a
    ADD EBX,0x19                        ; 0059d770
    CMP ESI,ECX                         ; 0059d773
    JL 0x0059d757                       ; 0059d775
        ;   XREF to: 0059d757 (CONDITIONAL_JUMP)  ; LAB_0059d757
    MOV EAX,dword ptr [EBP + 0x838]     ; 0059d777
        ;   Label: LAB_0059d777
    SHL EAX,0x5                         ; 0059d77d
    LEA EBX,[EAX + EBP*0x1]             ; 0059d780
    CMP dword ptr [EBX + 0x210],0x0     ; 0059d783
    JNZ 0x0059d7af                      ; 0059d78a
        ;   XREF to: 0059d7af (CONDITIONAL_JUMP)  ; LAB_0059d7af
    XOR EAX,EAX                         ; 0059d78c
        ;   Label: LAB_0059d78c
    POP EBP                             ; 0059d78e
    POP EDI                             ; 0059d78f
    POP ESI                             ; 0059d790
    POP EBX                             ; 0059d791
    RET                                 ; 0059d792
    MOV EAX,0x1                         ; 0059d793
        ;   Label: LAB_0059d793
    POP EBP                             ; 0059d798
    POP EDI                             ; 0059d799
    POP ESI                             ; 0059d79a
    POP EBX                             ; 0059d79b
    RET                                 ; 0059d79c
    MOV EAX,dword ptr [EBP + 0x838]     ; 0059d79d
        ;   Label: LAB_0059d79d
    SHL EAX,0x5                         ; 0059d7a3
    MOV dword ptr [EAX + EBP*0x1 + 0x210],EBX ; 0059d7a6
    JMP 0x0059d777                      ; 0059d7ad
        ;   XREF to: 0059d777 (UNCONDITIONAL_JUMP)  ; LAB_0059d777
    LEA EBX,[EBP + 0x1f4]               ; 0059d7af
        ;   Label: LAB_0059d7af
    ADD EAX,EBX                         ; 0059d7b5
    MOV ESI,EDI                         ; 0059d7b7
    MOV EDI,EAX                         ; 0059d7b9
    PUSH EDI                            ; 0059d7bb
    MOV AL,byte ptr [ESI]               ; 0059d7bc
        ;   Label: LAB_0059d7bc
    MOV byte ptr [EDI],AL               ; 0059d7be
    CMP AL,0x0                          ; 0059d7c0
    JZ 0x0059d7d4                       ; 0059d7c2
        ;   XREF to: 0059d7d4 (CONDITIONAL_JUMP)  ; LAB_0059d7d4
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d7c4
    ADD ESI,0x2                         ; 0059d7c7
    MOV byte ptr [EDI + 0x1],AL         ; 0059d7ca
    ADD EDI,0x2                         ; 0059d7cd
    CMP AL,0x0                          ; 0059d7d0
    JNZ 0x0059d7bc                      ; 0059d7d2
        ;   XREF to: 0059d7bc (CONDITIONAL_JUMP)  ; LAB_0059d7bc
    POP EDI                             ; 0059d7d4
        ;   Label: LAB_0059d7d4
    MOV ECX,dword ptr [EBP + 0x838]     ; 0059d7d5
    INC ECX                             ; 0059d7db
    MOV EAX,0x2                         ; 0059d7dc
    MOV dword ptr [EBP + 0x838],ECX     ; 0059d7e1
    POP EBP                             ; 0059d7e7
    POP EDI                             ; 0059d7e8
    POP ESI                             ; 0059d7e9
    POP EBX                             ; 0059d7ea
    RET                                 ; 0059d7eb

