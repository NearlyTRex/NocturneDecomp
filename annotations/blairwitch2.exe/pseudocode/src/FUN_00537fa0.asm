; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537fa0(undefined4 *param_1)
;
;
; XREF[16]:
;   FUN_00408f00 at 00408f0b
;   FUN_00408f90 at 00408faa
;   FUN_0045b510 at 0045b63f
;   FUN_0045f5a0 at 0045f957
;   FUN_0049f2e0 at 0049f4a1
;   FUN_00514f40 at 00514f55
;   FUN_005184c0 at 00518c02
;   FUN_005197b0 at 005197d6
;   FUN_00534ea0 at 00535081
;   FUN_00536490 at 0053662b
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537fa0
        ;   Label: FUN_00537fa0
    MOV dword ptr [EAX + 0x20],0x0      ; 00537fa4
    MOV dword ptr [EAX + 0x24],0x0      ; 00537fab
    MOV dword ptr [EAX],0x0             ; 00537fb2
    RET                                 ; 00537fb8

