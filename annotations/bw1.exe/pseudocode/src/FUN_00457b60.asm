; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00457b60(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00457b60
        ;   Label: FUN_00457b60
    MOV dword ptr [EAX + 0x24],0x0      ; 00457b64
    MOV dword ptr [EAX + 0x28],0x0      ; 00457b6b
    MOV dword ptr [EAX + 0x2c],0x0      ; 00457b72
    MOV dword ptr [EAX + 0x30],0x0      ; 00457b79
    MOV dword ptr [EAX],0x0             ; 00457b80
    MOV dword ptr [EAX + 0x4],0x0       ; 00457b86
    MOV dword ptr [EAX + 0x20],0x0      ; 00457b8d
    RET                                 ; 00457b94

