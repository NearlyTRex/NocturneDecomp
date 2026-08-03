; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_01b4d738
;   undefined4 g_CGame_01c775ec.goggles_active
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
;   core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f510
        ;   Label: core_vehicle.cpp_CVehicle_renderOpaque_FUN_0054f510
    PUSH ESI                            ; 0054f511
    PUSH EDI                            ; 0054f512
    PUSH EBP                            ; 0054f513
    SUB ESP,0x68                        ; 0054f514
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0054f517
    PUSH EDX                            ; 0054f51b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0054f51c
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0054f521
    PUSH 0x0                            ; 0054f524
    LEA EAX,[ESP + 0x1c]                ; 0054f526
    MOV EBX,dword ptr [ESP + 0x80]      ; 0054f52a
    PUSH EAX                            ; 0054f531
    MOV ECX,dword ptr [ESP + 0x84]      ; 0054f532
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0054f539
    PUSH ECX                            ; 0054f53f
    CALL dword ptr [EBX + 0x14]         ; 0054f540
    ADD ESP,0x8                         ; 0054f543
    PUSH EAX                            ; 0054f546
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0054f547
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0054f54c
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0054f54f
    MOV dword ptr [ESP + 0x60],EAX      ; 0054f553
    MOV dword ptr [EBX + 0x1064],EAX    ; 0054f557
    TEST EAX,EAX                        ; 0054f55d
    JZ 0x0054f5b0                       ; 0054f55f
        ;   XREF to: 0054f5b0 (CONDITIONAL_JUMP)  ; LAB_0054f5b0
    MOV EBX,dword ptr [0x005ae704]      ; 0054f561 | DAT_005ae704
    PUSH EBX                            ; 0054f567 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0054f568
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054f56d
    TEST EAX,EAX                        ; 0054f570
    JZ 0x0054f5da                       ; 0054f572
        ;   XREF to: 0054f5da (CONDITIONAL_JUMP)  ; LAB_0054f5da
    MOV EAX,[0x005b9354]                ; 0054f574 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x240],0x0     ; 0054f579 | g_CGame_01c775ec.goggles_active
    JNZ 0x0054f5da                      ; 0054f580
        ;   XREF to: 0054f5da (CONDITIONAL_JUMP)  ; LAB_0054f5da
    MOV EAX,ESP                         ; 0054f582
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0054f584
    PUSH EAX                            ; 0054f588
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054f589
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0054f590
    PUSH EAX                            ; 0054f596
    CALL dword ptr [EBX + 0x14]         ; 0054f597
    ADD ESP,0x8                         ; 0054f59a
    PUSH EAX                            ; 0054f59d
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 ; 0054f59e
        ;   XREF to: 0041dcc0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054f5a3
    LEA EAX,[EAX]                       ; 0054f5a6
    LEA EDX,[EDX]                       ; 0054f5ac
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0054f5b0
        ;   Label: LAB_0054f5b0
    PUSH ECX                            ; 0054f5b4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0054f5b5
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054f5ba
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f5bd
    CMP dword ptr [EAX + 0x1064],0x0    ; 0054f5c1
    JNZ 0x0054f6a7                      ; 0054f5c8
        ;   XREF to: 0054f6a7 (CONDITIONAL_JUMP)  ; LAB_0054f6a7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054f5ce
        ;   Label: LAB_0054f5ce
    ADD ESP,0x68                        ; 0054f5d2
    POP EBP                             ; 0054f5d5
    POP EDI                             ; 0054f5d6
    POP ESI                             ; 0054f5d7
    POP EBX                             ; 0054f5d8
    RET                                 ; 0054f5d9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f5da
        ;   Label: LAB_0054f5da
    PUSH -0x1                           ; 0054f5de
    ADD EAX,0x150                       ; 0054f5e0
    PUSH 0x0                            ; 0054f5e5
    PUSH EAX                            ; 0054f5e7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0054f5e8
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054f5ed
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f5f0
    MOV EBP,dword ptr [EAX + 0x930]     ; 0054f5f4
    XOR EDI,EDI                         ; 0054f5fa
    TEST EBP,EBP                        ; 0054f5fc
    JLE 0x0054f5b0                      ; 0054f5fe
        ;   XREF to: 0054f5b0 (CONDITIONAL_JUMP)  ; LAB_0054f5b0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054f600
    LEA EBP,[EAX + 0x948]               ; 0054f604
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0054f60a
    ADD EAX,0xac4                       ; 0054f60e
    ADD ESI,0xadc                       ; 0054f613
    ADD EBX,0xad0                       ; 0054f619
    MOV dword ptr [ESP + 0x64],EAX      ; 0054f61f
    PUSH EBX                            ; 0054f623
        ;   Label: LAB_0054f623
    PUSH ESI                            ; 0054f624
    MOV EDX,dword ptr [0x005ae704]      ; 0054f625 | DAT_005ae704
    PUSH EDX                            ; 0054f62b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0054f62c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0054f631
    PUSH 0x0                            ; 0054f634
    MOV ECX,dword ptr [ESP + 0x68]      ; 0054f636
    PUSH ECX                            ; 0054f63a
    MOV EAX,[0x005ae704]                ; 0054f63b | DAT_005ae704
    PUSH EAX                            ; 0054f640 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0054f641
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0054f646
    PUSH -0x1                           ; 0054f649
    PUSH 0x0                            ; 0054f64b
    PUSH EBP                            ; 0054f64d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0054f64e
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054f653
    MOV EDX,dword ptr [0x005ae704]      ; 0054f656 | DAT_005ae704
    PUSH EDX                            ; 0054f65c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0054f65d
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0054f662
    MOV ECX,dword ptr [0x005ae704]      ; 0054f665 | DAT_005ae704
    PUSH ECX                            ; 0054f66b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0054f66c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0054f671
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054f674
    ADD EAX,0x1b4                       ; 0054f678
    INC EDI                             ; 0054f67d
    MOV dword ptr [ESP + 0x64],EAX      ; 0054f67e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f682
    ADD EBX,0x1b4                       ; 0054f686
    ADD ESI,0x1b4                       ; 0054f68c
    MOV EDX,dword ptr [EAX + 0x930]     ; 0054f692
    ADD EBP,0x1b4                       ; 0054f698
    CMP EDI,EDX                         ; 0054f69e
    JL 0x0054f623                       ; 0054f6a0
        ;   XREF to: 0054f623 (CONDITIONAL_JUMP)  ; LAB_0054f623
    JMP 0x0054f5b0                      ; 0054f6a2
        ;   XREF to: 0054f5b0 (UNCONDITIONAL_JUMP)  ; LAB_0054f5b0
    MOV ESI,dword ptr [0x005ae704]      ; 0054f6a7 | DAT_005ae704
        ;   Label: LAB_0054f6a7
    PUSH ESI                            ; 0054f6ad | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0054f6ae
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054f6b3
    TEST EAX,EAX                        ; 0054f6b6
    JNZ 0x0054f5ce                      ; 0054f6b8
        ;   XREF to: 0054f5ce (CONDITIONAL_JUMP)  ; LAB_0054f5ce
    MOV EDI,0x3f91eb85                  ; 0054f6be
    MOV EAX,0x40c00000                  ; 0054f6c3
    MOV EBP,0xbe27ef9e                  ; 0054f6c8
    MOV dword ptr [ESP + 0x50],EAX      ; 0054f6cd
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054f6d1
    LEA EAX,[ESP + 0x48]                ; 0054f6d5
    MOV EDX,0xbf91eb85                  ; 0054f6d9
    PUSH EAX                            ; 0054f6de
    LEA EAX,[ESP + 0x34]                ; 0054f6df
    MOV ESI,dword ptr [ESP + 0x80]      ; 0054f6e3
    PUSH EAX                            ; 0054f6ea
    MOV dword ptr [ESP + 0x50],EDI      ; 0054f6eb
    MOV dword ptr [ESP + 0x54],EBP      ; 0054f6ef
    PUSH ESI                            ; 0054f6f3
    MOV dword ptr [ESP + 0x60],EDX      ; 0054f6f4
    MOV dword ptr [ESP + 0x64],EBP      ; 0054f6f8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054f6fc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054f701
    PUSH 0x41200000                     ; 0054f704
    LEA EAX,[ESI + 0x30]                ; 0054f709
    PUSH 0x42600000                     ; 0054f70c
    PUSH EAX                            ; 0054f711
    LEA EAX,[ESP + 0x3c]                ; 0054f712
    PUSH EAX                            ; 0054f716
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 ; 0054f717
        ;   XREF to: 00451b70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00451b70(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 0054f71c
    LEA EAX,[ESP + 0x54]                ; 0054f71f
    PUSH EAX                            ; 0054f723
    LEA EAX,[ESP + 0x40]                ; 0054f724
    PUSH EAX                            ; 0054f728
    PUSH ESI                            ; 0054f729
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054f72a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 0054f72f
    LEA EAX,[ESP + 0x3c]                ; 0054f731
    ADD ESP,0xc                         ; 0054f735
    CMP EAX,EBX                         ; 0054f738
    JZ 0x0054f750                       ; 0054f73a
        ;   XREF to: 0054f750 (CONDITIONAL_JUMP)  ; LAB_0054f750
    MOV EAX,dword ptr [EBX]             ; 0054f73c
    MOV dword ptr [ESP + 0x30],EAX      ; 0054f73e
    MOV EAX,dword ptr [EBX + 0x4]       ; 0054f742
    MOV dword ptr [ESP + 0x34],EAX      ; 0054f745
    MOV EAX,dword ptr [EBX + 0x8]       ; 0054f749
    MOV dword ptr [ESP + 0x38],EAX      ; 0054f74c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f750
        ;   Label: LAB_0054f750
    PUSH 0x41200000                     ; 0054f754
    ADD EAX,0x30                        ; 0054f759
    PUSH 0x42600000                     ; 0054f75c
    PUSH EAX                            ; 0054f761
    LEA EAX,[ESP + 0x3c]                ; 0054f762
    PUSH EAX                            ; 0054f766
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 ; 0054f767
        ;   XREF to: 00451b70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00451b70(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 0054f76c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054f76f
    ADD ESP,0x68                        ; 0054f773
    POP EBP                             ; 0054f776
    POP EDI                             ; 0054f777
    POP ESI                             ; 0054f778
    POP EBX                             ; 0054f779
    RET                                 ; 0054f77a

