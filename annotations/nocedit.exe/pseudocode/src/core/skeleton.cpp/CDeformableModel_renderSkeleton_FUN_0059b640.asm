; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
; CMatrix3x4f *    Stack[0xc]:4   bone_matrices
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0 at 005a17d0
;
; Referenced Globals:
;   float FLOAT_00662e98 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b640
        ;   Label: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
    PUSH ESI                            ; 0059b641
    PUSH EDI                            ; 0059b642
    PUSH EBP                            ; 0059b643
    SUB ESP,0x3c                        ; 0059b644
    MOV EDX,dword ptr [ESP + 0x50]      ; 0059b647
    PUSH EDX                            ; 0059b64b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0059b64c
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059b651
    MOV DL,byte ptr [ESP + 0x5c]        ; 0059b654
    MOV EBP,EAX                         ; 0059b658
    TEST DL,0x1                         ; 0059b65a
    JZ 0x0059b75d                       ; 0059b65d
        ;   XREF to: 0059b75d (CONDITIONAL_JUMP)  ; LAB_0059b75d
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059b663
    XOR ESI,ESI                         ; 0059b669
    TEST ECX,ECX                        ; 0059b66b
    JLE 0x0059b6e0                      ; 0059b66d
        ;   XREF to: 0059b6e0 (CONDITIONAL_JUMP)  ; LAB_0059b6e0
    MOV EDI,dword ptr [ESP + 0x58]      ; 0059b673
    LEA EAX,[ESP + 0x24]                ; 0059b677
        ;   Label: LAB_0059b677
    PUSH EAX                            ; 0059b67b
    IMUL EAX,ESI,0x30                   ; 0059b67c
    PUSH EDI                            ; 0059b67f
    LEA EBX,[ESP + 0x8]                 ; 0059b680
    MOV dword ptr [ESP + 0x38],EAX      ; 0059b684
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0059b688
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
    ADD ESP,0x8                         ; 0059b68d
    LEA EAX,[ESP + 0x24]                ; 0059b690
    MOV EDX,dword ptr [0x006703ec]      ; 0059b694 | g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 0059b69a
    FMUL float ptr [0x00662e98]         ; 0059b69c | FLOAT_00662e98
    FISTP dword ptr [EBX]               ; 0059b6a2
    FLD float ptr [EAX + 0x4]           ; 0059b6a4
    FMUL float ptr [0x00662e98]         ; 0059b6a7 | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x4]         ; 0059b6ad
    FLD float ptr [EAX + 0x8]           ; 0059b6b0
    FMUL float ptr [0x00662e98]         ; 0059b6b3 | FLOAT_00662e98
    FISTP dword ptr [EBX + 0x8]         ; 0059b6b9
    MOV EAX,ESP                         ; 0059b6bc
    MOV EBX,dword ptr [ESP + 0x30]      ; 0059b6be
    PUSH EAX                            ; 0059b6c2
    MOV EAX,dword ptr [EDX]             ; 0059b6c3 | g_CDemonRendererInstance
    ADD EAX,EBX                         ; 0059b6c5
    PUSH EAX                            ; 0059b6c7
    ADD EDI,0x30                        ; 0059b6c8
    INC ESI                             ; 0059b6cb
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0059b6cc
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EBP + 0x28558]   ; 0059b6d1
    ADD ESP,0x8                         ; 0059b6d7
    CMP ESI,EAX                         ; 0059b6da
    JL 0x0059b677                       ; 0059b6dc
        ;   XREF to: 0059b677 (CONDITIONAL_JUMP)  ; LAB_0059b677
    MOV EAX,EAX                         ; 0059b6de
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059b6e0
        ;   Label: LAB_0059b6e0
    XOR EDX,EDX                         ; 0059b6e4
    MOV ECX,dword ptr [EBP + 0x28558]   ; 0059b6e6
    MOV dword ptr [ESP + 0x38],EDX      ; 0059b6ec
    MOV [0x02d02570],EAX                ; 0059b6f0 | g_ActiveRenderColor
    TEST ECX,ECX                        ; 0059b6f5
    JLE 0x0059b75d                      ; 0059b6f7
        ;   XREF to: 0059b75d (CONDITIONAL_JUMP)  ; LAB_0059b75d
    MOV dword ptr [ESP + 0x34],EBP      ; 0059b6f9
    XOR EBX,EBX                         ; 0059b6fd
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059b6ff
        ;   Label: LAB_0059b6ff
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059b703
    TEST EAX,EAX                        ; 0059b709
    JL 0x0059b73c                       ; 0059b70b
        ;   XREF to: 0059b73c (CONDITIONAL_JUMP)  ; LAB_0059b73c
    IMUL ESI,EAX,0x30                   ; 0059b70d
    MOV EAX,[0x006703ec]                ; 0059b710 | g_CDemonRendererPtr
    MOV ECX,0xc                         ; 0059b715
    SUB ESP,0x30                        ; 0059b71a
    MOV EAX,dword ptr [EAX]             ; 0059b71d | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 0059b71f
    ADD ESI,EAX                         ; 0059b721
    MOVSD.REP ES:EDI,ESI                ; 0059b723
    SUB ESP,0x30                        ; 0059b725
    MOV ECX,0xc                         ; 0059b728
    MOV EDI,ESP                         ; 0059b72d
    LEA ESI,[EAX + EBX*0x1]             ; 0059b72f
    MOVSD.REP ES:EDI,ESI                ; 0059b732
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0059b734
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    ADD ESP,0x60                        ; 0059b739
    MOV ESI,dword ptr [ESP + 0x34]      ; 0059b73c
        ;   Label: LAB_0059b73c
    MOV EDI,dword ptr [ESP + 0x38]      ; 0059b740
    ADD EBX,0x30                        ; 0059b744
    MOV EDX,dword ptr [EBP + 0x28558]   ; 0059b747
    ADD ESI,0x24                        ; 0059b74d
    INC EDI                             ; 0059b750
    MOV dword ptr [ESP + 0x34],ESI      ; 0059b751
    MOV dword ptr [ESP + 0x38],EDI      ; 0059b755
    CMP EDI,EDX                         ; 0059b759
    JL 0x0059b6ff                       ; 0059b75b
        ;   XREF to: 0059b6ff (CONDITIONAL_JUMP)  ; LAB_0059b6ff
    TEST byte ptr [ESP + 0x5c],0x2      ; 0059b75d
        ;   Label: LAB_0059b75d
    JZ 0x0059b7f0                       ; 0059b762
        ;   XREF to: 0059b7f0 (CONDITIONAL_JUMP)  ; LAB_0059b7f0
    MOV ECX,dword ptr [EBP + 0x28558]   ; 0059b768
    XOR EBX,EBX                         ; 0059b76e
    TEST ECX,ECX                        ; 0059b770
    JLE 0x0059b7f0                      ; 0059b772
        ;   XREF to: 0059b7f0 (CONDITIONAL_JUMP)  ; LAB_0059b7f0
    MOV ESI,dword ptr [ESP + 0x58]      ; 0059b778
    LEA EAX,[ESP + 0xc]                 ; 0059b77c
        ;   Label: LAB_0059b77c
    PUSH EAX                            ; 0059b780
    PUSH ESI                            ; 0059b781
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0059b782
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
    ADD ESP,0x8                         ; 0059b787
    LEA EAX,[ESP + 0x18]                ; 0059b78a
    PUSH EAX                            ; 0059b78e
    PUSH ESI                            ; 0059b78f
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0059b790
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
    ADD ESP,0x8                         ; 0059b795
    LEA EAX,[ESP + 0x18]                ; 0059b798
    PUSH EAX                            ; 0059b79c
    LEA EAX,[ESP + 0x10]                ; 0059b79d
    PUSH EAX                            ; 0059b7a1
    MOV EDI,dword ptr [0x006703ec]      ; 0059b7a2 | g_CDemonRendererPtr
    PUSH EDI                            ; 0059b7a8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0059b7a9
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0059b7ae
    PUSH 0xff                           ; 0059b7b1
    MOV EAX,[0x00678a60]                ; 0059b7b6 | g_CEditorToolsPtr
    PUSH 0x3f000000                     ; 0059b7bb
    PUSH EAX                            ; 0059b7c0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 0059b7c1
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 0059b7c6
    MOV EDX,dword ptr [0x006703ec]      ; 0059b7c9 | g_CDemonRendererPtr
    PUSH EDX                            ; 0059b7cf | g_CDemonRendererInstance
    INC EBX                             ; 0059b7d0
    ADD ESI,0x30                        ; 0059b7d1
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0059b7d4
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x3c                        ; 0059b7f0
        ;   Label: LAB_0059b7f0
    POP EBP                             ; 0059b7f3
    POP EDI                             ; 0059b7f4
    POP ESI                             ; 0059b7f5
    POP EBX                             ; 0059b7f6
    RET                                 ; 0059b7f7

