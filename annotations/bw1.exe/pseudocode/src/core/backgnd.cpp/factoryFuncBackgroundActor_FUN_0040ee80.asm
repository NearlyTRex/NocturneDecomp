; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80(void)
;
;
; Called Functions:
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2e0                          ; 0040ee80
        ;   Label: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040ee80
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0040ee85
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040ee8a
    TEST EAX,EAX                        ; 0040ee8d
    JNZ 0x0040ee92                      ; 0040ee8f
        ;   XREF to: 0040ee92 (CONDITIONAL_JUMP)  ; LAB_0040ee92
    RET                                 ; 0040ee91
    PUSH EAX                            ; 0040ee92
        ;   Label: LAB_0040ee92
    CALL core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0 ; 0040ee93
        ;   XREF to: 0040eeb0 (UNCONDITIONAL_CALL)  ; CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0(CBackgroundActor * this_ptr)
    ADD ESP,0x4                         ; 0040ee98
    RET                                 ; 0040ee9b

