; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
;
; Parameters:
; CGame *          Stack[0x4]:4   n1
; CGame *          Stack[0x8]:4   n2
;
; XREF[26]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043c903
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d5d6
;   core_course.cpp_FUN_00443bc0 at 00443c0b
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cc04
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3bd8
;   core_game.cpp_CGame_openSomething_FUN_004e2910 at 004e2ebe
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3685
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4156
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db64a
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 005118af
;   ... and 16 more
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004d7d80
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: core_game.cpp_CGame_saveClockTime_FUN_004d7d80
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d7d85
    MOV dword ptr [EDX + 0x25c],EAX     ; 004d7d89
    RET                                 ; 004d7d8f

