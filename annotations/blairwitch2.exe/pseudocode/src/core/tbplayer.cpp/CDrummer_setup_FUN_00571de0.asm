; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CDrummer_setup_FUN_00571de0(CDrummer *this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005ec418
;   TerminatedCString s_Bip01_R_Hand_005ec425
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_00510510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571de0
        ;   Label: core_tbplayer.cpp_CDrummer_setup_FUN_00571de0
    PUSH ESI                            ; 00571de1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571de2
    PUSH EBX                            ; 00571de6
    CALL core_npc.cpp_CNPC_setup_FUN_00510510 ; 00571de7
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00510510(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00571dec
    LEA EAX,[EBX + 0x2b4]               ; 00571def
    PUSH EAX                            ; 00571df5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00571df6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00571dfb
    PUSH 0x1                            ; 00571dfe
    PUSH 0x5ec418                       ; 00571e00 | = "Bip01 L Hand"
    PUSH EAX                            ; 00571e05
    MOV ESI,EAX                         ; 00571e06
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00571e08
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00571e0d
    PUSH 0x1                            ; 00571e10
    PUSH 0x5ec425                       ; 00571e12 | = "Bip01 R Hand"
    PUSH ESI                            ; 00571e17
    MOV dword ptr [EBX + 0x24348],EAX   ; 00571e18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00571e1e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x261c],0x0    ; 00571e23
    MOV dword ptr [EBX + 0x2694],0x0    ; 00571e2d
    MOV dword ptr [EBX + 0x2434c],EAX   ; 00571e37
    MOV EAX,dword ptr [EBX + 0x24348]   ; 00571e3d
    MOV dword ptr [EBX + 0x2618],EAX    ; 00571e43
    MOV EAX,dword ptr [EBX + 0x2434c]   ; 00571e49
    ADD ESP,0xc                         ; 00571e4f
    MOV dword ptr [EBX + 0x2690],EAX    ; 00571e52
    POP ESI                             ; 00571e58
    POP EBX                             ; 00571e59
    RET                                 ; 00571e5a

