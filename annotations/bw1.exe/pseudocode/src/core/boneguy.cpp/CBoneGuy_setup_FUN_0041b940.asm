; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_0041b940(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_CBip01_Head_005d45b4+1
;   TerminatedCString s_Bip01_L_ForeArm_005d45c0
;   TerminatedCString s_Bip01_R_ForeArm_005d45d0
;   TerminatedCString s_Bip01_L_UpperArm_005d45e0
;   TerminatedCString s_Bip01_R_UpperArm_005d45f1
;   TerminatedCString s_Bip01_L_Foot_005d4602
;   TerminatedCString s_Bip01_R_Foot_005d460f
;   TerminatedCString s_Bip01_L_Hand_005d461c
;   TerminatedCString s_Bip01_R_Hand_005d4629
;   TerminatedCString s_Bip01_Spine_005d4636
;   TerminatedCString s_Bip01_Spine2_005d4642
;   TerminatedCString s_Bip01_Head_005d464f
;   TerminatedCString s_Bip01_L_UpperArm_005d465a
;   TerminatedCString s_Bip01_R_UpperArm_005d466b
;   TerminatedCString s_Bip01_Spine_005d467c
;   ... and 16 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b940
        ;   Label: core_boneguy.cpp_CBoneGuy_setup_FUN_0041b940
    PUSH ESI                            ; 0041b941
    PUSH EDI                            ; 0041b942
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041b943
    LEA EDI,[ESI + 0x158]               ; 0041b947
    PUSH EDI                            ; 0041b94d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0041b94e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b953
    PUSH EDI                            ; 0041b956
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0041b957
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b95c
    PUSH 0x1                            ; 0041b95f
    PUSH 0x5d45b5                       ; 0041b961 | s_CBip01_Head_005d45b4+1
    PUSH EAX                            ; 0041b966
    MOV EBX,EAX                         ; 0041b967
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b969
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b96e
    PUSH 0x1                            ; 0041b971
    PUSH 0x5d45c0                       ; 0041b973 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0041b978
    MOV [0x007c4ff0],EAX                ; 0041b979 | DAT_007c4ff0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b97e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b983
    PUSH 0x1                            ; 0041b986
    PUSH 0x5d45d0                       ; 0041b988 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0041b98d
    MOV [0x007c4ffc],EAX                ; 0041b98e | DAT_007c4ffc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b993
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b998
    PUSH 0x1                            ; 0041b99b
    PUSH 0x5d45e0                       ; 0041b99d | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041b9a2
    MOV [0x007c5000],EAX                ; 0041b9a3 | DAT_007c5000
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b9a8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b9ad
    PUSH 0x1                            ; 0041b9b0
    PUSH 0x5d45f1                       ; 0041b9b2 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0041b9b7
    MOV [0x007c5004],EAX                ; 0041b9b8 | DAT_007c5004
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b9bd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b9c2
    PUSH 0x1                            ; 0041b9c5
    PUSH 0x5d4602                       ; 0041b9c7 | = "Bip01 L Foot"
    PUSH EBX                            ; 0041b9cc
    MOV [0x007c5008],EAX                ; 0041b9cd | DAT_007c5008
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b9d2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b9d7
    PUSH 0x1                            ; 0041b9da
    PUSH 0x5d460f                       ; 0041b9dc | = "Bip01 R Foot"
    PUSH EBX                            ; 0041b9e1
    MOV [0x007c500c],EAX                ; 0041b9e2 | DAT_007c500c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b9e7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041b9ec
    PUSH 0x1                            ; 0041b9ef
    PUSH 0x5d461c                       ; 0041b9f1 | = "Bip01 L Hand"
    PUSH EBX                            ; 0041b9f6
    MOV [0x007c5010],EAX                ; 0041b9f7 | DAT_007c5010
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041b9fc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba01
    PUSH 0x1                            ; 0041ba04
    PUSH 0x5d4629                       ; 0041ba06 | = "Bip01 R Hand"
    PUSH EBX                            ; 0041ba0b
    MOV [0x007c4ff4],EAX                ; 0041ba0c | DAT_007c4ff4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba11
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba16
    MOV [0x007c4ff8],EAX                ; 0041ba19 | DAT_007c4ff8
    PUSH 0x1                            ; 0041ba1e
    PUSH 0x5d4636                       ; 0041ba20 | = "Bip01 Spine"
    PUSH EBX                            ; 0041ba25
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba26
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba2b
    PUSH 0x1                            ; 0041ba2e
    PUSH 0x5d4642                       ; 0041ba30 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041ba35
    MOV [0x007c5014],EAX                ; 0041ba36 | DAT_007c5014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba3b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba40
    PUSH 0x1                            ; 0041ba43
    PUSH 0x5d464f                       ; 0041ba45 | = "Bip01 Head"
    PUSH EBX                            ; 0041ba4a
    MOV [0x007c5018],EAX                ; 0041ba4b | DAT_007c5018
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba50
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba55
    PUSH 0x1                            ; 0041ba58
    PUSH 0x5d465a                       ; 0041ba5a | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041ba5f
    MOV [0x007c4ff0],EAX                ; 0041ba60 | DAT_007c4ff0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba65
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba6a
    PUSH 0x1                            ; 0041ba6d
    PUSH 0x5d466b                       ; 0041ba6f | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0041ba74
    MOV [0x007c5004],EAX                ; 0041ba75 | DAT_007c5004
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba7a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba7f
    PUSH 0x1                            ; 0041ba82
    PUSH 0x5d467c                       ; 0041ba84 | = "Bip01 Spine"
    PUSH EBX                            ; 0041ba89
    MOV [0x007c5008],EAX                ; 0041ba8a | DAT_007c5008
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041ba8f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041ba94
    PUSH 0x1                            ; 0041ba97
    PUSH 0x5d4688                       ; 0041ba99 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041ba9e
    MOV [0x007c5014],EAX                ; 0041ba9f | DAT_007c5014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041baa4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041baa9
    PUSH EDI                            ; 0041baac
    MOV [0x007c5018],EAX                ; 0041baad | DAT_007c5018
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0041bab2
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0041bab7
    ADD ESP,0x4                         ; 0041babd
    MOV dword ptr [ESI + 0xc2e4],EAX    ; 0041bac0
    CMP EAX,0x14                        ; 0041bac6
    JG 0x0041baf8                       ; 0041bac9
        ;   XREF to: 0041baf8 (CONDITIONAL_JUMP)  ; LAB_0041baf8
    MOV EAX,[0x007c4ff4]                ; 0041bacb | DAT_007c4ff4
        ;   Label: LAB_0041bacb
    MOV dword ptr [ESI + 0x25a8],EAX    ; 0041bad0
    MOV EAX,[0x007c4ff8]                ; 0041bad6 | DAT_007c4ff8
    PUSH ESI                            ; 0041badb
    MOV dword ptr [ESI + 0x2620],EAX    ; 0041badc
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0041bae2
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041bae7
    MOV dword ptr [ESI + 0xc278],0x0    ; 0041baea
    POP EDI                             ; 0041baf4
    POP ESI                             ; 0041baf5
    POP EBX                             ; 0041baf6
    RET                                 ; 0041baf7
    MOV ECX,0x5d4695                    ; 0041baf8 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041baf8
    MOV EBX,0x130                       ; 0041bafd
    PUSH 0x5d46a9                       ; 0041bb02 | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d1d400],ECX      ; 0041bb07 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0041bb0d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041bb13
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041bb18
    JMP 0x0041bacb                      ; 0041bb1b
        ;   XREF to: 0041bacb (UNCONDITIONAL_JUMP)  ; LAB_0041bacb

