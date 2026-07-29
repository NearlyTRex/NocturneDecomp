; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(CHero *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_svetlanax_dfm_00596200
;   TerminatedCString s_svetlana_dfm_0059620e
;   TerminatedCString s_Bip01_head_0059621b
;   TerminatedCString s_Bip01_L_Clavicle_00596226
;   TerminatedCString s_Bip01_R_Clavicle_00596237
;   TerminatedCString s_Bip01_L_UpperArm_00596248
;   TerminatedCString s_Bip01_R_UpperArm_00596259
;   TerminatedCString s_Bip01_L_ForeArm_0059626a
;   TerminatedCString s_Bip01_R_ForeArm_0059627a
;   TerminatedCString s_Bip01_L_Foot_0059628a
;   TerminatedCString s_Bip01_R_Foot_00596297
;   TerminatedCString s_Bip01_L_Thigh_005962a4
;   TerminatedCString s_Bip01_R_Thigh_005962b2
;   TerminatedCString s_Bip01_L_Calf_005962c0
;   TerminatedCString s_Bip01_R_Calf_005962cd
;   ... and 31 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_00435240
;   core_cloth.cpp_CCloth_setup_FUN_004359e0
;   core_hero.cpp_FUN_004b48d0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541a40
        ;   Label: core_svetlana.cpp_CSvetlana_setup_FUN_00541a40
    PUSH ESI                            ; 00541a41
    PUSH EDI                            ; 00541a42
    PUSH EBP                            ; 00541a43
    SUB ESP,0x4                         ; 00541a44
    MOV ESI,dword ptr [ESP + 0x18]      ; 00541a47
    MOV EBX,dword ptr [0x005b9354]      ; 00541a4b | DAT_005b9354
    MOV EDX,dword ptr [EBX + 0x18]      ; 00541a51 | DAT_01c77604
    LEA EAX,[ESI + 0x150]               ; 00541a54
    TEST EDX,EDX                        ; 00541a5a
    JZ 0x00541cc2                       ; 00541a5c
        ;   XREF to: 00541cc2 (CONDITIONAL_JUMP)  ; LAB_00541cc2
    PUSH 0x59620e                       ; 00541a62 | = "svetlana.dfm"
    PUSH EAX                            ; 00541a67
        ;   Label: LAB_00541a67
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00541a68
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00541a6d
    PUSH ESI                            ; 00541a70
    CALL core_hero.cpp_FUN_004b48d0     ; 00541a71
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004b48d0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00541a76
    LEA EDI,[ESI + 0x150]               ; 00541a79
    PUSH EDI                            ; 00541a7f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00541a80
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00541a85
    PUSH 0x1                            ; 00541a88
    PUSH 0x59621b                       ; 00541a8a | = "Bip01 head"
    PUSH EAX                            ; 00541a8f
    MOV EBX,EAX                         ; 00541a90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541a92
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541a97
    PUSH 0x1                            ; 00541a9a
    PUSH 0x596226                       ; 00541a9c | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00541aa1
    MOV [0x02dca058],EAX                ; 00541aa2 | DAT_02dca058
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541aa7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541aac
    PUSH 0x1                            ; 00541aaf
    PUSH 0x596237                       ; 00541ab1 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00541ab6
    MOV [0x02dca05c],EAX                ; 00541ab7 | DAT_02dca05c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541abc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541ac1
    PUSH 0x1                            ; 00541ac4
    PUSH 0x596248                       ; 00541ac6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00541acb
    MOV [0x02dca060],EAX                ; 00541acc | DAT_02dca060
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541ad1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541ad6
    PUSH 0x1                            ; 00541ad9
    PUSH 0x596259                       ; 00541adb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00541ae0
    MOV [0x02dca064],EAX                ; 00541ae1 | DAT_02dca064
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541ae6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541aeb
    PUSH 0x1                            ; 00541aee
    PUSH 0x59626a                       ; 00541af0 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00541af5
    MOV [0x02dca068],EAX                ; 00541af6 | DAT_02dca068
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541afb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b00
    PUSH 0x1                            ; 00541b03
    PUSH 0x59627a                       ; 00541b05 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00541b0a
    MOV [0x02dca06c],EAX                ; 00541b0b | DAT_02dca06c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b10
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b15
    PUSH 0x1                            ; 00541b18
    PUSH 0x59628a                       ; 00541b1a | = "Bip01 L Foot"
    PUSH EBX                            ; 00541b1f
    MOV [0x02dca070],EAX                ; 00541b20 | DAT_02dca070
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b25
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b2a
    PUSH 0x1                            ; 00541b2d
    PUSH 0x596297                       ; 00541b2f | = "Bip01 R Foot"
    PUSH EBX                            ; 00541b34
    MOV [0x02dca074],EAX                ; 00541b35 | DAT_02dca074
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b3a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b3f
    MOV [0x02dca078],EAX                ; 00541b42 | DAT_02dca078
    PUSH 0x1                            ; 00541b47
    PUSH 0x5962a4                       ; 00541b49 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00541b4e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b4f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b54
    PUSH 0x1                            ; 00541b57
    PUSH 0x5962b2                       ; 00541b59 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00541b5e
    MOV [0x02dca07c],EAX                ; 00541b5f | DAT_02dca07c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b64
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b69
    PUSH 0x1                            ; 00541b6c
    PUSH 0x5962c0                       ; 00541b6e | = "Bip01 L Calf"
    PUSH EBX                            ; 00541b73
    MOV [0x02dca080],EAX                ; 00541b74 | DAT_02dca080
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b79
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b7e
    PUSH 0x1                            ; 00541b81
    PUSH 0x5962cd                       ; 00541b83 | = "Bip01 R Calf"
    PUSH EBX                            ; 00541b88
    MOV [0x02dca084],EAX                ; 00541b89 | DAT_02dca084
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541b8e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541b93
    PUSH 0x1                            ; 00541b96
    PUSH 0x5962da                       ; 00541b98 | = "Bip01 L Hand"
    PUSH EBX                            ; 00541b9d
    MOV [0x02dca088],EAX                ; 00541b9e | DAT_02dca088
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541ba3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541ba8
    PUSH 0x1                            ; 00541bab
    PUSH 0x5962e7                       ; 00541bad | = "Bip01 R Hand"
    PUSH EBX                            ; 00541bb2
    MOV [0x02dca08c],EAX                ; 00541bb3 | DAT_02dca08c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541bb8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541bbd
    PUSH 0x1                            ; 00541bc0
    PUSH 0x5962f4                       ; 00541bc2 | = "Bip01 Spine2"
    PUSH EBX                            ; 00541bc7
    MOV [0x02dca090],EAX                ; 00541bc8 | DAT_02dca090
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541bcd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541bd2
    PUSH 0x1                            ; 00541bd5
    PUSH 0x596301                       ; 00541bd7 | = "Bip01 Spine"
    PUSH EBX                            ; 00541bdc
    MOV [0x02dca094],EAX                ; 00541bdd | DAT_02dca094
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541be2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541be7
    PUSH 0x1                            ; 00541bea
    PUSH 0x59630d                       ; 00541bec | = "Bipblade01"
    PUSH EBX                            ; 00541bf1
    MOV [0x02dca098],EAX                ; 00541bf2 | DAT_02dca098
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541bf7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541bfc
    PUSH 0x1                            ; 00541bff
    PUSH 0x596318                       ; 00541c01 | = "BipR14"
    PUSH EBX                            ; 00541c06
    MOV [0x02dca09c],EAX                ; 00541c07 | DAT_02dca09c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00541c0c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00541c11
    MOV [0x02dca0a0],EAX                ; 00541c14 | DAT_02dca0a0
    PUSH 0x59631f                       ; 00541c19 | = "svetcape.cth"
    LEA EAX,[ESI + 0x1fa44]             ; 00541c1e
    PUSH EAX                            ; 00541c24
    MOV dword ptr [ESI + 0x1fa3c],0x0   ; 00541c25
    MOV dword ptr [ESP + 0x8],EAX       ; 00541c2f
    CALL core_cloth.cpp_CCloth_load_FUN_00435240 ; 00541c33
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00435240(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00541c38
    PUSH EDI                            ; 00541c3b
    LEA EBP,[ESI + 0x30]                ; 00541c3c
    PUSH EBP                            ; 00541c3f
    LEA EBX,[ESI + 0x20]                ; 00541c40
    PUSH EBX                            ; 00541c43
    MOV EAX,dword ptr [ESP + 0xc]       ; 00541c44
    PUSH EAX                            ; 00541c48
    CALL core_cloth.cpp_CCloth_setup_FUN_004359e0 ; 00541c49
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_004359e0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 00541c4e
    PUSH 0x59632c                       ; 00541c51 | = "svethair.cth"
    LEA EAX,[ESI + 0x5a574]             ; 00541c56
    PUSH EAX                            ; 00541c5c
    MOV dword ptr [ESP + 0x8],EAX       ; 00541c5d
    CALL core_cloth.cpp_CCloth_load_FUN_00435240 ; 00541c61
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00435240(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00541c66
    PUSH EDI                            ; 00541c69
    PUSH EBP                            ; 00541c6a
    PUSH EBX                            ; 00541c6b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00541c6c
    PUSH ECX                            ; 00541c70
    CALL core_cloth.cpp_CCloth_setup_FUN_004359e0 ; 00541c71
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_004359e0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 00541c76
    PUSH EDI                            ; 00541c79
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00541c7a
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00541c7f
    PUSH 0x1                            ; 00541c82
    PUSH 0x596339                       ; 00541c84 | = "lblade01"
    PUSH EAX                            ; 00541c89
    MOV EBX,EAX                         ; 00541c8a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 00541c8c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00541c91
    PUSH 0x1                            ; 00541c94
    PUSH 0x596342                       ; 00541c96 | = "rblade02"
    PUSH EBX                            ; 00541c9b
    MOV dword ptr [ESI + 0x950b8],EAX   ; 00541c9c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 00541ca2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0x950a4],0x0   ; 00541ca7
    ADD ESP,0xc                         ; 00541cb1
    MOV dword ptr [ESI + 0x950bc],EAX   ; 00541cb4
    ADD ESP,0x4                         ; 00541cba
    POP EBP                             ; 00541cbd
    POP EDI                             ; 00541cbe
    POP ESI                             ; 00541cbf
    POP EBX                             ; 00541cc0
    RET                                 ; 00541cc1
    PUSH 0x596200                       ; 00541cc2 | = "svetlanax.dfm"
        ;   Label: LAB_00541cc2
    JMP 0x00541a67                      ; 00541cc7
        ;   XREF to: 00541a67 (UNCONDITIONAL_JUMP)  ; LAB_00541a67

