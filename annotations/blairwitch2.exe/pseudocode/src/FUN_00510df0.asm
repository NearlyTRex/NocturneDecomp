; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510df0(int param_1)
;
;
; XREF[10]:
;   FUN_0049ec50 at 0049ec57
;   FUN_0049ec80 at 0049ec87
;   FUN_0049ecb0 at 0049ecb7
;   FUN_0049edf0 at 0049edf7
;   FUN_0049ee40 at 0049ee47
;   FUN_0049ee70 at 0049ee77
;   FUN_0049eea0 at 0049eea7
;   FUN_0049eed0 at 0049eed7
;   FUN_0049ef00 at 0049ef07
;   FUN_004ca090 at 004ca097
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510df0
        ;   Label: FUN_00510df0
    MOV dword ptr [EAX + 0x3c],0x5fa8ec ; 00510df4
    RET                                 ; 00510dfb

