; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort crt_unknown_c_FUN_005c25f0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bcc64 at 005bcc8c
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005c25f0
        ;   Label: crt_unknown.c_FUN_005c25f0
    FINIT                               ; 005c25f2
    FLD1                                ; 005c25f5
    FLDZ                                ; 005c25f7
    FDIVP                               ; 005c25f9
    FLD ST0                             ; 005c25fb
    FCHS                                ; 005c25fd
    FCOMPP                              ; 005c25ff
    FNSTSW AX                           ; 005c2601
    MOV AL,0x2                          ; 005c2603
    SAHF                                ; 005c2605
    JZ 0x005c260a                       ; 005c2606
        ;   XREF to: 005c260a (CONDITIONAL_JUMP)  ; LAB_005c260a
    MOV AL,0x3                          ; 005c2608
    FINIT                               ; 005c260a
        ;   Label: LAB_005c260a
    FLDCW word ptr [ESP]                ; 005c260d
    XCHG word ptr [ESP],AX              ; 005c2610
    POP AX                              ; 005c2614
    RET                                 ; 005c2616

