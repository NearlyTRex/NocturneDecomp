; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[31]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415693
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416ac1
;   core_biggs.cpp_CBiggs_FUN_00418700 at 00418958
;   core_boneguy.cpp_FUN_0041bf90 at 0041c322
;   core_bride.cpp_FUN_00423a30 at 00423bd3
;   core_colonel.cpp_FUN_00440430 at 00440484
;   core_cow.cpp_FUN_00444310 at 00444564
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f3ab
;   core_dracbrid.cpp_FUN_00484410 at 00484623
;   core_drone.cpp_FUN_0048ec70 at 0048ef3f
;   ... and 21 more
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Foot_006175f2
;   TerminatedCString s_Bip01_R_Foot_006175ff
;   TerminatedCString s_Bip01_L_Foot_0061760c
;   TerminatedCString s_Bip01_R_Foot_00617619
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ec40
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ec40
    PUSH ESI                            ; 0042ec41
    PUSH EDI                            ; 0042ec42
    SUB ESP,0x30                        ; 0042ec43
    MOV EBX,dword ptr [ESP + 0x40]      ; 0042ec46
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042ec4a
    LEA ESI,[EBX + 0x158]               ; 0042ec4e
    CMP EAX,0x7                         ; 0042ec54
    JNC 0x0042edb5                      ; 0042ec57 | LAB_0042edb5
        ;   XREF to: 0042edb5 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 0042ec5d
    JNZ 0x0042ec6b                      ; 0042ec60 | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2410],0x0    ; 0042ec62
    JNZ 0x0042ec72                      ; 0042ec69 | LAB_0042ec72
        ;   XREF to: 0042ec72 (CONDITIONAL_JUMP)
    ADD ESP,0x30                        ; 0042ec6b
        ;   Label: LAB_0042ec6b
    POP EDI                             ; 0042ec6e
    POP ESI                             ; 0042ec6f
    POP EBX                             ; 0042ec70
    RET                                 ; 0042ec71
    PUSH 0x0                            ; 0042ec72
        ;   Label: LAB_0042ec72
    PUSH 0x6175f2                       ; 0042ec74 | = "Bip01 L Foot" | s_Bip01_L_Foot_006175f2 = Bip01 L Foot
    PUSH ESI                            ; 0042ec79
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ec7a | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042ec7f
    PUSH EAX                            ; 0042ec82
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ec83 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ec88
    TEST EAX,EAX                        ; 0042ec8b
    JL 0x0042ec6b                       ; 0042ec8d | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x3f800000                     ; 0042ec8f
    PUSH EAX                            ; 0042ec94
    LEA EAX,[ESP + 0x8]                 ; 0042ec95
    PUSH EAX                            ; 0042ec99
    PUSH ESI                            ; 0042ec9a
    MOV EDI,dword ptr [EBX + 0x154]     ; 0042ec9b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0042eca1 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042eca6
    PUSH EAX                            ; 0042eca9
    PUSH EBX                            ; 0042ecaa
    CALL dword ptr [EDI + 0x1c]         ; 0042ecab
    ADD ESP,0xc                         ; 0042ecae
    ADD ESP,0x30                        ; 0042ecb1
    POP EDI                             ; 0042ecb4
    POP ESI                             ; 0042ecb5
    POP EBX                             ; 0042ecb6
    RET                                 ; 0042ecb7
    CMP dword ptr [EBX + 0x2410],0x0    ; 0042ecb8
        ;   Label: LAB_0042ecb8
    JZ 0x0042ec6b                       ; 0042ecbf | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042ecc1
    PUSH 0x6175ff                       ; 0042ecc3 | = "Bip01 R Foot" | s_Bip01_R_Foot_006175ff = Bip01 R Foot
    PUSH ESI                            ; 0042ecc8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ecc9 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042ecce
    PUSH EAX                            ; 0042ecd1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ecd2 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ecd7
    TEST EAX,EAX                        ; 0042ecda
    JL 0x0042ec6b                       ; 0042ecdc | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x3f800000                     ; 0042ecde
    PUSH EAX                            ; 0042ece3
    LEA EAX,[ESP + 0x2c]                ; 0042ece4
    PUSH EAX                            ; 0042ece8
    PUSH ESI                            ; 0042ece9
    MOV EDI,dword ptr [EBX + 0x154]     ; 0042ecea
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0042ecf0 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ecf5
    PUSH EAX                            ; 0042ecf8
    PUSH EBX                            ; 0042ecf9
    CALL dword ptr [EDI + 0x1c]         ; 0042ecfa
    ADD ESP,0xc                         ; 0042ecfd
    ADD ESP,0x30                        ; 0042ed00
    POP EDI                             ; 0042ed03
    POP ESI                             ; 0042ed04
    POP EBX                             ; 0042ed05
    RET                                 ; 0042ed06
    CMP dword ptr [EBX + 0x2410],0x0    ; 0042ed07
        ;   Label: LAB_0042ed07
    JZ 0x0042ec6b                       ; 0042ed0e | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042ed14
    PUSH 0x61760c                       ; 0042ed16 | = "Bip01 L Foot" | s_Bip01_L_Foot_0061760c = Bip01 L Foot
    PUSH ESI                            ; 0042ed1b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ed1c | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042ed21
    PUSH EAX                            ; 0042ed24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ed25 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ed2a
    TEST EAX,EAX                        ; 0042ed2d
    JL 0x0042ec6b                       ; 0042ed2f | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x3fd9999a                     ; 0042ed35
    PUSH EAX                            ; 0042ed3a
    LEA EAX,[ESP + 0x20]                ; 0042ed3b
    PUSH EAX                            ; 0042ed3f
    PUSH ESI                            ; 0042ed40
    MOV EDI,dword ptr [EBX + 0x154]     ; 0042ed41
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0042ed47 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ed4c
    PUSH EAX                            ; 0042ed4f
    PUSH EBX                            ; 0042ed50
    CALL dword ptr [EDI + 0x1c]         ; 0042ed51
    ADD ESP,0xc                         ; 0042ed54
    ADD ESP,0x30                        ; 0042ed57
    POP EDI                             ; 0042ed5a
    POP ESI                             ; 0042ed5b
    POP EBX                             ; 0042ed5c
    RET                                 ; 0042ed5d
    CMP dword ptr [EBX + 0x2410],0x0    ; 0042ed5e
        ;   Label: LAB_0042ed5e
    JZ 0x0042ec6b                       ; 0042ed65 | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042ed6b
    PUSH 0x617619                       ; 0042ed6d | = "Bip01 R Foot" | s_Bip01_R_Foot_00617619 = Bip01 R Foot
    PUSH ESI                            ; 0042ed72
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042ed73 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042ed78
    PUSH EAX                            ; 0042ed7b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042ed7c | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042ed81
    TEST EAX,EAX                        ; 0042ed84
    JL 0x0042ec6b                       ; 0042ed86 | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    PUSH 0x3fd9999a                     ; 0042ed8c
    PUSH EAX                            ; 0042ed91
    LEA EAX,[ESP + 0x14]                ; 0042ed92
    PUSH EAX                            ; 0042ed96
    PUSH ESI                            ; 0042ed97
    MOV EDI,dword ptr [EBX + 0x154]     ; 0042ed98
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0042ed9e | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042eda3
    PUSH EAX                            ; 0042eda6
    PUSH EBX                            ; 0042eda7
    CALL dword ptr [EDI + 0x1c]         ; 0042eda8
    ADD ESP,0xc                         ; 0042edab
    ADD ESP,0x30                        ; 0042edae
    POP EDI                             ; 0042edb1
    POP ESI                             ; 0042edb2
    POP EBX                             ; 0042edb3
    RET                                 ; 0042edb4
    JBE 0x0042ecb8                      ; 0042edb5 | LAB_0042ecb8
        ;   Label: LAB_0042edb5
        ;   XREF to: 0042ecb8 (CONDITIONAL_JUMP)
    CMP EAX,0x1f                        ; 0042edbb
    JC 0x0042ec6b                       ; 0042edbe | LAB_0042ec6b
        ;   XREF to: 0042ec6b (CONDITIONAL_JUMP)
    JBE 0x0042ed07                      ; 0042edc4 | LAB_0042ed07
        ;   XREF to: 0042ed07 (CONDITIONAL_JUMP)
    CMP EAX,0x25                        ; 0042edca
    JZ 0x0042ed5e                       ; 0042edcd | LAB_0042ed5e
        ;   XREF to: 0042ed5e (CONDITIONAL_JUMP)
    ADD ESP,0x30                        ; 0042edcf
    POP EDI                             ; 0042edd2
    POP ESI                             ; 0042edd3
    POP EBX                             ; 0042edd4
    RET                                 ; 0042edd5

