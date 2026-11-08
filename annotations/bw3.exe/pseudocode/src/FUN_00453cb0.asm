; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453cb0(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00453cb0
        ;   Label: FUN_00453cb0
    MOV dword ptr [EAX + 0x24],0x0      ; 00453cb4
    MOV dword ptr [EAX + 0x28],0x0      ; 00453cbb
    MOV dword ptr [EAX + 0x2c],0x0      ; 00453cc2
    MOV dword ptr [EAX + 0x30],0x0      ; 00453cc9
    MOV dword ptr [EAX],0x0             ; 00453cd0
    MOV dword ptr [EAX + 0x4],0x0       ; 00453cd6
    MOV dword ptr [EAX + 0x20],0x0      ; 00453cdd
    RET                                 ; 00453ce4

