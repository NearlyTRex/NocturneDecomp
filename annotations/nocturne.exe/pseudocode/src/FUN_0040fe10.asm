; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe10(undefined4 param_1)
;
;
; XREF[36]:
;   FUN_0040fcf0 at 0040fd29
;   FUN_004132c0 at 004132f9
;   FUN_00414c60 at 00414c99
;   FUN_00415250 at 00415289
;   FUN_00415a30 at 00415a79
;   FUN_0041a400 at 0041a449
;   FUN_00420f20 at 00420f59
;   FUN_00423d90 at 00423dd9
;   FUN_0042b5d0 at 0042b609
;   FUN_0043c6f0 at 0043c729
;   ... and 26 more
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0040fe10 | DAT_005993b0
        ;   Label: FUN_0040fe10
    PUSH 0xf                            ; 0040fe15
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe17
    PUSH EDX                            ; 0040fe1b
    CALL FUN_0056494f                   ; 0040fe1c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe21
    RET                                 ; 0040fe24

