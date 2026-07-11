; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043fee0(int param_1)
;
;
; XREF[1]:
;   FUN_0044e110 at 0044e115
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fee0
        ;   Label: FUN_0043fee0
    MOV dword ptr [EAX + 0x160],0x0     ; 0043fee4
    MOV dword ptr [EAX + 0x15c],0x0     ; 0043feee
    MOV dword ptr [EAX + 0x164],0x0     ; 0043fef8
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0043ff02
    MOV dword ptr [EAX + 0x11e4],0x0    ; 0043ff0c
    MOV dword ptr [EAX + 0x100],0x4479f99a ; 0043ff16
    MOV dword ptr [EAX + 0x158],0x0     ; 0043ff20
    RET                                 ; 0043ff2a

