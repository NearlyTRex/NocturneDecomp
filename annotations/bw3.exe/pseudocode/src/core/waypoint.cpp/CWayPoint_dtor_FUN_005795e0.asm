; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005795e0(CWayPoint *this_ptr,uint flags)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWayPointTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005795e0
        ;   Label: core_waypoint.cpp_CWayPoint_dtor_FUN_005795e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005795e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005795e5
    JNZ 0x00579606                      ; 005795ea
        ;   XREF to: 00579606 (CONDITIONAL_JUMP)  ; LAB_00579606
    PUSH 0x1                            ; 005795ec
    PUSH EBX                            ; 005795ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005795ef
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005795f4
    MOV DL,byte ptr [ESP + 0xc]         ; 005795f7
    MOV EBX,EAX                         ; 005795fb
    TEST DL,0x2                         ; 005795fd
    JNZ 0x00579621                      ; 00579600
        ;   XREF to: 00579621 (CONDITIONAL_JUMP)  ; LAB_00579621
    MOV EAX,EBX                         ; 00579602
    POP EBX                             ; 00579604
    RET                                 ; 00579605
    PUSH 0x5e6200                       ; 00579606 | g_CWayPointTypeInfo
        ;   Label: LAB_00579606
    PUSH EBX                            ; 0057960b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0057960c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00579611
    PUSH EAX                            ; 00579614
    CALL crt_unknown.c_FUN_005a30b6     ; 00579615
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0057961a
    MOV EAX,EBX                         ; 0057961d
    POP EBX                             ; 0057961f
    RET                                 ; 00579620
    PUSH EAX                            ; 00579621
        ;   Label: LAB_00579621
    CALL crt_unknown.c_FUN_005a30c4     ; 00579622
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00579627
    MOV EAX,EBX                         ; 0057962a
    POP EBX                             ; 0057962c
    RET                                 ; 0057962d

