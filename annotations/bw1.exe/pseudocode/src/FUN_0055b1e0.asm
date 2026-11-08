; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b1e0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004a1d00 at 004a64a3
;   FUN_00539810 at 0053993b
;   FUN_00544460 at 0054a42c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055b1e0
        ;   Label: FUN_0055b1e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055b1e4
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 0055b1e8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055b1ee
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 0055b1f2
    RET                                 ; 0055b1f8

