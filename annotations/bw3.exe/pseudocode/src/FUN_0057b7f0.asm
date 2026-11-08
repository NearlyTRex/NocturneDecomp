; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b7f0(int param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_00425300 at 0042534b
;   FUN_0048b640 at 0048b683
;   FUN_004a5770 at 004a57a7
;   FUN_004e3e60 at 004e3ea1
;   FUN_004e74b0 at 004e74c4
;   FUN_0056bf80 at 0056bf9e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057b7f0
        ;   Label: FUN_0057b7f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b7f4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 0057b7f8
    RET                                 ; 0057b7fe

