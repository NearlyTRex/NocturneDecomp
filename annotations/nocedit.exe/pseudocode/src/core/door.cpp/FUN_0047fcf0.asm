; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_door_cpp_FUN_0047fcf0(void)
;
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_0042cd60 at 0042cd72
;   core_hero.cpp_FUN_004f2d70 at 004f2e9a
;   core_hero.cpp_FUN_004f2ed0 at 004f2f11
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aabe0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047fcf0
        ;   Label: core_door.cpp_FUN_0047fcf0
    ADD EAX,0x2e8                       ; 0047fcf4
    PUSH EAX                            ; 0047fcf9
    MOV EDX,dword ptr [0x006793d0]      ; 0047fcfa | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 0047fd00 | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 0047fd01
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 0047fd06
    RET                                 ; 0047fd09

