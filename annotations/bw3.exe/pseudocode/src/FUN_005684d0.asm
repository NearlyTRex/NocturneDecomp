; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005684d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5c80
;   undefined4 DAT_005d5c85
;   TerminatedCString s_width_005d5c89
;   TerminatedCString s_count_005d5c8f
;   TerminatedCString s_groundType_005d5c95
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005684d0
        ;   Label: FUN_005684d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005684d1
    PUSH EBX                            ; 005684d5
    CALL FUN_0040c280                   ; 005684d6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 005684db
    PUSH 0x5d5c80                       ; 005684de | DAT_005d5c80
    LEA EAX,[EBX + 0x158]               ; 005684e3
    PUSH EAX                            ; 005684e9
    CALL FUN_0040b830                   ; 005684ea
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 005684ef
    PUSH 0x5d5c85                       ; 005684f2 | DAT_005d5c85
    LEA EAX,[EBX + 0x15c]               ; 005684f7
    PUSH EAX                            ; 005684fd
    CALL FUN_0040b830                   ; 005684fe
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00568503
    PUSH 0x5d5c89                       ; 00568506 | = "width"
    LEA EAX,[EBX + 0x160]               ; 0056850b
    PUSH EAX                            ; 00568511
    CALL FUN_0040b830                   ; 00568512
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00568517
    PUSH 0x5d5c8f                       ; 0056851a | = "count"
    LEA EAX,[EBX + 0x16c]               ; 0056851f
    PUSH EAX                            ; 00568525
    CALL FUN_0040b8b0                   ; 00568526
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0056852b
    PUSH 0x5d5c95                       ; 0056852e | = "groundType"
    ADD EBX,0xa30                       ; 00568533
    PUSH EBX                            ; 00568539
    CALL FUN_0040b8b0                   ; 0056853a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0056853f
    POP EBX                             ; 00568542
    RET                                 ; 00568543

