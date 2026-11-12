; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[11]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0 at 0059bee0
;   core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_0059bf40 at 0059bf47
;   core_fldnotes.cpp_SNotesMap_dtor_FUN_004a3820 at 004a3837
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200 at 004a2222
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be41e
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be77a
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b614f
;   core_game.cpp_FUN_004bdc1e at 004bdf9b
;   core_level.cpp_FUN_004e1480 at 004e15b5
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4ca5
;   ... and 1 more
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d440
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d441
    PUSH EBX                            ; 0040d445
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0040d446
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d44b
    MOV EAX,EBX                         ; 0040d44e
    POP EBX                             ; 0040d450
    RET                                 ; 0040d451

