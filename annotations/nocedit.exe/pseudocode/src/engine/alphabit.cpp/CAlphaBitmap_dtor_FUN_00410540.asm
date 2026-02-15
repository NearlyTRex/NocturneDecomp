; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3b7b
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3ffe
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e42ea
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 at 004daf5c
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0 at 00503f22
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005080fd
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410540
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410541
    PUSH EBX                            ; 00410545
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00410546
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0041054b
    MOV EAX,EBX                         ; 0041054e
    POP EBX                             ; 00410550
    RET                                 ; 00410551

