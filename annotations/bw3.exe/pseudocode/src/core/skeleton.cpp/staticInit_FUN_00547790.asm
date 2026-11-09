; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_staticInit_FUN_00547790(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5e47b0                       ; 00547790
        ;   Label: core_skeleton.cpp_staticInit_FUN_00547790
    PUSH 0x40                           ; 00547795
    PUSH 0x272af5c                      ; 00547797
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0054779c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 005477a1
    PUSH 0x604178                       ; 005477a4
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005477a9
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 005477ae
    PUSH 0x5e47d0                       ; 005477b1
    PUSH 0x28                           ; 005477b6
    PUSH 0x280305c                      ; 005477b8
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 005477bd
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 005477c2
    PUSH 0x604188                       ; 005477c5
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005477ca
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 005477cf
    RET                                 ; 005477d2

