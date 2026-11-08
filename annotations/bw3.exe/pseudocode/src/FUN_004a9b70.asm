; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9b70(undefined1 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9b70
        ;   Label: FUN_004a9b70
    MOV byte ptr [EAX + 0x40],0x0       ; 004a9b74
    MOV dword ptr [EAX + 0x150],0x0     ; 004a9b78
    MOV dword ptr [EAX + 0x140],0x0     ; 004a9b82
    MOV dword ptr [EAX + 0x144],0x0     ; 004a9b8c
    MOV byte ptr [EAX],0x0              ; 004a9b96
    RET                                 ; 004a9b99

