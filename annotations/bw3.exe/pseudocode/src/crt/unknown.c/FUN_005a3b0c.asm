; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3b0c(char *param_1,uint param_2)
;
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3c6e
;
; Called Functions:
;   crt_unknown.c_FUN_005a3afc
;   crt_unknown.c_FUN_005a99b0
;   crt_unknown.c_FUN_005a9aec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3b0c
        ;   Label: crt_unknown.c_FUN_005a3b0c
    PUSH ESI                            ; 005a3b0d
    PUSH EDI                            ; 005a3b0e
    PUSH EBP                            ; 005a3b0f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3b10
    CALL crt_unknown.c_FUN_005a99b0     ; 005a3b14
        ;   XREF to: 005a99b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a99b0()
    MOV EBP,EAX                         ; 005a3b19
    SHR EBP,0x10                        ; 005a3b1b
    MOV EDI,EBX                         ; 005a3b1e
    OR EBP,EAX                          ; 005a3b20
    CALL crt_unknown.c_FUN_005a9aec     ; 005a3b22
        ;   XREF to: 005a9aec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9aec()
    MOV ESI,EAX                         ; 005a3b27
    PUSH EDI                            ; 005a3b29
    MOV AL,byte ptr [ESI]               ; 005a3b2a
        ;   Label: LAB_005a3b2a
    MOV byte ptr [EDI],AL               ; 005a3b2c
    CMP AL,0x0                          ; 005a3b2e
    JZ 0x005a3b42                       ; 005a3b30
        ;   XREF to: 005a3b42 (CONDITIONAL_JUMP)  ; LAB_005a3b42
    MOV AL,byte ptr [ESI + 0x1]         ; 005a3b32
    ADD ESI,0x2                         ; 005a3b35
    MOV byte ptr [EDI + 0x1],AL         ; 005a3b38
    ADD EDI,0x2                         ; 005a3b3b
    CMP AL,0x0                          ; 005a3b3e
    JNZ 0x005a3b2a                      ; 005a3b40
        ;   XREF to: 005a3b2a (CONDITIONAL_JUMP)  ; LAB_005a3b2a
    POP EDI                             ; 005a3b42
        ;   Label: LAB_005a3b42
    PUSH ES                             ; 005a3b43
    MOV AX,DS                           ; 005a3b44
    MOV ES,AX                           ; 005a3b46
    SUB ECX,ECX                         ; 005a3b48
    DEC ECX                             ; 005a3b4a
    XOR EAX,EAX                         ; 005a3b4b
    SCASB.REPNE ES:EDI                  ; 005a3b4d
    NOT ECX                             ; 005a3b4f
    DEC ECX                             ; 005a3b51
    POP ES                              ; 005a3b52
    LEA EDI,[EBX + ECX*0x1]             ; 005a3b53
    LEA EBX,[EDI + 0x4]                 ; 005a3b56
    MOV byte ptr [EDI],0x74             ; 005a3b59
    MOV ESI,EDI                         ; 005a3b5c
    MOV EAX,EBP                         ; 005a3b5e
        ;   Label: LAB_005a3b5e
    AND EAX,0xf                         ; 005a3b60
    DEC EBX                             ; 005a3b63
    PUSH EAX                            ; 005a3b64
    SHR EBP,0x4                         ; 005a3b65
    CALL crt_unknown.c_FUN_005a3afc     ; 005a3b68
        ;   XREF to: 005a3afc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3afc()
    ADD ESP,0x4                         ; 005a3b6d
    MOV byte ptr [EBX + 0x1],AL         ; 005a3b70
    CMP EBX,ESI                         ; 005a3b73
    JNZ 0x005a3b5e                      ; 005a3b75
        ;   XREF to: 005a3b5e (CONDITIONAL_JUMP)  ; LAB_005a3b5e
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3b77
    SAR EAX,0x4                         ; 005a3b7b
    AND EAX,0xf                         ; 005a3b7e
    PUSH EAX                            ; 005a3b81
    MOV byte ptr [EDI + 0x5],0x5f       ; 005a3b82
    CALL crt_unknown.c_FUN_005a3afc     ; 005a3b86
        ;   XREF to: 005a3afc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3afc()
    ADD ESP,0x4                         ; 005a3b8b
    MOV byte ptr [EDI + 0x6],AL         ; 005a3b8e
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3b91
    AND EAX,0xf                         ; 005a3b95
    PUSH EAX                            ; 005a3b98
    CALL crt_unknown.c_FUN_005a3afc     ; 005a3b99
        ;   XREF to: 005a3afc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3afc()
    MOV byte ptr [EDI + 0x8],0x2e       ; 005a3b9e
    MOV byte ptr [EDI + 0x9],0x74       ; 005a3ba2
    MOV byte ptr [EDI + 0xa],0x6d       ; 005a3ba6
    MOV byte ptr [EDI + 0xb],0x70       ; 005a3baa
    MOV byte ptr [EDI + 0xc],0x0        ; 005a3bae
    ADD ESP,0x4                         ; 005a3bb2
    MOV byte ptr [EDI + 0x7],AL         ; 005a3bb5
    POP EBP                             ; 005a3bb8
    POP EDI                             ; 005a3bb9
    POP ESI                             ; 005a3bba
    POP EBX                             ; 005a3bbb
    RET                                 ; 005a3bbc

