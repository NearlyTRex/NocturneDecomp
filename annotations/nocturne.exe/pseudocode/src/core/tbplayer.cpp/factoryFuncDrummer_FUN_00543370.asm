; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_00543370(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f578                        ; 00543370
        ;   Label: core_tbplayer.cpp_factoryFuncDrummer_FUN_00543370
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00543375
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0054337a
    TEST EAX,EAX                        ; 0054337d
    JNZ 0x00543382                      ; 0054337f
        ;   XREF to: 00543382 (CONDITIONAL_JUMP)  ; LAB_00543382
    RET                                 ; 00543381
    PUSH EAX                            ; 00543382
        ;   Label: LAB_00543382
    CALL core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0 ; 00543383
        ;   XREF to: 005433a0 (UNCONDITIONAL_CALL)  ; CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0(CDrummer * this_ptr)
    ADD ESP,0x4                         ; 00543388
    RET                                 ; 0054338b

