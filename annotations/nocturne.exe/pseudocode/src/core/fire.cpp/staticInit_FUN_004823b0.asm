; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_staticInit_FUN_004823b0(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_fire.cpp_CFireEffect_ctor_FUN_0048a130
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1c08d04                      ; 004823b0
        ;   Label: core_fire.cpp_staticInit_FUN_004823b0
    CALL core_fire.cpp_CFireEffect_ctor_FUN_0048a130 ; 004823b5
        ;   XREF to: 0048a130 (UNCONDITIONAL_CALL)  ; CFireEffect * core_fire.cpp_CFireEffect_ctor_FUN_0048a130(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004823ba
    PUSH 0x1c08d48                      ; 004823bd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004823c2
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004823c7
    PUSH 0x1c08ec4                      ; 004823ca
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004823cf
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004823d4
    PUSH 0x1c09040                      ; 004823d7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004823dc
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004823e1
    PUSH 0x1c091bc                      ; 004823e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004823e9
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004823ee
    PUSH 0x1c09338                      ; 004823f1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004823f6
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004823fb
    PUSH 0x59b030                       ; 004823fe
    PUSH 0x5                            ; 00482403
    PUSH 0x1c094bc                      ; 00482405
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048240a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048240f
    PUSH 0x59d300                       ; 00482412
    PUSH 0x800                          ; 00482417
    PUSH 0x1c0a140                      ; 0048241c
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482421
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482426
    PUSH 0x59d320                       ; 00482429
    PUSH 0x100                          ; 0048242e
    PUSH 0x1c20148                      ; 00482433
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482438
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048243d
    PUSH 0x59d340                       ; 00482440
    PUSH 0x100                          ; 00482445
    PUSH 0x1c23d50                      ; 0048244a
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048244f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482454
    PUSH 0x5b8050                       ; 00482457
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0048245c
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00482461
    PUSH 0x59d360                       ; 00482464
    PUSH 0x100                          ; 00482469
    PUSH 0x1c49d54                      ; 0048246e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482473
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482478
    PUSH 0x5b8060                       ; 0048247b
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00482480
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00482485
    PUSH 0x59d380                       ; 00482488
    PUSH 0x14                           ; 0048248d
    PUSH 0x1c4e958                      ; 0048248f
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482494
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482499
    PUSH 0x59d3a0                       ; 0048249c
    PUSH 0x100                          ; 004824a1
    PUSH 0x1c4f08c                      ; 004824a6
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004824ab
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004824b0
    PUSH 0x5b8070                       ; 004824b3
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004824b8
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004824bd
    PUSH 0x59d3c0                       ; 004824c0
    PUSH 0xa                            ; 004824c5
    PUSH 0x1c58c90                      ; 004824c7
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004824cc
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004824d1
    PUSH 0x59d3e0                       ; 004824d4
    PUSH 0x40                           ; 004824d9
    PUSH 0x1c58dfc                      ; 004824db
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004824e0
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004824e5
    PUSH 0x5b8080                       ; 004824e8
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004824ed
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004824f2
    PUSH 0x59d400                       ; 004824f5
    PUSH 0x40                           ; 004824fa
    PUSH 0x1c5b500                      ; 004824fc
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482501
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482506
    PUSH 0x5b8090                       ; 00482509
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0048250e
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00482513
    PUSH 0x59d420                       ; 00482516
    PUSH 0x40                           ; 0048251b
    PUSH 0x1c5c704                      ; 0048251d
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482522
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482527
    PUSH 0x59d440                       ; 0048252a
    PUSH 0xa                            ; 0048252f
    PUSH 0x1c5d708                      ; 00482531
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482536
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048253b
    PUSH 0x59d460                       ; 0048253e
    PUSH 0x14                           ; 00482543
    PUSH 0x1c5d824                      ; 00482545
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048254a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048254f
    PUSH 0x5b80a0                       ; 00482552
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00482557
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0048255c
    PUSH 0x59d480                       ; 0048255f
    PUSH 0x14                           ; 00482564
    PUSH 0x1c625f8                      ; 00482566
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048256b
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482570
    PUSH 0x5b80b0                       ; 00482573
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00482578
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0048257d
    PUSH 0x59d4a0                       ; 00482580
    PUSH 0x1f4                          ; 00482585
    PUSH 0x1c62ebc                      ; 0048258a
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048258f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482594
    PUSH 0x59d4c0                       ; 00482597
    PUSH 0xa                            ; 0048259c
    PUSH 0x1c67510                      ; 0048259e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004825a3
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004825a8
    PUSH 0x59d4e0                       ; 004825ab
    PUSH 0x64                           ; 004825b0
    PUSH 0x1c676cc                      ; 004825b2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004825b7
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004825bc
    PUSH 0x59d500                       ; 004825bf
    PUSH 0x32                           ; 004825c4
    PUSH 0x1c684e0                      ; 004825c6
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004825cb
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004825d0
    PUSH 0x5b80c0                       ; 004825d3
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004825d8
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004825dd
    PUSH 0x59d520                       ; 004825e0
    PUSH 0x100                          ; 004825e5
    PUSH 0x1c69614                      ; 004825ea
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004825ef
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004825f4
    PUSH 0x5b80d0                       ; 004825f7
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004825fc
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00482601
    PUSH 0x59d540                       ; 00482604
    PUSH 0x100                          ; 00482609
    PUSH 0x1c6ce18                      ; 0048260e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00482613
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00482618
    PUSH 0x5b80e0                       ; 0048261b
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00482620
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00482625
    RET                                 ; 00482628

