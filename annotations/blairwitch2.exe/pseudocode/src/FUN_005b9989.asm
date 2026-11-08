; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b9989(void)
;
;
; XREF[16]:
;   FUN_00453d80 at 00454cb0
;   FUN_00486a80 at 00486b63
;   FUN_00493a40 at 00493b2a
;   FUN_004c7ea0 at 004c7edf
;   FUN_004c9850 at 004c992a
;   FUN_004e0670 at 004e09e7
;   FUN_00548940 at 00548a60
;   FUN_00565ff0 at 00566f52
;   FUN_00580610 at 0058096f
;   FUN_00581910 at 00581cf4
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_0061f458
;
; Called Functions:
;   FUN_005bfc84
;
; *****************************************************************************

section .text

    FXCH                                ; 005b9989
        ;   Label: FUN_005b9989
    TEST byte ptr [0x0061f458],0x1      ; 005b998b | DAT_0061f458
    JNZ 0x005b9998                      ; 005b9992
        ;   XREF to: 005b9998 (CONDITIONAL_JUMP)  ; LAB_005b9998
    FPATAN                              ; 005b9994
    JMP 0x005b999d                      ; 005b9996
        ;   XREF to: 005b999d (UNCONDITIONAL_JUMP)  ; LAB_005b999d
    CALL FUN_005bfc84                   ; 005b9998
        ;   XREF to: 005bfc84 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc84()
        ;   Label: LAB_005b9998
    RET                                 ; 005b999d
        ;   Label: LAB_005b999d

