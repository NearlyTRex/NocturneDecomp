; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004067a0
        ;   Label: engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0
    PUSH ESI                            ; 004067a1
    PUSH EBP                            ; 004067a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004067a3
    LEA ESI,[EBX + 0x18]                ; 004067a7
    LEA EAX,[EBX + 0x8]                 ; 004067aa
    PUSH EAX                            ; 004067ad
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004067ae
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004067b3
    TEST EAX,EAX                        ; 004067b6
    JZ 0x00406820                       ; 004067b8
        ;   XREF to: 00406820 (CONDITIONAL_JUMP)  ; LAB_00406820
    CMP dword ptr [0x02d05248],0x0      ; 004067ba | g_MMXSupported
    JNZ 0x0040683b                      ; 004067c1
        ;   XREF to: 0040683b (CONDITIONAL_JUMP)  ; LAB_0040683b
    CMP dword ptr [0x0067939c],0x20     ; 004067c7 | g_BitsPerPixel
    JNZ 0x0040682f                      ; 004067ce
        ;   XREF to: 0040682f (CONDITIONAL_JUMP)  ; LAB_0040682f
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004067d0 | g_ScanlineRenderFunc
    PUSH EDI                            ; 004067da
        ;   Label: LAB_004067da
    MOV EDI,0xc3                        ; 004067db
    MOV EBP,dword ptr [0x006793b4]      ; 004067e0 | g_CurrentAlphaValue
    MOV dword ptr [0x02d052a0],EDI      ; 004067e6 | g_RenderStateFlags
    CMP EBP,0xff                        ; 004067ec
    JGE 0x004067fe                      ; 004067f2
        ;   XREF to: 004067fe (CONDITIONAL_JUMP)  ; LAB_004067fe
    MOV dword ptr [0x02d052a0],0xe3     ; 004067f4 | g_RenderStateFlags
    MOV EDX,0x1                         ; 004067fe
        ;   Label: LAB_004067fe
    PUSH EBX                            ; 00406803
    MOV dword ptr [0x02d052a4],EDX      ; 00406804 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 0040680a
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 0040680f
    PUSH ESI                            ; 00406812
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406813
    PUSH ECX                            ; 00406816
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406817
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040681c
    POP EDI                             ; 0040681f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406820
        ;   Label: LAB_00406820
    LEA EAX,[EBX + 0x18]                ; 00406823
    SHL ESI,0x2                         ; 00406826
    ADD EAX,ESI                         ; 00406829
    POP EBP                             ; 0040682b
    POP ESI                             ; 0040682c
    POP EBX                             ; 0040682d
    RET                                 ; 0040682e
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040682f | g_ScanlineRenderFunc
        ;   Label: LAB_0040682f
    JMP 0x004067da                      ; 00406839
        ;   XREF to: 004067da (UNCONDITIONAL_JUMP)  ; LAB_004067da
    CMP dword ptr [0x0067939c],0x20     ; 0040683b | g_BitsPerPixel
        ;   Label: LAB_0040683b
    JNZ 0x00406850                      ; 00406842
        ;   XREF to: 00406850 (CONDITIONAL_JUMP)  ; LAB_00406850
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406844 | g_ScanlineRenderFunc
    JMP 0x004067da                      ; 0040684e
        ;   XREF to: 004067da (UNCONDITIONAL_JUMP)  ; LAB_004067da
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406850 | g_ScanlineRenderFunc
        ;   Label: LAB_00406850
    JMP 0x004067da                      ; 0040685a
        ;   XREF to: 004067da (UNCONDITIONAL_JUMP)  ; LAB_004067da

