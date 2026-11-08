; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e000(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b60c7
;   TerminatedCString s_weaponClassName_005b60d1
;   TerminatedCString s_ammoCount_005b60e1
;   TerminatedCString s_ammoType_005b60eb
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b8b0
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e000
        ;   Label: FUN_0040e000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e001
    PUSH EBX                            ; 0040e005
    CALL FUN_0040c280                   ; 0040e006
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0040e00b
    PUSH 0x5b60c7                       ; 0040e00e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040e013
    PUSH EAX                            ; 0040e019
    CALL FUN_0040b9b0                   ; 0040e01a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 0040e01f
    PUSH 0x5b60d1                       ; 0040e022 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 0040e027
    PUSH EAX                            ; 0040e02d
    CALL FUN_0040b680                   ; 0040e02e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0040e033
    PUSH 0x5b60e1                       ; 0040e036 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0040e03b
    PUSH EAX                            ; 0040e041
    CALL FUN_0040b8b0                   ; 0040e042
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040e047
    PUSH 0x5b60eb                       ; 0040e04a | = "ammoType"
    ADD EBX,0x318                       ; 0040e04f
    PUSH EBX                            ; 0040e055
    CALL FUN_0040b8b0                   ; 0040e056
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0040e05b
    POP EBX                             ; 0040e05e
    RET                                 ; 0040e05f

