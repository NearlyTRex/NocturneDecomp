; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_level_cpp_staticInit_FUN_004fe800(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0
;   core_level.cpp_CLevelLoader_reset_FUN_004fe830
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d1bd1c                      ; 004fe800
        ;   Label: core_level.cpp_staticInit_FUN_004fe800
    CALL core_level.cpp_CLevelLoader_reset_FUN_004fe830 ; 004fe805
        ;   XREF to: 004fe830 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_reset_FUN_004fe830(CLevelLoader * this_ptr)
    ADD ESP,0x4                         ; 004fe80a
    PUSH 0x1d1be4c                      ; 004fe80d
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0 ; 004fe812
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004fe817
    PUSH 0x61f2d0                       ; 004fe81a
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004fe81f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 004fe824
    RET                                 ; 004fe827

