; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004d2c40(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_0062ace2
;   TerminatedCString s_gabcoat_cth_0062acef
;   TerminatedCString s_Bip01_head_0062acfb
;   TerminatedCString s_Bip01_L_Clavicle_0062ad06
;   TerminatedCString s_Bip01_R_Clavicle_0062ad17
;   TerminatedCString s_Bip01_L_UpperArm_0062ad28
;   TerminatedCString s_Bip01_R_UpperArm_0062ad39
;   TerminatedCString s_Bip01_L_ForeArm_0062ad4a
;   TerminatedCString s_Bip01_R_ForeArm_0062ad5a
;   TerminatedCString s_Bip01_L_Foot_0062ad6a
;   TerminatedCString s_Bip01_R_Foot_0062ad77
;   TerminatedCString s_Bip01_L_Thigh_0062ad84
;   TerminatedCString s_Bip01_R_Thigh_0062ad92
;   TerminatedCString s_Bip01_L_Calf_0062ada0
;   TerminatedCString s_Bip01_R_Calf_0062adad
;   ... and 27 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_FUN_00439710
;   core_hero.cpp_CHero_setup_FUN_004f2540
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2c40
        ;   Label: core_gabriela.cpp_CGabriella_setup_FUN_004d2c40
    PUSH ESI                            ; 004d2c41
    PUSH EDI                            ; 004d2c42
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d2c43
    PUSH ESI                            ; 004d2c47
    CALL core_hero.cpp_CHero_setup_FUN_004f2540 ; 004d2c48
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d2c4d
    PUSH 0x62ace2                       ; 004d2c50 | = "gabriela.dfm"
    LEA EDI,[ESI + 0x158]               ; 004d2c55
    PUSH EDI                            ; 004d2c5b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004d2c5c
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004d2c61
    PUSH EDI                            ; 004d2c64
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004d2c65
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d2c6a
    PUSH 0x62acef                       ; 004d2c6d | = "gabcoat.cth"
    LEA EBX,[ESI + 0x1fc14]             ; 004d2c72
    PUSH EBX                            ; 004d2c78
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 004d2c79
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d2c7e
    PUSH EDI                            ; 004d2c81
    LEA EAX,[ESI + 0x30]                ; 004d2c82
    PUSH EAX                            ; 004d2c85
    LEA EAX,[ESI + 0x20]                ; 004d2c86
    PUSH EAX                            ; 004d2c89
    PUSH EBX                            ; 004d2c8a
    CALL core_cloth.cpp_FUN_00439710    ; 004d2c8b
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 004d2c90
    PUSH EDI                            ; 004d2c93
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004d2c94
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d2c99
    PUSH 0x1                            ; 004d2c9c
    PUSH 0x62acfb                       ; 004d2c9e | = "Bip01 head"
    PUSH EAX                            ; 004d2ca3
    MOV EBX,EAX                         ; 004d2ca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2ca6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2cab
    PUSH 0x1                            ; 004d2cae
    PUSH 0x62ad06                       ; 004d2cb0 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004d2cb5
    MOV [0x02d7b848],EAX                ; 004d2cb6 | INT_02d7b848
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2cbb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2cc0
    PUSH 0x1                            ; 004d2cc3
    PUSH 0x62ad17                       ; 004d2cc5 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004d2cca
    MOV [0x02d7b84c],EAX                ; 004d2ccb | INT_02d7b84c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2cd0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2cd5
    PUSH 0x1                            ; 004d2cd8
    PUSH 0x62ad28                       ; 004d2cda | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d2cdf
    MOV [0x02d7b850],EAX                ; 004d2ce0 | INT_02d7b850
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2ce5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2cea
    PUSH 0x1                            ; 004d2ced
    PUSH 0x62ad39                       ; 004d2cef | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d2cf4
    MOV [0x02d7b854],EAX                ; 004d2cf5 | INT_02d7b854
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2cfa
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2cff
    PUSH 0x1                            ; 004d2d02
    PUSH 0x62ad4a                       ; 004d2d04 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004d2d09
    MOV [0x02d7b858],EAX                ; 004d2d0a | INT_02d7b858
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d0f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d14
    MOV [0x02d7b85c],EAX                ; 004d2d17 | INT_02d7b85c
    PUSH 0x1                            ; 004d2d1c
    PUSH 0x62ad5a                       ; 004d2d1e | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004d2d23
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d24
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d29
    PUSH 0x1                            ; 004d2d2c
    PUSH 0x62ad6a                       ; 004d2d2e | = "Bip01 L Foot"
    PUSH EBX                            ; 004d2d33
    MOV [0x02d7b860],EAX                ; 004d2d34 | INT_02d7b860
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d39
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d3e
    PUSH 0x1                            ; 004d2d41
    PUSH 0x62ad77                       ; 004d2d43 | = "Bip01 R Foot"
    PUSH EBX                            ; 004d2d48
    MOV [0x02d7b864],EAX                ; 004d2d49 | INT_02d7b864
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d4e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d53
    PUSH 0x1                            ; 004d2d56
    PUSH 0x62ad84                       ; 004d2d58 | = "Bip01 L Thigh"
    PUSH EBX                            ; 004d2d5d
    MOV [0x02d7b868],EAX                ; 004d2d5e | INT_02d7b868
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d63
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d68
    PUSH 0x1                            ; 004d2d6b
    PUSH 0x62ad92                       ; 004d2d6d | = "Bip01 R Thigh"
    PUSH EBX                            ; 004d2d72
    MOV [0x02d7b86c],EAX                ; 004d2d73 | INT_02d7b86c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d78
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d7d
    PUSH 0x1                            ; 004d2d80
    PUSH 0x62ada0                       ; 004d2d82 | = "Bip01 L Calf"
    PUSH EBX                            ; 004d2d87
    MOV [0x02d7b870],EAX                ; 004d2d88 | INT_02d7b870
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2d8d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2d92
    PUSH 0x1                            ; 004d2d95
    PUSH 0x62adad                       ; 004d2d97 | = "Bip01 R Calf"
    PUSH EBX                            ; 004d2d9c
    MOV [0x02d7b874],EAX                ; 004d2d9d | INT_02d7b874
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2da2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2da7
    PUSH 0x1                            ; 004d2daa
    PUSH 0x62adba                       ; 004d2dac | = "Bip01 L Hand"
    PUSH EBX                            ; 004d2db1
    MOV [0x02d7b878],EAX                ; 004d2db2 | INT_02d7b878
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2db7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2dbc
    PUSH 0x1                            ; 004d2dbf
    PUSH 0x62adc7                       ; 004d2dc1 | = "Bip01 R Hand"
    PUSH EBX                            ; 004d2dc6
    MOV [0x02d7b888],EAX                ; 004d2dc7 | INT_02d7b888
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2dcc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2dd1
    PUSH 0x1                            ; 004d2dd4
    PUSH 0x62add4                       ; 004d2dd6 | = "Bip01 Spine2"
    PUSH EBX                            ; 004d2ddb
    MOV [0x02d7b88c],EAX                ; 004d2ddc | INT_02d7b88c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2de1
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2de6
    MOV [0x02d7b890],EAX                ; 004d2de9 | INT_02d7b890
    PUSH 0x1                            ; 004d2dee
    PUSH 0x62ade1                       ; 004d2df0 | = "Bip01 Spine"
    PUSH EBX                            ; 004d2df5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004d2df6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004d2dfb
    PUSH 0x1                            ; 004d2dfe
    PUSH 0x62aded                       ; 004d2e00 | = "gab draw"
    PUSH EDI                            ; 004d2e05
    MOV [0x02d7b894],EAX                ; 004d2e06 | INT_02d7b894
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004d2e0b
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d2e10
    PUSH EAX                            ; 004d2e13
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004d2e14
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 004d2e19
    PUSH 0x1                            ; 004d2e1c
    PUSH 0x62adf6                       ; 004d2e1e | = "gab shoot"
    PUSH EDI                            ; 004d2e23
    MOV [0x02d7b87c],EAX                ; 004d2e24 | INT_02d7b87c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004d2e29
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d2e2e
    PUSH EAX                            ; 004d2e31
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004d2e32
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 004d2e37
    PUSH 0x1                            ; 004d2e3a
    PUSH 0x62ae00                       ; 004d2e3c | = "gab crossbow shoot"
    PUSH EDI                            ; 004d2e41
    MOV [0x02d7b884],EAX                ; 004d2e42 | INT_02d7b884
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004d2e47
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d2e4c
    PUSH EAX                            ; 004d2e4f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004d2e50
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    MOV dword ptr [ESI + 0x1fba4],0x0   ; 004d2e55
    MOV dword ptr [ESI + 0x1fba8],0x0   ; 004d2e5f
    MOV [0x02d7b880],EAX                ; 004d2e69 | INT_02d7b880
    MOV dword ptr [ESI + 0x1fbac],0x0   ; 004d2e6e
    MOV EAX,[0x02d7b888]                ; 004d2e78 | INT_02d7b888
    ADD ESP,0xc                         ; 004d2e7d
    MOV dword ptr [ESI + 0x24ac],EAX    ; 004d2e80
    POP EDI                             ; 004d2e86
    POP ESI                             ; 004d2e87
    POP EBX                             ; 004d2e88
    RET                                 ; 004d2e89

