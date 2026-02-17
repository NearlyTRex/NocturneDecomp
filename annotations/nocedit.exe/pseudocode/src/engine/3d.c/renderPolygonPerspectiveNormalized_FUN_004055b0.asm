; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveNormalized_FUN_004055b0(SMRGLHeaderPrimitive *polygon_info)
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
;   _BIT_INTEGER32 g_RenderStateFlags
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

    PUSH EBX                            ; 004055b0
        ;   Label: engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0
    PUSH ESI                            ; 004055b1
    PUSH EDI                            ; 004055b2
    PUSH EBP                            ; 004055b3
    SUB ESP,0x18                        ; 004055b4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004055b7
    MOV EAX,dword ptr [EBX + 0x8]       ; 004055bb
    MOV dword ptr [ESP],EAX             ; 004055be
    MOV EAX,dword ptr [EBX + 0xc]       ; 004055c1
    MOV dword ptr [ESP + 0x4],EAX       ; 004055c4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004055c8
    MOV dword ptr [ESP + 0x8],EAX       ; 004055cb
    MOV EAX,ESP                         ; 004055cf
    PUSH EAX                            ; 004055d1
    LEA ESI,[ESP + 0x10]                ; 004055d2
    LEA EDI,[ESP + 0x4]                 ; 004055d6
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970 ; 004055da
        ;   XREF to: 0050d970 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_0050d970(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 004055df
    ADD ESP,0x4                         ; 004055e3
    MOVSD ES:EDI,ESI                    ; 004055e6
    MOVSD ES:EDI,ESI                    ; 004055e7
    MOVSD ES:EDI,ESI                    ; 004055e8
    LEA ESI,[EBX + 0x18]                ; 004055e9
    LEA EAX,[EBX + 0x8]                 ; 004055ec
    PUSH EAX                            ; 004055ef
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004055f0
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004055f5
    TEST EAX,EAX                        ; 004055f8
    JZ 0x00405644                       ; 004055fa
        ;   XREF to: 00405644 (CONDITIONAL_JUMP)  ; LAB_00405644
    CMP dword ptr [0x02d05248],0x0      ; 004055fc | g_MMXSupported
    JNZ 0x00405663                      ; 00405603
        ;   XREF to: 00405663 (CONDITIONAL_JUMP)  ; LAB_00405663
    CMP dword ptr [0x0067939c],0x20     ; 00405605 | g_BitsPerPixel
    JNZ 0x00405657                      ; 0040560c
        ;   XREF to: 00405657 (CONDITIONAL_JUMP)  ; LAB_00405657
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040560e | g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 00405618
        ;   Label: LAB_00405618
    MOV EBP,0x2                         ; 0040561d
    PUSH EBX                            ; 00405622
    MOV dword ptr [0x02d052a0],EDI      ; 00405623 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405629 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 0040562f
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x4                         ; 00405634
    PUSH ESI                            ; 00405637
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405638
    PUSH EAX                            ; 0040563b
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040563c
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405641
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405644
        ;   Label: LAB_00405644
    LEA EAX,[EBX + 0x18]                ; 00405647
    SHL ESI,0x2                         ; 0040564a
    ADD EAX,ESI                         ; 0040564d
    ADD ESP,0x18                        ; 0040564f
    POP EBP                             ; 00405652
    POP EDI                             ; 00405653
    POP ESI                             ; 00405654
    POP EBX                             ; 00405655
    RET                                 ; 00405656
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405657 | g_ScanlineRenderFunc
        ;   Label: LAB_00405657
    JMP 0x00405618                      ; 00405661
        ;   XREF to: 00405618 (UNCONDITIONAL_JUMP)  ; LAB_00405618
    CMP dword ptr [0x0067939c],0x20     ; 00405663 | g_BitsPerPixel
        ;   Label: LAB_00405663
    JNZ 0x00405678                      ; 0040566a
        ;   XREF to: 00405678 (CONDITIONAL_JUMP)  ; LAB_00405678
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040566c | g_ScanlineRenderFunc
    JMP 0x00405618                      ; 00405676
        ;   XREF to: 00405618 (UNCONDITIONAL_JUMP)  ; LAB_00405618
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405678 | g_ScanlineRenderFunc
        ;   Label: LAB_00405678
    JMP 0x00405618                      ; 00405682
        ;   XREF to: 00405618 (UNCONDITIONAL_JUMP)  ; LAB_00405618

