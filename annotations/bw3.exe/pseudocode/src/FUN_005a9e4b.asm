; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9e4b(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005a3e13 at 005a3e18
;
; Referenced Globals:
;   undefined4 DAT_00607b10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9e4b
        ;   Label: FUN_005a9e4b
    MOV EAX,[0x00607b10]                ; 005a9e4f | DAT_00607b10
    MOV dword ptr [EDX],EAX             ; 005a9e54
    MOV dword ptr [0x00607b10],EDX      ; 005a9e56 | DAT_00607b10
    RET                                 ; 005a9e5c

