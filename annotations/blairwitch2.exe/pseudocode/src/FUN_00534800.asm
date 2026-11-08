; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_0046d110 at 0046d2be
;   FUN_00489670 at 0048d871
;   FUN_004964c0 at 00496532
;   FUN_00498d30 at 00498d77
;   FUN_0049e6e0 at 0049e756
;   FUN_0049e760 at 0049e7da
;
; Called Functions:
;   FUN_00443570
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 00534800
        ;   Label: FUN_00534800
    PUSH dword ptr [ESP + 0x14]         ; 00534804
    PUSH dword ptr [ESP + 0x14]         ; 00534808
    PUSH dword ptr [ESP + 0x14]         ; 0053480c
    PUSH 0x1fc7838                      ; 00534810
    CALL FUN_00443570                   ; 00534815
        ;   XREF to: 00443570 (UNCONDITIONAL_CALL)  ; undefined FUN_00443570()
    ADD ESP,0x14                        ; 0053481a
    RET                                 ; 0053481d

