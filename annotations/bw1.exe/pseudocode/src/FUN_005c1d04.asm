; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 FUN_005c1d04(void)
;
;
; XREF[12]:
;   FUN_0045f770 at 0045f821
;   FUN_0045f840 at 0045fb8c
;   FUN_0046caa0 at 0046cdcb
;   FUN_004724a0 at 00472dcf
;   FUN_00473160 at 0047368a
;   FUN_004b6420 at 004b6c2a
;   FUN_00588ad0 at 005890ad
;   FUN_0058f660 at 0058fb8a
;   FUN_005b5860 at 005b5912
;   FUN_005b5930 at 005b5d19
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_0062622c
;
; Called Functions:
;   FUN_005c1d69
;   FUN_005c7f06
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005c1d04
        ;   Label: FUN_005c1d04
    FLD ST0                             ; 005c1d06
    FMUL ST0                            ; 005c1d08
    FLD1                                ; 005c1d0a
    FSUBRP                              ; 005c1d0c
    FTST                                ; 005c1d0e
    FNSTSW AX                           ; 005c1d10
    SAHF                                ; 005c1d12
    JNZ 0x005c1d24                      ; 005c1d13
        ;   XREF to: 005c1d24 (CONDITIONAL_JUMP)  ; LAB_005c1d24
    FCOMPP                              ; 005c1d15
    FNSTSW AX                           ; 005c1d17
    SAHF                                ; 005c1d19
    JA 0x005c1d20                       ; 005c1d1a
        ;   XREF to: 005c1d20 (CONDITIONAL_JUMP)  ; LAB_005c1d20
    FLDZ                                ; 005c1d1c
    JMP 0x005c1d22                      ; 005c1d1e
        ;   XREF to: 005c1d22 (UNCONDITIONAL_JUMP)  ; LAB_005c1d22
    FLDPI                               ; 005c1d20
        ;   Label: LAB_005c1d20
    JMP 0x005c1d3e                      ; 005c1d22
        ;   XREF to: 005c1d3e (UNCONDITIONAL_JUMP)  ; LAB_005c1d3e
        ;   Label: LAB_005c1d22
    MOV AL,0x1                          ; 005c1d24
        ;   Label: LAB_005c1d24
    CALL FUN_005c7f06                   ; 005c1d26
        ;   XREF to: 005c7f06 (UNCONDITIONAL_CALL)  ; undefined FUN_005c7f06()
    CMP AL,0x0                          ; 005c1d2b
    JNZ 0x005c1d3e                      ; 005c1d2d
        ;   XREF to: 005c1d3e (CONDITIONAL_JUMP)  ; LAB_005c1d3e
    FXCH                                ; 005c1d2f
    CALL FUN_005c1d69                   ; 005c1d31
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FLD extended double ptr [0x0062622c] ; 005c1d36 | DAT_0062622c
    FSUBRP                              ; 005c1d3c
    POP AX                              ; 005c1d3e
        ;   Label: LAB_005c1d3e
    RET                                 ; 005c1d40

