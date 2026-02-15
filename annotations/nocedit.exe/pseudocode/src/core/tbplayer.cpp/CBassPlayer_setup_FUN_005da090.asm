; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_005da090(CBassPlayer *this_ptr)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_00654bbe
;   TerminatedCString s_Bip01_R_Hand_00654bcb
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_00544870
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da090
        ;   Label: core_tbplayer.cpp_CBassPlayer_setup_FUN_005da090
    PUSH ESI                            ; 005da091
    MOV EBX,dword ptr [ESP + 0xc]       ; 005da092
    PUSH EBX                            ; 005da096
    CALL core_npc.cpp_CNPC_setup_FUN_00544870 ; 005da097
        ;   XREF to: 00544870 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00544870(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005da09c
    LEA EAX,[EBX + 0x158]               ; 005da09f
    PUSH EAX                            ; 005da0a5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005da0a6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005da0ab
    PUSH 0x1                            ; 005da0ae
    PUSH 0x654bbe                       ; 005da0b0 | = "Bip01 L Hand"
    PUSH EAX                            ; 005da0b5
    MOV ESI,EAX                         ; 005da0b6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005da0b8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005da0bd
    PUSH 0x1                            ; 005da0c0
    PUSH 0x654bcb                       ; 005da0c2 | = "Bip01 R Hand"
    PUSH ESI                            ; 005da0c7
    MOV dword ptr [EBX + 0x1f708],EAX   ; 005da0c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005da0ce
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    MOV dword ptr [EBX + 0x24b0],0x0    ; 005da0d3
    MOV dword ptr [EBX + 0x1f70c],EAX   ; 005da0dd
    MOV EAX,dword ptr [EBX + 0x1f708]   ; 005da0e3
    ADD ESP,0xc                         ; 005da0e9
    MOV dword ptr [EBX + 0x24ac],EAX    ; 005da0ec
    POP ESI                             ; 005da0f2
    POP EBX                             ; 005da0f3
    RET                                 ; 005da0f4

