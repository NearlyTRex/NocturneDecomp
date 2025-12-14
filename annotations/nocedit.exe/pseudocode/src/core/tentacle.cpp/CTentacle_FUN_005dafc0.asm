; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_tentacle.cpp_CTentacle_FUN_005dafc0(CTentacle * this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_bipp02_00654dc0
;   TerminatedCString s_bipp05_00654dc7
;   TerminatedCString s_bipp06_00654dce
;   TerminatedCString s_bipp09_00654dd5
;   undefined4 DAT_03f6cd08
;   undefined4 DAT_03f6cd0c
;   undefined4 DAT_03f6cd10
;   undefined4 DAT_03f6cd14
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dafc0
        ;   Label: core_tentacle.cpp_CTentacle_FUN_005dafc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dafc1
    ADD EBX,0x158                       ; 005dafc5
    PUSH EBX                            ; 005dafcb
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005dafcc
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005dafd1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005dafd4
    PUSH EDX                            ; 005dafd8
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 005dafd9
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005dafde
    PUSH EBX                            ; 005dafe1
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005dafe2
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005dafe7
    PUSH 0x1                            ; 005dafea
    PUSH 0x654dc0                       ; 005dafec | = "bipp02"
    PUSH EAX                            ; 005daff1
    MOV EBX,EAX                         ; 005daff2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005daff4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005daff9
    PUSH 0x1                            ; 005daffc
    PUSH 0x654dc7                       ; 005daffe | = "bipp05"
    PUSH EBX                            ; 005db003
    MOV [0x03f6cd08],EAX                ; 005db004 | DAT_03f6cd08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005db009
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005db00e
    PUSH 0x1                            ; 005db011
    PUSH 0x654dce                       ; 005db013 | = "bipp06"
    PUSH EBX                            ; 005db018
    MOV [0x03f6cd0c],EAX                ; 005db019 | DAT_03f6cd0c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005db01e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005db023
    PUSH 0x1                            ; 005db026
    PUSH 0x654dd5                       ; 005db028 | = "bipp09"
    PUSH EBX                            ; 005db02d
    MOV [0x03f6cd10],EAX                ; 005db02e | DAT_03f6cd10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005db033
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005db038
    MOV [0x03f6cd14],EAX                ; 005db03b | DAT_03f6cd14
    POP EBX                             ; 005db040
    RET                                 ; 005db041

