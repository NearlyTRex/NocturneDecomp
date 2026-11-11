; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004d6360(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CAngelSpirit_ctor_FUN_004d6390
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd088                         ; 004d6360
        ;   Label: core_hotdemon.cpp_FUN_004d6360
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004d6365
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d636a
    TEST EAX,EAX                        ; 004d636d
    JNZ 0x004d6372                      ; 004d636f
        ;   XREF to: 004d6372 (CONDITIONAL_JUMP)  ; LAB_004d6372
    RET                                 ; 004d6371
    PUSH EAX                            ; 004d6372
        ;   Label: LAB_004d6372
    CALL core_hotdemon.cpp_CAngelSpirit_ctor_FUN_004d6390 ; 004d6373
        ;   XREF to: 004d6390 (UNCONDITIONAL_CALL)  ; CAngelSpirit * core_hotdemon.cpp_CAngelSpirit_ctor_FUN_004d6390(CAngelSpirit * this_ptr)
    ADD ESP,0x4                         ; 004d6378
    RET                                 ; 004d637b

