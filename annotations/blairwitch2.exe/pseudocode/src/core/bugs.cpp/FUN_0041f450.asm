; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bugs_cpp_FUN_0041f450(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_set.cpp_FUN_005344f0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0041f450
        ;   Label: core_bugs.cpp_FUN_0041f450
    SUB ESP,0x6c                        ; 0041f451
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041f454
    CMP dword ptr [EAX + 0x2568],0x0    ; 0041f458
    JZ 0x0041f468                       ; 0041f45f
        ;   XREF to: 0041f468 (CONDITIONAL_JUMP)  ; LAB_0041f468
    XOR EAX,EAX                         ; 0041f461
        ;   Label: LAB_0041f461
    ADD ESP,0x6c                        ; 0041f463
    POP EBP                             ; 0041f466
    RET                                 ; 0041f467
    MOV ECX,dword ptr [0x0060b280]      ; 0041f468 | DAT_0060b280
        ;   Label: LAB_0041f468
    PUSH ECX                            ; 0041f46e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0041f46f
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041f474
    TEST EAX,EAX                        ; 0041f477
    JNZ 0x0041f461                      ; 0041f479
        ;   XREF to: 0041f461 (CONDITIONAL_JUMP)  ; LAB_0041f461
    PUSH EDI                            ; 0041f47b
    PUSH ESI                            ; 0041f47c
    PUSH EBX                            ; 0041f47d
    MOV EBX,dword ptr [ESP + 0x80]      ; 0041f47e
    PUSH EBX                            ; 0041f485
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0041f486
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041f48b
    PUSH 0x0                            ; 0041f48e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041f490
    PUSH EBX                            ; 0041f496
    LEA ESI,[ESP + 0x14]                ; 0041f497
    LEA EDI,[ESP + 0x2c]                ; 0041f49b
    CALL dword ptr [EAX + 0x24]         ; 0041f49f
    MOV ECX,0x6                         ; 0041f4a2
    ADD ESP,0x4                         ; 0041f4a7
    LEA EAX,[ESP + 0x28]                ; 0041f4aa
    LEA ESI,[ESP + 0x10]                ; 0041f4ae
    PUSH EAX                            ; 0041f4b2
    MOVSD.REP ES:EDI,ESI                ; 0041f4b3
    CALL core_box.cpp_FUN_0041a840      ; 0041f4b5
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0041f4ba
    MOV dword ptr [ESP + 0x60],EAX      ; 0041f4bd
    TEST EAX,EAX                        ; 0041f4c1
    JZ 0x0041f603                       ; 0041f4c3
        ;   XREF to: 0041f603 (CONDITIONAL_JUMP)  ; LAB_0041f603
    MOV EDI,dword ptr [EBX + 0x10afc]   ; 0041f4c9
    XOR EBP,EBP                         ; 0041f4cf
    TEST EDI,EDI                        ; 0041f4d1
    JLE 0x0041f5f2                      ; 0041f4d3
        ;   XREF to: 0041f5f2 (CONDITIONAL_JUMP)  ; LAB_0041f5f2
    LEA EAX,[EBX + 0x16f04]             ; 0041f4d9
    MOV dword ptr [ESP + 0x64],EAX      ; 0041f4df
    LEA EAX,[EBX + 0x10b00]             ; 0041f4e3
    MOV dword ptr [ESP + 0x68],EAX      ; 0041f4e9
    LEA EAX,[EBX + 0x20]                ; 0041f4ed
    MOV dword ptr [ESP + 0x74],EAX      ; 0041f4f0
    LEA EAX,[EBX + 0x10b14]             ; 0041f4f4
    MOV dword ptr [ESP + 0x70],EAX      ; 0041f4fa
    ADD EBX,0x10b08                     ; 0041f4fe
    MOV EDX,dword ptr [ESP + 0x68]      ; 0041f504
        ;   Label: LAB_0041f504
    MOV ESI,dword ptr [ESP + 0x70]      ; 0041f508
    MOV EAX,EBP                         ; 0041f50c
    PUSH EBX                            ; 0041f50e
    SHL EAX,0x6                         ; 0041f50f
    PUSH ESI                            ; 0041f512
    MOV EDI,dword ptr [0x0060b280]      ; 0041f513 | DAT_0060b280
    ADD EDX,EAX                         ; 0041f519
    PUSH EDI                            ; 0041f51b | DAT_01ba5c50
    MOV dword ptr [ESP + 0x78],EDX      ; 0041f51c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0041f520
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0041f525
    LEA ESI,[ESP + 0x48]                ; 0041f528
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041f52c
    LEA EDI,[ESP + 0x3c]                ; 0041f530
    LEA EDX,[ESP + 0x3c]                ; 0041f534
    FLD float ptr [EAX + 0x4]           ; 0041f538
    FLD float ptr [EAX + 0x8]           ; 0041f53b
    FLD float ptr [EAX]                 ; 0041f53e
    LEA EAX,[ESP + 0x54]                ; 0041f540
    FADD float ptr [EBX]                ; 0041f544
    FXCH ST2                            ; 0041f546
    FADD float ptr [EBX + 0x4]          ; 0041f548
    FXCH                                ; 0041f54b
    FADD float ptr [EBX + 0x8]          ; 0041f54d
    FXCH ST2                            ; 0041f550
    FSTP float ptr [ESP + 0x48]         ; 0041f552
    FSTP float ptr [ESP + 0x4c]         ; 0041f556
    FSTP float ptr [ESP + 0x50]         ; 0041f55a
    MOVSD ES:EDI,ESI                    ; 0041f55e
    MOVSD ES:EDI,ESI                    ; 0041f55f
    MOVSD ES:EDI,ESI                    ; 0041f560
    CMP EAX,EDX                         ; 0041f561
    JZ 0x0041f57d                       ; 0041f563
        ;   XREF to: 0041f57d (CONDITIONAL_JUMP)  ; LAB_0041f57d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041f565
    MOV dword ptr [ESP + 0x54],EAX      ; 0041f569
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041f56d
    MOV dword ptr [ESP + 0x58],EAX      ; 0041f571
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041f575
    MOV dword ptr [ESP + 0x5c],EAX      ; 0041f579
    LEA EAX,[ESP + 0x54]                ; 0041f57d
        ;   Label: LAB_0041f57d
    PUSH EAX                            ; 0041f581
    MOV EAX,[0x0061b5a8]                ; 0041f582 | g_CDemonSetPtr
    PUSH EAX                            ; 0041f587 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005344f0      ; 0041f588
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344f0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0041f58d
    PUSH 0xffff                         ; 0041f590
    MOV EDX,dword ptr [0x0060b280]      ; 0041f595 | DAT_0060b280
    PUSH EDX                            ; 0041f59b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0041f59c
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0041f5a1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041f5a4
    IMUL EAX,dword ptr [EAX + 0x4],0x17c ; 0041f5a8
    MOV ESI,dword ptr [ESP + 0x64]      ; 0041f5af
    PUSH 0x2e7                          ; 0041f5b3
    ADD EAX,ESI                         ; 0041f5b8
    PUSH 0x0                            ; 0041f5ba
    PUSH EAX                            ; 0041f5bc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0041f5bd
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041f5c2
    MOV EDI,dword ptr [0x0060b280]      ; 0041f5c5 | DAT_0060b280
    PUSH EDI                            ; 0041f5cb | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0041f5cc
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0041f5d1
    ADD dword ptr [ESP + 0x70],0x40     ; 0041f5d4
    MOV EAX,dword ptr [ESP + 0x80]      ; 0041f5d9
    INC EBP                             ; 0041f5e0
    MOV EDX,dword ptr [EAX + 0x10afc]   ; 0041f5e1
    ADD EBX,0x40                        ; 0041f5e7
    CMP EBP,EDX                         ; 0041f5ea
    JL 0x0041f504                       ; 0041f5ec
        ;   XREF to: 0041f504 (CONDITIONAL_JUMP)  ; LAB_0041f504
    PUSH 0x0                            ; 0041f5f2
        ;   Label: LAB_0041f5f2
    MOV ECX,dword ptr [0x0061b5a8]      ; 0041f5f4 | g_CDemonSetPtr
    PUSH ECX                            ; 0041f5fa | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005344f0      ; 0041f5fb
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344f0(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0041f600
    MOV EBP,dword ptr [ESP + 0x80]      ; 0041f603
        ;   Label: LAB_0041f603
    PUSH EBP                            ; 0041f60a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0041f60b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041f610
    MOV EAX,dword ptr [ESP + 0x60]      ; 0041f613
    POP EBX                             ; 0041f617
    POP ESI                             ; 0041f618
    POP EDI                             ; 0041f619
    ADD ESP,0x6c                        ; 0041f61a
    POP EBP                             ; 0041f61d
    RET                                 ; 0041f61e

