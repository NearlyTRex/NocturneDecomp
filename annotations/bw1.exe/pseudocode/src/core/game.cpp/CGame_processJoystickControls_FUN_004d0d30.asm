; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004d0d30(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004d0860 at 004d08f8
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960
;   core_game.cpp_FUN_004d0ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0d30
        ;   Label: core_game.cpp_CGame_processJoystickControls_FUN_004d0d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0d31
    PUSH EDX                            ; 004d0d35
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 004d0d36
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d0d3b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d0d3e
    PUSH ECX                            ; 004d0d42
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d0d43
    PUSH EBX                            ; 004d0d47
    CALL core_game.cpp_FUN_004d0ee0     ; 004d0d48
        ;   XREF to: 004d0ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d0ee0(CGame * this_ptr, SPlayerInput * player_control)
    ADD ESP,0x8                         ; 004d0d4d
    POP EBX                             ; 004d0d50
    LEA EAX,[EAX]                       ; 004d0d51
    LEA EDX,[EDX]                       ; 004d0d57
    LEA EAX,[EAX]                       ; 004d0d5d
    RET                                 ; 004d0d60

