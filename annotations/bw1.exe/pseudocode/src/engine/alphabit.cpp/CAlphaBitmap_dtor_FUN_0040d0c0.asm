; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[13]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00415df0 at 00415e16
;   core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00417630 at 00417656
;   core_bmppuzzl.cpp_FUN_00418860 at 00418867
;   core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_00418880 at 00418887
;   core_fldnotes.cpp_SNotesMap_dtor_FUN_004bc210 at 004bc227
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0 at 004baaf2
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d8a7b
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8e2e
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d911e
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf5bf
;   ... and 3 more
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d0c0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d0c1
    PUSH EBX                            ; 0040d0c5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 0040d0c6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d0cb
    MOV EAX,EBX                         ; 0040d0ce
    POP EBX                             ; 0040d0d0
    RET                                 ; 0040d0d1

