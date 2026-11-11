; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_fldnotes.cpp_SNotesMap_ctor_FUN_004a9e10 at 004a9e19
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a8680 at 004a869c
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650 at 004a8661
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfb62
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004bff2c
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c02dc
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f29
;   core_level.cpp_FUN_004dfc50 at 004dfccc
;   core_level.cpp_staticInit_FUN_004dfc10 at 004dfc22
;   core_main.c_FUN_004e44e0 at 004e4aa6
;   ... and 10 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d2e0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d2e4
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d2eb
    MOV dword ptr [EAX],0x0             ; 0040d2f2
    RET                                 ; 0040d2f8

