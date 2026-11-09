; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049a480(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1ad0 at 004a1c7d
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CDemonSetInstance.field1420432_0x15ac90
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   crt_stdlib.c_rand_FUN_005a35cc
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a480
        ;   Label: core_fire.cpp_FUN_0049a480
    PUSH EBP                            ; 0049a481
    SUB ESP,0x2c                        ; 0049a482
    MOV EBX,dword ptr [ESP + 0x38]      ; 0049a485
    CMP dword ptr [EBX],0x2             ; 0049a489
    JZ 0x0049a494                       ; 0049a48c
        ;   XREF to: 0049a494 (CONDITIONAL_JUMP)  ; LAB_0049a494
    ADD ESP,0x2c                        ; 0049a48e
    POP EBP                             ; 0049a491
    POP EBX                             ; 0049a492
    RET                                 ; 0049a493
    PUSH EDI                            ; 0049a494
        ;   Label: LAB_0049a494
    PUSH ESI                            ; 0049a495
    LEA EAX,[EBX + 0x4]                 ; 0049a496
    PUSH EAX                            ; 0049a499
    MOV ECX,dword ptr [0x005f2afc]      ; 0049a49a | DAT_005f2afc
    PUSH ECX                            ; 0049a4a0 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049a4a1
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049a4a6
    PUSH 0x0                            ; 0049a4a9
    LEA EAX,[EBX + 0x10]                ; 0049a4ab
    PUSH EAX                            ; 0049a4ae
    MOV EBX,dword ptr [0x005f2afc]      ; 0049a4af | DAT_005f2afc
    PUSH EBX                            ; 0049a4b5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049a4b6
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049a4bb
    PUSH 0x40c90fdb                     ; 0049a4be
    PUSH 0x0                            ; 0049a4c3
    CALL core_actor.cpp_FUN_0040ce40    ; 0049a4c5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x38],EAX      ; 0049a4ca
    FLD float ptr [ESP + 0x38]          ; 0049a4ce
    ADD ESP,0x8                         ; 0049a4d2
    XOR ESI,ESI                         ; 0049a4d5
    FSTP float ptr [ESP + 0x2c]         ; 0049a4d7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049a4db
    PUSH ESI                            ; 0049a4df
    MOV dword ptr [ESP + 0x20],EAX      ; 0049a4e0
    LEA EAX,[ESP + 0x18]                ; 0049a4e4
    PUSH EAX                            ; 0049a4e8
    MOV EBP,dword ptr [0x005f2afc]      ; 0049a4e9 | DAT_005f2afc
    PUSH EBP                            ; 0049a4ef | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x20],ESI      ; 0049a4f0
    MOV dword ptr [ESP + 0x24],ESI      ; 0049a4f4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049a4f8
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049a4fd
    MOV EAX,[0x00603b28]                ; 0049a500 | g_CDemonSetPtr
    PUSH 0x1                            ; 0049a505
    MOV dword ptr [EAX + 0x15ac90],0x1  ; 0049a507 | g_CDemonSetInstance.field1420432_0x15ac90
    MOV EAX,[0x005f2afc]                ; 0049a511 | DAT_005f2afc
    PUSH EAX                            ; 0049a516 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049a517
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049a51c
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0049a51f
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    AND EAX,0x3fff                      ; 0049a524
    ADD EAX,0x1800                      ; 0049a529
    PUSH EAX                            ; 0049a52e
    MOV EDX,dword ptr [0x005f2afc]      ; 0049a52f | DAT_005f2afc
    PUSH EDX                            ; 0049a535 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049a536
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049a53b
    PUSH 0x63                           ; 0049a53e
    PUSH 0x0                            ; 0049a540
    PUSH 0x1c74278                      ; 0049a542
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0049a547
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0049a54c
    MOV dword ptr [ESP + 0x20],ESI      ; 0049a54f
    MOV dword ptr [ESP + 0x24],ESI      ; 0049a553
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 0049a557
    PUSH 0x0                            ; 0049a55f
    LEA EAX,[ESP + 0x24]                ; 0049a561
    PUSH EAX                            ; 0049a565
    MOV EDI,dword ptr [0x005f2afc]      ; 0049a566 | DAT_005f2afc
    PUSH EDI                            ; 0049a56c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049a56d
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049a572
    PUSH 0x63                           ; 0049a575
    PUSH 0x0                            ; 0049a577
    PUSH 0x1c74278                      ; 0049a579
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0049a57e
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0049a583
    MOV EBP,dword ptr [0x005f2afc]      ; 0049a586 | DAT_005f2afc
    PUSH EBP                            ; 0049a58c | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049a58d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049a592
    XOR EAX,EAX                         ; 0049a595
    MOV dword ptr [ESP + 0x8],EAX       ; 0049a597
    PUSH EAX                            ; 0049a59b
    MOV dword ptr [ESP + 0x10],EAX      ; 0049a59c
    LEA EAX,[ESP + 0xc]                 ; 0049a5a0
    PUSH EAX                            ; 0049a5a4
    MOV EBX,dword ptr [0x005f2afc]      ; 0049a5a5 | DAT_005f2afc
    MOV ECX,0x3f490fdb                  ; 0049a5ab
    PUSH EBX                            ; 0049a5b0 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x1c],ECX      ; 0049a5b1
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049a5b5
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049a5ba
    PUSH 0x63                           ; 0049a5bd
    PUSH 0x0                            ; 0049a5bf
    PUSH 0x1c74278                      ; 0049a5c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0049a5c6
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0049a5cb
    MOV ESI,dword ptr [0x005f2afc]      ; 0049a5ce | DAT_005f2afc
    PUSH ESI                            ; 0049a5d4 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049a5d5
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049a5da
    MOV EDI,dword ptr [0x005f2afc]      ; 0049a5dd | DAT_005f2afc
    MOV EAX,[0x00603b28]                ; 0049a5e3 | g_CDemonSetPtr
    PUSH EDI                            ; 0049a5e8 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0049a5e9 | g_CDemonSetInstance.field1420432_0x15ac90
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049a5f3
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049a5f8
    MOV EBP,dword ptr [0x005f2afc]      ; 0049a5fb | DAT_005f2afc
    PUSH EBP                            ; 0049a601 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049a602
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049a607
    PUSH 0x0                            ; 0049a60a
    MOV EAX,[0x005f2afc]                ; 0049a60c | DAT_005f2afc
    PUSH EAX                            ; 0049a611 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049a612
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049a617
    POP ESI                             ; 0049a61a
    POP EDI                             ; 0049a61b
    ADD ESP,0x2c                        ; 0049a61c
    POP EBP                             ; 0049a61f
    POP EBX                             ; 0049a620
    RET                                 ; 0049a621

