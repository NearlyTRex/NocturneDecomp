; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   tri_count
; void *           Stack[0x10]:4   face_data
; CVector3i *      Stack[0x14]:4   vertex_positions
; int              Stack[0x18]:4   vertices_per_face
; CVector3i *      Stack[0x1c]:4   vertex_normals
; Local Variables:
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 00416084
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437e8c
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0043f330 at 0043f4a4
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0 at 00453127
;   core_glass.cpp_CGlass_renderOpaque_FUN_004ac440 at 004ac583
;   core_glass.cpp_CGlass_renderTransparent_FUN_004ac600 at 004ac73f
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0 at 004dfe70
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470 at 0051849d
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005906b9
;   TerminatedCString s_CDemonSet_lightVerticies_005906c9
;   TerminatedCString s_core_set_cpp_0059071e
;   TerminatedCString s_Too_many_normals_on_this_0059072e
;   TerminatedCString s_core_set_cpp_00590757
;   TerminatedCString s_Need_more_normals_for_pa_00590767
;   double DOUBLE_00590792 = 65535
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   void* g_BackBuffer
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   ... and 26 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
;   core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
;   crt_memory.c_memset_FUN_00563cc0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c2d0
        ;   Label: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
    PUSH ESI                            ; 0050c2d1
    PUSH EDI                            ; 0050c2d2
    PUSH EBP                            ; 0050c2d3
    MOV EBP,ESP                         ; 0050c2d4
    SUB ESP,0x15c                       ; 0050c2d6
    AND ESP,0xfffffff8                  ; 0050c2dc
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c2df
    CMP EDX,0x4e20                      ; 0050c2e2
    JLE 0x0050c313                      ; 0050c2e8
        ;   XREF to: 0050c313 (CONDITIONAL_JUMP)  ; LAB_0050c313
    PUSH 0x4e20                         ; 0050c2ea
    PUSH EDX                            ; 0050c2ef
    MOV ECX,0x5906b9                    ; 0050c2f0 | = "..\\core\\set.cpp"
    MOV EBX,0xd26                       ; 0050c2f5
    PUSH 0x5906c9                       ; 0050c2fa | = "CDemonSet::lightVerticies - tried to ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0050c2ff | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 0050c305 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050c30b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 0050c310
    MOV EDI,dword ptr [0x005ae704]      ; 0050c313 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050c313
    PUSH EDI                            ; 0050c319 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0050c31a
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050c31f
    TEST EAX,EAX                        ; 0050c322
    JNZ 0x0050c390                      ; 0050c324
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c32a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050c32d
    SUB EAX,EDX                         ; 0050c334
    MOV EDX,EAX                         ; 0050c336
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c338
    MOV ECX,dword ptr [EAX + 0x15a898]  ; 0050c33b
    SHL EDX,0x4                         ; 0050c341
    TEST ECX,ECX                        ; 0050c344
    JZ 0x0050c486                       ; 0050c346
        ;   XREF to: 0050c486 (CONDITIONAL_JUMP)  ; LAB_0050c486
    CMP dword ptr [0x01ffb060],0x0      ; 0050c34c | DAT_01ffb060
    JZ 0x0050c397                       ; 0050c353
        ;   XREF to: 0050c397 (CONDITIONAL_JUMP)  ; LAB_0050c397
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c355
    JLE 0x0050c380                      ; 0050c359
        ;   XREF to: 0050c380 (CONDITIONAL_JUMP)  ; LAB_0050c380
    XOR EAX,EAX                         ; 0050c35b
    ADD EAX,0x30                        ; 0050c35d
        ;   Label: LAB_0050c35d
    XOR EBX,EBX                         ; 0050c360
    MOV dword ptr [EAX + 0x5c5004],EBX  ; 0050c362 | DAT_005c5034 | DAT_005c5064
    MOV dword ptr [EAX + 0x5c5008],EBX  ; 0050c368 | DAT_005c5038 | DAT_005c5068
    MOV dword ptr [EAX + 0x5c500c],EBX  ; 0050c36e | DAT_005c503c | DAT_005c506c
    MOV dword ptr [EAX + 0x5c5010],EBX  ; 0050c374 | DAT_005c5040 | DAT_005c5070
    CMP EAX,EDX                         ; 0050c37a
    JL 0x0050c35d                       ; 0050c37c
        ;   XREF to: 0050c35d (CONDITIONAL_JUMP)  ; LAB_0050c35d
    MOV EAX,EAX                         ; 0050c37e
    XOR EBX,EBX                         ; 0050c380
        ;   Label: LAB_0050c380
    MOV dword ptr [0x01c038f4],EBX      ; 0050c382 | DAT_01c038f4
    LEA EAX,[EAX]                       ; 0050c388
    MOV EDX,EDX                         ; 0050c38e
    MOV ESP,EBP                         ; 0050c390
        ;   Label: LAB_0050c390
    POP EBP                             ; 0050c392
    POP EDI                             ; 0050c393
    POP ESI                             ; 0050c394
    POP EBX                             ; 0050c395
    RET                                 ; 0050c396
    CMP ECX,0x2                         ; 0050c397
        ;   Label: LAB_0050c397
    JNZ 0x0050c3ef                      ; 0050c39a
        ;   XREF to: 0050c3ef (CONDITIONAL_JUMP)  ; LAB_0050c3ef
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050c39c
    XOR ESI,ESI                         ; 0050c39f
    TEST EAX,EAX                        ; 0050c3a1
    JLE 0x0050c3e0                      ; 0050c3a3
        ;   XREF to: 0050c3e0 (CONDITIONAL_JUMP)  ; LAB_0050c3e0
    MOV EDI,dword ptr [EBP + 0x24]      ; 0050c3a5
    XOR EBX,EBX                         ; 0050c3a8
    PUSH 0x1                            ; 0050c3aa
        ;   Label: LAB_0050c3aa
    PUSH ESI                            ; 0050c3ac
    XOR ECX,ECX                         ; 0050c3ad
    PUSH ECX                            ; 0050c3af
    PUSH EDI                            ; 0050c3b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c3b1
    ADD EBX,0x30                        ; 0050c3b4
    PUSH EAX                            ; 0050c3b7
    MOV dword ptr [EBX + 0x5c5010],ECX  ; 0050c3b8 | DAT_005c5040 | DAT_005c5070
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050c3be
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0050c3c3
    INC ESI                             ; 0050c3c6
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c3c7
    ADD EDI,0xc                         ; 0050c3ca
    CMP ESI,EDX                         ; 0050c3cd
    JL 0x0050c3aa                       ; 0050c3cf
        ;   XREF to: 0050c3aa (CONDITIONAL_JUMP)  ; LAB_0050c3aa
    LEA EAX,[EAX]                       ; 0050c3d1
    LEA EDX,[EDX]                       ; 0050c3d7
    LEA EAX,[EAX]                       ; 0050c3dd
    XOR ECX,ECX                         ; 0050c3e0
        ;   Label: LAB_0050c3e0
    MOV dword ptr [0x01c038f4],ECX      ; 0050c3e2 | DAT_01c038f4
    MOV ESP,EBP                         ; 0050c3e8
    POP EBP                             ; 0050c3ea
    POP EDI                             ; 0050c3eb
    POP ESI                             ; 0050c3ec
    POP EBX                             ; 0050c3ed
    RET                                 ; 0050c3ee
    CMP ECX,0x3                         ; 0050c3ef
        ;   Label: LAB_0050c3ef
    JNZ 0x0050c449                      ; 0050c3f2
        ;   XREF to: 0050c449 (CONDITIONAL_JUMP)  ; LAB_0050c449
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c3f4
    JLE 0x0050c3e0                      ; 0050c3f8
        ;   XREF to: 0050c3e0 (CONDITIONAL_JUMP)  ; LAB_0050c3e0
    MOV ECX,EDX                         ; 0050c3fa
    XOR EAX,EAX                         ; 0050c3fc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c3fe
        ;   Label: LAB_0050c3fe
    MOV EDX,dword ptr [EDX + 0x15aaa0]  ; 0050c401
    MOV dword ptr [EAX + 0x5c5034],EDX  ; 0050c407 | DAT_005c5034 | DAT_005c5064
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c40d
    MOV EDX,dword ptr [EDX + 0x15aaa4]  ; 0050c410
    MOV dword ptr [EAX + 0x5c5038],EDX  ; 0050c416 | DAT_005c5038 | DAT_005c5068
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c41c
    ADD EAX,0x30                        ; 0050c41f
    MOV EDX,dword ptr [EDX + 0x15aaa8]  ; 0050c422
    MOV dword ptr [EAX + 0x5c500c],EDX  ; 0050c428 | DAT_005c503c | DAT_005c506c
    XOR EDX,EDX                         ; 0050c42e
    MOV dword ptr [EAX + 0x5c5010],EDX  ; 0050c430 | DAT_005c5040 | DAT_005c5070
    CMP EAX,ECX                         ; 0050c436
    JL 0x0050c3fe                       ; 0050c438
        ;   XREF to: 0050c3fe (CONDITIONAL_JUMP)  ; LAB_0050c3fe
    XOR ECX,ECX                         ; 0050c43a
    MOV dword ptr [0x01c038f4],ECX      ; 0050c43c | DAT_01c038f4
    MOV ESP,EBP                         ; 0050c442
    POP EBP                             ; 0050c444
    POP EDI                             ; 0050c445
    POP ESI                             ; 0050c446
    POP EBX                             ; 0050c447
    RET                                 ; 0050c448
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c449
        ;   Label: LAB_0050c449
    JLE 0x0050c3e0                      ; 0050c44d
        ;   XREF to: 0050c3e0 (CONDITIONAL_JUMP)  ; LAB_0050c3e0
    MOV ECX,0xffff                      ; 0050c44f
    XOR EAX,EAX                         ; 0050c454
    ADD EAX,0x30                        ; 0050c456
        ;   Label: LAB_0050c456
    MOV dword ptr [EAX + 0x5c5004],ECX  ; 0050c459 | DAT_005c5034 | DAT_005c5064
    MOV dword ptr [EAX + 0x5c5008],ECX  ; 0050c45f | DAT_005c5038 | DAT_005c5068
    XOR EDI,EDI                         ; 0050c465
    MOV dword ptr [EAX + 0x5c500c],ECX  ; 0050c467 | DAT_005c503c | DAT_005c506c
    MOV dword ptr [EAX + 0x5c5010],EDI  ; 0050c46d | DAT_005c5040 | DAT_005c5070
    CMP EAX,EDX                         ; 0050c473
    JL 0x0050c456                       ; 0050c475
        ;   XREF to: 0050c456 (CONDITIONAL_JUMP)  ; LAB_0050c456
    XOR ECX,ECX                         ; 0050c477
    MOV dword ptr [0x01c038f4],ECX      ; 0050c479 | DAT_01c038f4
    MOV ESP,EBP                         ; 0050c47f
    POP EBP                             ; 0050c481
    POP EDI                             ; 0050c482
    POP ESI                             ; 0050c483
    POP EBX                             ; 0050c484
    RET                                 ; 0050c485
    MOV EBX,dword ptr [EAX + 0x161270]  ; 0050c486
        ;   Label: LAB_0050c486
    TEST EBX,EBX                        ; 0050c48c
    JZ 0x0050c4d9                       ; 0050c48e
        ;   XREF to: 0050c4d9 (CONDITIONAL_JUMP)  ; LAB_0050c4d9
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c490
    JLE 0x0050c390                      ; 0050c494
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV ECX,EDX                         ; 0050c49a
    XOR EAX,EAX                         ; 0050c49c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c49e
        ;   Label: LAB_0050c49e
    MOV EDX,dword ptr [EDX + 0x161274]  ; 0050c4a1
    MOV dword ptr [EAX + 0x5c5034],EDX  ; 0050c4a7 | DAT_005c5034 | DAT_005c5064
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c4ad
    MOV EDX,dword ptr [EDX + 0x161278]  ; 0050c4b0
    MOV dword ptr [EAX + 0x5c5038],EDX  ; 0050c4b6 | DAT_005c5038 | DAT_005c5068
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050c4bc
    ADD EAX,0x30                        ; 0050c4bf
    MOV EDX,dword ptr [EDX + 0x16127c]  ; 0050c4c2
    MOV dword ptr [EAX + 0x5c500c],EDX  ; 0050c4c8 | DAT_005c503c | DAT_005c506c
    CMP EAX,ECX                         ; 0050c4ce
    JL 0x0050c49e                       ; 0050c4d0
        ;   XREF to: 0050c49e (CONDITIONAL_JUMP)  ; LAB_0050c49e
    MOV ESP,EBP                         ; 0050c4d2
    POP EBP                             ; 0050c4d4
    POP EDI                             ; 0050c4d5
    POP ESI                             ; 0050c4d6
    POP EBX                             ; 0050c4d7
    RET                                 ; 0050c4d8
    CMP dword ptr [EAX + 0x15a8a0],0x0  ; 0050c4d9
        ;   Label: LAB_0050c4d9
    JZ 0x0050c586                       ; 0050c4e0
        ;   XREF to: 0050c586 (CONDITIONAL_JUMP)  ; LAB_0050c586
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050c4e6
    MOV dword ptr [ESP + 0x138],ECX     ; 0050c4e9
    TEST EBX,EBX                        ; 0050c4f0
    JLE 0x0050c390                      ; 0050c4f2
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    XOR EBX,EBX                         ; 0050c4f8
    MOV EAX,dword ptr [EBX + 0x5c5014]  ; 0050c4fa | DAT_005c5014 | DAT_005c5044
        ;   Label: LAB_0050c4fa
    MOV dword ptr [ESP + 0xc],EAX       ; 0050c500
    MOV EAX,dword ptr [EBX + 0x5c5018]  ; 0050c504 | DAT_005c5018 | DAT_005c5048
    MOV dword ptr [ESP + 0x10],EAX      ; 0050c50a
    MOV EAX,dword ptr [EBX + 0x5c501c]  ; 0050c50e | DAT_005c501c | DAT_005c504c
    MOV dword ptr [ESP + 0x14],EAX      ; 0050c514
    LEA EAX,[ESP + 0xc]                 ; 0050c518
    PUSH EAX                            ; 0050c51c
    PUSH 0x1fb8508                      ; 0050c51d
    LEA ESI,[ESP + 0x74]                ; 0050c522
    LEA EDI,[ESP + 0x8c]                ; 0050c526
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440 ; 0050c52d
        ;   XREF to: 00441440 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x74]                ; 0050c532
    ADD ESP,0x8                         ; 0050c536
    MOVSD ES:EDI,ESI                    ; 0050c539
    MOVSD ES:EDI,ESI                    ; 0050c53a
    MOVSD ES:EDI,ESI                    ; 0050c53b
    PUSH 0x0                            ; 0050c53c
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0050c53e
    PUSH ESI                            ; 0050c545
    PUSH 0x0                            ; 0050c546
    LEA EAX,[ESP + 0x90]                ; 0050c548
    PUSH EAX                            ; 0050c54f
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050c550
    PUSH EDI                            ; 0050c553
    ADD EBX,0x30                        ; 0050c554
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050c557
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EAX,[0x01c038f4]                ; 0050c55c | DAT_01c038f4
    ADD ESP,0x14                        ; 0050c561
    MOV dword ptr [EBX + 0x5c5010],EAX  ; 0050c564 | DAT_005c5040
    LEA EAX,[ESI + 0x1]                 ; 0050c56a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c56d
    MOV dword ptr [ESP + 0x138],EAX     ; 0050c570
    CMP EAX,EDX                         ; 0050c577
    JL 0x0050c4fa                       ; 0050c579
        ;   XREF to: 0050c4fa (CONDITIONAL_JUMP)  ; LAB_0050c4fa
    MOV ESP,EBP                         ; 0050c57f
    POP EBP                             ; 0050c581
    POP EDI                             ; 0050c582
    POP ESI                             ; 0050c583
    POP EBX                             ; 0050c584
    RET                                 ; 0050c585
    CMP dword ptr [EBP + 0x2c],0x0      ; 0050c586
        ;   Label: LAB_0050c586
    JZ 0x0050c71c                       ; 0050c58a
        ;   XREF to: 0050c71c (CONDITIONAL_JUMP)  ; LAB_0050c71c
    CMP dword ptr [EAX + 0x15aa88],0x0  ; 0050c590
    JZ 0x0050c639                       ; 0050c597
        ;   XREF to: 0050c639 (CONDITIONAL_JUMP)  ; LAB_0050c639
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c59d
    XOR EAX,EAX                         ; 0050c5a0
    TEST EDX,EDX                        ; 0050c5a2
    JLE 0x0050c5d0                      ; 0050c5a4
        ;   XREF to: 0050c5d0 (CONDITIONAL_JUMP)  ; LAB_0050c5d0
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0050c5a6
    IMUL ESI,EAX,0xc                    ; 0050c5a9
        ;   Label: LAB_0050c5a9
    LEA EDI,[ESI + 0x2045ab0]           ; 0050c5ac
    MOV ESI,EDX                         ; 0050c5b2
    MOVSD ES:EDI,ESI                    ; 0050c5b4 | DAT_02045abc
    MOVSD ES:EDI,ESI                    ; 0050c5b5 | DAT_02045ac0
    MOVSD ES:EDI,ESI                    ; 0050c5b6 | DAT_02045ac4
    INC EAX                             ; 0050c5b7
    MOV EDI,dword ptr [EBP + 0x18]      ; 0050c5b8
    ADD EDX,0xc                         ; 0050c5bb
    CMP EAX,EDI                         ; 0050c5be
    JL 0x0050c5a9                       ; 0050c5c0
        ;   XREF to: 0050c5a9 (CONDITIONAL_JUMP)  ; LAB_0050c5a9
    LEA EAX,[EAX]                       ; 0050c5c2
    LEA EDX,[EDX]                       ; 0050c5c8
    MOV EAX,EAX                         ; 0050c5ce
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050c5d0
        ;   Label: LAB_0050c5d0
    XOR EBX,EBX                         ; 0050c5d3
    TEST EAX,EAX                        ; 0050c5d5
    JLE 0x0050c390                      ; 0050c5d7
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV ECX,0x200b130                   ; 0050c5dd
    MOV ESI,0x2045ab0                   ; 0050c5e2
    XOR EDI,EDI                         ; 0050c5e7
    MOV dword ptr [ESP + 0x10c],ECX     ; 0050c5e9
    PUSH 0x0                            ; 0050c5f0
        ;   Label: LAB_0050c5f0
    PUSH EBX                            ; 0050c5f2
    PUSH ESI                            ; 0050c5f3
    MOV EDX,dword ptr [ESP + 0x118]     ; 0050c5f4
    PUSH EDX                            ; 0050c5fb
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050c5fc
    PUSH ECX                            ; 0050c5ff
    ADD EDI,0x30                        ; 0050c600
    INC EBX                             ; 0050c603
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050c604
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EAX,[0x01c038f4]                ; 0050c609 | DAT_01c038f4
    ADD ESP,0x14                        ; 0050c60e
    MOV dword ptr [EDI + 0x5c5010],EAX  ; 0050c611 | DAT_005c5040
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0050c617
    ADD ESI,0xc                         ; 0050c61e
    ADD EAX,0xc                         ; 0050c621
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c624
    MOV dword ptr [ESP + 0x10c],EAX     ; 0050c627
    CMP EBX,EDX                         ; 0050c62e
    JL 0x0050c5f0                       ; 0050c630
        ;   XREF to: 0050c5f0 (CONDITIONAL_JUMP)  ; LAB_0050c5f0
    MOV ESP,EBP                         ; 0050c632
    POP EBP                             ; 0050c634
    POP EDI                             ; 0050c635
    POP ESI                             ; 0050c636
    POP EBX                             ; 0050c637
    RET                                 ; 0050c638
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c639
        ;   Label: LAB_0050c639
    JLE 0x0050c6c0                      ; 0050c63d
        ;   XREF to: 0050c6c0 (CONDITIONAL_JUMP)  ; LAB_0050c6c0
    MOV dword ptr [ESP + 0x104],EDX     ; 0050c643
    MOV dword ptr [ESP + 0x114],ECX     ; 0050c64a
    MOV EAX,dword ptr [EBX + 0x5c5014]  ; 0050c651 | DAT_005c5014 | DAT_005c5044
        ;   Label: LAB_0050c651
    MOV dword ptr [ESP + 0x60],EAX      ; 0050c657
    MOV EAX,dword ptr [EBX + 0x5c5018]  ; 0050c65b | DAT_005c5018 | DAT_005c5048
    MOV dword ptr [ESP + 0x64],EAX      ; 0050c661
    MOV EAX,dword ptr [EBX + 0x5c501c]  ; 0050c665 | DAT_005c501c | DAT_005c504c
    MOV dword ptr [ESP + 0x68],EAX      ; 0050c66b
    LEA EAX,[ESP + 0x60]                ; 0050c66f
    PUSH EAX                            ; 0050c673
    PUSH 0x1fb8508                      ; 0050c674
    LEA ESI,[ESP + 0x80]                ; 0050c679
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440 ; 0050c680
        ;   XREF to: 00441440 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    ADD ESP,0x8                         ; 0050c685
    MOV EDI,dword ptr [ESP + 0x114]     ; 0050c688
    LEA ESI,[ESP + 0x78]                ; 0050c68f
    LEA EDI,[EDI + 0x200b130]           ; 0050c693
    ADD EBX,0x30                        ; 0050c699
    MOV ECX,dword ptr [ESP + 0x114]     ; 0050c69c
    MOVSD ES:EDI,ESI                    ; 0050c6a3
    MOVSD ES:EDI,ESI                    ; 0050c6a4
    MOVSD ES:EDI,ESI                    ; 0050c6a5
    ADD ECX,0xc                         ; 0050c6a6
    MOV ESI,dword ptr [ESP + 0x104]     ; 0050c6a9
    MOV dword ptr [ESP + 0x114],ECX     ; 0050c6b0
    CMP EBX,ESI                         ; 0050c6b7
    JL 0x0050c651                       ; 0050c6b9
        ;   XREF to: 0050c651 (CONDITIONAL_JUMP)  ; LAB_0050c651
    LEA EAX,[EAX]                       ; 0050c6bb
    MOV ECX,ECX                         ; 0050c6be
    MOV EDI,dword ptr [EBP + 0x18]      ; 0050c6c0
        ;   Label: LAB_0050c6c0
    XOR EBX,EBX                         ; 0050c6c3
    TEST EDI,EDI                        ; 0050c6c5
    JLE 0x0050c5d0                      ; 0050c6c7
        ;   XREF to: 0050c5d0 (CONDITIONAL_JUMP)  ; LAB_0050c5d0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0050c6cd
    MOV dword ptr [ESP + 0x128],EAX     ; 0050c6d0
    IMUL EDI,EBX,0xc                    ; 0050c6d7
        ;   Label: LAB_0050c6d7
    MOV EDX,dword ptr [ESP + 0x128]     ; 0050c6da
    PUSH EDX                            ; 0050c6e1
    PUSH 0x1fb8508                      ; 0050c6e2
    LEA ESI,[ESP + 0x8]                 ; 0050c6e7
    CALL core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10 ; 0050c6eb
        ;   XREF to: 00441a10 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector)
    ADD ESP,0x8                         ; 0050c6f0
    MOV ESI,ESP                         ; 0050c6f3
    MOV ECX,dword ptr [ESP + 0x128]     ; 0050c6f5
    LEA EDI,[EDI + 0x2045ab0]           ; 0050c6fc
    ADD ECX,0xc                         ; 0050c702
    MOVSD ES:EDI,ESI                    ; 0050c705
    MOVSD ES:EDI,ESI                    ; 0050c706
    MOVSD ES:EDI,ESI                    ; 0050c707
    INC EBX                             ; 0050c708
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c709
    MOV dword ptr [ESP + 0x128],ECX     ; 0050c70c
    CMP EBX,ESI                         ; 0050c713
    JL 0x0050c6d7                       ; 0050c715
        ;   XREF to: 0050c6d7 (CONDITIONAL_JUMP)  ; LAB_0050c6d7
    JMP 0x0050c5d0                      ; 0050c717
        ;   XREF to: 0050c5d0 (UNCONDITIONAL_JUMP)  ; LAB_0050c5d0
    CMP dword ptr [EBP + 0x1c],0x0      ; 0050c71c
        ;   Label: LAB_0050c71c
    JNZ 0x0050c7c4                      ; 0050c720
        ;   XREF to: 0050c7c4 (CONDITIONAL_JUMP)  ; LAB_0050c7c4
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050c726
    MOV dword ptr [ESP + 0x13c],ECX     ; 0050c729
    TEST ESI,ESI                        ; 0050c730
    JLE 0x0050c390                      ; 0050c732
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV EAX,dword ptr [EBX + 0x5c5014]  ; 0050c738 | DAT_005c5014 | DAT_005c5044
        ;   Label: LAB_0050c738
    MOV dword ptr [ESP + 0x54],EAX      ; 0050c73e
    MOV EAX,dword ptr [EBX + 0x5c5018]  ; 0050c742 | DAT_005c5018 | DAT_005c5048
    MOV dword ptr [ESP + 0x58],EAX      ; 0050c748
    MOV EAX,dword ptr [EBX + 0x5c501c]  ; 0050c74c | DAT_005c501c | DAT_005c504c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050c752
    LEA EAX,[ESP + 0x54]                ; 0050c756
    PUSH EAX                            ; 0050c75a
    PUSH 0x1fb8508                      ; 0050c75b
    LEA ESI,[ESP + 0x20]                ; 0050c760
    LEA EDI,[ESP + 0x98]                ; 0050c764
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440 ; 0050c76b
        ;   XREF to: 00441440 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x20]                ; 0050c770
    ADD ESP,0x8                         ; 0050c774
    MOVSD ES:EDI,ESI                    ; 0050c777
    MOVSD ES:EDI,ESI                    ; 0050c778
    MOVSD ES:EDI,ESI                    ; 0050c779
    PUSH 0x0                            ; 0050c77a
    MOV ESI,dword ptr [ESP + 0x140]     ; 0050c77c
    PUSH ESI                            ; 0050c783
    PUSH 0x0                            ; 0050c784
    LEA EAX,[ESP + 0x9c]                ; 0050c786
    PUSH EAX                            ; 0050c78d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050c78e
    PUSH EDI                            ; 0050c791
    ADD EBX,0x30                        ; 0050c792
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050c795
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EAX,[0x01c038f4]                ; 0050c79a | DAT_01c038f4
    ADD ESP,0x14                        ; 0050c79f
    MOV dword ptr [EBX + 0x5c5010],EAX  ; 0050c7a2 | DAT_005c5040 | g_BackBuffer
    LEA EAX,[ESI + 0x1]                 ; 0050c7a8
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c7ab
    MOV dword ptr [ESP + 0x13c],EAX     ; 0050c7ae
    CMP EAX,EDX                         ; 0050c7b5
    JL 0x0050c738                       ; 0050c7b7
        ;   XREF to: 0050c738 (CONDITIONAL_JUMP)  ; LAB_0050c738
    MOV ESP,EBP                         ; 0050c7bd
    POP EBP                             ; 0050c7bf
    POP EDI                             ; 0050c7c0
    POP ESI                             ; 0050c7c1
    POP EBX                             ; 0050c7c2
    RET                                 ; 0050c7c3
    CMP dword ptr [EBP + 0x18],0x0      ; 0050c7c4
        ;   Label: LAB_0050c7c4
    JLE 0x0050c850                      ; 0050c7c8
        ;   XREF to: 0050c850 (CONDITIONAL_JUMP)  ; LAB_0050c850
    MOV dword ptr [ESP + 0x108],EDX     ; 0050c7ce
    MOV dword ptr [ESP + 0x118],EBX     ; 0050c7d5
    MOV EAX,dword ptr [EBX + 0x5c5014]  ; 0050c7dc | DAT_005c5014 | DAT_005c5044
        ;   Label: LAB_0050c7dc
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050c7e2
    MOV EAX,dword ptr [EBX + 0x5c5018]  ; 0050c7e6 | DAT_005c5018 | DAT_005c5048
    MOV dword ptr [ESP + 0x40],EAX      ; 0050c7ec
    MOV EAX,dword ptr [EBX + 0x5c501c]  ; 0050c7f0 | DAT_005c501c | DAT_005c504c
    MOV dword ptr [ESP + 0x44],EAX      ; 0050c7f6
    LEA EAX,[ESP + 0x3c]                ; 0050c7fa
    PUSH EAX                            ; 0050c7fe
    PUSH 0x1fb8508                      ; 0050c7ff
    LEA ESI,[ESP + 0x38]                ; 0050c804
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440 ; 0050c808
        ;   XREF to: 00441440 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    ADD ESP,0x8                         ; 0050c80d
    MOV EDI,dword ptr [ESP + 0x118]     ; 0050c810
    LEA ESI,[ESP + 0x30]                ; 0050c817
    LEA EDI,[EDI + 0x200b130]           ; 0050c81b
    MOVSD ES:EDI,ESI                    ; 0050c821
    MOVSD ES:EDI,ESI                    ; 0050c822
    MOVSD ES:EDI,ESI                    ; 0050c823
    MOV ESI,dword ptr [ESP + 0x118]     ; 0050c824
    ADD EBX,0x30                        ; 0050c82b
    ADD ESI,0xc                         ; 0050c82e
    MOV EDI,dword ptr [ESP + 0x108]     ; 0050c831
    MOV dword ptr [ESP + 0x118],ESI     ; 0050c838
    CMP EBX,EDI                         ; 0050c83f
    JL 0x0050c7dc                       ; 0050c841
        ;   XREF to: 0050c7dc (CONDITIONAL_JUMP)  ; LAB_0050c7dc
    LEA EAX,[EAX]                       ; 0050c843
    LEA EDX,[EDX]                       ; 0050c849
    NOP                                 ; 0050c84f
    CMP dword ptr [EBP + 0x28],0x0      ; 0050c850
        ;   Label: LAB_0050c850
    JLE 0x0050cb9d                      ; 0050c854
        ;   XREF to: 0050cb9d (CONDITIONAL_JUMP)  ; LAB_0050cb9d
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0050c85a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050c85d
    XOR ESI,ESI                         ; 0050c860
    TEST EBX,EBX                        ; 0050c862
    JLE 0x0050c9c9                      ; 0050c864
        ;   XREF to: 0050c9c9 (CONDITIONAL_JUMP)  ; LAB_0050c9c9
    MOV EDX,dword ptr [EAX + 0x24]      ; 0050c86a
        ;   Label: LAB_0050c86a
    IMUL EDX,EDX,0xc                    ; 0050c86d
    MOV ECX,dword ptr [EAX + 0x18]      ; 0050c870
    IMUL ECX,ECX,0xc                    ; 0050c873
    MOV EBX,0x200b130                   ; 0050c876
    ADD EDX,0x200b130                   ; 0050c87b
    ADD EBX,ECX                         ; 0050c881
    MOV ECX,dword ptr [EDX]             ; 0050c883
    SUB ECX,dword ptr [EBX]             ; 0050c885
    MOV dword ptr [ESP + 0x150],ECX     ; 0050c887
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050c88e
    SUB ECX,dword ptr [EBX + 0x4]       ; 0050c891
    MOV dword ptr [ESP + 0x154],ECX     ; 0050c894
    MOV ECX,dword ptr [EDX + 0x8]       ; 0050c89b
    MOV EDI,dword ptr [EAX + 0x30]      ; 0050c89e
    SUB ECX,dword ptr [EBX + 0x8]       ; 0050c8a1
    IMUL EBX,EDI,0xc                    ; 0050c8a4
    ADD EBX,0x200b130                   ; 0050c8a7
    MOV dword ptr [ESP + 0x158],ECX     ; 0050c8ad
    MOV ECX,dword ptr [EDX]             ; 0050c8b4
    MOV EDI,dword ptr [EBX]             ; 0050c8b6
    SUB EDI,ECX                         ; 0050c8b8
    FILD dword ptr [ESP + 0x158]        ; 0050c8ba
    MOV dword ptr [ESP + 0x158],EDI     ; 0050c8c1
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050c8c8
    FILD dword ptr [ESP + 0x158]        ; 0050c8cb
    MOV EDI,dword ptr [EBX + 0x4]       ; 0050c8d2
    FST float ptr [ESP + 0xac]          ; 0050c8d5
    FMUL ST1                            ; 0050c8dc
    SUB EDI,ECX                         ; 0050c8de
    MOV ECX,dword ptr [EBX + 0x8]       ; 0050c8e0
    MOV EBX,dword ptr [EDX + 0x8]       ; 0050c8e3
    MOV EDX,ECX                         ; 0050c8e6
    SUB EDX,EBX                         ; 0050c8e8
    FILD dword ptr [ESP + 0x154]        ; 0050c8ea
    MOV dword ptr [ESP + 0x158],EDX     ; 0050c8f1
    FLD ST0                             ; 0050c8f8
    FILD dword ptr [ESP + 0x158]        ; 0050c8fa
    FSTP float ptr [ESP + 0xb4]         ; 0050c901
    FMUL float ptr [ESP + 0xb4]         ; 0050c908
    MOV dword ptr [ESP + 0x158],EDI     ; 0050c90f
    FILD dword ptr [ESP + 0x150]        ; 0050c916
    FLD ST0                             ; 0050c91d
    FILD dword ptr [ESP + 0x158]        ; 0050c91f
    FSTP float ptr [ESP + 0xb0]         ; 0050c926
    FMUL float ptr [ESP + 0xb0]         ; 0050c92d
    FLD float ptr [ESP + 0xb0]          ; 0050c934
    FMULP ST6                           ; 0050c93b
    FXCH                                ; 0050c93d
    FMUL float ptr [ESP + 0xb4]         ; 0050c93f
    FXCH ST5                            ; 0050c946
    FSUBP ST2,ST0                       ; 0050c948
    FLD ST1                             ; 0050c94a
    FMUL ST2                            ; 0050c94c
    FXCH ST5                            ; 0050c94e
    FSUBP ST4,ST0                       ; 0050c950
    FLD ST3                             ; 0050c952
    FMUL ST4                            ; 0050c954
    FLD float ptr [ESP + 0xac]          ; 0050c956
    FMULP ST4                           ; 0050c95d
    FADDP ST5,ST0                       ; 0050c95f
    FSUBRP ST2,ST0                      ; 0050c961
    FLD ST1                             ; 0050c963
    FMUL ST2                            ; 0050c965
    FADDP ST4,ST0                       ; 0050c967
    FXCH ST3                            ; 0050c969
    FSTP float ptr [ESP + 0x144]        ; 0050c96b
    MOV EDX,dword ptr [ESP + 0x144]     ; 0050c972
    MOV ECX,dword ptr [0x01c70710]      ; 0050c979 | g_FastInvSqrtMagic
    SAR EDX,0x1                         ; 0050c97f
    SUB ECX,EDX                         ; 0050c981
    MOV dword ptr [ESP + 0x148],ECX     ; 0050c983
    FLD float ptr [ESP + 0x148]         ; 0050c98a
    FMUL double ptr [0x00590792]        ; 0050c991 | DOUBLE_00590792
    FXCH ST3                            ; 0050c997
    FMUL ST3                            ; 0050c999
    FXCH ST2                            ; 0050c99b
    FMUL ST3                            ; 0050c99d
    FXCH                                ; 0050c99f
    FMULP ST3                           ; 0050c9a1
    MOV EDI,dword ptr [EBP + 0x28]      ; 0050c9a3
    FXCH                                ; 0050c9a6
    FSTP float ptr [EAX + 0x8]          ; 0050c9a8
    FSTP float ptr [EAX + 0xc]          ; 0050c9ab
    FSTP float ptr [EAX + 0x10]         ; 0050c9ae
    CMP EDI,0x4                         ; 0050c9b1
    JNZ 0x0050cb8d                      ; 0050c9b4
        ;   XREF to: 0050cb8d (CONDITIONAL_JUMP)  ; LAB_0050cb8d
    ADD EAX,0x48                        ; 0050c9ba
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050c9bd
        ;   Label: LAB_0050c9bd
    INC ESI                             ; 0050c9c0
    CMP ESI,EDX                         ; 0050c9c1
    JL 0x0050c86a                       ; 0050c9c3
        ;   XREF to: 0050c86a (CONDITIONAL_JUMP)  ; LAB_0050c86a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050c9c9
        ;   Label: LAB_0050c9c9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050c9cc
    SUB EAX,EDX                         ; 0050c9d3
    SHL EAX,0x2                         ; 0050c9d5
    PUSH EAX                            ; 0050c9d8
    PUSH 0x0                            ; 0050c9d9
    PUSH 0x2045ab0                      ; 0050c9db | DAT_02045ab0
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0050c9e0
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050c9e5
    XOR EBX,EBX                         ; 0050c9e8
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0050c9ea
    MOV EDX,dword ptr [EBP + 0x20]      ; 0050c9ed
    TEST ECX,ECX                        ; 0050c9f0
    JLE 0x0050caa0                      ; 0050c9f2
        ;   XREF to: 0050caa0 (CONDITIONAL_JUMP)  ; LAB_0050caa0
    IMUL EAX,dword ptr [EDX + 0x18],0xc ; 0050c9f8
        ;   Label: LAB_0050c9f8
    LEA ESI,[EDX + 0x8]                 ; 0050c9fc
    ADD EAX,0x2045ab0                   ; 0050c9ff
    FLD float ptr [ESI]                 ; 0050ca04
    FADD float ptr [EAX]                ; 0050ca06 | DAT_02045ab0
    FSTP float ptr [EAX]                ; 0050ca08 | DAT_02045ab0
    FLD float ptr [ESI + 0x4]           ; 0050ca0a
    FADD float ptr [EAX + 0x4]          ; 0050ca0d | DAT_02045ab4
    FSTP float ptr [EAX + 0x4]          ; 0050ca10 | DAT_02045ab4
    FLD float ptr [ESI + 0x8]           ; 0050ca13
    FADD float ptr [EAX + 0x8]          ; 0050ca16 | DAT_02045ab8
    FSTP float ptr [EAX + 0x8]          ; 0050ca19 | DAT_02045ab8
    IMUL EAX,dword ptr [EDX + 0x24],0xc ; 0050ca1c
    ADD EAX,0x2045ab0                   ; 0050ca20
    FLD float ptr [ESI]                 ; 0050ca25
    FADD float ptr [EAX]                ; 0050ca27 | DAT_02045ab0
    FSTP float ptr [EAX]                ; 0050ca29 | DAT_02045ab0
    FLD float ptr [ESI + 0x4]           ; 0050ca2b
    FADD float ptr [EAX + 0x4]          ; 0050ca2e
    FSTP float ptr [EAX + 0x4]          ; 0050ca31
    FLD float ptr [ESI + 0x8]           ; 0050ca34
    FADD float ptr [EAX + 0x8]          ; 0050ca37
    FSTP float ptr [EAX + 0x8]          ; 0050ca3a
    IMUL EAX,dword ptr [EDX + 0x30],0xc ; 0050ca3d
    ADD EAX,0x2045ab0                   ; 0050ca41
    FLD float ptr [ESI]                 ; 0050ca46
    FADD float ptr [EAX]                ; 0050ca48
    FSTP float ptr [EAX]                ; 0050ca4a
    FLD float ptr [ESI + 0x4]           ; 0050ca4c
    FADD float ptr [EAX + 0x4]          ; 0050ca4f
    FSTP float ptr [EAX + 0x4]          ; 0050ca52
    FLD float ptr [ESI + 0x8]           ; 0050ca55
    FADD float ptr [EAX + 0x8]          ; 0050ca58
    FSTP float ptr [EAX + 0x8]          ; 0050ca5b
    CMP dword ptr [EDX + 0x4],0x4       ; 0050ca5e
    JNZ 0x0050ca85                      ; 0050ca62
        ;   XREF to: 0050ca85 (CONDITIONAL_JUMP)  ; LAB_0050ca85
    IMUL EAX,dword ptr [EDX + 0x3c],0xc ; 0050ca64
    ADD EAX,0x2045ab0                   ; 0050ca68
    FLD float ptr [ESI]                 ; 0050ca6d
    FADD float ptr [EAX]                ; 0050ca6f
    FSTP float ptr [EAX]                ; 0050ca71
    FLD float ptr [ESI + 0x4]           ; 0050ca73
    FADD float ptr [EAX + 0x4]          ; 0050ca76
    FSTP float ptr [EAX + 0x4]          ; 0050ca79
    FLD float ptr [ESI + 0x8]           ; 0050ca7c
    FADD float ptr [EAX + 0x8]          ; 0050ca7f
    FSTP float ptr [EAX + 0x8]          ; 0050ca82
    CMP dword ptr [EBP + 0x28],0x4      ; 0050ca85
        ;   Label: LAB_0050ca85
    JNZ 0x0050cb95                      ; 0050ca89
        ;   XREF to: 0050cb95 (CONDITIONAL_JUMP)  ; LAB_0050cb95
    ADD EDX,0x48                        ; 0050ca8f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050ca92
        ;   Label: LAB_0050ca92
    INC EBX                             ; 0050ca95
    CMP EBX,EAX                         ; 0050ca96
    JL 0x0050c9f8                       ; 0050ca98
        ;   XREF to: 0050c9f8 (CONDITIONAL_JUMP)  ; LAB_0050c9f8
    MOV EAX,EAX                         ; 0050ca9e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050caa0
        ;   Label: LAB_0050caa0
    MOV EDI,dword ptr [EAX + 0x15aa9c]  ; 0050caa3
    TEST EDI,EDI                        ; 0050caa9
    JZ 0x0050cf4f                       ; 0050caab
        ;   XREF to: 0050cf4f (CONDITIONAL_JUMP)  ; LAB_0050cf4f
    XOR EDX,EDX                         ; 0050cab1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050cab3
    MOV dword ptr [ESP + 0x140],EDX     ; 0050cab6
    TEST ECX,ECX                        ; 0050cabd
    JLE 0x0050c390                      ; 0050cabf
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV EDI,0x2045ab0                   ; 0050cac5
    MOV EAX,0x200b130                   ; 0050caca
    MOV dword ptr [ESP + 0x110],EDX     ; 0050cacf
    MOV dword ptr [ESP + 0x120],EAX     ; 0050cad6
    FLD float ptr [EDI]                 ; 0050cadd | DAT_02045ab0 | DAT_02045abc
        ;   Label: LAB_0050cadd
    FABS                                ; 0050cadf
    MOV ECX,dword ptr [ESP + 0x140]     ; 0050cae1
    IMUL EBX,ECX,0xc                    ; 0050cae8
    MOV ESI,EDI                         ; 0050caeb
    FLD1                                ; 0050caed
    FCOMPP                              ; 0050caef
    FNSTSW AX                           ; 0050caf1
    SAHF                                ; 0050caf3
    JBE 0x0050cec3                      ; 0050caf4
        ;   XREF to: 0050cec3 (CONDITIONAL_JUMP)  ; LAB_0050cec3
    FLD float ptr [EDI + 0x4]           ; 0050cafa | DAT_02045ab4 | DAT_02045ac0
    FABS                                ; 0050cafd
    FLD1                                ; 0050caff
    FCOMPP                              ; 0050cb01
    FNSTSW AX                           ; 0050cb03
    SAHF                                ; 0050cb05
    JBE 0x0050cec3                      ; 0050cb06
        ;   XREF to: 0050cec3 (CONDITIONAL_JUMP)  ; LAB_0050cec3
    FLD float ptr [EDI + 0x8]           ; 0050cb0c | DAT_02045ab8
    FABS                                ; 0050cb0f
    FLD1                                ; 0050cb11
    FCOMPP                              ; 0050cb13
    FNSTSW AX                           ; 0050cb15
    SAHF                                ; 0050cb17
    JBE 0x0050cec3                      ; 0050cb18
        ;   XREF to: 0050cec3 (CONDITIONAL_JUMP)  ; LAB_0050cec3
    PUSH 0x0                            ; 0050cb1e
    PUSH ECX                            ; 0050cb20
    MOV EAX,0x200b130                   ; 0050cb21
    PUSH 0x0                            ; 0050cb26
    ADD EAX,EBX                         ; 0050cb28
    PUSH EAX                            ; 0050cb2a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050cb2b
    PUSH ECX                            ; 0050cb2e
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050cb2f
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
        ;   Label: LAB_0050cb2f
    ADD ESP,0x14                        ; 0050cb34
    MOV EDX,dword ptr [ESP + 0x110]     ; 0050cb37
    MOV ECX,dword ptr [ESP + 0x110]     ; 0050cb3e
    MOV EBX,dword ptr [ESP + 0x140]     ; 0050cb45
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050cb4c
    MOV EAX,[0x01c038f4]                ; 0050cb4f | DAT_01c038f4
    ADD EDI,0xc                         ; 0050cb54
    ADD ECX,0x30                        ; 0050cb57
    INC EBX                             ; 0050cb5a
    MOV dword ptr [EDX + 0x5c5040],EAX  ; 0050cb5b | DAT_005c5040 | DAT_005c5070
    MOV EDX,dword ptr [ESP + 0x120]     ; 0050cb61
    MOV dword ptr [ESP + 0x110],ECX     ; 0050cb68
    ADD EDX,0xc                         ; 0050cb6f
    MOV dword ptr [ESP + 0x140],EBX     ; 0050cb72
    MOV dword ptr [ESP + 0x120],EDX     ; 0050cb79
    CMP EBX,ESI                         ; 0050cb80
    JGE 0x0050c390                      ; 0050cb82
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    JMP 0x0050cadd                      ; 0050cb88
        ;   XREF to: 0050cadd (UNCONDITIONAL_JUMP)  ; LAB_0050cadd
    ADD EAX,0x3c                        ; 0050cb8d
        ;   Label: LAB_0050cb8d
    JMP 0x0050c9bd                      ; 0050cb90
        ;   XREF to: 0050c9bd (UNCONDITIONAL_JUMP)  ; LAB_0050c9bd
    ADD EDX,0x3c                        ; 0050cb95
        ;   Label: LAB_0050cb95
    JMP 0x0050ca92                      ; 0050cb98
        ;   XREF to: 0050ca92 (UNCONDITIONAL_JUMP)  ; LAB_0050ca92
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050cb9d
        ;   Label: LAB_0050cb9d
    MOV EBX,dword ptr [EBP + 0x20]      ; 0050cba0
    CMP EDX,0xfa0                       ; 0050cba3
    JLE 0x0050cbce                      ; 0050cba9
        ;   XREF to: 0050cbce (CONDITIONAL_JUMP)  ; LAB_0050cbce
    MOV ECX,0x59071e                    ; 0050cbab | = "..\\core\\set.cpp"
    MOV ESI,0xde8                       ; 0050cbb0
    PUSH 0x59072e                       ; 0050cbb5 | = "Too many normals on this packed tri list"
    MOV dword ptr [0x01cc4800],ECX      ; 0050cbba | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0050cbc0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050cbc6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0050cbcb
    CMP dword ptr [EBP + 0x1c],0xfa0    ; 0050cbce
        ;   Label: LAB_0050cbce
    JLE 0x0050cbf9                      ; 0050cbd5
        ;   XREF to: 0050cbf9 (CONDITIONAL_JUMP)  ; LAB_0050cbf9
    MOV EAX,0x590757                    ; 0050cbd7 | = "..\\core\\set.cpp"
    MOV EDX,0xdea                       ; 0050cbdc
    PUSH 0x590767                       ; 0050cbe1 | = "Need more normals for packed models"
    MOV [0x01cc4800],EAX                ; 0050cbe6 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0050cbeb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050cbf1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0050cbf6
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0050cbf9
        ;   Label: LAB_0050cbf9
    XOR EDI,EDI                         ; 0050cbfc
    TEST ECX,ECX                        ; 0050cbfe
    JLE 0x0050ce0b                      ; 0050cc00
        ;   XREF to: 0050ce0b (CONDITIONAL_JUMP)  ; LAB_0050ce0b
    FLD float ptr [ESP + 0x12c]         ; 0050cc06
    FLD float ptr [ESP + 0x130]         ; 0050cc0d
    MOV EDX,0x1fff5b0                   ; 0050cc14
    XOR ESI,ESI                         ; 0050cc19
        ;   Label: LAB_0050cc19
    MOV SI,word ptr [EBX + 0x2]         ; 0050cc1b
    IMUL ESI,ESI,0xc                    ; 0050cc1f
    XOR ECX,ECX                         ; 0050cc22
    MOV CX,word ptr [EBX]               ; 0050cc24
    IMUL ECX,ECX,0xc                    ; 0050cc27
    XOR EAX,EAX                         ; 0050cc2a
    MOV AX,word ptr [EBX + 0x4]         ; 0050cc2c
    MOV dword ptr [ESP + 0xdc],EAX      ; 0050cc30
    MOV EAX,0x200b130                   ; 0050cc37
    ADD EAX,ESI                         ; 0050cc3c
    MOV ESI,dword ptr [EAX]             ; 0050cc3e
    ADD ECX,0x200b130                   ; 0050cc40
    MOV dword ptr [ESP + 0x14c],ESI     ; 0050cc46
    MOV ESI,dword ptr [ECX]             ; 0050cc4d
    SUB dword ptr [ESP + 0x14c],ESI     ; 0050cc4f
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0050cc56
    MOV dword ptr [ESP + 0x14c],ESI     ; 0050cc5d
    MOV ESI,dword ptr [EAX + 0x4]       ; 0050cc64
    MOV dword ptr [ESP + 0x150],ESI     ; 0050cc67
    MOV ESI,dword ptr [ECX + 0x4]       ; 0050cc6e
    SUB dword ptr [ESP + 0x150],ESI     ; 0050cc71
    MOV ESI,dword ptr [ESP + 0x150]     ; 0050cc78
    MOV dword ptr [ESP + 0x158],ESI     ; 0050cc7f
    MOV ESI,dword ptr [EAX + 0x8]       ; 0050cc86
    MOV ECX,dword ptr [ECX + 0x8]       ; 0050cc89
    SUB ESI,ECX                         ; 0050cc8c
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0050cc8e
    MOV dword ptr [ESP + 0x154],ESI     ; 0050cc95
    IMUL ESI,ECX,0xc                    ; 0050cc9c
    ADD ESI,0x200b130                   ; 0050cc9f
    MOV ECX,dword ptr [ESI]             ; 0050cca5
    MOV dword ptr [ESP + 0x150],ECX     ; 0050cca7
    MOV ECX,dword ptr [EAX]             ; 0050ccae
    SUB dword ptr [ESP + 0x150],ECX     ; 0050ccb0
    MOV ECX,dword ptr [ESP + 0x150]     ; 0050ccb7
    MOV dword ptr [ESP + 0x150],ECX     ; 0050ccbe
    FILD dword ptr [ESP + 0x154]        ; 0050ccc5
    FILD dword ptr [ESP + 0x150]        ; 0050cccc
    MOV ECX,dword ptr [ESI + 0x4]       ; 0050ccd3
    FST float ptr [ESP + 0xcc]          ; 0050ccd6
    FXCH                                ; 0050ccdd
    FSTP float ptr [ESP + 0xc8]         ; 0050ccdf
    FMUL float ptr [ESP + 0xc8]         ; 0050cce6
    MOV dword ptr [ESP + 0x150],ECX     ; 0050cced
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050ccf4
    SUB dword ptr [ESP + 0x150],ECX     ; 0050ccf7
    MOV ECX,dword ptr [ESP + 0x150]     ; 0050ccfe
    MOV dword ptr [ESP + 0x154],ECX     ; 0050cd05
    MOV ECX,dword ptr [ESI + 0x8]       ; 0050cd0c
    MOV ESI,dword ptr [EAX + 0x8]       ; 0050cd0f
    MOV EAX,ECX                         ; 0050cd12
    FILD dword ptr [ESP + 0x158]        ; 0050cd14
    SUB EAX,ESI                         ; 0050cd1b
    FSTP float ptr [ESP + 0xe8]         ; 0050cd1d
    MOV dword ptr [ESP + 0x150],EAX     ; 0050cd24
    FLD float ptr [ESP + 0xe8]          ; 0050cd2b
    FILD dword ptr [ESP + 0x150]        ; 0050cd32
    FSTP float ptr [ESP + 0xd4]         ; 0050cd39
    FMUL float ptr [ESP + 0xd4]         ; 0050cd40
    FILD dword ptr [ESP + 0x14c]        ; 0050cd47
    FILD dword ptr [ESP + 0x154]        ; 0050cd4e
    FLD ST1                             ; 0050cd55
    FMUL ST1                            ; 0050cd57
    FXCH                                ; 0050cd59
    FMUL float ptr [ESP + 0xc8]         ; 0050cd5b
    FXCH ST2                            ; 0050cd62
    FMUL float ptr [ESP + 0xd4]         ; 0050cd64
    FXCH ST2                            ; 0050cd6b
    FSUBP ST3,ST0                       ; 0050cd6d
    FXCH ST2                            ; 0050cd6f
    FST ST4                             ; 0050cd71
    FMUL ST4                            ; 0050cd73
    FXCH                                ; 0050cd75
    FSUBP ST3,ST0                       ; 0050cd77
    FXCH ST2                            ; 0050cd79
    FST ST4                             ; 0050cd7b
    FMUL ST4                            ; 0050cd7d
    FLD float ptr [ESP + 0xcc]          ; 0050cd7f
    FMUL float ptr [ESP + 0xe8]         ; 0050cd86
    FXCH                                ; 0050cd8d
    FADDP ST3,ST0                       ; 0050cd8f
    FSUBP                               ; 0050cd91
    FST float ptr [ESP + 0x134]         ; 0050cd93
    FMUL float ptr [ESP + 0x134]        ; 0050cd9a
    FADDP                               ; 0050cda1
    FSTP float ptr [ESP + 0xe0]         ; 0050cda3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0050cdaa
    MOV ECX,dword ptr [0x01c70710]      ; 0050cdb1 | g_FastInvSqrtMagic
    SAR EAX,0x1                         ; 0050cdb7
    SUB ECX,EAX                         ; 0050cdb9
    MOV dword ptr [ESP + 0xe4],ECX      ; 0050cdbb
    FLD float ptr [ESP + 0xe4]          ; 0050cdc2
    FMUL double ptr [0x00590792]        ; 0050cdc9 | DOUBLE_00590792
    FLD ST1                             ; 0050cdcf
    FMUL ST1                            ; 0050cdd1
    FLD ST3                             ; 0050cdd3
    FMUL ST2                            ; 0050cdd5
    FLD float ptr [ESP + 0x134]         ; 0050cdd7
    FMULP ST3                           ; 0050cdde
    ADD EBX,0x12                        ; 0050cde0
    ADD EDX,0xc                         ; 0050cde3
    INC EDI                             ; 0050cde6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050cde7
    FXCH                                ; 0050cdea
    FSTP float ptr [EDX + -0xc]         ; 0050cdec | g_CVector3f_ARRAY_01fff5b0
    FSTP float ptr [EDX + -0x8]         ; 0050cdef | g_CVector3f_ARRAY_01fff5b0[0].y
    FSTP float ptr [EDX + -0x4]         ; 0050cdf2 | g_CVector3f_ARRAY_01fff5b0[0].z
    CMP EDI,EAX                         ; 0050cdf5
    JL 0x0050cc19                       ; 0050cdf7
        ;   XREF to: 0050cc19 (CONDITIONAL_JUMP)  ; LAB_0050cc19
    FSTP float ptr [ESP + 0x130]        ; 0050cdfd
    FSTP float ptr [ESP + 0x12c]        ; 0050ce04
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050ce0b
        ;   Label: LAB_0050ce0b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050ce0e
    SUB EAX,EDX                         ; 0050ce15
    SHL EAX,0x2                         ; 0050ce17
    PUSH EAX                            ; 0050ce1a
    PUSH 0x0                            ; 0050ce1b
    PUSH 0x2045ab0                      ; 0050ce1d | DAT_02045ab0
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0050ce22
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050ce27
    XOR EBX,EBX                         ; 0050ce2a
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0050ce2c
    MOV EDX,dword ptr [EBP + 0x20]      ; 0050ce2f
    TEST ECX,ECX                        ; 0050ce32
    JLE 0x0050caa0                      ; 0050ce34
        ;   XREF to: 0050caa0 (CONDITIONAL_JUMP)  ; LAB_0050caa0
    MOV ESI,0x1fff5b0                   ; 0050ce3a
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0050ce3f
    XOR EAX,EAX                         ; 0050ce42
        ;   Label: LAB_0050ce42
    MOV AX,word ptr [EDX]               ; 0050ce44
    IMUL EAX,EAX,0xc                    ; 0050ce47
    ADD EAX,0x2045ab0                   ; 0050ce4a
    FLD float ptr [ESI]                 ; 0050ce4f | g_CVector3f_ARRAY_01fff5b0 | g_CVector3f_ARRAY_01fff5b0[1].x
    FADD float ptr [EAX]                ; 0050ce51 | DAT_02045ab0
    FSTP float ptr [EAX]                ; 0050ce53 | DAT_02045ab0
    FLD float ptr [ESI + 0x4]           ; 0050ce55 | g_CVector3f_ARRAY_01fff5b0[0].y | g_CVector3f_ARRAY_01fff5b0[1].y
    FADD float ptr [EAX + 0x4]          ; 0050ce58 | DAT_02045ab4
    FSTP float ptr [EAX + 0x4]          ; 0050ce5b | DAT_02045ab4
    FLD float ptr [ESI + 0x8]           ; 0050ce5e | g_CVector3f_ARRAY_01fff5b0[0].z | g_CVector3f_ARRAY_01fff5b0[1].z
    FADD float ptr [EAX + 0x8]          ; 0050ce61 | DAT_02045ab8
    FSTP float ptr [EAX + 0x8]          ; 0050ce64 | DAT_02045ab8
    XOR EAX,EAX                         ; 0050ce67
    MOV AX,word ptr [EDX + 0x2]         ; 0050ce69
    IMUL EAX,EAX,0xc                    ; 0050ce6d
    ADD EAX,0x2045ab0                   ; 0050ce70
    FLD float ptr [ESI]                 ; 0050ce75 | g_CVector3f_ARRAY_01fff5b0
    FADD float ptr [EAX]                ; 0050ce77 | DAT_02045ab0
    FSTP float ptr [EAX]                ; 0050ce79 | DAT_02045ab0
    FLD float ptr [ESI + 0x4]           ; 0050ce7b | g_CVector3f_ARRAY_01fff5b0[0].y
    FADD float ptr [EAX + 0x4]          ; 0050ce7e | DAT_02045ab4
    FSTP float ptr [EAX + 0x4]          ; 0050ce81 | DAT_02045ab4
    FLD float ptr [ESI + 0x8]           ; 0050ce84 | g_CVector3f_ARRAY_01fff5b0[0].z
    FADD float ptr [EAX + 0x8]          ; 0050ce87 | DAT_02045ab8
    FSTP float ptr [EAX + 0x8]          ; 0050ce8a | DAT_02045ab8
    XOR EAX,EAX                         ; 0050ce8d
    MOV AX,word ptr [EDX + 0x4]         ; 0050ce8f
    IMUL EAX,EAX,0xc                    ; 0050ce93
    ADD EAX,0x2045ab0                   ; 0050ce96
    FLD float ptr [ESI]                 ; 0050ce9b | g_CVector3f_ARRAY_01fff5b0
    FADD float ptr [EAX]                ; 0050ce9d | DAT_02045ab0
    ADD EDX,0x12                        ; 0050ce9f
    FSTP float ptr [EAX]                ; 0050cea2 | DAT_02045ab0
    FLD float ptr [ESI + 0x4]           ; 0050cea4 | g_CVector3f_ARRAY_01fff5b0[0].y
    FADD float ptr [EAX + 0x4]          ; 0050cea7 | DAT_02045ab4
    ADD ESI,0xc                         ; 0050ceaa
    FSTP float ptr [EAX + 0x4]          ; 0050cead | DAT_02045ab4
    FLD float ptr [ESI + -0x4]          ; 0050ceb0 | g_CVector3f_ARRAY_01fff5b0[0].z
    FADD float ptr [EAX + 0x8]          ; 0050ceb3 | DAT_02045ab8
    INC EBX                             ; 0050ceb6
    FSTP float ptr [EAX + 0x8]          ; 0050ceb7 | DAT_02045ab8
    CMP EBX,EDI                         ; 0050ceba
    JL 0x0050ce42                       ; 0050cebc
        ;   XREF to: 0050ce42 (CONDITIONAL_JUMP)  ; LAB_0050ce42
    JMP 0x0050caa0                      ; 0050cebe
        ;   XREF to: 0050caa0 (UNCONDITIONAL_JUMP)  ; LAB_0050caa0
    FLD float ptr [ESI + 0x4]           ; 0050cec3 | DAT_02045ac0 | DAT_02045ab4
        ;   Label: LAB_0050cec3
    FMUL ST0                            ; 0050cec6
    FLD float ptr [ESI]                 ; 0050cec8 | DAT_02045abc | DAT_02045ab0
    FMUL ST0                            ; 0050ceca
    FADDP                               ; 0050cecc
    FLD float ptr [ESI + 0x8]           ; 0050cece | DAT_02045ac4 | DAT_02045ab8
    FMUL ST0                            ; 0050ced1
    FADDP                               ; 0050ced3
    FSTP float ptr [ESP + 0xf0]         ; 0050ced5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0050cedc
    MOV EDX,dword ptr [0x01c70710]      ; 0050cee3 | g_FastInvSqrtMagic
    SAR EAX,0x1                         ; 0050cee9
    SUB EDX,EAX                         ; 0050ceeb
    MOV dword ptr [ESP + 0xf4],EDX      ; 0050ceed
    FLD float ptr [ESP + 0xf4]          ; 0050cef4
    FMUL double ptr [0x00590792]        ; 0050cefb | DOUBLE_00590792
    FLD float ptr [ESI]                 ; 0050cf01 | DAT_02045abc | DAT_02045ab0
    FMUL ST1                            ; 0050cf03
    FLD float ptr [ESI + 0x4]           ; 0050cf05 | DAT_02045ac0
    FMUL ST2                            ; 0050cf08
    FLD float ptr [ESI + 0x8]           ; 0050cf0a | DAT_02045ac4
    FMULP ST3                           ; 0050cf0d
    LEA EBX,[ESP + 0x24]                ; 0050cf0f
    MOV EAX,ESI                         ; 0050cf13
    FXCH                                ; 0050cf15
    FSTP float ptr [ESI]                ; 0050cf17 | DAT_02045abc
    FSTP float ptr [ESI + 0x4]          ; 0050cf19 | DAT_02045ac0
    FSTP float ptr [ESI + 0x8]          ; 0050cf1c | DAT_02045ac4
    FLD float ptr [EAX]                 ; 0050cf1f | DAT_02045abc
    FISTP dword ptr [EBX]               ; 0050cf21
    FLD float ptr [EAX + 0x4]           ; 0050cf23 | DAT_02045ac0
    FISTP dword ptr [EBX + 0x4]         ; 0050cf26
    FLD float ptr [EAX + 0x8]           ; 0050cf29 | DAT_02045ac4
    FISTP dword ptr [EBX + 0x8]         ; 0050cf2c
    PUSH 0x0                            ; 0050cf2f
    MOV EBX,dword ptr [ESP + 0x144]     ; 0050cf31
    PUSH EBX                            ; 0050cf38
    LEA EAX,[ESP + 0x2c]                ; 0050cf39
    PUSH EAX                            ; 0050cf3d
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0050cf3e
    PUSH ESI                            ; 0050cf45
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cf46
    PUSH EAX                            ; 0050cf49
    JMP 0x0050cb2f                      ; 0050cf4a
        ;   XREF to: 0050cb2f (UNCONDITIONAL_JUMP)  ; LAB_0050cb2f
    CMP dword ptr [EBP + 0x18],0x0      ; 0050cf4f
        ;   Label: LAB_0050cf4f
    JLE 0x0050c390                      ; 0050cf53
        ;   XREF to: 0050c390 (CONDITIONAL_JUMP)  ; LAB_0050c390
    MOV EAX,0x200b130                   ; 0050cf59
    MOV ESI,0x2045ab0                   ; 0050cf5e
    MOV dword ptr [ESP + 0x124],EDI     ; 0050cf63
    MOV dword ptr [ESP + 0x11c],EAX     ; 0050cf6a
    FLD float ptr [ESI + 0x4]           ; 0050cf71 | DAT_02045ab4 | DAT_02045ac0
        ;   Label: LAB_0050cf71
    FMUL ST0                            ; 0050cf74
    FLD float ptr [ESI]                 ; 0050cf76 | DAT_02045ab0 | DAT_02045abc
    FMUL ST0                            ; 0050cf78
    FADDP                               ; 0050cf7a
    FLD float ptr [ESI + 0x8]           ; 0050cf7c | DAT_02045ab8 | DAT_02045ac4
    FMUL ST0                            ; 0050cf7f
    FADDP                               ; 0050cf81
    FSTP float ptr [ESP + 0xfc]         ; 0050cf83
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0050cf8a
    MOV EDX,dword ptr [0x01c70710]      ; 0050cf91 | g_FastInvSqrtMagic
    SAR EAX,0x1                         ; 0050cf97
    SUB EDX,EAX                         ; 0050cf99
    MOV dword ptr [ESP + 0x100],EDX     ; 0050cf9b
    FLD float ptr [ESP + 0x100]         ; 0050cfa2
    FMUL double ptr [0x00590792]        ; 0050cfa9 | DOUBLE_00590792
    FLD float ptr [ESI]                 ; 0050cfaf | DAT_02045ab0 | DAT_02045abc
    FMUL ST1                            ; 0050cfb1
    FLD float ptr [ESI + 0x4]           ; 0050cfb3 | DAT_02045ab4
    FMUL ST2                            ; 0050cfb6
    FLD float ptr [ESI + 0x8]           ; 0050cfb8 | DAT_02045ab8
    FMULP ST3                           ; 0050cfbb
    LEA EBX,[ESP + 0x48]                ; 0050cfbd
    MOV EAX,ESI                         ; 0050cfc1
    FXCH                                ; 0050cfc3
    FSTP float ptr [ESI]                ; 0050cfc5 | DAT_02045ab0
    FSTP float ptr [ESI + 0x4]          ; 0050cfc7 | DAT_02045ab4
    FSTP float ptr [ESI + 0x8]          ; 0050cfca | DAT_02045ab8
    FLD float ptr [EAX]                 ; 0050cfcd | DAT_02045ab0
    FISTP dword ptr [EBX]               ; 0050cfcf
    FLD float ptr [EAX + 0x4]           ; 0050cfd1 | DAT_02045ab4
    FISTP dword ptr [EBX + 0x4]         ; 0050cfd4
    FLD float ptr [EAX + 0x8]           ; 0050cfd7 | DAT_02045ab8
    FISTP dword ptr [EBX + 0x8]         ; 0050cfda
    PUSH 0x0                            ; 0050cfdd
    PUSH EDI                            ; 0050cfdf
    LEA EAX,[ESP + 0x50]                ; 0050cfe0
    PUSH EAX                            ; 0050cfe4
    MOV EBX,dword ptr [ESP + 0x128]     ; 0050cfe5
    PUSH EBX                            ; 0050cfec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cfed
    PUSH EAX                            ; 0050cff0
    ADD ESI,0xc                         ; 0050cff1
    INC EDI                             ; 0050cff4
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 ; 0050cff5
        ;   XREF to: 0050b7f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0050cffa
    MOV EAX,[0x01c038f4]                ; 0050cffd | DAT_01c038f4
    MOV EDX,dword ptr [ESP + 0x124]     ; 0050d002
    LEA ECX,[EBX + 0xc]                 ; 0050d009
    ADD EDX,0x30                        ; 0050d00c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050d00f
    MOV dword ptr [ESP + 0x11c],ECX     ; 0050d012
    MOV dword ptr [EDX + 0x5c5010],EAX  ; 0050d019 | DAT_005c5040 | g_BackBuffer
    MOV dword ptr [ESP + 0x124],EDX     ; 0050d01f
    CMP EDI,EBX                         ; 0050d026
    JL 0x0050cf71                       ; 0050d028
        ;   XREF to: 0050cf71 (CONDITIONAL_JUMP)  ; LAB_0050cf71
    MOV ESP,EBP                         ; 0050d02e
    POP EBP                             ; 0050d030
    POP EDI                             ; 0050d031
    POP ESI                             ; 0050d032
    POP EBX                             ; 0050d033
    RET                                 ; 0050d034

