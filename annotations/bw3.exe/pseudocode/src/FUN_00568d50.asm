; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568d50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568d50
        ;   Label: FUN_00568d50
    PUSH EDX                            ; 00568d54
    CALL FUN_00408600                   ; 00568d55
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 00568d5a
    MOV dword ptr [EAX + 0x154],0x5e5154 ; 00568d5d
    RET                                 ; 00568d67

