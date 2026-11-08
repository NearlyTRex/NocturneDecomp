; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dd40(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d304f
;   TerminatedCString s_weaponClassName_005d3059
;   TerminatedCString s_ammoCount_005d3069
;   TerminatedCString s_ammoType_005d3073
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dd40
        ;   Label: FUN_0040dd40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040dd41
    PUSH EBX                            ; 0040dd45
    CALL FUN_0040c040                   ; 0040dd46
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0040dd4b
    PUSH 0x5d304f                       ; 0040dd4e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040dd53
    PUSH EAX                            ; 0040dd59
    CALL FUN_0040b770                   ; 0040dd5a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0040dd5f
    PUSH 0x5d3059                       ; 0040dd62 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 0040dd67
    PUSH EAX                            ; 0040dd6d
    CALL FUN_0040b440                   ; 0040dd6e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0040dd73
    PUSH 0x5d3069                       ; 0040dd76 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0040dd7b
    PUSH EAX                            ; 0040dd81
    CALL FUN_0040b670                   ; 0040dd82
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040dd87
    PUSH 0x5d3073                       ; 0040dd8a | = "ammoType"
    ADD EBX,0x318                       ; 0040dd8f
    PUSH EBX                            ; 0040dd95
    CALL FUN_0040b670                   ; 0040dd96
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040dd9b
    POP EBX                             ; 0040dd9e
    RET                                 ; 0040dd9f

