; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e860(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d328e+1
;   TerminatedCString s_dropCondition_005d3299
;   TerminatedCString s_dropHeight_005d32a7
;   TerminatedCString s_triggered_005d32b2
;   undefined4 DAT_005d32bc
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e860
        ;   Label: FUN_0040e860
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e861
    PUSH EBX                            ; 0040e865
    CALL FUN_0040c040                   ; 0040e866
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0040e86b
    PUSH 0x5d328f                       ; 0040e86e | s_modelName_005d328e+1
    LEA EAX,[EBX + 0x158]               ; 0040e873
    PUSH EAX                            ; 0040e879
    CALL FUN_0040b770                   ; 0040e87a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0040e87f
    PUSH 0x5d3299                       ; 0040e882 | = "dropCondition"
    LEA EAX,[EBX + 0x2d4]               ; 0040e887
    PUSH EAX                            ; 0040e88d
    CALL FUN_0040b440                   ; 0040e88e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0040e893
    PUSH 0x5d32a7                       ; 0040e896 | = "dropHeight"
    LEA EAX,[EBX + 0x338]               ; 0040e89b
    PUSH EAX                            ; 0040e8a1
    CALL FUN_0040b5f0                   ; 0040e8a2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040e8a7
    PUSH 0x5d32b2                       ; 0040e8aa | = "triggered"
    LEA EAX,[EBX + 0x33c]               ; 0040e8af
    PUSH EAX                            ; 0040e8b5
    CALL FUN_0040b670                   ; 0040e8b6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040e8bb
    PUSH 0x5d32bc                       ; 0040e8be | DAT_005d32bc
    ADD EBX,0x340                       ; 0040e8c3
    PUSH EBX                            ; 0040e8c9
    CALL FUN_0040b5f0                   ; 0040e8ca
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040e8cf
    POP EBX                             ; 0040e8d2
    RET                                 ; 0040e8d3

