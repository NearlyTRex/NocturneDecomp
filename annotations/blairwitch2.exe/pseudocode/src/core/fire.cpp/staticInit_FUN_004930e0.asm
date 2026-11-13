; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_staticInit_FUN_004930e0(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_fire.cpp_CFireEffect_ctor_FUN_0049c170
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1c3deb4                      ; 004930e0
        ;   Label: core_fire.cpp_staticInit_FUN_004930e0
    CALL core_fire.cpp_CFireEffect_ctor_FUN_0049c170 ; 004930e5
        ;   XREF to: 0049c170 (UNCONDITIONAL_CALL)  ; CFireEffect * core_fire.cpp_CFireEffect_ctor_FUN_0049c170(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004930ea
    PUSH 0x1c3def8                      ; 004930ed
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004930f2
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004930f7
    PUSH 0x1c3e074                      ; 004930fa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004930ff
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00493104
    PUSH 0x1c3e1f0                      ; 00493107
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0049310c
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00493111
    PUSH 0x1c3e36c                      ; 00493114
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00493119
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049311e
    PUSH 0x5f3fc0                       ; 00493121
    PUSH 0x4                            ; 00493126
    PUSH 0x1c3e4e8                      ; 00493128
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049312d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493132
    PUSH 0x1c3ead8                      ; 00493135
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0049313a
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049313f
    PUSH 0x5f3fc0                       ; 00493142
    PUSH 0x5                            ; 00493147
    PUSH 0x1c3ec5c                      ; 00493149
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049314e
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493153
    PUSH 0x5f6630                       ; 00493156
    PUSH 0x800                          ; 0049315b
    PUSH 0x1c3f8e0                      ; 00493160
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493165
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049316a
    PUSH 0x5f6650                       ; 0049316d
    PUSH 0x100                          ; 00493172
    PUSH 0x1c558e8                      ; 00493177
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049317c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493181
    PUSH 0x5f6670                       ; 00493184
    PUSH 0x100                          ; 00493189
    PUSH 0x1c594f0                      ; 0049318e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493193
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493198
    PUSH 0x614c80                       ; 0049319b
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004931a0
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004931a5
    PUSH 0x5f6690                       ; 004931a8
    PUSH 0x100                          ; 004931ad
    PUSH 0x1c7f4f4                      ; 004931b2
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004931b7
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004931bc
    PUSH 0x614c90                       ; 004931bf
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004931c4
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004931c9
    PUSH 0x5f66b0                       ; 004931cc
    PUSH 0x40                           ; 004931d1
    PUSH 0x1c848f8                      ; 004931d3
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004931d8
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004931dd
    PUSH 0x614ca0                       ; 004931e0
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004931e5
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004931ea
    PUSH 0x5f66d0                       ; 004931ed
    PUSH 0x14                           ; 004931f2
    PUSH 0x1c85ffc                      ; 004931f4
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004931f9
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004931fe
    PUSH 0x5f66f0                       ; 00493201
    PUSH 0x14                           ; 00493206
    PUSH 0x1c86730                      ; 00493208
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049320d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493212
    PUSH 0x5f6710                       ; 00493215
    PUSH 0x100                          ; 0049321a
    PUSH 0x1c86e64                      ; 0049321f
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493224
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493229
    PUSH 0x614cb0                       ; 0049322c
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00493231
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00493236
    PUSH 0x5f6730                       ; 00493239
    PUSH 0xa                            ; 0049323e
    PUSH 0x1c91268                      ; 00493240
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493245
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049324a
    PUSH 0x5f6750                       ; 0049324d
    PUSH 0x40                           ; 00493252
    PUSH 0x1c913d4                      ; 00493254
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493259
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049325e
    PUSH 0x614cc0                       ; 00493261
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00493266
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049326b
    PUSH 0x5f6770                       ; 0049326e
    PUSH 0x40                           ; 00493273
    PUSH 0x1c93cd8                      ; 00493275
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049327a
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049327f
    PUSH 0x614cd0                       ; 00493282
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00493287
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049328c
    PUSH 0x5f6790                       ; 0049328f
    PUSH 0x40                           ; 00493294
    PUSH 0x1c950dc                      ; 00493296
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049329b
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004932a0
    PUSH 0x614ce0                       ; 004932a3
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004932a8
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004932ad
    PUSH 0x5f67b0                       ; 004932b0
    PUSH 0x40                           ; 004932b5
    PUSH 0x1c965e0                      ; 004932b7
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004932bc
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004932c1
    PUSH 0x5f67d0                       ; 004932c4
    PUSH 0xa                            ; 004932c9
    PUSH 0x1c975e4                      ; 004932cb
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004932d0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004932d5
    PUSH 0x5f67f0                       ; 004932d8
    PUSH 0x14                           ; 004932dd
    PUSH 0x1c97700                      ; 004932df
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004932e4
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004932e9
    PUSH 0x614cf0                       ; 004932ec
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004932f1
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004932f6
    PUSH 0x5f6810                       ; 004932f9
    PUSH 0x14                           ; 004932fe
    PUSH 0x1c9c4d4                      ; 00493300
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493305
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049330a
    PUSH 0x5f6830                       ; 0049330d
    PUSH 0x1f4                          ; 00493312
    PUSH 0x1c9cd98                      ; 00493317
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049331c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493321
    PUSH 0x5f6850                       ; 00493324
    PUSH 0xa                            ; 00493329
    PUSH 0x1ca13ec                      ; 0049332b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493330
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493335
    PUSH 0x5f6870                       ; 00493338
    PUSH 0x64                           ; 0049333d
    PUSH 0x1ca15a8                      ; 0049333f
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493344
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493349
    PUSH 0x5f6890                       ; 0049334c
    PUSH 0x32                           ; 00493351
    PUSH 0x1ca23bc                      ; 00493353
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00493358
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049335d
    PUSH 0x614d00                       ; 00493360
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00493365
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049336a
    PUSH 0x5f68b0                       ; 0049336d
    PUSH 0x100                          ; 00493372
    PUSH 0x1ca3680                      ; 00493377
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049337c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00493381
    PUSH 0x614d10                       ; 00493384
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00493389
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049338e
    PUSH 0x5f68d0                       ; 00493391
    PUSH 0x100                          ; 00493396
    PUSH 0x1ca7684                      ; 0049339b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004933a0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004933a5
    PUSH 0x614d20                       ; 004933a8
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004933ad
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004933b2
    RET                                 ; 004933b5

