; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566c81(void)
;
;
; XREF[11]:
;   FUN_004785a0 at 00478664
;   FUN_00482c80 at 00482d3a
;   FUN_004aea00 at 004aea3f
;   FUN_004b0200 at 004b02e0
;   FUN_0050aba0 at 0050ac33
;   FUN_0051f080 at 0051f1a0
;   FUN_005384d0 at 0053920f
;   FUN_0054e4a0 at 0054e510
;   FUN_0055d2d0 at 0055d45e
;   FUN_00565c76 at 00565c8b
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005c1d98
;
; Called Functions:
;   FUN_0056dc98
;
; *****************************************************************************

section .text

    FXCH                                ; 00566c81
        ;   Label: FUN_00566c81
    TEST byte ptr [0x005c1d98],0x1      ; 00566c83 | DAT_005c1d98
    JNZ 0x00566c90                      ; 00566c8a
        ;   XREF to: 00566c90 (CONDITIONAL_JUMP)  ; LAB_00566c90
    FPATAN                              ; 00566c8c
    JMP 0x00566c95                      ; 00566c8e
        ;   XREF to: 00566c95 (UNCONDITIONAL_JUMP)  ; LAB_00566c95
    CALL FUN_0056dc98                   ; 00566c90
        ;   XREF to: 0056dc98 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc98()
        ;   Label: LAB_00566c90
    RET                                 ; 00566c95
        ;   Label: LAB_00566c95

