; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004e9090(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005e4416
;   TerminatedCString s_Bip01_L_Clavicle_005e4421
;   TerminatedCString s_Bip01_R_Clavicle_005e4432
;   TerminatedCString s_Bip01_L_UpperArm_005e4443
;   TerminatedCString s_Bip01_R_UpperArm_005e4454
;   TerminatedCString s_Bip01_L_ForeArm_005e4465
;   TerminatedCString s_Bip01_R_ForeArm_005e4475
;   TerminatedCString s_Bip01_L_Foot_005e4485
;   TerminatedCString s_Bip01_R_Foot_005e4492
;   TerminatedCString s_Bip01_L_Thigh_005e449f
;   TerminatedCString s_Bip01_R_Thigh_005e44ad
;   TerminatedCString s_Bip01_L_Calf_005e44bb
;   TerminatedCString s_Bip01_R_Calf_005e44c8
;   TerminatedCString s_Bip01_L_Hand_005e44d5
;   TerminatedCString s_Bip01_R_Hand_005e44e2
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004eaa10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9090
        ;   Label: core_haystack.cpp_CHaystack_setup_FUN_004e9090
    PUSH ESI                            ; 004e9091
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e9092
    PUSH ESI                            ; 004e9096
    CALL core_hero.cpp_CHero_setup_FUN_004eaa10 ; 004e9097
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 004e909c
    LEA EAX,[ESI + 0x158]               ; 004e909f
    PUSH EAX                            ; 004e90a5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004e90a6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e90ab
    PUSH 0x1                            ; 004e90ae
    PUSH 0x5e4416                       ; 004e90b0 | = "Bip01 head"
    PUSH EAX                            ; 004e90b5
    MOV EBX,EAX                         ; 004e90b6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e90b8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e90bd
    PUSH 0x1                            ; 004e90c0
    PUSH 0x5e4421                       ; 004e90c2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004e90c7
    MOV [0x01d069d8],EAX                ; 004e90c8 | DAT_01d069d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e90cd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e90d2
    PUSH 0x1                            ; 004e90d5
    PUSH 0x5e4432                       ; 004e90d7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004e90dc
    MOV [0x01d069dc],EAX                ; 004e90dd | DAT_01d069dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e90e2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e90e7
    PUSH 0x1                            ; 004e90ea
    PUSH 0x5e4443                       ; 004e90ec | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004e90f1
    MOV [0x01d069e0],EAX                ; 004e90f2 | DAT_01d069e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e90f7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e90fc
    PUSH 0x1                            ; 004e90ff
    PUSH 0x5e4454                       ; 004e9101 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004e9106
    MOV [0x01d069e4],EAX                ; 004e9107 | DAT_01d069e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e910c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e9111
    PUSH 0x1                            ; 004e9114
    PUSH 0x5e4465                       ; 004e9116 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004e911b
    MOV [0x01d069e8],EAX                ; 004e911c | DAT_01d069e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e9121
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e9126
    PUSH 0x1                            ; 004e9129
    PUSH 0x5e4475                       ; 004e912b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004e9130
    MOV [0x01d069ec],EAX                ; 004e9131 | DAT_01d069ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e9136
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e913b
    PUSH 0x1                            ; 004e913e
    PUSH 0x5e4485                       ; 004e9140 | = "Bip01 L Foot"
    PUSH EBX                            ; 004e9145
    MOV [0x01d069f0],EAX                ; 004e9146 | DAT_01d069f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e914b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e9150
    PUSH 0x1                            ; 004e9153
    PUSH 0x5e4492                       ; 004e9155 | = "Bip01 R Foot"
    PUSH EBX                            ; 004e915a
    MOV [0x01d069f4],EAX                ; 004e915b | DAT_01d069f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e9160
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e9165
    MOV [0x01d069f8],EAX                ; 004e9168 | DAT_01d069f8
    PUSH 0x1                            ; 004e916d
    PUSH 0x5e449f                       ; 004e916f | = "Bip01 L Thigh"
    PUSH EBX                            ; 004e9174
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e9175
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e917a
    PUSH 0x1                            ; 004e917d
    PUSH 0x5e44ad                       ; 004e917f | = "Bip01 R Thigh"
    PUSH EBX                            ; 004e9184
    MOV [0x01d069fc],EAX                ; 004e9185 | DAT_01d069fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e918a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e918f
    PUSH 0x1                            ; 004e9192
    PUSH 0x5e44bb                       ; 004e9194 | = "Bip01 L Calf"
    PUSH EBX                            ; 004e9199
    MOV [0x01d06a00],EAX                ; 004e919a | DAT_01d06a00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e919f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e91a4
    PUSH 0x1                            ; 004e91a7
    PUSH 0x5e44c8                       ; 004e91a9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004e91ae
    MOV [0x01d06a04],EAX                ; 004e91af | DAT_01d06a04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e91b4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e91b9
    PUSH 0x1                            ; 004e91bc
    PUSH 0x5e44d5                       ; 004e91be | = "Bip01 L Hand"
    PUSH EBX                            ; 004e91c3
    MOV [0x01d06a08],EAX                ; 004e91c4 | DAT_01d06a08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e91c9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e91ce
    PUSH 0x1                            ; 004e91d1
    PUSH 0x5e44e2                       ; 004e91d3 | = "Bip01 R Hand"
    PUSH EBX                            ; 004e91d8
    MOV [0x01d06a0c],EAX                ; 004e91d9 | DAT_01d06a0c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e91de
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e91e3
    PUSH 0x1                            ; 004e91e6
    PUSH 0x5e44ef                       ; 004e91e8 | = "Bip01 Spine2"
    PUSH EBX                            ; 004e91ed
    MOV [0x01d06a10],EAX                ; 004e91ee | DAT_01d06a10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e91f3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e91f8
    PUSH 0x1                            ; 004e91fb
    PUSH 0x5e44fc                       ; 004e91fd | = "Bip01 Spine"
    PUSH EBX                            ; 004e9202
    MOV [0x01d06a14],EAX                ; 004e9203 | DAT_01d06a14
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004e9208
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e920d
    MOV [0x01d06a18],EAX                ; 004e9210 | DAT_01d06a18
    MOV dword ptr [ESI + 0x1ffac],0x0   ; 004e9215
    POP ESI                             ; 004e921f
    POP EBX                             ; 004e9220
    RET                                 ; 004e9221

