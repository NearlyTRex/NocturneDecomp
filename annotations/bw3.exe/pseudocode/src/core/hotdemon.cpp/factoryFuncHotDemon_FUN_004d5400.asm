; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd088                         ; 004d5400
        ;   Label: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d5400
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004d5405
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d540a
    TEST EAX,EAX                        ; 004d540d
    JNZ 0x004d5412                      ; 004d540f
        ;   XREF to: 004d5412 (CONDITIONAL_JUMP)  ; LAB_004d5412
    RET                                 ; 004d5411
    PUSH EAX                            ; 004d5412
        ;   Label: LAB_004d5412
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430 ; 004d5413
        ;   XREF to: 004d5430 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004d5418
    RET                                 ; 004d541b

