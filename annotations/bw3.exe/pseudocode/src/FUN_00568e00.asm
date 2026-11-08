; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568e00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e00
        ;   Label: FUN_00568e00
    PUSH EDX                            ; 00568e04
    CALL FUN_00408600                   ; 00568e05
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    MOV dword ptr [EAX + 0x154],0x5e5234 ; 00568e0a
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 00568e14
    MOV dword ptr [EAX + 0x15c],0x41100000 ; 00568e1e
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 00568e28
    ADD ESP,0x4                         ; 00568e32
    MOV dword ptr [EAX + 0x164],0x0     ; 00568e35
    RET                                 ; 00568e3f

