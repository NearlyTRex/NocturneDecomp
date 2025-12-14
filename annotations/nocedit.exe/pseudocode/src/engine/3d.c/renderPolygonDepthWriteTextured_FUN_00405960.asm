; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[2]:
;   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 at 00407046
;   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 at 00406f03
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

    PUSH EBX                            ; 00405960
        ;   Label: engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
    PUSH ESI                            ; 00405961
    PUSH EBP                            ; 00405962
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405963
    LEA ESI,[EBX + 0x18]                ; 00405967
    LEA EAX,[EBX + 0x8]                 ; 0040596a
    PUSH EAX                            ; 0040596d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040596e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405973
    TEST EAX,EAX                        ; 00405976
    JZ 0x004059bb                       ; 00405978
        ;   XREF to: 004059bb (CONDITIONAL_JUMP)  ; LAB_004059bb
    CMP dword ptr [0x02d05248],0x0      ; 0040597a | g_MMXSupported
    JNZ 0x004059d6                      ; 00405981
        ;   XREF to: 004059d6 (CONDITIONAL_JUMP)  ; LAB_004059d6
    CMP dword ptr [0x0067939c],0x20     ; 00405983 | g_BitsPerPixel
    JNZ 0x004059ca                      ; 0040598a
        ;   XREF to: 004059ca (CONDITIONAL_JUMP)  ; LAB_004059ca
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040598c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405996
        ;   Label: LAB_00405996
    MOV EDI,0x80                        ; 00405997
    PUSH ESI                            ; 0040599c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040599d
    MOV EBP,0x1                         ; 004059a0
    PUSH EAX                            ; 004059a5
    MOV dword ptr [0x02d052a0],EDI      ; 004059a6 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 004059ac | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004059b2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004059b7
    POP EDI                             ; 004059ba
    MOV EAX,dword ptr [EBX + 0x4]       ; 004059bb
        ;   Label: LAB_004059bb
    ADD EBX,0x18                        ; 004059be
    SHL EAX,0x2                         ; 004059c1
    ADD EAX,EBX                         ; 004059c4
    POP EBP                             ; 004059c6
    POP ESI                             ; 004059c7
    POP EBX                             ; 004059c8
    RET                                 ; 004059c9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004059ca | g_ScanlineRenderFunc
        ;   Label: LAB_004059ca
    JMP 0x00405996                      ; 004059d4
        ;   XREF to: 00405996 (UNCONDITIONAL_JUMP)  ; LAB_00405996
    CMP dword ptr [0x0067939c],0x20     ; 004059d6 | g_BitsPerPixel
        ;   Label: LAB_004059d6
    JNZ 0x004059eb                      ; 004059dd
        ;   XREF to: 004059eb (CONDITIONAL_JUMP)  ; LAB_004059eb
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004059df | g_ScanlineRenderFunc
    JMP 0x00405996                      ; 004059e9
        ;   XREF to: 00405996 (UNCONDITIONAL_JUMP)  ; LAB_00405996
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004059eb | g_ScanlineRenderFunc
        ;   Label: LAB_004059eb
    JMP 0x00405996                      ; 004059f5
        ;   XREF to: 00405996 (UNCONDITIONAL_JUMP)  ; LAB_00405996

