; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad8b0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_count_005c1c10
;   TerminatedCString s_followActor_005c1c16
;   TerminatedCString s_gatherCount_005c1c22
;   TerminatedCString s_gatherTime_005c1c2e
;   TerminatedCString s_boxSize_005c1c39
;   undefined4 DAT_005fe8c4
;
; Called Functions:
;   FUN_0040b400
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b930
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad8b0
        ;   Label: FUN_004ad8b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ad8b1
    PUSH EBX                            ; 004ad8b5
    CALL FUN_0040c280                   ; 004ad8b6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004ad8bb
    PUSH 0x5c1c10                       ; 004ad8be | = "count"
    LEA EAX,[EBX + 0x164]               ; 004ad8c3
    PUSH EAX                            ; 004ad8c9
    CALL FUN_0040b8b0                   ; 004ad8ca
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    MOV EDX,dword ptr [0x005fe8c4]      ; 004ad8cf | DAT_005fe8c4
    ADD ESP,0x8                         ; 004ad8d5
    CMP EDX,0x2                         ; 004ad8d8
    JGE 0x004ad8e8                      ; 004ad8db
        ;   XREF to: 004ad8e8 (CONDITIONAL_JUMP)  ; LAB_004ad8e8
    CMP dword ptr [0x005fe8c4],0x3      ; 004ad8dd | DAT_005fe8c4
    JGE 0x004ad92f                      ; 004ad8e4
        ;   XREF to: 004ad92f (CONDITIONAL_JUMP)  ; LAB_004ad92f
    POP EBX                             ; 004ad8e6
    RET                                 ; 004ad8e7
    PUSH 0x5c1c16                       ; 004ad8e8 | = "followActor"
        ;   Label: LAB_004ad8e8
    LEA EAX,[EBX + 0x2a08]              ; 004ad8ed
    PUSH EAX                            ; 004ad8f3
    CALL FUN_0040b930                   ; 004ad8f4
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 004ad8f9
    PUSH 0x5c1c22                       ; 004ad8fc | = "gatherCount"
    LEA EAX,[EBX + 0x2a0c]              ; 004ad901
    PUSH EAX                            ; 004ad907
    CALL FUN_0040b8b0                   ; 004ad908
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004ad90d
    PUSH 0x5c1c2e                       ; 004ad910 | = "gatherTime"
    LEA EAX,[EBX + 0x2a14]              ; 004ad915
    PUSH EAX                            ; 004ad91b
    CALL FUN_0040b830                   ; 004ad91c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004ad921
    CMP dword ptr [0x005fe8c4],0x3      ; 004ad924 | DAT_005fe8c4
    JGE 0x004ad92f                      ; 004ad92b
        ;   XREF to: 004ad92f (CONDITIONAL_JUMP)  ; LAB_004ad92f
    POP EBX                             ; 004ad92d
    RET                                 ; 004ad92e
    PUSH 0x5c1c39                       ; 004ad92f | = "boxSize"
        ;   Label: LAB_004ad92f
    ADD EBX,0x158                       ; 004ad934
    PUSH EBX                            ; 004ad93a
    CALL FUN_0040b400                   ; 004ad93b
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 004ad940
    POP EBX                             ; 004ad943
    RET                                 ; 004ad944

