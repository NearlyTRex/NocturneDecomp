; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004c85f0 at 004c8c6d
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a69fb
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6e7e
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a715e
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 at 0049d9ec
;   core_level.cpp_CLevelLoader_show_FUN_004c5640 at 004c57a2
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e340
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e341
    PUSH EBX                            ; 0040e345
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 0040e346
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360()
    ADD ESP,0x4                         ; 0040e34b
    MOV EAX,EBX                         ; 0040e34e
    POP EBX                             ; 0040e350
    RET                                 ; 0040e351

