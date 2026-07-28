; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_CWerewolf_setup_FUN_00555b40(CEnemy *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_00597cdf
;   TerminatedCString s_Bip01_L_Finger1_00597cec
;   TerminatedCString s_Bip01_R_Finger1_00597cfc
;   TerminatedCString s_Bip01jaw2_00597d0c
;   TerminatedCString s_Bip01_Head_00597d16
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555b40
        ;   Label: core_werewolf.cpp_CWerewolf_setup_FUN_00555b40
    PUSH ESI                            ; 00555b41
    SUB ESP,0x4                         ; 00555b42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00555b45
    LEA ESI,[EBX + 0x150]               ; 00555b49
    PUSH ESI                            ; 00555b4f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 00555b50
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00555b55
    PUSH ESI                            ; 00555b58
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00555b59
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00555b5e
    PUSH 0x1                            ; 00555b61
    PUSH 0x597cdf                       ; 00555b63 | = "Bip01 Spine3"
    PUSH EAX                            ; 00555b68
    MOV ESI,EAX                         ; 00555b69
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00555b6b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00555b70
    PUSH 0x1                            ; 00555b73
    PUSH 0x597cec                       ; 00555b75 | = "Bip01 L Finger1"
    PUSH ESI                            ; 00555b7a
    MOV dword ptr [EBX + 0xbd28],EAX    ; 00555b7b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00555b81
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00555b86
    PUSH 0x1                            ; 00555b89
    PUSH 0x597cfc                       ; 00555b8b | = "Bip01 R Finger1"
    PUSH ESI                            ; 00555b90
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 00555b91
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00555b97
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00555b9c
    PUSH 0x1                            ; 00555b9f
    PUSH 0x597d0c                       ; 00555ba1 | = "Bip01jaw2"
    PUSH ESI                            ; 00555ba6
    MOV dword ptr [EBX + 0xbd30],EAX    ; 00555ba7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00555bad
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00555bb2
    PUSH 0x1                            ; 00555bb5
    PUSH 0x597d16                       ; 00555bb7 | = "Bip01 Head"
    PUSH ESI                            ; 00555bbc
    MOV dword ptr [EBX + 0xbd34],EAX    ; 00555bbd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00555bc3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00555bc8
    PUSH EBX                            ; 00555bcb
    MOV dword ptr [EBX + 0xbd38],EAX    ; 00555bcc
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 00555bd2
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00555bd7
    PUSH 0x3f800000                     ; 00555bda
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 00555bdf
    PUSH 0x0                            ; 00555be5
    MOV dword ptr [EBX + 0xfc],EAX      ; 00555be7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555bed
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00555bf2
    MOV EDX,dword ptr [EBX + 0xbd24]    ; 00555bf6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00555bfc
    MOV dword ptr [EBX + 0xbd68],EAX    ; 00555c00
    ADD ESP,0x8                         ; 00555c06
    TEST EDX,EDX                        ; 00555c09
    JNZ 0x00555c17                      ; 00555c0b
        ;   XREF to: 00555c17 (CONDITIONAL_JUMP)  ; LAB_00555c17
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 00555c0d
    PUSH 0x41f00000                     ; 00555c17
        ;   Label: LAB_00555c17
    PUSH 0x41200000                     ; 00555c1c
    MOV dword ptr [EBX + 0xbd40],0x0    ; 00555c21
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555c2b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBX + 0xbd48],0x0    ; 00555c30
    MOV dword ptr [ESP + 0x8],EAX       ; 00555c3a
    MOV dword ptr [EBX + 0xbd4c],0x0    ; 00555c3e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00555c48
    MOV dword ptr [EBX + 0xbd44],EAX    ; 00555c4c
    ADD ESP,0x8                         ; 00555c52
    ADD ESP,0x4                         ; 00555c55
    POP ESI                             ; 00555c58
    POP EBX                             ; 00555c59
    RET                                 ; 00555c5a

