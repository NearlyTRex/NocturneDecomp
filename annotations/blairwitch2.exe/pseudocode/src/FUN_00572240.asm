; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572240(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00572240
        ;   Label: FUN_00572240
    PUSH EDX                            ; 00572244
    CALL FUN_00408790                   ; 00572245
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0057224a
    MOV dword ptr [EAX + 0x2b0],0x5fca44 ; 0057224d
    RET                                 ; 00572257

