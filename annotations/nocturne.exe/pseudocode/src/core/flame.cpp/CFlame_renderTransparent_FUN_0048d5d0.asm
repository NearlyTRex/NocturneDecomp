; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430 at 004164cd
;   core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043d120 at 0043d136
;   core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760 at 0048e77d
;   core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370 at 005504d1
;
; Referenced Globals:
;   double DOUBLE_0058157f = 5.22209901682860E-315
;   double DOUBLE_00581587 = 2
;   double DOUBLE_0058158f = 0.5
;   undefined4 DAT_0059d560
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b8de8
;   undefined4 DAT_005b8e00
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d5d0
        ;   Label: core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0
    PUSH EBP                            ; 0048d5d1
    SUB ESP,0x138                       ; 0048d5d2
    MOV EBP,dword ptr [ESP + 0x144]     ; 0048d5d8
    CMP dword ptr [EBP + 0x1ac],0x0     ; 0048d5df
    JNZ 0x0048d5fe                      ; 0048d5e6
        ;   XREF to: 0048d5fe (CONDITIONAL_JUMP)  ; LAB_0048d5fe
    MOV EAX,[0x005baf90]                ; 0048d5e8 | g_CDemonMission_PTR_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 0048d5ed | DAT_01cc9454
    JNZ 0x0048d5fe                      ; 0048d5f1
        ;   XREF to: 0048d5fe (CONDITIONAL_JUMP)  ; LAB_0048d5fe
    XOR EAX,EAX                         ; 0048d5f3
        ;   Label: LAB_0048d5f3
    ADD ESP,0x138                       ; 0048d5f5
    POP EBP                             ; 0048d5fb
    POP EBX                             ; 0048d5fc
    RET                                 ; 0048d5fd
    MOV EBX,dword ptr [0x005ae704]      ; 0048d5fe | DAT_005ae704
        ;   Label: LAB_0048d5fe
    PUSH EBX                            ; 0048d604 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0048d605
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0048d60a
    TEST EAX,EAX                        ; 0048d60d
    JNZ 0x0048d5f3                      ; 0048d60f
        ;   XREF to: 0048d5f3 (CONDITIONAL_JUMP)  ; LAB_0048d5f3
    PUSH EDI                            ; 0048d611
    PUSH ESI                            ; 0048d612
    PUSH EBP                            ; 0048d613
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0048d614
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    MOV ESI,dword ptr [EBP + 0x290]     ; 0048d619
    ADD ESP,0x4                         ; 0048d61f
    TEST ESI,ESI                        ; 0048d622
    JZ 0x0048d649                       ; 0048d624
        ;   XREF to: 0048d649 (CONDITIONAL_JUMP)  ; LAB_0048d649
    PUSH 0x0                            ; 0048d626
    LEA EAX,[ESP + 0x5c]                ; 0048d628
    PUSH EAX                            ; 0048d62c
    MOV EDX,dword ptr [EBP + 0x14c]     ; 0048d62d
    PUSH EBP                            ; 0048d633
    CALL dword ptr [EDX + 0x14]         ; 0048d634
    ADD ESP,0x8                         ; 0048d637
    PUSH EAX                            ; 0048d63a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0048d63b
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0048d640
    MOV dword ptr [EBP + 0x288],EAX     ; 0048d643
    CMP dword ptr [EBP + 0x288],0x0     ; 0048d649
        ;   Label: LAB_0048d649
    JZ 0x0048d690                       ; 0048d650
        ;   XREF to: 0048d690 (CONDITIONAL_JUMP)  ; LAB_0048d690
    LEA EAX,[EBP + 0x150]               ; 0048d652
    FLD float ptr [EAX + 0x4]           ; 0048d658
    FMUL ST0                            ; 0048d65b
    FLD float ptr [EAX]                 ; 0048d65d
    FMUL ST0                            ; 0048d65f
    FADDP                               ; 0048d661
    FLD float ptr [EAX + 0x8]           ; 0048d663
    FMUL ST0                            ; 0048d666
    FADDP                               ; 0048d668
    FSQRT                               ; 0048d66a
    FMUL float ptr [EBP + 0x1a4]        ; 0048d66c
    FLD1                                ; 0048d672
    FCOMPP                              ; 0048d674
    FNSTSW AX                           ; 0048d676
    SAHF                                ; 0048d678
    JNC 0x0048d690                      ; 0048d679
        ;   XREF to: 0048d690 (CONDITIONAL_JUMP)  ; LAB_0048d690
    LEA EAX,[EBP + 0x160]               ; 0048d67b
    PUSH EAX                            ; 0048d681
    MOV EAX,[0x005be368]                ; 0048d682 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0048d687 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20 ; 0048d688
        ;   XREF to: 0050aa20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0048d68d
    CMP dword ptr [EBP + 0x288],0x0     ; 0048d690
        ;   Label: LAB_0048d690
    JZ 0x0048db01                       ; 0048d697
        ;   XREF to: 0048db01 (CONDITIONAL_JUMP)  ; LAB_0048db01
    CMP dword ptr [EBP + 0x1a0],0x3     ; 0048d69d
    JZ 0x0048db01                       ; 0048d6a4
        ;   XREF to: 0048db01 (CONDITIONAL_JUMP)  ; LAB_0048db01
    MOV EBX,dword ptr [0x005ae704]      ; 0048d6aa | DAT_005ae704
    PUSH EBX                            ; 0048d6b0 | DAT_01b4d738
    LEA ESI,[ESP + 0x11c]               ; 0048d6b1
    LEA EDI,[ESP + 0xa4]                ; 0048d6b8
    CALL engine_drender.cpp_FUN_00460d90 ; 0048d6bf
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    LEA ESI,[ESP + 0x11c]               ; 0048d6c4
    ADD ESP,0x4                         ; 0048d6cb
    MOVSD ES:EDI,ESI                    ; 0048d6ce
    MOVSD ES:EDI,ESI                    ; 0048d6cf
    MOVSD ES:EDI,ESI                    ; 0048d6d0
    XOR ESI,ESI                         ; 0048d6d1
    PUSH ESI                            ; 0048d6d3
    LEA EAX,[ESP + 0xa4]                ; 0048d6d4
    PUSH EAX                            ; 0048d6db
    MOV EAX,[0x005ae704]                ; 0048d6dc | DAT_005ae704
    PUSH EAX                            ; 0048d6e1 | DAT_01b4d738
    MOV dword ptr [ESP + 0xac],ESI      ; 0048d6e2
    MOV dword ptr [ESP + 0xb0],ESI      ; 0048d6e9
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 0048d6f0
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EDX,0x1                         ; 0048d6f5
    ADD ESP,0xc                         ; 0048d6fa
    MOV EDI,dword ptr [0x005ae704]      ; 0048d6fd | DAT_005ae704
    MOV dword ptr [ESP + 0x134],EDX     ; 0048d703
    MOV dword ptr [ESP + 0x88],ESI      ; 0048d70a
    MOV dword ptr [ESP + 0x8c],ESI      ; 0048d711
    MOV dword ptr [ESP + 0x90],ESI      ; 0048d718
    PUSH EDI                            ; 0048d71f | DAT_01b4d738
    LEA ESI,[ESP + 0x128]               ; 0048d720
    LEA EDI,[ESP + 0xa4]                ; 0048d727
    CALL engine_drender.cpp_FUN_00460d90 ; 0048d72e
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    LEA ESI,[ESP + 0x128]               ; 0048d733
    ADD ESP,0x4                         ; 0048d73a
    MOVSD ES:EDI,ESI                    ; 0048d73d
    MOVSD ES:EDI,ESI                    ; 0048d73e
    MOVSD ES:EDI,ESI                    ; 0048d73f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048d740
    CMP EAX,0x2000                      ; 0048d747
    JLE 0x0048dec9                      ; 0048d74c
        ;   XREF to: 0048dec9 (CONDITIONAL_JUMP)  ; LAB_0048dec9
    MOV dword ptr [ESP + 0x134],0x3     ; 0048d752
        ;   Label: LAB_0048d752
    MOV EBX,dword ptr [ESP + 0x134]     ; 0048d75d
        ;   Label: LAB_0048d75d
    XOR ESI,ESI                         ; 0048d764
    TEST EBX,EBX                        ; 0048d766
    JLE 0x0048daf2                      ; 0048d768
        ;   XREF to: 0048daf2 (CONDITIONAL_JUMP)  ; LAB_0048daf2
    LEA EDI,[EBP + 0x20]                ; 0048d76e
    PUSH 0x0                            ; 0048d771
        ;   Label: LAB_0048d771
    LEA EAX,[ESP + 0x8c]                ; 0048d773
    PUSH EAX                            ; 0048d77a
    MOV EAX,[0x005ae704]                ; 0048d77b | DAT_005ae704
    PUSH EAX                            ; 0048d780 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 0048d781
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLD float ptr [EBP + 0x150]         ; 0048d786
    FMUL float ptr [0x0058157f]         ; 0048d78c | DOUBLE_0058157f
    LEA EBX,[ESP + 0xe8]                ; 0048d792
    ADD ESP,0xc                         ; 0048d799
    XOR EDX,EDX                         ; 0048d79c
    LEA EAX,[ESP + 0x10c]               ; 0048d79e
    MOV dword ptr [ESP + 0x110],EDX     ; 0048d7a5
    MOV dword ptr [ESP + 0x114],EDX     ; 0048d7ac
    FSTP float ptr [ESP + 0x10c]        ; 0048d7b3
    MOV EDX,dword ptr [0x005ae704]      ; 0048d7ba | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048d7c0
    FMUL float ptr [0x0059d560]         ; 0048d7c2 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048d7c8
    FLD float ptr [EAX + 0x4]           ; 0048d7ca
    FMUL float ptr [0x0059d560]         ; 0048d7cd | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048d7d3
    FLD float ptr [EAX + 0x8]           ; 0048d7d6
    FMUL float ptr [0x0059d560]         ; 0048d7d9 | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048d7df
    LEA EAX,[ESP + 0xdc]                ; 0048d7e2
    PUSH EAX                            ; 0048d7e9
    MOV EAX,dword ptr [EDX]             ; 0048d7ea | DAT_01b4d738
    PUSH EAX                            ; 0048d7ec
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048d7ed
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048d7f2
    MOV EAX,dword ptr [EBP + 0x154]     ; 0048d7f5
    LEA EBX,[ESP + 0xf4]                ; 0048d7fb
    MOV dword ptr [ESP + 0x110],EAX     ; 0048d802
    LEA EAX,[ESP + 0x10c]               ; 0048d809
    MOV EDX,dword ptr [0x005ae704]      ; 0048d810 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048d816
    FMUL float ptr [0x0059d560]         ; 0048d818 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048d81e
    FLD float ptr [EAX + 0x4]           ; 0048d820
    FMUL float ptr [0x0059d560]         ; 0048d823 | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048d829
    FLD float ptr [EAX + 0x8]           ; 0048d82c
    FMUL float ptr [0x0059d560]         ; 0048d82f | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048d835
    LEA EAX,[ESP + 0xf4]                ; 0048d838
    PUSH EAX                            ; 0048d83f
    MOV EAX,dword ptr [EDX]             ; 0048d840 | DAT_01b4d738
    ADD EAX,0x30                        ; 0048d842
    PUSH EAX                            ; 0048d845
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048d846
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048d84b
    MOV AH,byte ptr [ESP + 0x10f]       ; 0048d84e
    XOR AH,0x80                         ; 0048d855
    LEA EBX,[ESP + 0x7c]                ; 0048d858
    MOV byte ptr [ESP + 0x10f],AH       ; 0048d85c
    LEA EAX,[ESP + 0x10c]               ; 0048d863
    MOV EDX,dword ptr [0x005ae704]      ; 0048d86a | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048d870
    FMUL float ptr [0x0059d560]         ; 0048d872 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048d878
    FLD float ptr [EAX + 0x4]           ; 0048d87a
    FMUL float ptr [0x0059d560]         ; 0048d87d | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048d883
    FLD float ptr [EAX + 0x8]           ; 0048d886
    FMUL float ptr [0x0059d560]         ; 0048d889 | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048d88f
    LEA EAX,[ESP + 0x7c]                ; 0048d892
    PUSH EAX                            ; 0048d896
    MOV EAX,dword ptr [EDX]             ; 0048d897 | DAT_01b4d738
    ADD EAX,0x60                        ; 0048d899
    PUSH EAX                            ; 0048d89c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048d89d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048d8a2
    XOR EBX,EBX                         ; 0048d8a5
    LEA EAX,[ESP + 0x10c]               ; 0048d8a7
    MOV dword ptr [ESP + 0x110],EBX     ; 0048d8ae
    LEA EBX,[ESP + 0x100]               ; 0048d8b5
    MOV EDX,dword ptr [0x005ae704]      ; 0048d8bc | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048d8c2
    FMUL float ptr [0x0059d560]         ; 0048d8c4 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048d8ca
    FLD float ptr [EAX + 0x4]           ; 0048d8cc
    FMUL float ptr [0x0059d560]         ; 0048d8cf | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048d8d5
    FLD float ptr [EAX + 0x8]           ; 0048d8d8
    FMUL float ptr [0x0059d560]         ; 0048d8db | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048d8e1
    LEA EAX,[ESP + 0x100]               ; 0048d8e4
    PUSH EAX                            ; 0048d8eb
    MOV EAX,dword ptr [EDX]             ; 0048d8ec | DAT_01b4d738
    ADD EAX,0x90                        ; 0048d8ee
    PUSH EAX                            ; 0048d8f3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048d8f4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048d8f9
    PUSH 0x0                            ; 0048d8fc
    PUSH EDI                            ; 0048d8fe
    MOV EAX,[0x007f7370]                ; 0048d8ff | DAT_007f7370
    PUSH EAX                            ; 0048d904
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 0048d905
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDX,0xffff                      ; 0048d90a
    ADD ESP,0xc                         ; 0048d90f
    MOV ECX,dword ptr [0x01c038f4]      ; 0048d912 | DAT_01c038f4
    MOV EBX,dword ptr [ESP + 0x134]     ; 0048d918
    SUB EDX,ECX                         ; 0048d91f
    CMP EBX,0x3                         ; 0048d921
    JNZ 0x0048d931                      ; 0048d924
        ;   XREF to: 0048d931 (CONDITIONAL_JUMP)  ; LAB_0048d931
    MOV EAX,EDX                         ; 0048d926
    SAR EDX,0x1f                        ; 0048d928
    SUB EAX,EDX                         ; 0048d92b
    SAR EAX,0x1                         ; 0048d92d
    MOV EDX,EAX                         ; 0048d92f
    CMP dword ptr [EBP + 0x1a0],0x4     ; 0048d931
        ;   Label: LAB_0048d931
    JNZ 0x0048d949                      ; 0048d938
        ;   XREF to: 0048d949 (CONDITIONAL_JUMP)  ; LAB_0048d949
    MOV EAX,EDX                         ; 0048d93a
    SAR EDX,0x1f                        ; 0048d93c
    SHL EDX,0x2                         ; 0048d93f
    SBB EAX,EDX                         ; 0048d942
    SAR EAX,0x2                         ; 0048d944
    MOV EDX,EAX                         ; 0048d947
    CMP dword ptr [EBP + 0x1a0],0x1     ; 0048d949
        ;   Label: LAB_0048d949
    JNZ 0x0048d95d                      ; 0048d950
        ;   XREF to: 0048d95d (CONDITIONAL_JUMP)  ; LAB_0048d95d
    MOV EAX,EDX                         ; 0048d952
    SAR EDX,0x1f                        ; 0048d954
    SUB EAX,EDX                         ; 0048d957
    SAR EAX,0x1                         ; 0048d959
    MOV EDX,EAX                         ; 0048d95b
    MOV EBX,0xffff                      ; 0048d95d
        ;   Label: LAB_0048d95d
    MOV dword ptr [0x005c5070],EDX      ; 0048d962 | DAT_005c5070
    MOV dword ptr [0x005c50a0],EDX      ; 0048d968 | DAT_005c50a0
    MOV dword ptr [0x005c50d0],EDX      ; 0048d96e | DAT_005c50d0
    MOV dword ptr [0x005c5034],EBX      ; 0048d974 | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 0048d97a | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 0048d980 | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 0048d986 | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 0048d98c | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 0048d992 | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 0048d998 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 0048d99e | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 0048d9a4 | DAT_005c509c
    MOV dword ptr [0x005c50c4],EBX      ; 0048d9aa | DAT_005c50c4
    MOV dword ptr [0x005c50c8],EBX      ; 0048d9b0 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 0048d9b6 | DAT_005c50cc
    MOV EBX,dword ptr [EBP + 0x28c]     ; 0048d9bc
    MOV dword ptr [0x005c5040],EDX      ; 0048d9c2 | DAT_005c5040
    TEST EBX,EBX                        ; 0048d9c8
    JNZ 0x0048ded9                      ; 0048d9ca
        ;   XREF to: 0048ded9 (CONDITIONAL_JUMP)  ; LAB_0048ded9
    MOV EDX,0xf80000                    ; 0048d9d0
    MOV EAX,0x80000                     ; 0048d9d5
    MOV dword ptr [0x005c5030],EDX      ; 0048d9da | DAT_005c5030
    MOV [0x005c505c],EAX                ; 0048d9e0 | DAT_005c505c
    MOV [0x005c5060],EAX                ; 0048d9e5 | DAT_005c5060
    MOV dword ptr [0x005c508c],EDX      ; 0048d9ea | DAT_005c508c
    MOV [0x005c5090],EAX                ; 0048d9f0 | DAT_005c5090
    MOV dword ptr [0x005c50bc],EDX      ; 0048d9f5 | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EDX      ; 0048d9fb | DAT_005c50c0
    MOV [0x005c502c],EAX                ; 0048da01 | DAT_005c502c
        ;   Label: LAB_0048da01
    FLD float ptr [EBP + 0x15c]         ; 0048da06
    CALL crt_math.c_round_FUN_00563a30  ; 0048da0c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x13c]       ; 0048da11
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0048da18
    MOV EDX,EAX                         ; 0048da1f
    MOV ECX,0x8                         ; 0048da21
    SAR EDX,0x1f                        ; 0048da26
    IDIV ECX                            ; 0048da29
    IMUL EAX,dword ptr [EBP + 0x1a0],0xc0 ; 0048da2b
    MOV ECX,0x5b8e00                    ; 0048da35 | DAT_005b8e00
    ADD ECX,EAX                         ; 0048da3a
    IMUL EAX,EDX,0x18                   ; 0048da3c
    ADD EAX,ECX                         ; 0048da3f
    PUSH EAX                            ; 0048da41
    MOV EBX,dword ptr [0x005ae704]      ; 0048da42 | DAT_005ae704
    PUSH EBX                            ; 0048da48 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0048da49
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0048da4e
    PUSH 0x1                            ; 0048da51
    MOV EAX,[0x005ae704]                ; 0048da53 | DAT_005ae704
    PUSH EAX                            ; 0048da58 | DAT_01b4d738
    MOV EBX,0x1                         ; 0048da59
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048da5e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x4                         ; 0048da63
    MOV EAX,0x2                         ; 0048da68
    ADD ESP,0x8                         ; 0048da6d
    XOR ECX,ECX                         ; 0048da70
    MOV dword ptr [ESP + 0xc],EDX       ; 0048da72
    MOV dword ptr [ESP + 0x1c],ECX      ; 0048da76
    MOV dword ptr [ESP + 0x18],ECX      ; 0048da7a
    MOV dword ptr [ESP + 0x14],ECX      ; 0048da7e
    MOV dword ptr [ESP + 0x10],ECX      ; 0048da82
    MOV dword ptr [ESP + 0x28],EAX      ; 0048da86
    LEA EAX,[ESP + 0x8]                 ; 0048da8a
    MOV dword ptr [ESP + 0x20],ECX      ; 0048da8e
    PUSH EAX                            ; 0048da92
    MOV ECX,dword ptr [0x005ae704]      ; 0048da93 | DAT_005ae704
    MOV EDX,0x3                         ; 0048da99
    PUSH ECX                            ; 0048da9e | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EBX      ; 0048da9f
    MOV dword ptr [ESP + 0x34],EDX      ; 0048daa3
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 0048daa7
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048daac
    PUSH 0x0                            ; 0048daaf
    MOV EBX,dword ptr [0x005ae704]      ; 0048dab1 | DAT_005ae704
    PUSH EBX                            ; 0048dab7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048dab8
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048dabd
    MOV EAX,[0x005ae704]                ; 0048dac0 | DAT_005ae704
    PUSH EAX                            ; 0048dac5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048dac6
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048dacb
    MOV EDX,dword ptr [ESP + 0x90]      ; 0048dace
    INC ESI                             ; 0048dad5
    ADD EDX,0x2aaa                      ; 0048dad6
    MOV ECX,dword ptr [ESP + 0x134]     ; 0048dadc
    MOV dword ptr [ESP + 0x90],EDX      ; 0048dae3
    CMP ESI,ECX                         ; 0048daea
    JL 0x0048d771                       ; 0048daec
        ;   XREF to: 0048d771 (CONDITIONAL_JUMP)  ; LAB_0048d771
    MOV EBX,dword ptr [0x005ae704]      ; 0048daf2 | DAT_005ae704
        ;   Label: LAB_0048daf2
    PUSH EBX                            ; 0048daf8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048daf9
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048dafe
    PUSH EBP                            ; 0048db01
        ;   Label: LAB_0048db01
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0048db02
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV ESI,dword ptr [EBP + 0x1a0]     ; 0048db07
    ADD ESP,0x4                         ; 0048db0d
    CMP ESI,0x1                         ; 0048db10
    JNZ 0x0048deb8                      ; 0048db13
        ;   XREF to: 0048deb8 (CONDITIONAL_JUMP)  ; LAB_0048deb8
    FLD float ptr [EBP + 0x154]         ; 0048db19
    FMUL double ptr [0x00581587]        ; 0048db1f | DOUBLE_00581587
    MOV EDI,dword ptr [EBP + 0x288]     ; 0048db25
    FSTP float ptr [ESP + 0x130]        ; 0048db2b
    TEST EDI,EDI                        ; 0048db32
    JZ 0x0048deb8                       ; 0048db34
        ;   XREF to: 0048deb8 (CONDITIONAL_JUMP)  ; LAB_0048deb8
    LEA EAX,[ESP + 0xb8]                ; 0048db3a
    PUSH EAX                            ; 0048db41
    MOV EAX,[0x005ae704]                ; 0048db42 | DAT_005ae704
    PUSH EAX                            ; 0048db47 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 0048db48
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    FLD float ptr [EBP + 0x154]         ; 0048db4d
    FMUL double ptr [0x0058158f]        ; 0048db53 | DOUBLE_0058158f
    ADD ESP,0x8                         ; 0048db59
    FSTP float ptr [ESP + 0x13c]        ; 0048db5c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0048db63
    MOV dword ptr [ESP + 0xc8],EAX      ; 0048db6a
    LEA EAX,[ESP + 0xc4]                ; 0048db71
    PUSH EAX                            ; 0048db78
    LEA EAX,[ESP + 0xbc]                ; 0048db79
    PUSH EAX                            ; 0048db80
    MOV EBX,dword ptr [0x005ae704]      ; 0048db81 | DAT_005ae704
    XOR EDX,EDX                         ; 0048db87
    PUSH EBX                            ; 0048db89 | DAT_01b4d738
    MOV dword ptr [ESP + 0xd0],EDX      ; 0048db8a
    MOV dword ptr [ESP + 0xd8],EDX      ; 0048db91
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048db98
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0048db9d
    PUSH 0x3f828f5c                     ; 0048dba0
    PUSH 0x3f7ae148                     ; 0048dba5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048dbaa
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x144],EAX     ; 0048dbaf
    FLD float ptr [ESP + 0x144]         ; 0048dbb6
    ADD ESP,0x8                         ; 0048dbbd
    FMUL float ptr [ESP + 0x130]        ; 0048dbc0
    XOR ESI,ESI                         ; 0048dbc7
    LEA EBX,[ESP + 0x70]                ; 0048dbc9
    FSTP float ptr [ESP + 0x94]         ; 0048dbcd
    MOV EAX,dword ptr [ESP + 0x94]      ; 0048dbd4
    MOV EDX,dword ptr [0x005ae704]      ; 0048dbdb | DAT_005ae704
    MOV dword ptr [ESP + 0x98],EAX      ; 0048dbe1
    LEA EAX,[ESP + 0x94]                ; 0048dbe8
    MOV dword ptr [ESP + 0x9c],ESI      ; 0048dbef
    FLD float ptr [EAX]                 ; 0048dbf6
    FMUL float ptr [0x0059d560]         ; 0048dbf8 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048dbfe
    FLD float ptr [EAX + 0x4]           ; 0048dc00
    FMUL float ptr [0x0059d560]         ; 0048dc03 | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048dc09
    FLD float ptr [EAX + 0x8]           ; 0048dc0c
    FMUL float ptr [0x0059d560]         ; 0048dc0f | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048dc15
    LEA EAX,[ESP + 0x70]                ; 0048dc18
    PUSH EAX                            ; 0048dc1c
    MOV EAX,dword ptr [EDX]             ; 0048dc1d | DAT_01b4d738
    PUSH EAX                            ; 0048dc1f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048dc20
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048dc25
    MOV DL,byte ptr [ESP + 0x97]        ; 0048dc28
    LEA EBX,[ESP + 0xd0]                ; 0048dc2f
    XOR DL,0x80                         ; 0048dc36
    LEA EAX,[ESP + 0x94]                ; 0048dc39
    MOV byte ptr [ESP + 0x97],DL        ; 0048dc40
    MOV EDX,dword ptr [0x005ae704]      ; 0048dc47 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048dc4d
    FMUL float ptr [0x0059d560]         ; 0048dc4f | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048dc55
    FLD float ptr [EAX + 0x4]           ; 0048dc57
    FMUL float ptr [0x0059d560]         ; 0048dc5a | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048dc60
    FLD float ptr [EAX + 0x8]           ; 0048dc63
    FMUL float ptr [0x0059d560]         ; 0048dc66 | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048dc6c
    LEA EAX,[ESP + 0xd0]                ; 0048dc6f
    PUSH EAX                            ; 0048dc76
    MOV EAX,dword ptr [EDX]             ; 0048dc77 | DAT_01b4d738
    ADD EAX,0x30                        ; 0048dc79
    PUSH EAX                            ; 0048dc7c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048dc7d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048dc82
    MOV DH,byte ptr [ESP + 0x9b]        ; 0048dc85
    LEA EBX,[ESP + 0xac]                ; 0048dc8c
    XOR DH,0x80                         ; 0048dc93
    LEA EAX,[ESP + 0x94]                ; 0048dc96
    MOV byte ptr [ESP + 0x9b],DH        ; 0048dc9d
    MOV EDX,dword ptr [0x005ae704]      ; 0048dca4 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048dcaa
    FMUL float ptr [0x0059d560]         ; 0048dcac | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048dcb2
    FLD float ptr [EAX + 0x4]           ; 0048dcb4
    FMUL float ptr [0x0059d560]         ; 0048dcb7 | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048dcbd
    FLD float ptr [EAX + 0x8]           ; 0048dcc0
    FMUL float ptr [0x0059d560]         ; 0048dcc3 | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048dcc9
    LEA EAX,[ESP + 0xac]                ; 0048dccc
    PUSH EAX                            ; 0048dcd3
    MOV EAX,dword ptr [EDX]             ; 0048dcd4 | DAT_01b4d738
    ADD EAX,0x60                        ; 0048dcd6
    PUSH EAX                            ; 0048dcd9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048dcda
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048dcdf
    MOV BL,byte ptr [ESP + 0x97]        ; 0048dce2
    XOR BL,0x80                         ; 0048dce9
    LEA EAX,[ESP + 0x94]                ; 0048dcec
    MOV byte ptr [ESP + 0x97],BL        ; 0048dcf3
    LEA EBX,[ESP + 0xe8]                ; 0048dcfa
    MOV EDX,dword ptr [0x005ae704]      ; 0048dd01 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0048dd07
    FMUL float ptr [0x0059d560]         ; 0048dd09 | DAT_0059d560
    FISTP dword ptr [EBX]               ; 0048dd0f
    FLD float ptr [EAX + 0x4]           ; 0048dd11
    FMUL float ptr [0x0059d560]         ; 0048dd14 | DAT_0059d560
    FISTP dword ptr [EBX + 0x4]         ; 0048dd1a
    FLD float ptr [EAX + 0x8]           ; 0048dd1d
    FMUL float ptr [0x0059d560]         ; 0048dd20 | DAT_0059d560
    FISTP dword ptr [EBX + 0x8]         ; 0048dd26
    LEA EAX,[ESP + 0xe8]                ; 0048dd29
    PUSH EAX                            ; 0048dd30
    MOV EAX,dword ptr [EDX]             ; 0048dd31 | DAT_01b4d738
    ADD EAX,0x90                        ; 0048dd33
    PUSH EAX                            ; 0048dd38
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048dd39
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048dd3e
    MOV dword ptr [ESP + 0x138],ESI     ; 0048dd41
    MOV ECX,dword ptr [0x005ae704]      ; 0048dd48 | DAT_005ae704
        ;   Label: LAB_0048dd48
    MOV EAX,dword ptr [ESP + 0x138]     ; 0048dd4e
    MOV ECX,dword ptr [ECX]             ; 0048dd55 | DAT_01b4d738
    ADD ECX,EAX                         ; 0048dd57
    MOV EDX,dword ptr [ECX + 0x8]       ; 0048dd59
    CMP EDX,0x200                       ; 0048dd5c
    JLE 0x0048dd92                      ; 0048dd62
        ;   XREF to: 0048dd92 (CONDITIONAL_JUMP)  ; LAB_0048dd92
    MOV EDI,EDX                         ; 0048dd64
    LEA ESI,[EDX + 0xffffff00]          ; 0048dd66
    MOV EAX,dword ptr [ECX]             ; 0048dd6c
    MOV EBX,EDX                         ; 0048dd6e
    MOV EDX,ESI                         ; 0048dd70
    IMUL EDX                            ; 0048dd72
    IDIV EBX                            ; 0048dd74
    MOV EBX,EDI                         ; 0048dd76
    MOV dword ptr [ECX],EAX             ; 0048dd78
    MOV EDX,ESI                         ; 0048dd7a
    MOV EAX,dword ptr [ECX + 0x4]       ; 0048dd7c
    IMUL EDX                            ; 0048dd7f
    IDIV EBX                            ; 0048dd81
    MOV dword ptr [ECX + 0x4],EAX       ; 0048dd83
    PUSH ECX                            ; 0048dd86
    MOV dword ptr [ECX + 0x8],ESI       ; 0048dd87
    CALL engine_matrix.c_projectTransformedPoint_FUN_004cd260 ; 0048dd8a
        ;   XREF to: 004cd260 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004cd260(SProjectedVertex * point)
    ADD ESP,0x4                         ; 0048dd8f
    MOV ECX,dword ptr [ESP + 0x138]     ; 0048dd92
        ;   Label: LAB_0048dd92
    ADD ECX,0x30                        ; 0048dd99
    MOV dword ptr [ESP + 0x138],ECX     ; 0048dd9c
    CMP ECX,0xc0                        ; 0048dda3
    JNZ 0x0048dd48                      ; 0048dda9
        ;   XREF to: 0048dd48 (CONDITIONAL_JUMP)  ; LAB_0048dd48
    MOV EAX,[0x005ae704]                ; 0048ddab | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 0048ddb0 | DAT_01b4d738
    MOV dword ptr [EDX + 0x2c],0x4000   ; 0048ddb2
    MOV EDX,dword ptr [EAX]             ; 0048ddb9 | DAT_01b4d738
    MOV dword ptr [EDX + 0x5c],0x4000   ; 0048ddbb
    MOV EDX,dword ptr [EAX]             ; 0048ddc2 | DAT_01b4d738
    MOV dword ptr [EDX + 0x8c],0x4000   ; 0048ddc4
    MOV EDX,dword ptr [EAX]             ; 0048ddce | DAT_01b4d738
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0048ddd0
    MOV EDX,dword ptr [EAX]             ; 0048ddda | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 0048dddc
    MOV EDX,dword ptr [EAX]             ; 0048dde3 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0048dde5
    MOV EDX,dword ptr [EAX]             ; 0048ddec | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0xf80000 ; 0048ddee
    MOV EDX,dword ptr [EAX]             ; 0048ddf5 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0048ddf7
    MOV EDX,dword ptr [EAX]             ; 0048ddfe | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0048de00
    MOV EDX,dword ptr [EAX]             ; 0048de07 | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0x80000  ; 0048de09
    MOV EDX,dword ptr [EAX]             ; 0048de10 | DAT_01b4d738
    MOV ESI,0x4                         ; 0048de12
    MOV ECX,0x3                         ; 0048de17
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0048de1c
    PUSH 0x5b8de8                       ; 0048de26 | DAT_005b8de8
    MOV EDX,dword ptr [EAX]             ; 0048de2b | DAT_01b4d738
    XOR EDI,EDI                         ; 0048de2d
    PUSH EAX                            ; 0048de2f | DAT_01b4d738
    MOV dword ptr [EDX + 0xac],0x80000  ; 0048de30
    MOV EDX,0x2                         ; 0048de3a
    MOV dword ptr [ESP + 0x3c],ESI      ; 0048de3f
    MOV dword ptr [ESP + 0x4c],EDI      ; 0048de43
    MOV dword ptr [ESP + 0x48],EDI      ; 0048de47
    MOV dword ptr [ESP + 0x44],EDI      ; 0048de4b
    MOV dword ptr [ESP + 0x40],EDI      ; 0048de4f
    MOV dword ptr [ESP + 0x50],EDI      ; 0048de53
    MOV dword ptr [ESP + 0x5c],ECX      ; 0048de57
    MOV EDI,0x1                         ; 0048de5b
    MOV dword ptr [ESP + 0x58],EDX      ; 0048de60
    MOV dword ptr [ESP + 0x54],EDI      ; 0048de64
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0048de68
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0048de6d
    PUSH EDI                            ; 0048de70
    MOV EBX,dword ptr [0x005ae704]      ; 0048de71 | DAT_005ae704
    PUSH EBX                            ; 0048de77 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048de78
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048de7d
    PUSH 0x163                          ; 0048de80
    LEA EAX,[ESP + 0x34]                ; 0048de85
    PUSH EAX                            ; 0048de89
    MOV ESI,dword ptr [0x005ae704]      ; 0048de8a | DAT_005ae704
    PUSH ESI                            ; 0048de90 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0048de91
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0048de96
    PUSH 0x0                            ; 0048de99
    MOV EDI,dword ptr [0x005ae704]      ; 0048de9b | DAT_005ae704
    PUSH EDI                            ; 0048dea1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048dea2
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048dea7
    MOV EAX,[0x005ae704]                ; 0048deaa | DAT_005ae704
    PUSH EAX                            ; 0048deaf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048deb0
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048deb5
    MOV EAX,dword ptr [EBP + 0x288]     ; 0048deb8
        ;   Label: LAB_0048deb8
    POP ESI                             ; 0048debe
    POP EDI                             ; 0048debf
    ADD ESP,0x138                       ; 0048dec0
    POP EBP                             ; 0048dec6
    POP EBX                             ; 0048dec7
    RET                                 ; 0048dec8
    CMP EAX,0xffffe000                  ; 0048dec9
        ;   Label: LAB_0048dec9
    JL 0x0048d752                       ; 0048dece
        ;   XREF to: 0048d752 (CONDITIONAL_JUMP)  ; LAB_0048d752
    JMP 0x0048d75d                      ; 0048ded4
        ;   XREF to: 0048d75d (UNCONDITIONAL_JUMP)  ; LAB_0048d75d
    MOV EAX,0xf80000                    ; 0048ded9
        ;   Label: LAB_0048ded9
    MOV EBX,0x80000                     ; 0048dede
    MOV [0x005c5030],EAX                ; 0048dee3 | DAT_005c5030
    MOV [0x005c505c],EAX                ; 0048dee8 | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 0048deed | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 0048def3 | DAT_005c508c
    MOV dword ptr [0x005c5090],EBX      ; 0048def9 | DAT_005c5090
    MOV dword ptr [0x005c50bc],EBX      ; 0048deff | DAT_005c50bc
    MOV [0x005c50c0],EAX                ; 0048df05 | DAT_005c50c0
    JMP 0x0048da01                      ; 0048df0a
        ;   XREF to: 0048da01 (UNCONDITIONAL_JUMP)  ; LAB_0048da01

