; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedBasic_FUN_00405ec0(SMRGLHeaderPrimitive *polygon_info)
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

    PUSH EBX                            ; 00405ec0
        ;   Label: engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0
    PUSH ESI                            ; 00405ec1
    PUSH EBP                            ; 00405ec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405ec3
    LEA ESI,[EBX + 0x18]                ; 00405ec7
    LEA EAX,[EBX + 0x8]                 ; 00405eca
    PUSH EAX                            ; 00405ecd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405ece
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405ed3
    TEST EAX,EAX                        ; 00405ed6
    JZ 0x00405f18                       ; 00405ed8
        ;   XREF to: 00405f18 (CONDITIONAL_JUMP)  ; LAB_00405f18
    CMP dword ptr [0x02d05248],0x0      ; 00405eda | g_MMXSupported
    JNZ 0x00405f33                      ; 00405ee1
        ;   XREF to: 00405f33 (CONDITIONAL_JUMP)  ; LAB_00405f33
    CMP dword ptr [0x0067939c],0x20     ; 00405ee3 | g_BitsPerPixel
    JNZ 0x00405f27                      ; 00405eea
        ;   XREF to: 00405f27 (CONDITIONAL_JUMP)  ; LAB_00405f27
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405eec | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405ef6
        ;   Label: LAB_00405ef6
    MOV EDI,0x1                         ; 00405ef7
    PUSH ESI                            ; 00405efc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405efd
    XOR EBP,EBP                         ; 00405f00
    PUSH EAX                            ; 00405f02
    MOV dword ptr [0x02d052a0],EDI      ; 00405f03 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405f09 | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405f0f
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405f14
    POP EDI                             ; 00405f17
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f18
        ;   Label: LAB_00405f18
    ADD EBX,0x18                        ; 00405f1b
    SHL EAX,0x2                         ; 00405f1e
    ADD EAX,EBX                         ; 00405f21
    POP EBP                             ; 00405f23
    POP ESI                             ; 00405f24
    POP EBX                             ; 00405f25
    RET                                 ; 00405f26
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405f27 | g_ScanlineRenderFunc
        ;   Label: LAB_00405f27
    JMP 0x00405ef6                      ; 00405f31
        ;   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)  ; LAB_00405ef6
    CMP dword ptr [0x0067939c],0x20     ; 00405f33 | g_BitsPerPixel
        ;   Label: LAB_00405f33
    JNZ 0x00405f48                      ; 00405f3a
        ;   XREF to: 00405f48 (CONDITIONAL_JUMP)  ; LAB_00405f48
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405f3c | g_ScanlineRenderFunc
    JMP 0x00405ef6                      ; 00405f46
        ;   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)  ; LAB_00405ef6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405f48 | g_ScanlineRenderFunc
        ;   Label: LAB_00405f48
    JMP 0x00405ef6                      ; 00405f52
        ;   XREF to: 00405ef6 (UNCONDITIONAL_JUMP)  ; LAB_00405ef6

