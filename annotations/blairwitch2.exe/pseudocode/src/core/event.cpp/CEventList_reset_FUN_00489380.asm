; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_reset_FUN_00489380(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_00489360 at 00489366
;   core_event.cpp_CEventList_loadState_FUN_00491ca0 at 00491cb9
;   core_mission.cpp_FUN_004fce00 at 004fce7a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00489380
        ;   Label: core_event.cpp_CEventList_reset_FUN_00489380
    MOV dword ptr [EAX + 0xc84],0x0     ; 00489384
    MOV dword ptr [EAX + 0x258c],0x0    ; 0048938e
    MOV dword ptr [EAX + 0x3210],0x0    ; 00489398
    MOV dword ptr [EAX + 0x337c],0x0    ; 004893a2
    MOV dword ptr [EAX + 0x34e8],0x0    ; 004893ac
    MOV dword ptr [EAX + 0x3ac8],0x0    ; 004893b6
    MOV dword ptr [EAX],0x0             ; 004893c0
    RET                                 ; 004893c6

