; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; int[935]         Stack[-0x1034]:3740  aiStackY_1034
; char[256]        Stack[-0x14c]:256  local_14c
; int[4]           Stack[-0x48]:16  local_48
; int              Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; _FILE *          Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047de1a
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0062001b
;   TerminatedCString s_wt_0062002e
;   TerminatedCString s_Can_t_create_s_00620031
;   TerminatedCString s_S3D_version_00620041
;   TerminatedCString s_s_103_00620052
;   TerminatedCString s_numTextures_numTris_numV_00620057
;   TerminatedCString s_d_d_d_1_d_0_0_006200a0
;   TerminatedCString s_partList_firstVert_numVe_006200b3
;   TerminatedCString s_s_0_d_0_d_s_006200ec
;   TerminatedCString s_texture_list_name_006200fc
;   TerminatedCString s_s_00620113
;   TerminatedCString s_triList_materialIndex_ve_00620117
;   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0062014e
;   TerminatedCString s_vertList_x_y_z_00620170
;   TerminatedCString s_g_g_g_00620184
;   ... and 7 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c_splitpath_FUN_005ff178
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479f30
        ;   Label: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
    PUSH ESI                            ; 00479f31
    PUSH EBP                            ; 00479f32
    SUB ESP,0x140                       ; 00479f33
    MOV ESI,dword ptr [ESP + 0x154]     ; 00479f39
    PUSH 0x75b                          ; 00479f40
    PUSH 0x62001b                       ; 00479f45 | = "..\\core\\dmodel.cpp"
    PUSH 0x62002e                       ; 00479f4a | = "wt"
    PUSH 0x0                            ; 00479f4f
    PUSH ESI                            ; 00479f51
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00479f52
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00479f57
    MOV EBX,EAX                         ; 00479f5a
    MOV dword ptr [ESP + 0x134],EAX     ; 00479f5c
    TEST EAX,EAX                        ; 00479f63
    JZ 0x0047a345                       ; 00479f65
        ;   XREF to: 0047a345 (CONDITIONAL_JUMP)  ; LAB_0047a345
    PUSH EDI                            ; 00479f6b
    PUSH 0x620041                       ; 00479f6c | = "// .S3D version\n"
    PUSH EAX                            ; 00479f71
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479f72
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00479f77
    PUSH 0x620052                       ; 00479f7a | = "103\n"
    PUSH EBX                            ; 00479f7f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479f80
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00479f85
    MOV EDX,dword ptr [ESP + 0x154]     ; 00479f88
    XOR EBP,EBP                         ; 00479f8f
    MOV ECX,dword ptr [EDX + 0x110]     ; 00479f91
    XOR EAX,EAX                         ; 00479f97
    TEST ECX,ECX                        ; 00479f99
    JLE 0x00479fc0                      ; 00479f9b
        ;   XREF to: 00479fc0 (CONDITIONAL_JUMP)  ; LAB_00479fc0
    MOV EBX,dword ptr [EDX + 0x114]     ; 00479f9d
    MOV EDX,dword ptr [EBX + 0x4]       ; 00479fa3
        ;   Label: LAB_00479fa3
    SUB EDX,0x2                         ; 00479fa6
    ADD EBP,EDX                         ; 00479fa9
    MOV EDX,dword ptr [ESP + 0x154]     ; 00479fab
    INC EAX                             ; 00479fb2
    MOV EDI,dword ptr [EDX + 0x110]     ; 00479fb3
    ADD EBX,0x48                        ; 00479fb9
    CMP EAX,EDI                         ; 00479fbc
    JL 0x00479fa3                       ; 00479fbe
        ;   XREF to: 00479fa3 (CONDITIONAL_JUMP)  ; LAB_00479fa3
    PUSH 0x620057                       ; 00479fc0 | = "// numTextures,numTris,numVerts,numPa..."
        ;   Label: LAB_00479fc0
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00479fc5
    PUSH EAX                            ; 00479fcc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479fcd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00479fd2
    MOV EAX,dword ptr [ESP + 0x154]     ; 00479fd5
    MOV EDX,dword ptr [EAX + 0x100]     ; 00479fdc
    PUSH EDX                            ; 00479fe2
    MOV ECX,dword ptr [EAX + 0x104]     ; 00479fe3
    PUSH ECX                            ; 00479fe9
    PUSH EBP                            ; 00479fea
    MOV EBX,dword ptr [EAX + 0x120]     ; 00479feb
    PUSH EBX                            ; 00479ff1
    PUSH 0x6200a0                       ; 00479ff2 | = "%d,%d,%d,1,%d,0,0\n"
    MOV EDI,dword ptr [ESP + 0x14c]     ; 00479ff7
    PUSH EDI                            ; 00479ffe
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479fff
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0047a004
    PUSH 0x0                            ; 0047a007
    LEA EAX,[ESP + 0x8]                 ; 0047a009
    PUSH EAX                            ; 0047a00d
    PUSH 0x0                            ; 0047a00e
    PUSH 0x0                            ; 0047a010
    PUSH ESI                            ; 0047a012
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047a013
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0047a018
    PUSH 0x6200b3                       ; 0047a01b | = "// partList: firstVert,numVerts,first..."
    PUSH EDI                            ; 0047a020
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a021
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a026
    LEA EAX,[ESP + 0x4]                 ; 0047a029
    PUSH EAX                            ; 0047a02d
    MOV EAX,dword ptr [ESP + 0x158]     ; 0047a02e
    PUSH EBP                            ; 0047a035
    MOV EDX,dword ptr [EAX + 0x104]     ; 0047a036
    PUSH EDX                            ; 0047a03c
    PUSH 0x6200ec                       ; 0047a03d | = "0,%d,0,%d,\"%s\"\n"
    PUSH EDI                            ; 0047a042
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a043
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0047a048
    PUSH 0x6200fc                       ; 0047a04b | = "// texture list: name\n"
    PUSH EDI                            ; 0047a050
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a051
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a056
    MOV EAX,dword ptr [ESP + 0x154]     ; 0047a059
    MOV EBX,EDI                         ; 0047a060
    MOV ESI,dword ptr [EAX + 0x120]     ; 0047a062
    XOR EBX,EDI                         ; 0047a068
    TEST ESI,ESI                        ; 0047a06a
    JLE 0x0047a0a0                      ; 0047a06c
        ;   XREF to: 0047a0a0 (CONDITIONAL_JUMP)  ; LAB_0047a0a0
    MOV EDI,dword ptr [ESP + 0x138]     ; 0047a06e
    LEA EBP,[EAX + 0x12c]               ; 0047a075
    PUSH EBP                            ; 0047a07b
        ;   Label: LAB_0047a07b
    PUSH 0x620113                       ; 0047a07c | = "%s\n"
    PUSH EDI                            ; 0047a081
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a082
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0047a087
    MOV EAX,dword ptr [ESP + 0x154]     ; 0047a08a
    INC EBX                             ; 0047a091
    MOV EDX,dword ptr [EAX + 0x120]     ; 0047a092
    ADD EBP,0x48                        ; 0047a098
    CMP EBX,EDX                         ; 0047a09b
    JL 0x0047a07b                       ; 0047a09d
        ;   XREF to: 0047a07b (CONDITIONAL_JUMP)  ; LAB_0047a07b
    NOP                                 ; 0047a09f
    PUSH 0x620117                       ; 0047a0a0 | = "// triList: materialIndex,vertices(in..."
        ;   Label: LAB_0047a0a0
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0047a0a5
    PUSH ECX                            ; 0047a0ac
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a0ad
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a0b2
    MOV EAX,dword ptr [ESP + 0x154]     ; 0047a0b5
    XOR EBX,EBX                         ; 0047a0bc
    MOV ESI,dword ptr [EAX + 0x110]     ; 0047a0be
    MOV dword ptr [ESP + 0x130],EBX     ; 0047a0c4
    TEST ESI,ESI                        ; 0047a0cb
    JLE 0x0047a2c0                      ; 0047a0cd
        ;   XREF to: 0047a2c0 (CONDITIONAL_JUMP)  ; LAB_0047a2c0
    MOV dword ptr [ESP + 0x12c],EBX     ; 0047a0d3
    MOV dword ptr [ESP + 0x128],EBX     ; 0047a0da
    MOV EAX,dword ptr [ESP + 0x154]     ; 0047a0e1
        ;   Label: LAB_0047a0e1
    MOV EDX,dword ptr [ESP + 0x128]     ; 0047a0e8
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047a0ef
    ADD EDX,EAX                         ; 0047a0f5
    MOV EBP,0x2                         ; 0047a0f7
    MOV dword ptr [ESP + 0x13c],EDX     ; 0047a0fc
    CMP EBP,dword ptr [EDX + 0x4]       ; 0047a103
    JGE 0x0047a27a                      ; 0047a106
        ;   XREF to: 0047a27a (CONDITIONAL_JUMP)  ; LAB_0047a27a
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0047a10c
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0047a113
    ADD EBX,0xc                         ; 0047a11a
    MOV dword ptr [ESP + 0x134],EAX     ; 0047a11d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0047a124
        ;   Label: LAB_0047a124
    LEA EDI,[ESP + 0x104]               ; 0047a12b
    LEA ESI,[ESI + 0x18]                ; 0047a132
    JMP 0x0060a318                      ; 0047a135
        ;   XREF to: 0060a318 (UNCONDITIONAL_JUMP)  ; LAB_0060a318
    LEA ESI,[EBX + 0x18]                ; 0047a13f
        ;   Label: LAB_0047a13f
    JMP 0x0060a33a                      ; 0047a142
        ;   XREF to: 0060a33a (UNCONDITIONAL_JUMP)  ; LAB_0060a33a
    LEA ESI,[EBX + 0x24]                ; 0047a14c
        ;   Label: LAB_0047a14c
    JMP 0x0060a35c                      ; 0047a14f
        ;   XREF to: 0060a35c (UNCONDITIONAL_JUMP)  ; LAB_0060a35c
    MOV dword ptr [ESP + 0x140],EAX     ; 0047a159
        ;   Label: LAB_0047a159
    FILD dword ptr [ESP + 0x140]        ; 0047a160
    SUB ESP,0x8                         ; 0047a167
    MOV EAX,dword ptr [ESP + 0x128]     ; 0047a16a
    FMUL double ptr [0x0062021b]        ; 0047a171 | DOUBLE_0062021b
    MOV dword ptr [ESP + 0x148],EAX     ; 0047a177
    FILD dword ptr [ESP + 0x148]        ; 0047a17e
    FMUL double ptr [0x0062021b]        ; 0047a185 | DOUBLE_0062021b
    FXCH                                ; 0047a18b
    FSTP double ptr [ESP]               ; 0047a18d
    SUB ESP,0x8                         ; 0047a190
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0047a193
    MOV EAX,dword ptr [ESP + 0x128]     ; 0047a19a
    FSTP double ptr [ESP]               ; 0047a1a1
    MOV dword ptr [ESP + 0x150],EAX     ; 0047a1a4
    PUSH EDX                            ; 0047a1ab
    FILD dword ptr [ESP + 0x154]        ; 0047a1ac
    SUB ESP,0x8                         ; 0047a1b3
    MOV EAX,dword ptr [ESP + 0x130]     ; 0047a1b6
    FMUL double ptr [0x0062021b]        ; 0047a1bd | DOUBLE_0062021b
    MOV dword ptr [ESP + 0x15c],EAX     ; 0047a1c3
    FILD dword ptr [ESP + 0x15c]        ; 0047a1ca
    FMUL double ptr [0x0062021b]        ; 0047a1d1 | DOUBLE_0062021b
    FXCH                                ; 0047a1d7
    FSTP double ptr [ESP]               ; 0047a1d9
    SUB ESP,0x8                         ; 0047a1dc
    MOV ECX,dword ptr [ESP + 0x134]     ; 0047a1df
    MOV EAX,dword ptr [ESP + 0x130]     ; 0047a1e6
    FSTP double ptr [ESP]               ; 0047a1ed
    MOV dword ptr [ESP + 0x164],EAX     ; 0047a1f0
    PUSH ECX                            ; 0047a1f7
    FILD dword ptr [ESP + 0x168]        ; 0047a1f8
    SUB ESP,0x8                         ; 0047a1ff
    MOV EAX,dword ptr [ESP + 0x138]     ; 0047a202
    FMUL double ptr [0x0062021b]        ; 0047a209 | DOUBLE_0062021b
    MOV dword ptr [ESP + 0x170],EAX     ; 0047a20f
    FILD dword ptr [ESP + 0x170]        ; 0047a216
    FMUL double ptr [0x0062021b]        ; 0047a21d | DOUBLE_0062021b
    FXCH                                ; 0047a223
    FSTP double ptr [ESP]               ; 0047a225
    SUB ESP,0x8                         ; 0047a228
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0047a22b
    MOV EDI,dword ptr [ESP + 0x16c]     ; 0047a232
    FSTP double ptr [ESP]               ; 0047a239
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047a23c
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0047a242
    ADD EAX,EDI                         ; 0047a249
    PUSH ESI                            ; 0047a24b
    MOV EDX,dword ptr [EAX]             ; 0047a24c
    PUSH EDX                            ; 0047a24e
    PUSH 0x62014e                       ; 0047a24f | = "%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n"
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0047a254
    PUSH ECX                            ; 0047a25b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a25c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x48                        ; 0047a261
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0047a264
    INC EBP                             ; 0047a26b
    MOV ESI,dword ptr [EAX + 0x4]       ; 0047a26c
    ADD EBX,0xc                         ; 0047a26f
    CMP EBP,ESI                         ; 0047a272
    JL 0x0047a124                       ; 0047a274
        ;   XREF to: 0047a124 (CONDITIONAL_JUMP)  ; LAB_0047a124
    MOV EDI,dword ptr [ESP + 0x128]     ; 0047a27a
        ;   Label: LAB_0047a27a
    MOV EBP,dword ptr [ESP + 0x12c]     ; 0047a281
    MOV EAX,dword ptr [ESP + 0x130]     ; 0047a288
    MOV EDX,dword ptr [ESP + 0x154]     ; 0047a28f
    ADD EDI,0x48                        ; 0047a296
    ADD EBP,0x4                         ; 0047a299
    INC EAX                             ; 0047a29c
    MOV ECX,dword ptr [EDX + 0x110]     ; 0047a29d
    MOV dword ptr [ESP + 0x128],EDI     ; 0047a2a3
    MOV dword ptr [ESP + 0x12c],EBP     ; 0047a2aa
    MOV dword ptr [ESP + 0x130],EAX     ; 0047a2b1
    CMP EAX,ECX                         ; 0047a2b8
    JL 0x0047a0e1                       ; 0047a2ba
        ;   XREF to: 0047a0e1 (CONDITIONAL_JUMP)  ; LAB_0047a0e1
    PUSH 0x620170                       ; 0047a2c0 | = "// vertList: x,y,z\n"
        ;   Label: LAB_0047a2c0
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0047a2c5
    PUSH EBX                            ; 0047a2cc
    XOR EBP,EBP                         ; 0047a2cd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a2cf
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a2d4
    XOR EBX,EBX                         ; 0047a2d7
    POP EDI                             ; 0047a2d9
    MOV EDX,dword ptr [ESP + 0x150]     ; 0047a2da
        ;   Label: LAB_0047a2da
    MOV EAX,dword ptr [ESP + 0x150]     ; 0047a2e1
    MOV ECX,dword ptr [EDX + 0x100]     ; 0047a2e8
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047a2ee
    IMUL EAX,ECX                        ; 0047a2f4
    CMP EBP,EAX                         ; 0047a2f7
    JGE 0x0047a364                      ; 0047a2f9
        ;   XREF to: 0047a364 (CONDITIONAL_JUMP)  ; LAB_0047a364
    MOV EAX,dword ptr [EDX + 0x10c]     ; 0047a2fb
    FLD double ptr [0x00620213]         ; 0047a301 | DOUBLE_00620213
    FILD dword ptr [EBX + EAX*0x1 + 0x8] ; 0047a307
    FMUL ST1                            ; 0047a30b
    SUB ESP,0x8                         ; 0047a30d
    FSTP double ptr [ESP]               ; 0047a310
    FILD dword ptr [EBX + EAX*0x1 + 0x4] ; 0047a313
    FMUL ST1                            ; 0047a317
    SUB ESP,0x8                         ; 0047a319
    FSTP double ptr [ESP]               ; 0047a31c
    FILD dword ptr [EBX + EAX*0x1]      ; 0047a31f
    FMULP                               ; 0047a322
    SUB ESP,0x8                         ; 0047a324
    FSTP double ptr [ESP]               ; 0047a327
    PUSH 0x620184                       ; 0047a32a | = "%g,%g,%g\n"
    MOV EAX,dword ptr [ESP + 0x150]     ; 0047a32f
    PUSH EAX                            ; 0047a336
    ADD EBX,0xc                         ; 0047a337
    INC EBP                             ; 0047a33a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a33b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0047a340
    JMP 0x0047a2da                      ; 0047a343
        ;   XREF to: 0047a2da (UNCONDITIONAL_JUMP)  ; LAB_0047a2da
    PUSH ESI                            ; 0047a345
        ;   Label: LAB_0047a345
    PUSH 0x620031                       ; 0047a346 | = "Can't create %s"
    MOV EBX,dword ptr [0x00678a60]      ; 0047a34b | g_CEditorToolsPtr
    PUSH EBX                            ; 0047a351 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047a352
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047a357
    ADD ESP,0x140                       ; 0047a35a
    POP EBP                             ; 0047a360
    POP ESI                             ; 0047a361
    POP EBX                             ; 0047a362
    RET                                 ; 0047a363
    PUSH 0x62018e                       ; 0047a364 | = "// lightList: \"name\", type, x,y,z, ..."
        ;   Label: LAB_0047a364
    MOV EBX,dword ptr [ESP + 0x138]     ; 0047a369
    PUSH EBX                            ; 0047a370
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a371
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a376
    PUSH 0x6201ce                       ; 0047a379 | = "// cameraList: \"name\", x,y,z, p,b,h..."
    PUSH EBX                            ; 0047a37e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047a37f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0047a384
    PUSH 0x7a0                          ; 0047a387
    PUSH 0x6201fd                       ; 0047a38c | = "..\\core\\dmodel.cpp"
    PUSH EBX                            ; 0047a391
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0047a392
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047a397
    ADD ESP,0x140                       ; 0047a39a
    POP EBP                             ; 0047a3a0
    POP ESI                             ; 0047a3a1
    POP EBX                             ; 0047a3a2
    RET                                 ; 0047a3a3
    MOV ECX,dword ptr [ESI]             ; 0060a318
        ;   Label: LAB_0060a318
    MOV dword ptr [EDI],ECX             ; 0060a31a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a31c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a31f
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a322
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a325
    ADD ESI,0xc                         ; 0060a328
    ADD EDI,0xc                         ; 0060a32b
    LEA EDI,[ESP + 0x110]               ; 0060a32e
    JMP 0x0047a13f                      ; 0060a335
        ;   XREF to: 0047a13f (UNCONDITIONAL_JUMP)  ; LAB_0047a13f
    MOV ECX,dword ptr [ESI]             ; 0060a33a
        ;   Label: LAB_0060a33a
    MOV dword ptr [EDI],ECX             ; 0060a33c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a33e
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a341
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a344
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a347
    ADD ESI,0xc                         ; 0060a34a
    ADD EDI,0xc                         ; 0060a34d
    LEA EDI,[ESP + 0x11c]               ; 0060a350
    JMP 0x0047a14c                      ; 0060a357
        ;   XREF to: 0047a14c (UNCONDITIONAL_JUMP)  ; LAB_0047a14c
    MOV ECX,dword ptr [ESI]             ; 0060a35c
        ;   Label: LAB_0060a35c
    MOV dword ptr [EDI],ECX             ; 0060a35e
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a360
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a363
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a366
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a369
    ADD ESI,0xc                         ; 0060a36c
    ADD EDI,0xc                         ; 0060a36f
    MOV EAX,dword ptr [ESP + 0x124]     ; 0060a372
    JMP 0x0047a159                      ; 0060a379
        ;   XREF to: 0047a159 (UNCONDITIONAL_JUMP)  ; LAB_0047a159

