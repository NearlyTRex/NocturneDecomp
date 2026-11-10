; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004fc570(CDemonMission *this_ptr,CDemonActor *actor,int should_delete)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   should_delete
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0 at 004fd1cb
;   core_mission.cpp_CDemonMission_process_FUN_004fc940 at 004fc970
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_004fc640 at 004fc65b
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcbc6
;   core_mission.cpp_FUN_004fd280 at 004fd3bb
;
; Called Functions:
;   core_actor.cpp_FUN_00408730
;   core_mission.cpp_FUN_004fc270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc570
        ;   Label: core_mission.cpp_CDemonMission_removeActor_FUN_004fc570
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc571
    TEST EBX,EBX                        ; 004fc575
    JNZ 0x004fc57b                      ; 004fc577
        ;   XREF to: 004fc57b (CONDITIONAL_JUMP)  ; LAB_004fc57b
    POP EBX                             ; 004fc579
        ;   Label: LAB_004fc579
    RET                                 ; 004fc57a
    PUSH EBX                            ; 004fc57b
        ;   Label: LAB_004fc57b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc57c
    PUSH EDX                            ; 004fc580
    CALL core_mission.cpp_FUN_004fc270  ; 004fc581
        ;   XREF to: 004fc270 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc270()
    ADD ESP,0x8                         ; 004fc586
    CMP dword ptr [ESP + 0x10],0x0      ; 004fc589
    JZ 0x004fc579                       ; 004fc58e
        ;   XREF to: 004fc579 (CONDITIONAL_JUMP)  ; LAB_004fc579
    PUSH EBX                            ; 004fc590
    CALL core_actor.cpp_FUN_00408730    ; 004fc591
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408730()
    ADD ESP,0x4                         ; 004fc596
    POP EBX                             ; 004fc599
    RET                                 ; 004fc59a

