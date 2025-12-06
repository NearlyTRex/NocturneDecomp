; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
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

    PUSH EBX                            ; 0048b150
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150
    PUSH ESI                            ; 0048b151
    PUSH EBP                            ; 0048b152
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048b153
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048b157
    CMP dword ptr [ESI + 0xc],0x0       ; 0048b15b
    JNZ 0x0048b197                      ; 0048b15f | LAB_0048b197
        ;   XREF to: 0048b197 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x4],0x0       ; 0048b161
        ;   Label: LAB_0048b161
    JZ 0x0048b1a9                       ; 0048b165 | LAB_0048b1a9
        ;   XREF to: 0048b1a9 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0048b167
    XOR EBP,EBP                         ; 0048b168
    MOV EDI,0x49072f                    ; 0048b16a
    MOV dword ptr [0x02d052a0],EBP      ; 0048b16f | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0048b175 | int g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],EDI      ; 0048b17b | RenderScanlineFunc * g_ScanlineRenderFunc
    POP EDI                             ; 0048b181
    LEA EAX,[EBX + 0x18]                ; 0048b182
        ;   Label: LAB_0048b182
    PUSH EAX                            ; 0048b185
    MOV EDX,dword ptr [EBX + 0x4]       ; 0048b186
    PUSH EDX                            ; 0048b189
    PUSH ESI                            ; 0048b18a
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048b18b | void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048b190
    POP EBP                             ; 0048b193
        ;   Label: LAB_0048b193
    POP ESI                             ; 0048b194
    POP EBX                             ; 0048b195
    RET                                 ; 0048b196
    LEA EAX,[EBX + 0x8]                 ; 0048b197
        ;   Label: LAB_0048b197
    PUSH EAX                            ; 0048b19a
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048b19b | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048b1a0
    TEST EAX,EAX                        ; 0048b1a3
    JZ 0x0048b193                       ; 0048b1a5 | LAB_0048b193
        ;   XREF to: 0048b193 (CONDITIONAL_JUMP)
    JMP 0x0048b161                      ; 0048b1a7 | LAB_0048b161
        ;   XREF to: 0048b161 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0048b1a9 | int g_BitsPerPixel
        ;   Label: LAB_0048b1a9
    JNZ 0x0048b1d4                      ; 0048b1b0 | LAB_0048b1d4
        ;   XREF to: 0048b1d4 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048b1b2 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV ECX,0x6                         ; 0048b1bc
        ;   Label: LAB_0048b1bc
    MOV EDX,0x2cd                       ; 0048b1c1
    MOV dword ptr [0x02d052a4],ECX      ; 0048b1c6 | int g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDX      ; 0048b1cc | int g_RenderStateFlags
    JMP 0x0048b182                      ; 0048b1d2 | LAB_0048b182
        ;   XREF to: 0048b182 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048b1d4 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0048b1d4
    JMP 0x0048b1bc                      ; 0048b1de | LAB_0048b1bc
        ;   XREF to: 0048b1bc (UNCONDITIONAL_JUMP)

