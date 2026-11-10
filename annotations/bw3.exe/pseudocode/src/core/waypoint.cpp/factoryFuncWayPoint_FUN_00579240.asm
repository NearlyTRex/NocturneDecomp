; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_waypoint_cpp_factoryFuncWayPoint_FUN_00579240(void)
;
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_00579270
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x55c                          ; 00579240
        ;   Label: core_waypoint.cpp_factoryFuncWayPoint_FUN_00579240
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00579245
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0057924a
    TEST EAX,EAX                        ; 0057924d
    JNZ 0x00579252                      ; 0057924f
        ;   XREF to: 00579252 (CONDITIONAL_JUMP)  ; LAB_00579252
    RET                                 ; 00579251
    PUSH EAX                            ; 00579252
        ;   Label: LAB_00579252
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_00579270 ; 00579253
        ;   XREF to: 00579270 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_00579270(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 00579258
    RET                                 ; 0057925b

