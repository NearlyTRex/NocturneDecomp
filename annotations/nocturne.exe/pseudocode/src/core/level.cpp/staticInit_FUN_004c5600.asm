; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_staticInit_FUN_004c5600(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
;   core_larva.cpp_FUN_004c5630
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1cc3160                      ; 004c5600
        ;   Label: core_level.cpp_staticInit_FUN_004c5600
    CALL core_larva.cpp_FUN_004c5630    ; 004c5605
        ;   XREF to: 004c5630 (UNCONDITIONAL_CALL)  ; undefined core_larva.cpp_FUN_004c5630()
    ADD ESP,0x4                         ; 004c560a
    PUSH 0x1cc3290                      ; 004c560d
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590 ; 004c5612
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004c5617
    PUSH 0x5bac90                       ; 004c561a
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004c561f
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004c5624
    RET                                 ; 004c5627

