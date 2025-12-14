; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0(SMRGLHeaderPrimitive * primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
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

    PUSH EBX                            ; 004044a0
        ;   Label: engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0
    PUSH ESI                            ; 004044a1
    PUSH EBP                            ; 004044a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004044a3
    LEA ESI,[EBX + 0x18]                ; 004044a7
    LEA EAX,[EBX + 0x8]                 ; 004044aa
    PUSH EAX                            ; 004044ad
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004044ae
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004044b3
    TEST EAX,EAX                        ; 004044b6
    JZ 0x004044fb                       ; 004044b8
        ;   XREF to: 004044fb (CONDITIONAL_JUMP)  ; LAB_004044fb
    CMP dword ptr [0x02d05248],0x0      ; 004044ba | g_MMXSupported
    JNZ 0x00404516                      ; 004044c1
        ;   XREF to: 00404516 (CONDITIONAL_JUMP)  ; LAB_00404516
    CMP dword ptr [0x0067939c],0x20     ; 004044c3 | g_BitsPerPixel
    JNZ 0x0040450a                      ; 004044ca
        ;   XREF to: 0040450a (CONDITIONAL_JUMP)  ; LAB_0040450a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004044cc | g_ScanlineRenderFunc
    PUSH EDI                            ; 004044d6
        ;   Label: LAB_004044d6
    MOV EDI,0x1                         ; 004044d7
    PUSH ESI                            ; 004044dc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004044dd
    MOV EBP,0x2                         ; 004044e0
    PUSH EAX                            ; 004044e5
    MOV dword ptr [0x02d052a0],EDI      ; 004044e6 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 004044ec | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004044f2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004044f7
    POP EDI                             ; 004044fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 004044fb
        ;   Label: LAB_004044fb
    ADD EBX,0x18                        ; 004044fe
    SHL EAX,0x2                         ; 00404501
    ADD EAX,EBX                         ; 00404504
    POP EBP                             ; 00404506
    POP ESI                             ; 00404507
    POP EBX                             ; 00404508
    RET                                 ; 00404509
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040450a | g_ScanlineRenderFunc
        ;   Label: LAB_0040450a
    JMP 0x004044d6                      ; 00404514
        ;   XREF to: 004044d6 (UNCONDITIONAL_JUMP)  ; LAB_004044d6
    CMP dword ptr [0x0067939c],0x20     ; 00404516 | g_BitsPerPixel
        ;   Label: LAB_00404516
    JNZ 0x0040452b                      ; 0040451d
        ;   XREF to: 0040452b (CONDITIONAL_JUMP)  ; LAB_0040452b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040451f | g_ScanlineRenderFunc
    JMP 0x004044d6                      ; 00404529
        ;   XREF to: 004044d6 (UNCONDITIONAL_JUMP)  ; LAB_004044d6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040452b | g_ScanlineRenderFunc
        ;   Label: LAB_0040452b
    JMP 0x004044d6                      ; 00404535
        ;   XREF to: 004044d6 (UNCONDITIONAL_JUMP)  ; LAB_004044d6

