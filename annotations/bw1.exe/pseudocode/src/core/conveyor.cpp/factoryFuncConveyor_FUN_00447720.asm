; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_conveyor_cpp_factoryFuncConveyor_FUN_00447720(void)
;
;
; Called Functions:
;   core_conveyor.cpp_CConveyor_ctor_FUN_00447750
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x85c                          ; 00447720
        ;   Label: core_conveyor.cpp_factoryFuncConveyor_FUN_00447720
    CALL crt_unknown.c_FUN_005c0f32     ; 00447725
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0044772a
    TEST EAX,EAX                        ; 0044772d
    JNZ 0x00447732                      ; 0044772f
        ;   XREF to: 00447732 (CONDITIONAL_JUMP)  ; LAB_00447732
    RET                                 ; 00447731
    PUSH EAX                            ; 00447732
        ;   Label: LAB_00447732
    CALL core_conveyor.cpp_CConveyor_ctor_FUN_00447750 ; 00447733
        ;   XREF to: 00447750 (UNCONDITIONAL_CALL)  ; CConveyor * core_conveyor.cpp_CConveyor_ctor_FUN_00447750(CConveyor * this_ptr)
    ADD ESP,0x4                         ; 00447738
    RET                                 ; 0044773b

