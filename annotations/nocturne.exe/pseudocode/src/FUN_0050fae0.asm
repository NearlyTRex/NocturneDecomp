; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00479ab0 at 00479b43
;   FUN_004d4f30 at 004d5232
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0046b1b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0050fae0
        ;   Label: FUN_0050fae0
    PUSH EDX                            ; 0050fae4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050fae5
    PUSH ECX                            ; 0050fae9
    PUSH 0x1fba938                      ; 0050faea | DAT_01fba938
    CALL FUN_0046b1b0                   ; 0050faef
        ;   XREF to: 0046b1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b1b0()
    ADD ESP,0xc                         ; 0050faf4
    RET                                 ; 0050faf7

