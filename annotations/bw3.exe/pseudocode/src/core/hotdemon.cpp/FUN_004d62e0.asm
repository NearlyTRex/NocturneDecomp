; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004d62e0(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd088                         ; 004d62e0
        ;   Label: core_hotdemon.cpp_FUN_004d62e0
    CALL crt_unknown.c_FUN_005a3cb2     ; 004d62e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d62ea
    TEST EAX,EAX                        ; 004d62ed
    JNZ 0x004d62f2                      ; 004d62ef
        ;   XREF to: 004d62f2 (CONDITIONAL_JUMP)  ; LAB_004d62f2
    RET                                 ; 004d62f1
    PUSH EAX                            ; 004d62f2
        ;   Label: LAB_004d62f2
    CALL core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310 ; 004d62f3
        ;   XREF to: 004d6310 (UNCONDITIONAL_CALL)  ; CAngelForest * core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest * this_ptr)
    ADD ESP,0x4                         ; 004d62f8
    RET                                 ; 004d62fb

