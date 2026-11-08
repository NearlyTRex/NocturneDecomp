; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0ee0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00544460 at 00549dfb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0ee0
        ;   Label: FUN_004a0ee0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a0ee4
    MOV dword ptr [EAX + 0xc1ec],0x0    ; 004a0ee8
    MOV dword ptr [EAX + 0xc260],EDX    ; 004a0ef2
    RET                                 ; 004a0ef8

