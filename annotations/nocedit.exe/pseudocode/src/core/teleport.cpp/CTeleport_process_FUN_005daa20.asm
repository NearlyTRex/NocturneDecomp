; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport *this_ptr,float delta_time)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_mission.cpp_CDemonMission_setTeleportTarget_FUN_00524070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005daa20
        ;   Label: core_teleport.cpp_CTeleport_process_FUN_005daa20
    PUSH ESI                            ; 005daa21
    SUB ESP,0x24                        ; 005daa22
    MOV ESI,dword ptr [ESP + 0x30]      ; 005daa25
    CMP dword ptr [ESI + 0x164],0x0     ; 005daa29
    JNZ 0x005daa38                      ; 005daa30
        ;   XREF to: 005daa38 (CONDITIONAL_JUMP)  ; LAB_005daa38
    ADD ESP,0x24                        ; 005daa32
        ;   Label: LAB_005daa32
    POP ESI                             ; 005daa35
    POP EBX                             ; 005daa36
    RET                                 ; 005daa37
    MOV EDX,dword ptr [0x02db87d0]      ; 005daa38 | g_LocalHeroIndex
        ;   Label: LAB_005daa38
    MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0] ; 005daa3e | g_HeroActors
    ADD EDX,0x20                        ; 005daa45
    PUSH EDX                            ; 005daa48
    LEA EAX,[ESP + 0x1c]                ; 005daa49
    PUSH EAX                            ; 005daa4d
    PUSH ESI                            ; 005daa4e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005daa4f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005daa54
    MOV EDX,ESP                         ; 005daa57
    PUSH EDX                            ; 005daa59
    MOV EBX,EAX                         ; 005daa5a
    MOV EAX,dword ptr [ESI + 0x154]     ; 005daa5c
    PUSH ESI                            ; 005daa62
    CALL dword ptr [EAX + 0x14]         ; 005daa63
    MOV EDX,EAX                         ; 005daa66
    ADD ESP,0x8                         ; 005daa68
    FLD float ptr [EDX]                 ; 005daa6b
    FCOMP float ptr [EBX]               ; 005daa6d
    FNSTSW AX                           ; 005daa6f
    SAHF                                ; 005daa71
    JA 0x005daa32                       ; 005daa72
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    FLD float ptr [EDX + 0x4]           ; 005daa74
    FCOMP float ptr [EBX + 0x4]         ; 005daa77
    FNSTSW AX                           ; 005daa7a
    SAHF                                ; 005daa7c
    JA 0x005daa32                       ; 005daa7d
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    FLD float ptr [EDX + 0x8]           ; 005daa7f
    FCOMP float ptr [EBX + 0x8]         ; 005daa82
    FNSTSW AX                           ; 005daa85
    SAHF                                ; 005daa87
    JA 0x005daa32                       ; 005daa88
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    FLD float ptr [EDX + 0xc]           ; 005daa8a
    FCOMP float ptr [EBX]               ; 005daa8d
    FNSTSW AX                           ; 005daa8f
    SAHF                                ; 005daa91
    JC 0x005daa32                       ; 005daa92
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    FLD float ptr [EDX + 0x10]          ; 005daa94
    FCOMP float ptr [EBX + 0x4]         ; 005daa97
    FNSTSW AX                           ; 005daa9a
    SAHF                                ; 005daa9c
    JC 0x005daa32                       ; 005daa9d
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    FLD float ptr [EDX + 0x14]          ; 005daa9f
    FCOMP float ptr [EBX + 0x8]         ; 005daaa2
    FNSTSW AX                           ; 005daaa5
    SAHF                                ; 005daaa7
    JC 0x005daa32                       ; 005daaa8
        ;   XREF to: 005daa32 (CONDITIONAL_JUMP)  ; LAB_005daa32
    MOV EDX,dword ptr [ESI + 0x164]     ; 005daaaa
    ADD EDX,0x20                        ; 005daab0
    PUSH EDX                            ; 005daab3
    MOV ECX,dword ptr [0x0067d550]      ; 005daab4 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 005daaba | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_setTeleportTarget_FUN_00524070 ; 005daabb
        ;   XREF to: 00524070 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_setTeleportTarget_FUN_00524070(CDemonMission * this_ptr, CLocation * teleport_target)
    ADD ESP,0x8                         ; 005daac0
    ADD ESP,0x24                        ; 005daac3
    POP ESI                             ; 005daac6
    POP EBX                             ; 005daac7
    RET                                 ; 005daac8

