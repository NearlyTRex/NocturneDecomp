; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004cbf10(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d856b
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8f87
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf983
;   core_game.cpp_FUN_004d77d0 at 004d7d9f
;   core_menu.cpp_FUN_0050b470 at 0050b48f
;   core_menu.cpp_FUN_0050ba70 at 0050ba8f
;   core_menu.cpp_FUN_0050c990 at 0050c9b4
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050aaaa
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cd58
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004cbf10
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: core_game.cpp_CGame_saveClockTime_FUN_004cbf10
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cbf15
    MOV dword ptr [EDX + 0x28c],EAX     ; 004cbf19
    RET                                 ; 004cbf1f

