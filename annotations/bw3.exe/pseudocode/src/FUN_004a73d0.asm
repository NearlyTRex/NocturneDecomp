; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a73d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005c0cb7+1
;   TerminatedCString s_onFire_005c0cc2
;   TerminatedCString s_timeToExplode_005c0cc9
;   TerminatedCString s_onFireCondition_005c0cd7
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a73d0
        ;   Label: FUN_004a73d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a73d1
    PUSH EBX                            ; 004a73d5
    CALL FUN_0040c280                   ; 004a73d6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004a73db
    PUSH 0x5c0cb8                       ; 004a73de | s_modelName_005c0cb7+1
    LEA EAX,[EBX + 0x158]               ; 004a73e3
    PUSH EAX                            ; 004a73e9
    CALL FUN_0040b9b0                   ; 004a73ea
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 004a73ef
    PUSH 0x5c0cc2                       ; 004a73f2 | = "onFire"
    LEA EAX,[EBX + 0x2d4]               ; 004a73f7
    PUSH EAX                            ; 004a73fd
    CALL FUN_0040b8b0                   ; 004a73fe
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004a7403
    PUSH 0x5c0cc9                       ; 004a7406 | = "timeToExplode"
    LEA EAX,[EBX + 0x2d8]               ; 004a740b
    PUSH EAX                            ; 004a7411
    CALL FUN_0040b830                   ; 004a7412
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004a7417
    PUSH 0x5c0cd7                       ; 004a741a | = "onFireCondition"
    ADD EBX,0x2dc                       ; 004a741f
    PUSH EBX                            ; 004a7425
    CALL FUN_0040b680                   ; 004a7426
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 004a742b
    POP EBX                             ; 004a742e
    RET                                 ; 004a742f

