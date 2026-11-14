; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004d0960(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_CGame_processJoystickControls_FUN_004d0d30 at 004d0d36
;   core_game.cpp_FUN_004d77d0 at 004d7b9a
;   core_menu.cpp_FUN_0050d5b0 at 0050d5e6
;   core_menu.cpp_FUN_0050d640 at 0050e86a
;   core_menu.cpp_calibrateGamepad_FUN_0050a2b0 at 0050a38e
;
; Referenced Globals:
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c51cb0
;   undefined4 DAT_01c51cb4
;   undefined4 DAT_01c51cc0
;   undefined4 DAT_01c51cc1
;   undefined4 DAT_01c51cc4
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0
;   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290
;   wincore_winrun.cpp_getJoystickState_FUN_005b3b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0960
        ;   Label: core_game.cpp_CGame_resetKeyState_FUN_004d0960
    PUSH ESI                            ; 004d0961
    PUSH EDI                            ; 004d0962
    PUSH EBP                            ; 004d0963
    SUB ESP,0x4                         ; 004d0964
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d0967
    MOV EAX,[0x01c51cc0]                ; 004d096b | DAT_01c51cc0
    MOV EDX,0x2                         ; 004d0970
    MOV dword ptr [ESP],EAX             ; 004d0975
    MOV dword ptr [0x01c51cc4],EDX      ; 004d0978 | DAT_01c51cc4
    CALL wincore_winrun.cpp_getJoystickState_FUN_005b3b30 ; 004d097e
        ;   XREF to: 005b3b30 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_getJoystickState_FUN_005b3b30()
    TEST byte ptr [0x01c51cc0],0x1      ; 004d0983 | DAT_01c51cc0
    JZ 0x004d0c39                       ; 004d098a
        ;   XREF to: 004d0c39 (CONDITIONAL_JUMP)  ; LAB_004d0c39
    TEST byte ptr [ESP],0x1             ; 004d0990
    JNZ 0x004d09aa                      ; 004d0994
        ;   XREF to: 004d09aa (CONDITIONAL_JUMP)  ; LAB_004d09aa
    PUSH 0x202                          ; 004d0996
    MOV ESI,dword ptr [0x0061f2a4]      ; 004d099b | DAT_0061f2a4
    PUSH ESI                            ; 004d09a1 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d09a2
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d09a7
        ;   Label: LAB_004d09a7
    TEST byte ptr [0x01c51cc0],0x2      ; 004d09aa | DAT_01c51cc0
        ;   Label: LAB_004d09aa
    JZ 0x004d0c4f                       ; 004d09b1
        ;   XREF to: 004d0c4f (CONDITIONAL_JUMP)  ; LAB_004d0c4f
    TEST byte ptr [ESP],0x2             ; 004d09b7
    JNZ 0x004d09d1                      ; 004d09bb
        ;   XREF to: 004d09d1 (CONDITIONAL_JUMP)  ; LAB_004d09d1
    PUSH 0x203                          ; 004d09bd
    MOV EBP,dword ptr [0x0061f2a4]      ; 004d09c2 | DAT_0061f2a4
    PUSH EBP                            ; 004d09c8 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d09c9
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d09ce
        ;   Label: LAB_004d09ce
    TEST byte ptr [0x01c51cc0],0x4      ; 004d09d1 | DAT_01c51cc0
        ;   Label: LAB_004d09d1
    JZ 0x004d0c65                       ; 004d09d8
        ;   XREF to: 004d0c65 (CONDITIONAL_JUMP)  ; LAB_004d0c65
    TEST byte ptr [ESP],0x4             ; 004d09de
    JNZ 0x004d09f8                      ; 004d09e2
        ;   XREF to: 004d09f8 (CONDITIONAL_JUMP)  ; LAB_004d09f8
    PUSH 0x204                          ; 004d09e4
    MOV EDX,dword ptr [0x0061f2a4]      ; 004d09e9 | DAT_0061f2a4
    PUSH EDX                            ; 004d09ef | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d09f0
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d09f5
        ;   Label: LAB_004d09f5
    TEST byte ptr [0x01c51cc0],0x8      ; 004d09f8 | DAT_01c51cc0
        ;   Label: LAB_004d09f8
    JZ 0x004d0c7a                       ; 004d09ff
        ;   XREF to: 004d0c7a (CONDITIONAL_JUMP)  ; LAB_004d0c7a
    TEST byte ptr [ESP],0x8             ; 004d0a05
    JNZ 0x004d0a1f                      ; 004d0a09
        ;   XREF to: 004d0a1f (CONDITIONAL_JUMP)  ; LAB_004d0a1f
    PUSH 0x205                          ; 004d0a0b
    MOV ESI,dword ptr [0x0061f2a4]      ; 004d0a10 | DAT_0061f2a4
    PUSH ESI                            ; 004d0a16 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0a17
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0a1c
        ;   Label: LAB_004d0a1c
    TEST byte ptr [0x01c51cc0],0x10     ; 004d0a1f | DAT_01c51cc0
        ;   Label: LAB_004d0a1f
    JZ 0x004d0c90                       ; 004d0a26
        ;   XREF to: 004d0c90 (CONDITIONAL_JUMP)  ; LAB_004d0c90
    TEST byte ptr [ESP],0x10            ; 004d0a2c
    JNZ 0x004d0a46                      ; 004d0a30
        ;   XREF to: 004d0a46 (CONDITIONAL_JUMP)  ; LAB_004d0a46
    PUSH 0x206                          ; 004d0a32
    MOV EBP,dword ptr [0x0061f2a4]      ; 004d0a37 | DAT_0061f2a4
    PUSH EBP                            ; 004d0a3d | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0a3e
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0a43
        ;   Label: LAB_004d0a43
    TEST byte ptr [0x01c51cc0],0x20     ; 004d0a46 | DAT_01c51cc0
        ;   Label: LAB_004d0a46
    JZ 0x004d0ca6                       ; 004d0a4d
        ;   XREF to: 004d0ca6 (CONDITIONAL_JUMP)  ; LAB_004d0ca6
    TEST byte ptr [ESP],0x20            ; 004d0a53
    JNZ 0x004d0a6d                      ; 004d0a57
        ;   XREF to: 004d0a6d (CONDITIONAL_JUMP)  ; LAB_004d0a6d
    PUSH 0x207                          ; 004d0a59
    MOV EDX,dword ptr [0x0061f2a4]      ; 004d0a5e | DAT_0061f2a4
    PUSH EDX                            ; 004d0a64 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0a65
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0a6a
        ;   Label: LAB_004d0a6a
    TEST byte ptr [0x01c51cc0],0x40     ; 004d0a6d | DAT_01c51cc0
        ;   Label: LAB_004d0a6d
    JZ 0x004d0cbb                       ; 004d0a74
        ;   XREF to: 004d0cbb (CONDITIONAL_JUMP)  ; LAB_004d0cbb
    TEST byte ptr [ESP],0x40            ; 004d0a7a
    JNZ 0x004d0a94                      ; 004d0a7e
        ;   XREF to: 004d0a94 (CONDITIONAL_JUMP)  ; LAB_004d0a94
    PUSH 0x208                          ; 004d0a80
    MOV ESI,dword ptr [0x0061f2a4]      ; 004d0a85 | DAT_0061f2a4
    PUSH ESI                            ; 004d0a8b | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0a8c
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0a91
        ;   Label: LAB_004d0a91
    TEST byte ptr [0x01c51cc0],0x80     ; 004d0a94 | DAT_01c51cc0
        ;   Label: LAB_004d0a94
    JZ 0x004d0cd1                       ; 004d0a9b
        ;   XREF to: 004d0cd1 (CONDITIONAL_JUMP)  ; LAB_004d0cd1
    TEST byte ptr [ESP],0x80            ; 004d0aa1
    JNZ 0x004d0abb                      ; 004d0aa5
        ;   XREF to: 004d0abb (CONDITIONAL_JUMP)  ; LAB_004d0abb
    PUSH 0x209                          ; 004d0aa7
    MOV EBP,dword ptr [0x0061f2a4]      ; 004d0aac | DAT_0061f2a4
    PUSH EBP                            ; 004d0ab2 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0ab3
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0ab8
        ;   Label: LAB_004d0ab8
    TEST byte ptr [0x01c51cc1],0x1      ; 004d0abb | DAT_01c51cc1
        ;   Label: LAB_004d0abb
    JZ 0x004d0ce7                       ; 004d0ac2
        ;   XREF to: 004d0ce7 (CONDITIONAL_JUMP)  ; LAB_004d0ce7
    TEST byte ptr [ESP + 0x1],0x1       ; 004d0ac8
    JNZ 0x004d0ae3                      ; 004d0acd
        ;   XREF to: 004d0ae3 (CONDITIONAL_JUMP)  ; LAB_004d0ae3
    PUSH 0x20a                          ; 004d0acf
    MOV EDX,dword ptr [0x0061f2a4]      ; 004d0ad4 | DAT_0061f2a4
    PUSH EDX                            ; 004d0ada | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0adb
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0ae0
        ;   Label: LAB_004d0ae0
    TEST byte ptr [0x01c51cc1],0x2      ; 004d0ae3 | DAT_01c51cc1
        ;   Label: LAB_004d0ae3
    JZ 0x004d0cfc                       ; 004d0aea
        ;   XREF to: 004d0cfc (CONDITIONAL_JUMP)  ; LAB_004d0cfc
    TEST byte ptr [ESP + 0x1],0x2       ; 004d0af0
    JNZ 0x004d0b0b                      ; 004d0af5
        ;   XREF to: 004d0b0b (CONDITIONAL_JUMP)  ; LAB_004d0b0b
    PUSH 0x20b                          ; 004d0af7
    MOV ESI,dword ptr [0x0061f2a4]      ; 004d0afc | DAT_0061f2a4
    PUSH ESI                            ; 004d0b02 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0b03
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0b08
        ;   Label: LAB_004d0b08
    PUSH 0x251                          ; 004d0b0b
        ;   Label: LAB_004d0b0b
    MOV EDI,dword ptr [0x0061f2a4]      ; 004d0b10 | DAT_0061f2a4
    PUSH EDI                            ; 004d0b16 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0b17
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0b1c
    PUSH 0x252                          ; 004d0b1f
    MOV EBP,dword ptr [0x0061f2a4]      ; 004d0b24 | DAT_0061f2a4
    PUSH EBP                            ; 004d0b2a | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0b2b
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0b30
    PUSH 0x253                          ; 004d0b33
    MOV EAX,[0x0061f2a4]                ; 004d0b38 | DAT_0061f2a4
    PUSH EAX                            ; 004d0b3d | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0b3e
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0b43
    PUSH 0x254                          ; 004d0b46
    MOV EDX,dword ptr [0x0061f2a4]      ; 004d0b4b | DAT_0061f2a4
    PUSH EDX                            ; 004d0b51 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0b52
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004d0b57
    MOV ECX,dword ptr [EBX + 0xc0]      ; 004d0b5d
    SUB EDX,ECX                         ; 004d0b63
    MOV EAX,EDX                         ; 004d0b65
    SAR EDX,0x1f                        ; 004d0b67
    SUB EAX,EDX                         ; 004d0b6a
    SAR EAX,0x1                         ; 004d0b6c
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004d0b6e
    MOV ESI,dword ptr [0x01c51cb0]      ; 004d0b74 | DAT_01c51cb0
    SUB EDX,EAX                         ; 004d0b7a
    ADD ESP,0x8                         ; 004d0b7c
    CMP EDX,ESI                         ; 004d0b7f
    JLE 0x004d0b97                      ; 004d0b81
        ;   XREF to: 004d0b97 (CONDITIONAL_JUMP)  ; LAB_004d0b97
    PUSH 0x251                          ; 004d0b83
    MOV EDI,dword ptr [0x0061f2a4]      ; 004d0b88 | DAT_0061f2a4
    PUSH EDI                            ; 004d0b8e | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0b8f
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0b94
    MOV EBP,dword ptr [EBX + 0xb8]      ; 004d0b97
        ;   Label: LAB_004d0b97
    MOV EDX,dword ptr [EBX + 0xc4]      ; 004d0b9d
    SUB EDX,EBP                         ; 004d0ba3
    MOV EAX,EDX                         ; 004d0ba5
    SAR EDX,0x1f                        ; 004d0ba7
    SUB EAX,EDX                         ; 004d0baa
    SAR EAX,0x1                         ; 004d0bac
    MOV ECX,dword ptr [0x01c51cb0]      ; 004d0bae | DAT_01c51cb0
    ADD EAX,EBP                         ; 004d0bb4
    CMP EAX,ECX                         ; 004d0bb6
    JGE 0x004d0bce                      ; 004d0bb8
        ;   XREF to: 004d0bce (CONDITIONAL_JUMP)  ; LAB_004d0bce
    PUSH 0x252                          ; 004d0bba
    MOV ESI,dword ptr [0x0061f2a4]      ; 004d0bbf | DAT_0061f2a4
    PUSH ESI                            ; 004d0bc5 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0bc6
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0bcb
    MOV EDI,dword ptr [EBX + 0xc8]      ; 004d0bce
        ;   Label: LAB_004d0bce
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004d0bd4
    SUB EDX,EDI                         ; 004d0bda
    MOV EAX,EDX                         ; 004d0bdc
    SAR EDX,0x1f                        ; 004d0bde
    SUB EAX,EDX                         ; 004d0be1
    SAR EAX,0x1                         ; 004d0be3
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004d0be5
    MOV EBP,dword ptr [0x01c51cb4]      ; 004d0beb | DAT_01c51cb4
    SUB EDX,EAX                         ; 004d0bf1
    CMP EDX,EBP                         ; 004d0bf3
    JLE 0x004d0c0a                      ; 004d0bf5
        ;   XREF to: 004d0c0a (CONDITIONAL_JUMP)  ; LAB_004d0c0a
    PUSH 0x253                          ; 004d0bf7
    MOV EAX,[0x0061f2a4]                ; 004d0bfc | DAT_0061f2a4
    PUSH EAX                            ; 004d0c01 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0c02
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0c07
    MOV ECX,dword ptr [EBX + 0xbc]      ; 004d0c0a
        ;   Label: LAB_004d0c0a
    MOV EDX,dword ptr [EBX + 0xcc]      ; 004d0c10
    SUB EDX,ECX                         ; 004d0c16
    MOV EAX,EDX                         ; 004d0c18
    SAR EDX,0x1f                        ; 004d0c1a
    SUB EAX,EDX                         ; 004d0c1d
    SAR EAX,0x1                         ; 004d0c1f
    MOV EDI,dword ptr [0x01c51cb4]      ; 004d0c21 | DAT_01c51cb4
    ADD EAX,ECX                         ; 004d0c27
    CMP EAX,EDI                         ; 004d0c29
    JL 0x004d0d12                       ; 004d0c2b
        ;   XREF to: 004d0d12 (CONDITIONAL_JUMP)  ; LAB_004d0d12
    ADD ESP,0x4                         ; 004d0c31
    POP EBP                             ; 004d0c34
    POP EDI                             ; 004d0c35
    POP ESI                             ; 004d0c36
    POP EBX                             ; 004d0c37
    RET                                 ; 004d0c38
    PUSH 0x202                          ; 004d0c39
        ;   Label: LAB_004d0c39
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d0c3e | DAT_0061f2a4
    PUSH ECX                            ; 004d0c44 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0c45
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d09a7                      ; 004d0c4a
        ;   XREF to: 004d09a7 (UNCONDITIONAL_JUMP)  ; LAB_004d09a7
    PUSH 0x203                          ; 004d0c4f
        ;   Label: LAB_004d0c4f
    MOV EDI,dword ptr [0x0061f2a4]      ; 004d0c54 | DAT_0061f2a4
    PUSH EDI                            ; 004d0c5a | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0c5b
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d09ce                      ; 004d0c60
        ;   XREF to: 004d09ce (UNCONDITIONAL_JUMP)  ; LAB_004d09ce
    PUSH 0x204                          ; 004d0c65
        ;   Label: LAB_004d0c65
    MOV EAX,[0x0061f2a4]                ; 004d0c6a | DAT_0061f2a4
    PUSH EAX                            ; 004d0c6f | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0c70
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d09f5                      ; 004d0c75
        ;   XREF to: 004d09f5 (UNCONDITIONAL_JUMP)  ; LAB_004d09f5
    PUSH 0x205                          ; 004d0c7a
        ;   Label: LAB_004d0c7a
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d0c7f | DAT_0061f2a4
    PUSH ECX                            ; 004d0c85 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0c86
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0a1c                      ; 004d0c8b
        ;   XREF to: 004d0a1c (UNCONDITIONAL_JUMP)  ; LAB_004d0a1c
    PUSH 0x206                          ; 004d0c90
        ;   Label: LAB_004d0c90
    MOV EDI,dword ptr [0x0061f2a4]      ; 004d0c95 | DAT_0061f2a4
    PUSH EDI                            ; 004d0c9b | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0c9c
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0a43                      ; 004d0ca1
        ;   XREF to: 004d0a43 (UNCONDITIONAL_JUMP)  ; LAB_004d0a43
    PUSH 0x207                          ; 004d0ca6
        ;   Label: LAB_004d0ca6
    MOV EAX,[0x0061f2a4]                ; 004d0cab | DAT_0061f2a4
    PUSH EAX                            ; 004d0cb0 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0cb1
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0a6a                      ; 004d0cb6
        ;   XREF to: 004d0a6a (UNCONDITIONAL_JUMP)  ; LAB_004d0a6a
    PUSH 0x208                          ; 004d0cbb
        ;   Label: LAB_004d0cbb
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d0cc0 | DAT_0061f2a4
    PUSH ECX                            ; 004d0cc6 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0cc7
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0a91                      ; 004d0ccc
        ;   XREF to: 004d0a91 (UNCONDITIONAL_JUMP)  ; LAB_004d0a91
    PUSH 0x209                          ; 004d0cd1
        ;   Label: LAB_004d0cd1
    MOV EDI,dword ptr [0x0061f2a4]      ; 004d0cd6 | DAT_0061f2a4
    PUSH EDI                            ; 004d0cdc | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0cdd
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0ab8                      ; 004d0ce2
        ;   XREF to: 004d0ab8 (UNCONDITIONAL_JUMP)  ; LAB_004d0ab8
    PUSH 0x20a                          ; 004d0ce7
        ;   Label: LAB_004d0ce7
    MOV EAX,[0x0061f2a4]                ; 004d0cec | DAT_0061f2a4
    PUSH EAX                            ; 004d0cf1 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0cf2
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0ae0                      ; 004d0cf7
        ;   XREF to: 004d0ae0 (UNCONDITIONAL_JUMP)  ; LAB_004d0ae0
    PUSH 0x20b                          ; 004d0cfc
        ;   Label: LAB_004d0cfc
    MOV ECX,dword ptr [0x0061f2a4]      ; 004d0d01 | DAT_0061f2a4
    PUSH ECX                            ; 004d0d07 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0 ; 004d0d08
        ;   XREF to: 004fd2a0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004d0b08                      ; 004d0d0d
        ;   XREF to: 004d0b08 (UNCONDITIONAL_JUMP)  ; LAB_004d0b08
    PUSH 0x254                          ; 004d0d12
        ;   Label: LAB_004d0d12
    MOV EBP,dword ptr [0x0061f2a4]      ; 004d0d17 | DAT_0061f2a4
    PUSH EBP                            ; 004d0d1d | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290 ; 004d0d1e
        ;   XREF to: 004fd290 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004d0d23
    ADD ESP,0x4                         ; 004d0d26
    POP EBP                             ; 004d0d29
    POP EDI                             ; 004d0d2a
    POP ESI                             ; 004d0d2b
    POP EBX                             ; 004d0d2c
    RET                                 ; 004d0d2d

