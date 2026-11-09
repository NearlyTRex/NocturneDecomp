; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_reset_FUN_004a19f0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_ctor_FUN_004a19d0 at 004a19d6
;   core_event.cpp_CEventList_loadState_FUN_004aa610 at 004aa629
;   core_mission.cpp_FUN_0051bdc0 at 0051be3a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a19f0
        ;   Label: core_event.cpp_CEventList_reset_FUN_004a19f0
    MOV dword ptr [EAX + 0xc84],0x0     ; 004a19f4
    MOV dword ptr [EAX + 0x258c],0x0    ; 004a19fe
    MOV dword ptr [EAX + 0x3210],0x0    ; 004a1a08
    MOV dword ptr [EAX + 0x337c],0x0    ; 004a1a12
    MOV dword ptr [EAX + 0x34e8],0x0    ; 004a1a1c
    MOV dword ptr [EAX + 0x3ac8],0x0    ; 004a1a26
    MOV dword ptr [EAX],0x0             ; 004a1a30
    RET                                 ; 004a1a36

