; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_00657c5f
;   TerminatedCString s_Bip01_L_Finger1_00657c6c
;   TerminatedCString s_Bip01_R_Finger1_00657c7c
;   TerminatedCString s_Bip01jaw2_00657c8c
;   TerminatedCString s_Bip01_Head_00657c96
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005efcc0
        ;   Label: core_werewolf.cpp_CWerewolf_setup_FUN_005efcc0
    PUSH ESI                            ; 005efcc1
    SUB ESP,0x4                         ; 005efcc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005efcc5
    LEA ESI,[EBX + 0x158]               ; 005efcc9
    PUSH ESI                            ; 005efccf
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005efcd0
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005efcd5
    PUSH ESI                            ; 005efcd8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005efcd9
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005efcde
    PUSH 0x1                            ; 005efce1
    PUSH 0x657c5f                       ; 005efce3 | = "Bip01 Spine3"
    PUSH EAX                            ; 005efce8
    MOV ESI,EAX                         ; 005efce9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005efceb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005efcf0
    PUSH 0x1                            ; 005efcf3
    PUSH 0x657c6c                       ; 005efcf5 | = "Bip01 L Finger1"
    PUSH ESI                            ; 005efcfa
    MOV dword ptr [EBX + 0xbec0],EAX    ; 005efcfb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005efd01
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005efd06
    PUSH 0x1                            ; 005efd09
    PUSH 0x657c7c                       ; 005efd0b | = "Bip01 R Finger1"
    PUSH ESI                            ; 005efd10
    MOV dword ptr [EBX + 0xbec4],EAX    ; 005efd11
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005efd17
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005efd1c
    PUSH 0x1                            ; 005efd1f
    PUSH 0x657c8c                       ; 005efd21 | = "Bip01jaw2"
    PUSH ESI                            ; 005efd26
    MOV dword ptr [EBX + 0xbec8],EAX    ; 005efd27
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005efd2d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005efd32
    PUSH 0x1                            ; 005efd35
    PUSH 0x657c96                       ; 005efd37 | = "Bip01 Head"
    PUSH ESI                            ; 005efd3c
    MOV dword ptr [EBX + 0xbecc],EAX    ; 005efd3d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005efd43
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005efd48
    PUSH EBX                            ; 005efd4b
    MOV dword ptr [EBX + 0xbed0],EAX    ; 005efd4c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 005efd52
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005efd57
    PUSH 0x3f800000                     ; 005efd5a
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 005efd5f
    PUSH 0x0                            ; 005efd65
    MOV dword ptr [EBX + 0xfc],EAX      ; 005efd67
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005efd6d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)

