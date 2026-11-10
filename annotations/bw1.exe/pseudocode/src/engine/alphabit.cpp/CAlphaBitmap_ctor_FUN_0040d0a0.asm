; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[19]:
;   core_fldnotes.cpp_FUN_004baa40 at 004baa5c
;   core_fldnotes.cpp_NotesMap_ctor_FUN_004bc1b0 at 004bc1b9
;   core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004baa10 at 004baa21
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d8712
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8adc
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8e8c
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf579
;   core_inv.cpp_staticInit_FUN_004f5ef0 at 004f5ef5
;   core_level.cpp_FUN_004fe840 at 004fe8e4
;   core_main.c_FUN_005032a0 at 00503866
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

