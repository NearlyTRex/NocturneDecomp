; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b5fe0(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b5fe0
        ;   Label: FUN_005b5fe0
    MOV dword ptr [EAX + 0x58],0x0      ; 005b5fe4
    MOV dword ptr [EAX + 0x5c],0x0      ; 005b5feb
    MOV dword ptr [EAX + 0x60],0x0      ; 005b5ff2
    MOV dword ptr [EAX + 0x64],0x0      ; 005b5ff9
    MOV dword ptr [EAX],0x0             ; 005b6000
    MOV dword ptr [EAX + 0x54],0x0      ; 005b6006
    RET                                 ; 005b600d

