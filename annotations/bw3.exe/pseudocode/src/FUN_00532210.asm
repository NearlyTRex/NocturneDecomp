; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00532210(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d00be
;   TerminatedCString s_guardDistance_005d00c8
;   TerminatedCString s_motion_state_005d00d6
;   undefined4 DAT_00603ad0
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532210
        ;   Label: FUN_00532210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00532211
    PUSH EBX                            ; 00532215
    CALL FUN_00489120                   ; 00532216
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0053221b
    PUSH 0x5d00be                       ; 0053221e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00532223
    PUSH EAX                            ; 00532229
    CALL FUN_0040ba30                   ; 0053222a
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    MOV EDX,dword ptr [0x00603ad0]      ; 0053222f | DAT_00603ad0
    ADD ESP,0x8                         ; 00532235
    CMP EDX,0x2                         ; 00532238
    JL 0x00532253                       ; 0053223b
        ;   XREF to: 00532253 (CONDITIONAL_JUMP)  ; LAB_00532253
    PUSH 0x5d00d6                       ; 0053223d | = "motion state"
        ;   Label: LAB_0053223d
    ADD EBX,0x158                       ; 00532242
    PUSH EBX                            ; 00532248
    CALL FUN_0040bab0                   ; 00532249
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 0053224e
    POP EBX                             ; 00532251
    RET                                 ; 00532252
    PUSH 0x5d00c8                       ; 00532253 | = "guardDistance"
        ;   Label: LAB_00532253
    LEA EAX,[EBX + 0xcddc]              ; 00532258
    PUSH EAX                            ; 0053225e
    CALL FUN_0040b830                   ; 0053225f
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00532264
    JMP 0x0053223d                      ; 00532267
        ;   XREF to: 0053223d (UNCONDITIONAL_JUMP)  ; LAB_0053223d

