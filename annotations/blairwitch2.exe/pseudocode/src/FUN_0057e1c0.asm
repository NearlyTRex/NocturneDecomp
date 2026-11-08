; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057e1c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0057b9a0 at 0057b9a5
;
; Called Functions:
;   FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057e1c0
        ;   Label: FUN_0057e1c0
    PUSH EDX                            ; 0057e1c4
    CALL FUN_0057d860                   ; 0057e1c5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x4                         ; 0057e1ca
    MOV dword ptr [EAX],0x5fd4d4        ; 0057e1cd
    RET                                 ; 0057e1d3

