; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_004b97b0(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b92e0 at 004b9378
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b93e0
;   core_game.cpp_FUN_004b9960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b97b0
        ;   Label: core_game.cpp_CGame_processJoystickControls_FUN_004b97b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b97b1
    PUSH EDX                            ; 004b97b5
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b93e0 ; 004b97b6
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b93e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b97bb
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b97be
    PUSH ECX                            ; 004b97c2
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b97c3
    PUSH EBX                            ; 004b97c7
    CALL core_game.cpp_FUN_004b9960     ; 004b97c8
        ;   XREF to: 004b9960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b9960(CGame * this_ptr, SPlayerInput * player_control)
    ADD ESP,0x8                         ; 004b97cd
    POP EBX                             ; 004b97d0
    LEA EAX,[EAX]                       ; 004b97d1
    LEA EDX,[EDX]                       ; 004b97d7
    LEA EAX,[EAX]                       ; 004b97dd
    RET                                 ; 004b97e0

