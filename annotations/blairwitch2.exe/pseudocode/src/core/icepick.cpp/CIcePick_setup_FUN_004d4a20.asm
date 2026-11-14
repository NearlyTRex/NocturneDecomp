; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004d4a20(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005da703
;   TerminatedCString s_Bip01_L_Clavicle_005da70e
;   TerminatedCString s_Bip01_R_Clavicle_005da71f
;   TerminatedCString s_Bip01_L_UpperArm_005da730
;   TerminatedCString s_Bip01_R_UpperArm_005da741
;   TerminatedCString s_Bip01_L_ForeArm_005da752
;   TerminatedCString s_Bip01_R_ForeArm_005da762
;   TerminatedCString s_Bip01_L_Foot_005da772
;   TerminatedCString s_Bip01_R_Foot_005da77f
;   TerminatedCString s_Bip01_L_Thigh_005da78c
;   TerminatedCString s_Bip01_R_Thigh_005da79a
;   TerminatedCString s_Bip01_L_Calf_005da7a8
;   TerminatedCString s_Bip01_R_Calf_005da7b5
;   TerminatedCString s_Bip01_L_Hand_005da7c2
;   TerminatedCString s_Bip01_R_Hand_005da7cf
;   ... and 22 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4a20
        ;   Label: core_icepick.cpp_CIcePick_setup_FUN_004d4a20
    PUSH ESI                            ; 004d4a21
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d4a22
    PUSH ESI                            ; 004d4a26
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 004d4a27
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4a2c
    LEA EAX,[ESI + 0x2b4]               ; 004d4a2f
    PUSH EAX                            ; 004d4a35
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004d4a36
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d4a3b
    PUSH 0x1                            ; 004d4a3e
    PUSH 0x5da703                       ; 004d4a40 | = "Bip01 head"
    PUSH EAX                            ; 004d4a45
    MOV EBX,EAX                         ; 004d4a46
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4a48
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4a4d
    PUSH 0x1                            ; 004d4a50
    PUSH 0x5da70e                       ; 004d4a52 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004d4a57
    MOV [0x01cee0b4],EAX                ; 004d4a58 | DAT_01cee0b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4a5d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4a62
    PUSH 0x1                            ; 004d4a65
    PUSH 0x5da71f                       ; 004d4a67 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004d4a6c
    MOV [0x01cee0b8],EAX                ; 004d4a6d | DAT_01cee0b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4a72
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4a77
    PUSH 0x1                            ; 004d4a7a
    PUSH 0x5da730                       ; 004d4a7c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d4a81
    MOV [0x01cee0bc],EAX                ; 004d4a82 | DAT_01cee0bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4a87
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4a8c
    PUSH 0x1                            ; 004d4a8f
    PUSH 0x5da741                       ; 004d4a91 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d4a96
    MOV [0x01cee0c0],EAX                ; 004d4a97 | DAT_01cee0c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4a9c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4aa1
    PUSH 0x1                            ; 004d4aa4
    PUSH 0x5da752                       ; 004d4aa6 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004d4aab
    MOV [0x01cee0c4],EAX                ; 004d4aac | DAT_01cee0c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4ab1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4ab6
    PUSH 0x1                            ; 004d4ab9
    PUSH 0x5da762                       ; 004d4abb | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004d4ac0
    MOV [0x01cee0c8],EAX                ; 004d4ac1 | DAT_01cee0c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4ac6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4acb
    PUSH 0x1                            ; 004d4ace
    PUSH 0x5da772                       ; 004d4ad0 | = "Bip01 L Foot"
    PUSH EBX                            ; 004d4ad5
    MOV [0x01cee0cc],EAX                ; 004d4ad6 | DAT_01cee0cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4adb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4ae0
    PUSH 0x1                            ; 004d4ae3
    PUSH 0x5da77f                       ; 004d4ae5 | = "Bip01 R Foot"
    PUSH EBX                            ; 004d4aea
    MOV [0x01cee0d0],EAX                ; 004d4aeb | DAT_01cee0d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4af0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4af5
    MOV [0x01cee0d4],EAX                ; 004d4af8 | DAT_01cee0d4
    PUSH 0x1                            ; 004d4afd
    PUSH 0x5da78c                       ; 004d4aff | = "Bip01 L Thigh"
    PUSH EBX                            ; 004d4b04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b05
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b0a
    PUSH 0x1                            ; 004d4b0d
    PUSH 0x5da79a                       ; 004d4b0f | = "Bip01 R Thigh"
    PUSH EBX                            ; 004d4b14
    MOV [0x01cee0d8],EAX                ; 004d4b15 | DAT_01cee0d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b1a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b1f
    PUSH 0x1                            ; 004d4b22
    PUSH 0x5da7a8                       ; 004d4b24 | = "Bip01 L Calf"
    PUSH EBX                            ; 004d4b29
    MOV [0x01cee0dc],EAX                ; 004d4b2a | DAT_01cee0dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b2f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b34
    PUSH 0x1                            ; 004d4b37
    PUSH 0x5da7b5                       ; 004d4b39 | = "Bip01 R Calf"
    PUSH EBX                            ; 004d4b3e
    MOV [0x01cee0e0],EAX                ; 004d4b3f | DAT_01cee0e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b44
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b49
    PUSH 0x1                            ; 004d4b4c
    PUSH 0x5da7c2                       ; 004d4b4e | = "Bip01 L Hand"
    PUSH EBX                            ; 004d4b53
    MOV [0x01cee0e4],EAX                ; 004d4b54 | DAT_01cee0e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b59
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b5e
    PUSH 0x1                            ; 004d4b61
    PUSH 0x5da7cf                       ; 004d4b63 | = "Bip01 R Hand"
    PUSH EBX                            ; 004d4b68
    MOV [0x01cee0e8],EAX                ; 004d4b69 | DAT_01cee0e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b6e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b73
    PUSH 0x1                            ; 004d4b76
    PUSH 0x5da7dc                       ; 004d4b78 | = "Bip01 Spine2"
    PUSH EBX                            ; 004d4b7d
    MOV [0x01cee0ec],EAX                ; 004d4b7e | DAT_01cee0ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b83
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b88
    PUSH 0x1                            ; 004d4b8b
    PUSH 0x5da7e9                       ; 004d4b8d | = "Bip01 Spine1"
    PUSH EBX                            ; 004d4b92
    MOV [0x01cee0f0],EAX                ; 004d4b93 | DAT_01cee0f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4b98
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4b9d
    PUSH 0x1                            ; 004d4ba0
    PUSH 0x5da7f6                       ; 004d4ba2 | = "Bip01 Spine"
    PUSH EBX                            ; 004d4ba7
    MOV [0x01cee0f4],EAX                ; 004d4ba8 | DAT_01cee0f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d4bad
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESI + 0x261c],0x0    ; 004d4bb2
    MOV dword ptr [ESI + 0x2694],0x0    ; 004d4bbc
    MOV [0x01cee0f8],EAX                ; 004d4bc6 | DAT_01cee0f8
    MOV dword ptr [ESI + 0x25640],0x0   ; 004d4bcb
    MOV EAX,[0x01cee0e8]                ; 004d4bd5 | DAT_01cee0e8
    MOV dword ptr [ESI + 0x2618],EAX    ; 004d4bda
    MOV EAX,[0x01cee0ec]                ; 004d4be0 | DAT_01cee0ec
    MOV dword ptr [ESI + 0x2690],EAX    ; 004d4be5
    MOV EAX,[0x01cedef4]                ; 004d4beb | DAT_01cedef4
    MOV dword ptr [ESI + 0x25664],0x0   ; 004d4bf0
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d4bfa
    ADD ESP,0xc                         ; 004d4c01
    CMP ESI,EDX                         ; 004d4c04
    JZ 0x004d4c29                       ; 004d4c06
        ;   XREF to: 004d4c29 (CONDITIONAL_JUMP)  ; LAB_004d4c29
    MOV dword ptr [ESI + 0x2564c],0x0   ; 004d4c08
        ;   Label: LAB_004d4c08
    MOV dword ptr [ESI + 0x25648],0x0   ; 004d4c12
    MOV dword ptr [ESI + 0x2566c],0x0   ; 004d4c1c
    POP ESI                             ; 004d4c26
    POP EBX                             ; 004d4c27
    RET                                 ; 004d4c28
    MOV dword ptr [EDX + 0x3434],0x3fc00000 ; 004d4c29
        ;   Label: LAB_004d4c29
    JMP 0x004d4c08                      ; 004d4c33
        ;   XREF to: 004d4c08 (UNCONDITIONAL_JUMP)  ; LAB_004d4c08

