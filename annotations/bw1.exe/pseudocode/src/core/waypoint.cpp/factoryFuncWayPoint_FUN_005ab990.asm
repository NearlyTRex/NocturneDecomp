; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_factoryFuncWayPoint_FUN_005ab990(void)
;
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_005ab9c0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x55c                          ; 005ab990
        ;   Label: core_waypoint.cpp_factoryFuncWayPoint_FUN_005ab990
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005ab995
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005ab99a
    TEST EAX,EAX                        ; 005ab99d
    JNZ 0x005ab9a2                      ; 005ab99f
        ;   XREF to: 005ab9a2 (CONDITIONAL_JUMP)  ; LAB_005ab9a2
    RET                                 ; 005ab9a1
    PUSH EAX                            ; 005ab9a2
        ;   Label: LAB_005ab9a2
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_005ab9c0 ; 005ab9a3
        ;   XREF to: 005ab9c0 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_005ab9c0(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 005ab9a8
    RET                                 ; 005ab9ab

