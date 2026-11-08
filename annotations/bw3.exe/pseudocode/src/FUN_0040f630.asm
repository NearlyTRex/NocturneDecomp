; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f630(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b62f2
;   TerminatedCString s_rechargeTime_005b62fc
;   TerminatedCString s_dischargeTime_005b6309
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f630
        ;   Label: FUN_0040f630
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f631
    PUSH EBX                            ; 0040f635
    CALL FUN_0040c280                   ; 0040f636
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0040f63b
    PUSH 0x5b62f2                       ; 0040f63e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040f643
    PUSH EAX                            ; 0040f649
    CALL FUN_0040b9b0                   ; 0040f64a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 0040f64f
    PUSH 0x5b62fc                       ; 0040f652 | = "rechargeTime"
    LEA EAX,[EBX + 0x2d8]               ; 0040f657
    PUSH EAX                            ; 0040f65d
    CALL FUN_0040b830                   ; 0040f65e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0040f663
    PUSH 0x5b6309                       ; 0040f666 | = "dischargeTime"
    ADD EBX,0x2dc                       ; 0040f66b
    PUSH EBX                            ; 0040f671
    CALL FUN_0040b830                   ; 0040f672
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0040f677
    POP EBX                             ; 0040f67a
    RET                                 ; 0040f67b

