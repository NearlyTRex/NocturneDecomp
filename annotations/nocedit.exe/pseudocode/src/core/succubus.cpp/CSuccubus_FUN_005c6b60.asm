; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_succubus.cpp_CSuccubus_FUN_005c6b60(CSuccubus * this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_succubusx_dfm_00653ffd
;   TerminatedCString s_hotdemonx_dfm_0065400b
;   TerminatedCString s_succubus_dfm_00654019
;   TerminatedCString s_hotdemon_dfm_00654026
;   TerminatedCString s_Bip01_Head_00654033
;   TerminatedCString s_Bip01_L_ForeArm_0065403e
;   TerminatedCString s_Bip01_R_ForeArm_0065404e
;   TerminatedCString s_Bip01_L_UpperArm_0065405e
;   TerminatedCString s_Bip01_R_UpperArm_0065406f
;   TerminatedCString s_Bip01_L_Foot_00654080
;   TerminatedCString s_Bip01_R_Foot_0065408d
;   TerminatedCString s_Bip01_L_Hand_0065409a
;   TerminatedCString s_Bip01_R_Hand_006540a7
;   TerminatedCString s_Bip01_Spine_006540b4
;   TerminatedCString s_Bip01_Spine1_006540c0
;   ... and 22 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_load_FUN_0043bfa0
;   core_cloth.cpp_FUN_0043c290
;   core_cloth.cpp_FUN_0043c2d0
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_FUN_0052b430
;   core_morph.cpp_FUN_0052b580
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6b60
        ;   Label: core_succubus.cpp_CSuccubus_FUN_005c6b60
    PUSH ESI                            ; 005c6b61
    PUSH EDI                            ; 005c6b62
    PUSH EBP                            ; 005c6b63
    SUB ESP,0x8                         ; 005c6b64
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c6b67
    MOV EDI,dword ptr [0x0067b654]      ; 005c6b6b | g_CGamePtr
    LEA ESI,[EBX + 0xbebc]              ; 005c6b71
    MOV EDX,dword ptr [EDI + 0x18]      ; 005c6b77 | g_CGameInstance.nudity_flag
    LEA EAX,[EBX + 0x158]               ; 005c6b7a
    TEST EDX,EDX                        ; 005c6b80
    JZ 0x005c6e6e                       ; 005c6b82
        ;   XREF to: 005c6e6e (CONDITIONAL_JUMP)  ; LAB_005c6e6e
    PUSH 0x654019                       ; 005c6b88 | = "succubus.dfm"
    PUSH EAX                            ; 005c6b8d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005c6b8e
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005c6b93
    PUSH 0x654026                       ; 005c6b96 | = "hotdemon.dfm"
    PUSH ESI                            ; 005c6b9b
        ;   Label: LAB_005c6b9b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005c6b9c
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005c6ba1
    PUSH EBX                            ; 005c6ba4
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 005c6ba5
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005c6baa
    LEA EBP,[EBX + 0x158]               ; 005c6bad
    PUSH EBP                            ; 005c6bb3
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005c6bb4
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6bb9
    LEA EDI,[EBX + 0xbebc]              ; 005c6bbc
    PUSH EDI                            ; 005c6bc2
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005c6bc3
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6bc8
    LEA ESI,[EBX + 0xe170]              ; 005c6bcb
    PUSH ESI                            ; 005c6bd1
    CALL core_cloth.cpp_CClothList_load_FUN_0043bfa0 ; 005c6bd2
        ;   XREF to: 0043bfa0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 005c6bd7
    PUSH EDI                            ; 005c6bda
    LEA EAX,[EBX + 0x30]                ; 005c6bdb
    PUSH EAX                            ; 005c6bde
    MOV dword ptr [ESP + 0x8],EAX       ; 005c6bdf
    LEA EAX,[EBX + 0x20]                ; 005c6be3
    PUSH EAX                            ; 005c6be6
    PUSH ESI                            ; 005c6be7
    MOV dword ptr [ESP + 0x14],EAX      ; 005c6be8
    CALL core_cloth.cpp_FUN_0043c290    ; 005c6bec
        ;   XREF to: 0043c290 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c290()
    ADD ESP,0x10                        ; 005c6bf1
    PUSH EDI                            ; 005c6bf4
    PUSH dword ptr [EBX + 0x2414]       ; 005c6bf5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c6bfb
    PUSH 0x3d4ccccd                     ; 005c6bff
    PUSH EDX                            ; 005c6c04
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c6c05
    PUSH ECX                            ; 005c6c09
    LEA EAX,[EBX + 0x2a94]              ; 005c6c0a
    PUSH EAX                            ; 005c6c10
    CALL core_cloth.cpp_FUN_0043c2d0    ; 005c6c11
        ;   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c2d0()
    ADD ESP,0x18                        ; 005c6c16
    PUSH EBP                            ; 005c6c19
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005c6c1a
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6c1f
    PUSH 0x1                            ; 005c6c22
    PUSH 0x654033                       ; 005c6c24 | = "Bip01 Head"
    PUSH EAX                            ; 005c6c29
    MOV ESI,EAX                         ; 005c6c2a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c2c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c31
    PUSH 0x1                            ; 005c6c34
    PUSH 0x65403e                       ; 005c6c36 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005c6c3b
    MOV [0x03f6bb68],EAX                ; 005c6c3c | DAT_03f6bb68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c41
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c46
    PUSH 0x1                            ; 005c6c49
    PUSH 0x65404e                       ; 005c6c4b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005c6c50
    MOV [0x03f6bb74],EAX                ; 005c6c51 | DAT_03f6bb74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c56
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c5b
    PUSH 0x1                            ; 005c6c5e
    PUSH 0x65405e                       ; 005c6c60 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005c6c65
    MOV [0x03f6bb78],EAX                ; 005c6c66 | DAT_03f6bb78
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c6b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c70
    PUSH 0x1                            ; 005c6c73
    PUSH 0x65406f                       ; 005c6c75 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005c6c7a
    MOV [0x03f6bb7c],EAX                ; 005c6c7b | DAT_03f6bb7c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c80
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c85
    MOV [0x03f6bb80],EAX                ; 005c6c88 | DAT_03f6bb80
    PUSH 0x1                            ; 005c6c8d
    PUSH 0x654080                       ; 005c6c8f | = "Bip01 L Foot"
    PUSH ESI                            ; 005c6c94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6c95
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6c9a
    PUSH 0x1                            ; 005c6c9d
    PUSH 0x65408d                       ; 005c6c9f | = "Bip01 R Foot"
    PUSH ESI                            ; 005c6ca4
    MOV [0x03f6bb84],EAX                ; 005c6ca5 | DAT_03f6bb84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6caa
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6caf
    PUSH 0x1                            ; 005c6cb2
    PUSH 0x65409a                       ; 005c6cb4 | = "Bip01 L Hand"
    PUSH ESI                            ; 005c6cb9
    MOV [0x03f6bb88],EAX                ; 005c6cba | DAT_03f6bb88
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6cbf
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6cc4
    PUSH 0x1                            ; 005c6cc7
    PUSH 0x6540a7                       ; 005c6cc9 | = "Bip01 R Hand"
    PUSH ESI                            ; 005c6cce
    MOV [0x03f6bb6c],EAX                ; 005c6ccf | DAT_03f6bb6c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6cd4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6cd9
    PUSH 0x1                            ; 005c6cdc
    PUSH 0x6540b4                       ; 005c6cde | = "Bip01 Spine"
    PUSH ESI                            ; 005c6ce3
    MOV [0x03f6bb70],EAX                ; 005c6ce4 | DAT_03f6bb70
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6ce9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6cee
    PUSH 0x1                            ; 005c6cf1
    PUSH 0x6540c0                       ; 005c6cf3 | = "Bip01 Spine1"
    PUSH ESI                            ; 005c6cf8
    MOV [0x03f6bb8c],EAX                ; 005c6cf9 | DAT_03f6bb8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6cfe
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d03
    PUSH 0x1                            ; 005c6d06
    PUSH 0x6540cd                       ; 005c6d08 | = "Bip01 Spine2"
    PUSH ESI                            ; 005c6d0d
    MOV [0x03f6bb90],EAX                ; 005c6d0e | DAT_03f6bb90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d13
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d18
    PUSH 0x1                            ; 005c6d1b
    PUSH 0x6540da                       ; 005c6d1d | = "Bip01 Head"
    PUSH ESI                            ; 005c6d22
    MOV [0x03f6bb94],EAX                ; 005c6d23 | DAT_03f6bb94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d28
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d2d
    PUSH 0x1                            ; 005c6d30
    PUSH 0x6540e5                       ; 005c6d32 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005c6d37
    MOV [0x03f6bb68],EAX                ; 005c6d38 | DAT_03f6bb68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d3d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d42
    PUSH 0x1                            ; 005c6d45
    PUSH 0x6540f6                       ; 005c6d47 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005c6d4c
    MOV [0x03f6bb7c],EAX                ; 005c6d4d | DAT_03f6bb7c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d52
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d57
    MOV [0x03f6bb80],EAX                ; 005c6d5a | DAT_03f6bb80
    PUSH 0x1                            ; 005c6d5f
    PUSH 0x654107                       ; 005c6d61 | = "Bip01 Spine"
    PUSH ESI                            ; 005c6d66
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d67
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d6c
    PUSH 0x1                            ; 005c6d6f
    PUSH 0x654113                       ; 005c6d71 | = "Bip01 Spine2"
    PUSH ESI                            ; 005c6d76
    MOV [0x03f6bb8c],EAX                ; 005c6d77 | DAT_03f6bb8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005c6d7c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005c6d81
    PUSH EDI                            ; 005c6d84
    MOV [0x03f6bb94],EAX                ; 005c6d85 | DAT_03f6bb94
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 005c6d8a
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6d8f
    PUSH EBP                            ; 005c6d92
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 005c6d93
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    FLD float ptr [EBX + 0x804]         ; 005c6d98
    ADD ESP,0x4                         ; 005c6d9e
    FADD float ptr [0x00654121]         ; 005c6da1 | FLOAT_00654121
    PUSH EBP                            ; 005c6da7
    FSTP float ptr [EBX + 0x804]        ; 005c6da8
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005c6dae
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6db3
    PUSH EDI                            ; 005c6db6
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005c6db7
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6dbc
    PUSH EBP                            ; 005c6dbf
    PUSH 0x0                            ; 005c6dc0
    LEA ESI,[EBX + 0xe33c]              ; 005c6dc2
    PUSH ESI                            ; 005c6dc8
    CALL core_morph.cpp_FUN_0052b430    ; 005c6dc9
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 005c6dce
    PUSH EDI                            ; 005c6dd1
    PUSH 0x1                            ; 005c6dd2
    PUSH ESI                            ; 005c6dd4
    CALL core_morph.cpp_FUN_0052b430    ; 005c6dd5
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 005c6dda
    XOR EAX,EAX                         ; 005c6ddd
    PUSH EAX                            ; 005c6ddf
    MOV EDX,dword ptr [EBX + 0xe304]    ; 005c6de0
    PUSH EDX                            ; 005c6de6
    PUSH 0x1                            ; 005c6de7
    PUSH ESI                            ; 005c6de9
    MOV [0x02f43974],EAX                ; 005c6dea | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005c6def
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005c6df4
    PUSH 0x0                            ; 005c6df7
    MOV EAX,dword ptr [EBX + 0xe304]    ; 005c6df9
    PUSH EAX                            ; 005c6dff
    MOV ECX,0x1                         ; 005c6e00
    PUSH ECX                            ; 005c6e05
    PUSH ESI                            ; 005c6e06
    MOV dword ptr [0x02f43974],ECX      ; 005c6e07 | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005c6e0d
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005c6e12
    XOR EDX,EDX                         ; 005c6e15
    PUSH ESI                            ; 005c6e17
    MOV dword ptr [0x02f43974],EDX      ; 005c6e18 | DAT_02f43974
    MOV dword ptr [EBX + 0xef64],EDX    ; 005c6e1e
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 005c6e24
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    MOV dword ptr [EBX + 0xe334],0x0    ; 005c6e29
    MOV dword ptr [EBX + 0xe338],0x0    ; 005c6e33
    ADD ESP,0x4                         ; 005c6e3d
    MOV dword ptr [EBX + 0xe32c],0x0    ; 005c6e40
    PUSH EDI                            ; 005c6e4a
    MOV dword ptr [EBX + 0xe330],0x40a00000 ; 005c6e4b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005c6e55
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6e5a
    PUSH EBP                            ; 005c6e5d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005c6e5e
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c6e63
    ADD ESP,0x8                         ; 005c6e66
    POP EBP                             ; 005c6e69
    POP EDI                             ; 005c6e6a
    POP ESI                             ; 005c6e6b
    POP EBX                             ; 005c6e6c
    RET                                 ; 005c6e6d
    PUSH 0x653ffd                       ; 005c6e6e | = "succubusx.dfm"
        ;   Label: LAB_005c6e6e
    PUSH EAX                            ; 005c6e73
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005c6e74
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005c6e79
    PUSH 0x65400b                       ; 005c6e7c | = "hotdemonx.dfm"
    JMP 0x005c6b9b                      ; 005c6e81
        ;   XREF to: 005c6b9b (UNCONDITIONAL_JUMP)  ; LAB_005c6b9b

