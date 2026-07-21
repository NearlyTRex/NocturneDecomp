; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_004a57c0 at 004a5b86
;   core_game.cpp_CGame_processJoystickControls_FUN_0049ec80 at 0049ec86
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0 at 004cf9a8
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3d6f
;
; Referenced Globals:
;   undefined4 DAT_005bac64
;   undefined4 DAT_01c038f8
;   undefined4 DAT_01c038fc
;   undefined4 DAT_01c03908
;   undefined4 DAT_01c03909
;   undefined4 DAT_01c0390c
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200
;   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0
;   wincore_winrun.cpp_getJoystickState_FUN_00559eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e8b0
        ;   Label: core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
    PUSH ESI                            ; 0049e8b1
    PUSH EDI                            ; 0049e8b2
    PUSH EBP                            ; 0049e8b3
    SUB ESP,0x4                         ; 0049e8b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049e8b7
    MOV EAX,[0x01c03908]                ; 0049e8bb | DAT_01c03908
    MOV EDX,0x2                         ; 0049e8c0
    MOV dword ptr [ESP],EAX             ; 0049e8c5
    MOV dword ptr [0x01c0390c],EDX      ; 0049e8c8 | DAT_01c0390c
    CALL wincore_winrun.cpp_getJoystickState_FUN_00559eb0 ; 0049e8ce
        ;   XREF to: 00559eb0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getJoystickState_FUN_00559eb0()
    TEST byte ptr [0x01c03908],0x1      ; 0049e8d3 | DAT_01c03908
    JZ 0x0049eb89                       ; 0049e8da
        ;   XREF to: 0049eb89 (CONDITIONAL_JUMP)  ; LAB_0049eb89
    TEST byte ptr [ESP],0x1             ; 0049e8e0
    JNZ 0x0049e8fa                      ; 0049e8e4
        ;   XREF to: 0049e8fa (CONDITIONAL_JUMP)  ; LAB_0049e8fa
    PUSH 0x202                          ; 0049e8e6
    MOV ESI,dword ptr [0x005bac64]      ; 0049e8eb | DAT_005bac64
    PUSH ESI                            ; 0049e8f1 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e8f2
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e8f7
        ;   Label: LAB_0049e8f7
    TEST byte ptr [0x01c03908],0x2      ; 0049e8fa | DAT_01c03908
        ;   Label: LAB_0049e8fa
    JZ 0x0049eb9f                       ; 0049e901
        ;   XREF to: 0049eb9f (CONDITIONAL_JUMP)  ; LAB_0049eb9f
    TEST byte ptr [ESP],0x2             ; 0049e907
    JNZ 0x0049e921                      ; 0049e90b
        ;   XREF to: 0049e921 (CONDITIONAL_JUMP)  ; LAB_0049e921
    PUSH 0x203                          ; 0049e90d
    MOV EBP,dword ptr [0x005bac64]      ; 0049e912 | DAT_005bac64
    PUSH EBP                            ; 0049e918 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e919
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e91e
        ;   Label: LAB_0049e91e
    TEST byte ptr [0x01c03908],0x4      ; 0049e921 | DAT_01c03908
        ;   Label: LAB_0049e921
    JZ 0x0049ebb5                       ; 0049e928
        ;   XREF to: 0049ebb5 (CONDITIONAL_JUMP)  ; LAB_0049ebb5
    TEST byte ptr [ESP],0x4             ; 0049e92e
    JNZ 0x0049e948                      ; 0049e932
        ;   XREF to: 0049e948 (CONDITIONAL_JUMP)  ; LAB_0049e948
    PUSH 0x204                          ; 0049e934
    MOV EDX,dword ptr [0x005bac64]      ; 0049e939 | DAT_005bac64
    PUSH EDX                            ; 0049e93f | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e940
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e945
        ;   Label: LAB_0049e945
    TEST byte ptr [0x01c03908],0x8      ; 0049e948 | DAT_01c03908
        ;   Label: LAB_0049e948
    JZ 0x0049ebca                       ; 0049e94f
        ;   XREF to: 0049ebca (CONDITIONAL_JUMP)  ; LAB_0049ebca
    TEST byte ptr [ESP],0x8             ; 0049e955
    JNZ 0x0049e96f                      ; 0049e959
        ;   XREF to: 0049e96f (CONDITIONAL_JUMP)  ; LAB_0049e96f
    PUSH 0x205                          ; 0049e95b
    MOV ESI,dword ptr [0x005bac64]      ; 0049e960 | DAT_005bac64
    PUSH ESI                            ; 0049e966 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e967
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e96c
        ;   Label: LAB_0049e96c
    TEST byte ptr [0x01c03908],0x10     ; 0049e96f | DAT_01c03908
        ;   Label: LAB_0049e96f
    JZ 0x0049ebe0                       ; 0049e976
        ;   XREF to: 0049ebe0 (CONDITIONAL_JUMP)  ; LAB_0049ebe0
    TEST byte ptr [ESP],0x10            ; 0049e97c
    JNZ 0x0049e996                      ; 0049e980
        ;   XREF to: 0049e996 (CONDITIONAL_JUMP)  ; LAB_0049e996
    PUSH 0x206                          ; 0049e982
    MOV EBP,dword ptr [0x005bac64]      ; 0049e987 | DAT_005bac64
    PUSH EBP                            ; 0049e98d | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e98e
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e993
        ;   Label: LAB_0049e993
    TEST byte ptr [0x01c03908],0x20     ; 0049e996 | DAT_01c03908
        ;   Label: LAB_0049e996
    JZ 0x0049ebf6                       ; 0049e99d
        ;   XREF to: 0049ebf6 (CONDITIONAL_JUMP)  ; LAB_0049ebf6
    TEST byte ptr [ESP],0x20            ; 0049e9a3
    JNZ 0x0049e9bd                      ; 0049e9a7
        ;   XREF to: 0049e9bd (CONDITIONAL_JUMP)  ; LAB_0049e9bd
    PUSH 0x207                          ; 0049e9a9
    MOV EDX,dword ptr [0x005bac64]      ; 0049e9ae | DAT_005bac64
    PUSH EDX                            ; 0049e9b4 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e9b5
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e9ba
        ;   Label: LAB_0049e9ba
    TEST byte ptr [0x01c03908],0x40     ; 0049e9bd | DAT_01c03908
        ;   Label: LAB_0049e9bd
    JZ 0x0049ec0b                       ; 0049e9c4
        ;   XREF to: 0049ec0b (CONDITIONAL_JUMP)  ; LAB_0049ec0b
    TEST byte ptr [ESP],0x40            ; 0049e9ca
    JNZ 0x0049e9e4                      ; 0049e9ce
        ;   XREF to: 0049e9e4 (CONDITIONAL_JUMP)  ; LAB_0049e9e4
    PUSH 0x208                          ; 0049e9d0
    MOV ESI,dword ptr [0x005bac64]      ; 0049e9d5 | DAT_005bac64
    PUSH ESI                            ; 0049e9db | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049e9dc
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049e9e1
        ;   Label: LAB_0049e9e1
    TEST byte ptr [0x01c03908],0x80     ; 0049e9e4 | DAT_01c03908
        ;   Label: LAB_0049e9e4
    JZ 0x0049ec21                       ; 0049e9eb
        ;   XREF to: 0049ec21 (CONDITIONAL_JUMP)  ; LAB_0049ec21
    TEST byte ptr [ESP],0x80            ; 0049e9f1
    JNZ 0x0049ea0b                      ; 0049e9f5
        ;   XREF to: 0049ea0b (CONDITIONAL_JUMP)  ; LAB_0049ea0b
    PUSH 0x209                          ; 0049e9f7
    MOV EBP,dword ptr [0x005bac64]      ; 0049e9fc | DAT_005bac64
    PUSH EBP                            ; 0049ea02 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049ea03
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049ea08
        ;   Label: LAB_0049ea08
    TEST byte ptr [0x01c03909],0x1      ; 0049ea0b | DAT_01c03909
        ;   Label: LAB_0049ea0b
    JZ 0x0049ec37                       ; 0049ea12
        ;   XREF to: 0049ec37 (CONDITIONAL_JUMP)  ; LAB_0049ec37
    TEST byte ptr [ESP + 0x1],0x1       ; 0049ea18
    JNZ 0x0049ea33                      ; 0049ea1d
        ;   XREF to: 0049ea33 (CONDITIONAL_JUMP)  ; LAB_0049ea33
    PUSH 0x20a                          ; 0049ea1f
    MOV EDX,dword ptr [0x005bac64]      ; 0049ea24 | DAT_005bac64
    PUSH EDX                            ; 0049ea2a | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049ea2b
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049ea30
        ;   Label: LAB_0049ea30
    TEST byte ptr [0x01c03909],0x2      ; 0049ea33 | DAT_01c03909
        ;   Label: LAB_0049ea33
    JZ 0x0049ec4c                       ; 0049ea3a
        ;   XREF to: 0049ec4c (CONDITIONAL_JUMP)  ; LAB_0049ec4c
    TEST byte ptr [ESP + 0x1],0x2       ; 0049ea40
    JNZ 0x0049ea5b                      ; 0049ea45
        ;   XREF to: 0049ea5b (CONDITIONAL_JUMP)  ; LAB_0049ea5b
    PUSH 0x20b                          ; 0049ea47
    MOV ESI,dword ptr [0x005bac64]      ; 0049ea4c | DAT_005bac64
    PUSH ESI                            ; 0049ea52 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049ea53
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049ea58
        ;   Label: LAB_0049ea58
    PUSH 0x251                          ; 0049ea5b
        ;   Label: LAB_0049ea5b
    MOV EDI,dword ptr [0x005bac64]      ; 0049ea60 | DAT_005bac64
    PUSH EDI                            ; 0049ea66 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ea67
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    ADD ESP,0x8                         ; 0049ea6c
    PUSH 0x252                          ; 0049ea6f
    MOV EBP,dword ptr [0x005bac64]      ; 0049ea74 | DAT_005bac64
    PUSH EBP                            ; 0049ea7a | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ea7b
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    ADD ESP,0x8                         ; 0049ea80
    PUSH 0x253                          ; 0049ea83
    MOV EAX,[0x005bac64]                ; 0049ea88 | DAT_005bac64
    PUSH EAX                            ; 0049ea8d | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ea8e
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    ADD ESP,0x8                         ; 0049ea93
    PUSH 0x254                          ; 0049ea96
    MOV EDX,dword ptr [0x005bac64]      ; 0049ea9b | DAT_005bac64
    PUSH EDX                            ; 0049eaa1 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049eaa2
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    MOV EDX,dword ptr [EBX + 0xa4]      ; 0049eaa7
    MOV ECX,dword ptr [EBX + 0xac]      ; 0049eaad
    SUB EDX,ECX                         ; 0049eab3
    MOV EAX,EDX                         ; 0049eab5
    SAR EDX,0x1f                        ; 0049eab7
    SUB EAX,EDX                         ; 0049eaba
    SAR EAX,0x1                         ; 0049eabc
    MOV EDX,dword ptr [EBX + 0xa4]      ; 0049eabe
    MOV ESI,dword ptr [0x01c038f8]      ; 0049eac4 | DAT_01c038f8
    SUB EDX,EAX                         ; 0049eaca
    ADD ESP,0x8                         ; 0049eacc
    CMP EDX,ESI                         ; 0049eacf
    JLE 0x0049eae7                      ; 0049ead1
        ;   XREF to: 0049eae7 (CONDITIONAL_JUMP)  ; LAB_0049eae7
    PUSH 0x251                          ; 0049ead3
    MOV EDI,dword ptr [0x005bac64]      ; 0049ead8 | DAT_005bac64
    PUSH EDI                            ; 0049eade | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049eadf
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049eae4
    MOV EBP,dword ptr [EBX + 0xa4]      ; 0049eae7
        ;   Label: LAB_0049eae7
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0049eaed
    SUB EDX,EBP                         ; 0049eaf3
    MOV EAX,EDX                         ; 0049eaf5
    SAR EDX,0x1f                        ; 0049eaf7
    SUB EAX,EDX                         ; 0049eafa
    SAR EAX,0x1                         ; 0049eafc
    MOV ECX,dword ptr [0x01c038f8]      ; 0049eafe | DAT_01c038f8
    ADD EAX,EBP                         ; 0049eb04
    CMP EAX,ECX                         ; 0049eb06
    JGE 0x0049eb1e                      ; 0049eb08
        ;   XREF to: 0049eb1e (CONDITIONAL_JUMP)  ; LAB_0049eb1e
    PUSH 0x252                          ; 0049eb0a
    MOV ESI,dword ptr [0x005bac64]      ; 0049eb0f | DAT_005bac64
    PUSH ESI                            ; 0049eb15 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049eb16
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049eb1b
    MOV EDI,dword ptr [EBX + 0xb4]      ; 0049eb1e
        ;   Label: LAB_0049eb1e
    MOV EDX,dword ptr [EBX + 0xa8]      ; 0049eb24
    SUB EDX,EDI                         ; 0049eb2a
    MOV EAX,EDX                         ; 0049eb2c
    SAR EDX,0x1f                        ; 0049eb2e
    SUB EAX,EDX                         ; 0049eb31
    SAR EAX,0x1                         ; 0049eb33
    MOV EDX,dword ptr [EBX + 0xa8]      ; 0049eb35
    MOV EBP,dword ptr [0x01c038fc]      ; 0049eb3b | DAT_01c038fc
    SUB EDX,EAX                         ; 0049eb41
    CMP EDX,EBP                         ; 0049eb43
    JLE 0x0049eb5a                      ; 0049eb45
        ;   XREF to: 0049eb5a (CONDITIONAL_JUMP)  ; LAB_0049eb5a
    PUSH 0x253                          ; 0049eb47
    MOV EAX,[0x005bac64]                ; 0049eb4c | DAT_005bac64
    PUSH EAX                            ; 0049eb51 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049eb52
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049eb57
    MOV ECX,dword ptr [EBX + 0xa8]      ; 0049eb5a
        ;   Label: LAB_0049eb5a
    MOV EDX,dword ptr [EBX + 0xb8]      ; 0049eb60
    SUB EDX,ECX                         ; 0049eb66
    MOV EAX,EDX                         ; 0049eb68
    SAR EDX,0x1f                        ; 0049eb6a
    SUB EAX,EDX                         ; 0049eb6d
    SAR EAX,0x1                         ; 0049eb6f
    MOV EDI,dword ptr [0x01c038fc]      ; 0049eb71 | DAT_01c038fc
    ADD EAX,ECX                         ; 0049eb77
    CMP EAX,EDI                         ; 0049eb79
    JL 0x0049ec62                       ; 0049eb7b
        ;   XREF to: 0049ec62 (CONDITIONAL_JUMP)  ; LAB_0049ec62
    ADD ESP,0x4                         ; 0049eb81
    POP EBP                             ; 0049eb84
    POP EDI                             ; 0049eb85
    POP ESI                             ; 0049eb86
    POP EBX                             ; 0049eb87
    RET                                 ; 0049eb88
    PUSH 0x202                          ; 0049eb89
        ;   Label: LAB_0049eb89
    MOV ECX,dword ptr [0x005bac64]      ; 0049eb8e | DAT_005bac64
    PUSH ECX                            ; 0049eb94 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049eb95
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e8f7                      ; 0049eb9a
        ;   XREF to: 0049e8f7 (UNCONDITIONAL_JUMP)  ; LAB_0049e8f7
    PUSH 0x203                          ; 0049eb9f
        ;   Label: LAB_0049eb9f
    MOV EDI,dword ptr [0x005bac64]      ; 0049eba4 | DAT_005bac64
    PUSH EDI                            ; 0049ebaa | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ebab
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e91e                      ; 0049ebb0
        ;   XREF to: 0049e91e (UNCONDITIONAL_JUMP)  ; LAB_0049e91e
    PUSH 0x204                          ; 0049ebb5
        ;   Label: LAB_0049ebb5
    MOV EAX,[0x005bac64]                ; 0049ebba | DAT_005bac64
    PUSH EAX                            ; 0049ebbf | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ebc0
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e945                      ; 0049ebc5
        ;   XREF to: 0049e945 (UNCONDITIONAL_JUMP)  ; LAB_0049e945
    PUSH 0x205                          ; 0049ebca
        ;   Label: LAB_0049ebca
    MOV ECX,dword ptr [0x005bac64]      ; 0049ebcf | DAT_005bac64
    PUSH ECX                            ; 0049ebd5 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ebd6
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e96c                      ; 0049ebdb
        ;   XREF to: 0049e96c (UNCONDITIONAL_JUMP)  ; LAB_0049e96c
    PUSH 0x206                          ; 0049ebe0
        ;   Label: LAB_0049ebe0
    MOV EDI,dword ptr [0x005bac64]      ; 0049ebe5 | DAT_005bac64
    PUSH EDI                            ; 0049ebeb | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ebec
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e993                      ; 0049ebf1
        ;   XREF to: 0049e993 (UNCONDITIONAL_JUMP)  ; LAB_0049e993
    PUSH 0x207                          ; 0049ebf6
        ;   Label: LAB_0049ebf6
    MOV EAX,[0x005bac64]                ; 0049ebfb | DAT_005bac64
    PUSH EAX                            ; 0049ec00 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ec01
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e9ba                      ; 0049ec06
        ;   XREF to: 0049e9ba (UNCONDITIONAL_JUMP)  ; LAB_0049e9ba
    PUSH 0x208                          ; 0049ec0b
        ;   Label: LAB_0049ec0b
    MOV ECX,dword ptr [0x005bac64]      ; 0049ec10 | DAT_005bac64
    PUSH ECX                            ; 0049ec16 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ec17
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049e9e1                      ; 0049ec1c
        ;   XREF to: 0049e9e1 (UNCONDITIONAL_JUMP)  ; LAB_0049e9e1
    PUSH 0x209                          ; 0049ec21
        ;   Label: LAB_0049ec21
    MOV EDI,dword ptr [0x005bac64]      ; 0049ec26 | DAT_005bac64
    PUSH EDI                            ; 0049ec2c | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ec2d
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049ea08                      ; 0049ec32
        ;   XREF to: 0049ea08 (UNCONDITIONAL_JUMP)  ; LAB_0049ea08
    PUSH 0x20a                          ; 0049ec37
        ;   Label: LAB_0049ec37
    MOV EAX,[0x005bac64]                ; 0049ec3c | DAT_005bac64
    PUSH EAX                            ; 0049ec41 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ec42
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049ea30                      ; 0049ec47
        ;   XREF to: 0049ea30 (UNCONDITIONAL_JUMP)  ; LAB_0049ea30
    PUSH 0x20b                          ; 0049ec4c
        ;   Label: LAB_0049ec4c
    MOV ECX,dword ptr [0x005bac64]      ; 0049ec51 | DAT_005bac64
    PUSH ECX                            ; 0049ec57 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200 ; 0049ec58
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200()
    JMP 0x0049ea58                      ; 0049ec5d
        ;   XREF to: 0049ea58 (UNCONDITIONAL_JUMP)  ; LAB_0049ea58
    PUSH 0x254                          ; 0049ec62
        ;   Label: LAB_0049ec62
    MOV EBP,dword ptr [0x005bac64]      ; 0049ec67 | DAT_005bac64
    PUSH EBP                            ; 0049ec6d | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0 ; 0049ec6e
        ;   XREF to: 004c41f0 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0()
    ADD ESP,0x8                         ; 0049ec73
    ADD ESP,0x4                         ; 0049ec76
    POP EBP                             ; 0049ec79
    POP EDI                             ; 0049ec7a
    POP ESI                             ; 0049ec7b
    POP EBX                             ; 0049ec7c
    RET                                 ; 0049ec7d

