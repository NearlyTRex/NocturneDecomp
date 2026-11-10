; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   should_delete
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0 at 0051c188
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0 at 0051b900
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0 at 0051b5bb
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bb92
;   core_mission.cpp_FUN_0051c240 at 0051c37b
;
; Called Functions:
;   core_actor.cpp_FUN_00408560
;   core_mission.cpp_FUN_0051b1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b4d0
        ;   Label: core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b4d1
    TEST EBX,EBX                        ; 0051b4d5
    JNZ 0x0051b4db                      ; 0051b4d7
        ;   XREF to: 0051b4db (CONDITIONAL_JUMP)  ; LAB_0051b4db
    POP EBX                             ; 0051b4d9
        ;   Label: LAB_0051b4d9
    RET                                 ; 0051b4da
    PUSH EBX                            ; 0051b4db
        ;   Label: LAB_0051b4db
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051b4dc
    PUSH EDX                            ; 0051b4e0
    CALL core_mission.cpp_FUN_0051b1d0  ; 0051b4e1
        ;   XREF to: 0051b1d0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b1d0()
    ADD ESP,0x8                         ; 0051b4e6
    CMP dword ptr [ESP + 0x10],0x0      ; 0051b4e9
    JZ 0x0051b4d9                       ; 0051b4ee
        ;   XREF to: 0051b4d9 (CONDITIONAL_JUMP)  ; LAB_0051b4d9
    PUSH EBX                            ; 0051b4f0
    CALL core_actor.cpp_FUN_00408560    ; 0051b4f1
        ;   XREF to: 00408560 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408560()
    ADD ESP,0x4                         ; 0051b4f6
    POP EBX                             ; 0051b4f9
    RET                                 ; 0051b4fa

