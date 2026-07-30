; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_factoryFunc_FUN_0043cee0(void)
;
;
; Called Functions:
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x810                          ; 0043cee0
        ;   Label: core_crossbow.cpp_factoryFunc_FUN_0043cee0
    CALL crt_unknown.c_FUN_0056497c     ; 0043cee5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0043ceea
    TEST EAX,EAX                        ; 0043ceed
    JNZ 0x0043cef2                      ; 0043ceef
        ;   XREF to: 0043cef2 (CONDITIONAL_JUMP)  ; LAB_0043cef2
    RET                                 ; 0043cef1
    PUSH EAX                            ; 0043cef2
        ;   Label: LAB_0043cef2
    CALL core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10 ; 0043cef3
        ;   XREF to: 0043cf10 (UNCONDITIONAL_CALL)  ; CCrossbow * core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10(CCrossbow * this_ptr)
    ADD ESP,0x4                         ; 0043cef8
    RET                                 ; 0043cefb

