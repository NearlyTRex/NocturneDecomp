; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059d9d0(char *param_1,char *param_2,undefined2 *param_3,char *param_4,int param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059e26e at 0059e2b9
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d9d0
        ;   Label: support_trisock.cpp_FUN_0059d9d0
    PUSH ESI                            ; 0059d9d1
    PUSH EDI                            ; 0059d9d2
    PUSH EBP                            ; 0059d9d3
    SUB ESP,0x8                         ; 0059d9d4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059d9d7
    MOV ESI,dword ptr [ESP + 0x20]      ; 0059d9db
    MOV EDI,dword ptr [ESP + 0x24]      ; 0059d9df
    MOV EBP,dword ptr [ESP + 0x28]      ; 0059d9e3
    PUSH 0x5                            ; 0059d9e7
    MOV byte ptr [ESI],0x0              ; 0059d9e9
    PUSH 0x5f8607                       ; 0059d9ec
    MOV byte ptr [EBP],0x0              ; 0059d9f1
    PUSH EBX                            ; 0059d9f5
    MOV word ptr [EDI],0x50             ; 0059d9f6
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0059d9fb
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059da00
    TEST EAX,EAX                        ; 0059da03
    JNZ 0x0059da0a                      ; 0059da05
        ;   XREF to: 0059da0a (CONDITIONAL_JUMP)  ; LAB_0059da0a
    ADD EBX,0x5                         ; 0059da07
    PUSH 0x2                            ; 0059da0a
        ;   Label: LAB_0059da0a
    PUSH 0x5f860d                       ; 0059da0c
    PUSH EBX                            ; 0059da11
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0059da12
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059da17
    TEST EAX,EAX                        ; 0059da1a
    JNZ 0x0059da21                      ; 0059da1c
        ;   XREF to: 0059da21 (CONDITIONAL_JUMP)  ; LAB_0059da21
    ADD EBX,0x2                         ; 0059da1e
    MOV DL,byte ptr [EBX]               ; 0059da21
        ;   Label: LAB_0059da21
    XOR EAX,EAX                         ; 0059da23
    TEST DL,DL                          ; 0059da25
    JZ 0x0059da32                       ; 0059da27
        ;   XREF to: 0059da32 (CONDITIONAL_JUMP)  ; LAB_0059da32
    MOV EDX,ESI                         ; 0059da29
    MOV CH,byte ptr [EBX]               ; 0059da2b
        ;   Label: LAB_0059da2b
    CMP CH,0x3a                         ; 0059da2d
    JNZ 0x0059da5c                      ; 0059da30
        ;   XREF to: 0059da5c (CONDITIONAL_JUMP)  ; LAB_0059da5c
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 0059da32
        ;   Label: LAB_0059da32
    CMP byte ptr [EBX],0x3a             ; 0059da36
    JZ 0x0059da75                       ; 0059da39
        ;   XREF to: 0059da75 (CONDITIONAL_JUMP)  ; LAB_0059da75
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0059da3b
        ;   Label: LAB_0059da3b
    MOV EDX,EBP                         ; 0059da3f
    XOR EAX,EAX                         ; 0059da41
    DEC EDI                             ; 0059da43
    MOV CL,byte ptr [EBX]               ; 0059da44
        ;   Label: LAB_0059da44
    LEA ESI,[EAX + 0x1]                 ; 0059da46
    TEST CL,CL                          ; 0059da49
    JZ 0x0059dacc                       ; 0059da4b
        ;   XREF to: 0059dacc (CONDITIONAL_JUMP)  ; LAB_0059dacc
    CMP EAX,EDI                         ; 0059da51
    JL 0x0059dac0                       ; 0059da53
        ;   XREF to: 0059dac0 (CONDITIONAL_JUMP)  ; LAB_0059dac0
    INC EBX                             ; 0059da59
    JMP 0x0059da44                      ; 0059da5a
        ;   XREF to: 0059da44 (UNCONDITIONAL_JUMP)  ; LAB_0059da44
    CMP CH,0x2f                         ; 0059da5c
        ;   Label: LAB_0059da5c
    JZ 0x0059da32                       ; 0059da5f
        ;   XREF to: 0059da32 (CONDITIONAL_JUMP)  ; LAB_0059da32
    CMP EAX,0x7f                        ; 0059da61
    JGE 0x0059da6b                      ; 0059da64
        ;   XREF to: 0059da6b (CONDITIONAL_JUMP)  ; LAB_0059da6b
    INC EDX                             ; 0059da66
    INC EAX                             ; 0059da67
    MOV byte ptr [EDX + -0x1],CH        ; 0059da68
    MOV CL,byte ptr [EBX + 0x1]         ; 0059da6b
        ;   Label: LAB_0059da6b
    INC EBX                             ; 0059da6e
    TEST CL,CL                          ; 0059da6f
    JNZ 0x0059da2b                      ; 0059da71
        ;   XREF to: 0059da2b (CONDITIONAL_JUMP)  ; LAB_0059da2b
    JMP 0x0059da32                      ; 0059da73
        ;   XREF to: 0059da32 (UNCONDITIONAL_JUMP)  ; LAB_0059da32
    MOV EAX,ESP                         ; 0059da75
        ;   Label: LAB_0059da75
    PUSH EAX                            ; 0059da77
    LEA EAX,[ESP + 0x8]                 ; 0059da78
    PUSH EAX                            ; 0059da7c
    PUSH 0x5f8610                       ; 0059da7d
    MOV EDX,0xffffffff                  ; 0059da82
    PUSH EBX                            ; 0059da87
    MOV dword ptr [ESP + 0x10],EDX      ; 0059da88
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0059da8c
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0059da91
    CMP dword ptr [ESP],0x2             ; 0059da94
    JL 0x0059dab6                       ; 0059da98
        ;   XREF to: 0059dab6 (CONDITIONAL_JUMP)  ; LAB_0059dab6
    MOV ESI,dword ptr [ESP + 0x4]       ; 0059da9a
    TEST ESI,ESI                        ; 0059da9e
    JLE 0x0059dab6                      ; 0059daa0
        ;   XREF to: 0059dab6 (CONDITIONAL_JUMP)  ; LAB_0059dab6
    CMP ESI,0xffff                      ; 0059daa2
    JG 0x0059dab6                       ; 0059daa8
        ;   XREF to: 0059dab6 (CONDITIONAL_JUMP)  ; LAB_0059dab6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059daaa
    MOV word ptr [EDI],AX               ; 0059daae
    ADD EBX,dword ptr [ESP]             ; 0059dab1
    JMP 0x0059da3b                      ; 0059dab4
        ;   XREF to: 0059da3b (UNCONDITIONAL_JUMP)  ; LAB_0059da3b
    XOR EAX,EAX                         ; 0059dab6
        ;   Label: LAB_0059dab6
    ADD ESP,0x8                         ; 0059dab8
    POP EBP                             ; 0059dabb
    POP EDI                             ; 0059dabc
    POP ESI                             ; 0059dabd
    POP EBX                             ; 0059dabe
    RET                                 ; 0059dabf
    INC EDX                             ; 0059dac0
        ;   Label: LAB_0059dac0
    MOV EAX,ESI                         ; 0059dac1
    MOV byte ptr [EDX + -0x1],CL        ; 0059dac3
    INC EBX                             ; 0059dac6
    JMP 0x0059da44                      ; 0059dac7
        ;   XREF to: 0059da44 (UNCONDITIONAL_JUMP)  ; LAB_0059da44
    TEST EAX,EAX                        ; 0059dacc
        ;   Label: LAB_0059dacc
    JNZ 0x0059dad5                      ; 0059dace
        ;   XREF to: 0059dad5 (CONDITIONAL_JUMP)  ; LAB_0059dad5
    MOV EAX,ESI                         ; 0059dad0
    MOV byte ptr [EDX],0x2f             ; 0059dad2
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 0059dad5
        ;   Label: LAB_0059dad5
    MOV EAX,0x1                         ; 0059dad9
    ADD ESP,0x8                         ; 0059dade
    POP EBP                             ; 0059dae1
    POP EDI                             ; 0059dae2
    POP ESI                             ; 0059dae3
    POP EBX                             ; 0059dae4
    RET                                 ; 0059dae5

