; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_00441f60()
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02d01f4e
;   undefined4 DAT_02d01f4f
;   undefined4 DAT_02d01f50
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
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

    PUSH EBX                            ; 00441f60
        ;   Label: core_conveyor.cpp_FUN_00441f60
    PUSH ESI                            ; 00441f61
    SUB ESP,0x18                        ; 00441f62
    MOV EBX,dword ptr [ESP + 0x24]      ; 00441f65
    MOV EAX,[0x0067d550]                ; 00441f69 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 00441f6e | DAT_02f33744
    JNZ 0x00441f7c                      ; 00441f72
        ;   XREF to: 00441f7c (CONDITIONAL_JUMP)  ; LAB_00441f7c
    XOR EAX,EAX                         ; 00441f74
        ;   Label: LAB_00441f74
    ADD ESP,0x18                        ; 00441f76
    POP ESI                             ; 00441f79
    POP EBX                             ; 00441f7a
    RET                                 ; 00441f7b
    MOV ECX,dword ptr [0x006703ec]      ; 00441f7c | g_CDemonRendererInstance | g_CDemonRendererPtr
        ;   Label: LAB_00441f7c
    PUSH ECX                            ; 00441f82 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00441f83
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00441f88
    TEST EAX,EAX                        ; 00441f8b
    JNZ 0x00441f74                      ; 00441f8d
        ;   XREF to: 00441f74 (CONDITIONAL_JUMP)  ; LAB_00441f74
    PUSH EBX                            ; 00441f8f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00441f90
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00441f95
    MOV EAX,ESP                         ; 00441f98
    PUSH EAX                            ; 00441f9a
    MOV ESI,dword ptr [EBX + 0x154]     ; 00441f9b
    PUSH EBX                            ; 00441fa1
    CALL dword ptr [ESI + 0x14]         ; 00441fa2
    ADD ESP,0x8                         ; 00441fa5
    PUSH EAX                            ; 00441fa8
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00441fa9
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00441fae
    PUSH EBX                            ; 00441fb1
    MOV ESI,EAX                         ; 00441fb2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00441fb4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00441fb9
    TEST ESI,ESI                        ; 00441fbc
    JZ 0x00441f74                       ; 00441fbe
        ;   XREF to: 00441f74 (CONDITIONAL_JUMP)  ; LAB_00441f74
    PUSH EDI                            ; 00441fc0
    MOV EAX,[0x0067d550]                ; 00441fc1 | g_CDemonMissionPtr
    MOV EDI,dword ptr [EAX + 0x28]      ; 00441fc6 | DAT_02f33768
    MOV ESI,0x2                         ; 00441fc9
    CMP EBX,EDI                         ; 00441fce
    JNZ 0x00442012                      ; 00441fd0
        ;   XREF to: 00442012 (CONDITIONAL_JUMP)  ; LAB_00442012
    MOV EAX,0x80                        ; 00441fd2
    PUSH EAX                            ; 00441fd7
        ;   Label: LAB_00441fd7
    LEA EAX,[ESI*0x4 + 0x0]             ; 00441fd8
    SUB EAX,ESI                         ; 00441fdf
    MOVZX ESI,byte ptr [EAX + 0x2d01f4a] ; 00441fe1 | DAT_02d01f50
    PUSH ESI                            ; 00441fe8
    MOVZX ESI,byte ptr [EAX + 0x2d01f49] ; 00441fe9 | DAT_02d01f4f
    PUSH ESI                            ; 00441ff0
    MOV AL,byte ptr [EAX + 0x2d01f48]   ; 00441ff1 | DAT_02d01f4e
    AND EAX,0xff                        ; 00441ff7
    PUSH EAX                            ; 00441ffc
    PUSH EBX                            ; 00441ffd
    CALL core_actor.cpp_CDemonActor_FUN_0040dec0 ; 00441ffe
        ;   XREF to: 0040dec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 00442003
    ADD ESP,0x14                        ; 00442008
    POP EDI                             ; 0044200b
    ADD ESP,0x18                        ; 0044200c
    POP ESI                             ; 0044200f
    POP EBX                             ; 00442010
    RET                                 ; 00442011
    MOV EAX,0x40                        ; 00442012
        ;   Label: LAB_00442012
    JMP 0x00441fd7                      ; 00442017
        ;   XREF to: 00441fd7 (UNCONDITIONAL_JUMP)  ; LAB_00441fd7

