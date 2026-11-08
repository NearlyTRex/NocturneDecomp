; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9010(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005c91fb+1
;   TerminatedCString s_motion_state_005c9206
;
; Called Functions:
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9010
        ;   Label: FUN_004f9010
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9011
    PUSH EBX                            ; 004f9015
    CALL FUN_0042b450                   ; 004f9016
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b450()
    ADD ESP,0x4                         ; 004f901b
    PUSH 0x5c91fc                       ; 004f901e | s_modelName_005c91fb+1
    ADD EBX,0x158                       ; 004f9023
    PUSH EBX                            ; 004f9029
    CALL FUN_0040ba30                   ; 004f902a
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 004f902f
    PUSH 0x5c9206                       ; 004f9032 | = "motion state"
    PUSH EBX                            ; 004f9037
    CALL FUN_0040bab0                   ; 004f9038
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 004f903d
    POP EBX                             ; 004f9040
    RET                                 ; 004f9041

