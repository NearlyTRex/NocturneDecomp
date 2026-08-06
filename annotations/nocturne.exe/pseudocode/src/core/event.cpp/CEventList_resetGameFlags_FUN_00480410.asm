; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00480410(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_0047a9e0 at 0047a9ef
;   core_game.cpp_CGame_FUN_004a4170 at 004a42c2
;   core_game.cpp_CGame_FUN_004a4b50 at 004a4e29
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480410
        ;   Label: core_event.cpp_CEventList_resetGameFlags_FUN_00480410
    MOV dword ptr [EAX + 0x1908],0x0    ; 00480414
    RET                                 ; 0048041e

