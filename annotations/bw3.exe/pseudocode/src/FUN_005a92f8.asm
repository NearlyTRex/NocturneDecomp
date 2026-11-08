; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a92f8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005ab400 at 005ab406
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a92f8 | PTR_FUN_006079a0
        ;   Label: FUN_005a92f8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a92fe
    MOV dword ptr [EAX + 0x8],EDX       ; 005a9302
    RET                                 ; 005a9305

