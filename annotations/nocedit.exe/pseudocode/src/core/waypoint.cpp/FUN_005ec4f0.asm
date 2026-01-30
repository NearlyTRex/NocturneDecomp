; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_FUN_005ec4f0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_FUN_0053d7b0 at 0053d854
;   core_waypoint.cpp_CWayPoint_FUN_005ec5e0 at 005ec5e6
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonMission g_CDemonMissionInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032690dc
;   undefined4 DAT_032690e0
;   undefined4 DAT_032690e4
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
;   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
;   core_waypoint.cpp_FUN_005ebd40
;   core_waypoint.cpp_FUN_005ec830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec4f0
        ;   Label: core_waypoint.cpp_FUN_005ec4f0
    PUSH ESI                            ; 005ec4f1
    PUSH EDI                            ; 005ec4f2
    PUSH EBP                            ; 005ec4f3
    SUB ESP,0x8                         ; 005ec4f4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ec4f7
    PUSH EBX                            ; 005ec4fb
    CALL core_waypoint.cpp_FUN_005ec830 ; 005ec4fc
        ;   XREF to: 005ec830 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_FUN_005ec830()
    XOR ESI,ESI                         ; 005ec501
    MOV EDX,dword ptr [EBX + 0x370]     ; 005ec503
    ADD ESP,0x4                         ; 005ec509
    TEST EDX,EDX                        ; 005ec50c
    JLE 0x005ec530                      ; 005ec50e
        ;   XREF to: 005ec530 (CONDITIONAL_JUMP)  ; LAB_005ec530
    MOV EDI,EBX                         ; 005ec510
    PUSH EBX                            ; 005ec512
        ;   Label: LAB_005ec512
    MOV ECX,dword ptr [EDI + 0x374]     ; 005ec513
    PUSH ECX                            ; 005ec519
    ADD EDI,0x8                         ; 005ec51a
    INC ESI                             ; 005ec51d
    CALL core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640 ; 005ec51e
        ;   XREF to: 005ec640 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640()
    MOV EBP,dword ptr [EBX + 0x370]     ; 005ec523
    ADD ESP,0x8                         ; 005ec529
    CMP ESI,EBP                         ; 005ec52c
    JL 0x005ec512                       ; 005ec52e
        ;   XREF to: 005ec512 (CONDITIONAL_JUMP)  ; LAB_005ec512
    MOV EAX,[0x0067d550]                ; 005ec530 | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: LAB_005ec530
    PUSH EAX                            ; 005ec535 | g_CDemonMissionInstance
    XOR EDI,EDI                         ; 005ec536
    XOR EBP,EBP                         ; 005ec538
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 005ec53a
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005ec53f
    LEA EAX,[EBX + 0x20]                ; 005ec542
    MOV dword ptr [EBX + 0x370],0x0     ; 005ec545
    MOV dword ptr [ESP],EAX             ; 005ec54f
    MOV EAX,[0x006810c8]                ; 005ec552 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005ec552
    CMP EDI,dword ptr [EAX + 0x154e64]  ; 005ec557 | DAT_032690dc
    JGE 0x005ec5cf                      ; 005ec55d
        ;   XREF to: 005ec5cf (CONDITIONAL_JUMP)  ; LAB_005ec5cf
    MOV ESI,dword ptr [EAX + EBP*0x1 + 0x154e68] ; 005ec563 | DAT_032690e0 | DAT_032690e4
    CMP ESI,EBX                         ; 005ec56a
    JNZ 0x005ec574                      ; 005ec56c
        ;   XREF to: 005ec574 (CONDITIONAL_JUMP)  ; LAB_005ec574
    INC EDI                             ; 005ec56e
        ;   Label: LAB_005ec56e
    ADD EBP,0x4                         ; 005ec56f
    JMP 0x005ec552                      ; 005ec572
        ;   XREF to: 005ec552 (UNCONDITIONAL_JUMP)  ; LAB_005ec552
    CMP dword ptr [ESI + 0x370],0x3c    ; 005ec574
        ;   Label: LAB_005ec574
    JGE 0x005ec56e                      ; 005ec57b
        ;   XREF to: 005ec56e (CONDITIONAL_JUMP)  ; LAB_005ec56e
    PUSH 0x1                            ; 005ec57d
    LEA EAX,[ESI + 0x20]                ; 005ec57f
    PUSH EAX                            ; 005ec582
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ec583
    PUSH EDX                            ; 005ec587
    MOV dword ptr [ESP + 0x10],EAX      ; 005ec588
    CALL core_waypoint.cpp_FUN_005ebd40 ; 005ec58c
        ;   XREF to: 005ebd40 (UNCONDITIONAL_CALL)  ; bool core_waypoint.cpp_FUN_005ebd40()
    ADD ESP,0xc                         ; 005ec591
    TEST EAX,EAX                        ; 005ec594
    JZ 0x005ec56e                       ; 005ec596
        ;   XREF to: 005ec56e (CONDITIONAL_JUMP)  ; LAB_005ec56e
    PUSH 0x1                            ; 005ec598
    MOV ECX,dword ptr [ESP + 0x4]       ; 005ec59a
    PUSH ECX                            ; 005ec59e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ec59f
    PUSH EAX                            ; 005ec5a3
    CALL core_waypoint.cpp_FUN_005ebd40 ; 005ec5a4
        ;   XREF to: 005ebd40 (UNCONDITIONAL_CALL)  ; bool core_waypoint.cpp_FUN_005ebd40()
    ADD ESP,0xc                         ; 005ec5a9
    TEST EAX,EAX                        ; 005ec5ac
    JZ 0x005ec56e                       ; 005ec5ae
        ;   XREF to: 005ec56e (CONDITIONAL_JUMP)  ; LAB_005ec56e
    PUSH ESI                            ; 005ec5b0
    PUSH EBX                            ; 005ec5b1
    CALL core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 ; 005ec5b2
        ;   XREF to: 005ec700 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700()
    ADD ESP,0x8                         ; 005ec5b7
    PUSH EBX                            ; 005ec5ba
    PUSH ESI                            ; 005ec5bb
    CALL core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 ; 005ec5bc
        ;   XREF to: 005ec700 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700()
    MOV EDX,dword ptr [EBX + 0x370]     ; 005ec5c1
    ADD ESP,0x8                         ; 005ec5c7
    CMP EDX,0x3c                        ; 005ec5ca
    JL 0x005ec56e                       ; 005ec5cd
        ;   XREF to: 005ec56e (CONDITIONAL_JUMP)  ; LAB_005ec56e
    ADD ESP,0x8                         ; 005ec5cf
        ;   Label: LAB_005ec5cf
    POP EBP                             ; 005ec5d2
    POP EDI                             ; 005ec5d3
    POP ESI                             ; 005ec5d4
    POP EBX                             ; 005ec5d5
    RET                                 ; 005ec5d6

