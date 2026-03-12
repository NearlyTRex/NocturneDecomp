; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0049cbd0(CDemonTriangle *this_ptr)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x78]:24  SStack_78
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; CVector3i        Stack[-0x30]:12  local_30
; CVector3i        Stack[-0x24]:12  local_24
; CVector3i        Stack[-0x18]:12  local_18
;
; Referenced Globals:
;   double g_NormalVectorScaleFactor = -65536
;   double g_TriangleDataScaleFactor = 65536
;   double g_TriangleDepthScaleFactor = 256
;   float g_VertexCoordinateScaleFactor = 256
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cbd0
        ;   Label: core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0
    PUSH ESI                            ; 0049cbd1
    PUSH EDI                            ; 0049cbd2
    SUB ESP,0x6c                        ; 0049cbd3
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0049cbd6
    LEA EBX,[ESP + 0x48]                ; 0049cbda
    MOV EAX,ESI                         ; 0049cbde
    MOV EDX,dword ptr [0x006703e8]      ; 0049cbe0 | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0049cbe6
    FMUL float ptr [0x0065d2d0]         ; 0049cbe8 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 0049cbee
    FLD float ptr [EAX + 0x4]           ; 0049cbf0
    FMUL float ptr [0x0065d2d0]         ; 0049cbf3 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 0049cbf9
    FLD float ptr [EAX + 0x8]           ; 0049cbfc
    FMUL float ptr [0x0065d2d0]         ; 0049cbff | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 0049cc05
    LEA EAX,[ESP + 0x48]                ; 0049cc08
    PUSH EAX                            ; 0049cc0c
    MOV EAX,dword ptr [EDX]             ; 0049cc0d | g_CDemonRendererInstance
    PUSH EAX                            ; 0049cc0f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049cc10
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x68]                ; 0049cc15
    ADD ESP,0x8                         ; 0049cc19
    LEA EAX,[ESI + 0xc]                 ; 0049cc1c
    MOV EDX,dword ptr [0x006703e8]      ; 0049cc1f | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0049cc25
    FMUL float ptr [0x0065d2d0]         ; 0049cc27 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 0049cc2d
    FLD float ptr [EAX + 0x4]           ; 0049cc2f
    FMUL float ptr [0x0065d2d0]         ; 0049cc32 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 0049cc38
    FLD float ptr [EAX + 0x8]           ; 0049cc3b
    FMUL float ptr [0x0065d2d0]         ; 0049cc3e | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 0049cc44
    LEA EAX,[ESP + 0x60]                ; 0049cc47
    PUSH EAX                            ; 0049cc4b
    MOV EAX,dword ptr [EDX]             ; 0049cc4c | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 0049cc4e
    PUSH EAX                            ; 0049cc51
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049cc52
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x5c]                ; 0049cc57
    ADD ESP,0x8                         ; 0049cc5b
    LEA EAX,[ESI + 0x18]                ; 0049cc5e
    MOV EDX,dword ptr [0x006703e8]      ; 0049cc61 | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0049cc67
    FMUL float ptr [0x0065d2d0]         ; 0049cc69 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 0049cc6f
    FLD float ptr [EAX + 0x4]           ; 0049cc71
    FMUL float ptr [0x0065d2d0]         ; 0049cc74 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 0049cc7a
    FLD float ptr [EAX + 0x8]           ; 0049cc7d
    FMUL float ptr [0x0065d2d0]         ; 0049cc80 | g_VertexCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 0049cc86
    LEA EAX,[ESP + 0x54]                ; 0049cc89
    PUSH EAX                            ; 0049cc8d
    MOV EAX,dword ptr [EDX]             ; 0049cc8e | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 0049cc90
    PUSH EAX                            ; 0049cc93
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049cc94
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3                         ; 0049cc99
    ADD ESP,0x8                         ; 0049cc9e
    MOV dword ptr [ESP + 0x4],EDX       ; 0049cca1
    FLD double ptr [0x00622e4a]         ; 0049cca5 | g_NormalVectorScaleFactor
    FLD float ptr [ESI + 0x24]          ; 0049ccab
    FMUL ST1                            ; 0049ccae
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049ccb0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0049ccb5
    FLD float ptr [ESI + 0x28]          ; 0049ccb9
    FMUL ST1                            ; 0049ccbc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049ccbe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 0049ccc3
    FMUL float ptr [ESI + 0x2c]         ; 0049ccc7
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049ccca
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 0049cccf
    FLD float ptr [ESI + 0x30]          ; 0049ccd3
    FMUL double ptr [0x00622e52]        ; 0049ccd6 | g_TriangleDataScaleFactor
    FMUL double ptr [0x00622e5a]        ; 0049ccdc | g_TriangleDepthScaleFactor
    MOV EAX,ESP                         ; 0049cce2
    MOV EBX,0x1                         ; 0049cce4
    PUSH EAX                            ; 0049cce9
    MOV EDI,dword ptr [0x006703e8]      ; 0049ccea | g_CDemonRendererPtr1
    XOR ECX,ECX                         ; 0049ccf0
    PUSH EDI                            ; 0049ccf2 | g_CDemonRendererInstance
    MOV ESI,0x2                         ; 0049ccf3
    MOV dword ptr [ESP + 0x20],ECX      ; 0049ccf8
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049ccfc
    MOV dword ptr [ESP + 0x38],ESI      ; 0049cd00
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049cd04
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 0049cd09
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 0049cd0d
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049cd12
    ADD ESP,0x6c                        ; 0049cd15
    POP EDI                             ; 0049cd18
    POP ESI                             ; 0049cd19
    POP EBX                             ; 0049cd1a
    RET                                 ; 0049cd1b

