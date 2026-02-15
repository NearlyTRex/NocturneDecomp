; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3812
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3c9d
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e404c
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 at 004daf16
;   core_inv.cpp_staticInit_FUN_004fcc30 at 004fcc83
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0 at 00503e94
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005080ae
;   core_main.c_staticInit_FUN_00506e80 at 00506ec4
;   core_menu.cpp_staticInit_FUN_0050fdb0 at 0050fe24
;   core_moon.cpp_staticInit_FUN_005299f0 at 005299f5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410520
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
    MOV dword ptr [EAX + 0x4],0x0       ; 00410524
    MOV dword ptr [EAX + 0x8],0x0       ; 0041052b
    MOV dword ptr [EAX],0x0             ; 00410532
    RET                                 ; 00410538

