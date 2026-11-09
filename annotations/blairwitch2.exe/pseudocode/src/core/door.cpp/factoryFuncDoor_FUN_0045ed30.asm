; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_factoryFuncDoor_FUN_0045ed30(void)
;
;
; Called Functions:
;   core_door.cpp_CDoor_ctor_FUN_0045ed60
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0xba8                          ; 0045ed30
        ;   Label: core_door.cpp_factoryFuncDoor_FUN_0045ed30
    CALL crt_unknown.c_FUN_005b8be2     ; 0045ed35
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0045ed3a
    TEST EAX,EAX                        ; 0045ed3d
    JNZ 0x0045ed42                      ; 0045ed3f
        ;   XREF to: 0045ed42 (CONDITIONAL_JUMP)  ; LAB_0045ed42
    RET                                 ; 0045ed41
    PUSH EAX                            ; 0045ed42
        ;   Label: LAB_0045ed42
    CALL core_door.cpp_CDoor_ctor_FUN_0045ed60 ; 0045ed43
        ;   XREF to: 0045ed60 (UNCONDITIONAL_CALL)  ; CDoor * core_door.cpp_CDoor_ctor_FUN_0045ed60(CDoor * this_ptr)
    ADD ESP,0x4                         ; 0045ed48
    RET                                 ; 0045ed4b

