; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[19]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00415d90 at 00415da1
;   core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_004175f0 at 00417601
;   core_bmppuzzl.cpp_SButtonStruct_ctorChem_FUN_00418850 at 00418855
;   core_bmppuzzl.cpp_SButtonStruct_ctor_FUN_00418870 at 00418875
;   core_flashlit.cpp_FUN_004b9ab0 at 004b9af7
;   core_fldnotes.cpp_SNotesMap_ctor_FUN_004bc1b0 at 004bc1b9
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40 at 004baa5c
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10 at 004baa21
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d8712
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8adc
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d0a0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d0a4
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d0ab
    MOV dword ptr [EAX],0x0             ; 0040d0b2
    RET                                 ; 0040d0b8

