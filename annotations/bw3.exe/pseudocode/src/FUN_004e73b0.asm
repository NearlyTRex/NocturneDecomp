; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e73b0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004e7310 at 004e7344
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e73b0
        ;   Label: FUN_004e73b0
    MOV dword ptr [EAX + 0x5b4],0x3f800000 ; 004e73b4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e73be
    FLD float ptr [EAX + 0x5b4]         ; 004e73c2
    MOV dword ptr [EAX + 0x5a8],EDX     ; 004e73c8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e73ce
    FSTP float ptr [EAX + 0x5b0]        ; 004e73d2
    MOV dword ptr [EAX + 0x5ac],EDX     ; 004e73d8
    RET                                 ; 004e73de

