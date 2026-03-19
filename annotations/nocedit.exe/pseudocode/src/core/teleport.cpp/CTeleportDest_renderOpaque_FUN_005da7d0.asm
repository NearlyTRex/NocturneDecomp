; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_teleport_cpp_CTeleportDest_renderOpaque_FUN_005da7d0(CTeleportDest *this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CTeleport_00654c40
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CDemonMissionInstance.is_in_editor
;   undefined4 g_CDemonMissionInstance.selected_actor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005da7d0
        ;   Label: core_teleport.cpp_CTeleportDest_renderOpaque_FUN_005da7d0
    MOV EAX,[0x0067d550]                ; 005da7d1 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005da7d6 | g_CDemonMissionInstance.is_in_editor
    JNZ 0x005da7e0                      ; 005da7da
        ;   XREF to: 005da7e0 (CONDITIONAL_JUMP)  ; LAB_005da7e0
    XOR EAX,EAX                         ; 005da7dc
        ;   Label: LAB_005da7dc
    POP EBP                             ; 005da7de
    RET                                 ; 005da7df
    MOV ECX,dword ptr [0x006703ec]      ; 005da7e0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005da7e0
    PUSH ECX                            ; 005da7e6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005da7e7
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005da7ec
    TEST EAX,EAX                        ; 005da7ef
    JNZ 0x005da7dc                      ; 005da7f1
        ;   XREF to: 005da7dc (CONDITIONAL_JUMP)  ; LAB_005da7dc
    PUSH ESI                            ; 005da7f3
    PUSH EBX                            ; 005da7f4
    MOV EAX,[0x0067d550]                ; 005da7f5 | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV ESI,dword ptr [EAX + 0x28]      ; 005da7fa | g_CDemonMissionInstance.selected_actor
    MOV EBX,0x1                         ; 005da7fd
    TEST ESI,ESI                        ; 005da802
    JZ 0x005da831                       ; 005da804
        ;   XREF to: 005da831 (CONDITIONAL_JUMP)  ; LAB_005da831
    PUSH 0x654c40                       ; 005da806 | = "CTeleport"
    PUSH ESI                            ; 005da80b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005da80c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005da811
    TEST EAX,EAX                        ; 005da814
    JZ 0x005da831                       ; 005da816
        ;   XREF to: 005da831 (CONDITIONAL_JUMP)  ; LAB_005da831
    MOV EAX,[0x0067d550]                ; 005da818 | g_CDemonMissionPtr
    MOV EAX,dword ptr [EAX + 0x28]      ; 005da81d | g_CDemonMissionInstance.selected_actor
    MOV EBP,dword ptr [ESP + 0x10]      ; 005da820
    CMP EBP,dword ptr [EAX + 0x164]     ; 005da824
    JNZ 0x005da831                      ; 005da82a
        ;   XREF to: 005da831 (CONDITIONAL_JUMP)  ; LAB_005da831
    MOV EBX,0xf9                        ; 005da82c
    PUSH EBX                            ; 005da831
        ;   Label: LAB_005da831
    MOV EAX,dword ptr [ESP + 0x14]      ; 005da832
    PUSH EAX                            ; 005da836
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 005da837
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 005da83c
    XOR EAX,EAX                         ; 005da83f
    POP EBX                             ; 005da841
    POP ESI                             ; 005da842
    POP EBP                             ; 005da843
    RET                                 ; 005da844

