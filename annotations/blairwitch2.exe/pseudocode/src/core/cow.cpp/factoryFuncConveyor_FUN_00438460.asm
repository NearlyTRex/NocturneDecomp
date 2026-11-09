; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_factoryFuncConveyor_FUN_00438460(void)
;
;
; Called Functions:
;   core_conveyor.cpp_CConveyor_ctor_FUN_00438490
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x9b8                          ; 00438460
        ;   Label: core_cow.cpp_factoryFuncConveyor_FUN_00438460
    CALL crt_unknown.c_FUN_005b8be2     ; 00438465
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0043846a
    TEST EAX,EAX                        ; 0043846d
    JNZ 0x00438472                      ; 0043846f
        ;   XREF to: 00438472 (CONDITIONAL_JUMP)  ; LAB_00438472
    RET                                 ; 00438471
    PUSH EAX                            ; 00438472
        ;   Label: LAB_00438472
    CALL core_conveyor.cpp_CConveyor_ctor_FUN_00438490 ; 00438473
        ;   XREF to: 00438490 (UNCONDITIONAL_CALL)  ; CConveyor * core_conveyor.cpp_CConveyor_ctor_FUN_00438490(CConveyor * this_ptr)
    ADD ESP,0x4                         ; 00438478
    RET                                 ; 0043847b

