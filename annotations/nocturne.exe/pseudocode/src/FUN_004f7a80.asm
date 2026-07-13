; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f7a80(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004f88a0 at 004f88be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7a80
        ;   Label: FUN_004f7a80
    MOV dword ptr [EAX + 0x20c],0x0     ; 004f7a84
    MOV byte ptr [EAX + 0x4],0x0        ; 004f7a8e
    MOV dword ptr [EAX],0x0             ; 004f7a92
    MOV dword ptr [EAX + 0x214],0x0     ; 004f7a98
    MOV dword ptr [EAX + 0x210],0x0     ; 004f7aa2
    MOV dword ptr [EAX + 0x208],0x0     ; 004f7aac
    RET                                 ; 004f7ab6

