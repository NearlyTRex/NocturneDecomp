; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ed80(undefined4 *param_1)
;
;
; XREF[14]:
;   FUN_00408d10 at 00408d1b
;   FUN_00408da0 at 00408dba
;   FUN_004642f0 at 004646a7
;   FUN_004a5b10 at 004a5cd1
;   FUN_0050df70 at 0050df85
;   FUN_005114f0 at 00511c32
;   FUN_005127f0 at 00512816
;   FUN_00524170 at 0052429f
;   FUN_0053bc80 at 0053be61
;   FUN_0053d270 at 0053d40b
;   ... and 4 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ed80
        ;   Label: FUN_0053ed80
    MOV dword ptr [EAX + 0x20],0x0      ; 0053ed84
    MOV dword ptr [EAX + 0x24],0x0      ; 0053ed8b
    MOV dword ptr [EAX],0x0             ; 0053ed92
    RET                                 ; 0053ed98

