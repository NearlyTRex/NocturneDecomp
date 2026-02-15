; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.game_control
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513860
        ;   Label: core_menu.cpp_getSinglePressedKey_FUN_00513860
    PUSH ESI                            ; 00513861
    MOV EAX,[0x0067b654]                ; 00513862 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xbc],0x2      ; 00513867 | g_CGameInstance.game_control
    JZ 0x00513895                       ; 0051386e
        ;   XREF to: 00513895 (CONDITIONAL_JUMP)  ; LAB_00513895
    MOV ESI,0xffffffff                  ; 00513870
        ;   Label: LAB_00513870
    XOR EBX,EBX                         ; 00513875
    PUSH EBX                            ; 00513877
        ;   Label: LAB_00513877
    MOV EAX,[0x0067cf44]                ; 00513878 | g_CKeysPtr
    PUSH EAX                            ; 0051387d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051387e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00513880
    ADD ESP,0x8                         ; 00513882
    TEST EAX,EAX                        ; 00513885
    JZ 0x005138a0                       ; 00513887
        ;   XREF to: 005138a0 (CONDITIONAL_JUMP)  ; LAB_005138a0
    TEST ESI,ESI                        ; 00513889
    JL 0x005138ae                       ; 0051388b
        ;   XREF to: 005138ae (CONDITIONAL_JUMP)  ; LAB_005138ae
    MOV EAX,0xfffffffe                  ; 0051388d
    POP ESI                             ; 00513892
    POP EBX                             ; 00513893
    RET                                 ; 00513894
    PUSH EAX                            ; 00513895 | g_CGameInstance
        ;   Label: LAB_00513895
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 00513896
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051389b
    JMP 0x00513870                      ; 0051389e
        ;   XREF to: 00513870 (UNCONDITIONAL_JUMP)  ; LAB_00513870
    INC EBX                             ; 005138a0
        ;   Label: LAB_005138a0
    CMP EBX,0x258                       ; 005138a1
    JL 0x00513877                       ; 005138a7
        ;   XREF to: 00513877 (CONDITIONAL_JUMP)  ; LAB_00513877
    MOV EAX,ESI                         ; 005138a9
    POP ESI                             ; 005138ab
    POP EBX                             ; 005138ac
    RET                                 ; 005138ad
    MOV ESI,EBX                         ; 005138ae
        ;   Label: LAB_005138ae
    INC EBX                             ; 005138b0
    CMP EBX,0x258                       ; 005138b1
    JL 0x00513877                       ; 005138b7
        ;   XREF to: 00513877 (CONDITIONAL_JUMP)  ; LAB_00513877
    MOV EAX,ESI                         ; 005138b9
    POP ESI                             ; 005138bb
    POP EBX                             ; 005138bc
    RET                                 ; 005138bd

