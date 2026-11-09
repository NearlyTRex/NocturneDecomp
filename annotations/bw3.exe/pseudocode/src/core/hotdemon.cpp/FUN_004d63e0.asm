; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004d63e0(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd088                         ; 004d63e0
        ;   Label: core_hotdemon.cpp_FUN_004d63e0
    CALL crt_unknown.c_FUN_005a3cb2     ; 004d63e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d63ea
    TEST EAX,EAX                        ; 004d63ed
    JNZ 0x004d63f2                      ; 004d63ef
        ;   XREF to: 004d63f2 (CONDITIONAL_JUMP)  ; LAB_004d63f2
    RET                                 ; 004d63f1
    PUSH EAX                            ; 004d63f2
        ;   Label: LAB_004d63f2
    CALL core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410 ; 004d63f3
        ;   XREF to: 004d6410 (UNCONDITIONAL_CALL)  ; CAngelDemon * core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon * this_ptr)
    ADD ESP,0x4                         ; 004d63f8
    RET                                 ; 004d63fb

