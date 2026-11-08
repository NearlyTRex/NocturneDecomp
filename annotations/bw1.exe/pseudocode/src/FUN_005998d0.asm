; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005998d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005f7fba+2
;   TerminatedCString s_motion_state_005f7fc6
;   TerminatedCString s_partStatus_005f7fd3
;
; Called Functions:
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005998d0
        ;   Label: FUN_005998d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005998d1
    PUSH EBX                            ; 005998d5
    CALL FUN_004a0520                   ; 005998d6
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 005998db
    PUSH 0x5f7fbc                       ; 005998de | s_s_0_modelName_005f7fba+2
    ADD EBX,0x158                       ; 005998e3
    PUSH EBX                            ; 005998e9
    CALL FUN_0040b7f0                   ; 005998ea
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 005998ef
    PUSH 0x5f7fc6                       ; 005998f2 | = "motion state"
    PUSH EBX                            ; 005998f7
    CALL FUN_0040b870                   ; 005998f8
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 005998fd
    PUSH 0x5f7fd3                       ; 00599900 | = "partStatus"
    PUSH EBX                            ; 00599905
    CALL FUN_0040b960                   ; 00599906
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0059990b
    POP EBX                             ; 0059990e
    RET                                 ; 0059990f

