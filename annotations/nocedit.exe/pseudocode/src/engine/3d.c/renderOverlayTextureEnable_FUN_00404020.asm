; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * engine_3d.c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   uint g_ProcessedVertexOffset
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404020
        ;   Label: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
    PUSH ESI                            ; 00404021
    PUSH EDI                            ; 00404022
    PUSH EBP                            ; 00404023
    MOV EBP,dword ptr [0x00772a60]      ; 00404024 | uint g_ProcessedVertexOffset
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040402a
    MOV EDX,dword ptr [0x02d05248]      ; 0040402e | BOOL g_MMXSupported
    LEA ESI,[EDI + 0x18]                ; 00404034
    TEST EDX,EDX                        ; 00404037
    JNZ 0x004040c3                      ; 00404039 | LAB_004040c3
        ;   XREF to: 004040c3 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040403f | int g_BitsPerPixel
    JNZ 0x004040b7                      ; 00404046 | LAB_004040b7
        ;   XREF to: 004040b7 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404048 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,0x1                         ; 00404052
        ;   Label: LAB_00404052
    PUSH EDI                            ; 00404057
    XOR EDX,EDX                         ; 00404058
    XOR EBX,EBX                         ; 0040405a
    MOV [0x02d052a0],EAX                ; 0040405c | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 00404061 | int g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404067 | void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)
    MOV ECX,0x772a98                    ; 0040406c | int[24] g_ProcessedVertexIndices
    ADD ESP,0x4                         ; 00404071
    MOV EAX,ESI                         ; 00404074
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404076
        ;   Label: LAB_00404076
    LEA EDX,[EDX + EDX*0x2]             ; 00404079
    MOV EBP,dword ptr [0x00772a60]      ; 0040407c | uint g_ProcessedVertexOffset
    CMP EBX,EDX                         ; 00404082
    JGE 0x004040ea                      ; 00404084 | LAB_004040ea
        ;   XREF to: 004040ea (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 00404086
    ADD EDX,EBP                         ; 00404088
    MOV dword ptr [ECX],EDX             ; 0040408a | int[24] g_ProcessedVertexIndices
    MOV EDX,dword ptr [EAX]             ; 0040408c
    ADD EDX,EBP                         ; 0040408e
    IMUL EDX,EDX,0x30                   ; 00404090
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404093
    MOV dword ptr [EDX + 0x68802c],ESI  ; 00404096 | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EAX]             ; 0040409c
    ADD EDX,EBP                         ; 0040409e
    IMUL ESI,EDX,0x30                   ; 004040a0
    ADD EAX,0xc                         ; 004040a3
    ADD ECX,0x4                         ; 004040a6
    MOV EDX,dword ptr [EAX + -0x4]      ; 004040a9
    ADD EBX,0x3                         ; 004040ac
    MOV dword ptr [ESI + 0x688030],EDX  ; 004040af | g_RenderVertexBuffer[0].v
    JMP 0x00404076                      ; 004040b5 | LAB_00404076
        ;   XREF to: 00404076 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004040b7 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004040b7
    JMP 0x00404052                      ; 004040c1 | LAB_00404052
        ;   XREF to: 00404052 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004040c3 | int g_BitsPerPixel
        ;   Label: LAB_004040c3
    JNZ 0x004040db                      ; 004040ca | LAB_004040db
        ;   XREF to: 004040db (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004040cc | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00404052                      ; 004040d6 | LAB_00404052
        ;   XREF to: 00404052 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004040db | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004040db
    JMP 0x00404052                      ; 004040e5 | LAB_00404052
        ;   XREF to: 00404052 (UNCONDITIONAL_JUMP)
    PUSH 0x772a98                       ; 004040ea | int[24] g_ProcessedVertexIndices
        ;   Label: LAB_004040ea
    MOV ECX,dword ptr [EDI + 0x4]       ; 004040ef
    PUSH ECX                            ; 004040f2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004040f3 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EDI + 0x4]       ; 004040f8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004040fb
    ADD EDI,0x18                        ; 00404102
    SUB EAX,EDX                         ; 00404105
    MOV EBP,dword ptr [0x00772a60]      ; 00404107 | uint g_ProcessedVertexOffset
    SHL EAX,0x2                         ; 0040410d
    ADD ESP,0x8                         ; 00404110
    ADD EAX,EDI                         ; 00404113
    POP EBP                             ; 00404115
    POP EDI                             ; 00404116
    POP ESI                             ; 00404117
    POP EBX                             ; 00404118
    RET                                 ; 00404119

