; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_00620fa4
;   TerminatedCString s_Bip01_Head_00620fb1
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f0c0
        ;   Label: core_dog.cpp_CZombieDog_setup_FUN_0047f0c0
    PUSH ESI                            ; 0047f0c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047f0c2
    LEA EBX,[ESI + 0x158]               ; 0047f0c6
    PUSH EBX                            ; 0047f0cc
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0047f0cd
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047f0d2
    PUSH EBX                            ; 0047f0d5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0047f0d6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047f0db
    PUSH 0x1                            ; 0047f0de
    PUSH 0x620fa4                       ; 0047f0e0 | = "Bip01 Spine1"
    PUSH EAX                            ; 0047f0e5
    MOV EBX,EAX                         ; 0047f0e6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0047f0e8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047f0ed
    PUSH 0x1                            ; 0047f0f0
    PUSH 0x620fb1                       ; 0047f0f2 | = "Bip01 Head"
    PUSH EBX                            ; 0047f0f7
    MOV dword ptr [ESI + 0xbebc],EAX    ; 0047f0f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0047f0fe
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0047f103
    PUSH ESI                            ; 0047f106
    MOV dword ptr [ESI + 0xbec0],EAX    ; 0047f107
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 0047f10d
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0047f112
    POP ESI                             ; 0047f115
    POP EBX                             ; 0047f116
    RET                                 ; 0047f117

