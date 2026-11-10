; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_SHADOWBEAST_DFM_005e6515
;   TerminatedCString s_WERE_HEADLESS_DFM_005e6525
;   TerminatedCString s_Bip01_Pelvis_005e6537
;   TerminatedCString s_Bip01_Spine2_005e6544
;   TerminatedCString s_Bip01_Head_005e6551
;   TerminatedCString s_Bip01_Spine2_005e655c
;   TerminatedCString s_Bip01_L_Finger1_005e6569
;   TerminatedCString s_Bip01_R_Finger1_005e6579
;   TerminatedCString s_Bip01_Head_005e6589
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c310
        ;   Label: core_shadow.cpp_FUN_0053c310
    PUSH ESI                            ; 0053c311
    PUSH EBP                            ; 0053c312
    MOV EBP,ESP                         ; 0053c313
    SUB ESP,0x4                         ; 0053c315
    MOV EBX,dword ptr [EBP + 0x10]      ; 0053c318
    LEA EAX,[EBX + 0x2b4]               ; 0053c31b
    PUSH EAX                            ; 0053c321
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0053c322
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053c327
    PUSH 0x5e6515                       ; 0053c32a | = "SHADOWBEAST.DFM"
    LEA ESI,[EBX + 0x2514]              ; 0053c32f
    MOV dword ptr [EBX + 0x10b48],0x0   ; 0053c335
    PUSH ESI                            ; 0053c33f
    MOV dword ptr [EBX + 0x10b70],0x0   ; 0053c340
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0053c34a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053c34f
    TEST EAX,EAX                        ; 0053c352
    JNZ 0x0053c482                      ; 0053c354
        ;   XREF to: 0053c482 (CONDITIONAL_JUMP)  ; LAB_0053c482
    MOV dword ptr [EBX + 0x10b48],0x1   ; 0053c35a
        ;   Label: LAB_0053c35a
    LEA EAX,[EBX + 0x2b4]               ; 0053c364
        ;   Label: LAB_0053c364
    PUSH EAX                            ; 0053c36a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0053c36b
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053c370
    PUSH 0x1                            ; 0053c373
    PUSH 0x5e6537                       ; 0053c375 | = "Bip01 Pelvis"
    PUSH EAX                            ; 0053c37a
    MOV ESI,EAX                         ; 0053c37b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c37d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c382
    PUSH 0x1                            ; 0053c385
    PUSH 0x5e6544                       ; 0053c387 | = "Bip01 Spine2"
    PUSH ESI                            ; 0053c38c
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 0053c38d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c393
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c398
    PUSH 0x1                            ; 0053c39b
    PUSH 0x5e6551                       ; 0053c39d | = "Bip01 Head"
    PUSH ESI                            ; 0053c3a2
    MOV dword ptr [EBX + 0x10b10],EAX   ; 0053c3a3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c3a9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c3ae
    PUSH 0x1                            ; 0053c3b1
    PUSH 0x5e655c                       ; 0053c3b3 | = "Bip01 Spine2"
    PUSH ESI                            ; 0053c3b8
    MOV dword ptr [EBX + 0x10b14],EAX   ; 0053c3b9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c3bf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c3c4
    PUSH 0x1                            ; 0053c3c7
    PUSH 0x5e6569                       ; 0053c3c9 | = "Bip01 L Finger1"
    PUSH ESI                            ; 0053c3ce
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0053c3cf
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c3d5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c3da
    PUSH 0x1                            ; 0053c3dd
    PUSH 0x5e6579                       ; 0053c3df | = "Bip01 R Finger1"
    PUSH ESI                            ; 0053c3e4
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0053c3e5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c3eb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c3f0
    PUSH 0x1                            ; 0053c3f3
    PUSH 0x5e6589                       ; 0053c3f5 | = "Bip01 Head"
    PUSH ESI                            ; 0053c3fa
    MOV dword ptr [EBX + 0x10b04],EAX   ; 0053c3fb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0053c401
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053c406
    PUSH EBX                            ; 0053c409
    MOV dword ptr [EBX + 0x10b08],EAX   ; 0053c40a
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0053c410
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 0053c415
    ADD ESP,0x4                         ; 0053c41f
    MOV EDX,dword ptr [EBX + 0x10af8]   ; 0053c422
    MOV dword ptr [EBX + 0xf8],0x0      ; 0053c428
    TEST EDX,EDX                        ; 0053c432
    JNZ 0x0053c440                      ; 0053c434
        ;   XREF to: 0053c440 (CONDITIONAL_JUMP)  ; LAB_0053c440
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 0053c436
    PUSH 0x41f00000                     ; 0053c440
        ;   Label: LAB_0053c440
    PUSH 0x41200000                     ; 0053c445
    MOV dword ptr [EBX + 0x10b1c],0x0   ; 0053c44a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053c454
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 0053c459
    MOV dword ptr [EBX + 0x10b24],0x0   ; 0053c45c
    ADD ESP,0x8                         ; 0053c466
    MOV dword ptr [EBX + 0x10b28],0x0   ; 0053c469
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053c473
    MOV dword ptr [EBX + 0x10b20],EAX   ; 0053c476
    MOV ESP,EBP                         ; 0053c47c
    POP EBP                             ; 0053c47e
    POP ESI                             ; 0053c47f
    POP EBX                             ; 0053c480
    RET                                 ; 0053c481
    PUSH 0x5e6525                       ; 0053c482 | = "WERE_HEADLESS.DFM"
        ;   Label: LAB_0053c482
    PUSH ESI                            ; 0053c487
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0053c488
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053c48d
    TEST EAX,EAX                        ; 0053c490
    JZ 0x0053c35a                       ; 0053c492
        ;   XREF to: 0053c35a (CONDITIONAL_JUMP)  ; LAB_0053c35a
    JMP 0x0053c364                      ; 0053c498
        ;   XREF to: 0053c364 (UNCONDITIONAL_JUMP)  ; LAB_0053c364

