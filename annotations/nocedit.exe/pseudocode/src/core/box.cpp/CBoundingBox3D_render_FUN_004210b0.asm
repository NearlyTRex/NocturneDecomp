; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0 (CBoundingBox3D *this_ptr,int param1,int param2,int param3)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param1
; int              Stack[0xc]:4   param2
; int              Stack[0x10]:4   param3
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_curtain.cpp_FUN_0044b060 at 0044b22a
;   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 at 00480852
;   core_platfrm.cpp_CPlatform_renderOpaque_FUN_0054d720 at 0054d7fa
;   core_vehicle.cpp_CVehicle_FUN_005e88c0 at 005e894c
;
; Referenced Globals:
;   float g_BoundingBoxWorldToIntegerScale = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   void* g_CurrentTextureData
;   void* g_CurrentTextureOpacityData
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004210b0
        ;   Label: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
    SUB ESP,0xac                        ; 004210b1
    MOV EBP,dword ptr [ESP + 0xb4]      ; 004210b7
    PUSH EDI                            ; 004210be
    PUSH ESI                            ; 004210bf
    PUSH EBX                            ; 004210c0
    LEA EDI,[ESP + 0xc]                 ; 004210c1
    XOR ESI,ESI                         ; 004210c5
    PUSH ESI                            ; 004210c7
        ;   Label: LAB_004210c7
    LEA EAX,[ESP + 0xa4]                ; 004210c8
    PUSH EAX                            ; 004210cf
    PUSH EBP                            ; 004210d0
    MOV EBX,EDI                         ; 004210d1
    ADD EDI,0xc                         ; 004210d3
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 004210d6
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 004210db
    LEA EAX,[ESP + 0xa0]                ; 004210de
    INC ESI                             ; 004210e5
    FLD float ptr [EAX]                 ; 004210e6
    FMUL float ptr [0x0065b160]         ; 004210e8 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 004210ee
    FLD float ptr [EAX + 0x4]           ; 004210f0
    FMUL float ptr [0x0065b160]         ; 004210f3 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 004210f9
    FLD float ptr [EAX + 0x8]           ; 004210fc
    FMUL float ptr [0x0065b160]         ; 004210ff | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 00421105
    CMP ESI,0x8                         ; 00421108
    JL 0x004210c7                       ; 0042110b
        ;   XREF to: 004210c7 (CONDITIONAL_JUMP)  ; LAB_004210c7
    LEA EAX,[ESP + 0xc]                 ; 0042110d
    PUSH EAX                            ; 00421111
    PUSH 0x8                            ; 00421112
    MOV EDX,dword ptr [0x006810c8]      ; 00421114 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0042111a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 0042111b
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    ADD ESP,0xc                         ; 00421120
    PUSH 0x1                            ; 00421123
    MOV EBX,dword ptr [0x006703ec]      ; 00421125 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV ECX,0x4                         ; 0042112b
    PUSH EBX                            ; 00421130 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x78],ECX      ; 00421131
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 00421135
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0042113a
    PUSH 0x0                            ; 0042113d
    MOV ESI,dword ptr [0x006703ec]      ; 0042113f | g_CDemonRendererPtr2
    PUSH ESI                            ; 00421145 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00421146
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0042114b
    LEA EBX,[ESP + 0x94]                ; 0042114e
    MOV EAX,EBP                         ; 00421155
    FLD float ptr [EAX]                 ; 00421157
    FMUL float ptr [0x0065b160]         ; 00421159 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 0042115f
    FLD float ptr [EAX + 0x4]           ; 00421161
    FMUL float ptr [0x0065b160]         ; 00421164 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 0042116a
    FLD float ptr [EAX + 0x8]           ; 0042116d
    FMUL float ptr [0x0065b160]         ; 00421170 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 00421176
    LEA EBX,[ESP + 0xac]                ; 00421179
    LEA EAX,[EBP + 0xc]                 ; 00421180
    FLD float ptr [EAX]                 ; 00421183
    FMUL float ptr [0x0065b160]         ; 00421185 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 0042118b
    FLD float ptr [EAX + 0x4]           ; 0042118d
    FMUL float ptr [0x0065b160]         ; 00421190 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 00421196
    FLD float ptr [EAX + 0x8]           ; 00421199
    FMUL float ptr [0x0065b160]         ; 0042119c | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 004211a2
    MOV EDI,dword ptr [0x006703ec]      ; 004211a5 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004211ab | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004211ac
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004211b1
    TEST EAX,EAX                        ; 004211b4
    JNZ 0x004212ab                      ; 004211b6
        ;   XREF to: 004212ab (CONDITIONAL_JUMP)  ; LAB_004212ab
    MOV [0x02d03e84],EAX                ; 004211bc | g_CurrentTextureOpacityData
    MOV [0x02d03e80],EAX                ; 004211c1 | g_CurrentTextureData
    MOV EAX,[0x006703ec]                ; 004211c6 | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 004211cb | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x20],0x7fff   ; 004211cd
    MOV EBX,dword ptr [EAX]             ; 004211d4 | g_CDemonRendererInstance
    XOR EBP,EBP                         ; 004211d6
    MOV dword ptr [EBX + 0x24],EBP      ; 004211d8
    MOV EBX,dword ptr [EAX]             ; 004211db | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x28],EBP      ; 004211dd
    MOV EBX,dword ptr [EAX]             ; 004211e0 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x50],EBP      ; 004211e2
    MOV EBX,dword ptr [EAX]             ; 004211e5 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x54],0x7fff   ; 004211e7
    MOV EBX,dword ptr [EAX]             ; 004211ee | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x58],EBP      ; 004211f0
    MOV EBX,dword ptr [EAX]             ; 004211f3 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x80],EBP      ; 004211f5
    MOV EBX,dword ptr [EAX]             ; 004211fb | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x84],EBP      ; 004211fd
    MOV EBX,dword ptr [EAX]             ; 00421203 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x88],0x7fff   ; 00421205
    MOV EBX,dword ptr [EAX]             ; 0042120f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb0],0x7fff   ; 00421211
    MOV EBX,dword ptr [EAX]             ; 0042121b | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb4],0x7fff   ; 0042121d
    MOV EBX,dword ptr [EAX]             ; 00421227 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb8],EBP      ; 00421229
    MOV EBX,dword ptr [EAX]             ; 0042122f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xe0],EBP      ; 00421231
    MOV EBX,dword ptr [EAX]             ; 00421237 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xe4],0x7fff   ; 00421239
    MOV EBX,dword ptr [EAX]             ; 00421243 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xe8],0x7fff   ; 00421245
    MOV EBX,dword ptr [EAX]             ; 0042124f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x110],0x7fff  ; 00421251
    MOV EBX,dword ptr [EAX]             ; 0042125b | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x114],EBP     ; 0042125d
    MOV EBX,dword ptr [EAX]             ; 00421263 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x118],0x7fff  ; 00421265
    MOV EBX,dword ptr [EAX]             ; 0042126f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x140],0x7fff  ; 00421271
    MOV EBX,dword ptr [EAX]             ; 0042127b | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x144],0x7fff  ; 0042127d
    MOV EBX,dword ptr [EAX]             ; 00421287 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x148],0x7fff  ; 00421289
    MOV EBX,dword ptr [EAX]             ; 00421293 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x170],EBP     ; 00421295
    MOV EBX,dword ptr [EAX]             ; 0042129b | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x174],EBP     ; 0042129d
    MOV EAX,dword ptr [EAX]             ; 004212a3 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x178],EBP     ; 004212a5
    MOV EDX,0xffffffff                  ; 004212ab
        ;   Label: LAB_004212ab
    MOV EAX,dword ptr [ESP + 0x94]      ; 004212b0
    MOV EBP,0x4                         ; 004212b7
    PUSH 0x2c4                          ; 004212bc
    MOV EBX,0x1                         ; 004212c1
    MOV EDI,0xffffffff                  ; 004212c6
    XOR ECX,ECX                         ; 004212cb
    MOV dword ptr [ESP + 0x78],EDX      ; 004212cd
    MOV dword ptr [ESP + 0x7c],ECX      ; 004212d1
    MOV dword ptr [ESP + 0x80],ECX      ; 004212d5
    MOV dword ptr [ESP + 0x84],EAX      ; 004212dc
    MOV ESI,EAX                         ; 004212e3
    MOV dword ptr [ESP + 0x88],ECX      ; 004212e5
    MOV dword ptr [ESP + 0x8c],EBP      ; 004212ec
    MOV EAX,0x6                         ; 004212f3
    MOV EDX,0x2                         ; 004212f8
    MOV ECX,dword ptr [0x006703ec]      ; 004212fd | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x90],EAX      ; 00421303
    LEA EAX,[ESP + 0x70]                ; 0042130a
    NEG ESI                             ; 0042130e
    PUSH EAX                            ; 00421310
    XOR EBP,EBP                         ; 00421311
    MOV dword ptr [ESP + 0x88],ESI      ; 00421313
    PUSH ECX                            ; 0042131a | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x9c],EDX      ; 0042131b
    XOR ESI,ESI                         ; 00421322
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00421324
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    MOV EDX,0x7                         ; 00421329
    ADD ESP,0xc                         ; 0042132e
    MOV ECX,0x5                         ; 00421331
    MOV EAX,dword ptr [ESP + 0xac]      ; 00421336
    PUSH 0x2c4                          ; 0042133d
    MOV dword ptr [ESP + 0x78],EBX      ; 00421342
    MOV dword ptr [ESP + 0x84],EAX      ; 00421346
    MOV EAX,0x3                         ; 0042134d
    MOV dword ptr [ESP + 0x7c],ESI      ; 00421352
    MOV dword ptr [ESP + 0x8c],EAX      ; 00421356
    LEA EAX,[ESP + 0x70]                ; 0042135d
    MOV dword ptr [ESP + 0x88],EBX      ; 00421361
    PUSH EAX                            ; 00421368
    MOV EBX,dword ptr [0x006703ec]      ; 00421369 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x84],ESI      ; 0042136f
    PUSH EBX                            ; 00421376 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x98],EDX      ; 00421377
    MOV dword ptr [ESP + 0x9c],ECX      ; 0042137e
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00421385
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    MOV ECX,0x1                         ; 0042138a
    ADD ESP,0xc                         ; 0042138f
    MOV EBX,0x5                         ; 00421392
    MOV EAX,dword ptr [ESP + 0x98]      ; 00421397
    PUSH 0x2c4                          ; 0042139e
    MOV dword ptr [ESP + 0x78],ESI      ; 004213a3
    MOV dword ptr [ESP + 0x7c],EDI      ; 004213a7
    MOV dword ptr [ESP + 0x80],ESI      ; 004213ab
    MOV dword ptr [ESP + 0x88],ESI      ; 004213b2
    MOV dword ptr [ESP + 0x8c],ECX      ; 004213b9
    MOV dword ptr [ESP + 0x84],EAX      ; 004213c0
    NEG EAX                             ; 004213c7
    MOV dword ptr [ESP + 0x90],EBX      ; 004213c9
    MOV dword ptr [ESP + 0x84],EAX      ; 004213d0
    LEA EAX,[ESP + 0x70]                ; 004213d7
    MOV ESI,0x4                         ; 004213db
    PUSH EAX                            ; 004213e0
    MOV EDI,dword ptr [0x006703ec]      ; 004213e1 | g_CDemonRendererPtr2
    MOV EBX,0x6                         ; 004213e7
    PUSH EDI                            ; 004213ec | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x9c],ESI      ; 004213ed
    MOV ESI,0x7                         ; 004213f4
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 004213f9
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    MOV EAX,0x1                         ; 004213fe
    MOV ECX,0x2                         ; 00421403
    ADD ESP,0xc                         ; 00421408
    MOV EDI,0x3                         ; 0042140b
    XOR EDX,EDX                         ; 00421410
    PUSH 0x2c4                          ; 00421412
    MOV dword ptr [ESP + 0x78],EBP      ; 00421417
    MOV dword ptr [ESP + 0x7c],EAX      ; 0042141b
    MOV dword ptr [ESP + 0x80],EDX      ; 0042141f
    MOV dword ptr [ESP + 0x88],ECX      ; 00421426
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0042142d
    MOV dword ptr [ESP + 0x8c],EBX      ; 00421434
    MOV dword ptr [ESP + 0x84],EAX      ; 0042143b
    LEA EAX,[ESP + 0x70]                ; 00421442
    MOV dword ptr [ESP + 0x90],ESI      ; 00421446
    PUSH EAX                            ; 0042144d
    MOV EBP,dword ptr [0x006703ec]      ; 0042144e | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x98],EDI      ; 00421454
    PUSH EBP                            ; 0042145b | g_CDemonRendererInstance
    MOV EDI,0x2                         ; 0042145c
    XOR ESI,ESI                         ; 00421461
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00421463
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    MOV ECX,0xffffffff                  ; 00421468
    MOV EBP,0x3                         ; 0042146d
    ADD ESP,0xc                         ; 00421472
    MOV EDX,dword ptr [0x006703ec]      ; 00421475 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    XOR EAX,EAX                         ; 0042147b
    PUSH 0x2c4                          ; 0042147d
    MOV dword ptr [ESP + 0x78],EAX      ; 00421482
    MOV dword ptr [ESP + 0x7c],EAX      ; 00421486
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042148a
    MOV dword ptr [ESP + 0x80],ECX      ; 00421491
    MOV dword ptr [ESP + 0x84],EAX      ; 00421498
    MOV EBX,EAX                         ; 0042149f
    MOV EAX,0x1                         ; 004214a1
    MOV dword ptr [ESP + 0x88],ESI      ; 004214a6
    MOV dword ptr [ESP + 0x94],EAX      ; 004214ad
    LEA EAX,[ESP + 0x70]                ; 004214b4
    MOV dword ptr [ESP + 0x8c],EDI      ; 004214b8
    PUSH EAX                            ; 004214bf
    MOV dword ptr [ESP + 0x94],EBP      ; 004214c0
    NEG EBX                             ; 004214c7
    PUSH EDX                            ; 004214c9 | g_CDemonRendererInstance
    MOV EDI,0x4                         ; 004214ca
    MOV dword ptr [ESP + 0x8c],EBX      ; 004214cf
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 004214d6
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 004214db
    MOV EBP,0x5                         ; 004214de
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004214e3
    MOV dword ptr [ESP + 0x74],ESI      ; 004214ea
    MOV dword ptr [ESP + 0x78],ESI      ; 004214ee
    MOV dword ptr [ESP + 0x84],EDI      ; 004214f2
    MOV dword ptr [ESP + 0x88],EBP      ; 004214f9
    MOV ESI,0x1                         ; 00421500
    MOV dword ptr [ESP + 0x80],EAX      ; 00421505
    MOV dword ptr [ESP + 0x7c],ESI      ; 0042150c
    POP EBX                             ; 00421510
    POP ESI                             ; 00421511
    POP EDI                             ; 00421512
    MOV EAX,0x7                         ; 00421513
    PUSH 0x2c4                          ; 00421518
    MOV dword ptr [ESP + 0x84],EAX      ; 0042151d
    LEA EAX,[ESP + 0x64]                ; 00421524
    PUSH EAX                            ; 00421528
    MOV ECX,dword ptr [0x006703ec]      ; 00421529 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,0x6                         ; 0042152f
    PUSH ECX                            ; 00421534 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x90],EDX      ; 00421535
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 0042153c
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 00421541
    ADD ESP,0xac                        ; 00421544
    POP EBP                             ; 0042154a
    RET                                 ; 0042154b

