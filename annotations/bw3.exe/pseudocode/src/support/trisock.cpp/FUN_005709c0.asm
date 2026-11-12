; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_005709c0(char *param_1,char *param_2,undefined2 *param_3,char *param_4,int param_5)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0056fef0 at 0056ff30
;   support_trisock.cpp_FUN_0057125e at 005712a9
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005709c0
        ;   Label: support_trisock.cpp_FUN_005709c0
    PUSH ESI                            ; 005709c1
    PUSH EDI                            ; 005709c2
    PUSH EBP                            ; 005709c3
    SUB ESP,0x8                         ; 005709c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005709c7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005709cb
    MOV EDI,dword ptr [ESP + 0x24]      ; 005709cf
    MOV EBP,dword ptr [ESP + 0x28]      ; 005709d3
    PUSH 0x5                            ; 005709d7
    MOV byte ptr [ESI],0x0              ; 005709d9
    PUSH 0x5d6b76                       ; 005709dc
    MOV byte ptr [EBP],0x0              ; 005709e1
    PUSH EBX                            ; 005709e5
    MOV word ptr [EDI],0x50             ; 005709e6
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005709eb
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005709f0
    TEST EAX,EAX                        ; 005709f3
    JNZ 0x005709fa                      ; 005709f5
        ;   XREF to: 005709fa (CONDITIONAL_JUMP)  ; LAB_005709fa
    ADD EBX,0x5                         ; 005709f7
    PUSH 0x2                            ; 005709fa
        ;   Label: LAB_005709fa
    PUSH 0x5d6b7c                       ; 005709fc
    PUSH EBX                            ; 00570a01
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00570a02
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00570a07
    TEST EAX,EAX                        ; 00570a0a
    JNZ 0x00570a11                      ; 00570a0c
        ;   XREF to: 00570a11 (CONDITIONAL_JUMP)  ; LAB_00570a11
    ADD EBX,0x2                         ; 00570a0e
    MOV DL,byte ptr [EBX]               ; 00570a11
        ;   Label: LAB_00570a11
    XOR EAX,EAX                         ; 00570a13
    TEST DL,DL                          ; 00570a15
    JZ 0x00570a22                       ; 00570a17
        ;   XREF to: 00570a22 (CONDITIONAL_JUMP)  ; LAB_00570a22
    MOV EDX,ESI                         ; 00570a19
    MOV CH,byte ptr [EBX]               ; 00570a1b
        ;   Label: LAB_00570a1b
    CMP CH,0x3a                         ; 00570a1d
    JNZ 0x00570a4c                      ; 00570a20
        ;   XREF to: 00570a4c (CONDITIONAL_JUMP)  ; LAB_00570a4c
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 00570a22
        ;   Label: LAB_00570a22
    CMP byte ptr [EBX],0x3a             ; 00570a26
    JZ 0x00570a65                       ; 00570a29
        ;   XREF to: 00570a65 (CONDITIONAL_JUMP)  ; LAB_00570a65
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00570a2b
        ;   Label: LAB_00570a2b
    MOV EDX,EBP                         ; 00570a2f
    XOR EAX,EAX                         ; 00570a31
    DEC EDI                             ; 00570a33
    MOV CL,byte ptr [EBX]               ; 00570a34
        ;   Label: LAB_00570a34
    LEA ESI,[EAX + 0x1]                 ; 00570a36
    TEST CL,CL                          ; 00570a39
    JZ 0x00570abc                       ; 00570a3b
        ;   XREF to: 00570abc (CONDITIONAL_JUMP)  ; LAB_00570abc
    CMP EAX,EDI                         ; 00570a41
    JL 0x00570ab0                       ; 00570a43
        ;   XREF to: 00570ab0 (CONDITIONAL_JUMP)  ; LAB_00570ab0
    INC EBX                             ; 00570a49
    JMP 0x00570a34                      ; 00570a4a
        ;   XREF to: 00570a34 (UNCONDITIONAL_JUMP)  ; LAB_00570a34
    CMP CH,0x2f                         ; 00570a4c
        ;   Label: LAB_00570a4c
    JZ 0x00570a22                       ; 00570a4f
        ;   XREF to: 00570a22 (CONDITIONAL_JUMP)  ; LAB_00570a22
    CMP EAX,0x7f                        ; 00570a51
    JGE 0x00570a5b                      ; 00570a54
        ;   XREF to: 00570a5b (CONDITIONAL_JUMP)  ; LAB_00570a5b
    INC EDX                             ; 00570a56
    INC EAX                             ; 00570a57
    MOV byte ptr [EDX + -0x1],CH        ; 00570a58
    MOV CL,byte ptr [EBX + 0x1]         ; 00570a5b
        ;   Label: LAB_00570a5b
    INC EBX                             ; 00570a5e
    TEST CL,CL                          ; 00570a5f
    JNZ 0x00570a1b                      ; 00570a61
        ;   XREF to: 00570a1b (CONDITIONAL_JUMP)  ; LAB_00570a1b
    JMP 0x00570a22                      ; 00570a63
        ;   XREF to: 00570a22 (UNCONDITIONAL_JUMP)  ; LAB_00570a22
    MOV EAX,ESP                         ; 00570a65
        ;   Label: LAB_00570a65
    PUSH EAX                            ; 00570a67
    LEA EAX,[ESP + 0x8]                 ; 00570a68
    PUSH EAX                            ; 00570a6c
    PUSH 0x5d6b7f                       ; 00570a6d
    MOV EDX,0xffffffff                  ; 00570a72
    PUSH EBX                            ; 00570a77
    MOV dword ptr [ESP + 0x10],EDX      ; 00570a78
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00570a7c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00570a81
    CMP dword ptr [ESP],0x2             ; 00570a84
    JL 0x00570aa6                       ; 00570a88
        ;   XREF to: 00570aa6 (CONDITIONAL_JUMP)  ; LAB_00570aa6
    MOV ESI,dword ptr [ESP + 0x4]       ; 00570a8a
    TEST ESI,ESI                        ; 00570a8e
    JLE 0x00570aa6                      ; 00570a90
        ;   XREF to: 00570aa6 (CONDITIONAL_JUMP)  ; LAB_00570aa6
    CMP ESI,0xffff                      ; 00570a92
    JG 0x00570aa6                       ; 00570a98
        ;   XREF to: 00570aa6 (CONDITIONAL_JUMP)  ; LAB_00570aa6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00570a9a
    MOV word ptr [EDI],AX               ; 00570a9e
    ADD EBX,dword ptr [ESP]             ; 00570aa1
    JMP 0x00570a2b                      ; 00570aa4
        ;   XREF to: 00570a2b (UNCONDITIONAL_JUMP)  ; LAB_00570a2b
    XOR EAX,EAX                         ; 00570aa6
        ;   Label: LAB_00570aa6
    ADD ESP,0x8                         ; 00570aa8
    POP EBP                             ; 00570aab
    POP EDI                             ; 00570aac
    POP ESI                             ; 00570aad
    POP EBX                             ; 00570aae
    RET                                 ; 00570aaf
    INC EDX                             ; 00570ab0
        ;   Label: LAB_00570ab0
    MOV EAX,ESI                         ; 00570ab1
    MOV byte ptr [EDX + -0x1],CL        ; 00570ab3
    INC EBX                             ; 00570ab6
    JMP 0x00570a34                      ; 00570ab7
        ;   XREF to: 00570a34 (UNCONDITIONAL_JUMP)  ; LAB_00570a34
    TEST EAX,EAX                        ; 00570abc
        ;   Label: LAB_00570abc
    JNZ 0x00570ac5                      ; 00570abe
        ;   XREF to: 00570ac5 (CONDITIONAL_JUMP)  ; LAB_00570ac5
    MOV EAX,ESI                         ; 00570ac0
    MOV byte ptr [EDX],0x2f             ; 00570ac2
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 00570ac5
        ;   Label: LAB_00570ac5
    MOV EAX,0x1                         ; 00570ac9
    ADD ESP,0x8                         ; 00570ace
    POP EBP                             ; 00570ad1
    POP EDI                             ; 00570ad2
    POP ESI                             ; 00570ad3
    POP EBX                             ; 00570ad4
    RET                                 ; 00570ad5

