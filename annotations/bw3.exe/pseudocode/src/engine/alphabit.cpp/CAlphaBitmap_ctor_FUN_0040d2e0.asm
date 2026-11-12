; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50 at 00411b61
;   core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200 at 00413211
;   core_bmppuzzl.cpp_FUN_00414460 at 00414465
;   core_bmppuzzl.cpp_SButtonStruct_ctor_FUN_00414480 at 00414485
;   core_flashlit.cpp_FUN_004a76f0 at 004a7737
;   core_fldnotes.cpp_SNotesMap_ctor_FUN_004a9e10 at 004a9e19
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a8680 at 004a869c
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650 at 004a8661
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfb62
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004bff2c
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

