; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_renderFaces_FUN_004828b0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02c6d590
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570960
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004828b0
        ;   Label: core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0
    PUSH ESI                            ; 004828b1
    PUSH EDI                            ; 004828b2
    PUSH EBP                            ; 004828b3
    SUB ESP,0x48                        ; 004828b4
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004828b7
    PUSH 0x0                            ; 004828bb
    MOV EDX,dword ptr [0x006703ec]      ; 004828bd | g_CDemonRendererPtr2
    PUSH EDX                            ; 004828c3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004828c4
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004828c9
    PUSH 0x0                            ; 004828cc
    MOV ECX,dword ptr [0x006703ec]      ; 004828ce | g_CDemonRendererPtr2
    PUSH ECX                            ; 004828d4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 004828d5
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x20]      ; 004828da
    MOV EBX,dword ptr [EDI + 0x28]      ; 004828dd
    MOV EAX,EDX                         ; 004828e0
    SAR EDX,0x1f                        ; 004828e2
    IDIV EBX                            ; 004828e5
    MOV EBX,dword ptr [EDI + 0x384]     ; 004828e7
    IMUL EBX,EAX                        ; 004828ed
    MOV EDX,EAX                         ; 004828f0
    LEA EAX,[EBX*0x4 + 0x0]             ; 004828f2
    SUB EAX,EBX                         ; 004828f9
    SHL EAX,0x2                         ; 004828fb
    MOV EBX,dword ptr [EDI + 0x2c]      ; 004828fe
    ADD ESP,0x8                         ; 00482901
    ADD EAX,EBX                         ; 00482904
    PUSH EAX                            ; 00482906
    PUSH EDX                            ; 00482907
    MOV ESI,dword ptr [0x006810c8]      ; 00482908 | g_CDemonSetPtr
    PUSH ESI                            ; 0048290e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 0048290f
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    MOV EAX,[0x006703ec]                ; 00482914 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX + 0x18]      ; 00482919 | DAT_02c6d590
    ADD ESP,0xc                         ; 0048291c
    TEST EDX,EDX                        ; 0048291f
    JNZ 0x00482976                      ; 00482921
        ;   XREF to: 00482976 (CONDITIONAL_JUMP)  ; LAB_00482976
    MOV EBP,dword ptr [EDI + 0x24]      ; 00482923
        ;   Label: LAB_00482923
    MOV EBX,dword ptr [EDI + 0x34]      ; 00482926
    XOR ESI,ESI                         ; 00482929
    TEST EBP,EBP                        ; 0048292b
    JLE 0x0048294c                      ; 0048292d
        ;   XREF to: 0048294c (CONDITIONAL_JUMP)  ; LAB_0048294c
    MOV EBP,0x3                         ; 0048292f
    PUSH EBX                            ; 00482934
        ;   Label: LAB_00482934
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00482935
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048293a
    TEST EAX,EAX                        ; 0048293d
    JNZ 0x00482983                      ; 0048293f
        ;   XREF to: 00482983 (CONDITIONAL_JUMP)  ; LAB_00482983
    INC ESI                             ; 00482941
        ;   Label: LAB_00482941
    MOV EAX,dword ptr [EDI + 0x24]      ; 00482942
    ADD EBX,0x20                        ; 00482945
    CMP ESI,EAX                         ; 00482948
    JL 0x00482934                       ; 0048294a
        ;   XREF to: 00482934 (CONDITIONAL_JUMP)  ; LAB_00482934
    PUSH 0x1                            ; 0048294c
        ;   Label: LAB_0048294c
    MOV ECX,dword ptr [0x006703ec]      ; 0048294e | g_CDemonRendererPtr2
    PUSH ECX                            ; 00482954 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 00482955
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0048295a
    PUSH 0x1                            ; 0048295d
    MOV EBX,dword ptr [0x006703ec]      ; 0048295f | g_CDemonRendererPtr2
    PUSH EBX                            ; 00482965 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00482966
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0048296b
    ADD ESP,0x48                        ; 0048296e
    POP EBP                             ; 00482971
    POP EDI                             ; 00482972
    POP ESI                             ; 00482973
    POP EBX                             ; 00482974
    RET                                 ; 00482975
    PUSH 0x1                            ; 00482976
        ;   Label: LAB_00482976
    PUSH EAX                            ; 00482978 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00482979
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0048297e
    JMP 0x00482923                      ; 00482981
        ;   XREF to: 00482923 (UNCONDITIONAL_JUMP)  ; LAB_00482923
    MOV EAX,ESI                         ; 00482983
        ;   Label: LAB_00482983
    AND EAX,0x7f                        ; 00482985
    ADD EAX,0x80                        ; 00482988
    NEG EAX                             ; 0048298d
    PUSH EAX                            ; 0048298f
    MOV EDX,dword ptr [0x006703ec]      ; 00482990 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00482996 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 00482997
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0048299c
    MOV EAX,dword ptr [EBX]             ; 0048299f
    MOV dword ptr [ESP + 0x8],EAX       ; 004829a1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004829a5
    MOV dword ptr [ESP + 0xc],EAX       ; 004829a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004829ac
    MOV dword ptr [ESP + 0x10],EAX      ; 004829af
    MOV EAX,dword ptr [EBX + 0xc]       ; 004829b3
    MOV dword ptr [ESP + 0x14],EAX      ; 004829b6
    MOV EAX,dword ptr [EBX + 0x10]      ; 004829ba
    MOV dword ptr [ESP + 0x18],EAX      ; 004829bd
    MOV EAX,dword ptr [EBX + 0x14]      ; 004829c1
    MOV dword ptr [ESP + 0x24],EAX      ; 004829c4
    MOV EAX,dword ptr [EBX + 0x18]      ; 004829c8
    MOV dword ptr [ESP + 0x30],EAX      ; 004829cb
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004829cf
    CMP ECX,-0x1                        ; 004829d2
    JZ 0x004829ff                       ; 004829d5
        ;   XREF to: 004829ff (CONDITIONAL_JUMP)  ; LAB_004829ff
    MOV EAX,0x4                         ; 004829d7
    MOV dword ptr [ESP + 0x3c],ECX      ; 004829dc
    MOV dword ptr [ESP + 0x4],EAX       ; 004829e0
    PUSH 0x1                            ; 004829e4
        ;   Label: LAB_004829e4
    LEA EAX,[ESP + 0x4]                 ; 004829e6
    PUSH EAX                            ; 004829ea
    MOV EDX,dword ptr [0x006810c8]      ; 004829eb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004829f1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570960 ; 004829f2
        ;   XREF to: 00570960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570960(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim, int count)
    ADD ESP,0xc                         ; 004829f7
    JMP 0x00482941                      ; 004829fa
        ;   XREF to: 00482941 (UNCONDITIONAL_JUMP)  ; LAB_00482941
    MOV dword ptr [ESP + 0x4],EBP       ; 004829ff
        ;   Label: LAB_004829ff
    JMP 0x004829e4                      ; 00482a03
        ;   XREF to: 004829e4 (UNCONDITIONAL_JUMP)  ; LAB_004829e4

