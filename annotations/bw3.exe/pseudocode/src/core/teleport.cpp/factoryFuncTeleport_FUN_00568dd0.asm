; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleport_ctor_FUN_00568e00
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x168                          ; 00568dd0
        ;   Label: core_teleport.cpp_factoryFuncTeleport_FUN_00568dd0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00568dd5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00568dda
    TEST EAX,EAX                        ; 00568ddd
    JNZ 0x00568de2                      ; 00568ddf
        ;   XREF to: 00568de2 (CONDITIONAL_JUMP)  ; LAB_00568de2
    RET                                 ; 00568de1
    PUSH EAX                            ; 00568de2
        ;   Label: LAB_00568de2
    CALL core_teleport.cpp_CTeleport_ctor_FUN_00568e00 ; 00568de3
        ;   XREF to: 00568e00 (UNCONDITIONAL_CALL)  ; CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_00568e00(CTeleport * this_ptr)
    ADD ESP,0x4                         ; 00568de8
    RET                                 ; 00568deb

