; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_00534cd0(void)
;
;
; Called Functions:
;   core_stone.cpp_CTempleStone_ctor_FUN_00534d00
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x668                          ; 00534cd0
        ;   Label: core_stone.cpp_factoryFunc_FUN_00534cd0
    CALL crt_unknown.c_FUN_0056497c     ; 00534cd5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00534cda
    TEST EAX,EAX                        ; 00534cdd
    JNZ 0x00534ce2                      ; 00534cdf
        ;   XREF to: 00534ce2 (CONDITIONAL_JUMP)  ; LAB_00534ce2
    RET                                 ; 00534ce1
    PUSH EAX                            ; 00534ce2
        ;   Label: LAB_00534ce2
    CALL core_stone.cpp_CTempleStone_ctor_FUN_00534d00 ; 00534ce3
        ;   XREF to: 00534d00 (UNCONDITIONAL_CALL)  ; CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_00534d00(CTempleStone * this_ptr)
    ADD ESP,0x4                         ; 00534ce8
    RET                                 ; 00534ceb

