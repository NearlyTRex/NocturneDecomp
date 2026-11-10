; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_setup_FUN_0055dbf0(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005f14e5
;   TerminatedCString s_SHADOWBEAST_DFM_005f14f4
;   TerminatedCString s_WERE_HEADLESS_DFM_005f1504
;   TerminatedCString s_Bip01_Pelvis_005f1516
;   TerminatedCString s_Bip01_Spine2_005f1523
;   TerminatedCString s_Bip01_Head_005f1530
;   TerminatedCString s_Bip01_Spine2_005f153b
;   TerminatedCString s_Bip01_L_Finger1_005f1548
;   TerminatedCString s_Bip01_R_Finger1_005f1558
;   TerminatedCString s_Bip01_Head_005f1568
;   TerminatedCString s_Bip01_L_Foot_005f1573
;   TerminatedCString s_Bip01_R_Foot_005f1580
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dbf0
        ;   Label: core_shadow.cpp_CShadow_setup_FUN_0055dbf0
    PUSH ESI                            ; 0055dbf1
    PUSH EBP                            ; 0055dbf2
    MOV EBP,ESP                         ; 0055dbf3
    SUB ESP,0x4                         ; 0055dbf5
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055dbf8
    LEA EAX,[EBX + 0x158]               ; 0055dbfb
    PUSH EAX                            ; 0055dc01
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0055dc02
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0055dc07
    PUSH 0x5f14e5                       ; 0055dc0a | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 0055dc0f | DAT_0061b4d0
    PUSH EDX                            ; 0055dc15
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0055dc16
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055dc1b
    TEST EAX,EAX                        ; 0055dc1e
    JNZ 0x0055ddc8                      ; 0055dc20
        ;   XREF to: 0055ddc8 (CONDITIONAL_JUMP)  ; LAB_0055ddc8
    MOV dword ptr [EBX + 0xc310],0x3f400000 ; 0055dc26
    PUSH 0x5f14f4                       ; 0055dc30 | = "SHADOWBEAST.DFM"
        ;   Label: LAB_0055dc30
    LEA ESI,[EBX + 0x24a8]              ; 0055dc35
    MOV dword ptr [EBX + 0xc2d4],0x0    ; 0055dc3b
    PUSH ESI                            ; 0055dc45
    MOV dword ptr [EBX + 0xc2fc],0x0    ; 0055dc46
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0055dc50
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055dc55
    TEST EAX,EAX                        ; 0055dc58
    JNZ 0x0055ddd7                      ; 0055dc5a
        ;   XREF to: 0055ddd7 (CONDITIONAL_JUMP)  ; LAB_0055ddd7
    MOV dword ptr [EBX + 0xc2d4],0x1    ; 0055dc60
        ;   Label: LAB_0055dc60
    LEA EAX,[EBX + 0x158]               ; 0055dc6a
        ;   Label: LAB_0055dc6a
    PUSH EAX                            ; 0055dc70
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0055dc71
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0055dc76
    PUSH 0x1                            ; 0055dc79
    PUSH 0x5f1516                       ; 0055dc7b | = "Bip01 Pelvis"
    PUSH EAX                            ; 0055dc80
    MOV ESI,EAX                         ; 0055dc81
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dc83
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dc88
    PUSH 0x1                            ; 0055dc8b
    PUSH 0x5f1523                       ; 0055dc8d | = "Bip01 Spine2"
    PUSH ESI                            ; 0055dc92
    MOV dword ptr [EBX + 0xc284],EAX    ; 0055dc93
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dc99
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dc9e
    PUSH 0x1                            ; 0055dca1
    PUSH 0x5f1530                       ; 0055dca3 | = "Bip01 Head"
    PUSH ESI                            ; 0055dca8
    MOV dword ptr [EBX + 0xc288],EAX    ; 0055dca9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dcaf
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dcb4
    PUSH 0x1                            ; 0055dcb7
    PUSH 0x5f153b                       ; 0055dcb9 | = "Bip01 Spine2"
    PUSH ESI                            ; 0055dcbe
    MOV dword ptr [EBX + 0xc28c],EAX    ; 0055dcbf
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dcc5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dcca
    PUSH 0x1                            ; 0055dccd
    PUSH 0x5f1548                       ; 0055dccf | = "Bip01 L Finger1"
    PUSH ESI                            ; 0055dcd4
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0055dcd5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dcdb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dce0
    PUSH 0x1                            ; 0055dce3
    PUSH 0x5f1558                       ; 0055dce5 | = "Bip01 R Finger1"
    PUSH ESI                            ; 0055dcea
    MOV dword ptr [EBX + 0xc270],EAX    ; 0055dceb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dcf1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dcf6
    PUSH 0x1                            ; 0055dcf9
    PUSH 0x5f1568                       ; 0055dcfb | = "Bip01 Head"
    PUSH ESI                            ; 0055dd00
    MOV dword ptr [EBX + 0xc274],EAX    ; 0055dd01
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dd07
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dd0c
    PUSH 0x1                            ; 0055dd0f
    PUSH 0x5f1573                       ; 0055dd11 | = "Bip01 L Foot"
    PUSH ESI                            ; 0055dd16
    MOV dword ptr [EBX + 0xc278],EAX    ; 0055dd17
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dd1d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dd22
    PUSH 0x1                            ; 0055dd25
    PUSH 0x5f1580                       ; 0055dd27 | = "Bip01 R Foot"
    PUSH ESI                            ; 0055dd2c
    MOV dword ptr [EBX + 0xc280],EAX    ; 0055dd2d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0055dd33
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0055dd38
    PUSH EBX                            ; 0055dd3b
    MOV dword ptr [EBX + 0xc27c],EAX    ; 0055dd3c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0055dd42
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 0055dd47
    ADD ESP,0x4                         ; 0055dd51
    MOV ECX,dword ptr [EBX + 0xc268]    ; 0055dd54
    MOV dword ptr [EBX + 0xf8],0x0      ; 0055dd5a
    TEST ECX,ECX                        ; 0055dd64
    JNZ 0x0055dd72                      ; 0055dd66
        ;   XREF to: 0055dd72 (CONDITIONAL_JUMP)  ; LAB_0055dd72
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 0055dd68
    MOV dword ptr [EBX + 0xc29c],0x0    ; 0055dd72
        ;   Label: LAB_0055dd72
    MOV dword ptr [EBX + 0xc2a0],0x0    ; 0055dd7c
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 0055dd86
    PUSH 0x41f00000                     ; 0055dd90
    MOV dword ptr [EBX + 0xc2a8],0x0    ; 0055dd95
    PUSH 0x41200000                     ; 0055dd9f
    MOV dword ptr [EBX + 0xc2b4],0x0    ; 0055dda4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0055ddae
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 0055ddb3
    ADD ESP,0x8                         ; 0055ddb6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055ddb9
    MOV dword ptr [EBX + 0xc298],EAX    ; 0055ddbc
    MOV ESP,EBP                         ; 0055ddc2
    POP EBP                             ; 0055ddc4
    POP ESI                             ; 0055ddc5
    POP EBX                             ; 0055ddc6
    RET                                 ; 0055ddc7
    MOV dword ptr [EBX + 0xc310],0x3f800000 ; 0055ddc8
        ;   Label: LAB_0055ddc8
    JMP 0x0055dc30                      ; 0055ddd2
        ;   XREF to: 0055dc30 (UNCONDITIONAL_JUMP)  ; LAB_0055dc30
    PUSH 0x5f1504                       ; 0055ddd7 | = "WERE_HEADLESS.DFM"
        ;   Label: LAB_0055ddd7
    PUSH ESI                            ; 0055dddc
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0055dddd
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055dde2
    TEST EAX,EAX                        ; 0055dde5
    JZ 0x0055dc60                       ; 0055dde7
        ;   XREF to: 0055dc60 (CONDITIONAL_JUMP)  ; LAB_0055dc60
    JMP 0x0055dc6a                      ; 0055dded
        ;   XREF to: 0055dc6a (UNCONDITIONAL_JUMP)  ; LAB_0055dc6a

