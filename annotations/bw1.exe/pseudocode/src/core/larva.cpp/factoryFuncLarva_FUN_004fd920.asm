; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_factoryFuncLarva_FUN_004fd920(void)
;
;
; Called Functions:
;   core_larva.cpp_CLarva_ctor_FUN_004fd950
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc274                         ; 004fd920
        ;   Label: core_larva.cpp_factoryFuncLarva_FUN_004fd920
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004fd925
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004fd92a
    TEST EAX,EAX                        ; 004fd92d
    JNZ 0x004fd932                      ; 004fd92f
        ;   XREF to: 004fd932 (CONDITIONAL_JUMP)  ; LAB_004fd932
    RET                                 ; 004fd931
    PUSH EAX                            ; 004fd932
        ;   Label: LAB_004fd932
    CALL core_larva.cpp_CLarva_ctor_FUN_004fd950 ; 004fd933
        ;   XREF to: 004fd950 (UNCONDITIONAL_CALL)  ; CLarva * core_larva.cpp_CLarva_ctor_FUN_004fd950(CLarva * this_ptr)
    ADD ESP,0x4                         ; 004fd938
    RET                                 ; 004fd93b

