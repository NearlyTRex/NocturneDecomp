; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[13]:
;   FUN_004fe9c0 at 004feb45
;   FUN_00505060 at 00505104
;   FUN_0050a2b0 at 0050a3d2
;   FUN_0050aa90 at 0050ab6a
;   FUN_0050b470 at 0050b4db
;   FUN_0050ba70 at 0050bae0
;   FUN_0050c990 at 0050ca03
;   FUN_0050cc90 at 0050cd9d
;   FUN_00521e40 at 00521f6f
;   FUN_0054cf80 at 0054cfe8
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00555770
        ;   Label: FUN_00555770
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555774
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 00555778
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055577e
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 00555782
    MOV EDX,dword ptr [ESP + 0x10]      ; 00555788
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 0055578c
    RET                                 ; 00555792

