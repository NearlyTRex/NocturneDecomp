; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4f70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0062621c
;   undefined4 DAT_0062621d
;   undefined4 DAT_006265d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c4f34
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4f70
        ;   Label: crt_unknown.c_FUN_005c4f70
    MOV AH,byte ptr [0x0062621c]        ; 005c4f71 | DAT_0062621c
    TEST AH,AH                          ; 005c4f77
    JNZ 0x005c4fb2                      ; 005c4f79
        ;   XREF to: 005c4fb2 (CONDITIONAL_JUMP)  ; LAB_005c4fb2
    MOV byte ptr [0x0062621d],AH        ; 005c4f7b | DAT_0062621d
    XOR BH,BH                           ; 005c4f81
    SUB EAX,EAX                         ; 005c4f83
    PUSH EAX                            ; 005c4f85
    FNINIT                              ; 005c4f86
    FNSTCW word ptr [ESP]               ; 005c4f88
    POP EAX                             ; 005c4f8b
    MOV AL,AH                           ; 005c4f8c
    XOR BL,BL                           ; 005c4f8e
    CMP AL,0x3                          ; 005c4f90
    JNZ 0x005c4f9d                      ; 005c4f92
        ;   XREF to: 005c4f9d (CONDITIONAL_JUMP)  ; LAB_005c4f9d
    CALL crt_unknown.c_FUN_005c4f34     ; 005c4f94
        ;   XREF to: 005c4f34 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4f34()
    MOV BH,AL                           ; 005c4f99
    MOV BL,AL                           ; 005c4f9b
    CMP byte ptr [0x006265d4],0x0       ; 005c4f9d | DAT_006265d4
        ;   Label: LAB_005c4f9d
    JNZ 0x005c4fb2                      ; 005c4fa4
        ;   XREF to: 005c4fb2 (CONDITIONAL_JUMP)  ; LAB_005c4fb2
    MOV byte ptr [0x0062621c],BH        ; 005c4fa6 | DAT_0062621c
    MOV byte ptr [0x0062621d],BL        ; 005c4fac | DAT_0062621d
    POP EBX                             ; 005c4fb2
        ;   Label: LAB_005c4fb2
    RET                                 ; 005c4fb3

