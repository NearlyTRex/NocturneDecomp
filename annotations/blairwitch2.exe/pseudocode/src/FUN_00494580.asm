; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494580(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0049c430 at 0049c506
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_005b22f0
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 00494580 | DAT_00616494
        ;   Label: FUN_00494580
    SUB ESP,0x4                         ; 00494585
    FLD float ptr [EAX + 0x284]         ; 00494588 | DAT_01cb6b84
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049458e
    ADD EAX,0x4                         ; 00494592
    FSTP float ptr [ESP]                ; 00494595
    PUSH EAX                            ; 00494598
    CALL FUN_005b22f0                   ; 00494599
        ;   XREF to: 005b22f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b22f0()
    ADD ESP,0x8                         ; 0049459e
    RET                                 ; 004945a1

