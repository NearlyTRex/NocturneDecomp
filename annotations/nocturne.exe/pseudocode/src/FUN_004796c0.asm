; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004796c0(int param_1)
;
;
; Referenced Globals:
;   string s_speed_0057f2c2
;   string s_hitPoints_0057f2c8
;   string s_poolMe_0057f2d2
;   string s_speed_0057f2d9
;   string s_poolMe_0057f2df
;   string s_randomizeMe_0057f2e6
;   string s_scriptVictim_0057f2f2
;   string s_patrolNamePattern_0057f2ff
;   string s_guardDistance_0057f311
;   string s_victimHeight_0057f31f
;   string s_victim_0057f32c
;   undefined4 DAT_005b7604
;
; Called Functions:
;   FUN_0040c6d0
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040c980
;   FUN_0040d2d0
;   FUN_004244b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004796c0
        ;   Label: FUN_004796c0
    PUSH ESI                            ; 004796c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004796c2
    MOV EDX,dword ptr [0x005b7604]      ; 004796c6 | DAT_005b7604
    LEA ESI,[EBX + 0xbc8c]              ; 004796cc
    CMP EDX,0x4                         ; 004796d2
    JGE 0x00479730                      ; 004796d5
        ;   XREF to: 00479730 (CONDITIONAL_JUMP)  ; LAB_00479730
    PUSH EBX                            ; 004796d7
    CALL FUN_0040d2d0                   ; 004796d8
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    MOV ECX,dword ptr [0x005b7604]      ; 004796dd | DAT_005b7604
    ADD ESP,0x4                         ; 004796e3
    CMP ECX,0x2                         ; 004796e6
    JL 0x004796f9                       ; 004796e9
        ;   XREF to: 004796f9 (CONDITIONAL_JUMP)  ; LAB_004796f9
    PUSH 0x57f2c2                       ; 004796eb | = "speed"
    PUSH ESI                            ; 004796f0
    CALL FUN_0040c880                   ; 004796f1
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004796f6
    CMP dword ptr [0x005b7604],0x3      ; 004796f9 | DAT_005b7604
        ;   Label: LAB_004796f9
    JGE 0x00479705                      ; 00479700
        ;   XREF to: 00479705 (CONDITIONAL_JUMP)  ; LAB_00479705
    POP ESI                             ; 00479702
        ;   Label: LAB_00479702
    POP EBX                             ; 00479703
    RET                                 ; 00479704
    PUSH 0x57f2c8                       ; 00479705 | = "hitPoints"
        ;   Label: LAB_00479705
    LEA ESI,[EBX + 0x2434]              ; 0047970a
    PUSH ESI                            ; 00479710
    CALL FUN_0040c880                   ; 00479711
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00479716
    PUSH 0x57f2d2                       ; 00479719 | = "poolMe"
    ADD EBX,0xbc90                      ; 0047971e
    PUSH EBX                            ; 00479724
    CALL FUN_0040c900                   ; 00479725
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0047972a
    POP ESI                             ; 0047972d
    POP EBX                             ; 0047972e
    RET                                 ; 0047972f
    PUSH EBX                            ; 00479730
        ;   Label: LAB_00479730
    CALL FUN_004244b0                   ; 00479731
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x4                         ; 00479736
    PUSH 0x57f2d9                       ; 00479739 | = "speed"
    PUSH ESI                            ; 0047973e
    CALL FUN_0040c880                   ; 0047973f
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00479744
    PUSH 0x57f2df                       ; 00479747 | = "poolMe"
    LEA ESI,[EBX + 0xbc90]              ; 0047974c
    PUSH ESI                            ; 00479752
    CALL FUN_0040c900                   ; 00479753
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    MOV ECX,dword ptr [0x005b7604]      ; 00479758 | DAT_005b7604
    ADD ESP,0x8                         ; 0047975e
    CMP ECX,0x5                         ; 00479761
    JL 0x0047977a                       ; 00479764
        ;   XREF to: 0047977a (CONDITIONAL_JUMP)  ; LAB_0047977a
    PUSH 0x57f2e6                       ; 00479766 | = "randomizeMe"
    LEA ESI,[EBX + 0xbc94]              ; 0047976b
    PUSH ESI                            ; 00479771
    CALL FUN_0040c900                   ; 00479772
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 00479777
    CMP dword ptr [0x005b7604],0x6      ; 0047977a | DAT_005b7604
        ;   Label: LAB_0047977a
    JL 0x00479797                       ; 00479781
        ;   XREF to: 00479797 (CONDITIONAL_JUMP)  ; LAB_00479797
    PUSH 0x57f2f2                       ; 00479783 | = "scriptVictim"
    LEA ESI,[EBX + 0xbd1c]              ; 00479788
    PUSH ESI                            ; 0047978e
    CALL FUN_0040c980                   ; 0047978f
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 00479794
    CMP dword ptr [0x005b7604],0x7      ; 00479797 | DAT_005b7604
        ;   Label: LAB_00479797
    JL 0x004797b4                       ; 0047979e
        ;   XREF to: 004797b4 (CONDITIONAL_JUMP)  ; LAB_004797b4
    PUSH 0x57f2ff                       ; 004797a0 | = "patrolNamePattern"
    LEA ESI,[EBX + 0xbcb0]              ; 004797a5
    PUSH ESI                            ; 004797ab
    CALL FUN_0040c6d0                   ; 004797ac
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004797b1
    CMP dword ptr [0x005b7604],0x8      ; 004797b4 | DAT_005b7604
        ;   Label: LAB_004797b4
    JL 0x004797d1                       ; 004797bb
        ;   XREF to: 004797d1 (CONDITIONAL_JUMP)  ; LAB_004797d1
    PUSH 0x57f311                       ; 004797bd | = "guardDistance"
    LEA ESI,[EBX + 0xbc9c]              ; 004797c2
    PUSH ESI                            ; 004797c8
    CALL FUN_0040c880                   ; 004797c9
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004797ce
    CMP dword ptr [0x005b7604],0x9      ; 004797d1 | DAT_005b7604
        ;   Label: LAB_004797d1
    JL 0x004797ee                       ; 004797d8
        ;   XREF to: 004797ee (CONDITIONAL_JUMP)  ; LAB_004797ee
    PUSH 0x57f31f                       ; 004797da | = "victimHeight"
    LEA ESI,[EBX + 0xbd18]              ; 004797df
    PUSH ESI                            ; 004797e5
    CALL FUN_0040c880                   ; 004797e6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004797eb
    CMP dword ptr [0x005b7604],0xa      ; 004797ee | DAT_005b7604
        ;   Label: LAB_004797ee
    JL 0x00479702                       ; 004797f5
        ;   XREF to: 00479702 (CONDITIONAL_JUMP)  ; LAB_00479702
    PUSH 0x57f32c                       ; 004797fb | = "victim"
    ADD EBX,0xbca4                      ; 00479800
    PUSH EBX                            ; 00479806
    CALL FUN_0040c980                   ; 00479807
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0047980c
    POP ESI                             ; 0047980f
    POP EBX                             ; 00479810
    RET                                 ; 00479811

