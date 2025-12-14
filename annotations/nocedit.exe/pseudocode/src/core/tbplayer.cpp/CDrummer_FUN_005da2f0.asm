; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_tbplayer.cpp_CDrummer_FUN_005da2f0(CDrummer * this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_00654bf9
;   TerminatedCString s_Bip01_R_Hand_00654c06
;
; Called Functions:
;   core_npc.cpp_CNPC_FUN_00544870
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da2f0
        ;   Label: core_tbplayer.cpp_CDrummer_FUN_005da2f0
    PUSH ESI                            ; 005da2f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005da2f2
    PUSH EBX                            ; 005da2f6
    CALL core_npc.cpp_CNPC_FUN_00544870 ; 005da2f7
        ;   XREF to: 00544870 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544870(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005da2fc
    LEA EAX,[EBX + 0x158]               ; 005da2ff
    PUSH EAX                            ; 005da305
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005da306
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005da30b
    PUSH 0x1                            ; 005da30e
    PUSH 0x654bf9                       ; 005da310 | = "Bip01 L Hand"
    PUSH EAX                            ; 005da315
    MOV ESI,EAX                         ; 005da316
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005da318
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005da31d
    PUSH 0x1                            ; 005da320
    PUSH 0x654c06                       ; 005da322 | = "Bip01 R Hand"
    PUSH ESI                            ; 005da327
    MOV dword ptr [EBX + 0x1f708],EAX   ; 005da328
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005da32e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    MOV dword ptr [EBX + 0x24b0],0x0    ; 005da333
    MOV dword ptr [EBX + 0x24f4],0x0    ; 005da33d
    MOV dword ptr [EBX + 0x1f70c],EAX   ; 005da347
    MOV EAX,dword ptr [EBX + 0x1f708]   ; 005da34d
    MOV dword ptr [EBX + 0x24ac],EAX    ; 005da353
    MOV EAX,dword ptr [EBX + 0x1f70c]   ; 005da359
    ADD ESP,0xc                         ; 005da35f
    MOV dword ptr [EBX + 0x24f0],EAX    ; 005da362
    POP ESI                             ; 005da368
    POP EBX                             ; 005da369
    RET                                 ; 005da36a

