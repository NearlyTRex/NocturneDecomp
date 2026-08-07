; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980 at 004d7b0e
;
; Referenced Globals:
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ef90
        ;   Label: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
    PUSH ESI                            ; 0045ef91
    PUSH EDI                            ; 0045ef92
    PUSH EBP                            ; 0045ef93
    SUB ESP,0x8                         ; 0045ef94
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045ef97
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045ef9b
    CMP dword ptr [EDI + 0xc],0x0       ; 0045ef9f
    JNZ 0x0045f052                      ; 0045efa3
        ;   XREF to: 0045f052 (CONDITIONAL_JUMP)  ; LAB_0045f052
    MOV EBX,0xffffffff                  ; 0045efa9
        ;   Label: LAB_0045efa9
    MOV ESI,dword ptr [EBP + 0x4]       ; 0045efae
    XOR ECX,ECX                         ; 0045efb1
    XOR EDX,EDX                         ; 0045efb3
    MOV dword ptr [ESP + 0x4],EBX       ; 0045efb5
    MOV dword ptr [ESP],ECX             ; 0045efb9
    TEST ESI,ESI                        ; 0045efbc
    JLE 0x0045eff6                      ; 0045efbe
        ;   XREF to: 0045eff6 (CONDITIONAL_JUMP)  ; LAB_0045eff6
    MOV ECX,EBP                         ; 0045efc0
    XOR EAX,EAX                         ; 0045efc2
    MOV EBX,dword ptr [ECX + 0x18]      ; 0045efc4
        ;   Label: LAB_0045efc4
    MOV dword ptr [EAX + 0x1b4d76c],EBX ; 0045efc7 | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,EBX,0x30                   ; 0045efcd
    MOV EBX,dword ptr [EDI]             ; 0045efd0
    ADD EBX,ESI                         ; 0045efd2
    MOV ESI,dword ptr [EBX + 0x10]      ; 0045efd4
    AND dword ptr [ESP + 0x4],ESI       ; 0045efd7
    TEST byte ptr [EBX + 0x13],0x80     ; 0045efdb
    JZ 0x0045efe8                       ; 0045efdf
        ;   XREF to: 0045efe8 (CONDITIONAL_JUMP)  ; LAB_0045efe8
    MOV dword ptr [ESP],0x1             ; 0045efe1
    ADD EAX,0x4                         ; 0045efe8
        ;   Label: LAB_0045efe8
    INC EDX                             ; 0045efeb
    MOV EBX,dword ptr [EBP + 0x4]       ; 0045efec
    ADD ECX,0xc                         ; 0045efef
    CMP EDX,EBX                         ; 0045eff2
    JL 0x0045efc4                       ; 0045eff4
        ;   XREF to: 0045efc4 (CONDITIONAL_JUMP)  ; LAB_0045efc4
    TEST byte ptr [ESP + 0x7],0x80      ; 0045eff6
        ;   Label: LAB_0045eff6
    JZ 0x0045f004                       ; 0045effb
        ;   XREF to: 0045f004 (CONDITIONAL_JUMP)  ; LAB_0045f004
    TEST byte ptr [ESP + 0x4],0x1f      ; 0045effd
    JNZ 0x0045f04a                      ; 0045f002
        ;   XREF to: 0045f04a (CONDITIONAL_JUMP)  ; LAB_0045f04a
    MOV EBX,dword ptr [EDI + 0x10]      ; 0045f004
        ;   Label: LAB_0045f004
    TEST EBX,EBX                        ; 0045f007
    JZ 0x0045f017                       ; 0045f009
        ;   XREF to: 0045f017 (CONDITIONAL_JUMP)  ; LAB_0045f017
    CMP dword ptr [EDI + 0x4],0x0       ; 0045f00b
    JZ 0x0045f017                       ; 0045f00f
        ;   XREF to: 0045f017 (CONDITIONAL_JUMP)  ; LAB_0045f017
    MOV EAX,dword ptr [ESP]             ; 0045f011
    MOV dword ptr [EDI + 0x10],EAX      ; 0045f014
    CMP dword ptr [EDI + 0x4],0x0       ; 0045f017
        ;   Label: LAB_0045f017
    JZ 0x0045f067                       ; 0045f01b
        ;   XREF to: 0045f067 (CONDITIONAL_JUMP)  ; LAB_0045f067
    XOR EDX,EDX                         ; 0045f01d
    MOV EAX,0x463ac7                    ; 0045f01f
    MOV dword ptr [0x01c039a0],EDX      ; 0045f024 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EDX      ; 0045f02a | g_VertexPreprocessMode
    MOV [0x01c00c7c],EAX                ; 0045f030 | g_ScanlineRenderFunc
    PUSH 0x1b4d76c                      ; 0045f035 | DAT_01b4d76c
        ;   Label: LAB_0045f035
    MOV ESI,dword ptr [EBP + 0x4]       ; 0045f03a
    PUSH ESI                            ; 0045f03d
    PUSH EDI                            ; 0045f03e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f03f
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045f044
    MOV dword ptr [EDI + 0x10],EBX      ; 0045f047
    ADD ESP,0x8                         ; 0045f04a
        ;   Label: LAB_0045f04a
    POP EBP                             ; 0045f04d
    POP EDI                             ; 0045f04e
    POP ESI                             ; 0045f04f
    POP EBX                             ; 0045f050
    RET                                 ; 0045f051
    LEA EAX,[EBP + 0x8]                 ; 0045f052
        ;   Label: LAB_0045f052
    PUSH EAX                            ; 0045f055
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f056
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045f05b
    TEST EAX,EAX                        ; 0045f05e
    JZ 0x0045f04a                       ; 0045f060
        ;   XREF to: 0045f04a (CONDITIONAL_JUMP)  ; LAB_0045f04a
    JMP 0x0045efa9                      ; 0045f062
        ;   XREF to: 0045efa9 (UNCONDITIONAL_JUMP)  ; LAB_0045efa9
    MOV ECX,0x90                        ; 0045f067
        ;   Label: LAB_0045f067
    MOV ESI,0x6                         ; 0045f06c
    MOV EDX,0x463c42                    ; 0045f071
    MOV dword ptr [0x01c039a0],ECX      ; 0045f076 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],ESI      ; 0045f07c | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],EDX      ; 0045f082 | g_ScanlineRenderFunc
    JMP 0x0045f035                      ; 0045f088
        ;   XREF to: 0045f035 (UNCONDITIONAL_JUMP)  ; LAB_0045f035

