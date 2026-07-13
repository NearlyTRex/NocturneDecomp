; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe30(undefined4 param_1)
;
;
; XREF[36]:
;   FUN_0040fcf0 at 0040fd19
;   FUN_004132c0 at 004132e9
;   FUN_00414c60 at 00414c89
;   FUN_00415250 at 00415279
;   FUN_00415a30 at 00415a69
;   FUN_0041a400 at 0041a439
;   FUN_00420f20 at 00420f49
;   FUN_00423d90 at 00423dc9
;   FUN_0042b5d0 at 0042b5f9
;   FUN_0043c6f0 at 0043c719
;   ... and 26 more
;
; Referenced Globals:
;   undefined4 DAT_00599960
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599960                       ; 0040fe30 | DAT_00599960
        ;   Label: FUN_0040fe30
    PUSH 0x32                           ; 0040fe35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe37
    PUSH EDX                            ; 0040fe3b
    CALL FUN_0056494f                   ; 0040fe3c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe41
    RET                                 ; 0040fe44

