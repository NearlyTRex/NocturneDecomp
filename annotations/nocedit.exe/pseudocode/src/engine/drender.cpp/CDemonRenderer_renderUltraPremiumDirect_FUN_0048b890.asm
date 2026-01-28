; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b890
        ;   Label: engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890
    PUSH ESI                            ; 0048b891
    PUSH EDI                            ; 0048b892
    PUSH EBP                            ; 0048b893
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048b894
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048b898
    CMP dword ptr [EBP + 0xc],0x0       ; 0048b89c
    JNZ 0x0048b916                      ; 0048b8a0
        ;   XREF to: 0048b916 (CONDITIONAL_JUMP)  ; LAB_0048b916
    MOV ECX,0xffffffff                  ; 0048b8a6
        ;   Label: LAB_0048b8a6
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b8ab
    XOR EDX,EDX                         ; 0048b8ae
    TEST EBX,EBX                        ; 0048b8b0
    JLE 0x0048b8d0                      ; 0048b8b2
        ;   XREF to: 0048b8d0 (CONDITIONAL_JUMP)  ; LAB_0048b8d0
    MOV EAX,ESI                         ; 0048b8b4
    MOV EDI,dword ptr [EBP]             ; 0048b8b6
    MOV EBX,dword ptr [EAX + 0x18]      ; 0048b8b9
        ;   Label: LAB_0048b8b9
    IMUL EBX,EBX,0x30                   ; 0048b8bc
    INC EDX                             ; 0048b8bf
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0048b8c0
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b8c4
    ADD EAX,0x4                         ; 0048b8c7
    CMP EDX,EBX                         ; 0048b8ca
    JL 0x0048b8b9                       ; 0048b8cc
        ;   XREF to: 0048b8b9 (CONDITIONAL_JUMP)  ; LAB_0048b8b9
    MOV EAX,EAX                         ; 0048b8ce
    TEST ECX,0x80000000                 ; 0048b8d0
        ;   Label: LAB_0048b8d0
    JZ 0x0048b8dd                       ; 0048b8d6
        ;   XREF to: 0048b8dd (CONDITIONAL_JUMP)  ; LAB_0048b8dd
    TEST CL,0x1f                        ; 0048b8d8
    JNZ 0x0048b911                      ; 0048b8db
        ;   XREF to: 0048b911 (CONDITIONAL_JUMP)  ; LAB_0048b911
    CMP dword ptr [EBP + 0x4],0x0       ; 0048b8dd
        ;   Label: LAB_0048b8dd
    JZ 0x0048b92b                       ; 0048b8e1
        ;   XREF to: 0048b92b (CONDITIONAL_JUMP)  ; LAB_0048b92b
    MOV EDX,0x1                         ; 0048b8e3
    MOV EAX,0x4907e7                    ; 0048b8e8
    XOR ECX,ECX                         ; 0048b8ed
    MOV dword ptr [0x02d052a0],EDX      ; 0048b8ef | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048b8f5 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048b8fb | g_ScanlineRenderFunc
    LEA EAX,[ESI + 0x18]                ; 0048b900
        ;   Label: LAB_0048b900
    PUSH EAX                            ; 0048b903
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048b904
    PUSH EBX                            ; 0048b907
    PUSH EBP                            ; 0048b908
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b909
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048b90e
    POP EBP                             ; 0048b911
        ;   Label: LAB_0048b911
    POP EDI                             ; 0048b912
    POP ESI                             ; 0048b913
    POP EBX                             ; 0048b914
    RET                                 ; 0048b915
    LEA EAX,[ESI + 0x8]                 ; 0048b916
        ;   Label: LAB_0048b916
    PUSH EAX                            ; 0048b919
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b91a
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048b91f
    TEST EAX,EAX                        ; 0048b922
    JZ 0x0048b911                       ; 0048b924
        ;   XREF to: 0048b911 (CONDITIONAL_JUMP)  ; LAB_0048b911
    JMP 0x0048b8a6                      ; 0048b926
        ;   XREF to: 0048b8a6 (UNCONDITIONAL_JUMP)  ; LAB_0048b8a6
    CMP dword ptr [0x0067939c],0x20     ; 0048b92b | g_BitsPerPixel
        ;   Label: LAB_0048b92b
    JNZ 0x0048b956                      ; 0048b932
        ;   XREF to: 0048b956 (CONDITIONAL_JUMP)  ; LAB_0048b956
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b934 | g_ScanlineRenderFunc
    MOV EDI,0x6                         ; 0048b93e
        ;   Label: LAB_0048b93e
    MOV EBX,0x2e7                       ; 0048b943
    MOV dword ptr [0x02d052a4],EDI      ; 0048b948 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EBX      ; 0048b94e | g_RenderStateFlags
    JMP 0x0048b900                      ; 0048b954
        ;   XREF to: 0048b900 (UNCONDITIONAL_JUMP)  ; LAB_0048b900
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b956 | g_ScanlineRenderFunc
        ;   Label: LAB_0048b956
    JMP 0x0048b93e                      ; 0048b960
        ;   XREF to: 0048b93e (UNCONDITIONAL_JUMP)  ; LAB_0048b93e

