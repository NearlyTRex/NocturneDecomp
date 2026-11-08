; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e8f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b6188
;   TerminatedCString s_weaponClassName_005b6192
;   TerminatedCString s_ammoCount_005b61a2
;   TerminatedCString s_ammoType_005b61ac
;   undefined4 DAT_005b61b5
;   TerminatedCString s_hasCollision_005b61ba
;   TerminatedCString s_openSound_005b61c7
;   undefined4 DAT_005f0bb4
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b930
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e8f0
        ;   Label: FUN_0040e8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e8f1
    PUSH EBX                            ; 0040e8f5
    CALL FUN_0040c280                   ; 0040e8f6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0040e8fb
    PUSH 0x5b6188                       ; 0040e8fe | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040e903
    PUSH EAX                            ; 0040e909
    CALL FUN_0040b9b0                   ; 0040e90a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 0040e90f
    PUSH 0x5b6192                       ; 0040e912 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 0040e917
    PUSH EAX                            ; 0040e91d
    CALL FUN_0040b680                   ; 0040e91e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040e923
    PUSH 0x5b61a2                       ; 0040e926 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0040e92b
    PUSH EAX                            ; 0040e931
    CALL FUN_0040b8b0                   ; 0040e932
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040e937
    PUSH 0x5b61ac                       ; 0040e93a | = "ammoType"
    LEA EAX,[EBX + 0x318]               ; 0040e93f
    PUSH EAX                            ; 0040e945
    CALL FUN_0040b8b0                   ; 0040e946
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040e94b
    PUSH 0x0                            ; 0040e94e
    LEA EAX,[EBX + 0x31c]               ; 0040e950
    PUSH EAX                            ; 0040e956
    CALL FUN_0040b830                   ; 0040e957
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    MOV EDX,dword ptr [0x005f0bb4]      ; 0040e95c | DAT_005f0bb4
    ADD ESP,0x8                         ; 0040e962
    CMP EDX,0x2                         ; 0040e965
    JGE 0x0040e992                      ; 0040e968
        ;   XREF to: 0040e992 (CONDITIONAL_JUMP)  ; LAB_0040e992
    CMP dword ptr [0x005f0bb4],0x3      ; 0040e96a | DAT_005f0bb4
        ;   Label: LAB_0040e96a
    JL 0x0040e987                       ; 0040e971
        ;   XREF to: 0040e987 (CONDITIONAL_JUMP)  ; LAB_0040e987
    PUSH 0x5b61ba                       ; 0040e973 | = "hasCollision"
    LEA EAX,[EBX + 0x324]               ; 0040e978
    PUSH EAX                            ; 0040e97e
    CALL FUN_0040b8b0                   ; 0040e97f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040e984
    CMP dword ptr [0x005f0bb4],0x4      ; 0040e987 | DAT_005f0bb4
        ;   Label: LAB_0040e987
    JGE 0x0040e9a8                      ; 0040e98e
        ;   XREF to: 0040e9a8 (CONDITIONAL_JUMP)  ; LAB_0040e9a8
    POP EBX                             ; 0040e990
    RET                                 ; 0040e991
    PUSH 0x5b61b5                       ; 0040e992 | DAT_005b61b5
        ;   Label: LAB_0040e992
    LEA EAX,[EBX + 0x320]               ; 0040e997
    PUSH EAX                            ; 0040e99d
    CALL FUN_0040b930                   ; 0040e99e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 0040e9a3
    JMP 0x0040e96a                      ; 0040e9a6
        ;   XREF to: 0040e96a (UNCONDITIONAL_JUMP)  ; LAB_0040e96a
    PUSH 0x5b61c7                       ; 0040e9a8 | = "openSound"
        ;   Label: LAB_0040e9a8
    ADD EBX,0x328                       ; 0040e9ad
    PUSH EBX                            ; 0040e9b3
    CALL FUN_0040b680                   ; 0040e9b4
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040e9b9
    POP EBX                             ; 0040e9bc
    RET                                 ; 0040e9bd

