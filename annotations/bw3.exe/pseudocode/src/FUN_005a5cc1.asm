; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5cc1(void)
;
;
; XREF[12]:
;   FUN_00497290 at 0049737a
;   FUN_004cd510 at 004cd54f
;   FUN_004ce9c0 at 004cea9a
;   FUN_0051c1c0 at 0051d971
;   FUN_0054fb70 at 0054fc90
;   FUN_00575380 at 005756df
;   FUN_00576250 at 005762af
;   FUN_00585b20 at 00585c9b
;   FUN_00585de0 at 00585e6f
;   FUN_00585f40 at 00585fd1
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_00607b5c
;
; Called Functions:
;   FUN_005accb8
;
; *****************************************************************************

section .text

    FXCH                                ; 005a5cc1
        ;   Label: FUN_005a5cc1
    TEST byte ptr [0x00607b5c],0x1      ; 005a5cc3 | DAT_00607b5c
    JNZ 0x005a5cd0                      ; 005a5cca
        ;   XREF to: 005a5cd0 (CONDITIONAL_JUMP)  ; LAB_005a5cd0
    FPATAN                              ; 005a5ccc
    JMP 0x005a5cd5                      ; 005a5cce
        ;   XREF to: 005a5cd5 (UNCONDITIONAL_JUMP)  ; LAB_005a5cd5
    CALL FUN_005accb8                   ; 005a5cd0
        ;   XREF to: 005accb8 (UNCONDITIONAL_CALL)  ; undefined FUN_005accb8()
        ;   Label: LAB_005a5cd0
    RET                                 ; 005a5cd5
        ;   Label: LAB_005a5cd5

