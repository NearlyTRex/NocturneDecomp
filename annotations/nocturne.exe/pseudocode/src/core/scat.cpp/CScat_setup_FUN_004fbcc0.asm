; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_CScat_setup_FUN_004fbcc0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0058dd4c
;   TerminatedCString s_Bip01_L_Clavicle_0058dd57
;   TerminatedCString s_Bip01_R_Clavicle_0058dd68
;   TerminatedCString s_Bip01_L_UpperArm_0058dd79
;   TerminatedCString s_Bip01_R_UpperArm_0058dd8a
;   TerminatedCString s_Bip01_L_ForeArm_0058dd9b
;   TerminatedCString s_Bip01_R_ForeArm_0058ddab
;   TerminatedCString s_Bip01_L_Foot_0058ddbb
;   TerminatedCString s_Bip01_R_Foot_0058ddc8
;   TerminatedCString s_Bip01_L_Thigh_0058ddd5
;   TerminatedCString s_Bip01_R_Thigh_0058dde3
;   TerminatedCString s_Bip01_L_Calf_0058ddf1
;   TerminatedCString s_Bip01_R_Calf_0058ddfe
;   TerminatedCString s_Bip01_L_Hand_0058de0b
;   TerminatedCString s_Bip01_R_Hand_0058de18
;   ... and 22 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   FUN_004b48d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbcc0
        ;   Label: core_scat.cpp_CScat_setup_FUN_004fbcc0
    PUSH ESI                            ; 004fbcc1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fbcc2
    PUSH ESI                            ; 004fbcc6
    CALL FUN_004b48d0                   ; 004fbcc7
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b48d0()
    ADD ESP,0x4                         ; 004fbccc
    LEA EAX,[ESI + 0x150]               ; 004fbccf
    PUSH EAX                            ; 004fbcd5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004fbcd6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 004fbcdb
    PUSH 0x1                            ; 004fbcde
    PUSH 0x58dd4c                       ; 004fbce0 | = "Bip01 head"
    PUSH EAX                            ; 004fbce5
    MOV EBX,EAX                         ; 004fbce6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbce8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbced
    PUSH 0x1                            ; 004fbcf0
    PUSH 0x58dd57                       ; 004fbcf2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004fbcf7
    MOV [0x01e53388],EAX                ; 004fbcf8 | DAT_01e53388
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbcfd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd02
    PUSH 0x1                            ; 004fbd05
    PUSH 0x58dd68                       ; 004fbd07 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004fbd0c
    MOV [0x01e5338c],EAX                ; 004fbd0d | DAT_01e5338c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd12
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd17
    PUSH 0x1                            ; 004fbd1a
    PUSH 0x58dd79                       ; 004fbd1c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004fbd21
    MOV [0x01e53390],EAX                ; 004fbd22 | DAT_01e53390
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd27
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd2c
    PUSH 0x1                            ; 004fbd2f
    PUSH 0x58dd8a                       ; 004fbd31 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004fbd36
    MOV [0x01e53394],EAX                ; 004fbd37 | DAT_01e53394
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd3c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd41
    PUSH 0x1                            ; 004fbd44
    PUSH 0x58dd9b                       ; 004fbd46 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004fbd4b
    MOV [0x01e53398],EAX                ; 004fbd4c | DAT_01e53398
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd51
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd56
    PUSH 0x1                            ; 004fbd59
    PUSH 0x58ddab                       ; 004fbd5b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004fbd60
    MOV [0x01e5339c],EAX                ; 004fbd61 | DAT_01e5339c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd66
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd6b
    PUSH 0x1                            ; 004fbd6e
    PUSH 0x58ddbb                       ; 004fbd70 | = "Bip01 L Foot"
    PUSH EBX                            ; 004fbd75
    MOV [0x01e533a0],EAX                ; 004fbd76 | DAT_01e533a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd7b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd80
    PUSH 0x1                            ; 004fbd83
    PUSH 0x58ddc8                       ; 004fbd85 | = "Bip01 R Foot"
    PUSH EBX                            ; 004fbd8a
    MOV [0x01e533a4],EAX                ; 004fbd8b | DAT_01e533a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbd90
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbd95
    MOV [0x01e533a8],EAX                ; 004fbd98 | DAT_01e533a8
    PUSH 0x1                            ; 004fbd9d
    PUSH 0x58ddd5                       ; 004fbd9f | = "Bip01 L Thigh"
    PUSH EBX                            ; 004fbda4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbda5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbdaa
    PUSH 0x1                            ; 004fbdad
    PUSH 0x58dde3                       ; 004fbdaf | = "Bip01 R Thigh"
    PUSH EBX                            ; 004fbdb4
    MOV [0x01e533ac],EAX                ; 004fbdb5 | DAT_01e533ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbdba
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbdbf
    PUSH 0x1                            ; 004fbdc2
    PUSH 0x58ddf1                       ; 004fbdc4 | = "Bip01 L Calf"
    PUSH EBX                            ; 004fbdc9
    MOV [0x01e533b0],EAX                ; 004fbdca | DAT_01e533b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbdcf
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbdd4
    PUSH 0x1                            ; 004fbdd7
    PUSH 0x58ddfe                       ; 004fbdd9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004fbdde
    MOV [0x01e533b4],EAX                ; 004fbddf | DAT_01e533b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbde4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbde9
    PUSH 0x1                            ; 004fbdec
    PUSH 0x58de0b                       ; 004fbdee | = "Bip01 L Hand"
    PUSH EBX                            ; 004fbdf3
    MOV [0x01e533b8],EAX                ; 004fbdf4 | DAT_01e533b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbdf9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbdfe
    PUSH 0x1                            ; 004fbe01
    PUSH 0x58de18                       ; 004fbe03 | = "Bip01 R Hand"
    PUSH EBX                            ; 004fbe08
    MOV [0x01e533bc],EAX                ; 004fbe09 | DAT_01e533bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbe0e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbe13
    PUSH 0x1                            ; 004fbe16
    PUSH 0x58de25                       ; 004fbe18 | = "Bip01 Spine2"
    PUSH EBX                            ; 004fbe1d
    MOV [0x01e533c0],EAX                ; 004fbe1e | DAT_01e533c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbe23
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbe28
    PUSH 0x1                            ; 004fbe2b
    PUSH 0x58de32                       ; 004fbe2d | = "Bip01 Spine"
    PUSH EBX                            ; 004fbe32
    MOV [0x01e533c4],EAX                ; 004fbe33 | DAT_01e533c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbe38
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbe3d
    PUSH 0x1                            ; 004fbe40
    PUSH 0x58de3e                       ; 004fbe42 | = "Bip01 Spine1"
    PUSH EBX                            ; 004fbe47
    MOV [0x01e533cc],EAX                ; 004fbe48 | DAT_01e533cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbe4d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004fbe52
    PUSH 0x1                            ; 004fbe55
    PUSH 0x58de4b                       ; 004fbe57 | = "Bip01 Spine1"
    PUSH EBX                            ; 004fbe5c
    MOV [0x01e533c8],EAX                ; 004fbe5d | DAT_01e533c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004fbe62
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    MOV dword ptr [ESI + 0x1fa3c],0x0   ; 004fbe67
    ADD ESP,0xc                         ; 004fbe71
    MOV dword ptr [ESI + 0x25bc],EAX    ; 004fbe74
    POP ESI                             ; 004fbe7a
    POP EBX                             ; 004fbe7b
    RET                                 ; 004fbe7c

