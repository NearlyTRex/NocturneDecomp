; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00559310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[5]:
;   FUN_00473160 at 004732ac
;   FUN_004b6420 at 004b6466
;   FUN_00500310 at 005004e6
;   FUN_00501a70 at 00501c46
;   FUN_0058f660 at 0058f7ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559310
        ;   Label: FUN_00559310
    MOV EDX,dword ptr [ESP + 0x8]       ; 00559314
    MOV dword ptr [EAX + 0x15f698],0x3  ; 00559318
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 00559322
    MOV EDX,dword ptr [ESP + 0xc]       ; 00559328
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 0055932c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00559332
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 00559336
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055933c
    MOV dword ptr [EAX + 0x15f6a8],EDX  ; 00559340
    RET                                 ; 00559346

