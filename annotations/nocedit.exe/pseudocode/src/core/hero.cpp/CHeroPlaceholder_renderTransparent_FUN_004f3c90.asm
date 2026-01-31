; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_FUN_0040dec0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c90
        ;   Label: core_hero.cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90
    SUB ESP,0x18                        ; 004f3c91
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f3c94
    MOV EAX,[0x0067d550]                ; 004f3c98 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004f3c9d | DAT_02f33744
    JNZ 0x004f3caa                      ; 004f3ca1
        ;   XREF to: 004f3caa (CONDITIONAL_JUMP)  ; LAB_004f3caa
    XOR EAX,EAX                         ; 004f3ca3
        ;   Label: LAB_004f3ca3
    ADD ESP,0x18                        ; 004f3ca5
    POP EBX                             ; 004f3ca8
    RET                                 ; 004f3ca9
    MOV ECX,dword ptr [0x006703ec]      ; 004f3caa | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_004f3caa
    PUSH ECX                            ; 004f3cb0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004f3cb1
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004f3cb6
    TEST EAX,EAX                        ; 004f3cb9
    JNZ 0x004f3ca3                      ; 004f3cbb
        ;   XREF to: 004f3ca3 (CONDITIONAL_JUMP)  ; LAB_004f3ca3
    PUSH EDI                            ; 004f3cbd
    PUSH ESI                            ; 004f3cbe
    PUSH EBX                            ; 004f3cbf
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004f3cc0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004f3cc5
    LEA ESI,[ESP + 0x8]                 ; 004f3cc8
    PUSH ESI                            ; 004f3ccc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3ccd
    PUSH EBX                            ; 004f3cd3
    CALL dword ptr [EAX + 0x14]         ; 004f3cd4
    ADD ESP,0x8                         ; 004f3cd7
    PUSH EAX                            ; 004f3cda
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004f3cdb
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004f3ce0
    PUSH EBX                            ; 004f3ce3
    MOV ESI,EAX                         ; 004f3ce4
    MOV EDI,EAX                         ; 004f3ce6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004f3ce8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f3ced
    TEST ESI,ESI                        ; 004f3cf0
    JZ 0x004f3d11                       ; 004f3cf2
        ;   XREF to: 004f3d11 (CONDITIONAL_JUMP)  ; LAB_004f3d11
    PUSH 0x80                           ; 004f3cf4
    PUSH 0xff                           ; 004f3cf9
    PUSH 0xff                           ; 004f3cfe
    PUSH 0xff                           ; 004f3d03
    PUSH EBX                            ; 004f3d08
    CALL core_actor.cpp_CDemonActor_FUN_0040dec0 ; 004f3d09
        ;   XREF to: 0040dec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)
    ADD ESP,0x14                        ; 004f3d0e
    MOV EAX,EDI                         ; 004f3d11
        ;   Label: LAB_004f3d11
    POP ESI                             ; 004f3d13
    POP EDI                             ; 004f3d14
    ADD ESP,0x18                        ; 004f3d15
    POP EBX                             ; 004f3d18
    RET                                 ; 004f3d19

