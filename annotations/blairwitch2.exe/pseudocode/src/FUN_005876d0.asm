; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005876d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005edfc6
;   TerminatedCString s_opacity_005edfcb
;   TerminatedCString s_heightDelta_005edfd3
;   TerminatedCString s_timeToMove_005edfdf
;   TerminatedCString s_moveSound_005edfea
;   TerminatedCString s_moveEvent_005edff4
;   TerminatedCString s_param_005edffe
;   TerminatedCString s_heightDelta_005ee004
;   TerminatedCString s_timeToMoveUp_005ee010
;   TerminatedCString s_timeToMoveDown_005ee01d
;   TerminatedCString s_moveUpSound_005ee02c
;   TerminatedCString s_moveDownSound_005ee038
;   TerminatedCString s_moveUpEvent_005ee046
;   TerminatedCString s_moveDownEvent_005ee052
;   TerminatedCString s_param_005ee060
;   ... and 7 more
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005876d0
        ;   Label: FUN_005876d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005876d1
    PUSH EBX                            ; 005876d5
    CALL FUN_0040c330                   ; 005876d6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 005876db
    PUSH 0x5edfc6                       ; 005876de | DAT_005edfc6
    LEA EAX,[EBX + 0x2b4]               ; 005876e3
    PUSH EAX                            ; 005876e9
    CALL FUN_0040b4b0                   ; 005876ea
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 005876ef
    PUSH 0x5edfcb                       ; 005876f2 | = "opacity"
    LEA EAX,[EBX + 0x2c0]               ; 005876f7
    PUSH EAX                            ; 005876fd
    CALL FUN_0040b960                   ; 005876fe
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EDX,dword ptr [0x0061e884]      ; 00587703 | DAT_0061e884
    ADD ESP,0x8                         ; 00587709
    CMP EDX,0x2                         ; 0058770c
    JZ 0x0058781b                       ; 0058770f
        ;   XREF to: 0058781b (CONDITIONAL_JUMP)  ; LAB_0058781b
    CMP dword ptr [0x0061e884],0x3      ; 00587715 | DAT_0061e884
        ;   Label: LAB_00587715
    JL 0x005877d6                       ; 0058771c
        ;   XREF to: 005877d6 (CONDITIONAL_JUMP)  ; LAB_005877d6
    PUSH 0x5ee004                       ; 00587722 | = "heightDelta"
    LEA EAX,[EBX + 0x2c4]               ; 00587727
    PUSH EAX                            ; 0058772d
    CALL FUN_0040b8e0                   ; 0058772e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00587733
    PUSH 0x5ee010                       ; 00587736 | = "timeToMoveUp"
    LEA EAX,[EBX + 0x2c8]               ; 0058773b
    PUSH EAX                            ; 00587741
    CALL FUN_0040b8e0                   ; 00587742
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00587747
    PUSH 0x5ee01d                       ; 0058774a | = "timeToMoveDown"
    LEA EAX,[EBX + 0x2cc]               ; 0058774f
    PUSH EAX                            ; 00587755
    CALL FUN_0040b8e0                   ; 00587756
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058775b
    PUSH 0x5ee02c                       ; 0058775e | = "moveUpSound"
    LEA EAX,[EBX + 0x2d0]               ; 00587763
    PUSH EAX                            ; 00587769
    CALL FUN_0040b730                   ; 0058776a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0058776f
    PUSH 0x5ee038                       ; 00587772 | = "moveDownSound"
    LEA EAX,[EBX + 0x2f0]               ; 00587777
    PUSH EAX                            ; 0058777d
    CALL FUN_0040b730                   ; 0058777e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00587783
    PUSH 0x5ee046                       ; 00587786 | = "moveUpEvent"
    LEA EAX,[EBX + 0x310]               ; 0058778b
    PUSH EAX                            ; 00587791
    CALL FUN_0040b730                   ; 00587792
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00587797
    PUSH 0x5ee052                       ; 0058779a | = "moveDownEvent"
    LEA EAX,[EBX + 0x374]               ; 0058779f
    PUSH EAX                            ; 005877a5
    CALL FUN_0040b730                   ; 005877a6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 005877ab
    PUSH 0x5ee060                       ; 005877ae | = "param"
    LEA EAX,[EBX + 0x3d8]               ; 005877b3
    PUSH EAX                            ; 005877b9
    CALL FUN_0040b8e0                   ; 005877ba
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005877bf
    PUSH 0x5ee066                       ; 005877c2 | = "state"
    LEA EAX,[EBX + 0x3dc]               ; 005877c7
    PUSH EAX                            ; 005877cd
    CALL FUN_0040b960                   ; 005877ce
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005877d3
    CMP dword ptr [0x0061e884],0x4      ; 005877d6 | DAT_0061e884
        ;   Label: LAB_005877d6
    JL 0x005877f3                       ; 005877dd
        ;   XREF to: 005877f3 (CONDITIONAL_JUMP)  ; LAB_005877f3
    PUSH 0x5ee06c                       ; 005877df | = "patchSize"
    LEA EAX,[EBX + 0x3e0]               ; 005877e4
    PUSH EAX                            ; 005877ea
    CALL FUN_0040b8e0                   ; 005877eb
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 005877f0
    CMP dword ptr [0x0061e884],0x5      ; 005877f3 | DAT_0061e884
        ;   Label: LAB_005877f3
    JL 0x00587810                       ; 005877fa
        ;   XREF to: 00587810 (CONDITIONAL_JUMP)  ; LAB_00587810
    PUSH 0x5ee076                       ; 005877fc | = "roundFlag"
    LEA EAX,[EBX + 0x3e4]               ; 00587801
    PUSH EAX                            ; 00587807
    CALL FUN_0040b960                   ; 00587808
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0058780d
    CMP dword ptr [0x0061e884],0x6      ; 00587810 | DAT_0061e884
        ;   Label: LAB_00587810
    JGE 0x00587884                      ; 00587817
        ;   XREF to: 00587884 (CONDITIONAL_JUMP)  ; LAB_00587884
    POP EBX                             ; 00587819
    RET                                 ; 0058781a
    PUSH 0x5edfd3                       ; 0058781b | = "heightDelta"
        ;   Label: LAB_0058781b
    LEA EAX,[EBX + 0x2c4]               ; 00587820
    PUSH EAX                            ; 00587826
    CALL FUN_0040b8e0                   ; 00587827
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058782c
    PUSH 0x5edfdf                       ; 0058782f | = "timeToMove"
    LEA EAX,[EBX + 0x2c8]               ; 00587834
    PUSH EAX                            ; 0058783a
    CALL FUN_0040b8e0                   ; 0058783b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00587840
    PUSH 0x5edfea                       ; 00587843 | = "moveSound"
    LEA EAX,[EBX + 0x2d0]               ; 00587848
    PUSH EAX                            ; 0058784e
    CALL FUN_0040b730                   ; 0058784f
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00587854
    PUSH 0x5edff4                       ; 00587857 | = "moveEvent"
    LEA EAX,[EBX + 0x310]               ; 0058785c
    PUSH EAX                            ; 00587862
    CALL FUN_0040b730                   ; 00587863
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00587868
    PUSH 0x5edffe                       ; 0058786b | = "param"
    LEA EAX,[EBX + 0x3d8]               ; 00587870
    PUSH EAX                            ; 00587876
    CALL FUN_0040b8e0                   ; 00587877
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058787c
    JMP 0x00587715                      ; 0058787f
        ;   XREF to: 00587715 (UNCONDITIONAL_JUMP)  ; LAB_00587715
    PUSH 0x5ee080                       ; 00587884 | DAT_005ee080
        ;   Label: LAB_00587884
    LEA EAX,[EBX + 0x3e8]               ; 00587889
    PUSH EAX                            ; 0058788f
    CALL FUN_0040b960                   ; 00587890
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00587895
    PUSH 0x5ee085                       ; 00587898 | DAT_005ee085
    LEA EAX,[EBX + 0x3ec]               ; 0058789d
    PUSH EAX                            ; 005878a3
    CALL FUN_0040b960                   ; 005878a4
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005878a9
    PUSH 0x5ee08a                       ; 005878ac | DAT_005ee08a
    ADD EBX,0x3f0                       ; 005878b1
    PUSH EBX                            ; 005878b7
    CALL FUN_0040b960                   ; 005878b8
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005878bd
    POP EBX                             ; 005878c0
    RET                                 ; 005878c1

