; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl engine_3d_c_renderPolygonTextureNearPlane_FUN_00404ee0(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404ee0
        ;   Label: engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0
    PUSH ESI                            ; 00404ee1
    PUSH EBP                            ; 00404ee2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404ee3
    LEA ESI,[EBX + 0x18]                ; 00404ee7
    LEA EAX,[EBX + 0x8]                 ; 00404eea
    PUSH EAX                            ; 00404eed
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404eee
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404ef3
    TEST EAX,EAX                        ; 00404ef6
    JZ 0x00404f3b                       ; 00404ef8
        ;   XREF to: 00404f3b (CONDITIONAL_JUMP)  ; LAB_00404f3b
    CMP dword ptr [0x02d05248],0x0      ; 00404efa | g_MMXSupported
    JNZ 0x00404f56                      ; 00404f01
        ;   XREF to: 00404f56 (CONDITIONAL_JUMP)  ; LAB_00404f56
    CMP dword ptr [0x0067939c],0x20     ; 00404f03 | g_BitsPerPixel
    JNZ 0x00404f4a                      ; 00404f0a
        ;   XREF to: 00404f4a (CONDITIONAL_JUMP)  ; LAB_00404f4a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404f0c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404f16
        ;   Label: LAB_00404f16
    MOV EDI,0x1                         ; 00404f17
    PUSH ESI                            ; 00404f1c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404f1d
    MOV EBP,0x3                         ; 00404f20
    PUSH EAX                            ; 00404f25
    MOV dword ptr [0x02d052a0],EDI      ; 00404f26 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00404f2c | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404f32
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404f37
    POP EDI                             ; 00404f3a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404f3b
        ;   Label: LAB_00404f3b
    ADD EBX,0x18                        ; 00404f3e
    SHL EAX,0x2                         ; 00404f41
    ADD EAX,EBX                         ; 00404f44
    POP EBP                             ; 00404f46
    POP ESI                             ; 00404f47
    POP EBX                             ; 00404f48
    RET                                 ; 00404f49
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404f4a | g_ScanlineRenderFunc
        ;   Label: LAB_00404f4a
    JMP 0x00404f16                      ; 00404f54
        ;   XREF to: 00404f16 (UNCONDITIONAL_JUMP)  ; LAB_00404f16
    CMP dword ptr [0x0067939c],0x20     ; 00404f56 | g_BitsPerPixel
        ;   Label: LAB_00404f56
    JNZ 0x00404f6b                      ; 00404f5d
        ;   XREF to: 00404f6b (CONDITIONAL_JUMP)  ; LAB_00404f6b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404f5f | g_ScanlineRenderFunc
    JMP 0x00404f16                      ; 00404f69
        ;   XREF to: 00404f16 (UNCONDITIONAL_JUMP)  ; LAB_00404f16
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404f6b | g_ScanlineRenderFunc
        ;   Label: LAB_00404f6b
    JMP 0x00404f16                      ; 00404f75
        ;   XREF to: 00404f16 (UNCONDITIONAL_JUMP)  ; LAB_00404f16

