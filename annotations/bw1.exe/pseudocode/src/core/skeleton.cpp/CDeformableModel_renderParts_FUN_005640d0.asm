; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_005640d0(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   part_visibility_flags
; int *            Stack[0x10]:4   texture_set_indices
; int              Stack[0x14]:4   render_flags
; int              Stack[0x18]:4   skip_texture_capture
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10 at 00569a49
;
; Referenced Globals:
;   undefined4 DAT_005f2005
;   undefined4 DAT_005f2009
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   undefined4 DAT_01d1dd30
;   undefined4 DAT_01d1dd34
;   undefined4 DAT_01d1dd38
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_FUN_005552f0
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005640d0
        ;   Label: core_skeleton.cpp_CDeformableModel_renderParts_FUN_005640d0
    PUSH ESI                            ; 005640d1
    PUSH EDI                            ; 005640d2
    PUSH EBP                            ; 005640d3
    MOV EBP,ESP                         ; 005640d4
    SUB ESP,0x120                       ; 005640d6
    AND ESP,0xfffffff8                  ; 005640dc
    MOV EDX,dword ptr [0x00612560]      ; 005640df | DAT_00612560
    PUSH EDX                            ; 005640e5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005640e6
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005640eb
    MOV dword ptr [ESP + 0xac],EAX      ; 005640ee
    MOV EAX,dword ptr [EBP + 0x18]      ; 005640f5
    MOV ECX,dword ptr [EBP + 0x14]      ; 005640f8
    SHL EAX,0x3                         ; 005640fb
    ADD EAX,ECX                         ; 005640fe
    MOV EAX,dword ptr [EAX + 0x8]       ; 00564100
    MOV dword ptr [ESP + 0xb0],EAX      ; 00564103
    TEST EAX,EAX                        ; 0056410a
    JZ 0x00564112                       ; 0056410c
        ;   XREF to: 00564112 (CONDITIONAL_JUMP)  ; LAB_00564112
    AND byte ptr [EBP + 0x24],0xfe      ; 0056410e
    PUSH 0x1                            ; 00564112
        ;   Label: LAB_00564112
    MOV ESI,dword ptr [0x00612560]      ; 00564114 | DAT_00612560
    PUSH ESI                            ; 0056411a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0056411b
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00564120
    XOR EDI,EDI                         ; 00564123
    MOV EAX,dword ptr [EBP + 0x14]      ; 00564125
    MOV dword ptr [ESP + 0x80],EDI      ; 00564128
    MOV EDX,dword ptr [EAX + 0xc00]     ; 0056412f
    MOV dword ptr [ESP + 0x74],EDI      ; 00564135
    TEST EDX,EDX                        ; 00564139
    JLE 0x0056424f                      ; 0056413b
        ;   XREF to: 0056424f (CONDITIONAL_JUMP)  ; LAB_0056424f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00564141
    MOV EDX,dword ptr [EBP + 0x14]      ; 00564144
    SHL EAX,0x2                         ; 00564147
    ADD EDX,EAX                         ; 0056414a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056414c
    MOV dword ptr [ESP + 0xa0],EDX      ; 0056414f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00564156
    ADD EAX,EDI                         ; 00564159
    ADD EDX,0xc0                        ; 0056415b
    MOV dword ptr [ESP + 0x68],EAX      ; 00564161
    MOV dword ptr [ESP + 0x9c],EDX      ; 00564165
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056416c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00564173
    MOV dword ptr [ESP + 0x90],EDX      ; 00564176
    MOV dword ptr [ESP + 0x84],EDX      ; 0056417d
    MOV dword ptr [ESP + 0x88],EDX      ; 00564184
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056418b
    MOV dword ptr [ESP + 0x78],EAX      ; 0056418e
    MOV dword ptr [ESP + 0x6c],EDX      ; 00564192
    MOV EAX,dword ptr [ESP + 0x68]      ; 00564196
        ;   Label: LAB_00564196
    MOV EDI,dword ptr [ESP + 0x80]      ; 0056419a
    MOV EDX,dword ptr [EAX + 0xc24]     ; 005641a1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005641a7
    ADD EDI,EDX                         ; 005641ab
    TEST byte ptr [EAX],0x1             ; 005641ad
    JZ 0x0056420d                       ; 005641b0
        ;   XREF to: 0056420d (CONDITIONAL_JUMP)  ; LAB_0056420d
    CMP dword ptr [ESP + 0xac],0x0      ; 005641b2
    JZ 0x005643cc                       ; 005641ba
        ;   XREF to: 005643cc (CONDITIONAL_JUMP)  ; LAB_005643cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005641c0
        ;   Label: LAB_005641c0
    CMP dword ptr [EAX + 0xbc],0x1      ; 005641c3
    JNZ 0x0056489a                      ; 005641ca
        ;   XREF to: 0056489a (CONDITIONAL_JUMP)  ; LAB_0056489a
    CMP dword ptr [ESP + 0xac],0x0      ; 005641d0
        ;   Label: LAB_005641d0
    JZ 0x005649a3                       ; 005641d8
        ;   XREF to: 005649a3 (CONDITIONAL_JUMP)  ; LAB_005649a3
    MOV ESI,dword ptr [EBP + 0x24]      ; 005641de
        ;   Label: LAB_005641de
    MOV EDX,dword ptr [ESP + 0x80]      ; 005641e1
    MOV EAX,EDI                         ; 005641e8
    PUSH ESI                            ; 005641ea
    SUB EAX,EDX                         ; 005641eb
    PUSH EAX                            ; 005641ed
    IMUL EAX,EDX,0x12                   ; 005641ee
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005641f1
    MOV EDX,dword ptr [EDX + 0x7c]      ; 005641f8
    ADD EAX,EDX                         ; 005641fb
    PUSH EAX                            ; 005641fd
    MOV EBX,dword ptr [0x00622c18]      ; 005641fe | g_CDemonSetPtr
    PUSH EBX                            ; 00564204 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005552f0      ; 00564205
        ;   XREF to: 005552f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005552f0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 0056420a
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0056420d
        ;   Label: LAB_0056420d
    MOV EBX,dword ptr [ESP + 0x68]      ; 00564211
    MOV ESI,dword ptr [ESP + 0x78]      ; 00564215
    MOV EDX,dword ptr [EBP + 0x14]      ; 00564219
    MOV dword ptr [ESP + 0x80],EDI      ; 0056421c
    MOV EDI,dword ptr [ESP + 0x74]      ; 00564223
    ADD ECX,0x4                         ; 00564227
    ADD EBX,0x60                        ; 0056422a
    ADD ESI,0x4                         ; 0056422d
    MOV dword ptr [ESP + 0x6c],ECX      ; 00564230
    MOV dword ptr [ESP + 0x68],EBX      ; 00564234
    MOV dword ptr [ESP + 0x78],ESI      ; 00564238
    INC EDI                             ; 0056423c
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0056423d
    MOV dword ptr [ESP + 0x74],EDI      ; 00564243
    CMP EDI,ECX                         ; 00564247
    JL 0x00564196                       ; 00564249
        ;   XREF to: 00564196 (CONDITIONAL_JUMP)  ; LAB_00564196
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056424f
        ;   Label: LAB_0056424f
    XOR EBX,EBX                         ; 00564252
    MOV ESI,dword ptr [EAX + 0xc00]     ; 00564254
    MOV dword ptr [ESP + 0x7c],EBX      ; 0056425a
    TEST ESI,ESI                        ; 0056425e
    JLE 0x005643a3                      ; 00564260
        ;   XREF to: 005643a3 (CONDITIONAL_JUMP)  ; LAB_005643a3
    ADD EAX,0xc0                        ; 00564266
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056426b
    MOV dword ptr [ESP + 0x8c],EAX      ; 0056426e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00564275
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00564278
    SHL EAX,0x2                         ; 0056427b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056427e
    ADD ESI,EAX                         ; 00564281
    ADD EAX,EBX                         ; 00564283
    MOV dword ptr [ESP + 0x64],EDX      ; 00564285
    MOV dword ptr [ESP + 0x70],EAX      ; 00564289
    MOV EDX,dword ptr [ESP + 0x70]      ; 0056428d
        ;   Label: LAB_0056428d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00564291
    MOV EDI,dword ptr [EDX + 0xc38]     ; 00564298
    ADD EAX,EDI                         ; 0056429e
    MOV dword ptr [ESP + 0xa8],EAX      ; 005642a0
    MOV EAX,0xffffffff                  ; 005642a7
    MOV EDX,dword ptr [ESP + 0x64]      ; 005642ac
    MOV dword ptr [ESP + 0xcc],EAX      ; 005642b0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005642b7
    MOV BL,byte ptr [EDX]               ; 005642bb
    SHL EAX,0x2                         ; 005642bd
    TEST BL,0x1                         ; 005642c0
    JZ 0x00564365                       ; 005642c3
        ;   XREF to: 00564365 (CONDITIONAL_JUMP)  ; LAB_00564365
    MOV ECX,dword ptr [ESP + 0xa8]      ; 005642c9
    MOV EBX,dword ptr [ESP + 0x80]      ; 005642d0
    CMP EBX,ECX                         ; 005642d7
    JGE 0x00564365                      ; 005642d9
        ;   XREF to: 00564365 (CONDITIONAL_JUMP)  ; LAB_00564365
    MOV EDX,dword ptr [EBP + 0x20]      ; 005642df
    ADD EDX,EAX                         ; 005642e2
    IMUL EAX,EBX,0x12                   ; 005642e4
    MOV dword ptr [ESP + 0xe8],EAX      ; 005642e7
    LEA EAX,[EBX*0x4 + 0x0]             ; 005642ee
    MOV dword ptr [ESP + 0x94],EDX      ; 005642f5
    MOV dword ptr [ESP + 0xe4],EAX      ; 005642fc
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00564303
        ;   Label: LAB_00564303
    MOV EAX,dword ptr [ESI + 0x7c]      ; 0056430a
    MOV EDI,dword ptr [ESI + 0x54]      ; 0056430d
    ADD EDX,EAX                         ; 00564310
    MOV EAX,EBX                         ; 00564312
    SUB EAX,EDI                         ; 00564314
    MOV EDI,dword ptr [ESI + 0xa4]      ; 00564316
    MOV dword ptr [ESP + 0xc4],EDX      ; 0056431c
    MOV EAX,dword ptr [EDI + EAX*0x4]   ; 00564323
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00564326
    SHL EAX,0x2                         ; 00564329
    ADD EAX,EDX                         ; 0056432c
    TEST byte ptr [EAX],0x1             ; 0056432e
    JZ 0x005649f2                       ; 00564331
        ;   XREF to: 005649f2 (CONDITIONAL_JUMP)  ; LAB_005649f2
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00564337
        ;   Label: LAB_00564337
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0056433e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00564345
    INC EBX                             ; 0056434c
    ADD EDI,0x12                        ; 0056434d
    ADD EAX,0x4                         ; 00564350
    MOV dword ptr [ESP + 0xe8],EDI      ; 00564353
    MOV dword ptr [ESP + 0xe4],EAX      ; 0056435a
    CMP EBX,EDX                         ; 00564361
    JL 0x00564303                       ; 00564363
        ;   XREF to: 00564303 (CONDITIONAL_JUMP)  ; LAB_00564303
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00564365
        ;   Label: LAB_00564365
    MOV EBX,dword ptr [ESP + 0x64]      ; 0056436c
    MOV EDI,dword ptr [ESP + 0x70]      ; 00564370
    MOV EDX,dword ptr [EBP + 0x14]      ; 00564374
    MOV dword ptr [ESP + 0x80],EAX      ; 00564377
    ADD EBX,0x4                         ; 0056437e
    ADD EDI,0x60                        ; 00564381
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00564384
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0056438a
    MOV dword ptr [ESP + 0x64],EBX      ; 0056438e
    INC EAX                             ; 00564392
    MOV dword ptr [ESP + 0x70],EDI      ; 00564393
    MOV dword ptr [ESP + 0x7c],EAX      ; 00564397
    CMP EAX,ECX                         ; 0056439b
    JL 0x0056428d                       ; 0056439d
        ;   XREF to: 0056428d (CONDITIONAL_JUMP)  ; LAB_0056428d
    PUSH 0x0                            ; 005643a3
        ;   Label: LAB_005643a3
    MOV EDX,dword ptr [0x00612560]      ; 005643a5 | DAT_00612560
    PUSH EDX                            ; 005643ab | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 005643ac
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005643b1
    PUSH 0x1                            ; 005643b4
    MOV ECX,dword ptr [0x00612560]      ; 005643b6 | DAT_00612560
    PUSH ECX                            ; 005643bc | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 005643bd
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005643c2
    MOV ESP,EBP                         ; 005643c5
    POP EBP                             ; 005643c7
    POP EDI                             ; 005643c8
    POP ESI                             ; 005643c9
    POP EBX                             ; 005643ca
    RET                                 ; 005643cb
    CMP dword ptr [ESP + 0xb0],0x0      ; 005643cc
        ;   Label: LAB_005643cc
    JZ 0x005641c0                       ; 005643d4
        ;   XREF to: 005641c0 (CONDITIONAL_JUMP)  ; LAB_005641c0
    PUSH 0x1                            ; 005643da
    MOV ESI,dword ptr [0x00612560]      ; 005643dc | DAT_00612560
    PUSH ESI                            ; 005643e2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 005643e3
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005643e8
    MOV EAX,dword ptr [ESP + 0x80]      ; 005643eb
    CMP EDI,EAX                         ; 005643f2
    JLE 0x0056420d                      ; 005643f4
        ;   XREF to: 0056420d (CONDITIONAL_JUMP)  ; LAB_0056420d
    IMUL EAX,EAX,0x12                   ; 005643fa
    MOV dword ptr [ESP + 0xec],EAX      ; 005643fd
    IMUL EAX,EDI,0x12                   ; 00564404
    MOV dword ptr [ESP + 0xa4],EAX      ; 00564407
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056440e
        ;   Label: LAB_0056440e
    MOV ESI,dword ptr [EAX + 0x7c]      ; 00564415
    ADD ESI,dword ptr [ESP + 0xec]      ; 00564418
    XOR ECX,ECX                         ; 0056441f
    MOV CX,word ptr [ESI + 0x2]         ; 00564421
    IMUL ECX,ECX,0x30                   ; 00564425
    XOR EAX,EAX                         ; 00564428
    MOV AX,word ptr [ESI]               ; 0056442a
    IMUL EDX,EAX,0x30                   ; 0056442d
    MOV EAX,[0x00612560]                ; 00564430 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 00564435 | DAT_01bc120c
    ADD EDX,EAX                         ; 00564437
    LEA EBX,[EAX + ECX*0x1]             ; 00564439
    XOR ECX,ECX                         ; 0056443c
    MOV CX,word ptr [ESI + 0x4]         ; 0056443e
    IMUL ECX,ECX,0x30                   ; 00564442
    ADD EAX,ECX                         ; 00564445
    MOV ECX,dword ptr [EDX + 0x4]       ; 00564447
    IMUL ECX,dword ptr [0x01d1dd24]     ; 0056444a | DAT_01d1dd24
    MOV dword ptr [ESP + 0x100],ECX     ; 00564451
    MOV ECX,dword ptr [EDX]             ; 00564458
    IMUL ECX,dword ptr [0x01d1dd18]     ; 0056445a | DAT_01d1dd18
    ADD ECX,dword ptr [ESP + 0x100]     ; 00564461
    MOV dword ptr [ESP + 0x104],ECX     ; 00564468
    MOV ECX,dword ptr [EDX + 0x8]       ; 0056446f
    IMUL ECX,dword ptr [0x01d1dd30]     ; 00564472 | DAT_01d1dd30
    MOV dword ptr [ESP + 0x100],ECX     ; 00564479
    MOV ECX,dword ptr [ESP + 0x104]     ; 00564480
    ADD ECX,dword ptr [ESP + 0x100]     ; 00564487
    MOV dword ptr [ESP + 0x100],ECX     ; 0056448e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00564495
    IMUL ECX,dword ptr [0x01d1dd28]     ; 00564498 | DAT_01d1dd28
    MOV dword ptr [ESP + 0x104],ECX     ; 0056449f
    MOV ECX,dword ptr [EDX]             ; 005644a6
    IMUL ECX,dword ptr [0x01d1dd1c]     ; 005644a8 | DAT_01d1dd1c
    ADD ECX,dword ptr [ESP + 0x104]     ; 005644af
    MOV dword ptr [ESP + 0x108],ECX     ; 005644b6
    MOV ECX,dword ptr [EDX + 0x8]       ; 005644bd
    IMUL ECX,dword ptr [0x01d1dd34]     ; 005644c0 | DAT_01d1dd34
    MOV dword ptr [ESP + 0x104],ECX     ; 005644c7
    MOV ECX,dword ptr [ESP + 0x108]     ; 005644ce
    ADD ECX,dword ptr [ESP + 0x104]     ; 005644d5
    MOV dword ptr [ESP + 0x104],ECX     ; 005644dc
    MOV ECX,dword ptr [EDX + 0x4]       ; 005644e3
    IMUL ECX,dword ptr [0x01d1dd2c]     ; 005644e6 | DAT_01d1dd2c
    MOV dword ptr [ESP + 0x108],ECX     ; 005644ed
    MOV ECX,dword ptr [EDX]             ; 005644f4
    IMUL ECX,dword ptr [0x01d1dd20]     ; 005644f6 | DAT_01d1dd20
    ADD ECX,dword ptr [ESP + 0x108]     ; 005644fd
    MOV EDX,dword ptr [EDX + 0x8]       ; 00564504
    MOV dword ptr [ESP + 0x108],ECX     ; 00564507
    IMUL EDX,dword ptr [0x01d1dd38]     ; 0056450e | DAT_01d1dd38
    ADD EDX,dword ptr [ESP + 0x108]     ; 00564515
    MOV ECX,dword ptr [0x01d1dd24]      ; 0056451c | DAT_01d1dd24
    MOV dword ptr [ESP + 0x108],EDX     ; 00564522
    IMUL ECX,dword ptr [EBX + 0x4]      ; 00564529
    MOV EDX,dword ptr [EBX]             ; 0056452d
    IMUL EDX,dword ptr [0x01d1dd18]     ; 0056452f | DAT_01d1dd18
    ADD EDX,ECX                         ; 00564536
    MOV ECX,dword ptr [0x01d1dd30]      ; 00564538 | DAT_01d1dd30
    MOV dword ptr [ESP + 0x10c],EDX     ; 0056453e
    MOV EDX,dword ptr [EBX + 0x8]       ; 00564545
    IMUL EDX,ECX                        ; 00564548
    ADD EDX,dword ptr [ESP + 0x10c]     ; 0056454b
    MOV ECX,dword ptr [0x01d1dd28]      ; 00564552 | DAT_01d1dd28
    MOV dword ptr [ESP + 0x10c],EDX     ; 00564558
    MOV EDX,dword ptr [EBX + 0x4]       ; 0056455f
    IMUL EDX,ECX                        ; 00564562
    MOV ECX,dword ptr [EBX]             ; 00564565
    IMUL ECX,dword ptr [0x01d1dd1c]     ; 00564567 | DAT_01d1dd1c
    ADD EDX,ECX                         ; 0056456e
    MOV ECX,dword ptr [EBX + 0x8]       ; 00564570
    IMUL ECX,dword ptr [0x01d1dd34]     ; 00564573 | DAT_01d1dd34
    ADD EDX,ECX                         ; 0056457a
    MOV ECX,dword ptr [0x01d1dd2c]      ; 0056457c | DAT_01d1dd2c
    MOV dword ptr [ESP + 0x110],EDX     ; 00564582
    MOV EDX,dword ptr [EBX + 0x4]       ; 00564589
    IMUL EDX,ECX                        ; 0056458c
    MOV ECX,dword ptr [EBX]             ; 0056458f
    IMUL ECX,dword ptr [0x01d1dd20]     ; 00564591 | DAT_01d1dd20
    ADD ECX,EDX                         ; 00564598
    MOV EDX,dword ptr [EBX + 0x8]       ; 0056459a
    IMUL EDX,dword ptr [0x01d1dd38]     ; 0056459d | DAT_01d1dd38
    ADD EDX,ECX                         ; 005645a4
    MOV EBX,dword ptr [0x01d1dd24]      ; 005645a6 | DAT_01d1dd24
    MOV dword ptr [ESP + 0x114],EDX     ; 005645ac
    MOV EDX,dword ptr [EAX + 0x4]       ; 005645b3
    IMUL EDX,EBX                        ; 005645b6
    MOV ECX,dword ptr [0x01d1dd18]      ; 005645b9 | DAT_01d1dd18
    MOV EBX,dword ptr [EAX]             ; 005645bf
    IMUL EBX,ECX                        ; 005645c1
    MOV ECX,dword ptr [0x01d1dd30]      ; 005645c4 | DAT_01d1dd30
    ADD EBX,EDX                         ; 005645ca
    MOV EDX,dword ptr [EAX + 0x8]       ; 005645cc
    IMUL EDX,ECX                        ; 005645cf
    ADD EDX,EBX                         ; 005645d2
    MOV dword ptr [ESP + 0x118],EDX     ; 005645d4
    MOV EBX,dword ptr [EAX + 0x4]       ; 005645db
    IMUL EBX,dword ptr [0x01d1dd28]     ; 005645de | DAT_01d1dd28
    MOV ECX,dword ptr [0x01d1dd1c]      ; 005645e5 | DAT_01d1dd1c
    MOV EDX,dword ptr [EAX]             ; 005645eb
    IMUL EDX,ECX                        ; 005645ed
    MOV ECX,dword ptr [0x01d1dd34]      ; 005645f0 | DAT_01d1dd34
    ADD EBX,EDX                         ; 005645f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005645f8
    IMUL EDX,ECX                        ; 005645fb
    ADD EBX,EDX                         ; 005645fe
    MOV EDX,dword ptr [0x01d1dd2c]      ; 00564600 | DAT_01d1dd2c
    MOV dword ptr [ESP + 0x11c],EBX     ; 00564606
    MOV EBX,dword ptr [EAX + 0x4]       ; 0056460d
    IMUL EBX,EDX                        ; 00564610
    MOV ECX,dword ptr [0x01d1dd20]      ; 00564613 | DAT_01d1dd20
    MOV EDX,dword ptr [EAX]             ; 00564619
    IMUL EDX,ECX                        ; 0056461b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0056461e
    ADD EBX,EDX                         ; 00564621
    IMUL EAX,dword ptr [0x01d1dd38]     ; 00564623 | DAT_01d1dd38
    FILD dword ptr [ESP + 0x100]        ; 0056462a
    FILD dword ptr [ESP + 0x104]        ; 00564631
    FILD dword ptr [ESP + 0x108]        ; 00564638
    FSTP float ptr [ESP + 0xb8]         ; 0056463f
    FILD dword ptr [ESP + 0x10c]        ; 00564646
    FST float ptr [ESP + 0xdc]          ; 0056464d
    FSUBRP ST2,ST0                      ; 00564654
    FILD dword ptr [ESP + 0x110]        ; 00564656
    FST float ptr [ESP + 0xd0]          ; 0056465d
    FSUBRP                              ; 00564664
    FXCH                                ; 00564666
    FSTP float ptr [ESP + 0xe0]         ; 00564668
    FSTP float ptr [ESP + 0xd8]         ; 0056466f
    FILD dword ptr [ESP + 0x114]        ; 00564676
    FSTP float ptr [ESP + 0xd4]         ; 0056467d
    FILD dword ptr [ESP + 0x118]        ; 00564684
    FSTP float ptr [ESP + 0xb4]         ; 0056468b
    ADD EBX,EAX                         ; 00564692
    FILD dword ptr [ESP + 0x11c]        ; 00564694
    MOV dword ptr [ESP + 0x11c],EBX     ; 0056469b
    FSTP float ptr [ESP + 0xbc]         ; 005646a2
    FILD dword ptr [ESP + 0x11c]        ; 005646a9
    FSTP float ptr [ESP + 0xc0]         ; 005646b0
    FLD float ptr [ESP + 0xd8]          ; 005646b7
    FLD float ptr [ESP + 0xd4]          ; 005646be
    FLD float ptr [ESP + 0xc0]          ; 005646c5
    FSUB ST0,ST1                        ; 005646cc
    FSTP float ptr [ESP + 0x60]         ; 005646ce
    FXCH                                ; 005646d2
    FMUL float ptr [ESP + 0x60]         ; 005646d4
    FLD float ptr [ESP + 0xbc]          ; 005646d8
    FSUB float ptr [ESP + 0xd0]         ; 005646df
    FLD float ptr [ESP + 0xe0]          ; 005646e6
    FMUL ST1                            ; 005646ed
    FLD float ptr [ESP + 0xb4]          ; 005646ef
    FXCH ST4                            ; 005646f6
    FSUB float ptr [ESP + 0xb8]         ; 005646f8
    FXCH ST4                            ; 005646ff
    FSUB float ptr [ESP + 0xdc]         ; 00564701
    FLD ST0                             ; 00564708
    FMUL ST5                            ; 0056470a
    FXCH ST3                            ; 0056470c
    FMULP ST5                           ; 0056470e
    FMUL float ptr [ESP + 0xd8]         ; 00564710
    FLD float ptr [ESP + 0xe0]          ; 00564717
    FXCH ST5                            ; 0056471e
    FSUBP ST4,ST0                       ; 00564720
    FXCH ST4                            ; 00564722
    FMUL float ptr [ESP + 0x60]         ; 00564724
    FXCH ST3                            ; 00564728
    FSTP float ptr [ESP + 0xfc]         ; 0056472a
    FXCH ST2                            ; 00564731
    FSUBP                               ; 00564733
    FLD float ptr [ESP + 0xfc]          ; 00564735
    FMUL ST0                            ; 0056473c
    FXCH                                ; 0056473e
    FST float ptr [ESP + 0xf4]          ; 00564740
    FMUL float ptr [ESP + 0xf4]         ; 00564747
    FXCH ST3                            ; 0056474e
    FSUBP ST2,ST0                       ; 00564750
    FADDP ST2,ST0                       ; 00564752
    FST float ptr [ESP + 0xf8]          ; 00564754
    FMUL float ptr [ESP + 0xf8]         ; 0056475b
    FADDP                               ; 00564762
    FLDZ                                ; 00564764
    FXCH                                ; 00564766
    FSTP float ptr [ESP]                ; 00564768
    FCOMP float ptr [ESP]               ; 0056476b
    FNSTSW AX                           ; 0056476e
    SAHF                                ; 00564770
    JNC 0x0056488e                      ; 00564771
        ;   XREF to: 0056488e (CONDITIONAL_JUMP)  ; LAB_0056488e
    FLD float ptr [ESP]                 ; 00564777
    FSQRT                               ; 0056477a
    FDIVR double ptr [0x005f2009]       ; 0056477c | DAT_005f2009
    FSTP float ptr [ESP]                ; 00564782
    FLD float ptr [ESP]                 ; 00564785
        ;   Label: LAB_00564785
    FLD float ptr [ESP + 0xfc]          ; 00564788
    FMUL ST1                            ; 0056478f
    FLD float ptr [ESP + 0xf4]          ; 00564791
    FMUL ST2                            ; 00564798
    FLD float ptr [ESP + 0xf8]          ; 0056479a
    FMULP ST3                           ; 005647a1
    FXCH                                ; 005647a3
    FSTP float ptr [ESP + 0xfc]         ; 005647a5
    FSTP float ptr [ESP + 0xf4]         ; 005647ac
    FST float ptr [ESP + 0xf8]          ; 005647b3
    FLD float ptr [ESP + 0xf4]          ; 005647ba
    FLD float ptr [ESP + 0xfc]          ; 005647c1
    FXCH ST2                            ; 005647c8
    FLD float ptr [0x005f2005]          ; 005647ca | DAT_005f2005
    FXCH                                ; 005647d0
    FADD ST0,ST1                        ; 005647d2
    FXCH ST2                            ; 005647d4
    FADD ST0,ST1                        ; 005647d6
    FXCH ST3                            ; 005647d8
    FADDP                               ; 005647da
    FXCH                                ; 005647dc
    CALL crt_math.c_round_FUN_005c03a0  ; 005647de
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 005647e3
    CALL crt_math.c_round_FUN_005c03a0  ; 005647e5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 005647ea
    FISTP dword ptr [ESP + 0x104]       ; 005647ec
    FXCH                                ; 005647f3
    FISTP dword ptr [ESP + 0x100]       ; 005647f5
    MOV EAX,dword ptr [ESP + 0x104]     ; 005647fc
    MOV EDX,dword ptr [ESP + 0x100]     ; 00564803
    PUSH EAX                            ; 0056480a
    CALL crt_math.c_round_FUN_005c03a0  ; 0056480b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EDX                            ; 00564810
    FISTP dword ptr [ESP + 0x108]       ; 00564811
    MOV ECX,dword ptr [ESP + 0x108]     ; 00564818
    PUSH ECX                            ; 0056481f
    MOV EBX,dword ptr [0x00612560]      ; 00564820 | DAT_00612560
    PUSH EBX                            ; 00564826 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0 ; 00564827
        ;   XREF to: 00483cf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,0x3                         ; 0056482c
    ADD ESP,0x10                        ; 00564831
    MOV dword ptr [ESP + 0x8],EAX       ; 00564834
    XOR EAX,EAX                         ; 00564838
    MOV AX,word ptr [ESI]               ; 0056483a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056483d
    XOR EAX,EAX                         ; 00564841
    MOV AX,word ptr [ESI + 0x2]         ; 00564843
    MOV dword ptr [ESP + 0x28],EAX      ; 00564847
    XOR EAX,EAX                         ; 0056484b
    MOV AX,word ptr [ESI + 0x4]         ; 0056484d
    MOV dword ptr [ESP + 0x34],EAX      ; 00564851
    LEA EAX,[ESP + 0x4]                 ; 00564855
    PUSH EAX                            ; 00564859
    MOV EDX,dword ptr [0x00612560]      ; 0056485a | DAT_00612560
    PUSH EDX                            ; 00564860 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 00564861
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00564866
    MOV ECX,dword ptr [ESP + 0xec]      ; 00564869
    ADD ECX,0x12                        ; 00564870
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00564873
    MOV dword ptr [ESP + 0xec],ECX      ; 0056487a
    CMP ECX,EBX                         ; 00564881
    JGE 0x0056420d                      ; 00564883
        ;   XREF to: 0056420d (CONDITIONAL_JUMP)  ; LAB_0056420d
    JMP 0x0056440e                      ; 00564889
        ;   XREF to: 0056440e (UNCONDITIONAL_JUMP)  ; LAB_0056440e
    MOV dword ptr [ESP],0x42fe0000      ; 0056488e
        ;   Label: LAB_0056488e
    JMP 0x00564785                      ; 00564895
        ;   XREF to: 00564785 (UNCONDITIONAL_JUMP)  ; LAB_00564785
    CMP dword ptr [ESP + 0xac],0x0      ; 0056489a
        ;   Label: LAB_0056489a
    JNZ 0x005641d0                      ; 005648a2
        ;   XREF to: 005641d0 (CONDITIONAL_JUMP)  ; LAB_005641d0
    CMP dword ptr [EBP + 0x28],0x0      ; 005648a8
    JNZ 0x005641d0                      ; 005648ac
        ;   XREF to: 005641d0 (CONDITIONAL_JUMP)  ; LAB_005641d0
    CMP dword ptr [ESP + 0xb0],0x0      ; 005648b2
    JNZ 0x005641d0                      ; 005648ba
        ;   XREF to: 005641d0 (CONDITIONAL_JUMP)  ; LAB_005641d0
    MOV dword ptr [ESP + 0xc8],0xffffffff ; 005648c0
    MOV EAX,dword ptr [ESP + 0x80]      ; 005648cb
    MOV dword ptr [ESP + 0xf0],EAX      ; 005648d2
    CMP EDI,EAX                         ; 005648d9
    JLE 0x0056420d                      ; 005648db
        ;   XREF to: 0056420d (CONDITIONAL_JUMP)  ; LAB_0056420d
    MOV EAX,dword ptr [ESP + 0x78]      ; 005648e1
    MOV dword ptr [ESP + 0x98],EAX      ; 005648e5
    MOV EDX,dword ptr [ESP + 0x84]      ; 005648ec
        ;   Label: LAB_005648ec
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005648f3
    MOV EDX,dword ptr [EDX + 0x90]      ; 005648fa
    LEA EBX,[EAX + 0x1]                 ; 00564900
    MOV ESI,dword ptr [EDX + EAX*0x4]   ; 00564903
    CMP EBX,EDI                         ; 00564906
    JGE 0x00564928                      ; 00564908
        ;   XREF to: 00564928 (CONDITIONAL_JUMP)  ; LAB_00564928
    MOV EDX,dword ptr [ESP + 0x90]      ; 0056490a
    LEA EAX,[EBX*0x4 + 0x0]             ; 00564911
    MOV EDX,dword ptr [EDX + 0x90]      ; 00564918
    ADD EAX,EDX                         ; 0056491e
    CMP ESI,dword ptr [EAX]             ; 00564920
        ;   Label: LAB_00564920
    JZ 0x005649e1                       ; 00564922
        ;   XREF to: 005649e1 (CONDITIONAL_JUMP)  ; LAB_005649e1
    CMP ESI,dword ptr [ESP + 0xc8]      ; 00564928
        ;   Label: LAB_00564928
    JZ 0x00564960                       ; 0056492f
        ;   XREF to: 00564960 (CONDITIONAL_JUMP)  ; LAB_00564960
    MOV EAX,dword ptr [ESP + 0x98]      ; 00564931
    IMUL EAX,dword ptr [EAX],0x240      ; 00564938
    IMUL EDX,ESI,0x48                   ; 0056493e
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00564941
    ADD EAX,EDX                         ; 00564948
    PUSH EAX                            ; 0056494a
    MOV EAX,[0x00612560]                ; 0056494b | DAT_00612560
    PUSH EAX                            ; 00564950 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00564951
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00564956
    MOV dword ptr [ESP + 0xc8],ESI      ; 00564959
    MOV EAX,dword ptr [EBP + 0x24]      ; 00564960
        ;   Label: LAB_00564960
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00564963
    PUSH EAX                            ; 0056496a
    MOV EAX,EBX                         ; 0056496b
    SUB EAX,EDX                         ; 0056496d
    PUSH EAX                            ; 0056496f
    IMUL EAX,EDX,0x12                   ; 00564970
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00564973
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0056497a
    ADD EAX,EDX                         ; 0056497d
    PUSH EAX                            ; 0056497f
    MOV ESI,dword ptr [0x00622c18]      ; 00564980 | g_CDemonSetPtr
    PUSH ESI                            ; 00564986 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005552f0      ; 00564987
        ;   XREF to: 005552f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005552f0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 0056498c
    MOV dword ptr [ESP + 0xf0],EBX      ; 0056498f
    CMP EBX,EDI                         ; 00564996
    JL 0x005648ec                       ; 00564998
        ;   XREF to: 005648ec (CONDITIONAL_JUMP)  ; LAB_005648ec
    JMP 0x0056420d                      ; 0056499e
        ;   XREF to: 0056420d (UNCONDITIONAL_JUMP)  ; LAB_0056420d
    CMP dword ptr [EBP + 0x28],0x0      ; 005649a3
        ;   Label: LAB_005649a3
    JNZ 0x005641de                      ; 005649a7
        ;   XREF to: 005641de (CONDITIONAL_JUMP)  ; LAB_005641de
    CMP dword ptr [ESP + 0xb0],0x0      ; 005649ad
    JNZ 0x005641de                      ; 005649b5
        ;   XREF to: 005641de (CONDITIONAL_JUMP)  ; LAB_005641de
    MOV EAX,dword ptr [ESP + 0x78]      ; 005649bb
    IMUL EAX,dword ptr [EAX],0x240      ; 005649bf
    ADD EAX,dword ptr [ESP + 0x9c]      ; 005649c5
    PUSH EAX                            ; 005649cc
    MOV EBX,dword ptr [0x00612560]      ; 005649cd | DAT_00612560
    PUSH EBX                            ; 005649d3 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 005649d4
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005649d9
    JMP 0x005641de                      ; 005649dc
        ;   XREF to: 005641de (UNCONDITIONAL_JUMP)  ; LAB_005641de
    INC EBX                             ; 005649e1
        ;   Label: LAB_005649e1
    ADD EAX,0x4                         ; 005649e2
    CMP EBX,EDI                         ; 005649e5
    JL 0x00564920                       ; 005649e7
        ;   XREF to: 00564920 (CONDITIONAL_JUMP)  ; LAB_00564920
    JMP 0x00564928                      ; 005649ed
        ;   XREF to: 00564928 (UNCONDITIONAL_JUMP)  ; LAB_00564928
    CMP dword ptr [ESP + 0xac],0x0      ; 005649f2
        ;   Label: LAB_005649f2
    JNZ 0x00564a57                      ; 005649fa
        ;   XREF to: 00564a57 (CONDITIONAL_JUMP)  ; LAB_00564a57
    CMP dword ptr [EBP + 0x28],0x0      ; 005649fc
    JNZ 0x00564a57                      ; 00564a00
        ;   XREF to: 00564a57 (CONDITIONAL_JUMP)  ; LAB_00564a57
    CMP dword ptr [ESP + 0xb0],0x0      ; 00564a02
    JNZ 0x00564a57                      ; 00564a0a
        ;   XREF to: 00564a57 (CONDITIONAL_JUMP)  ; LAB_00564a57
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00564a0c
    MOV EAX,dword ptr [ESI + 0x90]      ; 00564a13
    ADD EAX,EDX                         ; 00564a19
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00564a1b
    MOV EDI,dword ptr [EAX]             ; 00564a22
    CMP EDI,ECX                         ; 00564a24
    JZ 0x00564a57                       ; 00564a26
        ;   XREF to: 00564a57 (CONDITIONAL_JUMP)  ; LAB_00564a57
    MOV EAX,dword ptr [ESP + 0x94]      ; 00564a28
    IMUL EAX,dword ptr [EAX],0x240      ; 00564a2f
    IMUL EDX,EDI,0x48                   ; 00564a35
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00564a38
    ADD EAX,EDX                         ; 00564a3f
    PUSH EAX                            ; 00564a41
    MOV EAX,[0x00612560]                ; 00564a42 | DAT_00612560
    PUSH EAX                            ; 00564a47 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00564a48
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00564a4d
    MOV dword ptr [ESP + 0xcc],EDI      ; 00564a50
    MOV EDX,dword ptr [EBP + 0x24]      ; 00564a57
        ;   Label: LAB_00564a57
    PUSH EDX                            ; 00564a5a
    PUSH 0x1                            ; 00564a5b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00564a5d
    PUSH ECX                            ; 00564a64
    MOV EDI,dword ptr [0x00622c18]      ; 00564a65 | g_CDemonSetPtr
    PUSH EDI                            ; 00564a6b | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005552f0      ; 00564a6c
        ;   XREF to: 005552f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005552f0(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 00564a71
    JMP 0x00564337                      ; 00564a74
        ;   XREF to: 00564337 (UNCONDITIONAL_JUMP)  ; LAB_00564337

