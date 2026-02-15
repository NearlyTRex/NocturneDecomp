; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort crt_unknown_c_FUN_0060b190(void)
;
; Local Variables:
; undefined2       Stack[-0x2]:2  local_2
;
; XREF[1]:
;   crt_unknown.c_FUN_006047a4 at 006047cc
;
; *****************************************************************************

section .text

    PUSH AX                             ; 0060b190
        ;   Label: crt_unknown.c_FUN_0060b190
    FINIT                               ; 0060b192
    FLD1                                ; 0060b195
    FLDZ                                ; 0060b197
    FDIVP                               ; 0060b199
    FLD ST0                             ; 0060b19b
    FCHS                                ; 0060b19d
    FCOMPP                              ; 0060b19f
    FNSTSW AX                           ; 0060b1a1
    MOV AL,0x2                          ; 0060b1a3
    SAHF                                ; 0060b1a5
    JZ 0x0060b1aa                       ; 0060b1a6
        ;   XREF to: 0060b1aa (CONDITIONAL_JUMP)  ; LAB_0060b1aa
    MOV AL,0x3                          ; 0060b1a8
    FINIT                               ; 0060b1aa
        ;   Label: LAB_0060b1aa
    FLDCW word ptr [ESP]                ; 0060b1ad
    XCHG word ptr [ESP],AX              ; 0060b1b0
    POP AX                              ; 0060b1b4
    RET                                 ; 0060b1b6

