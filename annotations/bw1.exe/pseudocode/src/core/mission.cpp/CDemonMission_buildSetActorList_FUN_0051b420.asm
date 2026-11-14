; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_event.cpp_FUN_004a1d00 at 004a4bdd
;   core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0 at 0051c19b
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0 at 0051b5cf
;   core_mission.cpp_FUN_0051b610 at 0051b645
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e96f7
;   TerminatedCString s_CDemonMission_buildSetAc_005e970b
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b420
        ;   Label: core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
    PUSH ESI                            ; 0051b421
    PUSH EDI                            ; 0051b422
    PUSH EBP                            ; 0051b423
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051b424
    MOV EAX,[0x00622c18]                ; 0051b428 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d164],0x0  ; 0051b42d | g_CDemonSetInstance.actor_count
    MOV EBX,dword ptr [ESI + 0x1118]    ; 0051b437
    TEST EBX,EBX                        ; 0051b43d
    JZ 0x0051b45c                       ; 0051b43f
        ;   XREF to: 0051b45c (CONDITIONAL_JUMP)  ; LAB_0051b45c
    MOV EDI,0x5e96f7                    ; 0051b441 | = "..\\core\\mission.cpp"
    MOV EBP,0x394                       ; 0051b446
    MOV EDX,dword ptr [ESI]             ; 0051b44b
        ;   Label: LAB_0051b44b
    CMP EDX,dword ptr [EBX + 0x2c]      ; 0051b44d
    JZ 0x0051b47f                       ; 0051b450
        ;   XREF to: 0051b47f (CONDITIONAL_JUMP)  ; LAB_0051b47f
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051b452
        ;   Label: LAB_0051b452
    TEST EBX,EBX                        ; 0051b458
    JNZ 0x0051b44b                      ; 0051b45a
        ;   XREF to: 0051b44b (CONDITIONAL_JUMP)  ; LAB_0051b44b
    MOV ECX,dword ptr [0x00622c18]      ; 0051b45c | g_CDemonSetPtr
        ;   Label: LAB_0051b45c
    PUSH ECX                            ; 0051b462 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0 ; 0051b463
        ;   XREF to: 005593e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005593e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051b468
    MOV EBX,dword ptr [0x00622c18]      ; 0051b46b | g_CDemonSetPtr
    PUSH EBX                            ; 0051b471 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0 ; 0051b472
        ;   XREF to: 00555ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildActorTypeLists_FUN_00555ad0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051b477
    POP EBP                             ; 0051b47a
    POP EDI                             ; 0051b47b
    POP ESI                             ; 0051b47c
    POP EBX                             ; 0051b47d
    RET                                 ; 0051b47e
    MOV EAX,[0x00622c18]                ; 0051b47f | g_CDemonSetPtr
        ;   Label: LAB_0051b47f
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 0051b484 | g_CDemonSetInstance.actor_count
    JL 0x0051b4a9                       ; 0051b48e
        ;   XREF to: 0051b4a9 (CONDITIONAL_JUMP)  ; LAB_0051b4a9
    PUSH 0x5e970b                       ; 0051b490 | = "CDemonMission::buildSetActorList - To..."
    MOV dword ptr [0x01d1d400],EDI      ; 0051b495 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0051b49b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051b4a1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051b4a6
    MOV EAX,[0x00622c18]                ; 0051b4a9 | g_CDemonSetPtr
        ;   Label: LAB_0051b4a9
    MOV EDX,dword ptr [EAX + 0x14d164]  ; 0051b4ae | g_CDemonSetInstance.actor_count
    MOV dword ptr [EAX + EDX*0x4 + 0x14d168],EBX ; 0051b4b4 | g_CDemonSetInstance.actors[0]
    INC dword ptr [EAX + 0x14d164]      ; 0051b4bb | g_CDemonSetInstance.actor_count
    JMP 0x0051b452                      ; 0051b4c1
        ;   XREF to: 0051b452 (UNCONDITIONAL_JUMP)  ; LAB_0051b452

