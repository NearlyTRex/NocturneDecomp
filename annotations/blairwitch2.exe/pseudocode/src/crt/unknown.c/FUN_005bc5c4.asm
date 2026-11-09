; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc5c4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc5ad at 005bc5be
;
; *****************************************************************************

section .text

    MOV CL,0xa                          ; 005bc5c4
        ;   Label: crt_unknown.c_FUN_005bc5c4
    CMP AL,CL                           ; 005bc5c6
    XCHG AH,AL                          ; 005bc5c8
    JC 0x005bc5d0                       ; 005bc5ca
        ;   XREF to: 005bc5d0 (CONDITIONAL_JUMP)  ; LAB_005bc5d0
    XCHG AH,AL                          ; 005bc5cc
    DIV CL                              ; 005bc5ce
    ADD AH,0x30                         ; 005bc5d0
        ;   Label: LAB_005bc5d0
    ADD AL,0x30                         ; 005bc5d3
    MOV byte ptr [EBX],AL               ; 005bc5d5
    INC EBX                             ; 005bc5d7
    MOV byte ptr [EBX],AH               ; 005bc5d8
    INC EBX                             ; 005bc5da
    RET                                 ; 005bc5db

