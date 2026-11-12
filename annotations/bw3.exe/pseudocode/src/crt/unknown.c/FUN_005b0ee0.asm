; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b0ee0(byte *param_1,_FILE *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b07f0 at 005b080c
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005a5d70
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0ee0
        ;   Label: crt_unknown.c_FUN_005b0ee0
    PUSH ESI                            ; 005b0ee1
    PUSH EDI                            ; 005b0ee2
    PUSH EBP                            ; 005b0ee3
    SUB ESP,0x4                         ; 005b0ee4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b0ee7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b0eeb
    MOV EDX,dword ptr [ESI + 0x10]      ; 005b0eef
    PUSH EDX                            ; 005b0ef2
    CALL dword ptr [0x006079a4]         ; 005b0ef3 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b0ef9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b0efc
    ADD ESP,0x4                         ; 005b0eff
    TEST ECX,ECX                        ; 005b0f02
    JNZ 0x005b0f0f                      ; 005b0f04
        ;   XREF to: 005b0f0f (CONDITIONAL_JUMP)  ; LAB_005b0f0f
    PUSH ESI                            ; 005b0f06
    CALL crt_unknown.c_FUN_005a9310     ; 005b0f07
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005b0f0c
    MOV AH,byte ptr [ESI + 0xd]         ; 005b0f0f
        ;   Label: LAB_005b0f0f
    XOR EBP,EBP                         ; 005b0f12
    TEST AH,0x4                         ; 005b0f14
    JZ 0x005b0f2e                       ; 005b0f17
        ;   XREF to: 005b0f2e (CONDITIONAL_JUMP)  ; LAB_005b0f2e
    MOV DL,AH                           ; 005b0f19
    AND DL,0xf9                         ; 005b0f1b
    MOV byte ptr [ESI + 0xd],DL         ; 005b0f1e
    MOV DH,DL                           ; 005b0f21
    OR DH,0x2                           ; 005b0f23
    MOV EBP,0x1                         ; 005b0f26
    MOV byte ptr [ESI + 0xd],DH         ; 005b0f2b
    MOV dword ptr [ESP],EBX             ; 005b0f2e
        ;   Label: LAB_005b0f2e
    XOR EDI,EDI                         ; 005b0f31
    XOR EAX,EAX                         ; 005b0f33
        ;   Label: LAB_005b0f33
    MOV AL,byte ptr [EBX]               ; 005b0f35
    TEST EAX,EAX                        ; 005b0f37
    JZ 0x005b0f4d                       ; 005b0f39
        ;   XREF to: 005b0f4d (CONDITIONAL_JUMP)  ; LAB_005b0f4d
    PUSH ESI                            ; 005b0f3b
    PUSH EAX                            ; 005b0f3c
    INC EBX                             ; 005b0f3d
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 005b0f3e
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    ADD ESP,0x8                         ; 005b0f43
    CMP EAX,-0x1                        ; 005b0f46
    JNZ 0x005b0f33                      ; 005b0f49
        ;   XREF to: 005b0f33 (CONDITIONAL_JUMP)  ; LAB_005b0f33
    MOV EDI,EAX                         ; 005b0f4b
    TEST EBP,EBP                        ; 005b0f4d
        ;   Label: LAB_005b0f4d
    JZ 0x005b0f71                       ; 005b0f4f
        ;   XREF to: 005b0f71 (CONDITIONAL_JUMP)  ; LAB_005b0f71
    MOV CL,byte ptr [ESI + 0xd]         ; 005b0f51
    AND CL,0xf9                         ; 005b0f54
    MOV byte ptr [ESI + 0xd],CL         ; 005b0f57
    MOV CH,CL                           ; 005b0f5a
    OR CH,0x4                           ; 005b0f5c
    MOV byte ptr [ESI + 0xd],CH         ; 005b0f5f
    TEST EDI,EDI                        ; 005b0f62
    JNZ 0x005b0f71                      ; 005b0f64
        ;   XREF to: 005b0f71 (CONDITIONAL_JUMP)  ; LAB_005b0f71
    PUSH ESI                            ; 005b0f66
    CALL crt_unknown.c_FUN_005a9bc0     ; 005b0f67
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005b0f6c
    MOV EDI,EAX                         ; 005b0f6f
    TEST EDI,EDI                        ; 005b0f71
        ;   Label: LAB_005b0f71
    JNZ 0x005b0f7c                      ; 005b0f73
        ;   XREF to: 005b0f7c (CONDITIONAL_JUMP)  ; LAB_005b0f7c
    MOV EDI,dword ptr [ESP]             ; 005b0f75
    SUB EBX,EDI                         ; 005b0f78
    MOV EDI,EBX                         ; 005b0f7a
    MOV EBP,dword ptr [ESI + 0x10]      ; 005b0f7c
        ;   Label: LAB_005b0f7c
    PUSH EBP                            ; 005b0f7f
    CALL dword ptr [0x006079a8]         ; 005b0f80 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005b0f86
    MOV EAX,EDI                         ; 005b0f89
    ADD ESP,0x4                         ; 005b0f8b
    POP EBP                             ; 005b0f8e
    POP EDI                             ; 005b0f8f
    POP ESI                             ; 005b0f90
    POP EBX                             ; 005b0f91
    RET                                 ; 005b0f92

