; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00580770(void)
;
;
; XREF[3]:
;   FUN_004032b0 at 004032b0
;   FUN_0047bd50 at 0047bebd
;   thunk_FUN_00580770 at 004df570
;
; Referenced Globals:
;   undefined4 DAT_02d20328
;   undefined4 DAT_02d2032c
;   undefined4 DAT_02d20330
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00580770
        ;   Label: FUN_00580770
    XOR EAX,EAX                         ; 00580772
    MOV dword ptr [0x02d2032c],EDX      ; 00580774 | DAT_02d2032c
    MOV dword ptr [0x02d20328],EDX      ; 0058077a | DAT_02d20328
    MOV dword ptr [0x02d20330],EDX      ; 00580780 | DAT_02d20330
    RET                                 ; 00580786

