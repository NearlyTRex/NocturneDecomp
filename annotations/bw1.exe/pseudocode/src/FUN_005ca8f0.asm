; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_005ca8f0(void)
;
;
; XREF[1]:
;   FUN_005c4f34 at 005c4f5c
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005ca8f0
        ;   Label: FUN_005ca8f0
    FINIT                               ; 005ca8f2
    FLD1                                ; 005ca8f5
    FLDZ                                ; 005ca8f7
    FDIVP                               ; 005ca8f9
    FLD ST0                             ; 005ca8fb
    FCHS                                ; 005ca8fd
    FCOMPP                              ; 005ca8ff
    FNSTSW AX                           ; 005ca901
    MOV AL,0x2                          ; 005ca903
    SAHF                                ; 005ca905
    JZ 0x005ca90a                       ; 005ca906
        ;   XREF to: 005ca90a (CONDITIONAL_JUMP)  ; LAB_005ca90a
    MOV AL,0x3                          ; 005ca908
    FINIT                               ; 005ca90a
        ;   Label: LAB_005ca90a
    FLDCW word ptr [ESP]                ; 005ca90d
    XCHG word ptr [ESP],AX              ; 005ca910
    POP AX                              ; 005ca914
    RET                                 ; 005ca916

