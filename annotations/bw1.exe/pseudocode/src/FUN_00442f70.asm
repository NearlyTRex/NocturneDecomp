; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442f70(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_00443490 at 004434a1
;   FUN_004436b0 at 004436c1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442f70
        ;   Label: FUN_00442f70
    MOV dword ptr [EAX + 0xc],0x0       ; 00442f74
    MOV dword ptr [EAX + 0x10],0x0      ; 00442f7b
    MOV EDX,dword ptr [EAX + 0xc]       ; 00442f82
    MOV dword ptr [EAX],EDX             ; 00442f85
    RET                                 ; 00442f87

