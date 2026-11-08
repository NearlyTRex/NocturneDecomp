; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004088b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[37]:
;   FUN_004085c0 at 00408634
;   FUN_00408850 at 0040886a
;   FUN_00409cc0 at 00409cf9
;   FUN_00418940 at 004189c1
;   FUN_00419740 at 0041988f
;   FUN_0041a200 at 0041a4e5
;   FUN_00422000 at 004222d8
;   FUN_00422e00 at 00422e3a
;   FUN_00423b70 at 0042466a
;   FUN_0042d750 at 0042ddf2
;   ... and 27 more
;
; Called Functions:
;   FUN_0040cd60
;   FUN_0045f3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004088b0
        ;   Label: FUN_004088b0
    SUB ESP,0x4                         ; 004088b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004088b4
    PUSH dword ptr [EBX + 0x30]         ; 004088b8
    CALL FUN_0040cd60                   ; 004088bb
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x4],EAX       ; 004088c0
    FLD float ptr [ESP + 0x4]           ; 004088c4
    ADD ESP,0x4                         ; 004088c8
    PUSH dword ptr [EBX + 0x38]         ; 004088cb
    FSTP float ptr [EBX + 0x30]         ; 004088ce
    CALL FUN_0040cd60                   ; 004088d1
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x4],EAX       ; 004088d6
    FLD float ptr [ESP + 0x4]           ; 004088da
    ADD ESP,0x4                         ; 004088de
    PUSH dword ptr [EBX + 0x34]         ; 004088e1
    FSTP float ptr [EBX + 0x38]         ; 004088e4
    CALL FUN_0040cd60                   ; 004088e7
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x4],EAX       ; 004088ec
    FLD float ptr [ESP + 0x4]           ; 004088f0
    ADD ESP,0x4                         ; 004088f4
    LEA EAX,[EBX + 0x30]                ; 004088f7
    PUSH EAX                            ; 004088fa
    ADD EBX,0x3c                        ; 004088fb
    PUSH EBX                            ; 004088fe
    FSTP float ptr [EBX + -0x8]         ; 004088ff
    CALL FUN_0045f3e0                   ; 00408902
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00408907
    ADD ESP,0x4                         ; 0040890a
    POP EBX                             ; 0040890d
    RET                                 ; 0040890e

