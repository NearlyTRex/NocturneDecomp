; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970()
;
;
; Referenced Globals:
;   TerminatedCString s_hickboy_dfm_0062ee40
;   TerminatedCString s_depute_dfm_0062ee4c
;   TerminatedCString s_hickho_dfm_0062ee57
;   TerminatedCString s_hickgirl_dfm_0062ee62
;   TerminatedCString s_hickdad_dfm_0062ee6f
;   TerminatedCString s_preacher_dfm_0062ee7b
;   TerminatedCString s_Bip01_R_UpperArm_0062ee88
;   TerminatedCString s_Bip01_Head_0062ee99
;   TerminatedCString s_Bip01_L_Foot_0062eea4
;   TerminatedCString s_Bip01_R_Foot_0062eeb1
;   TerminatedCString s_Bip01_R_Hand_0062eebe
;   TerminatedCString s_Bip01_L_Hand_0062eecb
;   TerminatedCString s_Bip01_Spine1_0062eed8
;   TerminatedCString s_gunup_0062eee5
;   undefined4 DAT_02db8888
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_npc.cpp_CNPC_FUN_00544870
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4970
        ;   Label: core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970
    PUSH ESI                            ; 004f4971
    PUSH EDI                            ; 004f4972
    PUSH EBP                            ; 004f4973
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f4974
    LEA EAX,[EBX + 0x158]               ; 004f4978
    PUSH EAX                            ; 004f497e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004f497f
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f4984
    PUSH 0x62ee40                       ; 004f4987 | = "hickboy.dfm"
    LEA EAX,[EBX + 0x23b8]              ; 004f498c
    PUSH EAX                            ; 004f4992
    MOV dword ptr [EBX + 0x1fab8],0x6   ; 004f4993
    MOV ESI,EAX                         ; 004f499d
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f499f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f49a4
    TEST EAX,EAX                        ; 004f49a7
    JNZ 0x004f49b1                      ; 004f49a9
        ;   XREF to: 004f49b1 (CONDITIONAL_JUMP)  ; LAB_004f49b1
    MOV dword ptr [EBX + 0x1fab8],EAX   ; 004f49ab
    PUSH 0x62ee4c                       ; 004f49b1 | = "depute.dfm"
        ;   Label: LAB_004f49b1
    PUSH ESI                            ; 004f49b6
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f49b7
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f49bc
    TEST EAX,EAX                        ; 004f49bf
    JNZ 0x004f49cd                      ; 004f49c1
        ;   XREF to: 004f49cd (CONDITIONAL_JUMP)  ; LAB_004f49cd
    MOV dword ptr [EBX + 0x1fab8],0x1   ; 004f49c3
    PUSH 0x62ee57                       ; 004f49cd | = "hickho.dfm"
        ;   Label: LAB_004f49cd
    PUSH ESI                            ; 004f49d2
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f49d3
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f49d8
    TEST EAX,EAX                        ; 004f49db
    JNZ 0x004f49e9                      ; 004f49dd
        ;   XREF to: 004f49e9 (CONDITIONAL_JUMP)  ; LAB_004f49e9
    MOV dword ptr [EBX + 0x1fab8],0x2   ; 004f49df
    PUSH 0x62ee62                       ; 004f49e9 | = "hickgirl.dfm"
        ;   Label: LAB_004f49e9
    PUSH ESI                            ; 004f49ee
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f49ef
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f49f4
    TEST EAX,EAX                        ; 004f49f7
    JNZ 0x004f4a05                      ; 004f49f9
        ;   XREF to: 004f4a05 (CONDITIONAL_JUMP)  ; LAB_004f4a05
    MOV dword ptr [EBX + 0x1fab8],0x4   ; 004f49fb
    PUSH 0x62ee6f                       ; 004f4a05 | = "hickdad.dfm"
        ;   Label: LAB_004f4a05
    PUSH ESI                            ; 004f4a0a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f4a0b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f4a10
    TEST EAX,EAX                        ; 004f4a13
    JNZ 0x004f4a21                      ; 004f4a15
        ;   XREF to: 004f4a21 (CONDITIONAL_JUMP)  ; LAB_004f4a21
    MOV dword ptr [EBX + 0x1fab8],0x5   ; 004f4a17
    PUSH 0x62ee7b                       ; 004f4a21 | = "preacher.dfm"
        ;   Label: LAB_004f4a21
    PUSH ESI                            ; 004f4a26
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f4a27
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f4a2c
    TEST EAX,EAX                        ; 004f4a2f
    JNZ 0x004f4a3d                      ; 004f4a31
        ;   XREF to: 004f4a3d (CONDITIONAL_JUMP)  ; LAB_004f4a3d
    MOV dword ptr [EBX + 0x1fab8],0x3   ; 004f4a33
    LEA EDI,[EBX + 0x158]               ; 004f4a3d
        ;   Label: LAB_004f4a3d
    PUSH EDI                            ; 004f4a43
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f4a44
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f4a49
    PUSH EDI                            ; 004f4a4c
    MOV ESI,EAX                         ; 004f4a4d
    MOV EBP,EAX                         ; 004f4a4f
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f4a51
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f4a56
    PUSH 0x1                            ; 004f4a59
    PUSH 0x62ee88                       ; 004f4a5b | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f4a60
    MOV EDI,EAX                         ; 004f4a61
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4a63
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4a68
    PUSH 0x1                            ; 004f4a6b
    PUSH 0x62ee99                       ; 004f4a6d | = "Bip01 Head"
    PUSH ESI                            ; 004f4a72
    MOV dword ptr [EBX + 0x1fad0],EAX   ; 004f4a73
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4a79
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4a7e
    PUSH 0x1                            ; 004f4a81
    PUSH 0x62eea4                       ; 004f4a83 | = "Bip01 L Foot"
    PUSH ESI                            ; 004f4a88
    MOV dword ptr [EBX + 0x1facc],EAX   ; 004f4a89
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4a8f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4a94
    PUSH 0x1                            ; 004f4a97
    PUSH 0x62eeb1                       ; 004f4a99 | = "Bip01 R Foot"
    PUSH ESI                            ; 004f4a9e
    MOV dword ptr [EBX + 0x1fad4],EAX   ; 004f4a9f
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4aa5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4aaa
    PUSH 0x1                            ; 004f4aad
    PUSH 0x62eebe                       ; 004f4aaf | = "Bip01 R Hand"
    PUSH ESI                            ; 004f4ab4
    MOV dword ptr [EBX + 0x1fad8],EAX   ; 004f4ab5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4abb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4ac0
    MOV EDX,dword ptr [EBX + 0x1fab8]   ; 004f4ac3
    MOV dword ptr [EBX + 0x24f0],EAX    ; 004f4ac9
    CMP EDX,0x1                         ; 004f4acf
    JZ 0x004f4aea                       ; 004f4ad2
        ;   XREF to: 004f4aea (CONDITIONAL_JUMP)  ; LAB_004f4aea
    PUSH 0x1                            ; 004f4ad4
    PUSH 0x62eecb                       ; 004f4ad6 | = "Bip01 L Hand"
    PUSH ESI                            ; 004f4adb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4adc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4ae1
    MOV dword ptr [EBX + 0x24ac],EAX    ; 004f4ae4
    PUSH 0x1                            ; 004f4aea
        ;   Label: LAB_004f4aea
    PUSH 0x62eed8                       ; 004f4aec | = "Bip01 Spine1"
    PUSH EBP                            ; 004f4af1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f4af2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f4af7
    MOV ECX,dword ptr [EBX + 0x1fab8]   ; 004f4afa
    MOV dword ptr [EBX + 0x25c4],EAX    ; 004f4b00
    CMP ECX,0x1                         ; 004f4b06
    JZ 0x004f4b23                       ; 004f4b09
        ;   XREF to: 004f4b23 (CONDITIONAL_JUMP)  ; LAB_004f4b23
    PUSH EBX                            ; 004f4b0b
        ;   Label: LAB_004f4b0b
    CALL core_npc.cpp_CNPC_FUN_00544870 ; 004f4b0c
        ;   XREF to: 00544870 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544870(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f4b11
    MOV dword ptr [EBX + 0x1fab0],0x0   ; 004f4b14
    POP EBP                             ; 004f4b1e
    POP EDI                             ; 004f4b1f
    POP ESI                             ; 004f4b20
    POP EBX                             ; 004f4b21
    RET                                 ; 004f4b22
    PUSH ECX                            ; 004f4b23
        ;   Label: LAB_004f4b23
    PUSH 0x62eee5                       ; 004f4b24 | = "gunup"
    PUSH EDI                            ; 004f4b29
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004f4b2a
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 004f4b2f
    MOV [0x02db8888],EAX                ; 004f4b32 | DAT_02db8888
    JMP 0x004f4b0b                      ; 004f4b37
        ;   XREF to: 004f4b0b (UNCONDITIONAL_JUMP)  ; LAB_004f4b0b

