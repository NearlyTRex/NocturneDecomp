; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CallToJoystickStuff_FUN_004dc230(CGame *this_ptr,int unk1,SPlayerControl *unk)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   unk1
; SPlayerControl * Stack[0xc]:4   unk
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004dbd80 at 004dbdfd
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc230
        ;   Label: core_game.cpp_CallToJoystickStuff_FUN_004dc230
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc231
    PUSH EDX                            ; 004dc235
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 004dc236
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_004dbe60()
    ADD ESP,0x4                         ; 004dc23b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004dc23e
    PUSH ECX                            ; 004dc242
    MOV EBX,dword ptr [ESP + 0xc]       ; 004dc243
    PUSH EBX                            ; 004dc247
    CALL core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 ; 004dc248
        ;   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_KeypressesAndCGame_FUN_004dc3e0(CGame * game, SPlayerControl * ctrl)
    ADD ESP,0x8                         ; 004dc24d
    POP EBX                             ; 004dc250
    LEA EAX,[EAX]                       ; 004dc251
    LEA EDX,[EDX]                       ; 004dc257
    LEA EAX,[EAX]                       ; 004dc25d
    RET                                 ; 004dc260

