; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70()
;
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_CBoxActor_0061e3b2
;   TerminatedCString s_core_dest_cpp_0061e3bc
;   TerminatedCString s_CDestActor_renderTranspa_0061e3cd
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 g_CBoxActorClassInfo.name_hash
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_FUN_0040dec0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fb70
        ;   Label: core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70
    PUSH ESI                            ; 0046fb71
    PUSH EBP                            ; 0046fb72
    SUB ESP,0x30                        ; 0046fb73
    MOV EBX,dword ptr [ESP + 0x40]      ; 0046fb76
    MOV EAX,[0x0067d550]                ; 0046fb7a | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0046fb7f | DAT_02f33744
    JNZ 0x0046fb8e                      ; 0046fb83 | LAB_0046fb8e
        ;   XREF to: 0046fb8e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0046fb85
        ;   Label: LAB_0046fb85
    ADD ESP,0x30                        ; 0046fb87
    POP EBP                             ; 0046fb8a
    POP ESI                             ; 0046fb8b
    POP EBX                             ; 0046fb8c
    RET                                 ; 0046fb8d
    MOV ECX,dword ptr [0x006703ec]      ; 0046fb8e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0046fb8e
    PUSH ECX                            ; 0046fb94 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0046fb95 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fb9a
    TEST EAX,EAX                        ; 0046fb9d
    JNZ 0x0046fb85                      ; 0046fb9f | LAB_0046fb85
        ;   XREF to: 0046fb85 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x158]     ; 0046fba1
    TEST ESI,ESI                        ; 0046fba7
    JNZ 0x0046fc01                      ; 0046fba9 | LAB_0046fc01
        ;   XREF to: 0046fc01 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0046fbab
        ;   Label: LAB_0046fbab
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0046fbac | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fbb1
    LEA EAX,[ESP + 0x18]                ; 0046fbb4
    PUSH EAX                            ; 0046fbb8
    MOV ESI,dword ptr [EBX + 0x154]     ; 0046fbb9
    PUSH EBX                            ; 0046fbbf
    CALL dword ptr [ESI + 0x14]         ; 0046fbc0
    ADD ESP,0x8                         ; 0046fbc3
    PUSH EAX                            ; 0046fbc6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0046fbc7 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fbcc
    PUSH EBX                            ; 0046fbcf
    MOV ESI,EAX                         ; 0046fbd0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0046fbd2 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fbd7
    TEST ESI,ESI                        ; 0046fbda
    JZ 0x0046fb85                       ; 0046fbdc | LAB_0046fb85
        ;   XREF to: 0046fb85 (CONDITIONAL_JUMP)
    PUSH 0x80                           ; 0046fbde
    PUSH 0x0                            ; 0046fbe3
    PUSH 0x0                            ; 0046fbe5
    PUSH 0xff                           ; 0046fbe7
    PUSH EBX                            ; 0046fbec
    CALL core_actor.cpp_CDemonActor_FUN_0040dec0 ; 0046fbed | void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)
        ;   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0046fbf2
    MOV EAX,0x1                         ; 0046fbf5
    ADD ESP,0x30                        ; 0046fbfa
    POP EBP                             ; 0046fbfd
    POP ESI                             ; 0046fbfe
    POP EBX                             ; 0046fbff
    RET                                 ; 0046fc00
    PUSH 0x61e3b2                       ; 0046fc01 | = "CBoxActor" | s_CBoxActor_0061e3b2 = CBoxActor
        ;   Label: LAB_0046fc01
    PUSH ESI                            ; 0046fc06
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0046fc07 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046fc0c
    TEST EAX,EAX                        ; 0046fc0f
    JZ 0x0046fbab                       ; 0046fc11 | LAB_0046fbab
        ;   XREF to: 0046fbab (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0046fc13
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0046fc14 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fc19
    MOV ESI,ESP                         ; 0046fc1c
    PUSH ESI                            ; 0046fc1e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046fc1f
    PUSH EBX                            ; 0046fc25
    CALL dword ptr [EAX + 0x14]         ; 0046fc26
    ADD ESP,0x8                         ; 0046fc29
    PUSH EAX                            ; 0046fc2c
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0046fc2d | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fc32
    TEST EAX,EAX                        ; 0046fc35
    JZ 0x0046fca4                       ; 0046fc37 | LAB_0046fca4
        ;   XREF to: 0046fca4 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x008229e8]      ; 0046fc39 | g_CBoxActorClassInfo.name_hash
    PUSH EBP                            ; 0046fc3f
    MOV EAX,dword ptr [EBX + 0x158]     ; 0046fc40
    PUSH EAX                            ; 0046fc46
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0046fc47 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046fc4c
    MOV ESI,EAX                         ; 0046fc4f
    TEST EAX,EAX                        ; 0046fc51
    JNZ 0x0046fc78                      ; 0046fc53 | LAB_0046fc78
        ;   XREF to: 0046fc78 (CONDITIONAL_JUMP)
    MOV EDX,0x61e3bc                    ; 0046fc55 | = "..\\core\\dest.cpp" | s_core_dest_cpp_0061e3bc = ..\core\dest.cpp
    MOV ECX,0xa5                        ; 0046fc5a
    PUSH 0x61e3cd                       ; 0046fc5f | = "CDestActor::renderTransparent - Catch 22" | s_CDestActor_renderTranspa_0061e3cd = CDestActor::renderTransparent - Catch 22
    MOV dword ptr [0x02f0ca48],EDX      ; 0046fc64 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0046fc6a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046fc70 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fc75
    PUSH EDI                            ; 0046fc78
        ;   Label: LAB_0046fc78
    PUSH 0x8000                         ; 0046fc79
    MOV EDI,dword ptr [0x006703ec]      ; 0046fc7e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0046fc84 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0046fc85 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046fc8a
    PUSH 0x2e6                          ; 0046fc8d
    LEA EAX,[ESI + 0x158]               ; 0046fc92
    PUSH 0x0                            ; 0046fc98
    PUSH EAX                            ; 0046fc9a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0046fc9b | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046fca0
    POP EDI                             ; 0046fca3
    PUSH EBX                            ; 0046fca4
        ;   Label: LAB_0046fca4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0046fca5 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046fcaa
    MOV EAX,0x1                         ; 0046fcad
    ADD ESP,0x30                        ; 0046fcb2
    POP EBP                             ; 0046fcb5
    POP ESI                             ; 0046fcb6
    POP EBX                             ; 0046fcb7
    RET                                 ; 0046fcb8

