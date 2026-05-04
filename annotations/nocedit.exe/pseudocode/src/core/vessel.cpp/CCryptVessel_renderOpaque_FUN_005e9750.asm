; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x30]:24  local_30
; int              Stack[-0x18]:4  iStack_18
;
; Referenced Globals:
;   double DOUBLE_00657061 = 65535
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9750
        ;   Label: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750
    PUSH ESI                            ; 005e9751
    PUSH EDI                            ; 005e9752
    PUSH EBP                            ; 005e9753
    MOV EBP,ESP                         ; 005e9754
    SUB ESP,0x24                        ; 005e9756
    AND ESP,0xfffffff8                  ; 005e9759
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e975c
    LEA EAX,[EBX + 0x20]                ; 005e975f
    PUSH EAX                            ; 005e9762
    MOV EDX,dword ptr [0x006703ec]      ; 005e9763 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e9769 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005e976a
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005e976f
    PUSH 0x0                            ; 005e9772
    LEA ESI,[EBX + 0x30]                ; 005e9774
    PUSH ESI                            ; 005e9777
    MOV ECX,dword ptr [0x006703ec]      ; 005e9778 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e977e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e977f
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005e9784
    LEA EAX,[ESP + 0x8]                 ; 005e9787
    PUSH EAX                            ; 005e978b
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e978c
    PUSH EBX                            ; 005e9792
    CALL dword ptr [EDX + 0x14]         ; 005e9793
    ADD ESP,0x8                         ; 005e9796
    PUSH EAX                            ; 005e9799
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e979a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e979f
    MOV EDI,dword ptr [0x006703ec]      ; 005e97a2 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005e97a8 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7e8],EAX     ; 005e97a9
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 005e97af
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005e97b4
    ADD ESP,0x4                         ; 005e97ba
    TEST EAX,EAX                        ; 005e97bd
    JNZ 0x005e97ce                      ; 005e97bf
        ;   XREF to: 005e97ce (CONDITIONAL_JUMP)  ; LAB_005e97ce
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005e97c1
    MOV ESP,EBP                         ; 005e97c7
    POP EBP                             ; 005e97c9
    POP EDI                             ; 005e97ca
    POP ESI                             ; 005e97cb
    POP EBX                             ; 005e97cc
    RET                                 ; 005e97cd
    PUSH 0x0                            ; 005e97ce
        ;   Label: LAB_005e97ce
    PUSH ESI                            ; 005e97d0
    MOV EDX,dword ptr [0x006703ec]      ; 005e97d1 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e97d7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e97d8
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005e97dd
    PUSH 0xffff                         ; 005e97e0
    MOV ECX,dword ptr [0x006703ec]      ; 005e97e5 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e97eb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005e97ec
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    MOV ESI,dword ptr [EBX + 0x3b8]     ; 005e97f1
    ADD ESP,0x8                         ; 005e97f7
    CMP ESI,0x3                         ; 005e97fa
    JZ 0x005e9891                       ; 005e97fd
        ;   XREF to: 005e9891 (CONDITIONAL_JUMP)  ; LAB_005e9891
    FLDZ                                ; 005e9803
    FLD float ptr [EBX + 0x3bc]         ; 005e9805
    FSTP double ptr [ESP]               ; 005e980b
    FCOMP double ptr [ESP]              ; 005e980e
    FNSTSW AX                           ; 005e9811
    SAHF                                ; 005e9813
    JNC 0x005e9891                      ; 005e9814
        ;   XREF to: 005e9891 (CONDITIONAL_JUMP)  ; LAB_005e9891
    FLD double ptr [0x00657061]         ; 005e9816 | DOUBLE_00657061
    FLD double ptr [ESP]                ; 005e981c
    FMUL ST1                            ; 005e981f
    FSUBP                               ; 005e9821
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e9823
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x20]        ; 005e9828
    MOV EDI,dword ptr [ESP + 0x20]      ; 005e982c
    PUSH EDI                            ; 005e9830
    MOV EAX,[0x006703ec]                ; 005e9831 | g_CDemonRendererPtr2
    PUSH EAX                            ; 005e9836 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005e9837
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005e983c
    PUSH 0x0                            ; 005e983f
    MOV EDX,dword ptr [0x006703ec]      ; 005e9841 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e9847 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 005e9848
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 005e984d
    PUSH 0x2e7                          ; 005e9850
    LEA EAX,[EBX + 0x158]               ; 005e9855
    PUSH 0x0                            ; 005e985b
    PUSH EAX                            ; 005e985d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e985e
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e9863
    MOV ECX,dword ptr [0x006703ec]      ; 005e9866 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e986c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 005e986d
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e9872
    MOV ESI,dword ptr [0x006703ec]      ; 005e9875 | g_CDemonRendererPtr2
        ;   Label: LAB_005e9875
    PUSH ESI                            ; 005e987b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 005e987c
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e9881
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005e9884
    MOV ESP,EBP                         ; 005e988a
    POP EBP                             ; 005e988c
    POP EDI                             ; 005e988d
    POP ESI                             ; 005e988e
    POP EBX                             ; 005e988f
    RET                                 ; 005e9890
    PUSH -0x1                           ; 005e9891
        ;   Label: LAB_005e9891
    LEA EAX,[EBX + 0x158]               ; 005e9893
    PUSH 0x0                            ; 005e9899
    PUSH EAX                            ; 005e989b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e989c
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e98a1
    JMP 0x005e9875                      ; 005e98a4
        ;   XREF to: 005e9875 (UNCONDITIONAL_JUMP)  ; LAB_005e9875

