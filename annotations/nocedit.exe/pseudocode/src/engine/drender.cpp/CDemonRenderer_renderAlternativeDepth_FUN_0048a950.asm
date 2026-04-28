; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; Local Variables:
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800 at 0052298e
;
; Referenced Globals:
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a950
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
    PUSH ESI                            ; 0048a951
    PUSH EDI                            ; 0048a952
    PUSH EBP                            ; 0048a953
    SUB ESP,0x8                         ; 0048a954
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048a957
    MOV EBP,dword ptr [ESP + 0x20]      ; 0048a95b
    CMP dword ptr [EDI + 0xc],0x0       ; 0048a95f
    JNZ 0x0048aa12                      ; 0048a963
        ;   XREF to: 0048aa12 (CONDITIONAL_JUMP)  ; LAB_0048aa12
    MOV EBX,0xffffffff                  ; 0048a969
        ;   Label: LAB_0048a969
    MOV ESI,dword ptr [EBP + 0x4]       ; 0048a96e
    XOR ECX,ECX                         ; 0048a971
    XOR EDX,EDX                         ; 0048a973
    MOV dword ptr [ESP + 0x4],EBX       ; 0048a975
    MOV dword ptr [ESP],ECX             ; 0048a979
    TEST ESI,ESI                        ; 0048a97c
    JLE 0x0048a9b6                      ; 0048a97e
        ;   XREF to: 0048a9b6 (CONDITIONAL_JUMP)  ; LAB_0048a9b6
    MOV ECX,EBP                         ; 0048a980
    XOR EAX,EAX                         ; 0048a982
    MOV EBX,dword ptr [ECX + 0x18]      ; 0048a984
        ;   Label: LAB_0048a984
    MOV dword ptr [EAX + 0x2c6d5ac],EBX ; 0048a987 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,EBX,0x30                   ; 0048a98d
    MOV EBX,dword ptr [EDI]             ; 0048a990
    ADD EBX,ESI                         ; 0048a992
    MOV ESI,dword ptr [EBX + 0x10]      ; 0048a994
    AND dword ptr [ESP + 0x4],ESI       ; 0048a997
    TEST byte ptr [EBX + 0x13],0x80     ; 0048a99b
    JZ 0x0048a9a8                       ; 0048a99f
        ;   XREF to: 0048a9a8 (CONDITIONAL_JUMP)  ; LAB_0048a9a8
    MOV dword ptr [ESP],0x1             ; 0048a9a1
    ADD EAX,0x4                         ; 0048a9a8
        ;   Label: LAB_0048a9a8
    INC EDX                             ; 0048a9ab
    MOV EBX,dword ptr [EBP + 0x4]       ; 0048a9ac
    ADD ECX,0xc                         ; 0048a9af
    CMP EDX,EBX                         ; 0048a9b2
    JL 0x0048a984                       ; 0048a9b4
        ;   XREF to: 0048a984 (CONDITIONAL_JUMP)  ; LAB_0048a984
    TEST byte ptr [ESP + 0x7],0x80      ; 0048a9b6
        ;   Label: LAB_0048a9b6
    JZ 0x0048a9c4                       ; 0048a9bb
        ;   XREF to: 0048a9c4 (CONDITIONAL_JUMP)  ; LAB_0048a9c4
    TEST byte ptr [ESP + 0x4],0x1f      ; 0048a9bd
    JNZ 0x0048aa0a                      ; 0048a9c2
        ;   XREF to: 0048aa0a (CONDITIONAL_JUMP)  ; LAB_0048aa0a
    MOV EBX,dword ptr [EDI + 0x10]      ; 0048a9c4
        ;   Label: LAB_0048a9c4
    TEST EBX,EBX                        ; 0048a9c7
    JZ 0x0048a9d7                       ; 0048a9c9
        ;   XREF to: 0048a9d7 (CONDITIONAL_JUMP)  ; LAB_0048a9d7
    CMP dword ptr [EDI + 0x4],0x0       ; 0048a9cb
    JZ 0x0048a9d7                       ; 0048a9cf
        ;   XREF to: 0048a9d7 (CONDITIONAL_JUMP)  ; LAB_0048a9d7
    MOV EAX,dword ptr [ESP]             ; 0048a9d1
    MOV dword ptr [EDI + 0x10],EAX      ; 0048a9d4
    CMP dword ptr [EDI + 0x4],0x0       ; 0048a9d7
        ;   Label: LAB_0048a9d7
    JZ 0x0048aa27                       ; 0048a9db
        ;   XREF to: 0048aa27 (CONDITIONAL_JUMP)  ; LAB_0048aa27
    XOR EDX,EDX                         ; 0048a9dd
    MOV EAX,0x49077d                    ; 0048a9df
    MOV dword ptr [0x02d052a0],EDX      ; 0048a9e4 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 0048a9ea | g_VertexPreprocessMode
    MOV [0x02d0257c],EAX                ; 0048a9f0 | g_ScanlineRenderFunc
    PUSH 0x2c6d5ac                      ; 0048a9f5 | g_VertexIndexBuffer
        ;   Label: LAB_0048a9f5
    MOV ESI,dword ptr [EBP + 0x4]       ; 0048a9fa
    PUSH ESI                            ; 0048a9fd
    PUSH EDI                            ; 0048a9fe
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048a9ff
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048aa04
    MOV dword ptr [EDI + 0x10],EBX      ; 0048aa07
    ADD ESP,0x8                         ; 0048aa0a
        ;   Label: LAB_0048aa0a
    POP EBP                             ; 0048aa0d
    POP EDI                             ; 0048aa0e
    POP ESI                             ; 0048aa0f
    POP EBX                             ; 0048aa10
    RET                                 ; 0048aa11
    LEA EAX,[EBP + 0x8]                 ; 0048aa12
        ;   Label: LAB_0048aa12
    PUSH EAX                            ; 0048aa15
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048aa16
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048aa1b
    TEST EAX,EAX                        ; 0048aa1e
    JZ 0x0048aa0a                       ; 0048aa20
        ;   XREF to: 0048aa0a (CONDITIONAL_JUMP)  ; LAB_0048aa0a
    JMP 0x0048a969                      ; 0048aa22
        ;   XREF to: 0048a969 (UNCONDITIONAL_JUMP)  ; LAB_0048a969
    MOV ECX,0x90                        ; 0048aa27
        ;   Label: LAB_0048aa27
    MOV ESI,0x6                         ; 0048aa2c
    MOV EDX,0x490902                    ; 0048aa31
    MOV dword ptr [0x02d052a0],ECX      ; 0048aa36 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ESI      ; 0048aa3c | g_VertexPreprocessMode
    MOV dword ptr [0x02d0257c],EDX      ; 0048aa42 | g_ScanlineRenderFunc
    JMP 0x0048a9f5                      ; 0048aa48
        ;   XREF to: 0048a9f5 (UNCONDITIONAL_JUMP)  ; LAB_0048a9f5

