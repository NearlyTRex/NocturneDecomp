; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004161a0(CBodyPart *param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   undefined4 g_CDemonSet_01e57284.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004161a0
        ;   Label: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004161a0
    SUB ESP,0x1c                        ; 004161a1
    MOV EBP,dword ptr [ESP + 0x24]      ; 004161a4
    CMP dword ptr [EBP + 0x150],0x1     ; 004161a8
    JLE 0x004161d4                      ; 004161af
        ;   XREF to: 004161d4 (CONDITIONAL_JUMP)  ; LAB_004161d4
    CMP dword ptr [EBP + 0xf14],0x0     ; 004161b1
    JZ 0x004161cd                       ; 004161b8
        ;   XREF to: 004161cd (CONDITIONAL_JUMP)  ; LAB_004161cd
    CMP dword ptr [EBP + 0x744],0x0     ; 004161ba
    JLE 0x004161cd                      ; 004161c1
        ;   XREF to: 004161cd (CONDITIONAL_JUMP)  ; LAB_004161cd
    MOV EAX,0x1                         ; 004161c3
    ADD ESP,0x1c                        ; 004161c8
    POP EBP                             ; 004161cb
    RET                                 ; 004161cc
    XOR EAX,EAX                         ; 004161cd
        ;   Label: LAB_004161cd
    ADD ESP,0x1c                        ; 004161cf
    POP EBP                             ; 004161d2
    RET                                 ; 004161d3
    PUSH EDI                            ; 004161d4
        ;   Label: LAB_004161d4
    PUSH ESI                            ; 004161d5
    PUSH EBX                            ; 004161d6
    MOV EAX,[0x005be368]                ; 004161d7 | g_CDemonSet_PTR_005be368
    MOV EBX,dword ptr [EBP + 0xc98]     ; 004161dc
    PUSH EBP                            ; 004161e2
    MOV dword ptr [EAX + 0x15a8a0],EBX  ; 004161e3 | g_CDemonSet_01e57284.disable_directional_lighting
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004161e9
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004161ee
    PUSH 0x0                            ; 004161f1
    LEA EAX,[ESP + 0x10]                ; 004161f3
    PUSH EAX                            ; 004161f7
    MOV EBX,dword ptr [EBP + 0x14c]     ; 004161f8
    PUSH EBP                            ; 004161fe
    CALL dword ptr [EBX + 0x14]         ; 004161ff
    ADD ESP,0x8                         ; 00416202
    PUSH EAX                            ; 00416205
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00416206
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0041620b
    MOV dword ptr [EBP + 0xf14],EAX     ; 0041620e
    TEST EAX,EAX                        ; 00416214
    JZ 0x004162b0                       ; 00416216
        ;   XREF to: 004162b0 (CONDITIONAL_JUMP)  ; LAB_004162b0
    CMP dword ptr [EBP + 0xc9c],0x0     ; 0041621c
    JNZ 0x004162dc                      ; 00416223
        ;   XREF to: 004162dc (CONDITIONAL_JUMP)  ; LAB_004162dc
    PUSH -0x1                           ; 00416229
        ;   Label: LAB_00416229
    PUSH EBP                            ; 0041622b
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 ; 0041622c
        ;   XREF to: 00416030 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 00416231
    MOV EDI,dword ptr [EBP + 0x284]     ; 00416234
        ;   Label: LAB_00416234
    XOR EBX,EBX                         ; 0041623a
    TEST EDI,EDI                        ; 0041623c
    JLE 0x004162b0                      ; 0041623e
        ;   XREF to: 004162b0 (CONDITIONAL_JUMP)  ; LAB_004162b0
    LEA EAX,[EBP + 0x288]               ; 00416240
    LEA ESI,[EBP + 0x2a0]               ; 00416246
    MOV dword ptr [ESP + 0x24],EAX      ; 0041624c
    LEA EDI,[EBP + 0x294]               ; 00416250
    IMUL EAX,EBX,0x194                  ; 00416256
        ;   Label: LAB_00416256
    ADD EAX,dword ptr [ESP + 0x24]      ; 0041625c
    PUSH EAX                            ; 00416260
    PUSH EDI                            ; 00416261
    MOV EAX,[0x005ae704]                ; 00416262 | DAT_005ae704
    PUSH EAX                            ; 00416267 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00416268
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0041626d
    PUSH -0x1                           ; 00416270
    PUSH 0x0                            ; 00416272
    PUSH ESI                            ; 00416274
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00416275
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041627a
    MOV EDX,dword ptr [0x005ae704]      ; 0041627d | DAT_005ae704
    INC EBX                             ; 00416283
    PUSH EDX                            ; 00416284 | DAT_01b4d738
    ADD EDI,0x194                       ; 00416285
    ADD ESI,0x194                       ; 0041628b
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00416291
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    MOV ECX,dword ptr [EBP + 0x284]     ; 00416296
    ADD ESP,0x4                         ; 0041629c
    CMP EBX,ECX                         ; 0041629f
    JL 0x00416256                       ; 004162a1
        ;   XREF to: 00416256 (CONDITIONAL_JUMP)  ; LAB_00416256
    LEA EAX,[EAX]                       ; 004162a3
    LEA EDX,[EDX]                       ; 004162a9
    NOP                                 ; 004162af
    MOV EBX,dword ptr [0x005ae704]      ; 004162b0 | DAT_005ae704
        ;   Label: LAB_004162b0
    PUSH EBX                            ; 004162b6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004162b7
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    MOV EAX,[0x005be368]                ; 004162bc | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15a8a0],0x0  ; 004162c1 | g_CDemonSet_01e57284.disable_directional_lighting
    ADD ESP,0x4                         ; 004162cb
    MOV EAX,dword ptr [EBP + 0xf14]     ; 004162ce
    POP EBX                             ; 004162d4
    POP ESI                             ; 004162d5
    POP EDI                             ; 004162d6
    ADD ESP,0x1c                        ; 004162d7
    POP EBP                             ; 004162da
    RET                                 ; 004162db
    MOV ESI,dword ptr [0x005ae704]      ; 004162dc | DAT_005ae704
        ;   Label: LAB_004162dc
    PUSH ESI                            ; 004162e2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004162e3
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004162e8
    TEST EAX,EAX                        ; 004162eb
    JNZ 0x00416229                      ; 004162ed
        ;   XREF to: 00416229 (CONDITIONAL_JUMP)  ; LAB_00416229
    JMP 0x00416234                      ; 004162f3
        ;   XREF to: 00416234 (UNCONDITIONAL_JUMP)  ; LAB_00416234

