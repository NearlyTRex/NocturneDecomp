; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b8d10(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_flameSize_005df6f6+1
;   TerminatedCString s_whichFlame_005df701
;   TerminatedCString s_globeScalar_005df70c
;   TerminatedCString s_onEvent_005df718
;   TerminatedCString s_onEvent_005df720
;   TerminatedCString s_flameState_005df728
;   TerminatedCString s_intensity_005df733
;   TerminatedCString s_randomness_005df73d
;   TerminatedCString s_burnHero_005df748
;   TerminatedCString s_burnEnemy_005df751
;   undefined4 DAT_0061d180
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8d10
        ;   Label: FUN_004b8d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b8d11
    PUSH EBX                            ; 004b8d15
    CALL FUN_0040c040                   ; 004b8d16
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004b8d1b
    PUSH 0x5df6f7                       ; 004b8d1e | s_flameSize_005df6f6+1
    LEA EAX,[EBX + 0x158]               ; 004b8d23
    PUSH EAX                            ; 004b8d29
    CALL FUN_0040b1c0                   ; 004b8d2a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    MOV EDX,dword ptr [0x0061d180]      ; 004b8d2f | DAT_0061d180
    ADD ESP,0x8                         ; 004b8d35
    CMP EDX,0x2                         ; 004b8d38
    JGE 0x004b8dd4                      ; 004b8d3b
        ;   XREF to: 004b8dd4 (CONDITIONAL_JUMP)  ; LAB_004b8dd4
    CMP dword ptr [0x0061d180],0x3      ; 004b8d41 | DAT_0061d180
        ;   Label: LAB_004b8d41
    JL 0x004b8d5e                       ; 004b8d48
        ;   XREF to: 004b8d5e (CONDITIONAL_JUMP)  ; LAB_004b8d5e
    PUSH 0x5df718                       ; 004b8d4a | = "onEvent"
    LEA EAX,[EBX + 0x1b8]               ; 004b8d4f
    PUSH EAX                            ; 004b8d55
    CALL FUN_0040b440                   ; 004b8d56
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004b8d5b
    CMP dword ptr [0x0061d180],0x4      ; 004b8d5e | DAT_0061d180
        ;   Label: LAB_004b8d5e
    JL 0x004b8d7b                       ; 004b8d65
        ;   XREF to: 004b8d7b (CONDITIONAL_JUMP)  ; LAB_004b8d7b
    PUSH 0x5df720                       ; 004b8d67 | = "onEvent"
    LEA EAX,[EBX + 0x21c]               ; 004b8d6c
    PUSH EAX                            ; 004b8d72
    CALL FUN_0040b440                   ; 004b8d73
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004b8d78
    CMP dword ptr [0x0061d180],0x5      ; 004b8d7b | DAT_0061d180
        ;   Label: LAB_004b8d7b
    JL 0x004b8d98                       ; 004b8d82
        ;   XREF to: 004b8d98 (CONDITIONAL_JUMP)  ; LAB_004b8d98
    PUSH 0x5df728                       ; 004b8d84 | = "flameState"
    LEA EAX,[EBX + 0x1b4]               ; 004b8d89
    PUSH EAX                            ; 004b8d8f
    CALL FUN_0040b670                   ; 004b8d90
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004b8d95
    CMP dword ptr [0x0061d180],0x6      ; 004b8d98 | DAT_0061d180
        ;   Label: LAB_004b8d98
    JL 0x004b8dc9                       ; 004b8d9f
        ;   XREF to: 004b8dc9 (CONDITIONAL_JUMP)  ; LAB_004b8dc9
    PUSH 0x5df733                       ; 004b8da1 | = "intensity"
    LEA EAX,[EBX + 0x280]               ; 004b8da6
    PUSH EAX                            ; 004b8dac
    CALL FUN_0040b5f0                   ; 004b8dad
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004b8db2
    PUSH 0x5df73d                       ; 004b8db5 | = "randomness"
    LEA EAX,[EBX + 0x284]               ; 004b8dba
    PUSH EAX                            ; 004b8dc0
    CALL FUN_0040b5f0                   ; 004b8dc1
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004b8dc6
    CMP dword ptr [0x0061d180],0x7      ; 004b8dc9 | DAT_0061d180
        ;   Label: LAB_004b8dc9
    JGE 0x004b8e01                      ; 004b8dd0
        ;   XREF to: 004b8e01 (CONDITIONAL_JUMP)  ; LAB_004b8e01
    POP EBX                             ; 004b8dd2
    RET                                 ; 004b8dd3
    PUSH 0x5df701                       ; 004b8dd4 | = "whichFlame"
        ;   Label: LAB_004b8dd4
    LEA EAX,[EBX + 0x1a8]               ; 004b8dd9
    PUSH EAX                            ; 004b8ddf
    CALL FUN_0040b670                   ; 004b8de0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004b8de5
    PUSH 0x5df70c                       ; 004b8de8 | = "globeScalar"
    LEA EAX,[EBX + 0x1ac]               ; 004b8ded
    PUSH EAX                            ; 004b8df3
    CALL FUN_0040b5f0                   ; 004b8df4
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004b8df9
    JMP 0x004b8d41                      ; 004b8dfc
        ;   XREF to: 004b8d41 (UNCONDITIONAL_JUMP)  ; LAB_004b8d41
    PUSH 0x5df748                       ; 004b8e01 | = "burnHero"
        ;   Label: LAB_004b8e01
    LEA EAX,[EBX + 0x288]               ; 004b8e06
    PUSH EAX                            ; 004b8e0c
    CALL FUN_0040b670                   ; 004b8e0d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004b8e12
    PUSH 0x5df751                       ; 004b8e15 | = "burnEnemy"
    ADD EBX,0x28c                       ; 004b8e1a
    PUSH EBX                            ; 004b8e20
    CALL FUN_0040b670                   ; 004b8e21
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004b8e26
    POP EBX                             ; 004b8e29
    RET                                 ; 004b8e2a

