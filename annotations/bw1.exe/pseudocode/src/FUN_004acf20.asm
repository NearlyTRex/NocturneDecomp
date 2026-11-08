; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004acf20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_004b4dd0 at 004b4e8f
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_0041e130
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 004acf20 | DAT_0061d95c
        ;   Label: FUN_004acf20
    SUB ESP,0x4                         ; 004acf25
    FLD float ptr [EAX + 0x294]         ; 004acf28 | DAT_01ccf624
    MOV EAX,dword ptr [ESP + 0x8]       ; 004acf2e
    ADD EAX,0x4                         ; 004acf32
    FSTP float ptr [ESP]                ; 004acf35
    PUSH EAX                            ; 004acf38
    CALL FUN_0041e130                   ; 004acf39
        ;   XREF to: 0041e130 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e130()
    ADD ESP,0x8                         ; 004acf3e
    RET                                 ; 004acf41

