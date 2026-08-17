; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_game.cpp_CGame_FUN_004a57c0 at 004a5d4b
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6a58
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6505
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6fc7
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd87
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d0d3f
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d009a
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d12ff
;   core_menu.cpp_showMainGameMenu_FUN_004d23d0 at 004d2498
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d21e4
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0049a890
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: core_game.cpp_CGame_saveClockTime_FUN_0049a890
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049a895
    MOV dword ptr [EDX + 0x25c],EAX     ; 0049a899
    RET                                 ; 0049a89f

