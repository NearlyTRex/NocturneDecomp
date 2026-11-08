; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b86a0(undefined4 param_1)
;
;
; XREF[68]:
;   FUN_0040d540 at 0040d555
;   FUN_0042f4f0 at 0042f5cc
;   FUN_00434290 at 004342ab
;   FUN_004351e0 at 0043525e
;   FUN_0043b730 at 0043b780
;   FUN_004466c0 at 004466ed
;   FUN_004478b0 at 004478bf
;   FUN_00447c30 at 00447c3f
;   FUN_00448fa0 at 00448fb2
;   FUN_00449e70 at 00449e94
;   ... and 58 more
;
; Called Functions:
;   FUN_005b86b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b86a0
        ;   Label: FUN_005b86a0
    PUSH EDX                            ; 005b86a4
    CALL FUN_005b86b0                   ; 005b86a5
        ;   XREF to: 005b86b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86b0()
    ADD ESP,0x4                         ; 005b86aa
    RET                                 ; 005b86ad

