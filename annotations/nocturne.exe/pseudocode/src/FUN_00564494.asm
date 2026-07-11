; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564494(int param_1)
;
;
; XREF[30]:
;   FUN_00409ea0 at 00409eed
;   FUN_00438270 at 00438309
;   FUN_00438320 at 00438347
;   FUN_00438f30 at 00438f6d
;   FUN_0044bcd0 at 0044bd0b
;   FUN_0044cc00 at 0044cc2f
;   FUN_004672a0 at 00467304
;   FUN_00473b80 at 00473bc3
;   FUN_00474cf0 at 00474d59
;   FUN_004b1470 at 004b14b8
;   ... and 20 more
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

