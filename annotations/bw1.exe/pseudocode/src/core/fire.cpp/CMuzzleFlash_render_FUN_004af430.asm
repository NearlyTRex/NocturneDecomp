; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004af430(CMuzzleFlash *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b52ad
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af430
        ;   Label: core_fire.cpp_CMuzzleFlash_render_FUN_004af430
    PUSH EBP                            ; 004af431
    SUB ESP,0x2c                        ; 004af432
    MOV EBX,dword ptr [ESP + 0x38]      ; 004af435
    CMP dword ptr [EBX],0x2             ; 004af439
    JZ 0x004af444                       ; 004af43c
        ;   XREF to: 004af444 (CONDITIONAL_JUMP)  ; LAB_004af444
    ADD ESP,0x2c                        ; 004af43e
    POP EBP                             ; 004af441
    POP EBX                             ; 004af442
    RET                                 ; 004af443
    PUSH EDI                            ; 004af444
        ;   Label: LAB_004af444
    PUSH ESI                            ; 004af445
    LEA EAX,[EBX + 0x4]                 ; 004af446
    PUSH EAX                            ; 004af449
    MOV ECX,dword ptr [0x00612560]      ; 004af44a | DAT_00612560
    PUSH ECX                            ; 004af450 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004af451
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004af456
    PUSH 0x0                            ; 004af459
    LEA EAX,[EBX + 0x10]                ; 004af45b
    PUSH EAX                            ; 004af45e
    MOV EBX,dword ptr [0x00612560]      ; 004af45f | DAT_00612560
    PUSH EBX                            ; 004af465 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004af466
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004af46b
    PUSH 0x40c90fdb                     ; 004af46e
    PUSH 0x0                            ; 004af473
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004af475
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004af47a
    FLD float ptr [ESP + 0x38]          ; 004af47e
    ADD ESP,0x8                         ; 004af482
    XOR ESI,ESI                         ; 004af485
    FSTP float ptr [ESP + 0x2c]         ; 004af487
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004af48b
    PUSH ESI                            ; 004af48f
    MOV dword ptr [ESP + 0x20],EAX      ; 004af490
    LEA EAX,[ESP + 0x18]                ; 004af494
    PUSH EAX                            ; 004af498
    MOV EBP,dword ptr [0x00612560]      ; 004af499 | DAT_00612560
    PUSH EBP                            ; 004af49f | DAT_01bc120c
    MOV dword ptr [ESP + 0x20],ESI      ; 004af4a0
    MOV dword ptr [ESP + 0x24],ESI      ; 004af4a4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004af4a8
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004af4ad
    MOV EAX,[0x00622c18]                ; 004af4b0 | g_CDemonSetPtr
    PUSH 0x1                            ; 004af4b5
    MOV dword ptr [EAX + 0x15ac90],0x1  ; 004af4b7 | g_CDemonSetInstance.lighting_quality_mode
    MOV EAX,[0x00612560]                ; 004af4c1 | DAT_00612560
    PUSH EAX                            ; 004af4c6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004af4c7
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004af4cc
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004af4cf
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0x3fff                      ; 004af4d4
    ADD EAX,0x1800                      ; 004af4d9
    PUSH EAX                            ; 004af4de
    MOV EDX,dword ptr [0x00612560]      ; 004af4df | DAT_00612560
    PUSH EDX                            ; 004af4e5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004af4e6
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004af4eb
    PUSH 0x63                           ; 004af4ee
    PUSH 0x0                            ; 004af4f0
    PUSH 0x1c57c98                      ; 004af4f2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004af4f7
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004af4fc
    MOV dword ptr [ESP + 0x20],ESI      ; 004af4ff
    MOV dword ptr [ESP + 0x24],ESI      ; 004af503
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 004af507
    PUSH 0x0                            ; 004af50f
    LEA EAX,[ESP + 0x24]                ; 004af511
    PUSH EAX                            ; 004af515
    MOV EDI,dword ptr [0x00612560]      ; 004af516 | DAT_00612560
    PUSH EDI                            ; 004af51c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004af51d
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004af522
    PUSH 0x63                           ; 004af525
    PUSH 0x0                            ; 004af527
    PUSH 0x1c57c98                      ; 004af529
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004af52e
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004af533
    MOV EBP,dword ptr [0x00612560]      ; 004af536 | DAT_00612560
    PUSH EBP                            ; 004af53c | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004af53d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004af542
    XOR EAX,EAX                         ; 004af545
    MOV dword ptr [ESP + 0x8],EAX       ; 004af547
    PUSH EAX                            ; 004af54b
    MOV dword ptr [ESP + 0x10],EAX      ; 004af54c
    LEA EAX,[ESP + 0xc]                 ; 004af550
    PUSH EAX                            ; 004af554
    MOV EBX,dword ptr [0x00612560]      ; 004af555 | DAT_00612560
    MOV ECX,0x3f490fdb                  ; 004af55b
    PUSH EBX                            ; 004af560 | DAT_01bc120c
    MOV dword ptr [ESP + 0x1c],ECX      ; 004af561
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004af565
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004af56a
    PUSH 0x63                           ; 004af56d
    PUSH 0x0                            ; 004af56f
    PUSH 0x1c57c98                      ; 004af571
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004af576
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004af57b
    MOV ESI,dword ptr [0x00612560]      ; 004af57e | DAT_00612560
    PUSH ESI                            ; 004af584 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004af585
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004af58a
    MOV EDI,dword ptr [0x00612560]      ; 004af58d | DAT_00612560
    MOV EAX,[0x00622c18]                ; 004af593 | g_CDemonSetPtr
    PUSH EDI                            ; 004af598 | DAT_01bc120c
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 004af599 | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004af5a3
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004af5a8
    MOV EBP,dword ptr [0x00612560]      ; 004af5ab | DAT_00612560
    PUSH EBP                            ; 004af5b1 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004af5b2
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004af5b7
    PUSH 0x0                            ; 004af5ba
    MOV EAX,[0x00612560]                ; 004af5bc | DAT_00612560
    PUSH EAX                            ; 004af5c1 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004af5c2
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004af5c7
    POP ESI                             ; 004af5ca
    POP EDI                             ; 004af5cb
    ADD ESP,0x2c                        ; 004af5cc
    POP EBP                             ; 004af5cf
    POP EBX                             ; 004af5d0
    RET                                 ; 004af5d1

