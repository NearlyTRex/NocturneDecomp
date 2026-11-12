; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bird_cpp_factoryFuncBird_FUN_004151c0(void)
;
;
; Called Functions:
;   core_bird.cpp_CBird_ctor_FUN_004151f0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fac0                        ; 004151c0
        ;   Label: core_bird.cpp_factoryFuncBird_FUN_004151c0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004151c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004151ca
    TEST EAX,EAX                        ; 004151cd
    JNZ 0x004151d2                      ; 004151cf
        ;   XREF to: 004151d2 (CONDITIONAL_JUMP)  ; LAB_004151d2
    RET                                 ; 004151d1
    PUSH EAX                            ; 004151d2
        ;   Label: LAB_004151d2
    CALL core_bird.cpp_CBird_ctor_FUN_004151f0 ; 004151d3
        ;   XREF to: 004151f0 (UNCONDITIONAL_CALL)  ; CBird * core_bird.cpp_CBird_ctor_FUN_004151f0(CBird * this_ptr)
    ADD ESP,0x4                         ; 004151d8
    RET                                 ; 004151db

