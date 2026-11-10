; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005af380(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_005f99e0
;   TerminatedCString s_Bip01_L_Finger1_005f99ed
;   TerminatedCString s_Bip01_R_Finger1_005f99fd
;   TerminatedCString s_Bip01jaw2_005f9a0d
;   TerminatedCString s_Bip01_Head_005f9a17
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af380
        ;   Label: core_werewolf.cpp_CWerewolf_setup_FUN_005af380
    PUSH ESI                            ; 005af381
    SUB ESP,0x4                         ; 005af382
    MOV EBX,dword ptr [ESP + 0x10]      ; 005af385
    LEA ESI,[EBX + 0x158]               ; 005af389
    PUSH ESI                            ; 005af38f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 005af390
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005af395
    PUSH ESI                            ; 005af398
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005af399
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005af39e
    PUSH 0x1                            ; 005af3a1
    PUSH 0x5f99e0                       ; 005af3a3 | = "Bip01 Spine3"
    PUSH EAX                            ; 005af3a8
    MOV ESI,EAX                         ; 005af3a9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005af3ab
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005af3b0
    PUSH 0x1                            ; 005af3b3
    PUSH 0x5f99ed                       ; 005af3b5 | = "Bip01 L Finger1"
    PUSH ESI                            ; 005af3ba
    MOV dword ptr [EBX + 0xc26c],EAX    ; 005af3bb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005af3c1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005af3c6
    PUSH 0x1                            ; 005af3c9
    PUSH 0x5f99fd                       ; 005af3cb | = "Bip01 R Finger1"
    PUSH ESI                            ; 005af3d0
    MOV dword ptr [EBX + 0xc270],EAX    ; 005af3d1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005af3d7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005af3dc
    PUSH 0x1                            ; 005af3df
    PUSH 0x5f9a0d                       ; 005af3e1 | = "Bip01jaw2"
    PUSH ESI                            ; 005af3e6
    MOV dword ptr [EBX + 0xc274],EAX    ; 005af3e7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005af3ed
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005af3f2
    PUSH 0x1                            ; 005af3f5
    PUSH 0x5f9a17                       ; 005af3f7 | = "Bip01 Head"
    PUSH ESI                            ; 005af3fc
    MOV dword ptr [EBX + 0xc278],EAX    ; 005af3fd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005af403
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005af408
    PUSH EBX                            ; 005af40b
    MOV dword ptr [EBX + 0xc27c],EAX    ; 005af40c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005af412
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005af417
    PUSH 0x3f800000                     ; 005af41a
    MOV EAX,dword ptr [EBX + 0xc280]    ; 005af41f
    PUSH 0x0                            ; 005af425
    MOV dword ptr [EBX + 0xfc],EAX      ; 005af427
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005af42d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005af432
    MOV EDX,dword ptr [EBX + 0xc268]    ; 005af436
    MOV EAX,dword ptr [ESP + 0x8]       ; 005af43c
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 005af440
    ADD ESP,0x8                         ; 005af446
    TEST EDX,EDX                        ; 005af449
    JNZ 0x005af457                      ; 005af44b
        ;   XREF to: 005af457 (CONDITIONAL_JUMP)  ; LAB_005af457
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 005af44d
    PUSH 0x41f00000                     ; 005af457
        ;   Label: LAB_005af457
    PUSH 0x41200000                     ; 005af45c
    MOV dword ptr [EBX + 0xc284],0x0    ; 005af461
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005af46b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBX + 0xc28c],0x0    ; 005af470
    MOV dword ptr [ESP + 0x8],EAX       ; 005af47a
    MOV dword ptr [EBX + 0xc290],0x0    ; 005af47e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005af488
    MOV dword ptr [EBX + 0xc288],EAX    ; 005af48c
    ADD ESP,0x8                         ; 005af492
    ADD ESP,0x4                         ; 005af495
    POP ESI                             ; 005af498
    POP EBX                             ; 005af499
    RET                                 ; 005af49a

