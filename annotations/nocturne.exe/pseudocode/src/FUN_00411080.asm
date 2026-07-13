; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411080(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_summonEvent_00578697+1
;   string s_goAwayEvent_005786a4
;   string s_summoned_005786b0
;   undefined4 DAT_005acf3c
;
; Called Functions:
;   FUN_0040c6d0
;   FUN_0040c900
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411080
        ;   Label: FUN_00411080
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411081
    PUSH EBX                            ; 00411085
    CALL FUN_004b49a0                   ; 00411086
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    MOV EDX,dword ptr [0x005acf3c]      ; 0041108b | DAT_005acf3c
    ADD ESP,0x4                         ; 00411091
    CMP EDX,0x2                         ; 00411094
    JGE 0x0041109b                      ; 00411097
        ;   XREF to: 0041109b (CONDITIONAL_JUMP)  ; LAB_0041109b
    POP EBX                             ; 00411099
    RET                                 ; 0041109a
    PUSH 0x578698                       ; 0041109b | s_summonEvent_00578697+1
        ;   Label: LAB_0041109b
    LEA EAX,[EBX + 0x1fa3c]             ; 004110a0
    PUSH EAX                            ; 004110a6
    CALL FUN_0040c6d0                   ; 004110a7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004110ac
    PUSH 0x5786a4                       ; 004110af | = "goAwayEvent"
    LEA EAX,[EBX + 0x1faa0]             ; 004110b4
    PUSH EAX                            ; 004110ba
    CALL FUN_0040c6d0                   ; 004110bb
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004110c0
    PUSH 0x5786b0                       ; 004110c3 | = "summoned"
    ADD EBX,0x1fb34                     ; 004110c8
    PUSH EBX                            ; 004110ce
    CALL FUN_0040c900                   ; 004110cf
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004110d4
    POP EBX                             ; 004110d7
    RET                                 ; 004110d8

