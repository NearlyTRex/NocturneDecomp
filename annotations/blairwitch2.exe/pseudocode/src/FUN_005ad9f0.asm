; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad9f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_sleepTime_005f0efa+1
;   TerminatedCString s_effectTime_005f0f05
;   TerminatedCString s_effectDamage_005f0f10
;   TerminatedCString s_triggerRadius_005f0f1d
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0041c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad9f0
        ;   Label: FUN_005ad9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad9f1
    PUSH EBX                            ; 005ad9f5
    CALL FUN_0041c7f0                   ; 005ad9f6
        ;   XREF to: 0041c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041c7f0()
    ADD ESP,0x4                         ; 005ad9fb
    PUSH 0x5f0efb                       ; 005ad9fe | s_sleepTime_005f0efa+1
    LEA EAX,[EBX + 0x7dc]               ; 005ada03
    PUSH EAX                            ; 005ada09
    CALL FUN_0040b8e0                   ; 005ada0a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005ada0f
    PUSH 0x5f0f05                       ; 005ada12 | = "effectTime"
    LEA EAX,[EBX + 0x7e0]               ; 005ada17
    PUSH EAX                            ; 005ada1d
    CALL FUN_0040b8e0                   ; 005ada1e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005ada23
    PUSH 0x5f0f10                       ; 005ada26 | = "effectDamage"
    LEA EAX,[EBX + 0x7e4]               ; 005ada2b
    PUSH EAX                            ; 005ada31
    CALL FUN_0040b8e0                   ; 005ada32
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005ada37
    PUSH 0x5f0f1d                       ; 005ada3a | = "triggerRadius"
    ADD EBX,0x7d4                       ; 005ada3f
    PUSH EBX                            ; 005ada45
    CALL FUN_0040b8e0                   ; 005ada46
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005ada4b
    POP EBX                             ; 005ada4e
    RET                                 ; 005ada4f

