; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_event.cpp_CEventList_ctor_FUN_004aaa50 at 004aaa5f
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e13f8
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e1fb3
;   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 at 00538d2e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0460
        ;   Label: core_event.cpp_CEventList_FUN_004b0460
    MOV dword ptr [EAX + 0x1908],0x0    ; 004b0464
    RET                                 ; 004b046e

