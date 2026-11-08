; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510dd0(int param_1)
;
;
; XREF[10]:
;   FUN_0049ec30 at 0049ec35
;   FUN_0049ec60 at 0049ec65
;   FUN_0049ec90 at 0049ec95
;   FUN_0049edc0 at 0049edc5
;   FUN_0049ee20 at 0049ee25
;   FUN_0049ee50 at 0049ee55
;   FUN_0049ee80 at 0049ee85
;   FUN_0049eeb0 at 0049eeb5
;   FUN_0049eee0 at 0049eee5
;   FUN_004ca070 at 004ca075
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510dd0
        ;   Label: FUN_00510dd0
    MOV dword ptr [EAX + 0x24],0x0      ; 00510dd4
    MOV dword ptr [EAX + 0x3c],0x5fa8ec ; 00510ddb
    RET                                 ; 00510de2

