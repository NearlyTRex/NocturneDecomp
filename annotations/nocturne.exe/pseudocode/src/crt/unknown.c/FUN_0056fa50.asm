; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort crt_unknown_c_FUN_0056fa50(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056ad64 at 0056ad8c
;
; *****************************************************************************

section .text

    PUSH AX                             ; 0056fa50
        ;   Label: crt_unknown.c_FUN_0056fa50
    FINIT                               ; 0056fa52
    FLD1                                ; 0056fa55
    FLDZ                                ; 0056fa57
    FDIVP                               ; 0056fa59
    FLD ST0                             ; 0056fa5b
    FCHS                                ; 0056fa5d
    FCOMPP                              ; 0056fa5f
    FNSTSW AX                           ; 0056fa61
    MOV AL,0x2                          ; 0056fa63
    SAHF                                ; 0056fa65
    JZ 0x0056fa6a                       ; 0056fa66
        ;   XREF to: 0056fa6a (CONDITIONAL_JUMP)  ; LAB_0056fa6a
    MOV AL,0x3                          ; 0056fa68
    FINIT                               ; 0056fa6a
        ;   Label: LAB_0056fa6a
    FLDCW word ptr [ESP]                ; 0056fa6d
    XCHG word ptr [ESP],AX              ; 0056fa70
    POP AX                              ; 0056fa74
    RET                                 ; 0056fa76

