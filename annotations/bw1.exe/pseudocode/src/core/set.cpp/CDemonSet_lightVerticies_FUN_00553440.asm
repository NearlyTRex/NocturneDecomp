; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals)
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
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x16c]:1  local_16c
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 at 00418ea4
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 004418dc
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 at 0044c0a4
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0 at 00467357
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e1a10 at 004e1b63
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e1be0 at 004e1d2f
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_00522b90 at 00522d9f
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00564030 at 0056405d
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f0a75
;   TerminatedCString s_CDemonSet_lightVerticies_005f0a85
;   TerminatedCString s_core_set_cpp_005f0ada
;   TerminatedCString s_Too_many_normals_on_this_005f0aea
;   TerminatedCString s_core_set_cpp_005f0b13
;   TerminatedCString s_Need_more_normals_for_pa_005f0b23
;   undefined4 DAT_005f0b4e
;   undefined4 DAT_005f0b56
;   undefined4 DAT_00612560
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   ... and 44 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710
;   core_set.cpp_transformToWorldSpace_FUN_00553210
;   crt_memory.c_memset_FUN_005bfb70
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553440
        ;   Label: core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
    PUSH ESI                            ; 00553441
    PUSH EDI                            ; 00553442
    PUSH EBP                            ; 00553443
    MOV EBP,ESP                         ; 00553444
    SUB ESP,0x164                       ; 00553446
    AND ESP,0xfffffff8                  ; 0055344c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055344f
    CMP EDX,0x4e20                      ; 00553452
    JLE 0x00553483                      ; 00553458
        ;   XREF to: 00553483 (CONDITIONAL_JUMP)  ; LAB_00553483
    PUSH 0x4e20                         ; 0055345a
    PUSH EDX                            ; 0055345f
    MOV ECX,0x5f0a75                    ; 00553460 | = "..\\core\\set.cpp"
    MOV EBX,0xee5                       ; 00553465
    PUSH 0x5f0a85                       ; 0055346a | = "CDemonSet::lightVerticies - tried to ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0055346f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00553475 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055347b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00553480
    MOV EDI,dword ptr [0x00612560]      ; 00553483 | DAT_00612560
        ;   Label: LAB_00553483
    PUSH EDI                            ; 00553489 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0055348a
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055348f
    TEST EAX,EAX                        ; 00553492
    JNZ 0x00553500                      ; 00553494
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    MOV EDX,dword ptr [EBP + 0x18]      ; 0055349a
    LEA EDI,[EDX*0x4 + 0x0]             ; 0055349d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005534a4
    SUB EDI,EDX                         ; 005534a7
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 005534a9
    SHL EDI,0x4                         ; 005534af
    TEST EDX,EDX                        ; 005534b2
    JZ 0x005535f8                       ; 005534b4
        ;   XREF to: 005535f8 (CONDITIONAL_JUMP)  ; LAB_005535f8
    CMP dword ptr [0x02026344],0x0      ; 005534ba | DAT_02026344
    JZ 0x00553507                       ; 005534c1
        ;   XREF to: 00553507 (CONDITIONAL_JUMP)  ; LAB_00553507
    CMP dword ptr [EBP + 0x18],0x0      ; 005534c3
    JLE 0x005534f0                      ; 005534c7
        ;   XREF to: 005534f0 (CONDITIONAL_JUMP)  ; LAB_005534f0
    MOV EDX,EDI                         ; 005534c9
    XOR EAX,EAX                         ; 005534cb
    ADD EAX,0x30                        ; 005534cd
        ;   Label: LAB_005534cd
    XOR EBX,EBX                         ; 005534d0
    MOV dword ptr [EAX + 0x629004],EBX  ; 005534d2 | DAT_00629034 | DAT_00629064
    MOV dword ptr [EAX + 0x629008],EBX  ; 005534d8 | DAT_00629038 | DAT_00629068
    MOV dword ptr [EAX + 0x62900c],EBX  ; 005534de | DAT_0062903c | DAT_0062906c
    MOV dword ptr [EAX + 0x629010],EBX  ; 005534e4 | DAT_00629040 | DAT_00629070
    CMP EAX,EDX                         ; 005534ea
    JL 0x005534cd                       ; 005534ec
        ;   XREF to: 005534cd (CONDITIONAL_JUMP)  ; LAB_005534cd
    MOV EAX,EAX                         ; 005534ee
    XOR EBX,EBX                         ; 005534f0
        ;   Label: LAB_005534f0
    MOV dword ptr [0x01c51cac],EBX      ; 005534f2 | DAT_01c51cac
    LEA EAX,[EAX]                       ; 005534f8
    MOV EDX,EDX                         ; 005534fe
    MOV ESP,EBP                         ; 00553500
        ;   Label: LAB_00553500
    POP EBP                             ; 00553502
    POP EDI                             ; 00553503
    POP ESI                             ; 00553504
    POP EBX                             ; 00553505
    RET                                 ; 00553506
    MOV EAX,dword ptr [EBP + 0x14]      ; 00553507
        ;   Label: LAB_00553507
    MOV EDX,dword ptr [EAX + 0x15ac90]  ; 0055350a
    CMP EDX,0x2                         ; 00553510
    JNZ 0x0055355f                      ; 00553513
        ;   XREF to: 0055355f (CONDITIONAL_JUMP)  ; LAB_0055355f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00553515
    XOR EBX,EBX                         ; 00553518
    TEST EDI,EDI                        ; 0055351a
    JLE 0x00553550                      ; 0055351c
        ;   XREF to: 00553550 (CONDITIONAL_JUMP)  ; LAB_00553550
    MOV ESI,dword ptr [EBP + 0x24]      ; 0055351e
    XOR EDI,EDI                         ; 00553521
    PUSH 0x1                            ; 00553523
        ;   Label: LAB_00553523
    PUSH EBX                            ; 00553525
    XOR ECX,ECX                         ; 00553526
    PUSH ECX                            ; 00553528
    PUSH ESI                            ; 00553529
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055352a
    ADD EDI,0x30                        ; 0055352d
    PUSH EAX                            ; 00553530
    MOV dword ptr [EDI + 0x629010],ECX  ; 00553531 | DAT_00629040 | DAT_00629070
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 00553537
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 0055353c
    INC EBX                             ; 0055353f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00553540
    ADD ESI,0xc                         ; 00553543
    CMP EBX,EDX                         ; 00553546
    JL 0x00553523                       ; 00553548
        ;   XREF to: 00553523 (CONDITIONAL_JUMP)  ; LAB_00553523
    LEA EAX,[EAX]                       ; 0055354a
    XOR ECX,ECX                         ; 00553550
        ;   Label: LAB_00553550
    MOV dword ptr [0x01c51cac],ECX      ; 00553552 | DAT_01c51cac
    MOV ESP,EBP                         ; 00553558
    POP EBP                             ; 0055355a
    POP EDI                             ; 0055355b
    POP ESI                             ; 0055355c
    POP EBX                             ; 0055355d
    RET                                 ; 0055355e
    CMP EDX,0x3                         ; 0055355f
        ;   Label: LAB_0055355f
    JNZ 0x005535b9                      ; 00553562
        ;   XREF to: 005535b9 (CONDITIONAL_JUMP)  ; LAB_005535b9
    CMP dword ptr [EBP + 0x18],0x0      ; 00553564
    JLE 0x00553550                      ; 00553568
        ;   XREF to: 00553550 (CONDITIONAL_JUMP)  ; LAB_00553550
    MOV ECX,EDI                         ; 0055356a
    XOR EAX,EAX                         ; 0055356c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055356e
        ;   Label: LAB_0055356e
    MOV EDX,dword ptr [EDX + 0x15ae9c]  ; 00553571
    MOV dword ptr [EAX + 0x629034],EDX  ; 00553577 | DAT_00629034 | DAT_00629064
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055357d
    MOV EDX,dword ptr [EDX + 0x15aea0]  ; 00553580
    MOV dword ptr [EAX + 0x629038],EDX  ; 00553586 | DAT_00629038 | DAT_00629068
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055358c
    ADD EAX,0x30                        ; 0055358f
    MOV EDX,dword ptr [EDX + 0x15aea4]  ; 00553592
    MOV dword ptr [EAX + 0x62900c],EDX  ; 00553598 | DAT_0062903c | DAT_0062906c
    XOR EDX,EDX                         ; 0055359e
    MOV dword ptr [EAX + 0x629010],EDX  ; 005535a0 | DAT_00629040 | DAT_00629070
    CMP EAX,ECX                         ; 005535a6
    JL 0x0055356e                       ; 005535a8
        ;   XREF to: 0055356e (CONDITIONAL_JUMP)  ; LAB_0055356e
    XOR ECX,ECX                         ; 005535aa
    MOV dword ptr [0x01c51cac],ECX      ; 005535ac | DAT_01c51cac
    MOV ESP,EBP                         ; 005535b2
    POP EBP                             ; 005535b4
    POP EDI                             ; 005535b5
    POP ESI                             ; 005535b6
    POP EBX                             ; 005535b7
    RET                                 ; 005535b8
    CMP dword ptr [EBP + 0x18],0x0      ; 005535b9
        ;   Label: LAB_005535b9
    JLE 0x00553550                      ; 005535bd
        ;   XREF to: 00553550 (CONDITIONAL_JUMP)  ; LAB_00553550
    MOV ECX,0xffff                      ; 005535bf
    MOV EDX,EDI                         ; 005535c4
    XOR EAX,EAX                         ; 005535c6
    ADD EAX,0x30                        ; 005535c8
        ;   Label: LAB_005535c8
    MOV dword ptr [EAX + 0x629004],ECX  ; 005535cb | DAT_00629034 | DAT_00629064
    MOV dword ptr [EAX + 0x629008],ECX  ; 005535d1 | DAT_00629038 | DAT_00629068
    XOR EDI,EDI                         ; 005535d7
    MOV dword ptr [EAX + 0x62900c],ECX  ; 005535d9 | DAT_0062903c | DAT_0062906c
    MOV dword ptr [EAX + 0x629010],EDI  ; 005535df | DAT_00629040 | DAT_00629070
    CMP EAX,EDX                         ; 005535e5
    JL 0x005535c8                       ; 005535e7
        ;   XREF to: 005535c8 (CONDITIONAL_JUMP)  ; LAB_005535c8
    XOR ECX,ECX                         ; 005535e9
    MOV dword ptr [0x01c51cac],ECX      ; 005535eb | DAT_01c51cac
    MOV ESP,EBP                         ; 005535f1
    POP EBP                             ; 005535f3
    POP EDI                             ; 005535f4
    POP ESI                             ; 005535f5
    POP EBX                             ; 005535f6
    RET                                 ; 005535f7
    MOV ECX,dword ptr [EAX + 0x161670]  ; 005535f8
        ;   Label: LAB_005535f8
    TEST ECX,ECX                        ; 005535fe
    JZ 0x0055364b                       ; 00553600
        ;   XREF to: 0055364b (CONDITIONAL_JUMP)  ; LAB_0055364b
    CMP dword ptr [EBP + 0x18],0x0      ; 00553602
    JLE 0x00553500                      ; 00553606
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    MOV ECX,EDI                         ; 0055360c
    XOR EAX,EAX                         ; 0055360e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00553610
        ;   Label: LAB_00553610
    MOV EDX,dword ptr [EDX + 0x161674]  ; 00553613
    MOV dword ptr [EAX + 0x629034],EDX  ; 00553619 | DAT_00629034 | DAT_00629064
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055361f
    MOV EDX,dword ptr [EDX + 0x161678]  ; 00553622
    MOV dword ptr [EAX + 0x629038],EDX  ; 00553628 | DAT_00629038 | DAT_00629068
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055362e
    ADD EAX,0x30                        ; 00553631
    MOV EDX,dword ptr [EDX + 0x16167c]  ; 00553634
    MOV dword ptr [EAX + 0x62900c],EDX  ; 0055363a | DAT_0062903c | DAT_0062906c
    CMP EAX,ECX                         ; 00553640
    JL 0x00553610                       ; 00553642
        ;   XREF to: 00553610 (CONDITIONAL_JUMP)  ; LAB_00553610
    MOV ESP,EBP                         ; 00553644
    POP EBP                             ; 00553646
    POP EDI                             ; 00553647
    POP ESI                             ; 00553648
    POP EBX                             ; 00553649
    RET                                 ; 0055364a
    MOV EBX,dword ptr [EAX + 0x15ac98]  ; 0055364b
        ;   Label: LAB_0055364b
    TEST EBX,EBX                        ; 00553651
    JZ 0x005536ff                       ; 00553653
        ;   XREF to: 005536ff (CONDITIONAL_JUMP)  ; LAB_005536ff
    MOV EBX,dword ptr [EBP + 0x18]      ; 00553659
    MOV dword ptr [ESP + 0x13c],EDX     ; 0055365c
    TEST EBX,EBX                        ; 00553663
    JLE 0x00553500                      ; 00553665
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    XOR EBX,EBX                         ; 0055366b
    MOV EAX,dword ptr [EBX + 0x629014]  ; 0055366d | DAT_00629014 | DAT_00629044
        ;   Label: LAB_0055366d
    MOV dword ptr [ESP + 0x84],EAX      ; 00553673
    MOV EAX,dword ptr [EBX + 0x629018]  ; 0055367a | DAT_00629018 | DAT_00629048
    MOV dword ptr [ESP + 0x88],EAX      ; 00553680
    MOV EAX,dword ptr [EBX + 0x62901c]  ; 00553687 | DAT_0062901c | DAT_0062904c
    MOV dword ptr [ESP + 0x8c],EAX      ; 0055368d
    LEA EAX,[ESP + 0x84]                ; 00553694
    PUSH EAX                            ; 0055369b
    LEA ESI,[ESP + 0x58]                ; 0055369c
    CALL core_set.cpp_transformToWorldSpace_FUN_00553210 ; 005536a0
        ;   XREF to: 00553210 (UNCONDITIONAL_CALL)  ; CVector3i * core_set.cpp_transformToWorldSpace_FUN_00553210(CVector3i * input, CVector3i * output)
    ADD ESP,0x4                         ; 005536a5
    PUSH 0x0                            ; 005536a8
    MOV ECX,dword ptr [ESP + 0x140]     ; 005536aa
    LEA EDI,[ESP + 0x10]                ; 005536b1
    PUSH ECX                            ; 005536b5
    LEA ESI,[ESP + 0x5c]                ; 005536b6
    LEA EAX,[ESP + 0x14]                ; 005536ba
    PUSH 0x0                            ; 005536be
    MOVSD ES:EDI,ESI                    ; 005536c0
    MOVSD ES:EDI,ESI                    ; 005536c1
    MOVSD ES:EDI,ESI                    ; 005536c2
    PUSH EAX                            ; 005536c3
    MOV ESI,dword ptr [EBP + 0x14]      ; 005536c4
    PUSH ESI                            ; 005536c7
    ADD EBX,0x30                        ; 005536c8
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 005536cb
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 005536d0
    MOV EAX,[0x01c51cac]                ; 005536d3 | DAT_01c51cac
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005536d8
    MOV EDX,dword ptr [EBP + 0x18]      ; 005536df
    INC EDI                             ; 005536e2
    MOV dword ptr [EBX + 0x629010],EAX  ; 005536e3 | DAT_00629040
    MOV dword ptr [ESP + 0x13c],EDI     ; 005536e9
    CMP EDI,EDX                         ; 005536f0
    JL 0x0055366d                       ; 005536f2
        ;   XREF to: 0055366d (CONDITIONAL_JUMP)  ; LAB_0055366d
    MOV ESP,EBP                         ; 005536f8
    POP EBP                             ; 005536fa
    POP EDI                             ; 005536fb
    POP ESI                             ; 005536fc
    POP EBX                             ; 005536fd
    RET                                 ; 005536fe
    CMP dword ptr [EBP + 0x2c],0x0      ; 005536ff
        ;   Label: LAB_005536ff
    JZ 0x005539b9                       ; 00553703
        ;   XREF to: 005539b9 (CONDITIONAL_JUMP)  ; LAB_005539b9
    CMP dword ptr [EAX + 0x15ae84],0x0  ; 00553709
    JZ 0x005537a0                       ; 00553710
        ;   XREF to: 005537a0 (CONDITIONAL_JUMP)  ; LAB_005537a0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00553716
    XOR EAX,EAX                         ; 00553719
    TEST EDX,EDX                        ; 0055371b
    JLE 0x00553740                      ; 0055371d
        ;   XREF to: 00553740 (CONDITIONAL_JUMP)  ; LAB_00553740
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0055371f
    IMUL ESI,EAX,0xc                    ; 00553722
        ;   Label: LAB_00553722
    LEA EDI,[ESI + 0x2070da8]           ; 00553725
    MOV ESI,ECX                         ; 0055372b
    MOVSD ES:EDI,ESI                    ; 0055372d | DAT_02070db4
    MOVSD ES:EDI,ESI                    ; 0055372e | DAT_02070db8
    MOVSD ES:EDI,ESI                    ; 0055372f | DAT_02070dbc
    INC EAX                             ; 00553730
    MOV EDI,dword ptr [EBP + 0x18]      ; 00553731
    ADD ECX,0xc                         ; 00553734
    CMP EAX,EDI                         ; 00553737
    JL 0x00553722                       ; 00553739
        ;   XREF to: 00553722 (CONDITIONAL_JUMP)  ; LAB_00553722
    LEA EAX,[EAX]                       ; 0055373b
    MOV ECX,ECX                         ; 0055373e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00553740
        ;   Label: LAB_00553740
    XOR EBX,EBX                         ; 00553743
    TEST EAX,EAX                        ; 00553745
    JLE 0x00553500                      ; 00553747
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    MOV ESI,0x2036428                   ; 0055374d
    MOV EDI,0x2070da8                   ; 00553752
    MOV dword ptr [ESP + 0x114],EBX     ; 00553757
    PUSH 0x0                            ; 0055375e
        ;   Label: LAB_0055375e
    PUSH EBX                            ; 00553760
    PUSH EDI                            ; 00553761
    PUSH ESI                            ; 00553762
    MOV EDX,dword ptr [EBP + 0x14]      ; 00553763
    PUSH EDX                            ; 00553766
    INC EBX                             ; 00553767
    ADD EDI,0xc                         ; 00553768
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 0055376b
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 00553770
    ADD ESI,0xc                         ; 00553773
    MOV EDX,dword ptr [ESP + 0x114]     ; 00553776
    MOV EAX,[0x01c51cac]                ; 0055377d | DAT_01c51cac
    LEA ECX,[EDX + 0x30]                ; 00553782
    MOV dword ptr [EDX + 0x629040],EAX  ; 00553785 | DAT_00629040
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055378b
    MOV dword ptr [ESP + 0x114],ECX     ; 0055378e
    CMP EBX,EAX                         ; 00553795
    JL 0x0055375e                       ; 00553797
        ;   XREF to: 0055375e (CONDITIONAL_JUMP)  ; LAB_0055375e
    MOV ESP,EBP                         ; 00553799
    POP EBP                             ; 0055379b
    POP EDI                             ; 0055379c
    POP ESI                             ; 0055379d
    POP EBX                             ; 0055379e
    RET                                 ; 0055379f
    CMP dword ptr [EBP + 0x18],0x0      ; 005537a0
        ;   Label: LAB_005537a0
    JLE 0x00553820                      ; 005537a4
        ;   XREF to: 00553820 (CONDITIONAL_JUMP)  ; LAB_00553820
    MOV dword ptr [ESP + 0x108],EDI     ; 005537aa
    MOV dword ptr [ESP + 0x128],EDX     ; 005537b1
    MOV EAX,dword ptr [EBX + 0x629014]  ; 005537b8 | DAT_00629014 | DAT_00629044
        ;   Label: LAB_005537b8
    MOV dword ptr [ESP + 0x18],EAX      ; 005537be
    MOV EAX,dword ptr [EBX + 0x629018]  ; 005537c2 | DAT_00629018 | DAT_00629048
    MOV dword ptr [ESP + 0x1c],EAX      ; 005537c8
    MOV EAX,dword ptr [EBX + 0x62901c]  ; 005537cc | DAT_0062901c | DAT_0062904c
    MOV dword ptr [ESP + 0x20],EAX      ; 005537d2
    LEA EAX,[ESP + 0x18]                ; 005537d6
    PUSH EAX                            ; 005537da
    LEA ESI,[ESP + 0x4]                 ; 005537db
    CALL core_set.cpp_transformToWorldSpace_FUN_00553210 ; 005537df
        ;   XREF to: 00553210 (UNCONDITIONAL_CALL)  ; CVector3i * core_set.cpp_transformToWorldSpace_FUN_00553210(CVector3i * input, CVector3i * output)
    ADD ESP,0x4                         ; 005537e4
    MOV EDI,dword ptr [ESP + 0x128]     ; 005537e7
    MOV ESI,ESP                         ; 005537ee
    LEA EDI,[EDI + 0x2036428]           ; 005537f0
    MOVSD ES:EDI,ESI                    ; 005537f6
    MOVSD ES:EDI,ESI                    ; 005537f7
    MOVSD ES:EDI,ESI                    ; 005537f8
    MOV ESI,dword ptr [ESP + 0x128]     ; 005537f9
    ADD EBX,0x30                        ; 00553800
    ADD ESI,0xc                         ; 00553803
    MOV EDI,dword ptr [ESP + 0x108]     ; 00553806
    MOV dword ptr [ESP + 0x128],ESI     ; 0055380d
    CMP EBX,EDI                         ; 00553814
    JL 0x005537b8                       ; 00553816
        ;   XREF to: 005537b8 (CONDITIONAL_JUMP)  ; LAB_005537b8
    LEA EAX,[EAX]                       ; 00553818
    MOV EDX,EDX                         ; 0055381e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00553820
        ;   Label: LAB_00553820
    XOR EBX,EBX                         ; 00553823
    TEST EAX,EAX                        ; 00553825
    JLE 0x00553740                      ; 00553827
        ;   XREF to: 00553740 (CONDITIONAL_JUMP)  ; LAB_00553740
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0055382d
    IMUL EDI,EBX,0xc                    ; 00553830
        ;   Label: LAB_00553830
    MOV EAX,[0x01c51d5c]                ; 00553833 | DAT_01c51d5c
    MOV EDX,dword ptr [ECX]             ; 00553838
    IMUL EDX                            ; 0055383a
    SHRD EAX,EDX,0x10                   ; 0055383c
    MOV ESI,EAX                         ; 00553840
    MOV EDX,dword ptr [ECX + 0x4]       ; 00553842
    MOV EAX,[0x01c51d68]                ; 00553845 | DAT_01c51d68
    IMUL EDX                            ; 0055384a
    SHRD EAX,EDX,0x10                   ; 0055384c
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553850
    ADD ESI,EAX                         ; 00553853
    MOV EAX,[0x01c51d74]                ; 00553855 | DAT_01c51d74
    IMUL EDX                            ; 0055385a
    SHRD EAX,EDX,0x10                   ; 0055385c
    MOV EDX,dword ptr [ECX]             ; 00553860
    ADD ESI,EAX                         ; 00553862
    MOV EAX,[0x01c51d60]                ; 00553864 | DAT_01c51d60
    MOV dword ptr [ESP + 0x9c],ESI      ; 00553869
    IMUL EDX                            ; 00553870
    SHRD EAX,EDX,0x10                   ; 00553872
    MOV ESI,EAX                         ; 00553876
    MOV EDX,dword ptr [ECX + 0x4]       ; 00553878
    MOV EAX,[0x01c51d6c]                ; 0055387b | DAT_01c51d6c
    IMUL EDX                            ; 00553880
    SHRD EAX,EDX,0x10                   ; 00553882
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553886
    ADD ESI,EAX                         ; 00553889
    MOV EAX,[0x01c51d78]                ; 0055388b | DAT_01c51d78
    IMUL EDX                            ; 00553890
    SHRD EAX,EDX,0x10                   ; 00553892
    MOV EDX,dword ptr [ECX]             ; 00553896
    ADD ESI,EAX                         ; 00553898
    MOV EAX,[0x01c51d64]                ; 0055389a | DAT_01c51d64
    MOV dword ptr [ESP + 0xa0],ESI      ; 0055389f
    IMUL EDX                            ; 005538a6
    SHRD EAX,EDX,0x10                   ; 005538a8
    MOV ESI,EAX                         ; 005538ac
    MOV EDX,dword ptr [ECX + 0x4]       ; 005538ae
    MOV EAX,[0x01c51d70]                ; 005538b1 | DAT_01c51d70
    IMUL EDX                            ; 005538b6
    SHRD EAX,EDX,0x10                   ; 005538b8
    MOV EDX,dword ptr [ECX + 0x8]       ; 005538bc
    ADD ESI,EAX                         ; 005538bf
    MOV EAX,[0x01c51d7c]                ; 005538c1 | DAT_01c51d7c
    IMUL EDX                            ; 005538c6
    SHRD EAX,EDX,0x10                   ; 005538c8
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005538cc
    ADD ESI,EAX                         ; 005538d3
    MOV EAX,[0x01d1dd18]                ; 005538d5 | DAT_01d1dd18
    MOV dword ptr [ESP + 0xa4],ESI      ; 005538da
    IMUL EDX                            ; 005538e1
    SHRD EAX,EDX,0x10                   ; 005538e3
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005538e7
    MOV ESI,EAX                         ; 005538ee
    MOV EAX,[0x01d1dd24]                ; 005538f0 | DAT_01d1dd24
    IMUL EDX                            ; 005538f5
    SHRD EAX,EDX,0x10                   ; 005538f7
    MOV EDX,dword ptr [ESP + 0xa4]      ; 005538fb
    ADD ESI,EAX                         ; 00553902
    MOV EAX,[0x01d1dd30]                ; 00553904 | DAT_01d1dd30
    IMUL EDX                            ; 00553909
    SHRD EAX,EDX,0x10                   ; 0055390b
    ADD ESI,EAX                         ; 0055390f
    MOV dword ptr [ESP + 0x78],ESI      ; 00553911
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00553915
    MOV EAX,[0x01d1dd1c]                ; 0055391c | DAT_01d1dd1c
    IMUL EDX                            ; 00553921
    SHRD EAX,EDX,0x10                   ; 00553923
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00553927
    MOV ESI,EAX                         ; 0055392e
    MOV EAX,[0x01d1dd28]                ; 00553930 | DAT_01d1dd28
    IMUL EDX                            ; 00553935
    SHRD EAX,EDX,0x10                   ; 00553937
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0055393b
    ADD ESI,EAX                         ; 00553942
    MOV EAX,[0x01d1dd34]                ; 00553944 | DAT_01d1dd34
    IMUL EDX                            ; 00553949
    SHRD EAX,EDX,0x10                   ; 0055394b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0055394f
    ADD ESI,EAX                         ; 00553956
    MOV EAX,[0x01d1dd20]                ; 00553958 | DAT_01d1dd20
    MOV dword ptr [ESP + 0x7c],ESI      ; 0055395d
    IMUL EDX                            ; 00553961
    SHRD EAX,EDX,0x10                   ; 00553963
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00553967
    MOV ESI,EAX                         ; 0055396e
    MOV EAX,[0x01d1dd2c]                ; 00553970 | DAT_01d1dd2c
    IMUL EDX                            ; 00553975
    SHRD EAX,EDX,0x10                   ; 00553977
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0055397b
    ADD ESI,EAX                         ; 00553982
    MOV EAX,[0x01d1dd38]                ; 00553984 | DAT_01d1dd38
    IMUL EDX                            ; 00553989
    SHRD EAX,EDX,0x10                   ; 0055398b
    ADD ESI,EAX                         ; 0055398f
    LEA EDI,[EDI + 0x2070da8]           ; 00553991
    MOV dword ptr [ESP + 0x80],ESI      ; 00553997
    LEA ESI,[ESP + 0x78]                ; 0055399e
    MOVSD ES:EDI,ESI                    ; 005539a2
    MOVSD ES:EDI,ESI                    ; 005539a3
    MOVSD ES:EDI,ESI                    ; 005539a4
    INC EBX                             ; 005539a5
    MOV ESI,dword ptr [EBP + 0x18]      ; 005539a6
    ADD ECX,0xc                         ; 005539a9
    CMP EBX,ESI                         ; 005539ac
    JGE 0x00553740                      ; 005539ae
        ;   XREF to: 00553740 (CONDITIONAL_JUMP)  ; LAB_00553740
    JMP 0x00553830                      ; 005539b4
        ;   XREF to: 00553830 (UNCONDITIONAL_JUMP)  ; LAB_00553830
    CMP dword ptr [EBP + 0x1c],0x0      ; 005539b9
        ;   Label: LAB_005539b9
    JNZ 0x00553a54                      ; 005539bd
        ;   XREF to: 00553a54 (CONDITIONAL_JUMP)  ; LAB_00553a54
    MOV EBX,dword ptr [EBP + 0x18]      ; 005539c3
    MOV dword ptr [ESP + 0x138],EDX     ; 005539c6
    TEST EBX,EBX                        ; 005539cd
    JLE 0x00553500                      ; 005539cf
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    XOR EBX,EBX                         ; 005539d5
    MOV EAX,dword ptr [EBX + 0x629014]  ; 005539d7 | DAT_00629014 | DAT_00629044
        ;   Label: LAB_005539d7
    MOV dword ptr [ESP + 0x3c],EAX      ; 005539dd
    MOV EAX,dword ptr [EBX + 0x629018]  ; 005539e1 | DAT_00629018 | DAT_00629048
    MOV dword ptr [ESP + 0x40],EAX      ; 005539e7
    MOV EAX,dword ptr [EBX + 0x62901c]  ; 005539eb | DAT_0062901c | DAT_0062904c
    MOV dword ptr [ESP + 0x44],EAX      ; 005539f1
    LEA EAX,[ESP + 0x3c]                ; 005539f5
    PUSH EAX                            ; 005539f9
    LEA ESI,[ESP + 0x34]                ; 005539fa
    LEA EDI,[ESP + 0x28]                ; 005539fe
    CALL core_set.cpp_transformToWorldSpace_FUN_00553210 ; 00553a02
        ;   XREF to: 00553210 (UNCONDITIONAL_CALL)  ; CVector3i * core_set.cpp_transformToWorldSpace_FUN_00553210(CVector3i * input, CVector3i * output)
    LEA ESI,[ESP + 0x34]                ; 00553a07
    ADD ESP,0x4                         ; 00553a0b
    MOVSD ES:EDI,ESI                    ; 00553a0e
    MOVSD ES:EDI,ESI                    ; 00553a0f
    MOVSD ES:EDI,ESI                    ; 00553a10
    PUSH 0x0                            ; 00553a11
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00553a13
    PUSH EDI                            ; 00553a1a
    PUSH 0x0                            ; 00553a1b
    LEA EAX,[ESP + 0x30]                ; 00553a1d
    PUSH EAX                            ; 00553a21
    MOV EAX,dword ptr [EBP + 0x14]      ; 00553a22
    PUSH EAX                            ; 00553a25
    ADD EBX,0x30                        ; 00553a26
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 00553a29
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    MOV EAX,[0x01c51cac]                ; 00553a2e | DAT_01c51cac
    ADD ESP,0x14                        ; 00553a33
    LEA EDX,[EDI + 0x1]                 ; 00553a36
    MOV ECX,dword ptr [EBP + 0x18]      ; 00553a39
    MOV dword ptr [ESP + 0x138],EDX     ; 00553a3c
    MOV dword ptr [EBX + 0x629010],EAX  ; 00553a43 | DAT_00629040
    CMP EDX,ECX                         ; 00553a49
    JL 0x005539d7                       ; 00553a4b
        ;   XREF to: 005539d7 (CONDITIONAL_JUMP)  ; LAB_005539d7
    MOV ESP,EBP                         ; 00553a4d
    POP EBP                             ; 00553a4f
    POP EDI                             ; 00553a50
    POP ESI                             ; 00553a51
    POP EBX                             ; 00553a52
    RET                                 ; 00553a53
    CMP dword ptr [EBP + 0x18],0x0      ; 00553a54
        ;   Label: LAB_00553a54
    JLE 0x00553ad0                      ; 00553a58
        ;   XREF to: 00553ad0 (CONDITIONAL_JUMP)  ; LAB_00553ad0
    MOV dword ptr [ESP + 0x10c],EDI     ; 00553a5e
    MOV dword ptr [ESP + 0x11c],ECX     ; 00553a65
    MOV EAX,dword ptr [EBX + 0x629014]  ; 00553a6c | DAT_00629014 | DAT_00629044
        ;   Label: LAB_00553a6c
    MOV dword ptr [ESP + 0x60],EAX      ; 00553a72
    MOV EAX,dword ptr [EBX + 0x629018]  ; 00553a76 | DAT_00629018 | DAT_00629048
    MOV dword ptr [ESP + 0x64],EAX      ; 00553a7c
    MOV EAX,dword ptr [EBX + 0x62901c]  ; 00553a80 | DAT_0062901c | DAT_0062904c
    MOV dword ptr [ESP + 0x68],EAX      ; 00553a86
    LEA EAX,[ESP + 0x60]                ; 00553a8a
    PUSH EAX                            ; 00553a8e
    LEA ESI,[ESP + 0x4c]                ; 00553a8f
    CALL core_set.cpp_transformToWorldSpace_FUN_00553210 ; 00553a93
        ;   XREF to: 00553210 (UNCONDITIONAL_CALL)  ; CVector3i * core_set.cpp_transformToWorldSpace_FUN_00553210(CVector3i * input, CVector3i * output)
    ADD ESP,0x4                         ; 00553a98
    ADD EBX,0x30                        ; 00553a9b
    MOV EDI,dword ptr [ESP + 0x11c]     ; 00553a9e
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00553aa5
    LEA ESI,[ESP + 0x48]                ; 00553aac
    ADD EDX,0xc                         ; 00553ab0
    LEA EDI,[EDI + 0x2036428]           ; 00553ab3
    MOV ECX,dword ptr [ESP + 0x10c]     ; 00553ab9
    MOV dword ptr [ESP + 0x11c],EDX     ; 00553ac0
    MOVSD ES:EDI,ESI                    ; 00553ac7
    MOVSD ES:EDI,ESI                    ; 00553ac8
    MOVSD ES:EDI,ESI                    ; 00553ac9
    CMP EBX,ECX                         ; 00553aca
    JL 0x00553a6c                       ; 00553acc
        ;   XREF to: 00553a6c (CONDITIONAL_JUMP)  ; LAB_00553a6c
    MOV EAX,EAX                         ; 00553ace
    CMP dword ptr [EBP + 0x28],0x0      ; 00553ad0
        ;   Label: LAB_00553ad0
    JLE 0x00553e1b                      ; 00553ad4
        ;   XREF to: 00553e1b (CONDITIONAL_JUMP)  ; LAB_00553e1b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00553ada
    MOV EAX,dword ptr [EBP + 0x20]      ; 00553add
    XOR ESI,ESI                         ; 00553ae0
    TEST EDX,EDX                        ; 00553ae2
    JLE 0x00553c43                      ; 00553ae4
        ;   XREF to: 00553c43 (CONDITIONAL_JUMP)  ; LAB_00553c43
    MOV EDX,dword ptr [EAX + 0x24]      ; 00553aea
        ;   Label: LAB_00553aea
    IMUL EDX,EDX,0xc                    ; 00553aed
    MOV EBX,dword ptr [EAX + 0x18]      ; 00553af0
    IMUL EBX,EBX,0xc                    ; 00553af3
    MOV ECX,0x2036428                   ; 00553af6
    ADD ECX,EDX                         ; 00553afb
    MOV EDX,0x2036428                   ; 00553afd
    ADD EDX,EBX                         ; 00553b02
    MOV EBX,dword ptr [ECX]             ; 00553b04
    SUB EBX,dword ptr [EDX]             ; 00553b06
    MOV dword ptr [ESP + 0x158],EBX     ; 00553b08
    MOV EBX,dword ptr [ECX + 0x4]       ; 00553b0f
    SUB EBX,dword ptr [EDX + 0x4]       ; 00553b12
    MOV dword ptr [ESP + 0x160],EBX     ; 00553b15
    MOV EBX,dword ptr [ECX + 0x8]       ; 00553b1c
    SUB EBX,dword ptr [EDX + 0x8]       ; 00553b1f
    MOV EDI,dword ptr [EAX + 0x30]      ; 00553b22
    MOV dword ptr [ESP + 0x15c],EBX     ; 00553b25
    IMUL EBX,EDI,0xc                    ; 00553b2c
    ADD EBX,0x2036428                   ; 00553b2f
    MOV EDI,dword ptr [ECX]             ; 00553b35
    MOV EDX,dword ptr [EBX]             ; 00553b37
    SUB EDX,EDI                         ; 00553b39
    FILD dword ptr [ESP + 0x15c]        ; 00553b3b
    MOV dword ptr [ESP + 0x15c],EDX     ; 00553b42
    MOV EDI,dword ptr [ECX + 0x4]       ; 00553b49
    FILD dword ptr [ESP + 0x15c]        ; 00553b4c
    MOV EDX,dword ptr [EBX + 0x4]       ; 00553b53
    FST float ptr [ESP + 0xb4]          ; 00553b56
    SUB EDX,EDI                         ; 00553b5d
    FMUL ST1                            ; 00553b5f
    MOV dword ptr [ESP + 0x15c],EDX     ; 00553b61
    MOV EDX,dword ptr [EBX + 0x8]       ; 00553b68
    SUB EDX,dword ptr [ECX + 0x8]       ; 00553b6b
    FILD dword ptr [ESP + 0x160]        ; 00553b6e
    MOV dword ptr [ESP + 0x160],EDX     ; 00553b75
    FST float ptr [ESP + 0xac]          ; 00553b7c
    FILD dword ptr [ESP + 0x160]        ; 00553b83
    FSTP float ptr [ESP + 0xbc]         ; 00553b8a
    FMUL float ptr [ESP + 0xbc]         ; 00553b91
    FILD dword ptr [ESP + 0x158]        ; 00553b98
    FILD dword ptr [ESP + 0x15c]        ; 00553b9f
    FLD ST1                             ; 00553ba6
    FMUL ST1                            ; 00553ba8
    FXCH                                ; 00553baa
    FMULP ST5                           ; 00553bac
    FXCH                                ; 00553bae
    FMUL float ptr [ESP + 0xbc]         ; 00553bb0
    FXCH ST4                            ; 00553bb7
    FSUBP ST2,ST0                       ; 00553bb9
    FLD ST1                             ; 00553bbb
    FMUL ST2                            ; 00553bbd
    FXCH ST4                            ; 00553bbf
    FSUBP ST3,ST0                       ; 00553bc1
    FLD ST2                             ; 00553bc3
    FMUL ST3                            ; 00553bc5
    FLD float ptr [ESP + 0xb4]          ; 00553bc7
    FMUL float ptr [ESP + 0xac]         ; 00553bce
    FXCH                                ; 00553bd5
    FADDP ST5,ST0                       ; 00553bd7
    FSUBP                               ; 00553bd9
    FLD ST0                             ; 00553bdb
    FMUL ST1                            ; 00553bdd
    FADDP ST4,ST0                       ; 00553bdf
    FXCH ST3                            ; 00553be1
    FSTP float ptr [ESP + 0xc0]         ; 00553be3
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00553bea
    MOV ECX,dword ptr [0x01cc8050]      ; 00553bf1 | DAT_01cc8050
    SAR EDX,0x1                         ; 00553bf7
    SUB ECX,EDX                         ; 00553bf9
    MOV dword ptr [ESP + 0xc4],ECX      ; 00553bfb
    FLD float ptr [ESP + 0xc4]          ; 00553c02
    FMUL double ptr [0x005f0b4e]        ; 00553c09 | DAT_005f0b4e
    FXCH                                ; 00553c0f
    FMUL ST1                            ; 00553c11
    FXCH ST2                            ; 00553c13
    FMUL ST1                            ; 00553c15
    FXCH ST3                            ; 00553c17
    FMULP                               ; 00553c19
    MOV EDI,dword ptr [EBP + 0x28]      ; 00553c1b
    FXCH                                ; 00553c1e
    FSTP float ptr [EAX + 0x8]          ; 00553c20
    FXCH                                ; 00553c23
    FSTP float ptr [EAX + 0xc]          ; 00553c25
    FSTP float ptr [EAX + 0x10]         ; 00553c28
    CMP EDI,0x4                         ; 00553c2b
    JNZ 0x00553e0b                      ; 00553c2e
        ;   XREF to: 00553e0b (CONDITIONAL_JUMP)  ; LAB_00553e0b
    ADD EAX,0x48                        ; 00553c34
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00553c37
        ;   Label: LAB_00553c37
    INC ESI                             ; 00553c3a
    CMP ESI,EDX                         ; 00553c3b
    JL 0x00553aea                       ; 00553c3d
        ;   XREF to: 00553aea (CONDITIONAL_JUMP)  ; LAB_00553aea
    MOV EDX,dword ptr [EBP + 0x18]      ; 00553c43
        ;   Label: LAB_00553c43
    LEA EAX,[EDX*0x4 + 0x0]             ; 00553c46
    SUB EAX,EDX                         ; 00553c4d
    SHL EAX,0x2                         ; 00553c4f
    PUSH EAX                            ; 00553c52
    PUSH 0x0                            ; 00553c53
    PUSH 0x2070da8                      ; 00553c55 | DAT_02070da8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00553c5a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00553c5f
    XOR EBX,EBX                         ; 00553c62
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00553c64
    MOV ECX,dword ptr [EBP + 0x20]      ; 00553c67
    TEST ESI,ESI                        ; 00553c6a
    JLE 0x00553d20                      ; 00553c6c
        ;   XREF to: 00553d20 (CONDITIONAL_JUMP)  ; LAB_00553d20
    IMUL EAX,dword ptr [ECX + 0x18],0xc ; 00553c72
        ;   Label: LAB_00553c72
    LEA ESI,[ECX + 0x8]                 ; 00553c76
    ADD EAX,0x2070da8                   ; 00553c79
    FLD float ptr [ESI]                 ; 00553c7e
    FADD float ptr [EAX]                ; 00553c80 | DAT_02070da8
    FSTP float ptr [EAX]                ; 00553c82 | DAT_02070da8
    FLD float ptr [ESI + 0x4]           ; 00553c84
    FADD float ptr [EAX + 0x4]          ; 00553c87 | DAT_02070dac
    FSTP float ptr [EAX + 0x4]          ; 00553c8a | DAT_02070dac
    FLD float ptr [ESI + 0x8]           ; 00553c8d
    FADD float ptr [EAX + 0x8]          ; 00553c90 | DAT_02070db0
    FSTP float ptr [EAX + 0x8]          ; 00553c93 | DAT_02070db0
    IMUL EAX,dword ptr [ECX + 0x24],0xc ; 00553c96
    ADD EAX,0x2070da8                   ; 00553c9a
    FLD float ptr [ESI]                 ; 00553c9f
    FADD float ptr [EAX]                ; 00553ca1 | DAT_02070da8
    FSTP float ptr [EAX]                ; 00553ca3 | DAT_02070da8
    FLD float ptr [ESI + 0x4]           ; 00553ca5
    FADD float ptr [EAX + 0x4]          ; 00553ca8
    FSTP float ptr [EAX + 0x4]          ; 00553cab
    FLD float ptr [ESI + 0x8]           ; 00553cae
    FADD float ptr [EAX + 0x8]          ; 00553cb1
    FSTP float ptr [EAX + 0x8]          ; 00553cb4
    IMUL EAX,dword ptr [ECX + 0x30],0xc ; 00553cb7
    ADD EAX,0x2070da8                   ; 00553cbb
    FLD float ptr [ESI]                 ; 00553cc0
    FADD float ptr [EAX]                ; 00553cc2
    FSTP float ptr [EAX]                ; 00553cc4
    FLD float ptr [ESI + 0x4]           ; 00553cc6
    FADD float ptr [EAX + 0x4]          ; 00553cc9
    FSTP float ptr [EAX + 0x4]          ; 00553ccc
    FLD float ptr [ESI + 0x8]           ; 00553ccf
    FADD float ptr [EAX + 0x8]          ; 00553cd2
    FSTP float ptr [EAX + 0x8]          ; 00553cd5
    CMP dword ptr [ECX + 0x4],0x4       ; 00553cd8
    JNZ 0x00553cff                      ; 00553cdc
        ;   XREF to: 00553cff (CONDITIONAL_JUMP)  ; LAB_00553cff
    IMUL EAX,dword ptr [ECX + 0x3c],0xc ; 00553cde
    ADD EAX,0x2070da8                   ; 00553ce2
    FLD float ptr [ESI]                 ; 00553ce7
    FADD float ptr [EAX]                ; 00553ce9
    FSTP float ptr [EAX]                ; 00553ceb
    FLD float ptr [ESI + 0x4]           ; 00553ced
    FADD float ptr [EAX + 0x4]          ; 00553cf0
    FSTP float ptr [EAX + 0x4]          ; 00553cf3
    FLD float ptr [ESI + 0x8]           ; 00553cf6
    FADD float ptr [EAX + 0x8]          ; 00553cf9
    FSTP float ptr [EAX + 0x8]          ; 00553cfc
    CMP dword ptr [EBP + 0x28],0x4      ; 00553cff
        ;   Label: LAB_00553cff
    JNZ 0x00553e13                      ; 00553d03
        ;   XREF to: 00553e13 (CONDITIONAL_JUMP)  ; LAB_00553e13
    ADD ECX,0x48                        ; 00553d09
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553d0c
        ;   Label: LAB_00553d0c
    INC EBX                             ; 00553d0f
    CMP EBX,EAX                         ; 00553d10
    JL 0x00553c72                       ; 00553d12
        ;   XREF to: 00553c72 (CONDITIONAL_JUMP)  ; LAB_00553c72
    LEA EAX,[EAX]                       ; 00553d18
    MOV EDX,EDX                         ; 00553d1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00553d20
        ;   Label: LAB_00553d20
    MOV EDI,dword ptr [EAX + 0x15ae98]  ; 00553d23
    TEST EDI,EDI                        ; 00553d29
    JZ 0x005541cb                       ; 00553d2b
        ;   XREF to: 005541cb (CONDITIONAL_JUMP)  ; LAB_005541cb
    MOV EDX,dword ptr [EBP + 0x18]      ; 00553d31
    XOR EDI,EDI                         ; 00553d34
    TEST EDX,EDX                        ; 00553d36
    JLE 0x00553500                      ; 00553d38
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    MOV ESI,0x2070da8                   ; 00553d3e
    MOV EAX,0x2036428                   ; 00553d43
    MOV dword ptr [ESP + 0x118],EDI     ; 00553d48
    MOV dword ptr [ESP + 0x140],ESI     ; 00553d4f | DAT_02070da8
    MOV dword ptr [ESP + 0x110],EAX     ; 00553d56
    MOV ESI,dword ptr [ESP + 0x140]     ; 00553d5d
        ;   Label: LAB_00553d5d
    FLD float ptr [ESI]                 ; 00553d64 | DAT_02070da8 | DAT_02070db4
    FABS                                ; 00553d66
    IMUL EBX,EDI,0xc                    ; 00553d68
    FLD1                                ; 00553d6b
    FCOMPP                              ; 00553d6d
    FNSTSW AX                           ; 00553d6f
    SAHF                                ; 00553d71
    JBE 0x00554140                      ; 00553d72
        ;   XREF to: 00554140 (CONDITIONAL_JUMP)  ; LAB_00554140
    FLD float ptr [ESI + 0x4]           ; 00553d78 | DAT_02070dac | DAT_02070db8
    FABS                                ; 00553d7b
    FLD1                                ; 00553d7d
    FCOMPP                              ; 00553d7f
    FNSTSW AX                           ; 00553d81
    SAHF                                ; 00553d83
    JBE 0x00554140                      ; 00553d84
        ;   XREF to: 00554140 (CONDITIONAL_JUMP)  ; LAB_00554140
    FLD float ptr [ESI + 0x8]           ; 00553d8a | DAT_02070db0 | DAT_02070dbc
    FABS                                ; 00553d8d
    FLD1                                ; 00553d8f
    FCOMPP                              ; 00553d91
    FNSTSW AX                           ; 00553d93
    SAHF                                ; 00553d95
    JBE 0x00554140                      ; 00553d96
        ;   XREF to: 00554140 (CONDITIONAL_JUMP)  ; LAB_00554140
    PUSH 0x0                            ; 00553d9c
    PUSH EDI                            ; 00553d9e
    MOV EAX,0x2036428                   ; 00553d9f
    PUSH 0x0                            ; 00553da4
    ADD EAX,EBX                         ; 00553da6
    PUSH EAX                            ; 00553da8
    MOV ESI,dword ptr [EBP + 0x14]      ; 00553da9
    PUSH ESI                            ; 00553dac
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 00553dad
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
        ;   Label: LAB_00553dad
    ADD ESP,0x14                        ; 00553db2
    MOV EDX,dword ptr [ESP + 0x118]     ; 00553db5
    MOV ECX,dword ptr [ESP + 0x118]     ; 00553dbc
    MOV EBX,dword ptr [EBP + 0x18]      ; 00553dc3
    MOV EAX,[0x01c51cac]                ; 00553dc6 | DAT_01c51cac
    INC EDI                             ; 00553dcb
    ADD ECX,0x30                        ; 00553dcc
    MOV dword ptr [EDX + 0x629040],EAX  ; 00553dcf | DAT_00629040 | DAT_00629070
    MOV EAX,dword ptr [ESP + 0x140]     ; 00553dd5
    MOV EDX,dword ptr [ESP + 0x110]     ; 00553ddc
    MOV dword ptr [ESP + 0x118],ECX     ; 00553de3
    ADD EAX,0xc                         ; 00553dea | DAT_02070db4
    ADD EDX,0xc                         ; 00553ded
    MOV dword ptr [ESP + 0x140],EAX     ; 00553df0 | DAT_02070db4
    MOV dword ptr [ESP + 0x110],EDX     ; 00553df7
    CMP EDI,EBX                         ; 00553dfe
    JGE 0x00553500                      ; 00553e00
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    JMP 0x00553d5d                      ; 00553e06
        ;   XREF to: 00553d5d (UNCONDITIONAL_JUMP)  ; LAB_00553d5d
    ADD EAX,0x3c                        ; 00553e0b
        ;   Label: LAB_00553e0b
    JMP 0x00553c37                      ; 00553e0e
        ;   XREF to: 00553c37 (UNCONDITIONAL_JUMP)  ; LAB_00553c37
    ADD ECX,0x3c                        ; 00553e13
        ;   Label: LAB_00553e13
    JMP 0x00553d0c                      ; 00553e16
        ;   XREF to: 00553d0c (UNCONDITIONAL_JUMP)  ; LAB_00553d0c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00553e1b
        ;   Label: LAB_00553e1b
    MOV EBX,dword ptr [EBP + 0x20]      ; 00553e1e
    CMP ESI,0xfa0                       ; 00553e21
    JLE 0x00553e4b                      ; 00553e27
        ;   XREF to: 00553e4b (CONDITIONAL_JUMP)  ; LAB_00553e4b
    MOV EDI,0x5f0ada                    ; 00553e29 | = "..\\core\\set.cpp"
    MOV EAX,0xfac                       ; 00553e2e
    PUSH 0x5f0aea                       ; 00553e33 | = "Too many normals on this packed tri list"
    MOV dword ptr [0x01d1d400],EDI      ; 00553e38 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00553e3e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00553e43
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00553e48
    CMP dword ptr [EBP + 0x1c],0xfa0    ; 00553e4b
        ;   Label: LAB_00553e4b
    JLE 0x00553e77                      ; 00553e52
        ;   XREF to: 00553e77 (CONDITIONAL_JUMP)  ; LAB_00553e77
    MOV ECX,0x5f0b13                    ; 00553e54 | = "..\\core\\set.cpp"
    MOV ESI,0xfae                       ; 00553e59
    PUSH 0x5f0b23                       ; 00553e5e | = "Need more normals for packed models"
    MOV dword ptr [0x01d1d400],ECX      ; 00553e63 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00553e69 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00553e6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00553e74
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553e77
        ;   Label: LAB_00553e77
    XOR EDI,EDI                         ; 00553e7a
    TEST EAX,EAX                        ; 00553e7c
    JLE 0x00554088                      ; 00553e7e
        ;   XREF to: 00554088 (CONDITIONAL_JUMP)  ; LAB_00554088
    FLD float ptr [ESP + 0x130]         ; 00553e84
    FLD float ptr [ESP + 0x134]         ; 00553e8b
    MOV ECX,0x202a8a8                   ; 00553e92
    XOR ESI,ESI                         ; 00553e97
        ;   Label: LAB_00553e97
    MOV SI,word ptr [EBX]               ; 00553e99
    IMUL ESI,ESI,0xc                    ; 00553e9c
    XOR EAX,EAX                         ; 00553e9f
    XOR EDX,EDX                         ; 00553ea1
    MOV AX,word ptr [EBX + 0x4]         ; 00553ea3
    MOV DX,word ptr [EBX + 0x2]         ; 00553ea7
    MOV dword ptr [ESP + 0xe4],EAX      ; 00553eab
    IMUL EAX,EDX,0xc                    ; 00553eb2
    MOV EDX,0x2036428                   ; 00553eb5
    ADD EAX,0x2036428                   ; 00553eba
    ADD EDX,ESI                         ; 00553ebf
    MOV ESI,dword ptr [EAX]             ; 00553ec1
    MOV dword ptr [ESP + 0x154],ESI     ; 00553ec3
    MOV ESI,dword ptr [EDX]             ; 00553eca
    SUB dword ptr [ESP + 0x154],ESI     ; 00553ecc
    MOV ESI,dword ptr [ESP + 0x154]     ; 00553ed3
    MOV dword ptr [ESP + 0x154],ESI     ; 00553eda
    MOV ESI,dword ptr [EAX + 0x4]       ; 00553ee1
    MOV dword ptr [ESP + 0x158],ESI     ; 00553ee4
    MOV ESI,dword ptr [EDX + 0x4]       ; 00553eeb
    SUB dword ptr [ESP + 0x158],ESI     ; 00553eee
    MOV ESI,dword ptr [ESP + 0x158]     ; 00553ef5
    MOV dword ptr [ESP + 0x160],ESI     ; 00553efc
    MOV ESI,dword ptr [EAX + 0x8]       ; 00553f03
    MOV EDX,dword ptr [EDX + 0x8]       ; 00553f06
    SUB ESI,EDX                         ; 00553f09
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00553f0b
    MOV dword ptr [ESP + 0x15c],ESI     ; 00553f12
    IMUL ESI,EDX,0xc                    ; 00553f19
    ADD ESI,0x2036428                   ; 00553f1c
    MOV EDX,dword ptr [ESI]             ; 00553f22
    MOV dword ptr [ESP + 0x158],EDX     ; 00553f24
    MOV EDX,dword ptr [EAX]             ; 00553f2b
    SUB dword ptr [ESP + 0x158],EDX     ; 00553f2d
    MOV EDX,dword ptr [ESP + 0x158]     ; 00553f34
    MOV dword ptr [ESP + 0x158],EDX     ; 00553f3b
    FILD dword ptr [ESP + 0x15c]        ; 00553f42
    FILD dword ptr [ESP + 0x158]        ; 00553f49
    MOV EDX,dword ptr [ESI + 0x4]       ; 00553f50
    FST float ptr [ESP + 0xd4]          ; 00553f53
    FXCH                                ; 00553f5a
    FSTP float ptr [ESP + 0xd0]         ; 00553f5c
    FMUL float ptr [ESP + 0xd0]         ; 00553f63
    MOV dword ptr [ESP + 0x158],EDX     ; 00553f6a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00553f71
    SUB dword ptr [ESP + 0x158],EDX     ; 00553f74
    MOV EDX,dword ptr [ESP + 0x158]     ; 00553f7b
    MOV dword ptr [ESP + 0x15c],EDX     ; 00553f82
    MOV EDX,dword ptr [ESI + 0x8]       ; 00553f89
    MOV ESI,dword ptr [EAX + 0x8]       ; 00553f8c
    MOV EAX,EDX                         ; 00553f8f
    FILD dword ptr [ESP + 0x160]        ; 00553f91
    SUB EAX,ESI                         ; 00553f98
    FSTP float ptr [ESP + 0xcc]         ; 00553f9a
    MOV dword ptr [ESP + 0x158],EAX     ; 00553fa1
    FLD float ptr [ESP + 0xcc]          ; 00553fa8
    FILD dword ptr [ESP + 0x158]        ; 00553faf
    FSTP float ptr [ESP + 0xdc]         ; 00553fb6
    FMUL float ptr [ESP + 0xdc]         ; 00553fbd
    FILD dword ptr [ESP + 0x154]        ; 00553fc4
    FILD dword ptr [ESP + 0x15c]        ; 00553fcb
    FLD ST1                             ; 00553fd2
    FMUL ST1                            ; 00553fd4
    FXCH                                ; 00553fd6
    FMUL float ptr [ESP + 0xd0]         ; 00553fd8
    FXCH ST2                            ; 00553fdf
    FMUL float ptr [ESP + 0xdc]         ; 00553fe1
    FXCH ST2                            ; 00553fe8
    FSUBP ST3,ST0                       ; 00553fea
    FXCH ST2                            ; 00553fec
    FST ST4                             ; 00553fee
    FMUL ST4                            ; 00553ff0
    FXCH                                ; 00553ff2
    FSUBP ST3,ST0                       ; 00553ff4
    FXCH ST2                            ; 00553ff6
    FST ST4                             ; 00553ff8
    FMUL ST4                            ; 00553ffa
    FLD float ptr [ESP + 0xd4]          ; 00553ffc
    FMUL float ptr [ESP + 0xcc]         ; 00554003
    FXCH                                ; 0055400a
    FADDP ST3,ST0                       ; 0055400c
    FSUBP                               ; 0055400e
    FST float ptr [ESP + 0x12c]         ; 00554010
    FMUL float ptr [ESP + 0x12c]        ; 00554017
    FADDP                               ; 0055401e
    FSTP float ptr [ESP + 0xe8]         ; 00554020
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00554027
    MOV EDX,dword ptr [0x01cc8050]      ; 0055402e | DAT_01cc8050
    SAR EAX,0x1                         ; 00554034
    SUB EDX,EAX                         ; 00554036
    MOV dword ptr [ESP + 0xec],EDX      ; 00554038
    FLD float ptr [ESP + 0xec]          ; 0055403f
    FMUL double ptr [0x005f0b4e]        ; 00554046 | DAT_005f0b4e
    FLD ST1                             ; 0055404c
    FMUL ST1                            ; 0055404e
    FLD ST3                             ; 00554050
    FMUL ST2                            ; 00554052
    FLD float ptr [ESP + 0x12c]         ; 00554054
    FMULP ST3                           ; 0055405b
    ADD EBX,0x12                        ; 0055405d
    ADD ECX,0xc                         ; 00554060
    INC EDI                             ; 00554063
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00554064
    FXCH                                ; 00554067
    FSTP float ptr [ECX + -0xc]         ; 00554069 | DAT_0202a8a8
    FSTP float ptr [ECX + -0x8]         ; 0055406c | DAT_0202a8ac
    FSTP float ptr [ECX + -0x4]         ; 0055406f | DAT_0202a8b0
    CMP EDI,EAX                         ; 00554072
    JL 0x00553e97                       ; 00554074
        ;   XREF to: 00553e97 (CONDITIONAL_JUMP)  ; LAB_00553e97
    FSTP float ptr [ESP + 0x134]        ; 0055407a
    FSTP float ptr [ESP + 0x130]        ; 00554081
    MOV EDX,dword ptr [EBP + 0x18]      ; 00554088
        ;   Label: LAB_00554088
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055408b
    SUB EAX,EDX                         ; 00554092
    SHL EAX,0x2                         ; 00554094
    PUSH EAX                            ; 00554097
    PUSH 0x0                            ; 00554098
    PUSH 0x2070da8                      ; 0055409a | DAT_02070da8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0055409f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005540a4
    XOR ESI,ESI                         ; 005540a7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005540a9
    MOV EBX,dword ptr [EBP + 0x20]      ; 005540ac
    TEST EDX,EDX                        ; 005540af
    JLE 0x00553d20                      ; 005540b1
        ;   XREF to: 00553d20 (CONDITIONAL_JUMP)  ; LAB_00553d20
    MOV ECX,0x202a8a8                   ; 005540b7
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005540bc
    XOR EAX,EAX                         ; 005540bf
        ;   Label: LAB_005540bf
    MOV AX,word ptr [EBX]               ; 005540c1
    IMUL EAX,EAX,0xc                    ; 005540c4
    ADD EAX,0x2070da8                   ; 005540c7
    FLD float ptr [ECX]                 ; 005540cc | DAT_0202a8a8 | DAT_0202a8b4
    FADD float ptr [EAX]                ; 005540ce | DAT_02070da8
    FSTP float ptr [EAX]                ; 005540d0 | DAT_02070da8
    FLD float ptr [ECX + 0x4]           ; 005540d2 | DAT_0202a8ac | DAT_0202a8b8
    FADD float ptr [EAX + 0x4]          ; 005540d5 | DAT_02070dac
    FSTP float ptr [EAX + 0x4]          ; 005540d8 | DAT_02070dac
    FLD float ptr [ECX + 0x8]           ; 005540db | DAT_0202a8b0 | DAT_0202a8bc
    FADD float ptr [EAX + 0x8]          ; 005540de | DAT_02070db0
    FSTP float ptr [EAX + 0x8]          ; 005540e1 | DAT_02070db0
    XOR EAX,EAX                         ; 005540e4
    MOV AX,word ptr [EBX + 0x2]         ; 005540e6
    IMUL EAX,EAX,0xc                    ; 005540ea
    ADD EAX,0x2070da8                   ; 005540ed
    FLD float ptr [ECX]                 ; 005540f2 | DAT_0202a8a8
    FADD float ptr [EAX]                ; 005540f4 | DAT_02070da8
    FSTP float ptr [EAX]                ; 005540f6 | DAT_02070da8
    FLD float ptr [ECX + 0x4]           ; 005540f8 | DAT_0202a8ac
    FADD float ptr [EAX + 0x4]          ; 005540fb | DAT_02070dac
    FSTP float ptr [EAX + 0x4]          ; 005540fe | DAT_02070dac
    FLD float ptr [ECX + 0x8]           ; 00554101 | DAT_0202a8b0
    FADD float ptr [EAX + 0x8]          ; 00554104 | DAT_02070db0
    FSTP float ptr [EAX + 0x8]          ; 00554107 | DAT_02070db0
    XOR EAX,EAX                         ; 0055410a
    MOV AX,word ptr [EBX + 0x4]         ; 0055410c
    IMUL EAX,EAX,0xc                    ; 00554110
    ADD EAX,0x2070da8                   ; 00554113
    FLD float ptr [ECX]                 ; 00554118 | DAT_0202a8a8
    FADD float ptr [EAX]                ; 0055411a | DAT_02070da8
    ADD EBX,0x12                        ; 0055411c
    FSTP float ptr [EAX]                ; 0055411f | DAT_02070da8
    FLD float ptr [ECX + 0x4]           ; 00554121 | DAT_0202a8ac
    FADD float ptr [EAX + 0x4]          ; 00554124 | DAT_02070dac
    ADD ECX,0xc                         ; 00554127
    FSTP float ptr [EAX + 0x4]          ; 0055412a | DAT_02070dac
    FLD float ptr [ECX + -0x4]          ; 0055412d | DAT_0202a8b0
    FADD float ptr [EAX + 0x8]          ; 00554130 | DAT_02070db0
    INC ESI                             ; 00554133
    FSTP float ptr [EAX + 0x8]          ; 00554134 | DAT_02070db0
    CMP ESI,EDI                         ; 00554137
    JL 0x005540bf                       ; 00554139
        ;   XREF to: 005540bf (CONDITIONAL_JUMP)  ; LAB_005540bf
    JMP 0x00553d20                      ; 0055413b
        ;   XREF to: 00553d20 (UNCONDITIONAL_JUMP)  ; LAB_00553d20
    FLD float ptr [ESI + 0x4]           ; 00554140 | DAT_02070db8 | DAT_02070dac
        ;   Label: LAB_00554140
    FMUL ST0                            ; 00554143
    FLD float ptr [ESI]                 ; 00554145 | DAT_02070db4 | DAT_02070da8
    FMUL ST0                            ; 00554147
    FADDP                               ; 00554149
    FLD float ptr [ESI + 0x8]           ; 0055414b | DAT_02070dbc | DAT_02070db0
    FMUL ST0                            ; 0055414e
    FADDP                               ; 00554150
    FSTP float ptr [ESP + 0xf4]         ; 00554152
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00554159
    MOV EDX,dword ptr [0x01cc8050]      ; 00554160 | DAT_01cc8050
    SAR EAX,0x1                         ; 00554166
    SUB EDX,EAX                         ; 00554168
    MOV dword ptr [ESP + 0xf8],EDX      ; 0055416a
    FLD float ptr [ESP + 0xf8]          ; 00554171
    FMUL float ptr [0x005f0b56]         ; 00554178 | DAT_005f0b56
    FLD float ptr [ESI]                 ; 0055417e | DAT_02070db4 | DAT_02070da8
    FMUL ST1                            ; 00554180
    FLD float ptr [ESI + 0x4]           ; 00554182 | DAT_02070db8
    FMUL ST2                            ; 00554185
    FLD float ptr [ESI + 0x8]           ; 00554187 | DAT_02070dbc
    FMULP ST3                           ; 0055418a
    LEA EBX,[ESP + 0x90]                ; 0055418c
    MOV EAX,ESI                         ; 00554193
    FXCH                                ; 00554195
    FSTP float ptr [ESI]                ; 00554197 | DAT_02070db4
    FSTP float ptr [ESI + 0x4]          ; 00554199 | DAT_02070db8
    FSTP float ptr [ESI + 0x8]          ; 0055419c | DAT_02070dbc
    FLD float ptr [EAX]                 ; 0055419f | DAT_02070db4
    FISTP dword ptr [EBX]               ; 005541a1
    FLD float ptr [EAX + 0x4]           ; 005541a3 | DAT_02070db8
    FISTP dword ptr [EBX + 0x4]         ; 005541a6
    FLD float ptr [EAX + 0x8]           ; 005541a9 | DAT_02070dbc
    FISTP dword ptr [EBX + 0x8]         ; 005541ac
    PUSH 0x0                            ; 005541af
    PUSH EDI                            ; 005541b1
    LEA EAX,[ESP + 0x98]                ; 005541b2
    PUSH EAX                            ; 005541b9
    MOV ECX,dword ptr [ESP + 0x11c]     ; 005541ba
    PUSH ECX                            ; 005541c1
    MOV EBX,dword ptr [EBP + 0x14]      ; 005541c2
    PUSH EBX                            ; 005541c5
    JMP 0x00553dad                      ; 005541c6
        ;   XREF to: 00553dad (UNCONDITIONAL_JUMP)  ; LAB_00553dad
    CMP dword ptr [EBP + 0x18],0x0      ; 005541cb
        ;   Label: LAB_005541cb
    JLE 0x00553500                      ; 005541cf
        ;   XREF to: 00553500 (CONDITIONAL_JUMP)  ; LAB_00553500
    MOV ESI,0x2036428                   ; 005541d5
    MOV dword ptr [ESP + 0x120],EDI     ; 005541da
    MOV dword ptr [ESP + 0x124],ESI     ; 005541e1
    MOV ESI,0x2070da8                   ; 005541e8
    FLD float ptr [ESI + 0x4]           ; 005541ed | DAT_02070dac | DAT_02070db8
        ;   Label: LAB_005541ed
    FMUL ST0                            ; 005541f0
    FLD float ptr [ESI]                 ; 005541f2 | DAT_02070da8 | DAT_02070db4
    FMUL ST0                            ; 005541f4
    FADDP                               ; 005541f6
    FLD float ptr [ESI + 0x8]           ; 005541f8 | DAT_02070db0 | DAT_02070dbc
    FMUL ST0                            ; 005541fb
    FADDP                               ; 005541fd
    FSTP float ptr [ESP + 0x100]        ; 005541ff
    MOV EAX,dword ptr [ESP + 0x100]     ; 00554206
    MOV EDX,dword ptr [0x01cc8050]      ; 0055420d | DAT_01cc8050
    SAR EAX,0x1                         ; 00554213
    SUB EDX,EAX                         ; 00554215
    MOV dword ptr [ESP + 0x104],EDX     ; 00554217
    FLD float ptr [ESP + 0x104]         ; 0055421e
    FMUL float ptr [0x005f0b56]         ; 00554225 | DAT_005f0b56
    FLD float ptr [ESI]                 ; 0055422b | DAT_02070da8 | DAT_02070db4
    FMUL ST1                            ; 0055422d
    FLD float ptr [ESI + 0x4]           ; 0055422f | DAT_02070dac
    FMUL ST2                            ; 00554232
    FLD float ptr [ESI + 0x8]           ; 00554234 | DAT_02070db0
    FMULP ST3                           ; 00554237
    LEA EBX,[ESP + 0x6c]                ; 00554239
    MOV EAX,ESI                         ; 0055423d
    FXCH                                ; 0055423f
    FSTP float ptr [ESI]                ; 00554241 | DAT_02070da8
    FSTP float ptr [ESI + 0x4]          ; 00554243 | DAT_02070dac
    FSTP float ptr [ESI + 0x8]          ; 00554246 | DAT_02070db0
    FLD float ptr [EAX]                 ; 00554249 | DAT_02070da8
    FISTP dword ptr [EBX]               ; 0055424b
    FLD float ptr [EAX + 0x4]           ; 0055424d | DAT_02070dac
    FISTP dword ptr [EBX + 0x4]         ; 00554250
    FLD float ptr [EAX + 0x8]           ; 00554253 | DAT_02070db0
    FISTP dword ptr [EBX + 0x8]         ; 00554256
    PUSH 0x0                            ; 00554259
    PUSH EDI                            ; 0055425b
    LEA EAX,[ESP + 0x74]                ; 0055425c
    PUSH EAX                            ; 00554260
    MOV ECX,dword ptr [ESP + 0x130]     ; 00554261
    PUSH ECX                            ; 00554268
    MOV EBX,dword ptr [EBP + 0x14]      ; 00554269
    PUSH EBX                            ; 0055426c
    CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 ; 0055426d
        ;   XREF to: 00552710 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, ...)
    ADD ESP,0x14                        ; 00554272
    MOV EDX,dword ptr [ESP + 0x120]     ; 00554275
    MOV EAX,[0x01c51cac]                ; 0055427c | DAT_01c51cac
    ADD ESI,0xc                         ; 00554281
    MOV dword ptr [EDX + 0x629040],EAX  ; 00554284 | DAT_00629040
    LEA EAX,[EDX + 0x30]                ; 0055428a
    INC EDI                             ; 0055428d
    MOV EDX,dword ptr [ESP + 0x124]     ; 0055428e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00554295
    ADD EDX,0xc                         ; 00554298
    MOV dword ptr [ESP + 0x120],EAX     ; 0055429b
    MOV dword ptr [ESP + 0x124],EDX     ; 005542a2
    CMP EDI,ECX                         ; 005542a9
    JL 0x005541ed                       ; 005542ab
        ;   XREF to: 005541ed (CONDITIONAL_JUMP)  ; LAB_005541ed
    MOV ESP,EBP                         ; 005542b1
    POP EBP                             ; 005542b3
    POP EDI                             ; 005542b4
    POP ESI                             ; 005542b5
    POP EBX                             ; 005542b6
    RET                                 ; 005542b7

