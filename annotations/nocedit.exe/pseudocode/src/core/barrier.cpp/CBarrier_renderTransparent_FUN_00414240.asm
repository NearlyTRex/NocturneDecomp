; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_barrier_cpp_CBarrier_renderTransparent_FUN_00414240(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
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

    PUSH EBX                            ; 00414240
        ;   Label: core_barrier.cpp_CBarrier_renderTransparent_FUN_00414240
    PUSH EBP                            ; 00414241
    SUB ESP,0x18                        ; 00414242
    MOV EBX,dword ptr [ESP + 0x24]      ; 00414245
    MOV EAX,[0x0067d550]                ; 00414249 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0041424e | DAT_02f33744
    JNZ 0x0041425c                      ; 00414252
        ;   XREF to: 0041425c (CONDITIONAL_JUMP)  ; LAB_0041425c
    XOR EAX,EAX                         ; 00414254
        ;   Label: LAB_00414254
    ADD ESP,0x18                        ; 00414256
    POP EBP                             ; 00414259
    POP EBX                             ; 0041425a
    RET                                 ; 0041425b
    MOV ECX,dword ptr [0x006703ec]      ; 0041425c | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_0041425c
    PUSH ECX                            ; 00414262 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00414263
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414268
    TEST EAX,EAX                        ; 0041426b
    JNZ 0x00414254                      ; 0041426d
        ;   XREF to: 00414254 (CONDITIONAL_JUMP)  ; LAB_00414254
    PUSH EDI                            ; 0041426f
    PUSH ESI                            ; 00414270
    PUSH EBX                            ; 00414271
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00414272
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00414277
    LEA ESI,[ESP + 0x8]                 ; 0041427a
    PUSH ESI                            ; 0041427e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041427f
    PUSH EBX                            ; 00414285
    CALL dword ptr [EAX + 0x14]         ; 00414286
    ADD ESP,0x8                         ; 00414289
    PUSH EAX                            ; 0041428c
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0041428d
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00414292
    PUSH EBX                            ; 00414295
    MOV ESI,EAX                         ; 00414296
    MOV EDI,EAX                         ; 00414298
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0041429a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041429f
    TEST ESI,ESI                        ; 004142a2
    JZ 0x004142cd                       ; 004142a4
        ;   XREF to: 004142cd (CONDITIONAL_JUMP)  ; LAB_004142cd
    MOV ESI,dword ptr [0x0067d550]      ; 004142a6 | g_CDemonMissionPtr
    MOV EBP,dword ptr [ESI + 0x28]      ; 004142ac | DAT_02f33768
    MOV EAX,0x40                        ; 004142af
    CMP EBX,EBP                         ; 004142b4
    JNZ 0x004142bd                      ; 004142b6
        ;   XREF to: 004142bd (CONDITIONAL_JUMP)  ; LAB_004142bd
    MOV EAX,0x80                        ; 004142b8
    PUSH EAX                            ; 004142bd
        ;   Label: LAB_004142bd
    PUSH 0x0                            ; 004142be
    PUSH 0x0                            ; 004142c0
    PUSH 0x40                           ; 004142c2
    PUSH EBX                            ; 004142c4
    CALL core_actor.cpp_CDemonActor_FUN_0040dec0 ; 004142c5
        ;   XREF to: 0040dec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)
    ADD ESP,0x14                        ; 004142ca
    MOV EAX,EDI                         ; 004142cd
        ;   Label: LAB_004142cd
    POP ESI                             ; 004142cf
    POP EDI                             ; 004142d0
    ADD ESP,0x18                        ; 004142d1
    POP EBP                             ; 004142d4
    POP EBX                             ; 004142d5
    RET                                 ; 004142d6

