; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a01a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[9]:
;   FUN_00522350 at 005279fc
;   FUN_0059ed50 at 0059edaf
;   FUN_005a1ed0 at 005a1f25
;   FUN_005a2240 at 005a23c2
;   FUN_005a4080 at 005a40d5
;   FUN_005a40f0 at 005a412d
;   FUN_005a4330 at 005a4446
;   FUN_005a9770 at 005a97c5
;   FUN_005a9980 at 005a99d5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a01a0
        ;   Label: FUN_005a01a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a01a4
    MOV dword ptr [EAX + 0x113bc],EDX   ; 005a01a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a01ae
    MOV dword ptr [EAX + 0x113c0],EDX   ; 005a01b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a01b8
    MOV dword ptr [EAX + 0x113c8],EDX   ; 005a01bc
    RET                                 ; 005a01c2

