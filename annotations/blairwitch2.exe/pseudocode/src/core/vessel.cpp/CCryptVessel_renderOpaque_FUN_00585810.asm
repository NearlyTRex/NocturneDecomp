; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00585810(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ede02
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585810
        ;   Label: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00585810
    PUSH ESI                            ; 00585811
    PUSH EDI                            ; 00585812
    PUSH EBP                            ; 00585813
    MOV EBP,ESP                         ; 00585814
    SUB ESP,0x40                        ; 00585816
    AND ESP,0xfffffff8                  ; 00585819
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058581c
    LEA EAX,[EBX + 0x20]                ; 0058581f
    PUSH EAX                            ; 00585822
    MOV EDX,dword ptr [0x0060b280]      ; 00585823 | DAT_0060b280
    PUSH EDX                            ; 00585829 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0058582a
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0058582f
    PUSH 0x0                            ; 00585832
    LEA EAX,[EBX + 0x30]                ; 00585834
    PUSH EAX                            ; 00585837
    MOV ESI,dword ptr [0x0060b280]      ; 00585838 | DAT_0060b280
    PUSH ESI                            ; 0058583e | DAT_01ba5c50
    MOV dword ptr [ESP + 0x48],EAX      ; 0058583f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00585843
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00585848
    PUSH 0x0                            ; 0058584b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058584d
    PUSH EBX                            ; 00585853
    LEA ESI,[ESP + 0x28]                ; 00585854
    LEA EDI,[ESP + 0x10]                ; 00585858
    CALL dword ptr [EAX + 0x24]         ; 0058585c
    MOV ECX,0x6                         ; 0058585f
    ADD ESP,0x4                         ; 00585864
    LEA EAX,[ESP + 0xc]                 ; 00585867
    LEA ESI,[ESP + 0x24]                ; 0058586b
    PUSH EAX                            ; 0058586f
    MOVSD.REP ES:EDI,ESI                ; 00585870
    CALL core_box.cpp_FUN_0041a840      ; 00585872
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00585877
    MOV EDI,dword ptr [0x0060b280]      ; 0058587a | DAT_0060b280
    PUSH EDI                            ; 00585880 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xaa0],EAX     ; 00585881
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00585887
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    MOV EAX,dword ptr [EBX + 0xaa0]     ; 0058588c
    ADD ESP,0x4                         ; 00585892
    TEST EAX,EAX                        ; 00585895
    JNZ 0x005858a6                      ; 00585897
        ;   XREF to: 005858a6 (CONDITIONAL_JUMP)  ; LAB_005858a6
    MOV EAX,dword ptr [EBX + 0xaa0]     ; 00585899
    MOV ESP,EBP                         ; 0058589f
    POP EBP                             ; 005858a1
    POP EDI                             ; 005858a2
    POP ESI                             ; 005858a3
    POP EBX                             ; 005858a4
    RET                                 ; 005858a5
    PUSH 0x0                            ; 005858a6
        ;   Label: LAB_005858a6
    MOV EDX,dword ptr [ESP + 0x40]      ; 005858a8
    PUSH EDX                            ; 005858ac
    MOV ECX,dword ptr [0x0060b280]      ; 005858ad | DAT_0060b280
    PUSH ECX                            ; 005858b3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 005858b4
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005858b9
    PUSH 0xffff                         ; 005858bc
    MOV ESI,dword ptr [0x0060b280]      ; 005858c1 | DAT_0060b280
    PUSH ESI                            ; 005858c7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 005858c8
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EDI,dword ptr [EBX + 0x514]     ; 005858cd
    ADD ESP,0x8                         ; 005858d3
    CMP EDI,0x3                         ; 005858d6
    JZ 0x0058596e                       ; 005858d9
        ;   XREF to: 0058596e (CONDITIONAL_JUMP)  ; LAB_0058596e
    FLDZ                                ; 005858df
    FLD float ptr [EBX + 0x518]         ; 005858e1
    FSTP double ptr [ESP]               ; 005858e7
    FCOMP double ptr [ESP]              ; 005858ea
    FNSTSW AX                           ; 005858ed
    SAHF                                ; 005858ef
    JNC 0x0058596e                      ; 005858f0
        ;   XREF to: 0058596e (CONDITIONAL_JUMP)  ; LAB_0058596e
    FLD double ptr [0x005ede02]         ; 005858f2 | DAT_005ede02
    FLD double ptr [ESP]                ; 005858f8
    FMUL ST1                            ; 005858fb
    FSUBP                               ; 005858fd
    CALL crt_math.c_round_FUN_005b7ff0  ; 005858ff
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x38]        ; 00585904
    MOV EAX,dword ptr [ESP + 0x38]      ; 00585908
    PUSH EAX                            ; 0058590c
    MOV EDX,dword ptr [0x0060b280]      ; 0058590d | DAT_0060b280
    PUSH EDX                            ; 00585913 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00585914
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00585919
    PUSH 0x0                            ; 0058591c
    MOV ECX,dword ptr [0x0060b280]      ; 0058591e | DAT_0060b280
    PUSH ECX                            ; 00585924 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 00585925
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0058592a
    PUSH 0x2e7                          ; 0058592d
    LEA EAX,[EBX + 0x2b4]               ; 00585932
    PUSH 0x0                            ; 00585938
    PUSH EAX                            ; 0058593a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0058593b
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00585940
    MOV ESI,dword ptr [0x0060b280]      ; 00585943 | DAT_0060b280
    PUSH ESI                            ; 00585949 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 0058594a
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0058594f
    MOV EDI,dword ptr [0x0060b280]      ; 00585952 | DAT_0060b280
        ;   Label: LAB_00585952
    PUSH EDI                            ; 00585958 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00585959
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0058595e
    MOV EAX,dword ptr [EBX + 0xaa0]     ; 00585961
    MOV ESP,EBP                         ; 00585967
    POP EBP                             ; 00585969
    POP EDI                             ; 0058596a
    POP ESI                             ; 0058596b
    POP EBX                             ; 0058596c
    RET                                 ; 0058596d
    PUSH -0x1                           ; 0058596e
        ;   Label: LAB_0058596e
    LEA EAX,[EBX + 0x2b4]               ; 00585970
    PUSH 0x0                            ; 00585976
    PUSH EAX                            ; 00585978
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00585979
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0058597e
    JMP 0x00585952                      ; 00585981
        ;   XREF to: 00585952 (UNCONDITIONAL_JUMP)  ; LAB_00585952

