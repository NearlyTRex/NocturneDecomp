; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_factoryFunc_FUN_00455020(void)
;
;
; Called Functions:
;   core_door.cpp_CDoor_ctor_FUN_00455050
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x9d8                          ; 00455020
        ;   Label: core_door.cpp_factoryFunc_FUN_00455020
    CALL crt_unknown.c_FUN_0056497c     ; 00455025
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0045502a
    TEST EAX,EAX                        ; 0045502d
    JNZ 0x00455032                      ; 0045502f
        ;   XREF to: 00455032 (CONDITIONAL_JUMP)  ; LAB_00455032
    RET                                 ; 00455031
    PUSH EAX                            ; 00455032
        ;   Label: LAB_00455032
    CALL core_door.cpp_CDoor_ctor_FUN_00455050 ; 00455033
        ;   XREF to: 00455050 (UNCONDITIONAL_CALL)  ; CDoor * core_door.cpp_CDoor_ctor_FUN_00455050(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00455038
    RET                                 ; 0045503b

