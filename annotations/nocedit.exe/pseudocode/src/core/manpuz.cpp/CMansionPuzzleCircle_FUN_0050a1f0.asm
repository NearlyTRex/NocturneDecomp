; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0 at 00509184
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a1f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0
    PUSH ESI                            ; 0050a1f1
    PUSH EBP                            ; 0050a1f2
    MOV EBP,ESP                         ; 0050a1f3
    SUB ESP,0x4                         ; 0050a1f5
    MOV ESI,dword ptr [EBP + 0x10]      ; 0050a1f8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050a1fb
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050a1fe
    SUB EAX,EBX                         ; 0050a205
    SHL EAX,0x5                         ; 0050a207
    LEA EBX,[ESI + 0x1340]              ; 0050a20a
    ADD EBX,EAX                         ; 0050a210
    MOV EAX,[0x0067d550]                ; 0050a212 | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0050a217 | DAT_02f33744
    JNZ 0x0050a22f                      ; 0050a21b
        ;   XREF to: 0050a22f (CONDITIONAL_JUMP)  ; LAB_0050a22f
    FLD float ptr [EBX + 0x18]          ; 0050a21d
    FLDZ                                ; 0050a220
    FCOMPP                              ; 0050a222
    FNSTSW AX                           ; 0050a224
    SAHF                                ; 0050a226
    JC 0x0050a22f                       ; 0050a227
        ;   XREF to: 0050a22f (CONDITIONAL_JUMP)  ; LAB_0050a22f
    MOV ESP,EBP                         ; 0050a229
    POP EBP                             ; 0050a22b
    POP ESI                             ; 0050a22c
    POP EBX                             ; 0050a22d
    RET                                 ; 0050a22e
    LEA EAX,[EBX + 0x1c]                ; 0050a22f
        ;   Label: LAB_0050a22f
    PUSH EAX                            ; 0050a232
    LEA EAX,[EBX + 0x28]                ; 0050a233
    PUSH EAX                            ; 0050a236
    MOV ECX,dword ptr [0x006703ec]      ; 0050a237 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0050a23d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0050a23e
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0050a243
    PUSH -0x1                           ; 0050a246
    ADD ESI,0x450                       ; 0050a248
    PUSH ESI                            ; 0050a24e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0050a24f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 0050a254
    DEC EAX                             ; 0050a25a
    MOV dword ptr [EBP + -0x4],EAX      ; 0050a25b
    ADD ESP,0x4                         ; 0050a25e
    FILD dword ptr [EBP + -0x4]         ; 0050a261
    FMUL float ptr [EBX + 0x18]         ; 0050a264
    SUB ESP,0x4                         ; 0050a267
    FSTP float ptr [ESP]                ; 0050a26a
    PUSH ESI                            ; 0050a26d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0050a26e
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0050a273
    MOV EBX,dword ptr [0x006703ec]      ; 0050a276 | g_CDemonRendererPtr2
    PUSH EBX                            ; 0050a27c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0050a27d
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

