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
;   core_fldnotes.cpp_NotesMap_dtor_FUN_004a9e70 at 004a9e87
;   core_fldnotes.cpp_PageResource_Bitmap_dtor_FUN_004a8710 at 004a8732
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c05fa
;   core_game.cpp_FUN_004b7ee0 at 004b7f6f
;   core_game.cpp_FUN_004bfb50 at 004bfecb
;   core_game.cpp_FUN_004bfee0 at 004c027e
;   core_level.cpp_FUN_004dfc50 at 004dfd76
;   core_main.c_FUN_004e44e0 at 004e4af5
;   core_mission.cpp_FUN_004f70a0 at 004f7219
;   unkafter_alphabit.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0 at 00411bd6
;   ... and 3 more
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d300
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d301
    PUSH EBX                            ; 0040d305
    CALL engine_alphabit.cpp_FUN_0040d400 ; 0040d306
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040d30b
    MOV EAX,EBX                         ; 0040d30e
    POP EBX                             ; 0040d310
    RET                                 ; 0040d311

