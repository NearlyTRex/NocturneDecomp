; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_reset_FUN_004aaa70(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_004aaa50 at 004aaa56
;   core_event.cpp_CEventList_loadState_FUN_004b0fc0 at 004b0fd9
;   core_mission.cpp_CDemonMission_FUN_00524760 at 005247ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aaa70
        ;   Label: core_event.cpp_CEventList_reset_FUN_004aaa70
    MOV dword ptr [EAX + 0xc84],0x0     ; 004aaa74
    MOV dword ptr [EAX + 0x258c],0x0    ; 004aaa7e
    MOV dword ptr [EAX + 0x3210],0x0    ; 004aaa88
    MOV dword ptr [EAX + 0x337c],0x0    ; 004aaa92
    MOV dword ptr [EAX + 0x34e8],0x0    ; 004aaa9c
    MOV dword ptr [EAX + 0x3ac8],0x0    ; 004aaaa6
    MOV dword ptr [EAX],0x0             ; 004aaab0
    RET                                 ; 004aaab6

