; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_staticInit_FUN_0045d6c0(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_ctor_FUN_0045d740
;   core_dfilter.cpp_CFilterFX_ctor_FUN_0045dd50
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fd010                       ; 0045d6c0
        ;   Label: core_dfilter.cpp_staticInit_FUN_0045d6c0
    PUSH 0x8                            ; 0045d6c5
    PUSH 0x152c39c                      ; 0045d6c7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0045d6cc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0045d6d1
    PUSH 0x6112e8                       ; 0045d6d4
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0045d6d9
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0045d6de
    PUSH 0x5fd010                       ; 0045d6e1
    PUSH 0x4                            ; 0045d6e6
    PUSH 0x152c5fc                      ; 0045d6e8
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0045d6ed
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0045d6f2
    PUSH 0x6112f8                       ; 0045d6f5
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0045d6fa
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0045d6ff
    PUSH 0x152c72c                      ; 0045d702
    CALL core_dfilter.cpp_CFilterCache_ctor_FUN_0045d740 ; 0045d707
        ;   XREF to: 0045d740 (UNCONDITIONAL_CALL)  ; CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_0045d740(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0045d70c
    PUSH 0x611308                       ; 0045d70f
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0045d714
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0045d719
    PUSH 0x152d230                      ; 0045d71c
    CALL core_dfilter.cpp_CFilterFX_ctor_FUN_0045dd50 ; 0045d721
        ;   XREF to: 0045dd50 (UNCONDITIONAL_CALL)  ; CFilterFX * core_dfilter.cpp_CFilterFX_ctor_FUN_0045dd50(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 0045d726
    PUSH 0x611318                       ; 0045d729
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0045d72e
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0045d733
    RET                                 ; 0045d736

