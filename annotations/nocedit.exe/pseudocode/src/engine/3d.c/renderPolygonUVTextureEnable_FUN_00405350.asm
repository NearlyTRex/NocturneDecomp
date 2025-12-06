; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405350
        ;   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350
    PUSH ESI                            ; 00405351
    PUSH EDI                            ; 00405352
    PUSH EBP                            ; 00405353
    SUB ESP,0x18                        ; 00405354
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405357
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040535b
    MOV dword ptr [ESP],EAX             ; 0040535e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405361
    MOV dword ptr [ESP + 0x4],EAX       ; 00405364
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405368
    MOV dword ptr [ESP + 0x8],EAX       ; 0040536b
    MOV EAX,ESP                         ; 0040536f
    PUSH EAX                            ; 00405371
    LEA ESI,[ESP + 0x10]                ; 00405372
    LEA EDI,[ESP + 0x4]                 ; 00405376
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970 ; 0040537a | void engine_matrix.c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector)
        ;   XREF to: 0050d970 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x10]                ; 0040537f
    ADD ESP,0x4                         ; 00405383
    MOVSD ES:EDI,ESI                    ; 00405386
    MOVSD ES:EDI,ESI                    ; 00405387
    MOVSD ES:EDI,ESI                    ; 00405388
    LEA ESI,[EBX + 0x18]                ; 00405389
    LEA EAX,[EBX + 0x8]                 ; 0040538c
    PUSH EAX                            ; 0040538f
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405390 | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00405395
    TEST EAX,EAX                        ; 00405398
    JZ 0x004053e1                       ; 0040539a | LAB_004053e1
        ;   XREF to: 004053e1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 0040539c | BOOL g_MMXSupported
    JNZ 0x00405400                      ; 004053a3 | LAB_00405400
        ;   XREF to: 00405400 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004053a5 | int g_BitsPerPixel
    JNZ 0x004053f4                      ; 004053ac | LAB_004053f4
        ;   XREF to: 004053f4 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004053ae | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 004053b8
        ;   Label: LAB_004053b8
    PUSH EBX                            ; 004053bd
    XOR EBP,EBP                         ; 004053be
    MOV dword ptr [0x02d052a0],EDI      ; 004053c0 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 004053c6 | int g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 004053cc | void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004053d1
    PUSH ESI                            ; 004053d4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004053d5
    PUSH EAX                            ; 004053d8
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004053d9 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004053de
    MOV ESI,dword ptr [EBX + 0x4]       ; 004053e1
        ;   Label: LAB_004053e1
    LEA EAX,[EBX + 0x18]                ; 004053e4
    SHL ESI,0x2                         ; 004053e7
    ADD EAX,ESI                         ; 004053ea
    ADD ESP,0x18                        ; 004053ec
    POP EBP                             ; 004053ef
    POP EDI                             ; 004053f0
    POP ESI                             ; 004053f1
    POP EBX                             ; 004053f2
    RET                                 ; 004053f3
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004053f4 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004053f4
    JMP 0x004053b8                      ; 004053fe | LAB_004053b8
        ;   XREF to: 004053b8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405400 | int g_BitsPerPixel
        ;   Label: LAB_00405400
    JNZ 0x00405415                      ; 00405407 | LAB_00405415
        ;   XREF to: 00405415 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405409 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x004053b8                      ; 00405413 | LAB_004053b8
        ;   XREF to: 004053b8 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405415 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405415
    JMP 0x004053b8                      ; 0040541f | LAB_004053b8
        ;   XREF to: 004053b8 (UNCONDITIONAL_JUMP)

