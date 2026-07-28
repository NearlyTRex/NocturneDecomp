; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_CDrummer_setup_FUN_005433d0(CNPC *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005964c6
;   TerminatedCString s_Bip01_R_Hand_005964d3
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_004ee9e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005433d0
        ;   Label: core_tbplayer.cpp_CDrummer_setup_FUN_005433d0
    PUSH ESI                            ; 005433d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005433d2
    PUSH EBX                            ; 005433d6
    CALL core_npc.cpp_CNPC_setup_FUN_004ee9e0 ; 005433d7
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_004ee9e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005433dc
    LEA EAX,[EBX + 0x150]               ; 005433df
    PUSH EAX                            ; 005433e5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 005433e6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005433eb
    PUSH 0x1                            ; 005433ee
    PUSH 0x5964c6                       ; 005433f0 | = "Bip01 L Hand"
    PUSH EAX                            ; 005433f5
    MOV ESI,EAX                         ; 005433f6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005433f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005433fd
    PUSH 0x1                            ; 00543400
    PUSH 0x5964d3                       ; 00543402 | = "Bip01 R Hand"
    PUSH ESI                            ; 00543407
    MOV dword ptr [EBX + 0x1f570],EAX   ; 00543408
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0054340e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x24a8],0x0    ; 00543413
    MOV dword ptr [EBX + 0x24ec],0x0    ; 0054341d
    MOV dword ptr [EBX + 0x1f574],EAX   ; 00543427
    MOV EAX,dword ptr [EBX + 0x1f570]   ; 0054342d
    MOV dword ptr [EBX + 0x24a4],EAX    ; 00543433
    MOV EAX,dword ptr [EBX + 0x1f574]   ; 00543439
    ADD ESP,0xc                         ; 0054343f
    MOV dword ptr [EBX + 0x24e8],EAX    ; 00543442
    POP ESI                             ; 00543448
    POP EBX                             ; 00543449
    RET                                 ; 0054344a

