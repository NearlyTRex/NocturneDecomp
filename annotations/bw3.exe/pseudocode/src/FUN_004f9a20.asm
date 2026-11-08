; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9a20(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9a20
        ;   Label: FUN_004f9a20
    MOV dword ptr [EAX + 0x58],0x0      ; 004f9a24
    MOV dword ptr [EAX + 0x5c],0x0      ; 004f9a2b
    MOV dword ptr [EAX + 0x60],0x0      ; 004f9a32
    MOV dword ptr [EAX + 0x64],0x0      ; 004f9a39
    MOV dword ptr [EAX],0x0             ; 004f9a40
    MOV dword ptr [EAX + 0x54],0x0      ; 004f9a46
    RET                                 ; 004f9a4d

