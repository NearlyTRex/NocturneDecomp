; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_CBride_setup_FUN_0041fc20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   string s_Bip01_Head_005799fe
;   string s_Bip01_L_ForeArm_00579a09
;   string s_Bip01_R_ForeArm_00579a19
;   string s_Bip01_L_Foot_00579a29
;   string s_Bip01_R_Foot_00579a36
;   string s_Bip01_L_Hand_00579a43
;   string s_Bip01_R_Hand_00579a50
;   string s_Bip01_L_UpperArm_00579a5d
;   string s_Bip01_R_UpperArm_00579a6e
;   string s_Bip01_Spine_00579a7f
;   string s_Bip01_Spine2_00579a8b
;   string s_lshoulderpiece_00579a98
;   string s_l4armpiece_00579aa7
;   string s_rshoulderpiece_00579ab2
;   string s_r4armpiece_00579ac1
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fc20
        ;   Label: core_bride.cpp_CBride_setup_FUN_0041fc20
    PUSH ESI                            ; 0041fc21
    SUB ESP,0x4                         ; 0041fc22
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041fc25
    PUSH EDI                            ; 0041fc29
    LEA EDI,[EBX + 0x150]               ; 0041fc2a
    PUSH EDI                            ; 0041fc30
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 0041fc31
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 0041fc36
    PUSH EDI                            ; 0041fc39
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0041fc3a
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0041fc3f
    PUSH 0x1                            ; 0041fc42
    PUSH 0x5799fe                       ; 0041fc44 | = "Bip01 Head"
    PUSH EAX                            ; 0041fc49
    MOV ESI,EAX                         ; 0041fc4a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fc4c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fc51
    PUSH 0x1                            ; 0041fc54
    PUSH 0x579a09                       ; 0041fc56 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0041fc5b
    MOV [0x00764b2c],EAX                ; 0041fc5c | DAT_00764b2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fc61
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fc66
    PUSH 0x1                            ; 0041fc69
    PUSH 0x579a19                       ; 0041fc6b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0041fc70
    MOV [0x00764b38],EAX                ; 0041fc71 | DAT_00764b38
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fc76
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fc7b
    PUSH 0x1                            ; 0041fc7e
    PUSH 0x579a29                       ; 0041fc80 | = "Bip01 L Foot"
    PUSH ESI                            ; 0041fc85
    MOV [0x00764b3c],EAX                ; 0041fc86 | DAT_00764b3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fc8b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fc90
    PUSH 0x1                            ; 0041fc93
    PUSH 0x579a36                       ; 0041fc95 | = "Bip01 R Foot"
    PUSH ESI                            ; 0041fc9a
    MOV [0x00764b48],EAX                ; 0041fc9b | DAT_00764b48
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fca0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fca5
    PUSH 0x1                            ; 0041fca8
    PUSH 0x579a43                       ; 0041fcaa | = "Bip01 L Hand"
    PUSH ESI                            ; 0041fcaf
    MOV [0x00764b4c],EAX                ; 0041fcb0 | DAT_00764b4c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fcb5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fcba
    PUSH 0x1                            ; 0041fcbd
    PUSH 0x579a50                       ; 0041fcbf | = "Bip01 R Hand"
    PUSH ESI                            ; 0041fcc4
    MOV [0x00764b30],EAX                ; 0041fcc5 | DAT_00764b30
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fcca
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fccf
    PUSH 0x1                            ; 0041fcd2
    PUSH 0x579a5d                       ; 0041fcd4 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041fcd9
    MOV [0x00764b34],EAX                ; 0041fcda | DAT_00764b34
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fcdf
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fce4
    PUSH 0x1                            ; 0041fce7
    PUSH 0x579a6e                       ; 0041fce9 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0041fcee
    MOV [0x00764b40],EAX                ; 0041fcef | DAT_00764b40
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fcf4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fcf9
    MOV [0x00764b44],EAX                ; 0041fcfc | DAT_00764b44
    PUSH 0x1                            ; 0041fd01
    PUSH 0x579a7f                       ; 0041fd03 | = "Bip01 Spine"
    PUSH ESI                            ; 0041fd08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fd09
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fd0e
    PUSH 0x1                            ; 0041fd11
    PUSH 0x579a8b                       ; 0041fd13 | = "Bip01 Spine2"
    PUSH ESI                            ; 0041fd18
    MOV [0x00764b50],EAX                ; 0041fd19 | DAT_00764b50
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041fd1e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041fd23
    PUSH EDI                            ; 0041fd26
    MOV [0x00764b54],EAX                ; 0041fd27 | DAT_00764b54
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0041fd2c
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0041fd31
    PUSH 0x1                            ; 0041fd34
    PUSH 0x579a98                       ; 0041fd36 | = "lshoulderpiece"
    PUSH EAX                            ; 0041fd3b
    MOV ESI,EAX                         ; 0041fd3c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fd3e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fd43
    PUSH 0x1                            ; 0041fd46
    PUSH 0x579aa7                       ; 0041fd48 | = "l4armpiece"
    PUSH ESI                            ; 0041fd4d
    MOV dword ptr [EBX + 0xbd24],EAX    ; 0041fd4e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fd54
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fd59
    PUSH 0x1                            ; 0041fd5c
    PUSH 0x579ab2                       ; 0041fd5e | = "rshoulderpiece"
    PUSH ESI                            ; 0041fd63
    MOV dword ptr [EBX + 0xbd28],EAX    ; 0041fd64
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fd6a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fd6f
    PUSH 0x1                            ; 0041fd72
    PUSH 0x579ac1                       ; 0041fd74 | = "r4armpiece"
    PUSH ESI                            ; 0041fd79
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 0041fd7a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fd80
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fd85
    PUSH 0x1                            ; 0041fd88
    PUSH 0x579acc                       ; 0041fd8a | = "lshinpiece"
    PUSH ESI                            ; 0041fd8f
    MOV dword ptr [EBX + 0xbd30],EAX    ; 0041fd90
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fd96
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fd9b
    PUSH 0x1                            ; 0041fd9e
    PUSH 0x579ad7                       ; 0041fda0 | = "rshinpiece"
    PUSH ESI                            ; 0041fda5
    MOV dword ptr [EBX + 0xbd34],EAX    ; 0041fda6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fdac
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fdb1
    PUSH 0x1                            ; 0041fdb4
    PUSH 0x579ae2                       ; 0041fdb6 | = "torsopiece"
    PUSH ESI                            ; 0041fdbb
    MOV dword ptr [EBX + 0xbd38],EAX    ; 0041fdbc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fdc2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fdc7
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 0041fdca
    POP EDI                             ; 0041fdd0
    PUSH 0x1                            ; 0041fdd1
    PUSH 0x579aed                       ; 0041fdd3 | = "lowerbodypiece"
    PUSH ESI                            ; 0041fdd8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fdd9
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fdde
    PUSH 0x1                            ; 0041fde1
    PUSH 0x579afc                       ; 0041fde3 | = "headpiece"
    PUSH ESI                            ; 0041fde8
    MOV dword ptr [EBX + 0xbd40],EAX    ; 0041fde9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0041fdef
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0041fdf4
    PUSH EBX                            ; 0041fdf7
    MOV dword ptr [EBX + 0xbd44],EAX    ; 0041fdf8
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 0041fdfe
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 0041fe03
    PUSH 0x41a00000                     ; 0041fe06
    PUSH 0x40000000                     ; 0041fe0b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041fe10
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBX + 0xbd4c],0x0    ; 0041fe15
    MOV dword ptr [ESP + 0x8],EAX       ; 0041fe1f
    MOV dword ptr [EBX + 0xbd50],0x0    ; 0041fe23
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041fe2d
    MOV dword ptr [EBX + 0xbd48],EAX    ; 0041fe31
    ADD ESP,0x8                         ; 0041fe37
    ADD ESP,0x4                         ; 0041fe3a
    POP ESI                             ; 0041fe3d
    POP EBX                             ; 0041fe3e
    RET                                 ; 0041fe3f

