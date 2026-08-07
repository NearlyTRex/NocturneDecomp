; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(CDemonRenderer *this_ptr,SInputFace *face)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01b4d774
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f8d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0
    PUSH ESI                            ; 0045f8d1
    PUSH EDI                            ; 0045f8d2
    PUSH EBP                            ; 0045f8d3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045f8d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0045f8d8
    CMP dword ptr [ECX + 0x4],0x0       ; 0045f8dc
    JZ 0x0045f95e                       ; 0045f8e0
        ;   XREF to: 0045f95e (CONDITIONAL_JUMP)  ; LAB_0045f95e
    LEA EAX,[EAX]                       ; 0045f8e2
    LEA EDX,[EDX]                       ; 0045f8e8
    MOV EAX,EAX                         ; 0045f8ee
    XOR EAX,EAX                         ; 0045f8f0
        ;   Label: LAB_0045f8f0
    MOV AX,word ptr [EBP]               ; 0045f8f2
    MOV [0x01b4d76c],EAX                ; 0045f8f6 | DAT_01b4d76c
    XOR EAX,EAX                         ; 0045f8fb
    MOV AX,word ptr [EBP + 0x2]         ; 0045f8fd
    MOV [0x01b4d770],EAX                ; 0045f901 | DAT_01b4d770
    XOR EAX,EAX                         ; 0045f906
    MOV AX,word ptr [EBP + 0x4]         ; 0045f908
    MOV ESI,dword ptr [ECX + 0x4]       ; 0045f90c
    MOV [0x01b4d774],EAX                ; 0045f90f | DAT_01b4d774
    TEST ESI,ESI                        ; 0045f914
    JNZ 0x0045f99b                      ; 0045f916
        ;   XREF to: 0045f99b (CONDITIONAL_JUMP)  ; LAB_0045f99b
    CMP dword ptr [0x005b7624],0x20     ; 0045f91c | g_BitsPerPixel
    JNZ 0x0045f9b6                      ; 0045f923
        ;   XREF to: 0045f9b6 (CONDITIONAL_JUMP)  ; LAB_0045f9b6
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f929 | g_ScanlineRenderFunc
    MOV EBX,0x6                         ; 0045f933
        ;   Label: LAB_0045f933
    MOV EDX,0x2cd                       ; 0045f938
    MOV dword ptr [0x01c039a4],EBX      ; 0045f93d | g_VertexPreprocessMode
    MOV dword ptr [0x01c039a0],EDX      ; 0045f943 | g_RenderStateFlags
    PUSH 0x1b4d76c                      ; 0045f949 | DAT_01b4d76c
        ;   Label: LAB_0045f949
    PUSH 0x3                            ; 0045f94e
    PUSH ECX                            ; 0045f950
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f951
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045f956
    POP EBP                             ; 0045f959
    POP EDI                             ; 0045f95a
    POP ESI                             ; 0045f95b
    POP EBX                             ; 0045f95c
    RET                                 ; 0045f95d
    CMP dword ptr [ECX + 0x20],0x0      ; 0045f95e
        ;   Label: LAB_0045f95e
    JNZ 0x0045f8f0                      ; 0045f962
        ;   XREF to: 0045f8f0 (CONDITIONAL_JUMP)  ; LAB_0045f8f0
    MOV EAX,EBP                         ; 0045f964
    LEA EDI,[EBP + 0x6]                 ; 0045f966
    XOR EDX,EDX                         ; 0045f969
        ;   Label: LAB_0045f969
    MOV DX,word ptr [EAX]               ; 0045f96b
    IMUL EDX,EDX,0x30                   ; 0045f96e
    XOR ESI,ESI                         ; 0045f971
    MOV SI,word ptr [EAX + 0x6]         ; 0045f973
    MOV EBX,dword ptr [ECX]             ; 0045f977
    SHL ESI,0x8                         ; 0045f979
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0045f97c
    XOR EBX,EBX                         ; 0045f980
    MOV BX,word ptr [EAX + 0xc]         ; 0045f982
    MOV ESI,dword ptr [ECX]             ; 0045f986
    SHL EBX,0x8                         ; 0045f988
    ADD EAX,0x2                         ; 0045f98b
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0045f98e
    CMP EAX,EDI                         ; 0045f992
    JNZ 0x0045f969                      ; 0045f994
        ;   XREF to: 0045f969 (CONDITIONAL_JUMP)  ; LAB_0045f969
    JMP 0x0045f8f0                      ; 0045f996
        ;   XREF to: 0045f8f0 (UNCONDITIONAL_JUMP)  ; LAB_0045f8f0
    XOR EDI,EDI                         ; 0045f99b
        ;   Label: LAB_0045f99b
    MOV ESI,0x463a79                    ; 0045f99d
    MOV dword ptr [0x01c039a0],EDI      ; 0045f9a2 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EDI      ; 0045f9a8 | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],ESI      ; 0045f9ae | g_ScanlineRenderFunc
    JMP 0x0045f949                      ; 0045f9b4
        ;   XREF to: 0045f949 (UNCONDITIONAL_JUMP)  ; LAB_0045f949
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f9b6 | g_ScanlineRenderFunc
        ;   Label: LAB_0045f9b6
    JMP 0x0045f933                      ; 0045f9c0
        ;   XREF to: 0045f933 (UNCONDITIONAL_JUMP)  ; LAB_0045f933

