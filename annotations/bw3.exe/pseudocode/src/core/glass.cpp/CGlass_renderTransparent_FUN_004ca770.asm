; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004ca770(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e0bc0
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca770
        ;   Label: core_glass.cpp_CGlass_renderTransparent_FUN_004ca770
    PUSH ESI                            ; 004ca771
    PUSH EBP                            ; 004ca772
    SUB ESP,0x34                        ; 004ca773
    MOV EBP,dword ptr [ESP + 0x44]      ; 004ca776
    CMP dword ptr [EBP + 0x3a0],0x0     ; 004ca77a
    JNZ 0x004ca796                      ; 004ca781
        ;   XREF to: 004ca796 (CONDITIONAL_JUMP)  ; LAB_004ca796
    CMP dword ptr [EBP + 0x1ac],0x0     ; 004ca783
    JZ 0x004ca796                       ; 004ca78a
        ;   XREF to: 004ca796 (CONDITIONAL_JUMP)  ; LAB_004ca796
    MOV EBX,dword ptr [EBP + 0x1b0]     ; 004ca78c
    TEST EBX,EBX                        ; 004ca792
    JZ 0x004ca79f                       ; 004ca794
        ;   XREF to: 004ca79f (CONDITIONAL_JUMP)  ; LAB_004ca79f
    XOR EAX,EAX                         ; 004ca796
        ;   Label: LAB_004ca796
    ADD ESP,0x34                        ; 004ca798
    POP EBP                             ; 004ca79b
    POP ESI                             ; 004ca79c
    POP EBX                             ; 004ca79d
    RET                                 ; 004ca79e
    MOV ESI,dword ptr [0x005f2afc]      ; 004ca79f | DAT_005f2afc
        ;   Label: LAB_004ca79f
    PUSH ESI                            ; 004ca7a5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004ca7a6
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ca7ab
    TEST EAX,EAX                        ; 004ca7ae
    JNZ 0x004ca796                      ; 004ca7b0
        ;   XREF to: 004ca796 (CONDITIONAL_JUMP)  ; LAB_004ca796
    PUSH EDI                            ; 004ca7b2
    PUSH EBP                            ; 004ca7b3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004ca7b4
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ca7b9
    PUSH EBX                            ; 004ca7bc
    MOV EAX,dword ptr [EBP + 0x154]     ; 004ca7bd
    PUSH EBP                            ; 004ca7c3
    LEA ESI,[ESP + 0x24]                ; 004ca7c4
    LEA EDI,[ESP + 0xc]                 ; 004ca7c8
    CALL dword ptr [EAX + 0x1c]         ; 004ca7cc
    MOV ECX,0x6                         ; 004ca7cf
    ADD ESP,0x4                         ; 004ca7d4
    LEA EAX,[ESP + 0x8]                 ; 004ca7d7
    LEA ESI,[ESP + 0x20]                ; 004ca7db
    PUSH EAX                            ; 004ca7df
    MOVSD.REP ES:EDI,ESI                ; 004ca7e0
    CALL core_box.cpp_FUN_0041daf0      ; 004ca7e2
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004ca7e7
    MOV dword ptr [ESP + 0x34],EAX      ; 004ca7ea
    LEA EAX,[EBP + 0x164]               ; 004ca7ee
    PUSH EAX                            ; 004ca7f4
    MOV EDI,dword ptr [0x005f2afc]      ; 004ca7f5 | DAT_005f2afc
    PUSH EDI                            ; 004ca7fb | DAT_01bdd7e4
    XOR ESI,ESI                         ; 004ca7fc
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004ca7fe
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ECX,[EBP + 0x3bc]               ; 004ca803
    ADD ESP,0x8                         ; 004ca809
    LEA EDI,[EBP + 0x4e8]               ; 004ca80c
    MOV EAX,dword ptr [EBP + 0xb64]     ; 004ca812
    MOV EDX,EDI                         ; 004ca818
    TEST EAX,EAX                        ; 004ca81a
    JLE 0x004ca860                      ; 004ca81c
        ;   XREF to: 004ca860 (CONDITIONAL_JUMP)  ; LAB_004ca860
    MOV EBX,EDX                         ; 004ca81e
        ;   Label: LAB_004ca81e
    MOV EAX,ECX                         ; 004ca820
    FLD float ptr [EAX]                 ; 004ca822
    FMUL float ptr [0x005e0bc0]         ; 004ca824 | DAT_005e0bc0
    FISTP dword ptr [EBX]               ; 004ca82a
    FLD float ptr [EAX + 0x4]           ; 004ca82c
    FMUL float ptr [0x005e0bc0]         ; 004ca82f | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x4]         ; 004ca835
    FLD float ptr [EAX + 0x8]           ; 004ca838
    FMUL float ptr [0x005e0bc0]         ; 004ca83b | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x8]         ; 004ca841
    INC ESI                             ; 004ca844
    ADD ECX,0xc                         ; 004ca845
    MOV EBX,dword ptr [EBP + 0xb64]     ; 004ca848
    ADD EDX,0xc                         ; 004ca84e
    CMP ESI,EBX                         ; 004ca851
    JL 0x004ca81e                       ; 004ca853
        ;   XREF to: 004ca81e (CONDITIONAL_JUMP)  ; LAB_004ca81e
    LEA EAX,[EAX]                       ; 004ca855
    LEA EDX,[EDX]                       ; 004ca85b
    MOV EBX,EBX                         ; 004ca85e
    PUSH EDI                            ; 004ca860
        ;   Label: LAB_004ca860
    MOV ESI,dword ptr [EBP + 0xb64]     ; 004ca861
    PUSH ESI                            ; 004ca867
    MOV EAX,[0x00603b28]                ; 004ca868 | g_CDemonSetPtr
    PUSH EAX                            ; 004ca86d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 004ca86e
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,0xffff                      ; 004ca873
    MOV EDX,dword ptr [0x01c6e24c]      ; 004ca878 | DAT_01c6e24c
    ADD ESP,0xc                         ; 004ca87e
    SUB EAX,EDX                         ; 004ca881
    MOV EDX,dword ptr [EBP + 0x1ac]     ; 004ca883
    IMUL EDX                            ; 004ca889
    SHRD EAX,EDX,0x10                   ; 004ca88b
    PUSH EAX                            ; 004ca88f
    MOV ECX,dword ptr [0x005f2afc]      ; 004ca890 | DAT_005f2afc
    PUSH ECX                            ; 004ca896 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004ca897
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ca89c
    PUSH 0x0                            ; 004ca89f
    PUSH 0x4                            ; 004ca8a1
    PUSH EDI                            ; 004ca8a3
    LEA EDI,[EBP + 0x6dc]               ; 004ca8a4
    PUSH EDI                            ; 004ca8aa
    MOV EBX,dword ptr [EBP + 0xb68]     ; 004ca8ab
    PUSH EBX                            ; 004ca8b1
    MOV ESI,dword ptr [EBP + 0xb64]     ; 004ca8b2
    PUSH ESI                            ; 004ca8b8
    MOV EAX,[0x00603b28]                ; 004ca8b9 | g_CDemonSetPtr
    PUSH EAX                            ; 004ca8be | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 004ca8bf
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    XOR ESI,ESI                         ; 004ca8c4
    MOV EDX,dword ptr [EBP + 0xb68]     ; 004ca8c6
    ADD ESP,0x1c                        ; 004ca8cc
    TEST EDX,EDX                        ; 004ca8cf
    JLE 0x004ca920                      ; 004ca8d1
        ;   XREF to: 004ca920 (CONDITIONAL_JUMP)  ; LAB_004ca920
    MOV EBX,EBP                         ; 004ca8d3
    MOV ECX,dword ptr [0x005f2afc]      ; 004ca8d5 | DAT_005f2afc
        ;   Label: LAB_004ca8d5
    MOV dword ptr [EBX + 0x6e4],0x0     ; 004ca8db
    PUSH EDI                            ; 004ca8e5
    MOV dword ptr [EBX + 0x6e8],0x0     ; 004ca8e6
    INC ESI                             ; 004ca8f0
    MOV dword ptr [EBX + 0x6ec],0x0     ; 004ca8f1
    PUSH ECX                            ; 004ca8fb | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x6f0],0x0     ; 004ca8fc
    ADD EBX,0x48                        ; 004ca906
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800 ; 004ca909
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EDI,0x48                        ; 004ca90e
    MOV EAX,dword ptr [EBP + 0xb68]     ; 004ca911
    ADD ESP,0x8                         ; 004ca917
    CMP ESI,EAX                         ; 004ca91a
    JL 0x004ca8d5                       ; 004ca91c
        ;   XREF to: 004ca8d5 (CONDITIONAL_JUMP)  ; LAB_004ca8d5
    MOV EAX,EAX                         ; 004ca91e
    PUSH EBP                            ; 004ca920
        ;   Label: LAB_004ca920
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004ca921
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ca926
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ca929
    POP EDI                             ; 004ca92d
    ADD ESP,0x34                        ; 004ca92e
    POP EBP                             ; 004ca931
    POP ESI                             ; 004ca932
    POP EBX                             ; 004ca933
    RET                                 ; 004ca934

