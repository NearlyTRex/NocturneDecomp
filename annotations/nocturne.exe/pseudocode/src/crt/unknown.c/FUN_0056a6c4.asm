; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056a6c4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056a6ad at 0056a6be
;
; *****************************************************************************

section .text

    MOV CL,0xa                          ; 0056a6c4
        ;   Label: crt_unknown.c_FUN_0056a6c4
    CMP AL,CL                           ; 0056a6c6
    XCHG AH,AL                          ; 0056a6c8
    JC 0x0056a6d0                       ; 0056a6ca
        ;   XREF to: 0056a6d0 (CONDITIONAL_JUMP)  ; LAB_0056a6d0
    XCHG AH,AL                          ; 0056a6cc
    DIV CL                              ; 0056a6ce
    ADD AH,0x30                         ; 0056a6d0
        ;   Label: LAB_0056a6d0
    ADD AL,0x30                         ; 0056a6d3
    MOV byte ptr [EBX],AL               ; 0056a6d5
    INC EBX                             ; 0056a6d7
    MOV byte ptr [EBX],AH               ; 0056a6d8
    INC EBX                             ; 0056a6da
    RET                                 ; 0056a6db

