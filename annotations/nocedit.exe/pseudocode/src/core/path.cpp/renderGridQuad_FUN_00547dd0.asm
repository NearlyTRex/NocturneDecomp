; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)
;
; Parameters:
; int              Stack[0x4]:4   grid_x
; int              Stack[0x8]:4   grid_y
; int              Stack[0xc]:4   grid_z
; int              Stack[0x10]:4   red
; int              Stack[0x14]:4   green
; int              Stack[0x18]:4   blue
; int              Stack[0x1c]:4   alpha
; Local Variables:
; CVector3i        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0063ea28 = 256
;   double DOUBLE_0063ea30 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLPrimitiveQuad SMRGLPrimitiveQuad_030d4fd0
;   undefined4 g_CDemonRaytraceInstance.bbox_min.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00547dd0
        ;   Label: core_path.cpp_renderGridQuad_FUN_00547dd0
    PUSH EDI                            ; 00547dd1
    PUSH EBP                            ; 00547dd2
    SUB ESP,0x24                        ; 00547dd3
    MOV EBP,dword ptr [ESP + 0x40]      ; 00547dd6
    MOV ESI,dword ptr [ESP + 0x44]      ; 00547dda
    MOV EDI,dword ptr [ESP + 0x48]      ; 00547dde
    PUSH EBX                            ; 00547de2
    FLD float ptr [0x0063ea28]          ; 00547de3 | FLOAT_0063ea28
    FLD float ptr [0x03277d48]          ; 00547de9 | g_CDemonRaytraceInstance.adjusted_size.x
    FMUL ST1                            ; 00547def
    FLD float ptr [0x03277d4c]          ; 00547df1 | g_CDemonRaytraceInstance.adjusted_size.y
    FMUL ST2                            ; 00547df7
    FLD float ptr [0x03277d50]          ; 00547df9 | g_CDemonRaytraceInstance.adjusted_size.z
    FMULP ST3                           ; 00547dff
    FLD double ptr [0x0063ea30]         ; 00547e01 | DOUBLE_0063ea30
    FLD float ptr [0x03277d28]          ; 00547e07 | g_CDemonRaytraceInstance.bbox_min.y
    FMUL ST1                            ; 00547e0d
    FILD dword ptr [ESP + 0x38]         ; 00547e0f
    FXCH ST4                            ; 00547e13
    FSTP float ptr [ESP + 0x10]         ; 00547e15
    FXCH ST3                            ; 00547e19
    FMUL float ptr [ESP + 0x10]         ; 00547e1b
    FILD dword ptr [ESP + 0x3c]         ; 00547e1f
    FXCH ST3                            ; 00547e23
    FSTP float ptr [ESP + 0x14]         ; 00547e25
    FXCH ST2                            ; 00547e29
    FMUL float ptr [ESP + 0x14]         ; 00547e2b
    FILD dword ptr [ESP + 0x40]         ; 00547e2f
    MOV EDX,dword ptr [ESP + 0x50]      ; 00547e33
    FXCH ST5                            ; 00547e37
    FSTP float ptr [ESP + 0x18]         ; 00547e39
    FXCH ST4                            ; 00547e3d
    FMUL float ptr [ESP + 0x18]         ; 00547e3f
    SHL EDX,0x8                         ; 00547e43
    MOV EAX,[0x006703ec]                ; 00547e46 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x50],EDX      ; 00547e4b
    LEA EDX,[ESP + 0x4]                 ; 00547e4f
    FXCH ST2                            ; 00547e53
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547e55
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00547e5a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547e5c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00547e61
    FISTP dword ptr [ESP + 0x4]         ; 00547e63
    FXCH ST2                            ; 00547e67
    FADDP ST3,ST0                       ; 00547e69
    FISTP dword ptr [ESP + 0xc]         ; 00547e6b
    FADDP                               ; 00547e6f
    PUSH EDX                            ; 00547e71
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547e72
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 00547e77
    MOV EAX,dword ptr [EAX]             ; 00547e7b | g_CDemonRendererInstance
    PUSH EAX                            ; 00547e7d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00547e7e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00547e83
    MOV EAX,dword ptr [ESP + 0x4]       ; 00547e86
    MOV dword ptr [ESP + 0x24],EAX      ; 00547e8a
    MOV EDX,dword ptr [0x006703ec]      ; 00547e8e | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x24]         ; 00547e94
    LEA EAX,[ESP + 0x4]                 ; 00547e98
    FLD ST0                             ; 00547e9c
    FADD float ptr [ESP + 0x10]         ; 00547e9e
    PUSH EAX                            ; 00547ea2
    FSTP ST1                            ; 00547ea3
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547ea5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00547eaa
    MOV EAX,dword ptr [EDX]             ; 00547eae | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00547eb0
    PUSH EAX                            ; 00547eb3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00547eb4
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00547eb9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00547ebc
    MOV dword ptr [ESP + 0x24],EAX      ; 00547ec0
    MOV EDX,dword ptr [0x006703ec]      ; 00547ec4 | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x24]         ; 00547eca
    LEA EAX,[ESP + 0x4]                 ; 00547ece
    FLD ST0                             ; 00547ed2
    FADD float ptr [ESP + 0x18]         ; 00547ed4
    PUSH EAX                            ; 00547ed8
    FSTP ST1                            ; 00547ed9
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547edb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 00547ee0
    MOV EAX,dword ptr [EDX]             ; 00547ee4 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00547ee6
    PUSH EAX                            ; 00547ee9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00547eea
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00547eef
    MOV EAX,dword ptr [ESP + 0x4]       ; 00547ef2
    MOV dword ptr [ESP + 0x24],EAX      ; 00547ef6
    MOV EDX,dword ptr [0x006703ec]      ; 00547efa | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x24]         ; 00547f00
    LEA EAX,[ESP + 0x4]                 ; 00547f04
    FLD ST0                             ; 00547f08
    FSUB float ptr [ESP + 0x10]         ; 00547f0a
    PUSH EAX                            ; 00547f0e
    FSTP ST1                            ; 00547f0f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00547f11
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00547f16
    MOV EAX,dword ptr [EDX]             ; 00547f1a | g_CDemonRendererInstance
    SHL EBP,0x8                         ; 00547f1c
    ADD EAX,0x90                        ; 00547f1f
    SHL ESI,0x8                         ; 00547f24
    PUSH EAX                            ; 00547f27
    SHL EDI,0x8                         ; 00547f28
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00547f2b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00547f30
    POP EBX                             ; 00547f33
    MOV EAX,[0x006703ec]                ; 00547f34 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 00547f39 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x20],EBP      ; 00547f3b
    MOV EDX,dword ptr [EAX]             ; 00547f3e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x24],ESI      ; 00547f40
    MOV EDX,dword ptr [EAX]             ; 00547f43 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x28],EDI      ; 00547f45
    MOV EDX,dword ptr [EAX]             ; 00547f48 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00547f4a
    MOV dword ptr [EDX + 0x2c],ECX      ; 00547f4e
    MOV EDX,dword ptr [EAX]             ; 00547f51 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x50],EBP      ; 00547f53
    MOV EDX,dword ptr [EAX]             ; 00547f56 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x54],ESI      ; 00547f58
    MOV EDX,dword ptr [EAX]             ; 00547f5b | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x58],EDI      ; 00547f5d
    MOV EDX,dword ptr [EAX]             ; 00547f60 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x5c],ECX      ; 00547f62
    MOV EDX,dword ptr [EAX]             ; 00547f65 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x80],EBP      ; 00547f67
    MOV EDX,dword ptr [EAX]             ; 00547f6d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x84],ESI      ; 00547f6f
    MOV EDX,dword ptr [EAX]             ; 00547f75 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x88],EDI      ; 00547f77
    MOV EDX,dword ptr [EAX]             ; 00547f7d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8c],ECX      ; 00547f7f
    MOV EDX,dword ptr [EAX]             ; 00547f85 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb0],EBP      ; 00547f87
    MOV EDX,dword ptr [EAX]             ; 00547f8d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb4],ESI      ; 00547f8f
    MOV EDX,dword ptr [EAX]             ; 00547f95 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb8],EDI      ; 00547f97
    PUSH 0x30d4fd0                      ; 00547f9d | SMRGLPrimitiveQuad_030d4fd0
    MOV EDX,dword ptr [EAX]             ; 00547fa2 | g_CDemonRendererInstance
    PUSH EAX                            ; 00547fa4 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xbc],ECX      ; 00547fa5
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0 ; 00547fab
        ;   XREF to: 0048bba0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00547fb0
    ADD ESP,0x24                        ; 00547fb3
    POP EBP                             ; 00547fb6
    POP EDI                             ; 00547fb7
    POP ESI                             ; 00547fb8
    RET                                 ; 00547fb9

