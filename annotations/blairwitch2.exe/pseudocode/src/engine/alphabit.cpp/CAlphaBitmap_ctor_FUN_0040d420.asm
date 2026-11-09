; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[18]:
;   core_fldnotes.cpp_FUN_004a2170 at 004a218c
;   core_fldnotes.cpp_NotesMap_ctor_FUN_004a37c0 at 004a37c9
;   core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004a2140 at 004a2151
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be472
;   core_game.cpp_FUN_004b60c0 at 004b6109
;   core_game.cpp_FUN_004bdc1e at 004bdc32
;   core_game.cpp_FUN_004bdfb0 at 004be0ba
;   core_inv.cpp_staticInit_FUN_004d9c00 at 004d9c05
;   core_level.cpp_FUN_004e1480 at 004e1524
;   core_main.c_FUN_004e46c0 at 004e4c56
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

