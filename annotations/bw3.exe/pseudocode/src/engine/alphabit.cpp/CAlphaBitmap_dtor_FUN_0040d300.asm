; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[13]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0 at 00411bd6
;   core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00413240 at 00413266
;   core_bmppuzzl.cpp_SButtonStruct_dtorChem_FUN_00414470 at 00414477
;   core_bmppuzzl.cpp_SButtonStruct_dtor_FUN_00414490 at 00414497
;   core_fldnotes.cpp_SNotesMap_dtor_FUN_004a9e70 at 004a9e87
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710 at 004a8732
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfecb
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c027e
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c05fa
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f6f
;   ... and 3 more
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d300
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d301
    PUSH EBX                            ; 0040d305
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 0040d306
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d30b
    MOV EAX,EBX                         ; 0040d30e
    POP EBX                             ; 0040d310
    RET                                 ; 0040d311

