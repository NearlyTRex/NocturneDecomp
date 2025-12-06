; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_teleport.cpp_CTeleport_FUN_005dae10(CTeleport * this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067d550]                ; 005dae10 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
        ;   Label: core_teleport.cpp_CTeleport_FUN_005dae10
    CMP dword ptr [EAX + 0x4],0x0       ; 005dae15 | DAT_02f33744
    JNZ 0x005dae1e                      ; 005dae19 | LAB_005dae1e
        ;   XREF to: 005dae1e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005dae1b
        ;   Label: LAB_005dae1b
    RET                                 ; 005dae1d
    MOV ECX,dword ptr [0x006703ec]      ; 005dae1e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_005dae1e
    PUSH ECX                            ; 005dae24 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005dae25 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dae2a
    TEST EAX,EAX                        ; 005dae2d
    JNZ 0x005dae1b                      ; 005dae2f | LAB_005dae1b
        ;   XREF to: 005dae1b (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005dae31
    PUSH 0xfb                           ; 005dae32
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dae37
    PUSH EBX                            ; 005dae3b
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 005dae3c | void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dae41
    XOR EAX,EAX                         ; 005dae44
    POP EBX                             ; 005dae46
    RET                                 ; 005dae47

