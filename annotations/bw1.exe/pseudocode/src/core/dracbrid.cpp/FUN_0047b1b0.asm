; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_0047b1b0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_nbride2_dfm_005dac27
;   TerminatedCString s_nbride2x_dfm_005dac33
;   TerminatedCString s_nbride3_dfm_005dac40
;   TerminatedCString s_nbride3x_dfm_005dac4c
;   TerminatedCString s_nbride4_dfm_005dac59
;   TerminatedCString s_nbride4x_dfm_005dac65
;   TerminatedCString s_nbride2x_dfm_005dac72
;   TerminatedCString s_nbride2_dfm_005dac7f
;   TerminatedCString s_nbride3x_dfm_005dac8b
;   TerminatedCString s_nbride3_dfm_005dac98
;   TerminatedCString s_nbride4x_dfm_005daca4
;   TerminatedCString s_nbride4_dfm_005dacb1
;   TerminatedCString s_Bip01_Head_005dacbd
;   TerminatedCString s_Bip01_L_Hand_005dacc8
;   TerminatedCString s_Bip01_R_Hand_005dacd5
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569f50
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b1b0
        ;   Label: core_dracbrid.cpp_FUN_0047b1b0
    SUB ESP,0x4                         ; 0047b1b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047b1b4
    PUSH EDI                            ; 0047b1b8
    PUSH ESI                            ; 0047b1b9
    MOV EDI,dword ptr [0x0061d95c]      ; 0047b1ba | g_CGamePtr
    LEA EAX,[EBX + 0x24a8]              ; 0047b1c0
    MOV EDX,dword ptr [EDI + 0x18]      ; 0047b1c6 | g_CGameInstance.field24_0x18
    LEA ESI,[EBX + 0x158]               ; 0047b1c9
    TEST EDX,EDX                        ; 0047b1cf
    JZ 0x0047b429                       ; 0047b1d1
        ;   XREF to: 0047b429 (CONDITIONAL_JUMP)  ; LAB_0047b429
    PUSH 0x5dac72                       ; 0047b1d7 | = "nbride2x.dfm"
    PUSH EAX                            ; 0047b1dc
    MOV EDI,EAX                         ; 0047b1dd
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b1df
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b1e4
    TEST EAX,EAX                        ; 0047b1e7
    JNZ 0x0047b1f9                      ; 0047b1e9
        ;   XREF to: 0047b1f9 (CONDITIONAL_JUMP)  ; LAB_0047b1f9
    PUSH 0x5dac7f                       ; 0047b1eb | = "nbride2.dfm"
    PUSH ESI                            ; 0047b1f0
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b1f1
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 0047b1f6
    PUSH 0x5dac8b                       ; 0047b1f9 | = "nbride3x.dfm"
        ;   Label: LAB_0047b1f9
    PUSH EDI                            ; 0047b1fe
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b1ff
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b204
    TEST EAX,EAX                        ; 0047b207
    JNZ 0x0047b21f                      ; 0047b209
        ;   XREF to: 0047b21f (CONDITIONAL_JUMP)  ; LAB_0047b21f
    PUSH 0x5dac98                       ; 0047b20b | = "nbride3.dfm"
    LEA EAX,[EBX + 0x158]               ; 0047b210
    PUSH EAX                            ; 0047b216
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b217
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 0047b21c
    PUSH 0x5daca4                       ; 0047b21f | = "nbride4x.dfm"
        ;   Label: LAB_0047b21f
    PUSH EDI                            ; 0047b224
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b225
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b22a
    TEST EAX,EAX                        ; 0047b22d
    JNZ 0x0047b245                      ; 0047b22f
        ;   XREF to: 0047b245 (CONDITIONAL_JUMP)  ; LAB_0047b245
    PUSH 0x5dacb1                       ; 0047b231 | = "nbride4.dfm"
    LEA EAX,[EBX + 0x158]               ; 0047b236
        ;   Label: LAB_0047b236
    PUSH EAX                            ; 0047b23c
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b23d
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 0047b242
    PUSH EBX                            ; 0047b245
        ;   Label: LAB_0047b245
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0047b246
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0047b24b
    LEA EDI,[EBX + 0x158]               ; 0047b24e
    PUSH EDI                            ; 0047b254
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0047b255
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047b25a
    PUSH 0x1                            ; 0047b25d
    PUSH 0x5dacbd                       ; 0047b25f | = "Bip01 Head"
    PUSH EAX                            ; 0047b264
    MOV ESI,EAX                         ; 0047b265
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b267
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b26c
    PUSH 0x1                            ; 0047b26f
    PUSH 0x5dacc8                       ; 0047b271 | = "Bip01 L Hand"
    PUSH ESI                            ; 0047b276
    MOV [0x01bc0d34],EAX                ; 0047b277 | DAT_01bc0d34
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b27c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b281
    PUSH 0x1                            ; 0047b284
    PUSH 0x5dacd5                       ; 0047b286 | = "Bip01 R Hand"
    PUSH ESI                            ; 0047b28b
    MOV [0x01bc0d38],EAX                ; 0047b28c | DAT_01bc0d38
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b291
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b296
    PUSH 0x1                            ; 0047b299
    PUSH 0x5dace2                       ; 0047b29b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0047b2a0
    MOV [0x01bc0d3c],EAX                ; 0047b2a1 | DAT_01bc0d3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b2a6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b2ab
    PUSH 0x1                            ; 0047b2ae
    PUSH 0x5dacf3                       ; 0047b2b0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0047b2b5
    MOV [0x01bc0d40],EAX                ; 0047b2b6 | DAT_01bc0d40
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b2bb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b2c0
    PUSH 0x1                            ; 0047b2c3
    PUSH 0x5dad04                       ; 0047b2c5 | = "Bip01 Spine"
    PUSH ESI                            ; 0047b2ca
    MOV [0x01bc0d44],EAX                ; 0047b2cb | DAT_01bc0d44
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b2d0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b2d5
    PUSH 0x1                            ; 0047b2d8
    PUSH 0x5dad10                       ; 0047b2da | = "Bip01 Spine1"
    PUSH ESI                            ; 0047b2df
    MOV [0x01bc0d48],EAX                ; 0047b2e0 | DAT_01bc0d48
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b2e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b2ea
    PUSH 0x1                            ; 0047b2ed
    PUSH 0x5dad1d                       ; 0047b2ef | = "Bip01 Spine2"
    PUSH ESI                            ; 0047b2f4
    MOV [0x01bc0d4c],EAX                ; 0047b2f5 | DAT_01bc0d4c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0047b2fa
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047b2ff
    PUSH EDI                            ; 0047b302
    MOV [0x01bc0d50],EAX                ; 0047b303 | DAT_01bc0d50
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0047b308
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0047b30d
    ADD ESP,0x4                         ; 0047b30f
    PUSH 0x1                            ; 0047b312
    PUSH 0x5dad2a                       ; 0047b314 | = "larm01"
    PUSH EAX                            ; 0047b319
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b31a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b31f
    PUSH 0x1                            ; 0047b322
    PUSH 0x5dad31                       ; 0047b324 | = "l4arm01"
    PUSH ESI                            ; 0047b329
    MOV dword ptr [EBX + 0xc268],EAX    ; 0047b32a
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b330
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b335
    PUSH 0x1                            ; 0047b338
    PUSH 0x5dad39                       ; 0047b33a | = "rarm01"
    PUSH ESI                            ; 0047b33f
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0047b340
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b346
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b34b
    PUSH 0x1                            ; 0047b34e
    PUSH 0x5dad40                       ; 0047b350 | = "r4arm01"
    PUSH ESI                            ; 0047b355
    MOV dword ptr [EBX + 0xc270],EAX    ; 0047b356
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b35c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b361
    PUSH 0x1                            ; 0047b364
    PUSH 0x5dad48                       ; 0047b366 | = "lshin01"
    PUSH ESI                            ; 0047b36b
    MOV dword ptr [EBX + 0xc274],EAX    ; 0047b36c
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b372
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b377
    PUSH 0x1                            ; 0047b37a
    PUSH 0x5dad50                       ; 0047b37c | = "rshin01"
    PUSH ESI                            ; 0047b381
    MOV dword ptr [EBX + 0xc278],EAX    ; 0047b382
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b388
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b38d
    PUSH 0x1                            ; 0047b390
    PUSH 0x5dad58                       ; 0047b392 | = "torso01"
    PUSH ESI                            ; 0047b397
    MOV dword ptr [EBX + 0xc27c],EAX    ; 0047b398
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b39e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b3a3
    PUSH 0x1                            ; 0047b3a6
    PUSH 0x5dad60                       ; 0047b3a8 | = "waist01"
    PUSH ESI                            ; 0047b3ad
    MOV dword ptr [EBX + 0xc280],EAX    ; 0047b3ae
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b3b4
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b3b9
    PUSH 0x1                            ; 0047b3bc
    PUSH 0x5dad68                       ; 0047b3be | = "head01"
    PUSH ESI                            ; 0047b3c3
    MOV dword ptr [EBX + 0xc284],EAX    ; 0047b3c4
    CALL core_skeleton.cpp_FUN_00565780 ; 0047b3ca
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0047b3cf
    MOV dword ptr [EBX + 0xc288],EAX    ; 0047b3d2
    POP ESI                             ; 0047b3d8
    POP EDI                             ; 0047b3d9
    PUSH 0x41200000                     ; 0047b3da
    PUSH 0x40a00000                     ; 0047b3df
    MOV dword ptr [EBX + 0xc310],0x0    ; 0047b3e4
    CALL core_actor.cpp_FUN_0040cc00    ; 0047b3ee
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0047b3f3
    FLD float ptr [ESP + 0x8]           ; 0047b3f7
    ADD ESP,0x8                         ; 0047b3fb
    PUSH 0x41a00000                     ; 0047b3fe
    PUSH 0x40000000                     ; 0047b403
    FSTP float ptr [EBX + 0xc2fc]       ; 0047b408
    CALL core_actor.cpp_FUN_0040cc00    ; 0047b40e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0047b413
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047b417
    MOV dword ptr [EBX + 0xc300],EAX    ; 0047b41b
    ADD ESP,0x8                         ; 0047b421
    ADD ESP,0x4                         ; 0047b424
    POP EBX                             ; 0047b427
    RET                                 ; 0047b428
    PUSH 0x5dac27                       ; 0047b429 | = "nbride2.dfm"
        ;   Label: LAB_0047b429
    PUSH EAX                            ; 0047b42e
    MOV EDI,EAX                         ; 0047b42f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b431
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b436
    TEST EAX,EAX                        ; 0047b439
    JNZ 0x0047b44b                      ; 0047b43b
        ;   XREF to: 0047b44b (CONDITIONAL_JUMP)  ; LAB_0047b44b
    PUSH 0x5dac33                       ; 0047b43d | = "nbride2x.dfm"
    PUSH ESI                            ; 0047b442
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b443
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 0047b448
    PUSH 0x5dac40                       ; 0047b44b | = "nbride3.dfm"
        ;   Label: LAB_0047b44b
    PUSH EDI                            ; 0047b450
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b451
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b456
    TEST EAX,EAX                        ; 0047b459
    JNZ 0x0047b471                      ; 0047b45b
        ;   XREF to: 0047b471 (CONDITIONAL_JUMP)  ; LAB_0047b471
    PUSH 0x5dac4c                       ; 0047b45d | = "nbride3x.dfm"
    LEA EAX,[EBX + 0x158]               ; 0047b462
    PUSH EAX                            ; 0047b468
    CALL core_skeleton.cpp_FUN_00569f50 ; 0047b469
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 0047b46e
    PUSH 0x5dac59                       ; 0047b471 | = "nbride4.dfm"
        ;   Label: LAB_0047b471
    PUSH EDI                            ; 0047b476
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0047b477
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047b47c
    TEST EAX,EAX                        ; 0047b47f
    JNZ 0x0047b245                      ; 0047b481
        ;   XREF to: 0047b245 (CONDITIONAL_JUMP)  ; LAB_0047b245
    PUSH 0x5dac65                       ; 0047b487 | = "nbride4x.dfm"
    JMP 0x0047b236                      ; 0047b48c
        ;   XREF to: 0047b236 (UNCONDITIONAL_JUMP)  ; LAB_0047b236

