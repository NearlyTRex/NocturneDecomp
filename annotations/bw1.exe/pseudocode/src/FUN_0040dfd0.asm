; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dfd0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0040e210 at 0040e2b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dfd0
        ;   Label: FUN_0040dfd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040dfd4
    MOV dword ptr [EDX + 0x314],EAX     ; 0040dfd8
    RET                                 ; 0040dfde

