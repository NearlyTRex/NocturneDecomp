; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509b90(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0057fd50 at 0057fd56
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e2f74 = 00509bb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509b90
        ;   Label: FUN_00509b90
    MOV dword ptr [EAX],0x0             ; 00509b94
    MOV dword ptr [EAX + 0x6a44],0x5e2f74 ; 00509b9a | PTR_FUN_005e2f74
    RET                                 ; 00509ba4

