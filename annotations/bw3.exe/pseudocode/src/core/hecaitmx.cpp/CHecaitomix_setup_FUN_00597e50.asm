; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hecaitmx_cpp_CHecaitomix_setup_FUN_00597e50(CHecaitomix *this_ptr)
;
; Parameters:
; CHecaitomix *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d970b
;   TerminatedCString s_Bip01_Head_005d9718
;   TerminatedCString s_Bip01_R_Finger0_005d9723
;   TerminatedCString s_Bip01_L_Finger0_005d9733
;   TerminatedCString s_Dummy05_005d9743
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597e50
        ;   Label: core_hecaitmx.cpp_CHecaitomix_setup_FUN_00597e50
    PUSH ESI                            ; 00597e51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597e52
    LEA ESI,[EBX + 0x158]               ; 00597e56
    PUSH ESI                            ; 00597e5c
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00597e5d
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00597e62
    PUSH ESI                            ; 00597e65
    MOV dword ptr [EBX + 0xd068],0x3f800000 ; 00597e66
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00597e70
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00597e75
    PUSH 0x1                            ; 00597e78
    PUSH 0x5d970b                       ; 00597e7a | = "Bip01 Spine1"
    PUSH EAX                            ; 00597e7f
    MOV ESI,EAX                         ; 00597e80
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00597e82
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00597e87
    PUSH 0x1                            ; 00597e8a
    PUSH 0x5d9718                       ; 00597e8c | = "Bip01 Head"
    PUSH ESI                            ; 00597e91
    MOV dword ptr [EBX + 0xd054],EAX    ; 00597e92
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00597e98
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00597e9d
    PUSH 0x1                            ; 00597ea0
    PUSH 0x5d9723                       ; 00597ea2 | = "Bip01 R Finger0"
    PUSH ESI                            ; 00597ea7
    MOV dword ptr [EBX + 0xd058],EAX    ; 00597ea8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00597eae
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00597eb3
    PUSH 0x1                            ; 00597eb6
    PUSH 0x5d9733                       ; 00597eb8 | = "Bip01 L Finger0"
    PUSH ESI                            ; 00597ebd
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00597ebe
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00597ec4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00597ec9
    PUSH 0x1                            ; 00597ecc
    PUSH 0x5d9743                       ; 00597ece | = "Dummy05"
    PUSH ESI                            ; 00597ed3
    MOV dword ptr [EBX + 0xd060],EAX    ; 00597ed4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00597eda
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0xd070],0x0    ; 00597edf
    MOV dword ptr [EBX + 0xd074],0x10000 ; 00597ee9
    MOV dword ptr [EBX + 0xfc],0x1      ; 00597ef3
    ADD ESP,0xc                         ; 00597efd
    MOV dword ptr [EBX + 0xf8],0x0      ; 00597f00
    PUSH EBX                            ; 00597f0a
    MOV dword ptr [EBX + 0xd064],EAX    ; 00597f0b
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00597f11
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00597f16
    POP ESI                             ; 00597f19
    POP EBX                             ; 00597f1a
    RET                                 ; 00597f1b

