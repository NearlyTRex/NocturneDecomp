; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b9440(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005df7a2+1
;   TerminatedCString s_onFire_005df7ad
;   TerminatedCString s_timeToExplode_005df7b4
;   TerminatedCString s_onFireCondition_005df7c2
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

    PUSH EBX                            ; 004b9440
        ;   Label: FUN_004b9440
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9441
    PUSH EBX                            ; 004b9445
    CALL FUN_0040c040                   ; 004b9446
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004b944b
    PUSH 0x5df7a3                       ; 004b944e | s_modelName_005df7a2+1
    LEA EAX,[EBX + 0x158]               ; 004b9453
    PUSH EAX                            ; 004b9459
    CALL FUN_0040b770                   ; 004b945a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 004b945f
    PUSH 0x5df7ad                       ; 004b9462 | = "onFire"
    LEA EAX,[EBX + 0x2d4]               ; 004b9467
    PUSH EAX                            ; 004b946d
    CALL FUN_0040b670                   ; 004b946e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004b9473
    PUSH 0x5df7b4                       ; 004b9476 | = "timeToExplode"
    LEA EAX,[EBX + 0x2d8]               ; 004b947b
    PUSH EAX                            ; 004b9481
    CALL FUN_0040b5f0                   ; 004b9482
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004b9487
    PUSH 0x5df7c2                       ; 004b948a | = "onFireCondition"
    ADD EBX,0x2dc                       ; 004b948f
    PUSH EBX                            ; 004b9495
    CALL FUN_0040b440                   ; 004b9496
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004b949b
    POP EBX                             ; 004b949e
    RET                                 ; 004b949f

