; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00406fd0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_006b0270
;   undefined4 DAT_006b0288
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;   engine_fpoly.c_rasterizePolygonHardware_FUN_00494260
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406fd0
        ;   Label: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00406fd0
    PUSH EDI                            ; 00406fd1
    PUSH EBP                            ; 00406fd2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00406fd3
    MOV ECX,dword ptr [0x01c03948]      ; 00406fd7 | g_MMXSupported
    LEA EAX,[EDX + 0x18]                ; 00406fdd
    TEST ECX,ECX                        ; 00406fe0
    JNZ 0x00407036                      ; 00406fe2
        ;   XREF to: 00407036 (CONDITIONAL_JUMP)  ; LAB_00407036
    CMP dword ptr [0x005b7624],0x20     ; 00406fe4 | g_BitsPerPixel
    JNZ 0x0040702a                      ; 00406feb
        ;   XREF to: 0040702a (CONDITIONAL_JUMP)  ; LAB_0040702a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406fed | g_ScanlineRenderFunc
    MOV ESI,0x1                         ; 00406ff7
        ;   Label: LAB_00406ff7
    XOR EDI,EDI                         ; 00406ffc
    MOV EBP,dword ptr [0x006b0270]      ; 00406ffe | DAT_006b0270
    MOV dword ptr [0x01c039a4],EDI      ; 00407004 | g_VertexPreprocessMode
    MOV dword ptr [0x01c039a0],ESI      ; 0040700a | g_RenderStateFlags
    TEST EBP,EBP                        ; 00407010
    JZ 0x00407057                       ; 00407012
        ;   XREF to: 00407057 (CONDITIONAL_JUMP)  ; LAB_00407057
    MOV ECX,dword ptr [EDX + 0x4]       ; 00407014
    PUSH ECX                            ; 00407017
    PUSH EAX                            ; 00407018
    CALL engine_fpoly.c_rasterizePolygonHardware_FUN_00494260 ; 00407019
        ;   XREF to: 00494260 (UNCONDITIONAL_CALL)  ; void engine_fpoly.c_rasterizePolygonHardware_FUN_00494260(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0040701e
    MOV EAX,0x6b0288                    ; 00407021 | DAT_006b0288
    POP EBP                             ; 00407026
    POP EDI                             ; 00407027
    POP ESI                             ; 00407028
    RET                                 ; 00407029
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040702a | g_ScanlineRenderFunc
        ;   Label: LAB_0040702a
    JMP 0x00406ff7                      ; 00407034
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    CMP dword ptr [0x005b7624],0x20     ; 00407036 | g_BitsPerPixel
        ;   Label: LAB_00407036
    JNZ 0x0040704b                      ; 0040703d
        ;   XREF to: 0040704b (CONDITIONAL_JUMP)  ; LAB_0040704b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040703f | g_ScanlineRenderFunc
    JMP 0x00406ff7                      ; 00407049
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040704b | g_ScanlineRenderFunc
        ;   Label: LAB_0040704b
    JMP 0x00406ff7                      ; 00407055
        ;   XREF to: 00406ff7 (UNCONDITIONAL_JUMP)  ; LAB_00406ff7
    PUSH EAX                            ; 00407057
        ;   Label: LAB_00407057
    MOV EAX,dword ptr [EDX + 0x4]       ; 00407058
    PUSH EAX                            ; 0040705b
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 0040705c
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407061
    MOV EAX,0x6b0288                    ; 00407064 | DAT_006b0288
    POP EBP                             ; 00407069
    POP EDI                             ; 0040706a
    POP ESI                             ; 0040706b
    RET                                 ; 0040706c

