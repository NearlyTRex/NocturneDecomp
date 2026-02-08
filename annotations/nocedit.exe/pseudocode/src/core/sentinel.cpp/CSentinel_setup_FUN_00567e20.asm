; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_00567e20(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00645726
;   TerminatedCString s_Bip01_L_ForeArm_00645731
;   TerminatedCString s_Bip01_R_ForeArm_00645741
;   TerminatedCString s_Bip01_L_UpperArm_00645751
;   TerminatedCString s_Bip01_R_UpperArm_00645762
;   TerminatedCString s_Bip01_L_Foot_00645773
;   TerminatedCString s_Bip01_R_Foot_00645780
;   TerminatedCString s_Bip01_L_Hand_0064578d
;   TerminatedCString s_Bip01_R_Hand_0064579a
;   TerminatedCString s_Bip01_Spine_006457a7
;   TerminatedCString s_Bip01_Spine1_006457b3
;   TerminatedCString s_Bip01_Spine2_006457c0
;   TerminatedCString s_Bip01_Head_006457cd
;   TerminatedCString s_Bip01_L_UpperArm_006457d8
;   TerminatedCString s_Bip01_R_UpperArm_006457e9
;   ... and 14 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567e20
        ;   Label: core_sentinel.cpp_CSentinel_setup_FUN_00567e20
    PUSH ESI                            ; 00567e21
    PUSH EDI                            ; 00567e22
    MOV EDI,dword ptr [ESP + 0x10]      ; 00567e23
    PUSH EDI                            ; 00567e27
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 00567e28
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00567e2d
    LEA ESI,[EDI + 0x158]               ; 00567e30
    PUSH ESI                            ; 00567e36
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00567e37
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567e3c
    PUSH ESI                            ; 00567e3f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00567e40
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567e45
    PUSH 0x1                            ; 00567e48
    PUSH 0x645726                       ; 00567e4a | = "Bip01 Head"
    PUSH EAX                            ; 00567e4f
    MOV EBX,EAX                         ; 00567e50
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567e52
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567e57
    PUSH 0x1                            ; 00567e5a
    PUSH 0x645731                       ; 00567e5c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00567e61
    MOV [0x0311420c],EAX                ; 00567e62 | INT_0311420c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567e67
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567e6c
    PUSH 0x1                            ; 00567e6f
    PUSH 0x645741                       ; 00567e71 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00567e76
    MOV [0x03114218],EAX                ; 00567e77 | INT_03114218
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567e7c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567e81
    PUSH 0x1                            ; 00567e84
    PUSH 0x645751                       ; 00567e86 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00567e8b
    MOV [0x0311421c],EAX                ; 00567e8c | INT_0311421c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567e91
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567e96
    PUSH 0x1                            ; 00567e99
    PUSH 0x645762                       ; 00567e9b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00567ea0
    MOV [0x03114220],EAX                ; 00567ea1 | INT_03114220
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567ea6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567eab
    PUSH 0x1                            ; 00567eae
    PUSH 0x645773                       ; 00567eb0 | = "Bip01 L Foot"
    PUSH EBX                            ; 00567eb5
    MOV [0x03114224],EAX                ; 00567eb6 | INT_03114224
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567ebb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567ec0
    PUSH 0x1                            ; 00567ec3
    PUSH 0x645780                       ; 00567ec5 | = "Bip01 R Foot"
    PUSH EBX                            ; 00567eca
    MOV [0x03114228],EAX                ; 00567ecb | INT_03114228
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567ed0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567ed5
    PUSH 0x1                            ; 00567ed8
    PUSH 0x64578d                       ; 00567eda | = "Bip01 L Hand"
    PUSH EBX                            ; 00567edf
    MOV [0x0311422c],EAX                ; 00567ee0 | INT_0311422c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567ee5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567eea
    MOV [0x03114210],EAX                ; 00567eed | INT_03114210
    PUSH 0x1                            ; 00567ef2
    PUSH 0x64579a                       ; 00567ef4 | = "Bip01 R Hand"
    PUSH EBX                            ; 00567ef9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567efa
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567eff
    PUSH 0x1                            ; 00567f02
    PUSH 0x6457a7                       ; 00567f04 | = "Bip01 Spine"
    PUSH EBX                            ; 00567f09
    MOV [0x03114214],EAX                ; 00567f0a | INT_03114214
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f0f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f14
    PUSH 0x1                            ; 00567f17
    PUSH 0x6457b3                       ; 00567f19 | = "Bip01 Spine1"
    PUSH EBX                            ; 00567f1e
    MOV [0x03114230],EAX                ; 00567f1f | INT_03114230
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f24
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f29
    PUSH 0x1                            ; 00567f2c
    PUSH 0x6457c0                       ; 00567f2e | = "Bip01 Spine2"
    PUSH EBX                            ; 00567f33
    MOV [0x03114234],EAX                ; 00567f34 | INT_03114234
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f39
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f3e
    PUSH 0x1                            ; 00567f41
    PUSH 0x6457cd                       ; 00567f43 | = "Bip01 Head"
    PUSH EBX                            ; 00567f48
    MOV [0x03114238],EAX                ; 00567f49 | INT_03114238
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f4e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f53
    PUSH 0x1                            ; 00567f56
    PUSH 0x6457d8                       ; 00567f58 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00567f5d
    MOV [0x0311420c],EAX                ; 00567f5e | INT_0311420c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f63
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f68
    PUSH 0x1                            ; 00567f6b
    PUSH 0x6457e9                       ; 00567f6d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00567f72
    MOV [0x03114220],EAX                ; 00567f73 | INT_03114220
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f78
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f7d
    PUSH 0x1                            ; 00567f80
    PUSH 0x6457fa                       ; 00567f82 | = "Bip01 Spine"
    PUSH EBX                            ; 00567f87
    MOV [0x03114224],EAX                ; 00567f88 | INT_03114224
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567f8d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567f92
    PUSH 0x1                            ; 00567f95
    PUSH 0x645806                       ; 00567f97 | = "Bip01 Spine2"
    PUSH EBX                            ; 00567f9c
    MOV [0x03114230],EAX                ; 00567f9d | INT_03114230
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00567fa2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00567fa7
    PUSH ESI                            ; 00567faa
    MOV [0x03114238],EAX                ; 00567fab | INT_03114238
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00567fb0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0xbec0],0x0    ; 00567fb5
    ADD ESP,0x4                         ; 00567fbf
    MOV dword ptr [EDI + 0xbebc],0x0    ; 00567fc2
    POP EDI                             ; 00567fcc
    POP ESI                             ; 00567fcd
    POP EBX                             ; 00567fce
    RET                                 ; 00567fcf

