; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_005113e0(void)
;
;
; Called Functions:
;   core_passngr.cpp_CPassenger_ctor_FUN_00511410
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x25088                        ; 005113e0
        ;   Label: core_passngr.cpp_factoryFuncPassenger_FUN_005113e0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005113e5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005113ea
    TEST EAX,EAX                        ; 005113ed
    JNZ 0x005113f2                      ; 005113ef
        ;   XREF to: 005113f2 (CONDITIONAL_JUMP)  ; LAB_005113f2
    RET                                 ; 005113f1
    PUSH EAX                            ; 005113f2
        ;   Label: LAB_005113f2
    CALL core_passngr.cpp_CPassenger_ctor_FUN_00511410 ; 005113f3
        ;   XREF to: 00511410 (UNCONDITIONAL_CALL)  ; CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00511410(CPassenger * this_ptr)
    ADD ESP,0x4                         ; 005113f8
    RET                                 ; 005113fb

