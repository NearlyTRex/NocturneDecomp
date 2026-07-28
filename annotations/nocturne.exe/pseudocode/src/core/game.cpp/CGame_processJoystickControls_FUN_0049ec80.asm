; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0 at 0049e84d
;
; Called Functions:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ec80
        ;   Label: core_game.cpp_CGame_processJoystickControls_FUN_0049ec80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ec81
    PUSH EDX                            ; 0049ec85
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 0049ec86
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_0049e8b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049ec8b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049ec8e
    PUSH ECX                            ; 0049ec92
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049ec93
    PUSH EBX                            ; 0049ec97
    CALL core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 ; 0049ec98
        ;   XREF to: 0049ee30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30(CGame * this_ptr, SPlayerInput * player_control)
    ADD ESP,0x8                         ; 0049ec9d
    POP EBX                             ; 0049eca0
    LEA EAX,[EAX]                       ; 0049eca1
    LEA EDX,[EDX]                       ; 0049eca7
    LEA EAX,[EAX]                       ; 0049ecad
    RET                                 ; 0049ecb0

