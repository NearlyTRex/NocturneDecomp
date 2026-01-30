; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_FUN_0040e150(void)
;
;
; XREF[4]:
;   core_actor.cpp_FUN_0040e130 at 0040e13c
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 0053911e
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c505
;   core_msnedit.cpp_CDemonMission_FUN_0053c730 at 0053c744
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e150
        ;   Label: core_actor.cpp_FUN_0040e150
    MOV dword ptr [EAX + 0x4],0x0       ; 0040e154
    RET                                 ; 0040e15b

