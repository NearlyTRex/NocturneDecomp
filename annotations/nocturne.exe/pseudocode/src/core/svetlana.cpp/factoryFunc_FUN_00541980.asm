; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_factoryFunc_FUN_00541980(void)
;
;
; Called Functions:
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x950c0                        ; 00541980
        ;   Label: core_svetlana.cpp_factoryFunc_FUN_00541980
    CALL crt_unknown.c_FUN_0056497c     ; 00541985
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054198a
    TEST EAX,EAX                        ; 0054198d
    JNZ 0x00541992                      ; 0054198f
        ;   XREF to: 00541992 (CONDITIONAL_JUMP)  ; LAB_00541992
    RET                                 ; 00541991
    PUSH EAX                            ; 00541992
        ;   Label: LAB_00541992
    CALL core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0 ; 00541993
        ;   XREF to: 005419b0 (UNCONDITIONAL_CALL)  ; CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana * this_ptr)
    ADD ESP,0x4                         ; 00541998
    RET                                 ; 0054199b

