; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005abd30(CWayPoint *this_ptr,uint flags)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWayPointTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abd30
        ;   Label: core_waypoint.cpp_CWayPoint_dtor_FUN_005abd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005abd31
    TEST byte ptr [ESP + 0xc],0x4       ; 005abd35
    JNZ 0x005abd56                      ; 005abd3a
        ;   XREF to: 005abd56 (CONDITIONAL_JUMP)  ; LAB_005abd56
    PUSH 0x1                            ; 005abd3c
    PUSH EBX                            ; 005abd3e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005abd3f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005abd44
    MOV DL,byte ptr [ESP + 0xc]         ; 005abd47
    MOV EBX,EAX                         ; 005abd4b
    TEST DL,0x2                         ; 005abd4d
    JNZ 0x005abd71                      ; 005abd50
        ;   XREF to: 005abd71 (CONDITIONAL_JUMP)  ; LAB_005abd71
    MOV EAX,EBX                         ; 005abd52
    POP EBX                             ; 005abd54
    RET                                 ; 005abd55
    PUSH 0x607e30                       ; 005abd56 | g_CWayPointTypeInfo
        ;   Label: LAB_005abd56
    PUSH EBX                            ; 005abd5b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005abd5c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005abd61
    PUSH EAX                            ; 005abd64
    CALL crt_unknown.c_FUN_005c0336     ; 005abd65
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005abd6a
    MOV EAX,EBX                         ; 005abd6d
    POP EBX                             ; 005abd6f
    RET                                 ; 005abd70
    PUSH EAX                            ; 005abd71
        ;   Label: LAB_005abd71
    CALL crt_unknown.c_FUN_005c0344     ; 005abd72
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005abd77
    MOV EAX,EBX                         ; 005abd7a
    POP EBX                             ; 005abd7c
    RET                                 ; 005abd7d

