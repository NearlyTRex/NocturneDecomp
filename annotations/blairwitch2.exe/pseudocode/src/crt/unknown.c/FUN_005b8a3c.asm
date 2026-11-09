; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b8a3c(char *param_1,uint param_2)
;
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_005b8af0 at 005b8b9e
;
; Called Functions:
;   crt_unknown.c_FUN_005b8a2c
;   crt_unknown.c_FUN_005be870
;   crt_unknown.c_FUN_005be9ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8a3c
        ;   Label: crt_unknown.c_FUN_005b8a3c
    PUSH ESI                            ; 005b8a3d
    PUSH EDI                            ; 005b8a3e
    PUSH EBP                            ; 005b8a3f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8a40
    CALL crt_unknown.c_FUN_005be870     ; 005b8a44
        ;   XREF to: 005be870 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be870()
    MOV EBP,EAX                         ; 005b8a49
    SHR EBP,0x10                        ; 005b8a4b
    MOV EDI,EBX                         ; 005b8a4e
    OR EBP,EAX                          ; 005b8a50
    CALL crt_unknown.c_FUN_005be9ac     ; 005b8a52
        ;   XREF to: 005be9ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be9ac()
    MOV ESI,EAX                         ; 005b8a57
    PUSH EDI                            ; 005b8a59
    MOV AL,byte ptr [ESI]               ; 005b8a5a
        ;   Label: LAB_005b8a5a
    MOV byte ptr [EDI],AL               ; 005b8a5c
    CMP AL,0x0                          ; 005b8a5e
    JZ 0x005b8a72                       ; 005b8a60
        ;   XREF to: 005b8a72 (CONDITIONAL_JUMP)  ; LAB_005b8a72
    MOV AL,byte ptr [ESI + 0x1]         ; 005b8a62
    ADD ESI,0x2                         ; 005b8a65
    MOV byte ptr [EDI + 0x1],AL         ; 005b8a68
    ADD EDI,0x2                         ; 005b8a6b
    CMP AL,0x0                          ; 005b8a6e
    JNZ 0x005b8a5a                      ; 005b8a70
        ;   XREF to: 005b8a5a (CONDITIONAL_JUMP)  ; LAB_005b8a5a
    POP EDI                             ; 005b8a72
        ;   Label: LAB_005b8a72
    PUSH ES                             ; 005b8a73
    MOV AX,DS                           ; 005b8a74
    MOV ES,AX                           ; 005b8a76
    SUB ECX,ECX                         ; 005b8a78
    DEC ECX                             ; 005b8a7a
    XOR EAX,EAX                         ; 005b8a7b
    SCASB.REPNE ES:EDI                  ; 005b8a7d
    NOT ECX                             ; 005b8a7f
    DEC ECX                             ; 005b8a81
    POP ES                              ; 005b8a82
    LEA EDI,[EBX + ECX*0x1]             ; 005b8a83
    LEA EBX,[EDI + 0x4]                 ; 005b8a86
    MOV byte ptr [EDI],0x74             ; 005b8a89
    MOV ESI,EDI                         ; 005b8a8c
    MOV EAX,EBP                         ; 005b8a8e
        ;   Label: LAB_005b8a8e
    AND EAX,0xf                         ; 005b8a90
    DEC EBX                             ; 005b8a93
    PUSH EAX                            ; 005b8a94
    SHR EBP,0x4                         ; 005b8a95
    CALL crt_unknown.c_FUN_005b8a2c     ; 005b8a98
        ;   XREF to: 005b8a2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8a2c()
    ADD ESP,0x4                         ; 005b8a9d
    MOV byte ptr [EBX + 0x1],AL         ; 005b8aa0
    CMP EBX,ESI                         ; 005b8aa3
    JNZ 0x005b8a8e                      ; 005b8aa5
        ;   XREF to: 005b8a8e (CONDITIONAL_JUMP)  ; LAB_005b8a8e
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b8aa7
    SAR EAX,0x4                         ; 005b8aab
    AND EAX,0xf                         ; 005b8aae
    PUSH EAX                            ; 005b8ab1
    MOV byte ptr [EDI + 0x5],0x5f       ; 005b8ab2
    CALL crt_unknown.c_FUN_005b8a2c     ; 005b8ab6
        ;   XREF to: 005b8a2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8a2c()
    ADD ESP,0x4                         ; 005b8abb
    MOV byte ptr [EDI + 0x6],AL         ; 005b8abe
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b8ac1
    AND EAX,0xf                         ; 005b8ac5
    PUSH EAX                            ; 005b8ac8
    CALL crt_unknown.c_FUN_005b8a2c     ; 005b8ac9
        ;   XREF to: 005b8a2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8a2c()
    MOV byte ptr [EDI + 0x8],0x2e       ; 005b8ace
    MOV byte ptr [EDI + 0x9],0x74       ; 005b8ad2
    MOV byte ptr [EDI + 0xa],0x6d       ; 005b8ad6
    MOV byte ptr [EDI + 0xb],0x70       ; 005b8ada
    MOV byte ptr [EDI + 0xc],0x0        ; 005b8ade
    ADD ESP,0x4                         ; 005b8ae2
    MOV byte ptr [EDI + 0x7],AL         ; 005b8ae5
    POP EBP                             ; 005b8ae8
    POP EDI                             ; 005b8ae9
    POP ESI                             ; 005b8aea
    POP EBX                             ; 005b8aeb
    RET                                 ; 005b8aec

