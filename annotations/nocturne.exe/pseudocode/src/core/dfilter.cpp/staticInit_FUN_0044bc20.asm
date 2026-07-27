; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void)
;
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0
;   core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x59ac90                       ; 0044bc20
        ;   Label: core_dfilter.cpp_staticInit_FUN_0044bc20
    PUSH 0x8                            ; 0044bc25
    PUSH 0x14b8a58                      ; 0044bc27
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0044bc2c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0044bc31
    PUSH 0x5ad4dc                       ; 0044bc34
    CALL crt_unknown.c_FUN_00564bb0     ; 0044bc39
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0044bc3e
    PUSH 0x59ac90                       ; 0044bc41
    PUSH 0x4                            ; 0044bc46
    PUSH 0x14b8cb8                      ; 0044bc48
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0044bc4d
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0044bc52
    PUSH 0x5ad4ec                       ; 0044bc55
    CALL crt_unknown.c_FUN_00564bb0     ; 0044bc5a
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0044bc5f
    PUSH 0x14b8de8                      ; 0044bc62
    CALL core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0 ; 0044bc67
        ;   XREF to: 0044bca0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0()
    ADD ESP,0x4                         ; 0044bc6c
    PUSH 0x5ad4fc                       ; 0044bc6f
    CALL crt_unknown.c_FUN_00564bb0     ; 0044bc74
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0044bc79
    PUSH 0x14b98ec                      ; 0044bc7c
    CALL core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0 ; 0044bc81
        ;   XREF to: 0044c2b0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0()
    ADD ESP,0x4                         ; 0044bc86
    PUSH 0x5ad50c                       ; 0044bc89
    CALL crt_unknown.c_FUN_00564bb0     ; 0044bc8e
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0044bc93
    RET                                 ; 0044bc96

