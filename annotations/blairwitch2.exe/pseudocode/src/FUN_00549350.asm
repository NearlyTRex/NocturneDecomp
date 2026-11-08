; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00549350(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fb9f0                       ; 00549350
        ;   Label: FUN_00549350
    PUSH 0x40                           ; 00549355
    MOV EDX,dword ptr [ESP + 0xc]       ; 00549357
    PUSH EDX                            ; 0054935b
    CALL FUN_005b854f                   ; 0054935c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00549361
    RET                                 ; 00549364

