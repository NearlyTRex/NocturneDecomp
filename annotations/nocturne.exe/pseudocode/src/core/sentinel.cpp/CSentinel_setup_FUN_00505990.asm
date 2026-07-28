; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sentinel_cpp_CSentinel_setup_FUN_00505990(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0058ff34
;   TerminatedCString s_Bip01_L_ForeArm_0058ff3f
;   TerminatedCString s_Bip01_R_ForeArm_0058ff4f
;   TerminatedCString s_Bip01_L_UpperArm_0058ff5f
;   TerminatedCString s_Bip01_R_UpperArm_0058ff70
;   TerminatedCString s_Bip01_L_Foot_0058ff81
;   TerminatedCString s_Bip01_R_Foot_0058ff8e
;   TerminatedCString s_Bip01_L_Hand_0058ff9b
;   TerminatedCString s_Bip01_R_Hand_0058ffa8
;   TerminatedCString s_Bip01_Spine_0058ffb5
;   TerminatedCString s_Bip01_Spine1_0058ffc1
;   TerminatedCString s_Bip01_Spine2_0058ffce
;   TerminatedCString s_Bip01_Head_0058ffdb
;   TerminatedCString s_Bip01_L_UpperArm_0058ffe6
;   TerminatedCString s_Bip01_R_UpperArm_0058fff7
;   ... and 14 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505990
        ;   Label: core_sentinel.cpp_CSentinel_setup_FUN_00505990
    PUSH ESI                            ; 00505991
    PUSH EDI                            ; 00505992
    MOV EDI,dword ptr [ESP + 0x10]      ; 00505993
    PUSH EDI                            ; 00505997
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 00505998
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0050599d
    LEA ESI,[EDI + 0x150]               ; 005059a0
    PUSH ESI                            ; 005059a6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 005059a7
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005059ac
    PUSH ESI                            ; 005059af
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 005059b0
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005059b5
    PUSH 0x1                            ; 005059b8
    PUSH 0x58ff34                       ; 005059ba | = "Bip01 Head"
    PUSH EAX                            ; 005059bf
    MOV EBX,EAX                         ; 005059c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005059c2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005059c7
    PUSH 0x1                            ; 005059ca
    PUSH 0x58ff3f                       ; 005059cc | = "Bip01 L ForeArm"
    PUSH EBX                            ; 005059d1
    MOV [0x01e57218],EAX                ; 005059d2 | DAT_01e57218
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005059d7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005059dc
    PUSH 0x1                            ; 005059df
    PUSH 0x58ff4f                       ; 005059e1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 005059e6
    MOV [0x01e57224],EAX                ; 005059e7 | DAT_01e57224
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005059ec
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005059f1
    PUSH 0x1                            ; 005059f4
    PUSH 0x58ff5f                       ; 005059f6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005059fb
    MOV [0x01e57228],EAX                ; 005059fc | DAT_01e57228
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a01
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a06
    PUSH 0x1                            ; 00505a09
    PUSH 0x58ff70                       ; 00505a0b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00505a10
    MOV [0x01e5722c],EAX                ; 00505a11 | DAT_01e5722c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a16
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a1b
    PUSH 0x1                            ; 00505a1e
    PUSH 0x58ff81                       ; 00505a20 | = "Bip01 L Foot"
    PUSH EBX                            ; 00505a25
    MOV [0x01e57230],EAX                ; 00505a26 | DAT_01e57230
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a2b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a30
    PUSH 0x1                            ; 00505a33
    PUSH 0x58ff8e                       ; 00505a35 | = "Bip01 R Foot"
    PUSH EBX                            ; 00505a3a
    MOV [0x01e57234],EAX                ; 00505a3b | DAT_01e57234
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a40
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a45
    PUSH 0x1                            ; 00505a48
    PUSH 0x58ff9b                       ; 00505a4a | = "Bip01 L Hand"
    PUSH EBX                            ; 00505a4f
    MOV [0x01e57238],EAX                ; 00505a50 | DAT_01e57238
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a55
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a5a
    MOV [0x01e5721c],EAX                ; 00505a5d | DAT_01e5721c
    PUSH 0x1                            ; 00505a62
    PUSH 0x58ffa8                       ; 00505a64 | = "Bip01 R Hand"
    PUSH EBX                            ; 00505a69
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a6a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a6f
    PUSH 0x1                            ; 00505a72
    PUSH 0x58ffb5                       ; 00505a74 | = "Bip01 Spine"
    PUSH EBX                            ; 00505a79
    MOV [0x01e57220],EAX                ; 00505a7a | DAT_01e57220
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a7f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a84
    PUSH 0x1                            ; 00505a87
    PUSH 0x58ffc1                       ; 00505a89 | = "Bip01 Spine1"
    PUSH EBX                            ; 00505a8e
    MOV [0x01e5723c],EAX                ; 00505a8f | DAT_01e5723c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505a94
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505a99
    PUSH 0x1                            ; 00505a9c
    PUSH 0x58ffce                       ; 00505a9e | = "Bip01 Spine2"
    PUSH EBX                            ; 00505aa3
    MOV [0x01e57240],EAX                ; 00505aa4 | DAT_01e57240
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505aa9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505aae
    PUSH 0x1                            ; 00505ab1
    PUSH 0x58ffdb                       ; 00505ab3 | = "Bip01 Head"
    PUSH EBX                            ; 00505ab8
    MOV [0x01e57244],EAX                ; 00505ab9 | DAT_01e57244
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505abe
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505ac3
    PUSH 0x1                            ; 00505ac6
    PUSH 0x58ffe6                       ; 00505ac8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00505acd
    MOV [0x01e57218],EAX                ; 00505ace | DAT_01e57218
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505ad3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505ad8
    PUSH 0x1                            ; 00505adb
    PUSH 0x58fff7                       ; 00505add | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00505ae2
    MOV [0x01e5722c],EAX                ; 00505ae3 | DAT_01e5722c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505ae8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505aed
    PUSH 0x1                            ; 00505af0
    PUSH 0x590008                       ; 00505af2 | = "Bip01 Spine"
    PUSH EBX                            ; 00505af7
    MOV [0x01e57230],EAX                ; 00505af8 | DAT_01e57230
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505afd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505b02
    PUSH 0x1                            ; 00505b05
    PUSH 0x590014                       ; 00505b07 | = "Bip01 Spine2"
    PUSH EBX                            ; 00505b0c
    MOV [0x01e5723c],EAX                ; 00505b0d | DAT_01e5723c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00505b12
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00505b17
    PUSH ESI                            ; 00505b1a
    MOV [0x01e57244],EAX                ; 00505b1b | DAT_01e57244
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00505b20
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0xbd28],0x0    ; 00505b25
    ADD ESP,0x4                         ; 00505b2f
    MOV dword ptr [EDI + 0xbd24],0x0    ; 00505b32
    POP EDI                             ; 00505b3c
    POP ESI                             ; 00505b3d
    POP EBX                             ; 00505b3e
    RET                                 ; 00505b3f

