; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005211b0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_humanToDemonCond_005ea2b6
;   TerminatedCString s_demonToHumanCond_005ea2c7
;   TerminatedCString s_inHumanForm_005ea2d8
;   TerminatedCString s_morphing_005ea2e4
;   TerminatedCString s_morphTimer_005ea2ed
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005211b0
        ;   Label: FUN_005211b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005211b1
    PUSH EBX                            ; 005211b5
    CALL FUN_004eab00                   ; 005211b6
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 005211bb
    PUSH 0x5ea2b6                       ; 005211be | = "humanToDemonCond"
    LEA EAX,[EBX + 0x2235c]             ; 005211c3
    PUSH EAX                            ; 005211c9
    CALL FUN_0040b440                   ; 005211ca
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005211cf
    PUSH 0x5ea2c7                       ; 005211d2 | = "demonToHumanCond"
    LEA EAX,[EBX + 0x223c0]             ; 005211d7
    PUSH EAX                            ; 005211dd
    CALL FUN_0040b440                   ; 005211de
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005211e3
    PUSH 0x5ea2d8                       ; 005211e6 | = "inHumanForm"
    LEA EAX,[EBX + 0x22350]             ; 005211eb
    PUSH EAX                            ; 005211f1
    CALL FUN_0040b670                   ; 005211f2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005211f7
    PUSH 0x5ea2e4                       ; 005211fa | = "morphing"
    LEA EAX,[EBX + 0x22354]             ; 005211ff
    PUSH EAX                            ; 00521205
    CALL FUN_0040b670                   ; 00521206
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0052120b
    PUSH 0x5ea2ed                       ; 0052120e | = "morphTimer"
    ADD EBX,0x22358                     ; 00521213
    PUSH EBX                            ; 00521219
    CALL FUN_0040b5f0                   ; 0052121a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0052121f
    POP EBX                             ; 00521222
    RET                                 ; 00521223

