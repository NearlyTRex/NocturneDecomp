; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4894(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c487d at 005c488e
;
; *****************************************************************************

section .text

    MOV CL,0xa                          ; 005c4894
        ;   Label: crt_unknown.c_FUN_005c4894
    CMP AL,CL                           ; 005c4896
    XCHG AH,AL                          ; 005c4898
    JC 0x005c48a0                       ; 005c489a
        ;   XREF to: 005c48a0 (CONDITIONAL_JUMP)  ; LAB_005c48a0
    XCHG AH,AL                          ; 005c489c
    DIV CL                              ; 005c489e
    ADD AH,0x30                         ; 005c48a0
        ;   Label: LAB_005c48a0
    ADD AL,0x30                         ; 005c48a3
    MOV byte ptr [EBX],AL               ; 005c48a5
    INC EBX                             ; 005c48a7
    MOV byte ptr [EBX],AH               ; 005c48a8
    INC EBX                             ; 005c48aa
    RET                                 ; 005c48ab

