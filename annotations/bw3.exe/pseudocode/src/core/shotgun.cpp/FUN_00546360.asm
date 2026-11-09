; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_FUN_00546360(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d143f
;   TerminatedCString s_Bip01_Head_005d144c
;   TerminatedCString s_Bip01_R_Finger0_005d1457
;   TerminatedCString s_Bip01_L_Finger0_005d1467
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_00548090
;   core_skeleton.cpp_FUN_0054e6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546360
        ;   Label: core_shotgun.cpp_FUN_00546360
    PUSH ESI                            ; 00546361
    MOV ESI,dword ptr [ESP + 0xc]       ; 00546362
    LEA EBX,[ESI + 0x158]               ; 00546366
    PUSH EBX                            ; 0054636c
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0054636d
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546372
    PUSH EBX                            ; 00546375
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00546376
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054637b
    PUSH 0x1                            ; 0054637e
    PUSH 0x5d143f                       ; 00546380 | = "Bip01 Spine1"
    PUSH EAX                            ; 00546385
    MOV EBX,EAX                         ; 00546386
    CALL core_skeleton.cpp_FUN_00548090 ; 00546388
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0054638d
    PUSH 0x1                            ; 00546390
    PUSH 0x5d144c                       ; 00546392 | = "Bip01 Head"
    PUSH EBX                            ; 00546397
    MOV dword ptr [ESI + 0xd054],EAX    ; 00546398
    CALL core_skeleton.cpp_FUN_00548090 ; 0054639e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005463a3
    PUSH 0x1                            ; 005463a6
    PUSH 0x5d1457                       ; 005463a8 | = "Bip01 R Finger0"
    PUSH EBX                            ; 005463ad
    MOV dword ptr [ESI + 0xd058],EAX    ; 005463ae
    CALL core_skeleton.cpp_FUN_00548090 ; 005463b4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005463b9
    PUSH 0x1                            ; 005463bc
    PUSH 0x5d1467                       ; 005463be | = "Bip01 L Finger0"
    PUSH EBX                            ; 005463c3
    MOV dword ptr [ESI + 0xd05c],EAX    ; 005463c4
    CALL core_skeleton.cpp_FUN_00548090 ; 005463ca
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005463cf
    PUSH ESI                            ; 005463d2
    MOV dword ptr [ESI + 0xd060],EAX    ; 005463d3
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 005463d9
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005463de
    POP ESI                             ; 005463e1
    POP EBX                             ; 005463e2
    RET                                 ; 005463e3

