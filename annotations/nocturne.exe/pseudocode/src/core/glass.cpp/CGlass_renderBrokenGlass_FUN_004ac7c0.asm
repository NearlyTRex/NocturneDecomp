; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ac7c0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[2]:
;   core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0 at 004acb4a
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507e21
;
; Referenced Globals:
;   undefined4 DAT_0059e390
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ac7c0
        ;   Label: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ac7c0
    SUB ESP,0x24                        ; 004ac7c1
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ac7c4
    PUSH EDX                            ; 004ac7c8
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004ac7c9
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac7ce
    PUSH 0x0                            ; 004ac7d1
    LEA EAX,[ESP + 0x4]                 ; 004ac7d3
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ac7d7
    PUSH EAX                            ; 004ac7db
    MOV ECX,dword ptr [ESP + 0x34]      ; 004ac7dc
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004ac7e0
    PUSH ECX                            ; 004ac7e6
    CALL dword ptr [EDX + 0x14]         ; 004ac7e7
    ADD ESP,0x8                         ; 004ac7ea
    PUSH EAX                            ; 004ac7ed
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004ac7ee
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004ac7f3
    TEST EAX,EAX                        ; 004ac7f6
    JZ 0x004ac985                       ; 004ac7f8
        ;   XREF to: 004ac985 (CONDITIONAL_JUMP)  ; LAB_004ac985
    PUSH EDI                            ; 004ac7fe
    PUSH ESI                            ; 004ac7ff
    PUSH EBX                            ; 004ac800
    MOV EBX,dword ptr [0x005ae704]      ; 004ac801 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004ac807 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004ac808
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ac80d
    MOV EBX,dword ptr [ESP + 0x38]      ; 004ac810
    ADD EBX,0x36c                       ; 004ac814
    TEST EAX,EAX                        ; 004ac81a
    JZ 0x004ac997                       ; 004ac81c
        ;   XREF to: 004ac997 (CONDITIONAL_JUMP)  ; LAB_004ac997
    PUSH 0x0                            ; 004ac822
    MOV EDI,dword ptr [0x005ae704]      ; 004ac824 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004ac82a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 004ac82b
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004ac830
    PUSH EBX                            ; 004ac833
    MOV EBP,dword ptr [0x005ae704]      ; 004ac834 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004ac83a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004ac83b
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ac840
    PUSH 0x1                            ; 004ac843
    MOV EAX,[0x005ae704]                ; 004ac845 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004ac84a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 004ac84b
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004ac850
        ;   Label: LAB_004ac850
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ac853
    MOV EDX,dword ptr [EAX + 0xb2c]     ; 004ac857
    XOR EBP,EBP                         ; 004ac85d
    TEST EDX,EDX                        ; 004ac85f
    JLE 0x004ac8f0                      ; 004ac861
        ;   XREF to: 004ac8f0 (CONDITIONAL_JUMP)  ; LAB_004ac8f0
    LEA EDI,[EAX + 0x384]               ; 004ac867
    XOR ESI,ESI                         ; 004ac86d
    LEA EBX,[ESP + 0x24]                ; 004ac86f
        ;   Label: LAB_004ac86f
    MOV EAX,EDI                         ; 004ac873
    MOV EDX,dword ptr [0x005ae704]      ; 004ac875 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004ac87b
    FMUL float ptr [0x0059e390]         ; 004ac87d | DAT_0059e390
    FISTP dword ptr [EBX]               ; 004ac883
    FLD float ptr [EAX + 0x4]           ; 004ac885
    FMUL float ptr [0x0059e390]         ; 004ac888 | DAT_0059e390
    FISTP dword ptr [EBX + 0x4]         ; 004ac88e
    FLD float ptr [EAX + 0x8]           ; 004ac891
    FMUL float ptr [0x0059e390]         ; 004ac894 | DAT_0059e390
    FISTP dword ptr [EBX + 0x8]         ; 004ac89a
    LEA EAX,[ESP + 0x24]                ; 004ac89d
    PUSH EAX                            ; 004ac8a1
    MOV EAX,dword ptr [EDX]             ; 004ac8a2 | DAT_01b4d738
    ADD EAX,ESI                         ; 004ac8a4
    PUSH EAX                            ; 004ac8a6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004ac8a7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004ac8ac | g_CDemonRenderer_PTR_005ae704
    MOV EDX,dword ptr [EAX]             ; 004ac8b1 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004ac8b3
    MOV EBX,dword ptr [EAX]             ; 004ac8bb | DAT_01b4d738
    MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff ; 004ac8bd
    MOV EAX,dword ptr [EAX]             ; 004ac8c5 | DAT_01b4d738
    ADD ESP,0x8                         ; 004ac8c7
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 004ac8ca
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ac8d2
    INC EBP                             ; 004ac8d6
    ADD EDI,0xc                         ; 004ac8d7
    MOV EBX,dword ptr [EAX + 0xb2c]     ; 004ac8da
    ADD ESI,0x30                        ; 004ac8e0
    CMP EBP,EBX                         ; 004ac8e3
    JL 0x004ac86f                       ; 004ac8e5
        ;   XREF to: 004ac86f (CONDITIONAL_JUMP)  ; LAB_004ac86f
    LEA EAX,[EAX]                       ; 004ac8e7
    LEA EDX,[EDX]                       ; 004ac8ed
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ac8f0
        ;   Label: LAB_004ac8f0
    MOV ESI,dword ptr [EAX + 0x174]     ; 004ac8f4
    PUSH ESI                            ; 004ac8fa
    MOV EDI,dword ptr [0x005ae704]      ; 004ac8fb | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004ac901 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004ac902
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ac907
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ac90a
    MOV EBP,dword ptr [EAX + 0xb30]     ; 004ac90e
    XOR EBX,EBX                         ; 004ac914
    TEST EBP,EBP                        ; 004ac916
    JLE 0x004ac970                      ; 004ac918
        ;   XREF to: 004ac970 (CONDITIONAL_JUMP)  ; LAB_004ac970
    LEA EDI,[EAX + 0x6a4]               ; 004ac91a
    MOV ESI,EAX                         ; 004ac920
    MOV dword ptr [ESI + 0x6ac],0x0     ; 004ac922
        ;   Label: LAB_004ac922
    PUSH EDI                            ; 004ac92c
    MOV dword ptr [ESI + 0x6b0],0x0     ; 004ac92d
    MOV EAX,[0x005ae704]                ; 004ac937 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESI + 0x6b4],0x0     ; 004ac93c
    PUSH EAX                            ; 004ac946 | DAT_01b4d738
    MOV dword ptr [ESI + 0x6b8],0x0     ; 004ac947
    CALL engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00 ; 004ac951
        ;   XREF to: 0045fb00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004ac956
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ac959
    ADD ESI,0x48                        ; 004ac95d
    INC EBX                             ; 004ac960
    MOV EDX,dword ptr [EAX + 0xb30]     ; 004ac961
    ADD EDI,0x48                        ; 004ac967
    CMP EBX,EDX                         ; 004ac96a
    JL 0x004ac922                       ; 004ac96c
        ;   XREF to: 004ac922 (CONDITIONAL_JUMP)  ; LAB_004ac922
    MOV EAX,EAX                         ; 004ac96e
    MOV ECX,dword ptr [ESP + 0x38]      ; 004ac970
        ;   Label: LAB_004ac970
    PUSH ECX                            ; 004ac974
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004ac975
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac97a
    POP EBX                             ; 004ac97d
    POP ESI                             ; 004ac97e
    POP EDI                             ; 004ac97f
    ADD ESP,0x24                        ; 004ac980
    POP EBP                             ; 004ac983
    RET                                 ; 004ac984
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004ac985
        ;   Label: LAB_004ac985
    PUSH ECX                            ; 004ac989
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004ac98a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac98f
    ADD ESP,0x24                        ; 004ac992
    POP EBP                             ; 004ac995
    RET                                 ; 004ac996
    PUSH EBX                            ; 004ac997
        ;   Label: LAB_004ac997
    MOV ESI,dword ptr [0x005ae704]      ; 004ac998 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 004ac99e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004ac99f
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    JMP 0x004ac850                      ; 004ac9a4
        ;   XREF to: 004ac850 (UNCONDITIONAL_JUMP)  ; LAB_004ac850

