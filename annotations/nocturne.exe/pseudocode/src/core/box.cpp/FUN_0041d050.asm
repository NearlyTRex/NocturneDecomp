; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_0041d050(float *param_1)
;
; Local Variables:
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
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 at 0041ceba
;
; Referenced Globals:
;   undefined4 DAT_0059aa80
;   undefined4 DAT_005ae700
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d050
        ;   Label: core_box.cpp_FUN_0041d050
    PUSH ESI                            ; 0041d051
    PUSH EDI                            ; 0041d052
    PUSH EBP                            ; 0041d053
    SUB ESP,0x5c                        ; 0041d054
    MOV EBP,0xff                        ; 0041d057
    XOR EDX,EDX                         ; 0041d05c
    XOR EDI,EDI                         ; 0041d05e
    XOR ESI,ESI                         ; 0041d060
    MOV dword ptr [ESP + 0x58],EDX      ; 0041d062
    PUSH EDI                            ; 0041d066
        ;   Label: LAB_0041d066
    LEA EAX,[ESP + 0x44]                ; 0041d067
    PUSH EAX                            ; 0041d06b
    MOV ECX,dword ptr [ESP + 0x78]      ; 0041d06c
    PUSH ECX                            ; 0041d070
    LEA EBX,[ESP + 0x58]                ; 0041d071
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0041d075
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70()
    ADD ESP,0xc                         ; 0041d07a
    LEA EAX,[ESP + 0x40]                ; 0041d07d
    MOV EDX,dword ptr [0x005ae700]      ; 0041d081 | DAT_005ae700
    FLD float ptr [EAX]                 ; 0041d087
    FMUL float ptr [0x0059aa80]         ; 0041d089 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041d08f
    FLD float ptr [EAX + 0x4]           ; 0041d091
    FMUL float ptr [0x0059aa80]         ; 0041d094 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041d09a
    FLD float ptr [EAX + 0x8]           ; 0041d09d
    FMUL float ptr [0x0059aa80]         ; 0041d0a0 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041d0a6
    LEA EAX,[ESP + 0x4c]                ; 0041d0a9
    PUSH EAX                            ; 0041d0ad
    MOV EAX,dword ptr [EDX]             ; 0041d0ae | DAT_01b4d738
    ADD EAX,ESI                         ; 0041d0b0
    PUSH EAX                            ; 0041d0b2
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0041d0b3
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 0041d0b8 | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 0041d0bd | DAT_01b4d738
    MOV DL,byte ptr [ESI + EAX*0x1 + 0x13] ; 0041d0bf
    ADD ESP,0x8                         ; 0041d0c3
    TEST DL,0x80                        ; 0041d0c6
    JNZ 0x0041d421                      ; 0041d0c9
        ;   XREF to: 0041d421 (CONDITIONAL_JUMP)  ; LAB_0041d421
    XOR EBP,EBP                         ; 0041d0cf
    INC EDI                             ; 0041d0d1
        ;   Label: LAB_0041d0d1
    ADD ESI,0x30                        ; 0041d0d2
    CMP EDI,0x8                         ; 0041d0d5
    JL 0x0041d066                       ; 0041d0d8
        ;   XREF to: 0041d066 (CONDITIONAL_JUMP)  ; LAB_0041d066
    TEST EBP,EBP                        ; 0041d0da
    JNZ 0x0041d43c                      ; 0041d0dc
        ;   XREF to: 0041d43c (CONDITIONAL_JUMP)  ; LAB_0041d43c
    MOV ECX,dword ptr [ESP + 0x58]      ; 0041d0e2
    PUSH ECX                            ; 0041d0e6
    MOV EBX,dword ptr [0x005ae704]      ; 0041d0e7 | DAT_005ae704
    PUSH EBX                            ; 0041d0ed | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0041d0ee
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    ADD ESP,0x8                         ; 0041d0f3
    PUSH EBP                            ; 0041d0f6
    MOV EDI,dword ptr [0x005ae704]      ; 0041d0f7 | DAT_005ae704
    MOV ESI,0x4                         ; 0041d0fd
    PUSH EDI                            ; 0041d102 | DAT_01b4d738
    MOV dword ptr [ESP + 0xc],ESI       ; 0041d103
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 0041d107
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0()
    ADD ESP,0x8                         ; 0041d10c
    LEA EBX,[ESP + 0x34]                ; 0041d10f
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041d113
    FLD float ptr [EAX]                 ; 0041d117
    FMUL float ptr [0x0059aa80]         ; 0041d119 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041d11f
    FLD float ptr [EAX + 0x4]           ; 0041d121
    FMUL float ptr [0x0059aa80]         ; 0041d124 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041d12a
    FLD float ptr [EAX + 0x8]           ; 0041d12d
    FMUL float ptr [0x0059aa80]         ; 0041d130 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041d136
    LEA EBX,[ESP + 0x28]                ; 0041d139
    ADD EAX,0xc                         ; 0041d13d
    MOV ESI,0x1                         ; 0041d140
    FLD float ptr [EAX]                 ; 0041d145
    FMUL float ptr [0x0059aa80]         ; 0041d147 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041d14d
    FLD float ptr [EAX + 0x4]           ; 0041d14f
    FMUL float ptr [0x0059aa80]         ; 0041d152 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041d158
    FLD float ptr [EAX + 0x8]           ; 0041d15b
    FMUL float ptr [0x0059aa80]         ; 0041d15e | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041d164
    XOR EAX,EAX                         ; 0041d167
    MOV EBP,0xffffffff                  ; 0041d169
    MOV dword ptr [ESP + 0xc],EAX       ; 0041d16e
    MOV dword ptr [ESP + 0x10],EAX      ; 0041d172
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d176
    MOV EDI,ESI                         ; 0041d17a
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d17c
    MOV ECX,EAX                         ; 0041d180
    LEA EAX,[ESP + 0x8]                 ; 0041d182
    NEG ECX                             ; 0041d186
    PUSH EAX                            ; 0041d188
    MOV dword ptr [ESP + 0xc],EBP       ; 0041d189
    MOV dword ptr [ESP + 0x18],ECX      ; 0041d18d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d191
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d196
    TEST EAX,EAX                        ; 0041d199
    JZ 0x0041d1da                       ; 0041d19b
        ;   XREF to: 0041d1da (CONDITIONAL_JUMP)  ; LAB_0041d1da
    MOV ESI,0x4                         ; 0041d19d
    MOV EAX,0x2                         ; 0041d1a2
    MOV EBP,0x6                         ; 0041d1a7
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d1ac
    MOV EAX,ESP                         ; 0041d1b0
    XOR EBX,EBX                         ; 0041d1b2
    PUSH EAX                            ; 0041d1b4
    MOV EDX,dword ptr [0x005be368]      ; 0041d1b5 | DAT_005be368
    MOV dword ptr [ESP + 0x1c],EBX      ; 0041d1bb
    PUSH EDX                            ; 0041d1bf | DAT_01e57284
    MOV dword ptr [ESP + 0x24],ESI      ; 0041d1c0
    MOV dword ptr [ESP + 0x28],EBP      ; 0041d1c4
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d1c8
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d1cd
    TEST EAX,EAX                        ; 0041d1d0
    JNZ 0x0041d3f6                      ; 0041d1d2
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d1d8
    MOV ECX,0x1                         ; 0041d1da
        ;   Label: LAB_0041d1da
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d1df
    XOR EBX,EBX                         ; 0041d1e3
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d1e5
    LEA EAX,[ESP + 0x8]                 ; 0041d1e9
    MOV dword ptr [ESP + 0x8],ECX       ; 0041d1ed
    PUSH EAX                            ; 0041d1f1
    MOV dword ptr [ESP + 0x10],EBX      ; 0041d1f2
    MOV dword ptr [ESP + 0x14],EBX      ; 0041d1f6
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d1fa
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d1ff
    TEST EAX,EAX                        ; 0041d202
    JZ 0x0041d246                       ; 0041d204
        ;   XREF to: 0041d246 (CONDITIONAL_JUMP)  ; LAB_0041d246
    MOV EAX,0x1                         ; 0041d206
    MOV EDX,0x3                         ; 0041d20b
    MOV ECX,0x7                         ; 0041d210
    MOV dword ptr [ESP + 0x18],EAX      ; 0041d215
    MOV EAX,ESP                         ; 0041d219
    MOV EBX,0x5                         ; 0041d21b
    PUSH EAX                            ; 0041d220
    MOV ESI,dword ptr [0x005be368]      ; 0041d221 | DAT_005be368
    MOV dword ptr [ESP + 0x20],EDX      ; 0041d227
    PUSH ESI                            ; 0041d22b | DAT_01e57284
    MOV dword ptr [ESP + 0x28],ECX      ; 0041d22c
    MOV dword ptr [ESP + 0x2c],EBX      ; 0041d230
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d234
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d239
    TEST EAX,EAX                        ; 0041d23c
    JNZ 0x0041d3f6                      ; 0041d23e
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d244
    MOV EAX,0xffffffff                  ; 0041d246
        ;   Label: LAB_0041d246
    XOR EBP,EBP                         ; 0041d24b
    MOV dword ptr [ESP + 0xc],EAX       ; 0041d24d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d251
    MOV dword ptr [ESP + 0x8],EBP       ; 0041d255
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d259
    MOV ECX,EAX                         ; 0041d25d
    LEA EAX,[ESP + 0x8]                 ; 0041d25f
    NEG ECX                             ; 0041d263
    PUSH EAX                            ; 0041d265
    MOV dword ptr [ESP + 0x14],EBP      ; 0041d266
    MOV dword ptr [ESP + 0x18],ECX      ; 0041d26a
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d26e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d273
    TEST EAX,EAX                        ; 0041d276
    JZ 0x0041d2b5                       ; 0041d278
        ;   XREF to: 0041d2b5 (CONDITIONAL_JUMP)  ; LAB_0041d2b5
    MOV EAX,0x4                         ; 0041d27a
    MOV ESI,0x1                         ; 0041d27f
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d284
    MOV EAX,ESP                         ; 0041d288
    MOV EDX,dword ptr [0x005be368]      ; 0041d28a | DAT_005be368
    PUSH EAX                            ; 0041d290
    MOV dword ptr [ESP + 0x1c],EBP      ; 0041d291
    MOV EBP,0x5                         ; 0041d295
    PUSH EDX                            ; 0041d29a | DAT_01e57284
    MOV dword ptr [ESP + 0x24],ESI      ; 0041d29b
    MOV dword ptr [ESP + 0x28],EBP      ; 0041d29f
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d2a3
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d2a8
    TEST EAX,EAX                        ; 0041d2ab
    JNZ 0x0041d3f6                      ; 0041d2ad
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d2b3
    MOV EBX,0x1                         ; 0041d2b5
        ;   Label: LAB_0041d2b5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041d2ba
    XOR ECX,ECX                         ; 0041d2be
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d2c0
    LEA EAX,[ESP + 0x8]                 ; 0041d2c4
    MOV dword ptr [ESP + 0x8],ECX       ; 0041d2c8
    PUSH EAX                            ; 0041d2cc
    MOV dword ptr [ESP + 0x10],EBX      ; 0041d2cd
    MOV dword ptr [ESP + 0x14],ECX      ; 0041d2d1
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d2d5
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d2da
    TEST EAX,EAX                        ; 0041d2dd
    JZ 0x0041d321                       ; 0041d2df
        ;   XREF to: 0041d321 (CONDITIONAL_JUMP)  ; LAB_0041d321
    MOV EAX,0x2                         ; 0041d2e1
    MOV EDX,0x6                         ; 0041d2e6
    MOV ECX,0x7                         ; 0041d2eb
    MOV dword ptr [ESP + 0x18],EAX      ; 0041d2f0
    MOV EAX,ESP                         ; 0041d2f4
    MOV EBX,0x3                         ; 0041d2f6
    PUSH EAX                            ; 0041d2fb
    MOV ESI,dword ptr [0x005be368]      ; 0041d2fc | DAT_005be368
    MOV dword ptr [ESP + 0x20],EDX      ; 0041d302
    PUSH ESI                            ; 0041d306 | DAT_01e57284
    MOV dword ptr [ESP + 0x28],ECX      ; 0041d307
    MOV dword ptr [ESP + 0x2c],EBX      ; 0041d30b
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d30f
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d314
    TEST EAX,EAX                        ; 0041d317
    JNZ 0x0041d3f6                      ; 0041d319
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d31f
    MOV EDX,0xffffffff                  ; 0041d321
        ;   Label: LAB_0041d321
    XOR EBP,EBP                         ; 0041d326
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041d328
    MOV dword ptr [ESP + 0x8],EBP       ; 0041d32c
    MOV dword ptr [ESP + 0xc],EBP       ; 0041d330
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d334
    MOV ECX,EAX                         ; 0041d338
    LEA EAX,[ESP + 0x8]                 ; 0041d33a
    NEG ECX                             ; 0041d33e
    PUSH EAX                            ; 0041d340
    MOV dword ptr [ESP + 0x14],EDX      ; 0041d341
    MOV dword ptr [ESP + 0x18],ECX      ; 0041d345
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d349
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d34e
    TEST EAX,EAX                        ; 0041d351
    JZ 0x0041d38c                       ; 0041d353
        ;   XREF to: 0041d38c (CONDITIONAL_JUMP)  ; LAB_0041d38c
    MOV EAX,0x1                         ; 0041d355
    MOV ESI,0x2                         ; 0041d35a
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d35f
    MOV EAX,ESP                         ; 0041d363
    MOV EDX,dword ptr [0x005be368]      ; 0041d365 | DAT_005be368
    PUSH EAX                            ; 0041d36b
    MOV dword ptr [ESP + 0x1c],EBP      ; 0041d36c
    MOV EBP,0x3                         ; 0041d370
    PUSH EDX                            ; 0041d375 | DAT_01e57284
    MOV dword ptr [ESP + 0x24],ESI      ; 0041d376
    MOV dword ptr [ESP + 0x28],EBP      ; 0041d37a
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d37e
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d383
    TEST EAX,EAX                        ; 0041d386
    JNZ 0x0041d3f6                      ; 0041d388
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d38a
    MOV EBP,0x1                         ; 0041d38c
        ;   Label: LAB_0041d38c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041d391
    XOR ECX,ECX                         ; 0041d395
    MOV dword ptr [ESP + 0x14],EAX      ; 0041d397
    LEA EAX,[ESP + 0x8]                 ; 0041d39b
    MOV dword ptr [ESP + 0x8],ECX       ; 0041d39f
    PUSH EAX                            ; 0041d3a3
    MOV dword ptr [ESP + 0x10],ECX      ; 0041d3a4
    MOV dword ptr [ESP + 0x14],EBP      ; 0041d3a8
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0041d3ac
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0041d3b1
    TEST EAX,EAX                        ; 0041d3b4
    JZ 0x0041d3f4                       ; 0041d3b6
        ;   XREF to: 0041d3f4 (CONDITIONAL_JUMP)  ; LAB_0041d3f4
    MOV EAX,0x4                         ; 0041d3b8
    MOV EDX,0x5                         ; 0041d3bd
    MOV ECX,0x7                         ; 0041d3c2
    MOV dword ptr [ESP + 0x18],EAX      ; 0041d3c7
    MOV EAX,ESP                         ; 0041d3cb
    MOV EBX,0x6                         ; 0041d3cd
    PUSH EAX                            ; 0041d3d2
    MOV ESI,dword ptr [0x005be368]      ; 0041d3d3 | DAT_005be368
    MOV dword ptr [ESP + 0x20],EDX      ; 0041d3d9
    PUSH ESI                            ; 0041d3dd | DAT_01e57284
    MOV dword ptr [ESP + 0x28],ECX      ; 0041d3de
    MOV dword ptr [ESP + 0x2c],EBX      ; 0041d3e2
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 ; 0041d3e6
        ;   XREF to: 0050e490 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490()
    ADD ESP,0x8                         ; 0041d3eb
    TEST EAX,EAX                        ; 0041d3ee
    JNZ 0x0041d3f6                      ; 0041d3f0
        ;   XREF to: 0041d3f6 (CONDITIONAL_JUMP)  ; LAB_0041d3f6
    XOR ESI,ESI                         ; 0041d3f2
    MOV EDI,ESI                         ; 0041d3f4
        ;   Label: LAB_0041d3f4
    PUSH 0x1                            ; 0041d3f6
        ;   Label: LAB_0041d3f6
    MOV EBP,dword ptr [0x005ae704]      ; 0041d3f8 | DAT_005ae704
    PUSH EBP                            ; 0041d3fe | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0041d3ff
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    ADD ESP,0x8                         ; 0041d404
    PUSH 0x1                            ; 0041d407
    MOV EAX,[0x005ae704]                ; 0041d409 | DAT_005ae704
    PUSH EAX                            ; 0041d40e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 0041d40f
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0()
    ADD ESP,0x8                         ; 0041d414
    MOV EAX,EDI                         ; 0041d417
    ADD ESP,0x5c                        ; 0041d419
    POP EBP                             ; 0041d41c
    POP EDI                             ; 0041d41d
    POP ESI                             ; 0041d41e
    POP EBX                             ; 0041d41f
    RET                                 ; 0041d420
    MOV EAX,[0x005ae700]                ; 0041d421 | DAT_005ae700
        ;   Label: LAB_0041d421
    MOV EAX,dword ptr [EAX]             ; 0041d426 | DAT_01b4d738
    MOV EBX,0x1                         ; 0041d428
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x10] ; 0041d42d
    MOV dword ptr [ESP + 0x58],EBX      ; 0041d431
    AND EBP,EDX                         ; 0041d435
    JMP 0x0041d0d1                      ; 0041d437
        ;   XREF to: 0041d0d1 (UNCONDITIONAL_JUMP)  ; LAB_0041d0d1
    XOR EAX,EAX                         ; 0041d43c
        ;   Label: LAB_0041d43c
    ADD ESP,0x5c                        ; 0041d43e
    POP EBP                             ; 0041d441
    POP EDI                             ; 0041d442
    POP ESI                             ; 0041d443
    POP EBX                             ; 0041d444
    RET                                 ; 0041d445

