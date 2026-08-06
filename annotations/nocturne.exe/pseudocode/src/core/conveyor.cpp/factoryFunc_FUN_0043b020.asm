; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_0043b020(void)
;
;
; Called Functions:
;   core_conveyor.cpp_CConveyor_ctor_FUN_0043b050
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x854                          ; 0043b020
        ;   Label: core_conveyor.cpp_factoryFunc_FUN_0043b020
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0043b025
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0043b02a
    TEST EAX,EAX                        ; 0043b02d
    JNZ 0x0043b032                      ; 0043b02f
        ;   XREF to: 0043b032 (CONDITIONAL_JUMP)  ; LAB_0043b032
    RET                                 ; 0043b031
    PUSH EAX                            ; 0043b032
        ;   Label: LAB_0043b032
    CALL core_conveyor.cpp_CConveyor_ctor_FUN_0043b050 ; 0043b033
        ;   XREF to: 0043b050 (UNCONDITIONAL_CALL)  ; CConveyor * core_conveyor.cpp_CConveyor_ctor_FUN_0043b050(CConveyor * this_ptr)
    ADD ESP,0x4                         ; 0043b038
    RET                                 ; 0043b03b

