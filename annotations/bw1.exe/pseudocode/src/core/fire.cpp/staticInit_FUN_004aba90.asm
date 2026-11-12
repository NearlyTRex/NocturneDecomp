; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_staticInit_FUN_004aba90(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_fire.cpp_CFireEffect_ctor_FUN_004b4b10
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1c57074                      ; 004aba90
        ;   Label: core_fire.cpp_staticInit_FUN_004aba90
    CALL core_fire.cpp_CFireEffect_ctor_FUN_004b4b10 ; 004aba95
        ;   XREF to: 004b4b10 (UNCONDITIONAL_CALL)  ; CFireEffect * core_fire.cpp_CFireEffect_ctor_FUN_004b4b10(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004aba9a
    PUSH 0x1c570b8                      ; 004aba9d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004abaa2
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004abaa7
    PUSH 0x1c57234                      ; 004abaaa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004abaaf
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004abab4
    PUSH 0x1c573b0                      ; 004abab7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004ababc
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004abac1
    PUSH 0x1c5752c                      ; 004abac4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004abac9
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004abace
    PUSH 0x5fd3b0                       ; 004abad1
    PUSH 0x4                            ; 004abad6
    PUSH 0x1c576a8                      ; 004abad8
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abadd
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abae2
    PUSH 0x1c57c98                      ; 004abae5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004abaea
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004abaef
    PUSH 0x5fd3b0                       ; 004abaf2
    PUSH 0x5                            ; 004abaf7
    PUSH 0x1c57e1c                      ; 004abaf9
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abafe
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb03
    PUSH 0x6000e0                       ; 004abb06
    PUSH 0x800                          ; 004abb0b
    PUSH 0x1c58aa0                      ; 004abb10
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abb15
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb1a
    PUSH 0x600100                       ; 004abb1d
    PUSH 0x100                          ; 004abb22
    PUSH 0x1c6eaa8                      ; 004abb27
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abb2c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb31
    PUSH 0x600120                       ; 004abb34
    PUSH 0x100                          ; 004abb39
    PUSH 0x1c726b0                      ; 004abb3e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abb43
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb48
    PUSH 0x61bf60                       ; 004abb4b
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abb50
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abb55
    PUSH 0x600140                       ; 004abb58
    PUSH 0x100                          ; 004abb5d
    PUSH 0x1c986b4                      ; 004abb62
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abb67
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb6c
    PUSH 0x61bf70                       ; 004abb6f
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abb74
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abb79
    PUSH 0x600160                       ; 004abb7c
    PUSH 0x40                           ; 004abb81
    PUSH 0x1c9dab8                      ; 004abb83
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abb88
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abb8d
    PUSH 0x61bf80                       ; 004abb90
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abb95
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abb9a
    PUSH 0x600180                       ; 004abb9d
    PUSH 0x14                           ; 004abba2
    PUSH 0x1c9f1bc                      ; 004abba4
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abba9
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abbae
    PUSH 0x6001a0                       ; 004abbb1
    PUSH 0x100                          ; 004abbb6
    PUSH 0x1c9f8f0                      ; 004abbbb
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abbc0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abbc5
    PUSH 0x61bf90                       ; 004abbc8
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abbcd
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abbd2
    PUSH 0x6001c0                       ; 004abbd5
    PUSH 0xa                            ; 004abbda
    PUSH 0x1ca9cf4                      ; 004abbdc
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abbe1
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abbe6
    PUSH 0x6001e0                       ; 004abbe9
    PUSH 0x40                           ; 004abbee
    PUSH 0x1ca9e60                      ; 004abbf0
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abbf5
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abbfa
    PUSH 0x61bfa0                       ; 004abbfd
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abc02
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abc07
    PUSH 0x600200                       ; 004abc0a
    PUSH 0x40                           ; 004abc0f
    PUSH 0x1cac764                      ; 004abc11
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abc16
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abc1b
    PUSH 0x61bfb0                       ; 004abc1e
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abc23
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abc28
    PUSH 0x600220                       ; 004abc2b
    PUSH 0x40                           ; 004abc30
    PUSH 0x1cadb68                      ; 004abc32
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abc37
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abc3c
    PUSH 0x61bfc0                       ; 004abc3f
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abc44
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abc49
    PUSH 0x600240                       ; 004abc4c
    PUSH 0x40                           ; 004abc51
    PUSH 0x1caf06c                      ; 004abc53
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abc58
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abc5d
    PUSH 0x600260                       ; 004abc60
    PUSH 0xa                            ; 004abc65
    PUSH 0x1cb0070                      ; 004abc67
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abc6c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abc71
    PUSH 0x600280                       ; 004abc74
    PUSH 0x14                           ; 004abc79
    PUSH 0x1cb018c                      ; 004abc7b
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abc80
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abc85
    PUSH 0x61bfd0                       ; 004abc88
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abc8d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abc92
    PUSH 0x6002a0                       ; 004abc95
    PUSH 0x14                           ; 004abc9a
    PUSH 0x1cb4f60                      ; 004abc9c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abca1
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abca6
    PUSH 0x6002c0                       ; 004abca9
    PUSH 0x1f4                          ; 004abcae
    PUSH 0x1cb5824                      ; 004abcb3
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abcb8
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abcbd
    PUSH 0x6002e0                       ; 004abcc0
    PUSH 0xa                            ; 004abcc5
    PUSH 0x1cb9e78                      ; 004abcc7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abccc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abcd1
    PUSH 0x600300                       ; 004abcd4
    PUSH 0x64                           ; 004abcd9
    PUSH 0x1cba034                      ; 004abcdb
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abce0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abce5
    PUSH 0x600320                       ; 004abce8
    PUSH 0x32                           ; 004abced
    PUSH 0x1cbae48                      ; 004abcef
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abcf4
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abcf9
    PUSH 0x61bfe0                       ; 004abcfc
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abd01
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abd06
    PUSH 0x600340                       ; 004abd09
    PUSH 0x100                          ; 004abd0e
    PUSH 0x1cbc10c                      ; 004abd13
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abd18
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abd1d
    PUSH 0x61bff0                       ; 004abd20
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abd25
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abd2a
    PUSH 0x600360                       ; 004abd2d
    PUSH 0x100                          ; 004abd32
    PUSH 0x1cc0110                      ; 004abd37
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004abd3c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004abd41
    PUSH 0x61c000                       ; 004abd44
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004abd49
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004abd4e
    RET                                 ; 004abd51

