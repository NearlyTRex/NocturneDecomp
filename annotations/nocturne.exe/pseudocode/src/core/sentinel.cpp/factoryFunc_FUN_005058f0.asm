; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_005058f0(void)
;
;
; Called Functions:
;   core_sentinel.cpp_CSentinel_ctor_FUN_00505920
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd2c                         ; 005058f0
        ;   Label: core_sentinel.cpp_factoryFunc_FUN_005058f0
    CALL crt_unknown.c_FUN_0056497c     ; 005058f5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 005058fa
    TEST EAX,EAX                        ; 005058fd
    JNZ 0x00505902                      ; 005058ff
        ;   XREF to: 00505902 (CONDITIONAL_JUMP)  ; LAB_00505902
    RET                                 ; 00505901
    PUSH EAX                            ; 00505902
        ;   Label: LAB_00505902
    CALL core_sentinel.cpp_CSentinel_ctor_FUN_00505920 ; 00505903
        ;   XREF to: 00505920 (UNCONDITIONAL_CALL)  ; CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_00505920(CSentinel * this_ptr)
    ADD ESP,0x4                         ; 00505908
    RET                                 ; 0050590b

