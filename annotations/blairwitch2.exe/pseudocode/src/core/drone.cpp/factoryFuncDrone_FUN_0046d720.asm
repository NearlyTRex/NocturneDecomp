; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drone_cpp_factoryFuncDrone_FUN_0046d720(void)
;
;
; Called Functions:
;   core_drone.cpp_CDrone_ctor_FUN_0046d750
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b10                        ; 0046d720
        ;   Label: core_drone.cpp_factoryFuncDrone_FUN_0046d720
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0046d725
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0046d72a
    TEST EAX,EAX                        ; 0046d72d
    JNZ 0x0046d732                      ; 0046d72f
        ;   XREF to: 0046d732 (CONDITIONAL_JUMP)  ; LAB_0046d732
    RET                                 ; 0046d731
    PUSH EAX                            ; 0046d732
        ;   Label: LAB_0046d732
    CALL core_drone.cpp_CDrone_ctor_FUN_0046d750 ; 0046d733
        ;   XREF to: 0046d750 (UNCONDITIONAL_CALL)  ; CDrone * core_drone.cpp_CDrone_ctor_FUN_0046d750(CDrone * this_ptr)
    ADD ESP,0x4                         ; 0046d738
    RET                                 ; 0046d73b

