; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_factoryFunc_FUN_005524a0(void)
;
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_005524d0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x550                          ; 005524a0
        ;   Label: core_waypoint.cpp_factoryFunc_FUN_005524a0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 005524a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005524aa
    TEST EAX,EAX                        ; 005524ad
    JNZ 0x005524b2                      ; 005524af
        ;   XREF to: 005524b2 (CONDITIONAL_JUMP)  ; LAB_005524b2
    RET                                 ; 005524b1
    PUSH EAX                            ; 005524b2
        ;   Label: LAB_005524b2
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_005524d0 ; 005524b3
        ;   XREF to: 005524d0 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_005524d0(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 005524b8
    RET                                 ; 005524bb

