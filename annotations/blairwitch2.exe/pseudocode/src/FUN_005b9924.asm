; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 FUN_005b9924(void)
;
;
; XREF[10]:
;   FUN_00449610 at 004496c1
;   FUN_004496e0 at 00449a2c
;   FUN_00453d80 at 00454368
;   FUN_0049db20 at 0049e32a
;   FUN_00565ff0 at 005665cd
;   FUN_0056ca10 at 0056cf3a
;   FUN_00591d10 at 00591dc2
;   FUN_00591de0 at 005921c9
;   FUN_00592280 at 0059266b
;   FUN_00593d50 at 00593dbe
;
; Referenced Globals:
;   undefined4 DAT_0061eeac
;
; Called Functions:
;   FUN_005b9989
;   FUN_005bfc46
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005b9924
        ;   Label: FUN_005b9924
    FLD ST0                             ; 005b9926
    FMUL ST0                            ; 005b9928
    FLD1                                ; 005b992a
    FSUBRP                              ; 005b992c
    FTST                                ; 005b992e
    FNSTSW AX                           ; 005b9930
    SAHF                                ; 005b9932
    JNZ 0x005b9944                      ; 005b9933
        ;   XREF to: 005b9944 (CONDITIONAL_JUMP)  ; LAB_005b9944
    FCOMPP                              ; 005b9935
    FNSTSW AX                           ; 005b9937
    SAHF                                ; 005b9939
    JA 0x005b9940                       ; 005b993a
        ;   XREF to: 005b9940 (CONDITIONAL_JUMP)  ; LAB_005b9940
    FLDZ                                ; 005b993c
    JMP 0x005b9942                      ; 005b993e
        ;   XREF to: 005b9942 (UNCONDITIONAL_JUMP)  ; LAB_005b9942
    FLDPI                               ; 005b9940
        ;   Label: LAB_005b9940
    JMP 0x005b995e                      ; 005b9942
        ;   XREF to: 005b995e (UNCONDITIONAL_JUMP)  ; LAB_005b995e
        ;   Label: LAB_005b9942
    MOV AL,0x1                          ; 005b9944
        ;   Label: LAB_005b9944
    CALL FUN_005bfc46                   ; 005b9946
        ;   XREF to: 005bfc46 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc46()
    CMP AL,0x0                          ; 005b994b
    JNZ 0x005b995e                      ; 005b994d
        ;   XREF to: 005b995e (CONDITIONAL_JUMP)  ; LAB_005b995e
    FXCH                                ; 005b994f
    CALL FUN_005b9989                   ; 005b9951
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    FLD extended double ptr [0x0061eeac] ; 005b9956 | DAT_0061eeac
    FSUBRP                              ; 005b995c
    POP AX                              ; 005b995e
        ;   Label: LAB_005b995e
    RET                                 ; 005b9960

