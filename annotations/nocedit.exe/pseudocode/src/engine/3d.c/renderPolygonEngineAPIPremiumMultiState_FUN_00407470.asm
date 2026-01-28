; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;   SRenderBufferEntry[256] g_RenderBufferPool
;   undefined4 DAT_00772b04
;   undefined4 DAT_00772b08
;   undefined4 DAT_00772b0c
;   undefined4 DAT_00772b34
;   undefined4 DAT_00772bc4
;   undefined4 DAT_00772bc8
;   undefined4 DAT_00772c0c
;   undefined4 DAT_00772c10
;   ... and 6 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407470
        ;   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
    PUSH ESI                            ; 00407471
    PUSH EDI                            ; 00407472
    PUSH EBP                            ; 00407473
    SUB ESP,0x4                         ; 00407474
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407477
    ADD EAX,0x8                         ; 0040747b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040747e
    PUSH EAX                            ; 00407482
    ADD EBX,0x18                        ; 00407483
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00407486
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0040748b
    TEST EAX,EAX                        ; 0040748e
    JZ 0x004075a8                       ; 00407490
        ;   XREF to: 004075a8 (CONDITIONAL_JUMP)  ; LAB_004075a8
    CMP dword ptr [0x02d05248],0x0      ; 00407496 | g_MMXSupported
    JNZ 0x004075df                      ; 0040749d
        ;   XREF to: 004075df (CONDITIONAL_JUMP)  ; LAB_004075df
    CMP dword ptr [0x0067939c],0x20     ; 004074a3 | g_BitsPerPixel
    JNZ 0x004075d0                      ; 004074aa
        ;   XREF to: 004075d0 (CONDITIONAL_JUMP)  ; LAB_004075d0
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004074b0 | g_ScanlineRenderFunc
    MOV ESI,0x1                         ; 004074ba
        ;   Label: LAB_004074ba
    MOV ECX,0x1e7                       ; 004074bf
    MOV EDI,dword ptr [0x00772af8]      ; 004074c4 | g_RenderBufferEnabled
    MOV dword ptr [0x02d052a4],ESI      ; 004074ca | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],ECX      ; 004074d0 | g_RenderStateFlags
    TEST EDI,EDI                        ; 004074d6
    JZ 0x00407606                       ; 004074d8
        ;   XREF to: 00407606 (CONDITIONAL_JUMP)  ; LAB_00407606
    MOV EBP,dword ptr [0x00772afc]      ; 004074de | g_RenderBufferCount
    CMP EBP,0x9c4                       ; 004074e4
    JGE 0x00407606                      ; 004074ea
        ;   XREF to: 00407606 (CONDITIONAL_JUMP)  ; LAB_00407606
    MOV EAX,dword ptr [ESP + 0x18]      ; 004074f0
    CMP dword ptr [EAX + 0x4],0x4       ; 004074f4
    JG 0x00407606                       ; 004074f8
        ;   XREF to: 00407606 (CONDITIONAL_JUMP)  ; LAB_00407606
    LEA EAX,[EBP*0x8 + 0x0]             ; 004074fe
    ADD EAX,EBP                         ; 00407505
    SHL EAX,0x2                         ; 00407507
    SUB EAX,EBP                         ; 0040750a
    MOV EDX,0x772b00                    ; 0040750c | g_RenderBufferPool
    SHL EAX,0x3                         ; 00407511
    MOV ESI,dword ptr [0x00772afc]      ; 00407514 | g_RenderBufferCount
    ADD EDX,EAX                         ; 0040751a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040751c
    INC ESI                             ; 00407520
    MOV EAX,dword ptr [EAX + 0x4]       ; 00407521
    MOV dword ptr [0x00772afc],ESI      ; 00407524 | g_RenderBufferCount
    MOV dword ptr [EDX],EAX             ; 0040752a | g_RenderBufferPool
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040752c
    MOV EBP,0x7fffffff                  ; 00407530
    MOV dword ptr [ESP],EDX             ; 00407535
    MOV EDI,dword ptr [EAX + 0x4]       ; 00407538
    XOR EDX,EDX                         ; 0040753b
    TEST EDI,EDI                        ; 0040753d
    JLE 0x00407572                      ; 0040753f
        ;   XREF to: 00407572 (CONDITIONAL_JUMP)  ; LAB_00407572
    MOV EAX,dword ptr [ESP]             ; 00407541
    IMUL ESI,dword ptr [EBX],0x30       ; 00407544
        ;   Label: LAB_00407544
    MOV ECX,0xc                         ; 00407547
    LEA EDI,[EAX + 0x4]                 ; 0040754c
    LEA ESI,[ESI + 0x688014]            ; 0040754f | g_RenderVertexBuffer
    MOVSD.REP ES:EDI,ESI                ; 00407555 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y | DAT_00772b04
    MOV ECX,dword ptr [EAX + 0xc]       ; 00407557 | DAT_00772b0c
    CMP EBP,ECX                         ; 0040755a
    JLE 0x00407560                      ; 0040755c
        ;   XREF to: 00407560 (CONDITIONAL_JUMP)  ; LAB_00407560
    MOV EBP,ECX                         ; 0040755e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00407560
        ;   Label: LAB_00407560
    ADD EAX,0x30                        ; 00407564
    INC EDX                             ; 00407567
    MOV ECX,dword ptr [ESI + 0x4]       ; 00407568
    ADD EBX,0x4                         ; 0040756b
    CMP EDX,ECX                         ; 0040756e
    JL 0x00407544                       ; 00407570
        ;   XREF to: 00407544 (CONDITIONAL_JUMP)  ; LAB_00407544
    CALL engine_texture.cpp_getCurrentTexture_FUN_005dd9c0 ; 00407572
        ;   XREF to: 005dd9c0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_005dd9c0()
        ;   Label: LAB_00407572
    MOV EDI,dword ptr [ESP]             ; 00407577
    MOV ECX,0x12                        ; 0040757a
    MOV ESI,EAX                         ; 0040757f
    LEA EDI,[EDI + 0xc4]                ; 00407581
    MOV EDX,dword ptr [ESP]             ; 00407587
    MOV EAX,[0x006793b4]                ; 0040758a | g_CurrentAlphaValue
    MOVSD.REP ES:EDI,ESI                ; 0040758f | DAT_00772bc4 | DAT_00772bc8
    MOV dword ptr [EDX + 0x10c],EAX     ; 00407591 | DAT_00772c0c
    MOV dword ptr [EDX + 0x114],EBP     ; 00407597 | DAT_00772c14
    MOV EAX,[0x02d05298]                ; 0040759d | g_BlendMode
    MOV dword ptr [EDX + 0x110],EAX     ; 004075a2 | DAT_00772c10
    MOV EDX,dword ptr [ESP + 0x18]      ; 004075a8
        ;   Label: LAB_004075a8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004075ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004075af
    SUB EAX,EDX                         ; 004075b6
    LEA EDX,[EAX*0x4 + 0x0]             ; 004075b8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004075bf
    ADD EAX,0x18                        ; 004075c3
    ADD EAX,EDX                         ; 004075c6
    ADD ESP,0x4                         ; 004075c8
    POP EBP                             ; 004075cb
    POP EDI                             ; 004075cc
    POP ESI                             ; 004075cd
    POP EBX                             ; 004075ce
    RET                                 ; 004075cf
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004075d0 | g_ScanlineRenderFunc
        ;   Label: LAB_004075d0
    JMP 0x004074ba                      ; 004075da
        ;   XREF to: 004074ba (UNCONDITIONAL_JUMP)  ; LAB_004074ba
    CMP dword ptr [0x0067939c],0x20     ; 004075df | g_BitsPerPixel
        ;   Label: LAB_004075df
    JNZ 0x004075f7                      ; 004075e6
        ;   XREF to: 004075f7 (CONDITIONAL_JUMP)  ; LAB_004075f7
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004075e8 | g_ScanlineRenderFunc
    JMP 0x004074ba                      ; 004075f2
        ;   XREF to: 004074ba (UNCONDITIONAL_JUMP)  ; LAB_004074ba
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004075f7 | g_ScanlineRenderFunc
        ;   Label: LAB_004075f7
    JMP 0x004074ba                      ; 00407601
        ;   XREF to: 004074ba (UNCONDITIONAL_JUMP)  ; LAB_004074ba
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407606
        ;   Label: LAB_00407606
    PUSH EBX                            ; 0040760a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040760b
    PUSH ECX                            ; 0040760e
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040760f
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407614
    JMP 0x004075a8                      ; 00407617
        ;   XREF to: 004075a8 (UNCONDITIONAL_JUMP)  ; LAB_004075a8

