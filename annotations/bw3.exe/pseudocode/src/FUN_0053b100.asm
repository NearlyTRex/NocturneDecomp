; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[10]:
;   FUN_004e7dc0 at 004e7ee2
;   FUN_004e85a0 at 004e867a
;   FUN_004e8f80 at 004e8feb
;   FUN_004e94f0 at 004e9560
;   FUN_004ea280 at 004ea2f1
;   FUN_004ea4d0 at 004ea5dd
;   FUN_004f9670 at 004f9789
;   FUN_005346b0 at 00534771
;   FUN_00536c90 at 00536ebb
;   FUN_00536f90 at 005371be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b100
        ;   Label: FUN_0053b100
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053b104
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 0053b108
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053b10e
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 0053b112
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053b118
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 0053b11c
    RET                                 ; 0053b122

