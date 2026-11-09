; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c5e50(char *param_1,int param_2)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c5760 at 005c577c
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005bab40
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005be1d0
;   crt_unknown.c_FUN_005bea80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5e50
        ;   Label: unkafter_2d.cpp_FUN_005c5e50
    PUSH ESI                            ; 005c5e51
    PUSH EDI                            ; 005c5e52
    PUSH EBP                            ; 005c5e53
    SUB ESP,0x4                         ; 005c5e54
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c5e57
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c5e5b
    MOV EDX,dword ptr [ESI + 0x10]      ; 005c5e5f
    PUSH EDX                            ; 005c5e62
    CALL dword ptr [0x0061f2a8]         ; 005c5e63 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EAX,dword ptr [ESI + 0x8]       ; 005c5e69
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c5e6c
    ADD ESP,0x4                         ; 005c5e6f
    TEST ECX,ECX                        ; 005c5e72
    JNZ 0x005c5e7f                      ; 005c5e74
        ;   XREF to: 005c5e7f (CONDITIONAL_JUMP)  ; LAB_005c5e7f
    PUSH ESI                            ; 005c5e76
    CALL crt_unknown.c_FUN_005be1d0     ; 005c5e77
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be1d0()
    ADD ESP,0x4                         ; 005c5e7c
    MOV AH,byte ptr [ESI + 0xd]         ; 005c5e7f
        ;   Label: LAB_005c5e7f
    XOR EBP,EBP                         ; 005c5e82
    TEST AH,0x4                         ; 005c5e84
    JZ 0x005c5e9e                       ; 005c5e87
        ;   XREF to: 005c5e9e (CONDITIONAL_JUMP)  ; LAB_005c5e9e
    MOV DL,AH                           ; 005c5e89
    AND DL,0xf9                         ; 005c5e8b
    MOV byte ptr [ESI + 0xd],DL         ; 005c5e8e
    MOV DH,DL                           ; 005c5e91
    OR DH,0x2                           ; 005c5e93
    MOV EBP,0x1                         ; 005c5e96
    MOV byte ptr [ESI + 0xd],DH         ; 005c5e9b
    MOV dword ptr [ESP],EBX             ; 005c5e9e
        ;   Label: LAB_005c5e9e
    XOR EDI,EDI                         ; 005c5ea1
    XOR EAX,EAX                         ; 005c5ea3
        ;   Label: LAB_005c5ea3
    MOV AL,byte ptr [EBX]               ; 005c5ea5
    TEST EAX,EAX                        ; 005c5ea7
    JZ 0x005c5ebd                       ; 005c5ea9
        ;   XREF to: 005c5ebd (CONDITIONAL_JUMP)  ; LAB_005c5ebd
    PUSH ESI                            ; 005c5eab
    PUSH EAX                            ; 005c5eac
    INC EBX                             ; 005c5ead
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005c5eae
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 005c5eb3
    CMP EAX,-0x1                        ; 005c5eb6
    JNZ 0x005c5ea3                      ; 005c5eb9
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    MOV EDI,EAX                         ; 005c5ebb
    TEST EBP,EBP                        ; 005c5ebd
        ;   Label: LAB_005c5ebd
    JZ 0x005c5ee1                       ; 005c5ebf
        ;   XREF to: 005c5ee1 (CONDITIONAL_JUMP)  ; LAB_005c5ee1
    MOV CL,byte ptr [ESI + 0xd]         ; 005c5ec1
    AND CL,0xf9                         ; 005c5ec4
    MOV byte ptr [ESI + 0xd],CL         ; 005c5ec7
    MOV CH,CL                           ; 005c5eca
    OR CH,0x4                           ; 005c5ecc
    MOV byte ptr [ESI + 0xd],CH         ; 005c5ecf
    TEST EDI,EDI                        ; 005c5ed2
    JNZ 0x005c5ee1                      ; 005c5ed4
        ;   XREF to: 005c5ee1 (CONDITIONAL_JUMP)  ; LAB_005c5ee1
    PUSH ESI                            ; 005c5ed6
    CALL crt_unknown.c_FUN_005bea80     ; 005c5ed7
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005c5edc
    MOV EDI,EAX                         ; 005c5edf
    TEST EDI,EDI                        ; 005c5ee1
        ;   Label: LAB_005c5ee1
    JNZ 0x005c5eec                      ; 005c5ee3
        ;   XREF to: 005c5eec (CONDITIONAL_JUMP)  ; LAB_005c5eec
    MOV EDI,dword ptr [ESP]             ; 005c5ee5
    SUB EBX,EDI                         ; 005c5ee8
    MOV EDI,EBX                         ; 005c5eea
    MOV EBP,dword ptr [ESI + 0x10]      ; 005c5eec
        ;   Label: LAB_005c5eec
    PUSH EBP                            ; 005c5eef
    CALL dword ptr [0x0061f2ac]         ; 005c5ef0 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c5ef6
    MOV EAX,EDI                         ; 005c5ef9
    ADD ESP,0x4                         ; 005c5efb
    POP EBP                             ; 005c5efe
    POP EDI                             ; 005c5eff
    POP ESI                             ; 005c5f00
    POP EBX                             ; 005c5f01
    RET                                 ; 005c5f02

