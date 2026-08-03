; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004d2c80(void)
;
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.game_control
;   CKeys g_CKeys_01cc30e4
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2c80
        ;   Label: core_menu.cpp_getSinglePressedKey_FUN_004d2c80
    PUSH ESI                            ; 004d2c81
    MOV EAX,[0x005b9354]                ; 004d2c82 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d2c87 | g_CGame_01c775ec.game_control
    JZ 0x004d2cb5                       ; 004d2c8e
        ;   XREF to: 004d2cb5 (CONDITIONAL_JUMP)  ; LAB_004d2cb5
    MOV ESI,0xffffffff                  ; 004d2c90
        ;   Label: LAB_004d2c90
    XOR EBX,EBX                         ; 004d2c95
    PUSH EBX                            ; 004d2c97
        ;   Label: LAB_004d2c97
    MOV EAX,[0x005bac64]                ; 004d2c98 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d2c9d | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d2c9e | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 004d2ca0
    ADD ESP,0x8                         ; 004d2ca2
    TEST EAX,EAX                        ; 004d2ca5
    JZ 0x004d2cc0                       ; 004d2ca7
        ;   XREF to: 004d2cc0 (CONDITIONAL_JUMP)  ; LAB_004d2cc0
    TEST ESI,ESI                        ; 004d2ca9
    JL 0x004d2cce                       ; 004d2cab
        ;   XREF to: 004d2cce (CONDITIONAL_JUMP)  ; LAB_004d2cce
    MOV EAX,0xfffffffe                  ; 004d2cad
    POP ESI                             ; 004d2cb2
    POP EBX                             ; 004d2cb3
    RET                                 ; 004d2cb4
    PUSH EAX                            ; 004d2cb5 | g_CGame_01c775ec
        ;   Label: LAB_004d2cb5
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004d2cb6
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_0049e8b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d2cbb
    JMP 0x004d2c90                      ; 004d2cbe
        ;   XREF to: 004d2c90 (UNCONDITIONAL_JUMP)  ; LAB_004d2c90
    INC EBX                             ; 004d2cc0
        ;   Label: LAB_004d2cc0
    CMP EBX,0x258                       ; 004d2cc1
    JL 0x004d2c97                       ; 004d2cc7
        ;   XREF to: 004d2c97 (CONDITIONAL_JUMP)  ; LAB_004d2c97
    MOV EAX,ESI                         ; 004d2cc9
    POP ESI                             ; 004d2ccb
    POP EBX                             ; 004d2ccc
    RET                                 ; 004d2ccd
    MOV ESI,EBX                         ; 004d2cce
        ;   Label: LAB_004d2cce
    INC EBX                             ; 004d2cd0
    CMP EBX,0x258                       ; 004d2cd1
    JL 0x004d2c97                       ; 004d2cd7
        ;   XREF to: 004d2c97 (CONDITIONAL_JUMP)  ; LAB_004d2c97
    MOV EAX,ESI                         ; 004d2cd9
    POP ESI                             ; 004d2cdb
    POP EBX                             ; 004d2cdc
    RET                                 ; 004d2cdd

