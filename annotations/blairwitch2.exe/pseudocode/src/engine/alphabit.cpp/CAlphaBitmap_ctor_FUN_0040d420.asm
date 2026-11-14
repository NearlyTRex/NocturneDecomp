; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[18]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_0059be60 at 0059be71
;   core_bmppuzzl.cpp_SButtonStruct_ctor_FUN_0059bf30 at 0059bf35
;   core_bmppuzzl.cpp_staticInit_FUN_0059aa80 at 0059aad8
;   core_flashlit.cpp_FUN_004a1200 at 004a1247
;   core_fldnotes.cpp_SNotesMap_ctor_FUN_004a37c0 at 004a37c9
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170 at 004a218c
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140 at 004a2151
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be0ba
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be472
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b6109
;   ... and 8 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d420
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d424
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d42b
    MOV dword ptr [EAX],0x0             ; 0040d432
    RET                                 ; 0040d438

