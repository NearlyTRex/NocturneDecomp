; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_level_cpp_staticInit_FUN_004e1440(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10
;   core_level.cpp_CLevelLoader_reset_FUN_004e1470
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d03000                      ; 004e1440
        ;   Label: core_level.cpp_staticInit_FUN_004e1440
    CALL core_level.cpp_CLevelLoader_reset_FUN_004e1470 ; 004e1445
        ;   XREF to: 004e1470 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_reset_FUN_004e1470(CLevelLoader * this_ptr)
    ADD ESP,0x4                         ; 004e144a
    PUSH 0x1d03130                      ; 004e144d
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 004e1452
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004e1457
    PUSH 0x617e00                       ; 004e145a
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004e145f
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004e1464
    RET                                 ; 004e1467

