; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005be9ac(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8a3c at 005b8a52
;
; Referenced Globals:
;   undefined1 DAT_005f19e8
;   undefined1 DAT_005f19ec
;   void* PTR_DAT_0061f2f8 = 005f19e8
;   void* PTR_DAT_0061f2fc = 005f19ec
;   undefined1 DAT_0061f30b
;   undefined1 DAT_0061f30c
;   undefined1 DAT_0061f30d
;   undefined1 DAT_0061f30e
;   undefined1 DAT_0061f30f
;
; Called Functions:
;   crt_env.c_getenv_FUN_005bac90
;   crt_stdlib.c__fullpath_FUN_005ba120
;   crt_unknown.c_FUN_005c0f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be9ac
        ;   Label: crt_unknown.c_FUN_005be9ac
    PUSH ESI                            ; 005be9ad
    PUSH EDI                            ; 005be9ae
    CMP byte ptr [0x0061f30c],0x0       ; 005be9af | DAT_0061f30c
    JNZ 0x005bea71                      ; 005be9b6
        ;   XREF to: 005bea71 (CONDITIONAL_JUMP)  ; LAB_005bea71
    MOV EBX,0x61f2f8                    ; 005be9bc | PTR_DAT_0061f2f8
    JMP 0x005bea04                      ; 005be9c1
        ;   XREF to: 005bea04 (UNCONDITIONAL_JUMP)  ; LAB_005bea04
    PUSH EDX                            ; 005be9c3 | DAT_005f19e8
        ;   Label: LAB_005be9c3
    CALL crt_env.c_getenv_FUN_005bac90  ; 005be9c4
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    MOV EDX,EAX                         ; 005be9c9
    ADD ESP,0x4                         ; 005be9cb
    TEST EAX,EAX                        ; 005be9ce
    JZ 0x005bea01                       ; 005be9d0
        ;   XREF to: 005bea01 (CONDITIONAL_JUMP)  ; LAB_005bea01
    MOV EDI,EAX                         ; 005be9d2
    PUSH ES                             ; 005be9d4
    MOV AX,DS                           ; 005be9d5
    MOV ES,AX                           ; 005be9d7
    SUB ECX,ECX                         ; 005be9d9
    DEC ECX                             ; 005be9db
    XOR EAX,EAX                         ; 005be9dc
    SCASB.REPNE ES:EDI                  ; 005be9de
    NOT ECX                             ; 005be9e0
    DEC ECX                             ; 005be9e2
    POP ES                              ; 005be9e3
    CMP ECX,0x103                       ; 005be9e4
    JA 0x005bea01                       ; 005be9ea
        ;   XREF to: 005bea01 (CONDITIONAL_JUMP)  ; LAB_005bea01
    PUSH 0x103                          ; 005be9ec
    PUSH EDX                            ; 005be9f1
    PUSH 0x61f30c                       ; 005be9f2 | DAT_0061f30c
    CALL crt_stdlib.c__fullpath_FUN_005ba120 ; 005be9f7
        ;   XREF to: 005ba120 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_005ba120(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 005be9fc
    JMP 0x005bea0b                      ; 005be9ff
        ;   XREF to: 005bea0b (UNCONDITIONAL_JUMP)  ; LAB_005bea0b
    ADD EBX,0x4                         ; 005bea01
        ;   Label: LAB_005bea01
    MOV EDX,dword ptr [EBX]             ; 005bea04 | PTR_DAT_0061f2f8 | PTR_DAT_0061f2fc
        ;   Label: LAB_005bea04
    CMP byte ptr [EDX],0x0              ; 005bea06 | DAT_005f19e8 | DAT_005f19ec
    JNZ 0x005be9c3                      ; 005bea09
        ;   XREF to: 005be9c3 (CONDITIONAL_JUMP)  ; LAB_005be9c3
    CMP byte ptr [0x0061f30c],0x0       ; 005bea0b | DAT_0061f30c
        ;   Label: LAB_005bea0b
    JNZ 0x005bea41                      ; 005bea12
        ;   XREF to: 005bea41 (CONDITIONAL_JUMP)  ; LAB_005bea41
    PUSH 0x0                            ; 005bea14
    PUSH 0x0                            ; 005bea16
    CALL crt_unknown.c_FUN_005c0f10     ; 005bea18
        ;   XREF to: 005c0f10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f10()
    ADD ESP,0x8                         ; 005bea1d
    MOV EDI,0x61f30c                    ; 005bea20 | DAT_0061f30c
    MOV ESI,EAX                         ; 005bea25
    PUSH EDI                            ; 005bea27 | DAT_0061f30c
    MOV AL,byte ptr [ESI]               ; 005bea28
        ;   Label: LAB_005bea28
    MOV byte ptr [EDI],AL               ; 005bea2a | DAT_0061f30c | DAT_0061f30e
    CMP AL,0x0                          ; 005bea2c
    JZ 0x005bea40                       ; 005bea2e
        ;   XREF to: 005bea40 (CONDITIONAL_JUMP)  ; LAB_005bea40
    MOV AL,byte ptr [ESI + 0x1]         ; 005bea30
    ADD ESI,0x2                         ; 005bea33
    MOV byte ptr [EDI + 0x1],AL         ; 005bea36 | DAT_0061f30d | DAT_0061f30f
    ADD EDI,0x2                         ; 005bea39
    CMP AL,0x0                          ; 005bea3c
    JNZ 0x005bea28                      ; 005bea3e
        ;   XREF to: 005bea28 (CONDITIONAL_JUMP)  ; LAB_005bea28
    POP EDI                             ; 005bea40
        ;   Label: LAB_005bea40
    MOV EDI,0x61f30c                    ; 005bea41 | DAT_0061f30c
        ;   Label: LAB_005bea41
    PUSH ES                             ; 005bea46
    MOV AX,DS                           ; 005bea47
    MOV ES,AX                           ; 005bea49
    SUB ECX,ECX                         ; 005bea4b
    DEC ECX                             ; 005bea4d
    XOR EAX,EAX                         ; 005bea4e
    SCASB.REPNE ES:EDI                  ; 005bea50 | DAT_0061f30c | DAT_0061f30d
    NOT ECX                             ; 005bea52
    DEC ECX                             ; 005bea54
    POP ES                              ; 005bea55
    LEA EDX,[ECX + -0x1]                ; 005bea56
    ADD EDX,0x61f30c                    ; 005bea59 | DAT_0061f30c
    MOV AL,byte ptr [EDX]               ; 005bea5f | DAT_0061f30b | DAT_0061f30c
    CMP AL,0x5c                         ; 005bea61
    JZ 0x005bea71                       ; 005bea63
        ;   XREF to: 005bea71 (CONDITIONAL_JUMP)  ; LAB_005bea71
    CMP AL,0x2f                         ; 005bea65
    JZ 0x005bea71                       ; 005bea67
        ;   XREF to: 005bea71 (CONDITIONAL_JUMP)  ; LAB_005bea71
    INC EDX                             ; 005bea69
    MOV byte ptr [EDX],0x5c             ; 005bea6a | DAT_0061f30c | DAT_0061f30d
    INC EDX                             ; 005bea6d
    MOV byte ptr [EDX],0x0              ; 005bea6e | DAT_0061f30d | DAT_0061f30e
    MOV EAX,0x61f30c                    ; 005bea71 | DAT_0061f30c
        ;   Label: LAB_005bea71
    POP EDI                             ; 005bea76
    POP ESI                             ; 005bea77
    POP EBX                             ; 005bea78
    RET                                 ; 005bea79

