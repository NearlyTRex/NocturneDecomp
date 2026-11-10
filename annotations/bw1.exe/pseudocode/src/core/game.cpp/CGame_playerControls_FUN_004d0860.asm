; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_playerControls_FUN_004d0860(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfa91
;
; Referenced Globals:
;   void* switchdataD_004d0848 = 004d08af
;   TerminatedCString s_core_game_cpp_005e1984
;   TerminatedCString s_CGame_playerControls_unk_005e1995
;   CFieldNotes* g_CFieldNotesPtr = 01cc8004
;   CNetGame* g_CNetGamePtr = 01d51c20
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_007c3978
;   undefined4 DAT_01c43544
;   undefined4 DAT_01c50950
;   undefined4 DAT_01c50954
;   undefined4 g_CFieldNotesInstance.field64_0x40
;   undefined4 DAT_01ccff98
;   undefined4 DAT_01ccff9c
;   undefined4 DAT_01cd01f0
;   undefined4 DAT_01cd01f4
;   ... and 5 more
;
; Called Functions:
;   core_game.cpp_CGame_processJoystickControls_FUN_004d0d30
;   core_game.cpp_CGame_processMouseControls_FUN_004d1820
;   core_game.cpp_FUN_004d0ee0
;   core_game.cpp_FUN_004d19d0
;   core_game.cpp_FUN_004d9260
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_getMyControls_FUN_00530660
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d0860
        ;   Label: core_game.cpp_CGame_playerControls_FUN_004d0860
    MOV ESI,dword ptr [ESP + 0x8]       ; 004d0861
    CMP dword ptr [0x01cd01f8],0x0      ; 004d0865 | DAT_01cd01f8
    JNZ 0x004d08a4                      ; 004d086c
        ;   XREF to: 004d08a4 (CONDITIONAL_JUMP)  ; LAB_004d08a4
    MOV EAX,[0x0061d418]                ; 004d086e | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004d0873 | g_CFieldNotesInstance.field64_0x40
    JNZ 0x004d08a4                      ; 004d0877
        ;   XREF to: 004d08a4 (CONDITIONAL_JUMP)  ; LAB_004d08a4
    CMP dword ptr [0x007c3978],0x0      ; 004d0879 | DAT_007c3978
    JNZ 0x004d08a4                      ; 004d0880
        ;   XREF to: 004d08a4 (CONDITIONAL_JUMP)  ; LAB_004d08a4
    CMP dword ptr [ESI + 0x218],0x0     ; 004d0882
    JNZ 0x004d08a2                      ; 004d0889
        ;   XREF to: 004d08a2 (CONDITIONAL_JUMP)  ; LAB_004d08a2
    CMP dword ptr [ESI + 0x254],0x0     ; 004d088b
    JZ 0x004d0936                       ; 004d0892
        ;   XREF to: 004d0936 (CONDITIONAL_JUMP)  ; LAB_004d0936
    MOV dword ptr [0x01cd0b40],0xffffffff ; 004d0898 | DAT_01cd0b40
    POP ESI                             ; 004d08a2
        ;   Label: LAB_004d08a2
    RET                                 ; 004d08a3
    PUSH ESI                            ; 004d08a4
        ;   Label: LAB_004d08a4
    CALL core_game.cpp_FUN_004d19d0     ; 004d08a5
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 004d08aa
    POP ESI                             ; 004d08ad
    RET                                 ; 004d08ae
    PUSH EAX                            ; 004d08af
        ;   Label: caseD_0
    PUSH ESI                            ; 004d08b0
    CALL core_game.cpp_FUN_004d0ee0     ; 004d08b1
        ;   XREF to: 004d0ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d0ee0(CGame * this_ptr, SPlayerInput * player_control)
    ADD ESP,0x8                         ; 004d08b6
        ;   Label: LAB_004d08b6
    PUSH EDI                            ; 004d08b9
        ;   Label: LAB_004d08b9
    MOV ECX,0x258                       ; 004d08ba
    MOV ESI,0x1c50950                   ; 004d08bf
    MOV EDI,0x1ccff98                   ; 004d08c4
    PUSH EDI                            ; 004d08c9 | DAT_01ccff98
    MOV EAX,ECX                         ; 004d08ca
    SHR ECX,0x2                         ; 004d08cc
    MOVSD.REP ES:EDI,ESI                ; 004d08cf | DAT_01c50950 | DAT_01ccff98 | DAT_01c50954
    MOV CL,AL                           ; 004d08d1
    AND CL,0x3                          ; 004d08d3
    MOVSB.REP ES:EDI,ESI                ; 004d08d6 | DAT_01c50954 | DAT_01ccff9c
    POP EDI                             ; 004d08d8
    MOV EAX,[0x01c43544]                ; 004d08d9 | DAT_01c43544
    MOV [0x01cd01f0],EAX                ; 004d08de | DAT_01cd01f0
    MOV EAX,[0x00622c18]                ; 004d08e3 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d08e8 | g_CDemonSetInstance.selected_camera_index
    MOV [0x01cd01f4],EAX                ; 004d08ee | DAT_01cd01f4
    POP EDI                             ; 004d08f3
    POP ESI                             ; 004d08f4
    RET                                 ; 004d08f5
    PUSH EAX                            ; 004d08f6
        ;   Label: caseD_2
    PUSH ESI                            ; 004d08f7
    CALL core_game.cpp_CGame_processJoystickControls_FUN_004d0d30 ; 004d08f8
        ;   XREF to: 004d0d30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processJoystickControls_FUN_004d0d30(CGame * this_ptr, SPlayerInput * player_control)
    JMP 0x004d08b6                      ; 004d08fd
        ;   XREF to: 004d08b6 (UNCONDITIONAL_JUMP)  ; LAB_004d08b6
    PUSH EAX                            ; 004d08ff
        ;   Label: caseD_1
    PUSH ESI                            ; 004d0900
    CALL core_game.cpp_CGame_processMouseControls_FUN_004d1820 ; 004d0901
        ;   XREF to: 004d1820 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processMouseControls_FUN_004d1820(CGame * this_ptr, SPlayerInput * player_control)
    JMP 0x004d08b6                      ; 004d0906
        ;   XREF to: 004d08b6 (UNCONDITIONAL_JUMP)  ; LAB_004d08b6
    PUSH EAX                            ; 004d0908
        ;   Label: caseD_3
    PUSH ESI                            ; 004d0909
    CALL core_game.cpp_FUN_004d9260     ; 004d090a
        ;   XREF to: 004d9260 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d9260()
    JMP 0x004d08b6                      ; 004d090f
        ;   XREF to: 004d08b6 (UNCONDITIONAL_JUMP)  ; LAB_004d08b6
    MOV EDX,0x5e1984                    ; 004d0911 | = "..\\core\\game.cpp"
        ;   Label: default
    MOV ECX,0x87c                       ; 004d0916
    PUSH 0x5e1995                       ; 004d091b | = "CGame::playerControls - unknown contr..."
    MOV dword ptr [0x01d1d400],EDX      ; 004d0920 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004d0926 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d092c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004d0931
    JMP 0x004d08b9                      ; 004d0934
        ;   XREF to: 004d08b9 (UNCONDITIONAL_JUMP)  ; LAB_004d08b9
    MOV EAX,[0x00622580]                ; 004d0936 | g_CNetGamePtr
        ;   Label: LAB_004d0936
    PUSH EAX                            ; 004d093b
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_00530660 ; 004d093c
        ;   XREF to: 00530660 (UNCONDITIONAL_CALL)  ; SPlayerInput * core_netgame.cpp_CNetGame_getMyControls_FUN_00530660(CNetGame * this_ptr)
    MOV EDX,dword ptr [ESI + 0xd0]      ; 004d0941
    ADD ESP,0x4                         ; 004d0947
    CMP EDX,0x3                         ; 004d094a
    JA 0x004d0911                       ; 004d094d
        ;   XREF to: 004d0911 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4d0848]  ; 004d094f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

