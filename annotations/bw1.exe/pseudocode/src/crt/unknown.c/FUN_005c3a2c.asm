; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3a2c(char *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3c08 at 005c3e76
;
; Called Functions:
;   crt_unknown.c_FUN_005c9e48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3a2c
        ;   Label: crt_unknown.c_FUN_005c3a2c
    PUSH ESI                            ; 005c3a2d
    PUSH EDI                            ; 005c3a2e
    PUSH EBP                            ; 005c3a2f
    SUB ESP,0x4                         ; 005c3a30
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c3a33
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c3a37
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c3a3b
    MOV dword ptr [ESP],EAX             ; 005c3a3f
    TEST EAX,EAX                        ; 005c3a42
    JGE 0x005c3a51                      ; 005c3a44
        ;   XREF to: 005c3a51 (CONDITIONAL_JUMP)  ; LAB_005c3a51
    MOV EDX,EAX                         ; 005c3a46
    MOV byte ptr [EBX],0x2d             ; 005c3a48
    NEG EDX                             ; 005c3a4b
    INC EBX                             ; 005c3a4d
    MOV dword ptr [ESP],EDX             ; 005c3a4e
    CMP dword ptr [ESI + 0x8],-0x1      ; 005c3a51
        ;   Label: LAB_005c3a51
    JNZ 0x005c3a5e                      ; 005c3a55
        ;   XREF to: 005c3a5e (CONDITIONAL_JUMP)  ; LAB_005c3a5e
    MOV dword ptr [ESI + 0x8],0x4       ; 005c3a57
    PUSH 0xa                            ; 005c3a5e
        ;   Label: LAB_005c3a5e
    XOR EAX,EAX                         ; 005c3a60
    PUSH EBX                            ; 005c3a62
    MOV AX,word ptr [ESP + 0xa]         ; 005c3a63
    PUSH EAX                            ; 005c3a68
    CALL crt_unknown.c_FUN_005c9e48     ; 005c3a69
        ;   XREF to: 005c9e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9e48()
    ADD ESP,0xc                         ; 005c3a6e
    MOV AH,byte ptr [EBX]               ; 005c3a71
    MOV ECX,EBX                         ; 005c3a73
    TEST AH,AH                          ; 005c3a75
    JZ 0x005c3a81                       ; 005c3a77
        ;   XREF to: 005c3a81 (CONDITIONAL_JUMP)  ; LAB_005c3a81
    MOV DL,byte ptr [EBX + 0x1]         ; 005c3a79
        ;   Label: LAB_005c3a79
    INC EBX                             ; 005c3a7c
    TEST DL,DL                          ; 005c3a7d
    JNZ 0x005c3a79                      ; 005c3a7f
        ;   XREF to: 005c3a79 (CONDITIONAL_JUMP)  ; LAB_005c3a79
    CMP dword ptr [ESI + 0x8],0x0       ; 005c3a81
        ;   Label: LAB_005c3a81
    JZ 0x005c3ab9                       ; 005c3a85
        ;   XREF to: 005c3ab9 (CONDITIONAL_JUMP)  ; LAB_005c3ab9
    MOV byte ptr [EBX],0x2e             ; 005c3a87
    XOR EAX,EAX                         ; 005c3a8a
    MOV EBP,dword ptr [ESI + 0x8]       ; 005c3a8c
    INC EBX                             ; 005c3a8f
    TEST EBP,EBP                        ; 005c3a90
    JLE 0x005c3ab6                      ; 005c3a92
        ;   XREF to: 005c3ab6 (CONDITIONAL_JUMP)  ; LAB_005c3ab6
    XOR EDX,EDX                         ; 005c3a94
        ;   Label: LAB_005c3a94
    MOV word ptr [ESP + 0x2],DX         ; 005c3a96
    MOV EDI,dword ptr [ESP]             ; 005c3a9b
    IMUL EDX,EDI,0xa                    ; 005c3a9e
    MOV dword ptr [ESP],EDX             ; 005c3aa1
    MOV DL,byte ptr [ESP + 0x2]         ; 005c3aa4
    ADD DL,0x30                         ; 005c3aa8
    MOV byte ptr [EBX],DL               ; 005c3aab
    INC EAX                             ; 005c3aad
    MOV EBP,dword ptr [ESI + 0x8]       ; 005c3aae
    INC EBX                             ; 005c3ab1
    CMP EAX,EBP                         ; 005c3ab2
    JL 0x005c3a94                       ; 005c3ab4
        ;   XREF to: 005c3a94 (CONDITIONAL_JUMP)  ; LAB_005c3a94
    MOV byte ptr [EBX],0x0              ; 005c3ab6
        ;   Label: LAB_005c3ab6
    TEST byte ptr [ESP + 0x1],0x80      ; 005c3ab9
        ;   Label: LAB_005c3ab9
    JZ 0x005c3b27                       ; 005c3abe
        ;   XREF to: 005c3b27 (CONDITIONAL_JUMP)  ; LAB_005c3b27
    CMP EBX,ECX                         ; 005c3ac4
        ;   Label: LAB_005c3ac4
    JNZ 0x005c3b03                      ; 005c3ac6
        ;   XREF to: 005c3b03 (CONDITIONAL_JUMP)  ; LAB_005c3b03
    LEA EBX,[ECX + 0x1]                 ; 005c3ac8
    MOV byte ptr [ECX],0x31             ; 005c3acb
    CMP byte ptr [EBX],0x30             ; 005c3ace
    JNZ 0x005c3adb                      ; 005c3ad1
        ;   XREF to: 005c3adb (CONDITIONAL_JUMP)  ; LAB_005c3adb
    MOV AL,byte ptr [EBX + 0x1]         ; 005c3ad3
        ;   Label: LAB_005c3ad3
    INC EBX                             ; 005c3ad6
    CMP AL,0x30                         ; 005c3ad7
    JZ 0x005c3ad3                       ; 005c3ad9
        ;   XREF to: 005c3ad3 (CONDITIONAL_JUMP)  ; LAB_005c3ad3
    MOV AH,byte ptr [EBX]               ; 005c3adb
        ;   Label: LAB_005c3adb
    CMP AH,0x2e                         ; 005c3add
    JNZ 0x005c3afa                      ; 005c3ae0
        ;   XREF to: 005c3afa (CONDITIONAL_JUMP)  ; LAB_005c3afa
    MOV byte ptr [EBX],0x30             ; 005c3ae2
    INC EBX                             ; 005c3ae5
    MOV byte ptr [EBX],AH               ; 005c3ae6
    MOV DL,byte ptr [EBX + 0x1]         ; 005c3ae8
    INC EBX                             ; 005c3aeb
    CMP DL,0x30                         ; 005c3aec
    JNZ 0x005c3afa                      ; 005c3aef
        ;   XREF to: 005c3afa (CONDITIONAL_JUMP)  ; LAB_005c3afa
    MOV DH,byte ptr [EBX + 0x1]         ; 005c3af1
        ;   Label: LAB_005c3af1
    INC EBX                             ; 005c3af4
    CMP DH,0x30                         ; 005c3af5
    JZ 0x005c3af1                       ; 005c3af8
        ;   XREF to: 005c3af1 (CONDITIONAL_JUMP)  ; LAB_005c3af1
    MOV byte ptr [EBX],0x30             ; 005c3afa
        ;   Label: LAB_005c3afa
    INC EBX                             ; 005c3afd
    MOV byte ptr [EBX],0x0              ; 005c3afe
    JMP 0x005c3b27                      ; 005c3b01
        ;   XREF to: 005c3b27 (UNCONDITIONAL_JUMP)  ; LAB_005c3b27
    MOV DL,byte ptr [EBX + -0x1]        ; 005c3b03
        ;   Label: LAB_005c3b03
    DEC EBX                             ; 005c3b06
    CMP DL,0x2e                         ; 005c3b07
    JNZ 0x005c3b0d                      ; 005c3b0a
        ;   XREF to: 005c3b0d (CONDITIONAL_JUMP)  ; LAB_005c3b0d
    DEC EBX                             ; 005c3b0c
    MOV DH,byte ptr [EBX]               ; 005c3b0d
        ;   Label: LAB_005c3b0d
    CMP DH,0x39                         ; 005c3b0f
    JZ 0x005c3b22                       ; 005c3b12
        ;   XREF to: 005c3b22 (CONDITIONAL_JUMP)  ; LAB_005c3b22
    MOV CL,DH                           ; 005c3b14
    INC CL                              ; 005c3b16
    MOV byte ptr [EBX],CL               ; 005c3b18
    ADD ESP,0x4                         ; 005c3b1a
    POP EBP                             ; 005c3b1d
    POP EDI                             ; 005c3b1e
    POP ESI                             ; 005c3b1f
    POP EBX                             ; 005c3b20
    RET                                 ; 005c3b21
    MOV byte ptr [EBX],0x30             ; 005c3b22
        ;   Label: LAB_005c3b22
    JMP 0x005c3ac4                      ; 005c3b25
        ;   XREF to: 005c3ac4 (UNCONDITIONAL_JUMP)  ; LAB_005c3ac4
    ADD ESP,0x4                         ; 005c3b27
        ;   Label: LAB_005c3b27
    POP EBP                             ; 005c3b2a
    POP EDI                             ; 005c3b2b
    POP ESI                             ; 005c3b2c
    POP EBX                             ; 005c3b2d
    RET                                 ; 005c3b2e

