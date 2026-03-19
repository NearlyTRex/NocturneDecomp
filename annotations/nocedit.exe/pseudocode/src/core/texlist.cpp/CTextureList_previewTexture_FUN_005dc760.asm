; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x50]:24  SStack_50
; SMRGLTextureBasic Stack[-0x28]:24  local_28
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_TexturePreviewEnabled = 0x1
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[1].u
;   ... and 25 more
;
; Called Functions:
;   engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_light.cpp_setAmbientLightLevel_FUN_00505490
;   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
;   engine_matrix.c_popViewport_FUN_0050e480
;   engine_matrix.c_pushViewport_FUN_0050e320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc760
        ;   Label: core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760
    PUSH ESI                            ; 005dc761
    PUSH EDI                            ; 005dc762
    PUSH EBP                            ; 005dc763
    SUB ESP,0x40                        ; 005dc764
    MOV EBX,dword ptr [ESP + 0x54]      ; 005dc767
    CMP byte ptr [0x02d03eb5],0x0       ; 005dc76b | CHAR_ARRAY_02d03eb5
    JZ 0x005dc794                       ; 005dc772
        ;   XREF to: 005dc794 (CONDITIONAL_JUMP)  ; LAB_005dc794
    CMP byte ptr [0x02d03ec4],0x0       ; 005dc774 | CHAR_ARRAY_02d03ec4
    JZ 0x005dc794                       ; 005dc77b
        ;   XREF to: 005dc794 (CONDITIONAL_JUMP)  ; LAB_005dc794
    MOV CL,byte ptr [0x006842f4]        ; 005dc77d | g_TexturePreviewEnabled
    XOR DH,DH                           ; 005dc783
    XOR CL,0x1                          ; 005dc785
    MOV byte ptr [0x02d03ec4],DH        ; 005dc788 | CHAR_ARRAY_02d03ec4
    MOV byte ptr [0x006842f4],CL        ; 005dc78e | g_TexturePreviewEnabled
    CMP dword ptr [0x006842f4],0x0      ; 005dc794 | g_TexturePreviewEnabled
        ;   Label: LAB_005dc794
    JZ 0x005dca01                       ; 005dc79b
        ;   XREF to: 005dca01 (CONDITIONAL_JUMP)  ; LAB_005dca01
    CMP byte ptr [0x02d03ec4],0x0       ; 005dc7a1 | CHAR_ARRAY_02d03ec4
    JZ 0x005dc7b8                       ; 005dc7a8
        ;   XREF to: 005dc7b8 (CONDITIONAL_JUMP)  ; LAB_005dc7b8
    XOR AL,AL                           ; 005dc7aa
    MOV [0x02d03ec4],AL                 ; 005dc7ac | CHAR_ARRAY_02d03ec4
    XOR byte ptr [0x03f87340],0x1       ; 005dc7b1 | g_TexturePreviewFullscreen
    MOV EAX,[0x00679394]                ; 005dc7b8 | g_WindowWidth
        ;   Label: LAB_005dc7b8
    MOV EDX,EAX                         ; 005dc7bd
    MOV ECX,0x7                         ; 005dc7bf
    SAR EDX,0x1f                        ; 005dc7c4
    IDIV ECX                            ; 005dc7c7
    MOV ECX,EAX                         ; 005dc7c9
    MOV EAX,[0x00679394]                ; 005dc7cb | g_WindowWidth
    SUB EAX,ECX                         ; 005dc7d0
    MOV [0x03f87344],EAX                ; 005dc7d2 | g_TexturePreviewX
    MOV EAX,[0x00679398]                ; 005dc7d7 | g_WindowHeight
    MOV EDX,EAX                         ; 005dc7dc
    MOV ESI,0x7                         ; 005dc7de
    SAR EDX,0x1f                        ; 005dc7e3
    IDIV ESI                            ; 005dc7e6
    DEC ECX                             ; 005dc7e8
    MOV dword ptr [0x03f8734c],ECX      ; 005dc7e9 | g_TexturePreviewWidth
    MOV ESI,dword ptr [0x00679398]      ; 005dc7ef | g_WindowHeight
    MOV ECX,dword ptr [0x03f87340]      ; 005dc7f5 | g_TexturePreviewFullscreen
    SUB ESI,EAX                         ; 005dc7fb
    DEC EAX                             ; 005dc7fd
    MOV dword ptr [0x03f87348],ESI      ; 005dc7fe | g_TexturePreviewY
    MOV [0x03f87350],EAX                ; 005dc804 | g_TexturePreviewHeight
    TEST ECX,ECX                        ; 005dc809
    JNZ 0x005dc824                      ; 005dc80b
        ;   XREF to: 005dc824 (CONDITIONAL_JUMP)  ; LAB_005dc824
    PUSH EAX                            ; 005dc80d
    MOV EDI,dword ptr [0x03f8734c]      ; 005dc80e | g_TexturePreviewWidth
    PUSH EDI                            ; 005dc814
    PUSH ESI                            ; 005dc815
    MOV EAX,[0x03f87344]                ; 005dc816 | g_TexturePreviewX
    PUSH EAX                            ; 005dc81b
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 005dc81c
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 005dc821
    PUSH 0xffff                         ; 005dc824
        ;   Label: LAB_005dc824
    CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490 ; 005dc829
        ;   XREF to: 00505490 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)
    ADD ESP,0x4                         ; 005dc82e
    PUSH 0xffff                         ; 005dc831
    PUSH 0x0                            ; 005dc836
    PUSH 0x0                            ; 005dc838
    MOV EDI,0x80000000                  ; 005dc83a
    MOV EBP,0xf80000                    ; 005dc83f | g_LightBufferPool[11][183800]
    CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0 ; 005dc844
        ;   XREF to: 005054d0 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
    MOV EDX,0xa00                       ; 005dc849
    MOV EAX,0x80000                     ; 005dc84e
    ADD ESP,0xc                         ; 005dc853
    MOV dword ptr [0x00688024],EDI      ; 005dc856 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV dword ptr [0x0068802c],EBP      ; 005dc85c | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688054],EDI      ; 005dc862 | g_RenderVertexBuffer[1].projected_vertex.screen_x
    MOV dword ptr [0x00688084],EDI      ; 005dc868 | g_RenderVertexBuffer[2].projected_vertex.screen_x
    MOV dword ptr [0x00688090],EBP      ; 005dc86e | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880b4],EDI      ; 005dc874 | g_RenderVertexBuffer[3].projected_vertex.screen_x
    MOV dword ptr [0x006880bc],EBP      ; 005dc87a | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x00688014],EDX      ; 005dc880 | g_RenderVertexBuffer
    MOV ECX,EDX                         ; 005dc886
    MOV dword ptr [0x00688018],EDX      ; 005dc888 | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    MOV ESI,EDX                         ; 005dc88e
    MOV dword ptr [0x0068801c],EDX      ; 005dc890 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV [0x00688030],EAX                ; 005dc896 | g_RenderVertexBuffer[0].v
    MOV [0x0068805c],EAX                ; 005dc89b | g_RenderVertexBuffer[1].u
    MOV [0x00688060],EAX                ; 005dc8a0 | g_RenderVertexBuffer[1].v
    XOR EDI,EDI                         ; 005dc8a5
    MOV EDX,0xfffff600                  ; 005dc8a7
    MOV dword ptr [0x00688048],ECX      ; 005dc8ac | g_RenderVertexBuffer[1].projected_vertex.transformed_y
    MOV dword ptr [0x0068804c],ECX      ; 005dc8b2 | g_RenderVertexBuffer[1].projected_vertex.transformed_z
    MOV dword ptr [0x0068807c],ESI      ; 005dc8b8 | g_RenderVertexBuffer[2].projected_vertex.transformed_z
    MOV dword ptr [ESP + 0x2c],EDI      ; 005dc8be
    MOV dword ptr [0x00688044],EDX      ; 005dc8c2 | g_RenderVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [0x00688074],EDX      ; 005dc8c8 | g_RenderVertexBuffer[2].projected_vertex.transformed_x
    MOV ECX,EDX                         ; 005dc8ce
    MOV dword ptr [0x00688078],EDX      ; 005dc8d0 | g_RenderVertexBuffer[2].projected_vertex.transformed_y
    MOV EDX,ESI                         ; 005dc8d6
    MOV dword ptr [0x006880a8],ECX      ; 005dc8d8 | g_RenderVertexBuffer[3].projected_vertex.transformed_y
    MOV ESI,0x3                         ; 005dc8de
    MOV dword ptr [0x006880a4],EDX      ; 005dc8e3 | g_RenderVertexBuffer[3].projected_vertex.transformed_x
    MOV dword ptr [0x006880ac],EDX      ; 005dc8e9 | g_RenderVertexBuffer[3].projected_vertex.transformed_z
    XOR ECX,ECX                         ; 005dc8ef
    MOV EDX,0x4                         ; 005dc8f1
    MOV dword ptr [ESP + 0x8],ECX       ; 005dc8f6
    MOV dword ptr [ESP + 0xc],ECX       ; 005dc8fa
    MOV dword ptr [ESP + 0x10],ECX      ; 005dc8fe
    MOV dword ptr [ESP + 0x14],ECX      ; 005dc902
    MOV dword ptr [ESP + 0x18],ECX      ; 005dc906
    MOV dword ptr [ESP + 0x24],ESI      ; 005dc90a
    MOV ECX,0x2                         ; 005dc90e
    MOV dword ptr [ESP + 0x4],EDX       ; 005dc913
    MOV EDX,0x1                         ; 005dc917
    MOV dword ptr [ESP + 0x20],ECX      ; 005dc91c
    MOV dword ptr [ESP + 0x1c],EDX      ; 005dc920
    MOV [0x0068808c],EAX                ; 005dc924 | g_RenderVertexBuffer[2].u
    MOV ESI,dword ptr [EBX + 0x1a5e8]   ; 005dc929
    LEA EAX,[EBX + 0x6d68]              ; 005dc92f
    SHL ESI,0x4                         ; 005dc935
    LEA EDI,[ESP + 0x30]                ; 005dc938
    ADD ESI,EAX                         ; 005dc93c
    MOV dword ptr [0x006880c0],EBP      ; 005dc93e | g_RenderVertexBuffer[3].v
    PUSH EDI                            ; 005dc944
    MOV AL,byte ptr [ESI]               ; 005dc945
        ;   Label: LAB_005dc945
    MOV byte ptr [EDI],AL               ; 005dc947
    CMP AL,0x0                          ; 005dc949
    JZ 0x005dc95d                       ; 005dc94b
        ;   XREF to: 005dc95d (CONDITIONAL_JUMP)  ; LAB_005dc95d
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc94d
    ADD ESI,0x2                         ; 005dc950
    MOV byte ptr [EDI + 0x1],AL         ; 005dc953
    ADD EDI,0x2                         ; 005dc956
    CMP AL,0x0                          ; 005dc959
    JNZ 0x005dc945                      ; 005dc95b
        ;   XREF to: 005dc945 (CONDITIONAL_JUMP)  ; LAB_005dc945
    POP EDI                             ; 005dc95d
        ;   Label: LAB_005dc95d
    LEA EAX,[ESP + 0x28]                ; 005dc95e
    PUSH EAX                            ; 005dc962
    MOV EBP,dword ptr [0x006703ec]      ; 005dc963 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005dc969 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005dc96a
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005dc96f
    MOV EAX,ESP                         ; 005dc972
    PUSH EAX                            ; 005dc974
    CALL engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0 ; 005dc975
        ;   XREF to: 00403cc0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0(SMRGLHeaderPrimitive * prim)
    MOV DL,byte ptr [0x02d03eb3]        ; 005dc97a | g_KeyboardState+0x1b
    ADD ESP,0x4                         ; 005dc980
    TEST DL,DL                          ; 005dc983
    JZ 0x005dc9c3                       ; 005dc985
        ;   XREF to: 005dc9c3 (CONDITIONAL_JUMP)  ; LAB_005dc9c3
    XOR ECX,ECX                         ; 005dc987
    MOV CL,byte ptr [0x02d03ec2]        ; 005dc989 | CHAR_ARRAY_02d03ec2
    XOR DH,DH                           ; 005dc98f
    LEA EAX,[ECX*0x8 + 0x0]             ; 005dc991
    MOV byte ptr [0x02d03eb3],DH        ; 005dc998 | g_KeyboardState+0x1b
    ADD EAX,ECX                         ; 005dc99e
    MOV EDX,dword ptr [EBX + 0x1a5e8]   ; 005dc9a0
    INC EAX                             ; 005dc9a6
    ADD EDX,EAX                         ; 005dc9a7
    MOV ECX,dword ptr [EBX + 0x6d64]    ; 005dc9a9
    MOV dword ptr [EBX + 0x1a5e8],EDX   ; 005dc9af
    CMP EDX,ECX                         ; 005dc9b5
    JL 0x005dc9c3                       ; 005dc9b7
        ;   XREF to: 005dc9c3 (CONDITIONAL_JUMP)  ; LAB_005dc9c3
    MOV dword ptr [EBX + 0x1a5e8],0x0   ; 005dc9b9
    CMP byte ptr [0x02d03eb2],0x0       ; 005dc9c3 | g_KeyboardState+0x1a
        ;   Label: LAB_005dc9c3
    JZ 0x005dc9f8                       ; 005dc9ca
        ;   XREF to: 005dc9f8 (CONDITIONAL_JUMP)  ; LAB_005dc9f8
    XOR CH,CH                           ; 005dc9cc
    MOV byte ptr [0x02d03eb2],CH        ; 005dc9ce | g_KeyboardState+0x1a
    XOR ECX,ECX                         ; 005dc9d4
    MOV CL,byte ptr [0x02d03ec2]        ; 005dc9d6 | CHAR_ARRAY_02d03ec2
    LEA EAX,[ECX*0x8 + 0x0]             ; 005dc9dc
    ADD EAX,ECX                         ; 005dc9e3
    MOV ESI,dword ptr [EBX + 0x1a5e8]   ; 005dc9e5
    INC EAX                             ; 005dc9eb
    SUB ESI,EAX                         ; 005dc9ec
    MOV dword ptr [EBX + 0x1a5e8],ESI   ; 005dc9ee
    TEST ESI,ESI                        ; 005dc9f4
    JL 0x005dca09                       ; 005dc9f6
        ;   XREF to: 005dca09 (CONDITIONAL_JUMP)  ; LAB_005dca09
    CMP dword ptr [0x03f87340],0x0      ; 005dc9f8 | g_TexturePreviewFullscreen
        ;   Label: LAB_005dc9f8
    JZ 0x005dca18                       ; 005dc9ff
        ;   XREF to: 005dca18 (CONDITIONAL_JUMP)  ; LAB_005dca18
    ADD ESP,0x40                        ; 005dca01
        ;   Label: LAB_005dca01
    POP EBP                             ; 005dca04
    POP EDI                             ; 005dca05
    POP ESI                             ; 005dca06
    POP EBX                             ; 005dca07
    RET                                 ; 005dca08
    MOV EAX,dword ptr [EBX + 0x6d64]    ; 005dca09
        ;   Label: LAB_005dca09
    DEC EAX                             ; 005dca0f
    MOV dword ptr [EBX + 0x1a5e8],EAX   ; 005dca10
    JMP 0x005dc9f8                      ; 005dca16
        ;   XREF to: 005dc9f8 (UNCONDITIONAL_JUMP)  ; LAB_005dc9f8
    CALL engine_matrix.c_popViewport_FUN_0050e480 ; 005dca18
        ;   XREF to: 0050e480 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0050e480()
        ;   Label: LAB_005dca18
    ADD ESP,0x40                        ; 005dca1d
    POP EBP                             ; 005dca20
    POP EDI                             ; 005dca21
    POP ESI                             ; 005dca22
    POP EBX                             ; 005dca23
    RET                                 ; 005dca24

