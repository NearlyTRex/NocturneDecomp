; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   should_delete
;
; XREF[9]:
;   core_mission.cpp_CDemonMission_FUN_00523f50 at 00523f6b
;   core_mission.cpp_CDemonMission_FUN_00524c20 at 00524d65
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 at 00524b68
;   core_mission.cpp_CDemonMission_process_FUN_00524250 at 00524296
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005244e6
;   core_msnedit.cpp_CDemonMission_changeActorType_FUN_0053d8b0 at 0053dbc4
;   core_msnedit.cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80 at 0053bcb1
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e973
;   core_msnedit.cpp_CDemonMission_removeSet_FUN_00538df0 at 00538e35
;
; Called Functions:
;   core_actor.cpp_deleteActor_FUN_00408820
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523f20
        ;   Label: core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
    MOV EBX,dword ptr [ESP + 0xc]       ; 00523f21
    TEST EBX,EBX                        ; 00523f25
    JNZ 0x00523f2b                      ; 00523f27
        ;   XREF to: 00523f2b (CONDITIONAL_JUMP)  ; LAB_00523f2b
    POP EBX                             ; 00523f29
        ;   Label: LAB_00523f29
    RET                                 ; 00523f2a
    PUSH EBX                            ; 00523f2b
        ;   Label: LAB_00523f2b
    MOV EDX,dword ptr [ESP + 0xc]       ; 00523f2c
    PUSH EDX                            ; 00523f30
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0 ; 00523f31
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 00523f36
    CMP dword ptr [ESP + 0x10],0x0      ; 00523f39
    JZ 0x00523f29                       ; 00523f3e
        ;   XREF to: 00523f29 (CONDITIONAL_JUMP)  ; LAB_00523f29
    PUSH EBX                            ; 00523f40
    CALL core_actor.cpp_deleteActor_FUN_00408820 ; 00523f41
        ;   XREF to: 00408820 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_deleteActor_FUN_00408820(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 00523f46
    POP EBX                             ; 00523f49
    RET                                 ; 00523f4a

