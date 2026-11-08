; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440bd0(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_004410f0 at 00441101
;   FUN_00441310 at 00441321
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00440bd0
        ;   Label: FUN_00440bd0
    MOV dword ptr [EAX + 0xc],0x0       ; 00440bd4
    MOV dword ptr [EAX + 0x10],0x0      ; 00440bdb
    MOV EDX,dword ptr [EAX + 0xc]       ; 00440be2
    MOV dword ptr [EAX],EDX             ; 00440be5
    RET                                 ; 00440be7

