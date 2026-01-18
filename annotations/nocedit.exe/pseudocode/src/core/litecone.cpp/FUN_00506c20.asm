; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_litecone.cpp_FUN_00506c20()
;
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506c20
        ;   Label: core_litecone.cpp_FUN_00506c20
    SUB ESP,0x18                        ; 00506c21
    MOV EBX,dword ptr [ESP + 0x20]      ; 00506c24
    CMP dword ptr [EBX + 0x160],0x0     ; 00506c28
    JNZ 0x00506c38                      ; 00506c2f
        ;   XREF to: 00506c38 (CONDITIONAL_JUMP)  ; LAB_00506c38
    XOR EAX,EAX                         ; 00506c31
        ;   Label: LAB_00506c31
    ADD ESP,0x18                        ; 00506c33
    POP EBX                             ; 00506c36
    RET                                 ; 00506c37
    MOV ECX,dword ptr [0x006703ec]      ; 00506c38 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_00506c38
    PUSH ECX                            ; 00506c3e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00506c3f
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00506c44
    TEST EAX,EAX                        ; 00506c47
    JNZ 0x00506c31                      ; 00506c49
        ;   XREF to: 00506c31 (CONDITIONAL_JUMP)  ; LAB_00506c31
    PUSH EDI                            ; 00506c4b
    PUSH ESI                            ; 00506c4c
    PUSH EBX                            ; 00506c4d
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00506c4e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00506c53
    LEA EAX,[ESP + 0x8]                 ; 00506c56
    PUSH EAX                            ; 00506c5a
    MOV ESI,dword ptr [EBX + 0x154]     ; 00506c5b
    PUSH EBX                            ; 00506c61
    CALL dword ptr [ESI + 0x14]         ; 00506c62
    ADD ESP,0x8                         ; 00506c65
    PUSH EAX                            ; 00506c68
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00506c69
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00506c6e
    PUSH EBX                            ; 00506c71
    MOV ESI,EAX                         ; 00506c72
    MOV EDI,EAX                         ; 00506c74
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00506c76
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506c7b
    TEST ESI,ESI                        ; 00506c7e
    JZ 0x00506c9e                       ; 00506c80
        ;   XREF to: 00506c9e (CONDITIONAL_JUMP)  ; LAB_00506c9e
    PUSH dword ptr [EBX + 0x15c]        ; 00506c82
    LEA EAX,[EBX + 0x30]                ; 00506c88
    PUSH dword ptr [EBX + 0x158]        ; 00506c8b
    PUSH EAX                            ; 00506c91
    ADD EBX,0x20                        ; 00506c92
    PUSH EBX                            ; 00506c95
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 ; 00506c96
        ;   XREF to: 004760d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float param_3, float max_distance)
    ADD ESP,0x10                        ; 00506c9b
    MOV EAX,EDI                         ; 00506c9e
        ;   Label: LAB_00506c9e
    POP ESI                             ; 00506ca0
    POP EDI                             ; 00506ca1
    ADD ESP,0x18                        ; 00506ca2
    POP EBX                             ; 00506ca5
    RET                                 ; 00506ca6

