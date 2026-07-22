; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564494(int param_1)
;
;
; XREF[146]:
;   FUN_0040ef90 at 0040efd2
;   FUN_0040f4b0 at 0040f4f2
;   FUN_0040f8b0 at 0040f8f2
;   FUN_0040fc30 at 0040fcdd
;   FUN_004100f0 at 00410132
;   FUN_00411610 at 00411652
;   FUN_00411660 at 004116a2
;   FUN_004118c0 at 00411902
;   FUN_004132c0 at 0041336d
;   FUN_00414c60 at 00414d0d
;   ... and 136 more
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564494
        ;   Label: FUN_00564494
    TEST EDX,EDX                        ; 00564498
    JNZ 0x0056449d                      ; 0056449a
        ;   XREF to: 0056449d (CONDITIONAL_JUMP)  ; LAB_0056449d
    RET                                 ; 0056449c
    PUSH EDX                            ; 0056449d
        ;   Label: LAB_0056449d
    CALL FUN_005638d0                   ; 0056449e
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 005644a3
    RET                                 ; 005644a6

