; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005169e0(void)
;
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_00516a10
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x570                          ; 005169e0
        ;   Label: FUN_005169e0
    CALL FUN_0056497c                   ; 005169e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 005169ea
    TEST EAX,EAX                        ; 005169ed
    JNZ 0x005169f2                      ; 005169ef
        ;   XREF to: 005169f2 (CONDITIONAL_JUMP)  ; LAB_005169f2
    RET                                 ; 005169f1
    PUSH EAX                            ; 005169f2
        ;   Label: LAB_005169f2
    CALL core_shovel.cpp_CShovel_ctor_FUN_00516a10 ; 005169f3
        ;   XREF to: 00516a10 (UNCONDITIONAL_CALL)  ; undefined core_shovel.cpp_CShovel_ctor_FUN_00516a10()
    ADD ESP,0x4                         ; 005169f8
    RET                                 ; 005169fb

