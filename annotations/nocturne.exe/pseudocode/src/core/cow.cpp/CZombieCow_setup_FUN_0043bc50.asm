; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_CZombieCow_setup_FUN_0043bc50(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_0057b2dd
;   TerminatedCString s_Bip01_Head_0057b2ea
;   TerminatedCString s_head01_0057b2f5
;   TerminatedCString s_neck01_0057b2fc
;   TerminatedCString s_lfrontleg01_0057b303
;   TerminatedCString s_rfrontleg01_0057b30f
;   TerminatedCString s_rbackleg01_0057b31b
;   TerminatedCString s_lbackleg01_0057b326
;   TerminatedCString s_torso01_0057b331
;   TerminatedCString s_utter01_0057b339
;   TerminatedCString s_back01_0057b341
;   TerminatedCString s_tail01_0057b348
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bc50
        ;   Label: core_cow.cpp_CZombieCow_setup_FUN_0043bc50
    PUSH ESI                            ; 0043bc51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043bc52
    PUSH EDI                            ; 0043bc56
    LEA ESI,[EBX + 0x150]               ; 0043bc57
    PUSH ESI                            ; 0043bc5d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 0043bc5e
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043bc63
    PUSH ESI                            ; 0043bc66
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0043bc67
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043bc6c
    PUSH 0x1                            ; 0043bc6f
    PUSH 0x57b2dd                       ; 0043bc71 | = "Bip01 Spine2"
    PUSH EAX                            ; 0043bc76
    MOV EDI,EAX                         ; 0043bc77
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0043bc79
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043bc7e
    PUSH 0x1                            ; 0043bc81
    PUSH 0x57b2ea                       ; 0043bc83 | = "Bip01 Head"
    PUSH EDI                            ; 0043bc88
    MOV dword ptr [EBX + 0xbd24],EAX    ; 0043bc89
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0043bc8f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043bc94
    PUSH EBX                            ; 0043bc97
    MOV dword ptr [EBX + 0xbd28],EAX    ; 0043bc98
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 0043bc9e
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0043bca3
    PUSH ESI                            ; 0043bca6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0043bca7
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043bcac
    PUSH 0x1                            ; 0043bcaf
    PUSH 0x57b2f5                       ; 0043bcb1 | = "head01"
    PUSH EAX                            ; 0043bcb6
    MOV ESI,EAX                         ; 0043bcb7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bcb9
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bcbe
    PUSH 0x1                            ; 0043bcc1
    PUSH 0x57b2fc                       ; 0043bcc3 | = "neck01"
    PUSH ESI                            ; 0043bcc8
    MOV dword ptr [EBX + 0xbd30],EAX    ; 0043bcc9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bccf
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bcd4
    PUSH 0x1                            ; 0043bcd7
    PUSH 0x57b303                       ; 0043bcd9 | = "lfrontleg01"
    PUSH ESI                            ; 0043bcde
    MOV dword ptr [EBX + 0xbd34],EAX    ; 0043bcdf
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bce5
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bcea
    PUSH 0x1                            ; 0043bced
    PUSH 0x57b30f                       ; 0043bcef | = "rfrontleg01"
    PUSH ESI                            ; 0043bcf4
    MOV dword ptr [EBX + 0xbd38],EAX    ; 0043bcf5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bcfb
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd00
    PUSH 0x1                            ; 0043bd03
    PUSH 0x57b31b                       ; 0043bd05 | = "rbackleg01"
    PUSH ESI                            ; 0043bd0a
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 0043bd0b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd11
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd16
    MOV dword ptr [EBX + 0xbd40],EAX    ; 0043bd19
    POP EDI                             ; 0043bd1f
    PUSH 0x1                            ; 0043bd20
    PUSH 0x57b326                       ; 0043bd22 | = "lbackleg01"
    PUSH ESI                            ; 0043bd27
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd28
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd2d
    PUSH 0x1                            ; 0043bd30
    PUSH 0x57b331                       ; 0043bd32 | = "torso01"
    PUSH ESI                            ; 0043bd37
    MOV dword ptr [EBX + 0xbd44],EAX    ; 0043bd38
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd3e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd43
    PUSH 0x1                            ; 0043bd46
    PUSH 0x57b339                       ; 0043bd48 | = "utter01"
    PUSH ESI                            ; 0043bd4d
    MOV dword ptr [EBX + 0xbd48],EAX    ; 0043bd4e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd54
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd59
    PUSH 0x1                            ; 0043bd5c
    PUSH 0x57b341                       ; 0043bd5e | = "back01"
    PUSH ESI                            ; 0043bd63
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 0043bd64
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd6a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd6f
    PUSH 0x1                            ; 0043bd72
    PUSH 0x57b348                       ; 0043bd74 | = "tail01"
    PUSH ESI                            ; 0043bd79
    MOV dword ptr [EBX + 0xbd50],EAX    ; 0043bd7a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0043bd80
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0043bd85
    MOV dword ptr [EBX + 0xbd54],EAX    ; 0043bd88
    POP ESI                             ; 0043bd8e
    POP EBX                             ; 0043bd8f
    RET                                 ; 0043bd90

