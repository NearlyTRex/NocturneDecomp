; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_00587d40(void)
;
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6bc                          ; 00587d40
        ;   Label: core_waypoint.cpp_factoryFuncWayPoint_FUN_00587d40
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00587d45
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00587d4a
    TEST EAX,EAX                        ; 00587d4d
    JNZ 0x00587d52                      ; 00587d4f
        ;   XREF to: 00587d52 (CONDITIONAL_JUMP)  ; LAB_00587d52
    RET                                 ; 00587d51
    PUSH EAX                            ; 00587d52
        ;   Label: LAB_00587d52
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70 ; 00587d53
        ;   XREF to: 00587d70 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 00587d58
    RET                                 ; 00587d5b

