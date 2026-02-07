; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_FUN_00523f50(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 at 00522d48
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0 at 005243dc
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_HeroCount
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
;   core_setcolid.cpp_CDemonSet_FUN_00574560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523f50
        ;   Label: core_mission.cpp_CDemonMission_FUN_00523f50
    PUSH EDI                            ; 00523f51
    PUSH EBP                            ; 00523f52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00523f53
    CMP dword ptr [EBX + 0x548],0x0     ; 00523f57
    JZ 0x00523f7e                       ; 00523f5e
        ;   XREF to: 00523f7e (CONDITIONAL_JUMP)  ; LAB_00523f7e
    PUSH ESI                            ; 00523f60
    PUSH 0x1                            ; 00523f61
        ;   Label: LAB_00523f61
    MOV ECX,dword ptr [EBX + 0x548]     ; 00523f63
    PUSH ECX                            ; 00523f69
    PUSH EBX                            ; 00523f6a
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 ; 00523f6b
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV ESI,dword ptr [EBX + 0x548]     ; 00523f70
    ADD ESP,0xc                         ; 00523f76
    TEST ESI,ESI                        ; 00523f79
    JNZ 0x00523f61                      ; 00523f7b
        ;   XREF to: 00523f61 (CONDITIONAL_JUMP)  ; LAB_00523f61
    POP ESI                             ; 00523f7d
    PUSH EBX                            ; 00523f7e
        ;   Label: LAB_00523f7e
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00523f7f
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00523f84
    MOV EBP,dword ptr [0x006810c8]      ; 00523f87 | g_CDemonSetPtr
    XOR EDI,EDI                         ; 00523f8d
    PUSH EBP                            ; 00523f8f | g_CDemonSetInstance
    MOV dword ptr [0x02db87bc],EDI      ; 00523f90 | g_HeroCount
    MOV dword ptr [EBX + 0x884],EDI     ; 00523f96
    CALL core_setcolid.cpp_CDemonSet_FUN_00574560 ; 00523f9c
        ;   XREF to: 00574560 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574560(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00523fa1
    MOV dword ptr [EBX + 0x560],EDI     ; 00523fa4
    POP EBP                             ; 00523faa
    POP EDI                             ; 00523fab
    POP EBX                             ; 00523fac
    RET                                 ; 00523fad

