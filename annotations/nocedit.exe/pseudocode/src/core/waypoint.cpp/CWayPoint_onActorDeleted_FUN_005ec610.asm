; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_CWayPoint_onActorDeleted_FUN_005ec610(CWayPoint *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; Referenced Globals:
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_waypoint.cpp_CWayPoint_FUN_005ec640
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f9591c]      ; 005ec610 | g_CWayPointClassInfo.name_hash
        ;   Label: core_waypoint.cpp_CWayPoint_onActorDeleted_FUN_005ec610
    PUSH EDX                            ; 005ec616
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ec617
    PUSH ECX                            ; 005ec61b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ec61c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005ec621
    TEST EAX,EAX                        ; 005ec624
    JNZ 0x005ec629                      ; 005ec626
        ;   XREF to: 005ec629 (CONDITIONAL_JUMP)  ; LAB_005ec629
    RET                                 ; 005ec628
    PUSH EBX                            ; 005ec629
        ;   Label: LAB_005ec629
    PUSH EAX                            ; 005ec62a
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ec62b
    PUSH EBX                            ; 005ec62f
    CALL core_waypoint.cpp_CWayPoint_FUN_005ec640 ; 005ec630
        ;   XREF to: 005ec640 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_FUN_005ec640(CWayPoint * this_ptr)
    ADD ESP,0x8                         ; 005ec635
    POP EBX                             ; 005ec638
    RET                                 ; 005ec639

