; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart * this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_0326ef00
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_bodypart.cpp_FUN_00419340
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004194b0
        ;   Label: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
    SUB ESP,0x1c                        ; 004194b1
    MOV EBP,dword ptr [ESP + 0x24]      ; 004194b4
    CMP dword ptr [EBP + 0x158],0x1     ; 004194b8
    JLE 0x004194e4                      ; 004194bf | LAB_004194e4
        ;   XREF to: 004194e4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xf2c],0x0     ; 004194c1
    JZ 0x004194dd                       ; 004194c8 | LAB_004194dd
        ;   XREF to: 004194dd (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x74c],0x0     ; 004194ca
    JLE 0x004194dd                      ; 004194d1 | LAB_004194dd
        ;   XREF to: 004194dd (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004194d3
    ADD ESP,0x1c                        ; 004194d8
    POP EBP                             ; 004194db
    RET                                 ; 004194dc
    XOR EAX,EAX                         ; 004194dd
        ;   Label: LAB_004194dd
    ADD ESP,0x1c                        ; 004194df
    POP EBP                             ; 004194e2
    RET                                 ; 004194e3
    PUSH EDI                            ; 004194e4
        ;   Label: LAB_004194e4
    PUSH ESI                            ; 004194e5
    PUSH EBX                            ; 004194e6
    MOV EAX,[0x006810c8]                ; 004194e7 | CDemonSet * g_CDemonSetPtr
    MOV EBX,dword ptr [EBP + 0xcb0]     ; 004194ec
    PUSH EBP                            ; 004194f2
    MOV dword ptr [EAX + 0x15ac88],EBX  ; 004194f3 | DAT_0326ef00
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004194f9 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004194fe
    LEA EAX,[ESP + 0xc]                 ; 00419501
    PUSH EAX                            ; 00419505
    MOV EBX,dword ptr [EBP + 0x154]     ; 00419506
    PUSH EBP                            ; 0041950c
    CALL dword ptr [EBX + 0x14]         ; 0041950d
    ADD ESP,0x8                         ; 00419510
    PUSH EAX                            ; 00419513
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00419514 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00419519
    MOV dword ptr [EBP + 0xf2c],EAX     ; 0041951c
    TEST EAX,EAX                        ; 00419522
    JZ 0x004195c0                       ; 00419524 | LAB_004195c0
        ;   XREF to: 004195c0 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xcb4],0x0     ; 0041952a
    JNZ 0x004195ec                      ; 00419531 | LAB_004195ec
        ;   XREF to: 004195ec (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 00419537
        ;   Label: LAB_00419537
    PUSH EBP                            ; 00419539
    CALL core_bodypart.cpp_FUN_00419340 ; 0041953a | undefined core_bodypart.cpp_FUN_00419340()
        ;   XREF to: 00419340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041953f
    MOV EDI,dword ptr [EBP + 0x28c]     ; 00419542
        ;   Label: LAB_00419542
    XOR EBX,EBX                         ; 00419548
    TEST EDI,EDI                        ; 0041954a
    JLE 0x004195c0                      ; 0041954c | LAB_004195c0
        ;   XREF to: 004195c0 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x290]               ; 0041954e
    LEA ESI,[EBP + 0x2a8]               ; 00419554
    MOV dword ptr [ESP + 0x24],EAX      ; 0041955a
    LEA EDI,[EBP + 0x29c]               ; 0041955e
    IMUL EAX,EBX,0x194                  ; 00419564
        ;   Label: LAB_00419564
    ADD EAX,dword ptr [ESP + 0x24]      ; 0041956a
    PUSH EAX                            ; 0041956e
    PUSH EDI                            ; 0041956f
    MOV EAX,[0x006703ec]                ; 00419570 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 00419575 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00419576 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041957b
    PUSH -0x1                           ; 0041957e
    PUSH 0x0                            ; 00419580
    PUSH ESI                            ; 00419582
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00419583 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00419588
    MOV EDX,dword ptr [0x006703ec]      ; 0041958b | CDemonRenderer * g_CDemonRendererPtr
    INC EBX                             ; 00419591
    PUSH EDX                            ; 00419592 | CDemonRenderer g_CDemonRendererInstance
    ADD EDI,0x194                       ; 00419593
    ADD ESI,0x194                       ; 00419599
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0041959f | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x006703ec]      ; 004195c0 | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_004195c0
    PUSH EBX                            ; 004195c6 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004195c7 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x006703ec]      ; 004195ec | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_004195ec
    PUSH ESI                            ; 004195f2 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004195f3 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004195f8
    TEST EAX,EAX                        ; 004195fb
    JNZ 0x00419537                      ; 004195fd | LAB_00419537
        ;   XREF to: 00419537 (CONDITIONAL_JUMP)
    JMP 0x00419542                      ; 00419603 | LAB_00419542
        ;   XREF to: 00419542 (UNCONDITIONAL_JUMP)

