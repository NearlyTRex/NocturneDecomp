; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bugs_cpp_FUN_00425480(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_set.cpp_FUN_005557a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00425480
        ;   Label: core_bugs.cpp_FUN_00425480
    SUB ESP,0x6c                        ; 00425481
    MOV EAX,dword ptr [ESP + 0x74]      ; 00425484
    CMP dword ptr [EAX + 0x24fc],0x0    ; 00425488
    JZ 0x00425498                       ; 0042548f
        ;   XREF to: 00425498 (CONDITIONAL_JUMP)  ; LAB_00425498
    XOR EAX,EAX                         ; 00425491
        ;   Label: LAB_00425491
    ADD ESP,0x6c                        ; 00425493
    POP EBP                             ; 00425496
    RET                                 ; 00425497
    MOV ECX,dword ptr [0x00612560]      ; 00425498 | DAT_00612560
        ;   Label: LAB_00425498
    PUSH ECX                            ; 0042549e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0042549f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004254a4
    TEST EAX,EAX                        ; 004254a7
    JNZ 0x00425491                      ; 004254a9
        ;   XREF to: 00425491 (CONDITIONAL_JUMP)  ; LAB_00425491
    PUSH EDI                            ; 004254ab
    PUSH ESI                            ; 004254ac
    PUSH EBX                            ; 004254ad
    MOV EBX,dword ptr [ESP + 0x80]      ; 004254ae
    PUSH EBX                            ; 004254b5
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004254b6
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004254bb
    PUSH 0x0                            ; 004254be
    MOV EAX,dword ptr [EBX + 0x154]     ; 004254c0
    PUSH EBX                            ; 004254c6
    LEA ESI,[ESP + 0x14]                ; 004254c7
    LEA EDI,[ESP + 0x2c]                ; 004254cb
    CALL dword ptr [EAX + 0x1c]         ; 004254cf
    MOV ECX,0x6                         ; 004254d2
    ADD ESP,0x4                         ; 004254d7
    LEA EAX,[ESP + 0x28]                ; 004254da
    LEA ESI,[ESP + 0x10]                ; 004254de
    PUSH EAX                            ; 004254e2
    MOVSD.REP ES:EDI,ESI                ; 004254e3
    CALL core_box.cpp_FUN_004207b0      ; 004254e5
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004254ea
    MOV dword ptr [ESP + 0x60],EAX      ; 004254ed
    TEST EAX,EAX                        ; 004254f1
    JZ 0x00425633                       ; 004254f3
        ;   XREF to: 00425633 (CONDITIONAL_JUMP)  ; LAB_00425633
    MOV EDI,dword ptr [EBX + 0xc26c]    ; 004254f9
    XOR EBP,EBP                         ; 004254ff
    TEST EDI,EDI                        ; 00425501
    JLE 0x00425622                      ; 00425503
        ;   XREF to: 00425622 (CONDITIONAL_JUMP)  ; LAB_00425622
    LEA EAX,[EBX + 0x12674]             ; 00425509
    MOV dword ptr [ESP + 0x64],EAX      ; 0042550f
    LEA EAX,[EBX + 0xc270]              ; 00425513
    MOV dword ptr [ESP + 0x68],EAX      ; 00425519
    LEA EAX,[EBX + 0x20]                ; 0042551d
    MOV dword ptr [ESP + 0x74],EAX      ; 00425520
    LEA EAX,[EBX + 0xc284]              ; 00425524
    MOV dword ptr [ESP + 0x70],EAX      ; 0042552a
    ADD EBX,0xc278                      ; 0042552e
    MOV EDX,dword ptr [ESP + 0x68]      ; 00425534
        ;   Label: LAB_00425534
    MOV ESI,dword ptr [ESP + 0x70]      ; 00425538
    MOV EAX,EBP                         ; 0042553c
    PUSH EBX                            ; 0042553e
    SHL EAX,0x6                         ; 0042553f
    PUSH ESI                            ; 00425542
    MOV EDI,dword ptr [0x00612560]      ; 00425543 | DAT_00612560
    ADD EDX,EAX                         ; 00425549
    PUSH EDI                            ; 0042554b | DAT_01bc120c
    MOV dword ptr [ESP + 0x78],EDX      ; 0042554c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00425550
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00425555
    LEA ESI,[ESP + 0x48]                ; 00425558
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042555c
    LEA EDI,[ESP + 0x3c]                ; 00425560
    LEA EDX,[ESP + 0x3c]                ; 00425564
    FLD float ptr [EAX + 0x4]           ; 00425568
    FLD float ptr [EAX + 0x8]           ; 0042556b
    FLD float ptr [EAX]                 ; 0042556e
    LEA EAX,[ESP + 0x54]                ; 00425570
    FADD float ptr [EBX]                ; 00425574
    FXCH ST2                            ; 00425576
    FADD float ptr [EBX + 0x4]          ; 00425578
    FXCH                                ; 0042557b
    FADD float ptr [EBX + 0x8]          ; 0042557d
    FXCH ST2                            ; 00425580
    FSTP float ptr [ESP + 0x48]         ; 00425582
    FSTP float ptr [ESP + 0x4c]         ; 00425586
    FSTP float ptr [ESP + 0x50]         ; 0042558a
    MOVSD ES:EDI,ESI                    ; 0042558e
    MOVSD ES:EDI,ESI                    ; 0042558f
    MOVSD ES:EDI,ESI                    ; 00425590
    CMP EAX,EDX                         ; 00425591
    JZ 0x004255ad                       ; 00425593
        ;   XREF to: 004255ad (CONDITIONAL_JUMP)  ; LAB_004255ad
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00425595
    MOV dword ptr [ESP + 0x54],EAX      ; 00425599
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042559d
    MOV dword ptr [ESP + 0x58],EAX      ; 004255a1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004255a5
    MOV dword ptr [ESP + 0x5c],EAX      ; 004255a9
    LEA EAX,[ESP + 0x54]                ; 004255ad
        ;   Label: LAB_004255ad
    PUSH EAX                            ; 004255b1
    MOV EAX,[0x00622c18]                ; 004255b2 | g_CDemonSetPtr
    PUSH EAX                            ; 004255b7 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005557a0      ; 004255b8
        ;   XREF to: 005557a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005557a0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004255bd
    PUSH 0xffff                         ; 004255c0
    MOV EDX,dword ptr [0x00612560]      ; 004255c5 | DAT_00612560
    PUSH EDX                            ; 004255cb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004255cc
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004255d1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004255d4
    IMUL EAX,dword ptr [EAX + 0x4],0x17c ; 004255d8
    MOV ESI,dword ptr [ESP + 0x64]      ; 004255df
    PUSH 0x2e7                          ; 004255e3
    ADD EAX,ESI                         ; 004255e8
    PUSH 0x0                            ; 004255ea
    PUSH EAX                            ; 004255ec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004255ed
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004255f2
    MOV EDI,dword ptr [0x00612560]      ; 004255f5 | DAT_00612560
    PUSH EDI                            ; 004255fb | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004255fc
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00425601
    ADD dword ptr [ESP + 0x70],0x40     ; 00425604
    MOV EAX,dword ptr [ESP + 0x80]      ; 00425609
    INC EBP                             ; 00425610
    MOV EDX,dword ptr [EAX + 0xc26c]    ; 00425611
    ADD EBX,0x40                        ; 00425617
    CMP EBP,EDX                         ; 0042561a
    JL 0x00425534                       ; 0042561c
        ;   XREF to: 00425534 (CONDITIONAL_JUMP)  ; LAB_00425534
    PUSH 0x0                            ; 00425622
        ;   Label: LAB_00425622
    MOV ECX,dword ptr [0x00622c18]      ; 00425624 | g_CDemonSetPtr
    PUSH ECX                            ; 0042562a | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005557a0      ; 0042562b
        ;   XREF to: 005557a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005557a0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00425630
    MOV EBP,dword ptr [ESP + 0x80]      ; 00425633
        ;   Label: LAB_00425633
    PUSH EBP                            ; 0042563a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0042563b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00425640
    MOV EAX,dword ptr [ESP + 0x60]      ; 00425643
    POP EBX                             ; 00425647
    POP ESI                             ; 00425648
    POP EDI                             ; 00425649
    ADD ESP,0x6c                        ; 0042564a
    POP EBP                             ; 0042564d
    RET                                 ; 0042564e

