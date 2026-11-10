; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   should_delete
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 at 004f796b
;   core_mission.cpp_CDemonMission_process_FUN_004f70a0 at 004f70d0
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70 at 004f6d8b
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7362
;   core_mission.cpp_FUN_004f7a20 at 004f7b5b
;
; Called Functions:
;   core_actor.cpp_FUN_004085a0
;   core_mission.cpp_FUN_004f69a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6ca0
        ;   Label: core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6ca1
    TEST EBX,EBX                        ; 004f6ca5
    JNZ 0x004f6cab                      ; 004f6ca7
        ;   XREF to: 004f6cab (CONDITIONAL_JUMP)  ; LAB_004f6cab
    POP EBX                             ; 004f6ca9
        ;   Label: LAB_004f6ca9
    RET                                 ; 004f6caa
    PUSH EBX                            ; 004f6cab
        ;   Label: LAB_004f6cab
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f6cac
    PUSH EDX                            ; 004f6cb0
    CALL core_mission.cpp_FUN_004f69a0  ; 004f6cb1
        ;   XREF to: 004f69a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f69a0()
    ADD ESP,0x8                         ; 004f6cb6
    CMP dword ptr [ESP + 0x10],0x0      ; 004f6cb9
    JZ 0x004f6ca9                       ; 004f6cbe
        ;   XREF to: 004f6ca9 (CONDITIONAL_JUMP)  ; LAB_004f6ca9
    PUSH EBX                            ; 004f6cc0
    CALL core_actor.cpp_FUN_004085a0    ; 004f6cc1
        ;   XREF to: 004085a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004085a0()
    ADD ESP,0x4                         ; 004f6cc6
    POP EBX                             ; 004f6cc9
    RET                                 ; 004f6cca

