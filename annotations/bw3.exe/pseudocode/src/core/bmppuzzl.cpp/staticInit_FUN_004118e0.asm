; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_staticInit_FUN_004118e0(void)
;
;
; Called Functions:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50
;   core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004118e0
        ;   Label: core_bmppuzzl.cpp_staticInit_FUN_004118e0
    PUSH 0x4                            ; 004118e5
    PUSH 0x7dffc0                       ; 004118e7
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004118ec
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004118f1
    PUSH 0x5f0c67                       ; 004118f4
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004118f9
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004118fe
    PUSH 0x5dbf20                       ; 00411901
    PUSH 0x5                            ; 00411906
    PUSH 0x7e0010                       ; 00411908
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0041190d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00411912
    PUSH 0x5f0c77                       ; 00411915
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0041191a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 0041191f
    PUSH 0x7e0074                       ; 00411922
    CALL core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50 ; 00411927
        ;   XREF to: 00411b50 (UNCONDITIONAL_CALL)  ; CAudioRecPuzzle * core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50(CAudioRecPuzzle * this_ptr)
    ADD ESP,0x4                         ; 0041192c
    PUSH 0x5f0c87                       ; 0041192f
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00411934
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 00411939
    PUSH 0x7e0ca0                       ; 0041193c
    CALL core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200 ; 00411941
        ;   XREF to: 00413200 (UNCONDITIONAL_CALL)  ; CChemPuzzle * core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle * this_ptr)
    ADD ESP,0x4                         ; 00411946
    PUSH 0x5f0c97                       ; 00411949
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0041194e
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 00411953
    RET                                 ; 00411956

