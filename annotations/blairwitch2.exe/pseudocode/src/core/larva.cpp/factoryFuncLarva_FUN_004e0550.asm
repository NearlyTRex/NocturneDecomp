; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_factoryFuncLarva_FUN_004e0550(void)
;
;
; Called Functions:
;   core_larva.cpp_CLarva_ctor_FUN_004e0580
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b04                        ; 004e0550
        ;   Label: core_larva.cpp_factoryFuncLarva_FUN_004e0550
    CALL crt_unknown.c_FUN_005b8be2     ; 004e0555
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e055a
    TEST EAX,EAX                        ; 004e055d
    JNZ 0x004e0562                      ; 004e055f
        ;   XREF to: 004e0562 (CONDITIONAL_JUMP)  ; LAB_004e0562
    RET                                 ; 004e0561
    PUSH EAX                            ; 004e0562
        ;   Label: LAB_004e0562
    CALL core_larva.cpp_CLarva_ctor_FUN_004e0580 ; 004e0563
        ;   XREF to: 004e0580 (UNCONDITIONAL_CALL)  ; CLarva * core_larva.cpp_CLarva_ctor_FUN_004e0580(CLarva * this_ptr)
    ADD ESP,0x4                         ; 004e0568
    RET                                 ; 004e056b

