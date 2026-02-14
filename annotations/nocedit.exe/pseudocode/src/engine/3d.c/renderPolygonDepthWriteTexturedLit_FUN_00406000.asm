; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00406000(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406000
        ;   Label: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000
    PUSH ESI                            ; 00406001
    PUSH EBP                            ; 00406002
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406003
    LEA ESI,[EBX + 0x18]                ; 00406007
    LEA EAX,[EBX + 0x8]                 ; 0040600a
    PUSH EAX                            ; 0040600d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040600e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406013
    TEST EAX,EAX                        ; 00406016
    JZ 0x0040605b                       ; 00406018
        ;   XREF to: 0040605b (CONDITIONAL_JUMP)  ; LAB_0040605b
    CMP dword ptr [0x02d05248],0x0      ; 0040601a | g_MMXSupported
    JNZ 0x00406076                      ; 00406021
        ;   XREF to: 00406076 (CONDITIONAL_JUMP)  ; LAB_00406076
    CMP dword ptr [0x0067939c],0x20     ; 00406023 | g_BitsPerPixel
    JNZ 0x0040606a                      ; 0040602a
        ;   XREF to: 0040606a (CONDITIONAL_JUMP)  ; LAB_0040606a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040602c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406036
        ;   Label: LAB_00406036
    MOV EDI,0x81                        ; 00406037
    PUSH ESI                            ; 0040603c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040603d
    MOV EBP,0x1                         ; 00406040
    PUSH EAX                            ; 00406045
    MOV dword ptr [0x02d052a0],EDI      ; 00406046 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0040604c | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406052
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406057
    POP EDI                             ; 0040605a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040605b
        ;   Label: LAB_0040605b
    ADD EBX,0x18                        ; 0040605e
    SHL EAX,0x2                         ; 00406061
    ADD EAX,EBX                         ; 00406064
    POP EBP                             ; 00406066
    POP ESI                             ; 00406067
    POP EBX                             ; 00406068
    RET                                 ; 00406069
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040606a | g_ScanlineRenderFunc
        ;   Label: LAB_0040606a
    JMP 0x00406036                      ; 00406074
        ;   XREF to: 00406036 (UNCONDITIONAL_JUMP)  ; LAB_00406036
    CMP dword ptr [0x0067939c],0x20     ; 00406076 | g_BitsPerPixel
        ;   Label: LAB_00406076
    JNZ 0x0040608b                      ; 0040607d
        ;   XREF to: 0040608b (CONDITIONAL_JUMP)  ; LAB_0040608b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040607f | g_ScanlineRenderFunc
    JMP 0x00406036                      ; 00406089
        ;   XREF to: 00406036 (UNCONDITIONAL_JUMP)  ; LAB_00406036
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040608b | g_ScanlineRenderFunc
        ;   Label: LAB_0040608b
    JMP 0x00406036                      ; 00406095
        ;   XREF to: 00406036 (UNCONDITIONAL_JUMP)  ; LAB_00406036

