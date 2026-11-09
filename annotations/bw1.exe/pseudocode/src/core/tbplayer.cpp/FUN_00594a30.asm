; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_00594a30(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005f768c
;   TerminatedCString s_Bip01_R_Hand_005f7699
;
; Called Functions:
;   core_npc.cpp_FUN_00531720
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594a30
        ;   Label: core_tbplayer.cpp_FUN_00594a30
    PUSH ESI                            ; 00594a31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00594a32
    PUSH EBX                            ; 00594a36
    CALL core_npc.cpp_FUN_00531720      ; 00594a37
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_00531720()
    ADD ESP,0x4                         ; 00594a3c
    LEA EAX,[EBX + 0x158]               ; 00594a3f
    PUSH EAX                            ; 00594a45
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00594a46
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00594a4b
    PUSH 0x1                            ; 00594a4e
    PUSH 0x5f768c                       ; 00594a50 | = "Bip01 L Hand"
    PUSH EAX                            ; 00594a55
    MOV ESI,EAX                         ; 00594a56
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00594a58
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00594a5d
    PUSH 0x1                            ; 00594a60
    PUSH 0x5f7699                       ; 00594a62 | = "Bip01 R Hand"
    PUSH ESI                            ; 00594a67
    MOV dword ptr [EBX + 0x1fab8],EAX   ; 00594a68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00594a6e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x25ac],0x0    ; 00594a73
    MOV dword ptr [EBX + 0x2624],0x0    ; 00594a7d
    MOV dword ptr [EBX + 0x1fabc],EAX   ; 00594a87
    MOV EAX,dword ptr [EBX + 0x1fab8]   ; 00594a8d
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00594a93
    MOV EAX,dword ptr [EBX + 0x1fabc]   ; 00594a99
    ADD ESP,0xc                         ; 00594a9f
    MOV dword ptr [EBX + 0x2620],EAX    ; 00594aa2
    POP ESI                             ; 00594aa8
    POP EBX                             ; 00594aa9
    RET                                 ; 00594aaa

