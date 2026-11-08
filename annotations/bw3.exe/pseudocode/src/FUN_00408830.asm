; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408830(void)
;
;
; XREF[64]:
;   FUN_0040df20 at 0040df69
;   FUN_0040e810 at 0040e857
;   FUN_0040f200 at 0040f249
;   FUN_00414e90 at 00414f02
;   FUN_00418f90 at 0041905e
;   FUN_004215f0 at 004217ab
;   FUN_0042a280 at 0042a2fe
;   FUN_0042e220 at 0042e2db
;   FUN_0042e300 at 0042e35e
;   FUN_0042f510 at 0042f689
;   ... and 54 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005f2afc]      ; 00408830 | DAT_005f2afc
        ;   Label: FUN_00408830
    PUSH EDX                            ; 00408836
    CALL thunk_FUN_004e5ef0             ; 00408837
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0040883c
    RET                                 ; 0040883f

