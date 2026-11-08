; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00497e80(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_004a1760 at 004a181f
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21620
;
; Called Functions:
;   FUN_0041b470
;
; *****************************************************************************

section .text

    MOV EAX,[0x005fe9dc]                ; 00497e80 | DAT_005fe9dc
        ;   Label: FUN_00497e80
    SUB ESP,0x4                         ; 00497e85
    FLD float ptr [EAX + 0x314]         ; 00497e88 | DAT_01d21620
    MOV EAX,dword ptr [ESP + 0x8]       ; 00497e8e
    ADD EAX,0x4                         ; 00497e92
    FSTP float ptr [ESP]                ; 00497e95
    PUSH EAX                            ; 00497e98
    CALL FUN_0041b470                   ; 00497e99
        ;   XREF to: 0041b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b470()
    ADD ESP,0x8                         ; 00497e9e
    RET                                 ; 00497ea1

