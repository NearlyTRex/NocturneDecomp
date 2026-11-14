; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort crt_unknown_c_FUN_005ad760(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7da4 at 005a7dcc
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005ad760
        ;   Label: crt_unknown.c_FUN_005ad760
    FINIT                               ; 005ad762
    FLD1                                ; 005ad765
    FLDZ                                ; 005ad767
    FDIVP                               ; 005ad769
    FLD ST0                             ; 005ad76b
    FCHS                                ; 005ad76d
    FCOMPP                              ; 005ad76f
    FNSTSW AX                           ; 005ad771
    MOV AL,0x2                          ; 005ad773
    SAHF                                ; 005ad775
    JZ 0x005ad77a                       ; 005ad776
        ;   XREF to: 005ad77a (CONDITIONAL_JUMP)  ; LAB_005ad77a
    MOV AL,0x3                          ; 005ad778
    FINIT                               ; 005ad77a
        ;   Label: LAB_005ad77a
    FLDCW word ptr [ESP]                ; 005ad77d
    XCHG word ptr [ESP],AX              ; 005ad780
    POP AX                              ; 005ad784
    RET                                 ; 005ad786

