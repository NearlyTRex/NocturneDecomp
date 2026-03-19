; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0(CDemonActor *this_ptr,float radius,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   radius
; CVector3f *      Stack[0xc]:4   out_normal
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006137c2
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CPlatformClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 g_CDemonSetInstance.collision_normal.y
;   undefined4 g_CDemonSetInstance.collision_normal.z
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_setcolid.cpp_CDemonSet_enableCollision_FUN_00574220
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408db0
        ;   Label: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
    PUSH ESI                            ; 00408db1
    PUSH EDI                            ; 00408db2
    PUSH EBP                            ; 00408db3
    SUB ESP,0x8                         ; 00408db4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408db7
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408dbb
    PUSH 0x2b6                          ; 00408dbf
    PUSH 0x6137c2                       ; 00408dc4 | = "..\\core\\actor.cpp"
    PUSH ESI                            ; 00408dc9
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408dca
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408dcf
    MOV EDX,dword ptr [0x006810c8]      ; 00408dd2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00408dd8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 ; 00408dd9
        ;   XREF to: 00573e10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408dde
    PUSH ESI                            ; 00408de1
    MOV ECX,dword ptr [0x006810c8]      ; 00408de2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00408de8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00408de9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00408dee
    MOV EDI,dword ptr [0x006810c8]      ; 00408df1 | g_CDemonSetPtr
    PUSH EDI                            ; 00408df7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_enableCollision_FUN_00574220 ; 00408df8
        ;   XREF to: 00574220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_enableCollision_FUN_00574220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408dfd
    LEA EAX,[ESI + 0x20]                ; 00408e00
    PUSH dword ptr [ESP + 0x20]         ; 00408e03
    PUSH EAX                            ; 00408e07
    MOV EBP,dword ptr [0x006810c8]      ; 00408e08 | g_CDemonSetPtr
    PUSH EBP                            ; 00408e0e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 00408e0f
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x10],EAX      ; 00408e14
    FLD float ptr [ESP + 0x10]          ; 00408e18
    ADD ESP,0xc                         ; 00408e1c
    MOV EAX,[0x030d508c]                ; 00408e1f | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 00408e24
    MOV EAX,[0x006810c8]                ; 00408e25 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408e2a | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00408e30
    FSTP float ptr [ESP + 0x8]          ; 00408e31
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00408e35
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00408e3a
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408e3d
    TEST EBX,EBX                        ; 00408e43
    JZ 0x00408e65                       ; 00408e45
        ;   XREF to: 00408e65 (CONDITIONAL_JUMP)  ; LAB_00408e65
    MOV EAX,[0x006810c8]                ; 00408e47 | g_CDemonSetPtr
    ADD EAX,0x14d128                    ; 00408e4c | g_CDemonSetInstance.collision_normal.x
    CMP EBX,EAX                         ; 00408e51
    JZ 0x00408e65                       ; 00408e53
        ;   XREF to: 00408e65 (CONDITIONAL_JUMP)  ; LAB_00408e65
    MOV EDX,dword ptr [EAX]             ; 00408e55 | g_CDemonSetInstance.collision_normal.x
    MOV dword ptr [EBX],EDX             ; 00408e57
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408e59 | g_CDemonSetInstance.collision_normal.y
    MOV dword ptr [EBX + 0x4],EDX       ; 00408e5c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408e5f | g_CDemonSetInstance.collision_normal.z
    MOV dword ptr [EBX + 0x8],EDX       ; 00408e62
    MOV ECX,dword ptr [0x006810c8]      ; 00408e65 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00408e65
    PUSH ECX                            ; 00408e6b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 00408e6c
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408e71
    MOV EAX,dword ptr [ESP]             ; 00408e74
    ADD ESP,0x8                         ; 00408e77
    POP EBP                             ; 00408e7a
    POP EDI                             ; 00408e7b
    POP ESI                             ; 00408e7c
    POP EBX                             ; 00408e7d
    RET                                 ; 00408e7e

