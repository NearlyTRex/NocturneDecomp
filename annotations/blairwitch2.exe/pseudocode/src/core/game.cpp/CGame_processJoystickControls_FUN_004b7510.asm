; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b7510(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b70de
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140
;   core_game.cpp_FUN_004b76c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7510
        ;   Label: core_game.cpp_CGame_processJoystickControls_FUN_004b7510
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7511
    PUSH EDX                            ; 004b7515
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004b7516
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b751b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b751e
    PUSH ECX                            ; 004b7522
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b7523
    PUSH EBX                            ; 004b7527
    CALL core_game.cpp_FUN_004b76c0     ; 004b7528
        ;   XREF to: 004b76c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b76c0(CGame * this_ptr, SPlayerInput * player_control)
    ADD ESP,0x8                         ; 004b752d
    POP EBX                             ; 004b7530
    LEA EAX,[EAX]                       ; 004b7531
    LEA EDX,[EDX]                       ; 004b7537
    LEA EAX,[EAX]                       ; 004b753d
    RET                                 ; 004b7540

