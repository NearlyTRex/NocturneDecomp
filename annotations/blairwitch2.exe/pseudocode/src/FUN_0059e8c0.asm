; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059e8c0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[17]:
;   FUN_0059e3b0 at 0059e559
;   FUN_005a0b20 at 005a0b55
;   FUN_005a1e10 at 005a1e45
;   FUN_005a28a0 at 005a28c6
;   FUN_005a31c0 at 005a31f5
;   FUN_005a3fc0 at 005a3ff5
;   FUN_005a4880 at 005a4893
;   FUN_005a4c50 at 005a4c9c
;   FUN_005a5c20 at 005a5c33
;   FUN_005a60d0 at 005a60f6
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_Nothing_005ef8c2
;   TerminatedCString s_Nothing_005ef8ca
;   TerminatedCString s_Animation_005ef8d2
;   TerminatedCString s_Animation_005ef8dc
;   TerminatedCString s_Alert_005ef8e6
;   TerminatedCString s_Alert_005ef8ec
;   TerminatedCString s_Patrol_005ef8f2
;   TerminatedCString s_Patrol_005ef8f9
;   TerminatedCString s_Chasing_005ef900
;   TerminatedCString s_Chasing_005ef908
;   TerminatedCString s_Death_005ef910
;   TerminatedCString s_Death_005ef916
;   TerminatedCString s_AlertInvisible_005ef91c
;   TerminatedCString s_AlertInvisible_005ef92b
;   TerminatedCString s_SlamAnimation_005ef93a
;   ... and 3 more
;
; Called Functions:
;   FUN_0059d650
;   FUN_0059daa0
;   FUN_0059ebc0
;   FUN_0059ec10
;   FUN_0059ed50
;   FUN_0059ee00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e8c0
        ;   Label: FUN_0059e8c0
    PUSH ESI                            ; 0059e8c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059e8c2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059e8c6
    LEA EAX,[ESI + 0x10af8]             ; 0059e8ca
    TEST EBX,EBX                        ; 0059e8d0
    JBE 0x0059e99c                      ; 0059e8d2
        ;   XREF to: 0059e99c (CONDITIONAL_JUMP)  ; LAB_0059e99c
    CMP EBX,0x1                         ; 0059e8d8
    JZ 0x0059e9af                       ; 0059e8db
        ;   XREF to: 0059e9af (CONDITIONAL_JUMP)  ; LAB_0059e9af
    LEA EAX,[ESI + 0x10af8]             ; 0059e8e1
        ;   Label: LAB_0059e8e1
    TEST EBX,EBX                        ; 0059e8e7
    JBE 0x0059e9d5                      ; 0059e8e9
        ;   XREF to: 0059e9d5 (CONDITIONAL_JUMP)  ; LAB_0059e9d5
    CMP EBX,0x1                         ; 0059e8ef
    JZ 0x0059e9e8                       ; 0059e8f2
        ;   XREF to: 0059e9e8 (CONDITIONAL_JUMP)  ; LAB_0059e9e8
    LEA EAX,[ESI + 0x10af8]             ; 0059e8f8
        ;   Label: LAB_0059e8f8
    TEST EBX,EBX                        ; 0059e8fe
    JBE 0x0059ea15                      ; 0059e900
        ;   XREF to: 0059ea15 (CONDITIONAL_JUMP)  ; LAB_0059ea15
    CMP EBX,0x1                         ; 0059e906
    JZ 0x0059ea28                       ; 0059e909
        ;   XREF to: 0059ea28 (CONDITIONAL_JUMP)  ; LAB_0059ea28
    LEA EAX,[ESI + 0x10af8]             ; 0059e90f
        ;   Label: LAB_0059e90f
    TEST EBX,EBX                        ; 0059e915
    JBE 0x0059ea4e                      ; 0059e917
        ;   XREF to: 0059ea4e (CONDITIONAL_JUMP)  ; LAB_0059ea4e
    CMP EBX,0x1                         ; 0059e91d
    JZ 0x0059ea61                       ; 0059e920
        ;   XREF to: 0059ea61 (CONDITIONAL_JUMP)  ; LAB_0059ea61
    LEA EAX,[ESI + 0x10af8]             ; 0059e926
        ;   Label: LAB_0059e926
    TEST EBX,EBX                        ; 0059e92c
    JBE 0x0059ea87                      ; 0059e92e
        ;   XREF to: 0059ea87 (CONDITIONAL_JUMP)  ; LAB_0059ea87
    CMP EBX,0x1                         ; 0059e934
    JZ 0x0059ea9a                       ; 0059e937
        ;   XREF to: 0059ea9a (CONDITIONAL_JUMP)  ; LAB_0059ea9a
    LEA EAX,[ESI + 0x10af8]             ; 0059e93d
        ;   Label: LAB_0059e93d
    TEST EBX,EBX                        ; 0059e943
    JBE 0x0059eac7                      ; 0059e945
        ;   XREF to: 0059eac7 (CONDITIONAL_JUMP)  ; LAB_0059eac7
    CMP EBX,0x1                         ; 0059e94b
    JZ 0x0059eada                       ; 0059e94e
        ;   XREF to: 0059eada (CONDITIONAL_JUMP)  ; LAB_0059eada
    LEA EAX,[ESI + 0x10af8]             ; 0059e954
        ;   Label: LAB_0059e954
    TEST EBX,EBX                        ; 0059e95a
    JBE 0x0059eb07                      ; 0059e95c
        ;   XREF to: 0059eb07 (CONDITIONAL_JUMP)  ; LAB_0059eb07
    CMP EBX,0x1                         ; 0059e962
    JZ 0x0059eb1a                       ; 0059e965
        ;   XREF to: 0059eb1a (CONDITIONAL_JUMP)  ; LAB_0059eb1a
    LEA EAX,[ESI + 0x10af8]             ; 0059e96b
        ;   Label: LAB_0059e96b
    TEST EBX,EBX                        ; 0059e971
    JBE 0x0059eb40                      ; 0059e973
        ;   XREF to: 0059eb40 (CONDITIONAL_JUMP)  ; LAB_0059eb40
    CMP EBX,0x1                         ; 0059e979
    JZ 0x0059eb53                       ; 0059e97c
        ;   XREF to: 0059eb53 (CONDITIONAL_JUMP)  ; LAB_0059eb53
    LEA EAX,[ESI + 0x10af8]             ; 0059e982
        ;   Label: LAB_0059e982
    TEST EBX,EBX                        ; 0059e988
    JBE 0x0059eb74                      ; 0059e98a
        ;   XREF to: 0059eb74 (CONDITIONAL_JUMP)  ; LAB_0059eb74
    CMP EBX,0x1                         ; 0059e990
    JZ 0x0059eb85                       ; 0059e993
        ;   XREF to: 0059eb85 (CONDITIONAL_JUMP)  ; LAB_0059eb85
    POP ESI                             ; 0059e999
        ;   Label: LAB_0059e999
    POP EBX                             ; 0059e99a
    RET                                 ; 0059e99b
    PUSH 0x5ef8c2                       ; 0059e99c | = "Nothing"
        ;   Label: LAB_0059e99c
    PUSH EAX                            ; 0059e9a1
    CALL FUN_0059d650                   ; 0059e9a2
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059e9a7
    JMP 0x0059e8e1                      ; 0059e9aa
        ;   XREF to: 0059e8e1 (UNCONDITIONAL_JUMP)  ; LAB_0059e8e1
    PUSH 0x5ef8ca                       ; 0059e9af | = "Nothing"
        ;   Label: LAB_0059e9af
    PUSH EAX                            ; 0059e9b4
    CALL FUN_0059daa0                   ; 0059e9b5
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059e9ba
    TEST EAX,EAX                        ; 0059e9bd
    JZ 0x0059e8e1                       ; 0059e9bf
        ;   XREF to: 0059e8e1 (CONDITIONAL_JUMP)  ; LAB_0059e8e1
    PUSH dword ptr [ESP + 0x10]         ; 0059e9c5
    PUSH ESI                            ; 0059e9c9
    CALL FUN_0059ebc0                   ; 0059e9ca
        ;   XREF to: 0059ebc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ebc0()
    ADD ESP,0x8                         ; 0059e9cf
    POP ESI                             ; 0059e9d2
    POP EBX                             ; 0059e9d3
    RET                                 ; 0059e9d4
    PUSH 0x5ef8d2                       ; 0059e9d5 | = "Animation"
        ;   Label: LAB_0059e9d5
    PUSH EAX                            ; 0059e9da
    CALL FUN_0059d650                   ; 0059e9db
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059e9e0
    JMP 0x0059e8f8                      ; 0059e9e3
        ;   XREF to: 0059e8f8 (UNCONDITIONAL_JUMP)  ; LAB_0059e8f8
    PUSH 0x5ef8dc                       ; 0059e9e8 | = "Animation"
        ;   Label: LAB_0059e9e8
    PUSH EAX                            ; 0059e9ed
    CALL FUN_0059daa0                   ; 0059e9ee
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059e9f3
    TEST EAX,EAX                        ; 0059e9f6
    JZ 0x0059e8f8                       ; 0059e9f8
        ;   XREF to: 0059e8f8 (CONDITIONAL_JUMP)  ; LAB_0059e8f8
    PUSH dword ptr [ESP + 0x10]         ; 0059e9fe
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0059ea02
    PUSH ESI                            ; 0059ea08
    CALL dword ptr [EAX + 0x170]        ; 0059ea09
    ADD ESP,0x8                         ; 0059ea0f
    POP ESI                             ; 0059ea12
    POP EBX                             ; 0059ea13
    RET                                 ; 0059ea14
    PUSH 0x5ef8e6                       ; 0059ea15 | = "Alert"
        ;   Label: LAB_0059ea15
    PUSH EAX                            ; 0059ea1a
    CALL FUN_0059d650                   ; 0059ea1b
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059ea20
    JMP 0x0059e90f                      ; 0059ea23
        ;   XREF to: 0059e90f (UNCONDITIONAL_JUMP)  ; LAB_0059e90f
    PUSH 0x5ef8ec                       ; 0059ea28 | = "Alert"
        ;   Label: LAB_0059ea28
    PUSH EAX                            ; 0059ea2d
    CALL FUN_0059daa0                   ; 0059ea2e
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059ea33
    TEST EAX,EAX                        ; 0059ea36
    JZ 0x0059e90f                       ; 0059ea38
        ;   XREF to: 0059e90f (CONDITIONAL_JUMP)  ; LAB_0059e90f
    PUSH dword ptr [ESP + 0x10]         ; 0059ea3e
    PUSH ESI                            ; 0059ea42
    CALL FUN_0059ec10                   ; 0059ea43
        ;   XREF to: 0059ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ec10()
    ADD ESP,0x8                         ; 0059ea48
    POP ESI                             ; 0059ea4b
    POP EBX                             ; 0059ea4c
    RET                                 ; 0059ea4d
    PUSH 0x5ef8f2                       ; 0059ea4e | = "Patrol"
        ;   Label: LAB_0059ea4e
    PUSH EAX                            ; 0059ea53
    CALL FUN_0059d650                   ; 0059ea54
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059ea59
    JMP 0x0059e926                      ; 0059ea5c
        ;   XREF to: 0059e926 (UNCONDITIONAL_JUMP)  ; LAB_0059e926
    PUSH 0x5ef8f9                       ; 0059ea61 | = "Patrol"
        ;   Label: LAB_0059ea61
    PUSH EAX                            ; 0059ea66
    CALL FUN_0059daa0                   ; 0059ea67
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059ea6c
    TEST EAX,EAX                        ; 0059ea6f
    JZ 0x0059e926                       ; 0059ea71
        ;   XREF to: 0059e926 (CONDITIONAL_JUMP)  ; LAB_0059e926
    PUSH dword ptr [ESP + 0x10]         ; 0059ea77
    PUSH ESI                            ; 0059ea7b
    CALL FUN_0059ee00                   ; 0059ea7c
        ;   XREF to: 0059ee00 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ee00()
    ADD ESP,0x8                         ; 0059ea81
    POP ESI                             ; 0059ea84
    POP EBX                             ; 0059ea85
    RET                                 ; 0059ea86
    PUSH 0x5ef900                       ; 0059ea87 | = "Chasing"
        ;   Label: LAB_0059ea87
    PUSH EAX                            ; 0059ea8c
    CALL FUN_0059d650                   ; 0059ea8d
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059ea92
    JMP 0x0059e93d                      ; 0059ea95
        ;   XREF to: 0059e93d (UNCONDITIONAL_JUMP)  ; LAB_0059e93d
    PUSH 0x5ef908                       ; 0059ea9a | = "Chasing"
        ;   Label: LAB_0059ea9a
    PUSH EAX                            ; 0059ea9f
    CALL FUN_0059daa0                   ; 0059eaa0
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059eaa5
    TEST EAX,EAX                        ; 0059eaa8
    JZ 0x0059e93d                       ; 0059eaaa
        ;   XREF to: 0059e93d (CONDITIONAL_JUMP)  ; LAB_0059e93d
    PUSH dword ptr [ESP + 0x10]         ; 0059eab0
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0059eab4
    PUSH ESI                            ; 0059eaba
    CALL dword ptr [EAX + 0x178]        ; 0059eabb
    ADD ESP,0x8                         ; 0059eac1
    POP ESI                             ; 0059eac4
    POP EBX                             ; 0059eac5
    RET                                 ; 0059eac6
    PUSH 0x5ef910                       ; 0059eac7 | = "Death"
        ;   Label: LAB_0059eac7
    PUSH EAX                            ; 0059eacc
    CALL FUN_0059d650                   ; 0059eacd
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059ead2
    JMP 0x0059e954                      ; 0059ead5
        ;   XREF to: 0059e954 (UNCONDITIONAL_JUMP)  ; LAB_0059e954
    PUSH 0x5ef916                       ; 0059eada | = "Death"
        ;   Label: LAB_0059eada
    PUSH EAX                            ; 0059eadf
    CALL FUN_0059daa0                   ; 0059eae0
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059eae5
    TEST EAX,EAX                        ; 0059eae8
    JZ 0x0059e954                       ; 0059eaea
        ;   XREF to: 0059e954 (CONDITIONAL_JUMP)  ; LAB_0059e954
    PUSH dword ptr [ESP + 0x10]         ; 0059eaf0
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0059eaf4
    PUSH ESI                            ; 0059eafa
    CALL dword ptr [EAX + 0x174]        ; 0059eafb
    ADD ESP,0x8                         ; 0059eb01
    POP ESI                             ; 0059eb04
    POP EBX                             ; 0059eb05
    RET                                 ; 0059eb06
    PUSH 0x5ef91c                       ; 0059eb07 | = "AlertInvisible"
        ;   Label: LAB_0059eb07
    PUSH EAX                            ; 0059eb0c
    CALL FUN_0059d650                   ; 0059eb0d
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059eb12
    JMP 0x0059e96b                      ; 0059eb15
        ;   XREF to: 0059e96b (UNCONDITIONAL_JUMP)  ; LAB_0059e96b
    PUSH 0x5ef92b                       ; 0059eb1a | = "AlertInvisible"
        ;   Label: LAB_0059eb1a
    PUSH EAX                            ; 0059eb1f
    CALL FUN_0059daa0                   ; 0059eb20
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059eb25
    TEST EAX,EAX                        ; 0059eb28
    JZ 0x0059e96b                       ; 0059eb2a
        ;   XREF to: 0059e96b (CONDITIONAL_JUMP)  ; LAB_0059e96b
    PUSH dword ptr [ESP + 0x10]         ; 0059eb30
    PUSH ESI                            ; 0059eb34
    CALL FUN_0059ed50                   ; 0059eb35
        ;   XREF to: 0059ed50 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ed50()
    ADD ESP,0x8                         ; 0059eb3a
    POP ESI                             ; 0059eb3d
    POP EBX                             ; 0059eb3e
    RET                                 ; 0059eb3f
    PUSH 0x5ef93a                       ; 0059eb40 | = "SlamAnimation"
        ;   Label: LAB_0059eb40
    PUSH EAX                            ; 0059eb45
    CALL FUN_0059d650                   ; 0059eb46
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059eb4b
    JMP 0x0059e982                      ; 0059eb4e
        ;   XREF to: 0059e982 (UNCONDITIONAL_JUMP)  ; LAB_0059e982
    PUSH 0x5ef948                       ; 0059eb53 | = "SlamAnimation"
        ;   Label: LAB_0059eb53
    PUSH EAX                            ; 0059eb58
    CALL FUN_0059daa0                   ; 0059eb59
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059eb5e
    TEST EAX,EAX                        ; 0059eb61
    JZ 0x0059e982                       ; 0059eb63
        ;   XREF to: 0059e982 (CONDITIONAL_JUMP)  ; LAB_0059e982
    PUSH dword ptr [ESP + 0x10]         ; 0059eb69
    PUSH ESI                            ; 0059eb6d
    ADD ESP,0x8                         ; 0059eb6e
    POP ESI                             ; 0059eb71
    POP EBX                             ; 0059eb72
    RET                                 ; 0059eb73
    PUSH 0x5ef956                       ; 0059eb74 | DAT_005ef956
        ;   Label: LAB_0059eb74
    PUSH EAX                            ; 0059eb79
    CALL FUN_0059d650                   ; 0059eb7a
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 0059eb7f
    POP ESI                             ; 0059eb82
    POP EBX                             ; 0059eb83
    RET                                 ; 0059eb84
    PUSH 0x5ef95b                       ; 0059eb85 | DAT_005ef95b
        ;   Label: LAB_0059eb85
    PUSH EAX                            ; 0059eb8a
    CALL FUN_0059daa0                   ; 0059eb8b
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059eb90
    TEST EAX,EAX                        ; 0059eb93
    JZ 0x0059e999                       ; 0059eb95
        ;   XREF to: 0059e999 (CONDITIONAL_JUMP)  ; LAB_0059e999
    PUSH dword ptr [ESP + 0x10]         ; 0059eb9b
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0059eb9f
    PUSH ESI                            ; 0059eba5
    CALL dword ptr [EAX + 0x158]        ; 0059eba6
    ADD ESP,0x8                         ; 0059ebac
    POP ESI                             ; 0059ebaf
    POP EBX                             ; 0059ebb0
    RET                                 ; 0059ebb1

