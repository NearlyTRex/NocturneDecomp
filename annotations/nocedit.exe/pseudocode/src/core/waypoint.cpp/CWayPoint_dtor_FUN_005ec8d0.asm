; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint *this_ptr,uint flags)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWayPointTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec8d0
        ;   Label: core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ec8d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005ec8d5
    JNZ 0x005ec8f6                      ; 005ec8da
        ;   XREF to: 005ec8f6 (CONDITIONAL_JUMP)  ; LAB_005ec8f6
    PUSH 0x1                            ; 005ec8dc
    PUSH EBX                            ; 005ec8de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005ec8df
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ec8e4
    MOV DL,byte ptr [ESP + 0xc]         ; 005ec8e7
    MOV EBX,EAX                         ; 005ec8eb
    TEST DL,0x2                         ; 005ec8ed
    JNZ 0x005ec911                      ; 005ec8f0
        ;   XREF to: 005ec911 (CONDITIONAL_JUMP)  ; LAB_005ec911
    MOV EAX,EBX                         ; 005ec8f2
    POP EBX                             ; 005ec8f4
    RET                                 ; 005ec8f5
    PUSH 0x665570                       ; 005ec8f6 | g_CWayPointTypeInfo
        ;   Label: LAB_005ec8f6
    PUSH EBX                            ; 005ec8fb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005ec8fc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ec901
    PUSH EAX                            ; 005ec904
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005ec905
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005ec90a
    MOV EAX,EBX                         ; 005ec90d
    POP EBX                             ; 005ec90f
    RET                                 ; 005ec910
    PUSH EAX                            ; 005ec911
        ;   Label: LAB_005ec911
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005ec912
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005ec917
    MOV EAX,EBX                         ; 005ec91a
    POP EBX                             ; 005ec91c
    RET                                 ; 005ec91d

