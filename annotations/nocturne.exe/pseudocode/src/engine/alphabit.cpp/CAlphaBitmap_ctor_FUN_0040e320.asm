; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(undefined4 *param_1)
;
;
; XREF[10]:
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a6692
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6b1d
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6ecc
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 at 0049d9a6
;   core_inv.cpp_staticInit_FUN_004be9d0 at 004be9d5
;   core_level.cpp_CLevelLoader_show_FUN_004c5640 at 004c5714
;   core_main.c_FUN_004c85f0 at 004c8c1e
;   core_main.c_staticInit_FUN_004c83d0 at 004c83d5
;   core_menu.cpp_staticInit_FUN_004cf1f0 at 004cf230
;   core_moon.cpp_staticInit_FUN_004de770 at 004de775
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e320
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
    MOV dword ptr [EAX + 0x4],0x0       ; 0040e324
    MOV dword ptr [EAX + 0x8],0x0       ; 0040e32b
    MOV dword ptr [EAX],0x0             ; 0040e332
    RET                                 ; 0040e338

