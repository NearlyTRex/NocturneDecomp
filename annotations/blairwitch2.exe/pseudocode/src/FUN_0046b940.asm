; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b940(int param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_0044a020 at 0044a192
;   FUN_0044a2d0 at 0044a343
;   FUN_0044a3e0 at 0044a499
;   FUN_0044a4d0 at 0044a512
;   FUN_004699a0 at 004699f6
;   FUN_004c5640 at 004c56bd
;   FUN_00538470 at 00538522
;   FUN_00538d10 at 00538dbf
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b940
        ;   Label: FUN_0046b940
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b944
    MOV [0x0070ca74],EAX                ; 0046b948 | DAT_0070ca74
    MOV dword ptr [EDX + 0x4],EAX       ; 0046b94d
    RET                                 ; 0046b950

