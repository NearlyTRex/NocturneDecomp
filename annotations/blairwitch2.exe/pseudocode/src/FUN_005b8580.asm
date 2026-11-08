; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8580(undefined4 param_1)
;
;
; XREF[47]:
;   FUN_0040d460 at 0040d485
;   FUN_0042c520 at 0042c5d5
;   FUN_0042f4f0 at 0042f51f
;   FUN_00435270 at 0043529c
;   FUN_0043b570 at 0043b676
;   FUN_00446590 at 004465f6
;   FUN_00447860 at 00447875
;   FUN_00447c50 at 00447ce7
;   FUN_00449d90 at 00449db8
;   FUN_0044b5b0 at 0044b5b5
;   ... and 37 more
;
; Called Functions:
;   FUN_005b8590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8580
        ;   Label: FUN_005b8580
    PUSH EDX                            ; 005b8584
    CALL FUN_005b8590                   ; 005b8585
        ;   XREF to: 005b8590 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8590()
    ADD ESP,0x4                         ; 005b858a
    RET                                 ; 005b858d

