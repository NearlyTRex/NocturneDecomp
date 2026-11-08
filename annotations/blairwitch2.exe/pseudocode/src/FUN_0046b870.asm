; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b870(int param_1,undefined4 param_2)
;
;
; XREF[7]:
;   FUN_0041aa20 at 0041ab01
;   FUN_0041b700 at 0041b7a4
;   FUN_0044e7d0 at 0044e8f2
;   FUN_0046b880 at 0046b8b0
;   FUN_004dd9b0 at 004de961
;   FUN_004e63c0 at 004e6788
;   FUN_00513950 at 00513a4e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b870
        ;   Label: FUN_0046b870
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b874
    MOV dword ptr [EDX + 0xc],EAX       ; 0046b878
    RET                                 ; 0046b87b

