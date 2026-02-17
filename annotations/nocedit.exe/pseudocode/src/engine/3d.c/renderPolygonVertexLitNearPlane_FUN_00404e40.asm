; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonVertexLitNearPlane_FUN_00404e40(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404e40
        ;   Label: engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40
    PUSH ESI                            ; 00404e41
    PUSH EBP                            ; 00404e42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404e43
    LEA ESI,[EBX + 0x18]                ; 00404e47
    LEA EAX,[EBX + 0x8]                 ; 00404e4a
    PUSH EAX                            ; 00404e4d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404e4e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404e53
    TEST EAX,EAX                        ; 00404e56
    JZ 0x00404e9b                       ; 00404e58
        ;   XREF to: 00404e9b (CONDITIONAL_JUMP)  ; LAB_00404e9b
    CMP dword ptr [0x02d05248],0x0      ; 00404e5a | g_MMXSupported
    JNZ 0x00404eb6                      ; 00404e61
        ;   XREF to: 00404eb6 (CONDITIONAL_JUMP)  ; LAB_00404eb6
    CMP dword ptr [0x0067939c],0x20     ; 00404e63 | g_BitsPerPixel
    JNZ 0x00404eaa                      ; 00404e6a
        ;   XREF to: 00404eaa (CONDITIONAL_JUMP)  ; LAB_00404eaa
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404e6c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404e76
        ;   Label: LAB_00404e76
    MOV EDI,0x9                         ; 00404e77
    PUSH ESI                            ; 00404e7c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404e7d
    MOV EBP,0x3                         ; 00404e80
    PUSH EAX                            ; 00404e85
    MOV dword ptr [0x02d052a0],EDI      ; 00404e86 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00404e8c | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404e92
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404e97
    POP EDI                             ; 00404e9a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404e9b
        ;   Label: LAB_00404e9b
    ADD EBX,0x18                        ; 00404e9e
    SHL EAX,0x2                         ; 00404ea1
    ADD EAX,EBX                         ; 00404ea4
    POP EBP                             ; 00404ea6
    POP ESI                             ; 00404ea7
    POP EBX                             ; 00404ea8
    RET                                 ; 00404ea9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404eaa | g_ScanlineRenderFunc
        ;   Label: LAB_00404eaa
    JMP 0x00404e76                      ; 00404eb4
        ;   XREF to: 00404e76 (UNCONDITIONAL_JUMP)  ; LAB_00404e76
    CMP dword ptr [0x0067939c],0x20     ; 00404eb6 | g_BitsPerPixel
        ;   Label: LAB_00404eb6
    JNZ 0x00404ecb                      ; 00404ebd
        ;   XREF to: 00404ecb (CONDITIONAL_JUMP)  ; LAB_00404ecb
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404ebf | g_ScanlineRenderFunc
    JMP 0x00404e76                      ; 00404ec9
        ;   XREF to: 00404e76 (UNCONDITIONAL_JUMP)  ; LAB_00404e76
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404ecb | g_ScanlineRenderFunc
        ;   Label: LAB_00404ecb
    JMP 0x00404e76                      ; 00404ed5
        ;   XREF to: 00404e76 (UNCONDITIONAL_JUMP)  ; LAB_00404e76

