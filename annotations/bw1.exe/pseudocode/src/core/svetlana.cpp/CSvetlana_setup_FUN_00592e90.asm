; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_00592e90(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_svetlanax_dfm_005f73f6
;   TerminatedCString s_svetlana_dfm_005f7404
;   TerminatedCString s_Bip01_head_005f7411
;   TerminatedCString s_Bip01_L_Clavicle_005f741c
;   TerminatedCString s_Bip01_R_Clavicle_005f742d
;   TerminatedCString s_Bip01_L_UpperArm_005f743e
;   TerminatedCString s_Bip01_R_UpperArm_005f744f
;   TerminatedCString s_Bip01_L_ForeArm_005f7460
;   TerminatedCString s_Bip01_R_ForeArm_005f7470
;   TerminatedCString s_Bip01_L_Foot_005f7480
;   TerminatedCString s_Bip01_R_Foot_005f748d
;   TerminatedCString s_Bip01_L_Thigh_005f749a
;   TerminatedCString s_Bip01_R_Thigh_005f74a8
;   TerminatedCString s_Bip01_L_Calf_005f74b6
;   TerminatedCString s_Bip01_R_Calf_005f74c3
;   ... and 31 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0
;   core_cloth.cpp_FUN_0043eea0
;   core_hero.cpp_CHero_setup_FUN_004eaa10
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592e90
        ;   Label: core_svetlana.cpp_CSvetlana_setup_FUN_00592e90
    PUSH ESI                            ; 00592e91
    PUSH EDI                            ; 00592e92
    PUSH EBP                            ; 00592e93
    SUB ESP,0x4                         ; 00592e94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00592e97
    MOV EBX,dword ptr [0x0061d95c]      ; 00592e9b | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 00592ea1 | g_CGameInstance.nudity_flag
    LEA EAX,[ESI + 0x158]               ; 00592ea4
    TEST EDX,EDX                        ; 00592eaa
    JZ 0x00593112                       ; 00592eac
        ;   XREF to: 00593112 (CONDITIONAL_JUMP)  ; LAB_00593112
    PUSH 0x5f7404                       ; 00592eb2 | = "svetlana.dfm"
    PUSH EAX                            ; 00592eb7
        ;   Label: LAB_00592eb7
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00592eb8
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00592ebd
    PUSH ESI                            ; 00592ec0
    CALL core_hero.cpp_CHero_setup_FUN_004eaa10 ; 00592ec1
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 00592ec6
    LEA EDI,[ESI + 0x158]               ; 00592ec9
    PUSH EDI                            ; 00592ecf
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00592ed0
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00592ed5
    PUSH 0x1                            ; 00592ed8
    PUSH 0x5f7411                       ; 00592eda | = "Bip01 head"
    PUSH EAX                            ; 00592edf
    MOV EBX,EAX                         ; 00592ee0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592ee2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592ee7
    PUSH 0x1                            ; 00592eea
    PUSH 0x5f741c                       ; 00592eec | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00592ef1
    MOV [0x02c83708],EAX                ; 00592ef2 | DAT_02c83708
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592ef7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592efc
    PUSH 0x1                            ; 00592eff
    PUSH 0x5f742d                       ; 00592f01 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00592f06
    MOV [0x02c8370c],EAX                ; 00592f07 | DAT_02c8370c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f0c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f11
    PUSH 0x1                            ; 00592f14
    PUSH 0x5f743e                       ; 00592f16 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00592f1b
    MOV [0x02c83710],EAX                ; 00592f1c | DAT_02c83710
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f21
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f26
    PUSH 0x1                            ; 00592f29
    PUSH 0x5f744f                       ; 00592f2b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00592f30
    MOV [0x02c83714],EAX                ; 00592f31 | DAT_02c83714
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f36
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f3b
    PUSH 0x1                            ; 00592f3e
    PUSH 0x5f7460                       ; 00592f40 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00592f45
    MOV [0x02c83718],EAX                ; 00592f46 | DAT_02c83718
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f4b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f50
    PUSH 0x1                            ; 00592f53
    PUSH 0x5f7470                       ; 00592f55 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00592f5a
    MOV [0x02c8371c],EAX                ; 00592f5b | DAT_02c8371c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f60
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f65
    PUSH 0x1                            ; 00592f68
    PUSH 0x5f7480                       ; 00592f6a | = "Bip01 L Foot"
    PUSH EBX                            ; 00592f6f
    MOV [0x02c83720],EAX                ; 00592f70 | DAT_02c83720
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f75
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f7a
    PUSH 0x1                            ; 00592f7d
    PUSH 0x5f748d                       ; 00592f7f | = "Bip01 R Foot"
    PUSH EBX                            ; 00592f84
    MOV [0x02c83724],EAX                ; 00592f85 | DAT_02c83724
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f8a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592f8f
    MOV [0x02c83728],EAX                ; 00592f92 | DAT_02c83728
    PUSH 0x1                            ; 00592f97
    PUSH 0x5f749a                       ; 00592f99 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00592f9e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592f9f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592fa4
    PUSH 0x1                            ; 00592fa7
    PUSH 0x5f74a8                       ; 00592fa9 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00592fae
    MOV [0x02c8372c],EAX                ; 00592faf | DAT_02c8372c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592fb4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592fb9
    PUSH 0x1                            ; 00592fbc
    PUSH 0x5f74b6                       ; 00592fbe | = "Bip01 L Calf"
    PUSH EBX                            ; 00592fc3
    MOV [0x02c83730],EAX                ; 00592fc4 | DAT_02c83730
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592fc9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592fce
    PUSH 0x1                            ; 00592fd1
    PUSH 0x5f74c3                       ; 00592fd3 | = "Bip01 R Calf"
    PUSH EBX                            ; 00592fd8
    MOV [0x02c83734],EAX                ; 00592fd9 | DAT_02c83734
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592fde
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592fe3
    PUSH 0x1                            ; 00592fe6
    PUSH 0x5f74d0                       ; 00592fe8 | = "Bip01 L Hand"
    PUSH EBX                            ; 00592fed
    MOV [0x02c83738],EAX                ; 00592fee | DAT_02c83738
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592ff3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592ff8
    PUSH 0x1                            ; 00592ffb
    PUSH 0x5f74dd                       ; 00592ffd | = "Bip01 R Hand"
    PUSH EBX                            ; 00593002
    MOV [0x02c8373c],EAX                ; 00593003 | DAT_02c8373c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00593008
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059300d
    PUSH 0x1                            ; 00593010
    PUSH 0x5f74ea                       ; 00593012 | = "Bip01 Spine2"
    PUSH EBX                            ; 00593017
    MOV [0x02c83740],EAX                ; 00593018 | DAT_02c83740
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059301d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593022
    PUSH 0x1                            ; 00593025
    PUSH 0x5f74f7                       ; 00593027 | = "Bip01 Spine"
    PUSH EBX                            ; 0059302c
    MOV [0x02c83744],EAX                ; 0059302d | DAT_02c83744
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00593032
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593037
    PUSH 0x1                            ; 0059303a
    PUSH 0x5f7503                       ; 0059303c | = "Bipblade01"
    PUSH EBX                            ; 00593041
    MOV [0x02c83748],EAX                ; 00593042 | DAT_02c83748
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00593047
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059304c
    PUSH 0x1                            ; 0059304f
    PUSH 0x5f750e                       ; 00593051 | = "BipR14"
    PUSH EBX                            ; 00593056
    MOV [0x02c8374c],EAX                ; 00593057 | DAT_02c8374c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059305c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593061
    MOV [0x02c83750],EAX                ; 00593064 | DAT_02c83750
    PUSH 0x5f7515                       ; 00593069 | = "svetcape.cth"
    LEA EAX,[ESI + 0x1ffb4]             ; 0059306e
    PUSH EAX                            ; 00593074
    MOV dword ptr [ESI + 0x1ffac],0x0   ; 00593075
    MOV dword ptr [ESP + 0x8],EAX       ; 0059307f
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 00593083
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00593088
    PUSH EDI                            ; 0059308b
    LEA EBP,[ESI + 0x30]                ; 0059308c
    PUSH EBP                            ; 0059308f
    LEA EBX,[ESI + 0x20]                ; 00593090
    PUSH EBX                            ; 00593093
    MOV EAX,dword ptr [ESP + 0xc]       ; 00593094
    PUSH EAX                            ; 00593098
    CALL core_cloth.cpp_FUN_0043eea0    ; 00593099
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0059309e
    PUSH 0x5f7522                       ; 005930a1 | = "svethair.cth"
    LEA EAX,[ESI + 0x5aae4]             ; 005930a6
    PUSH EAX                            ; 005930ac
    MOV dword ptr [ESP + 0x8],EAX       ; 005930ad
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 005930b1
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005930b6
    PUSH EDI                            ; 005930b9
    PUSH EBP                            ; 005930ba
    PUSH EBX                            ; 005930bb
    MOV ECX,dword ptr [ESP + 0xc]       ; 005930bc
    PUSH ECX                            ; 005930c0
    CALL core_cloth.cpp_FUN_0043eea0    ; 005930c1
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 005930c6
    PUSH EDI                            ; 005930c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005930ca
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005930cf
    PUSH 0x1                            ; 005930d2
    PUSH 0x5f752f                       ; 005930d4 | = "lblade01"
    PUSH EAX                            ; 005930d9
    MOV EBX,EAX                         ; 005930da
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005930dc
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005930e1
    PUSH 0x1                            ; 005930e4
    PUSH 0x5f7538                       ; 005930e6 | = "rblade02"
    PUSH EBX                            ; 005930eb
    MOV dword ptr [ESI + 0x95628],EAX   ; 005930ec
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005930f2
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0x95614],0x0   ; 005930f7
    ADD ESP,0xc                         ; 00593101
    MOV dword ptr [ESI + 0x9562c],EAX   ; 00593104
    ADD ESP,0x4                         ; 0059310a
    POP EBP                             ; 0059310d
    POP EDI                             ; 0059310e
    POP ESI                             ; 0059310f
    POP EBX                             ; 00593110
    RET                                 ; 00593111
    PUSH 0x5f73f6                       ; 00593112 | = "svetlanax.dfm"
        ;   Label: LAB_00593112
    JMP 0x00592eb7                      ; 00593117
        ;   XREF to: 00592eb7 (UNCONDITIONAL_JUMP)  ; LAB_00592eb7

