; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_0046682e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0046682e
        ;   Label: core_dpart.cpp_FUN_0046682e
    PUSH EBX                            ; 00466830
    PUSH ESI                            ; 00466831
    PUSH EDI                            ; 00466832
    PUSH EBP                            ; 00466833
    SUB ESP,0x48                        ; 00466834
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00466837
    PUSH 0x0                            ; 0046683b
    MOV EDX,dword ptr [0x005f2afc]      ; 0046683d | DAT_005f2afc
    PUSH EDX                            ; 00466843
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 00466844
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00466849
    PUSH 0x0                            ; 0046684c
    MOV ECX,dword ptr [0x005f2afc]      ; 0046684e | DAT_005f2afc
    PUSH ECX                            ; 00466854
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 00466855
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x20]      ; 0046685a
    MOV EBX,dword ptr [EDI + 0x28]      ; 0046685d
    MOV EAX,EDX                         ; 00466860
    SAR EDX,0x1f                        ; 00466862
    IDIV EBX                            ; 00466865
    MOV EBX,dword ptr [EDI + 0x384]     ; 00466867
    IMUL EBX,EAX                        ; 0046686d
    MOV EDX,EAX                         ; 00466870
    LEA EAX,[EBX*0x4 + 0x0]             ; 00466872
    SUB EAX,EBX                         ; 00466879
    SHL EAX,0x2                         ; 0046687b
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0046687e
    ADD ESP,0x8                         ; 00466881
    ADD EAX,EBX                         ; 00466884
    PUSH EAX                            ; 00466886
    PUSH EDX                            ; 00466887
    MOV ESI,dword ptr [0x00603b28]      ; 00466888 | g_CDemonSetPtr
    PUSH ESI                            ; 0046688e
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 0046688f
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,[0x005f2afc]                ; 00466894 | DAT_005f2afc
    MOV EDX,dword ptr [EAX + 0x18]      ; 00466899
    ADD ESP,0xc                         ; 0046689c
    TEST EDX,EDX                        ; 0046689f
    JNZ 0x004668f6                      ; 004668a1
        ;   XREF to: 004668f6 (CONDITIONAL_JUMP)  ; LAB_004668f6
    MOV EBP,dword ptr [EDI + 0x24]      ; 004668a3
        ;   Label: LAB_004668a3
    MOV EBX,dword ptr [EDI + 0x34]      ; 004668a6
    XOR ESI,ESI                         ; 004668a9
    TEST EBP,EBP                        ; 004668ab
    JLE 0x004668cc                      ; 004668ad
        ;   XREF to: 004668cc (CONDITIONAL_JUMP)  ; LAB_004668cc
    MOV EBP,0x3                         ; 004668af
    PUSH EBX                            ; 004668b4
        ;   Label: LAB_004668b4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004668b5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004668ba
    TEST EAX,EAX                        ; 004668bd
    JNZ 0x00466903                      ; 004668bf
        ;   XREF to: 00466903 (CONDITIONAL_JUMP)  ; LAB_00466903
    INC ESI                             ; 004668c1
        ;   Label: LAB_004668c1
    MOV EAX,dword ptr [EDI + 0x24]      ; 004668c2
    ADD EBX,0x20                        ; 004668c5
    CMP ESI,EAX                         ; 004668c8
    JL 0x004668b4                       ; 004668ca
        ;   XREF to: 004668b4 (CONDITIONAL_JUMP)  ; LAB_004668b4
    PUSH 0x1                            ; 004668cc
        ;   Label: LAB_004668cc
    MOV ECX,dword ptr [0x005f2afc]      ; 004668ce | DAT_005f2afc
    PUSH ECX                            ; 004668d4
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 004668d5
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004668da
    PUSH 0x1                            ; 004668dd
    MOV EBX,dword ptr [0x005f2afc]      ; 004668df | DAT_005f2afc
    PUSH EBX                            ; 004668e5
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 004668e6
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004668eb
    ADD ESP,0x48                        ; 004668ee
    POP EBP                             ; 004668f1
    POP EDI                             ; 004668f2
    POP ESI                             ; 004668f3
    POP EBX                             ; 004668f4
    RET                                 ; 004668f5
    PUSH 0x1                            ; 004668f6
        ;   Label: LAB_004668f6
    PUSH EAX                            ; 004668f8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 004668f9
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004668fe
    JMP 0x004668a3                      ; 00466901
        ;   XREF to: 004668a3 (UNCONDITIONAL_JUMP)  ; LAB_004668a3
    MOV EAX,ESI                         ; 00466903
        ;   Label: LAB_00466903
    AND EAX,0x7f                        ; 00466905
    ADD EAX,0x80                        ; 00466908
    NEG EAX                             ; 0046690d
    PUSH EAX                            ; 0046690f
    MOV EDX,dword ptr [0x005f2afc]      ; 00466910 | DAT_005f2afc
    PUSH EDX                            ; 00466916
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0 ; 00466917
        ;   XREF to: 0046d3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0046691c
    MOV EAX,dword ptr [EBX]             ; 0046691f
    MOV dword ptr [ESP + 0x8],EAX       ; 00466921
    MOV EAX,dword ptr [EBX + 0x4]       ; 00466925
    MOV dword ptr [ESP + 0xc],EAX       ; 00466928
    MOV EAX,dword ptr [EBX + 0x8]       ; 0046692c
    MOV dword ptr [ESP + 0x10],EAX      ; 0046692f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00466933
    MOV dword ptr [ESP + 0x14],EAX      ; 00466936
    MOV EAX,dword ptr [EBX + 0x10]      ; 0046693a
    MOV dword ptr [ESP + 0x18],EAX      ; 0046693d
    MOV EAX,dword ptr [EBX + 0x14]      ; 00466941
    MOV dword ptr [ESP + 0x24],EAX      ; 00466944
    MOV EAX,dword ptr [EBX + 0x18]      ; 00466948
    MOV dword ptr [ESP + 0x30],EAX      ; 0046694b
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0046694f
    CMP ECX,-0x1                        ; 00466952
    JZ 0x0046697f                       ; 00466955
        ;   XREF to: 0046697f (CONDITIONAL_JUMP)  ; LAB_0046697f
    MOV EAX,0x4                         ; 00466957
    MOV dword ptr [ESP + 0x3c],ECX      ; 0046695c
    MOV dword ptr [ESP + 0x4],EAX       ; 00466960
    PUSH 0x1                            ; 00466964
        ;   Label: LAB_00466964
    LEA EAX,[ESP + 0x4]                 ; 00466966
    PUSH EAX                            ; 0046696a
    MOV EDX,dword ptr [0x00603b28]      ; 0046696b | g_CDemonSetPtr
    PUSH EDX                            ; 00466971
    CALL core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70 ; 00466972
        ;   XREF to: 0053ad70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim, int count)
    ADD ESP,0xc                         ; 00466977
    JMP 0x004668c1                      ; 0046697a
        ;   XREF to: 004668c1 (UNCONDITIONAL_JUMP)  ; LAB_004668c1
    MOV dword ptr [ESP + 0x4],EBP       ; 0046697f
        ;   Label: LAB_0046697f
    JMP 0x00466964                      ; 00466983
        ;   XREF to: 00466964 (UNCONDITIONAL_JUMP)  ; LAB_00466964

