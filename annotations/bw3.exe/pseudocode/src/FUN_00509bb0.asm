; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509bb0(int param_1)
;
;
; XREF[1]:
;   FUN_0057fe10 at 0057fe32
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e2f74 = 00509bb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509bb0
        ;   Label: FUN_00509bb0
    MOV dword ptr [EAX + 0x6a44],0x5e2f74 ; 00509bb4 | PTR_FUN_005e2f74
    RET                                 ; 00509bbe

