; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_yow_cpp_CYow_setup_FUN_005863e0(CYow *this_ptr)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d8210
;   TerminatedCString s_Bip01_Head_005d821d
;   TerminatedCString s_Bip01_Pelvis_005d8228
;   TerminatedCString s_Bip01_Spine_005d8235
;   TerminatedCString s_Bip01_Spine1_005d8241
;   TerminatedCString s_Bip01_Spine2_005d824e
;   TerminatedCString s_Bip01_Head_005d825b
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005863e0
        ;   Label: core_yow.cpp_CYow_setup_FUN_005863e0
    PUSH ESI                            ; 005863e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005863e2
    LEA EBX,[ESI + 0x158]               ; 005863e6
    PUSH EBX                            ; 005863ec
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 005863ed
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005863f2
    PUSH EBX                            ; 005863f5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 005863f6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005863fb
    PUSH 0x1                            ; 005863fe
    PUSH 0x5d8210                       ; 00586400 | = "Bip01 Spine1"
    PUSH EAX                            ; 00586405
    MOV EBX,EAX                         ; 00586406
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00586408
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058640d
    PUSH 0x1                            ; 00586410
    PUSH 0x5d821d                       ; 00586412 | = "Bip01 Head"
    PUSH EBX                            ; 00586417
    MOV dword ptr [ESI + 0xd054],EAX    ; 00586418
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058641e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00586423
    PUSH 0x1                            ; 00586426
    PUSH 0x5d8228                       ; 00586428 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0058642d
    MOV dword ptr [ESI + 0xd058],EAX    ; 0058642e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00586434
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00586439
    PUSH 0x1                            ; 0058643c
    PUSH 0x5d8235                       ; 0058643e | = "Bip01 Spine"
    PUSH EBX                            ; 00586443
    MOV dword ptr [ESI + 0xd05c],EAX    ; 00586444
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058644a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058644f
    PUSH 0x1                            ; 00586452
    PUSH 0x5d8241                       ; 00586454 | = "Bip01 Spine1"
    PUSH EBX                            ; 00586459
    MOV dword ptr [ESI + 0xd060],EAX    ; 0058645a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00586460
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00586465
    PUSH 0x1                            ; 00586468
    PUSH 0x5d824e                       ; 0058646a | = "Bip01 Spine2"
    PUSH EBX                            ; 0058646f
    MOV dword ptr [ESI + 0xd064],EAX    ; 00586470
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00586476
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058647b
    PUSH 0x1                            ; 0058647e
    PUSH 0x5d825b                       ; 00586480 | = "Bip01 Head"
    PUSH EBX                            ; 00586485
    MOV dword ptr [ESI + 0xd068],EAX    ; 00586486
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058648c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00586491
    PUSH ESI                            ; 00586494
    MOV dword ptr [ESI + 0xd06c],EAX    ; 00586495
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0058649b
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005864a0
    POP ESI                             ; 005864a3
    POP EBX                             ; 005864a4
    RET                                 ; 005864a5

