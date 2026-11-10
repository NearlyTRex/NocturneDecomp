; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_factoryFuncDoor_FUN_00463a80(void)
;
;
; Called Functions:
;   core_door.cpp_CDoor_ctor_FUN_00463ab0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xa4c                          ; 00463a80
        ;   Label: core_door.cpp_factoryFuncDoor_FUN_00463a80
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 00463a85
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00463a8a
    TEST EAX,EAX                        ; 00463a8d
    JNZ 0x00463a92                      ; 00463a8f
        ;   XREF to: 00463a92 (CONDITIONAL_JUMP)  ; LAB_00463a92
    RET                                 ; 00463a91
    PUSH EAX                            ; 00463a92
        ;   Label: LAB_00463a92
    CALL core_door.cpp_CDoor_ctor_FUN_00463ab0 ; 00463a93
        ;   XREF to: 00463ab0 (UNCONDITIONAL_CALL)  ; CDoor * core_door.cpp_CDoor_ctor_FUN_00463ab0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00463a98
    RET                                 ; 00463a9b

