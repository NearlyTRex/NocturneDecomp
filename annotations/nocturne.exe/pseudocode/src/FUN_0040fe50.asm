; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe50(undefined4 param_1)
;
;
; XREF[36]:
;   FUN_0040fcf0 at 0040fd09
;   FUN_004132c0 at 004132d9
;   FUN_00414c60 at 00414c79
;   FUN_00415250 at 00415269
;   FUN_00415a30 at 00415a59
;   FUN_0041a400 at 0041a429
;   FUN_00420f20 at 00420f39
;   FUN_00423d90 at 00423db9
;   FUN_0042b5d0 at 0042b5e9
;   FUN_0043c6f0 at 0043c709
;   ... and 26 more
;
; Referenced Globals:
;   undefined4 DAT_00599940
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599940                       ; 0040fe50 | DAT_00599940
        ;   Label: FUN_0040fe50
    PUSH 0x32                           ; 0040fe55
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe57
    PUSH EDX                            ; 0040fe5b
    CALL FUN_0056494f                   ; 0040fe5c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe61
    RET                                 ; 0040fe64

