; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x8]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
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
;   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 at 0058f0be
;
; Referenced Globals:
;   TerminatedCString s_version_0064b1ef
;   TerminatedCString s_d_0064b1fb
;   TerminatedCString s_lodCount_textureSetCount_0064b1ff
;   TerminatedCString s_d_d_d_d_d_0064b23d
;   TerminatedCString s_Lod_list_VertexCount_tri_0064b24d
;   TerminatedCString s_d_d_d_d_d_0064b297
;   TerminatedCString s_skeleton_file_0064b2a7
;   TerminatedCString s_s_0064b2b9
;   TerminatedCString s_partList_name_dominantBo_0064b2bd
;   TerminatedCString s_s_d_0064b318
;   TerminatedCString s_d_0064b322
;   TerminatedCString s_d_d_0064b327
;   TerminatedCString s_vertexList_boneCount_bon_0064b330
;   TerminatedCString s_d_0064b36a
;   TerminatedCString s_d_g_g_g_g_0064b36e
;   ... and 19 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x74                           ; 0058f120
        ;   Label: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058f125
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058f12a
    PUSH ESI                            ; 0058f12b
    PUSH EDI                            ; 0058f12c
    PUSH EBP                            ; 0058f12d
    SUB ESP,0x30                        ; 0058f12e
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058f131
    PUSH EDX                            ; 0058f135
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0058f136
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058f13b
    PUSH 0x64b1ef                       ; 0058f13e | = "// version\n"
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0058f143
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0058f147
    PUSH ECX                            ; 0058f14d
    MOV dword ptr [ESP + 0x8],EAX       ; 0058f14e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f152
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f157
    MOV EBX,dword ptr [0x00681864]      ; 0058f15a | INT_00681864
    PUSH EBX                            ; 0058f160
    PUSH 0x64b1fb                       ; 0058f161 | = "%d\n"
    MOV ESI,dword ptr [ESP + 0x50]      ; 0058f166
    PUSH ESI                            ; 0058f16a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f16b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f170
    PUSH 0x64b1ff                       ; 0058f173 | = "// lodCount,textureSetCount,textureCo..."
    PUSH ESI                            ; 0058f178
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f179
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f17e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f181
    MOV EBP,dword ptr [EAX + 0x7140]    ; 0058f185
    PUSH EBP                            ; 0058f18b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058f18c
    PUSH EAX                            ; 0058f190
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0058f191
    MOV EDX,dword ptr [EAX + 0xbc]      ; 0058f195
    PUSH EDX                            ; 0058f19b
    MOV ECX,dword ptr [EAX + 0xb8]      ; 0058f19c
    PUSH ECX                            ; 0058f1a2
    MOV EBX,dword ptr [EAX]             ; 0058f1a3
    PUSH EBX                            ; 0058f1a5
    PUSH 0x64b23d                       ; 0058f1a6 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0058f1ab
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f1ac
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0058f1b1
    PUSH 0x64b24d                       ; 0058f1b4 | = "// Lod list: VertexCount,triCount,cap..."
    PUSH ESI                            ; 0058f1b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f1ba
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f1bf
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f1c2
    MOV EDI,ESI                         ; 0058f1c6
    MOV EBP,dword ptr [EAX]             ; 0058f1c8
    XOR EDI,ESI                         ; 0058f1ca
    TEST EBP,EBP                        ; 0058f1cc
    JLE 0x0058f210                      ; 0058f1ce
        ;   XREF to: 0058f210 (CONDITIONAL_JUMP)  ; LAB_0058f210
    MOV ESI,EAX                         ; 0058f1d0
    MOV EBX,EAX                         ; 0058f1d2
    MOV EAX,dword ptr [ESI + 0x8]       ; 0058f1d4
        ;   Label: LAB_0058f1d4
    PUSH EAX                            ; 0058f1d7
    MOV EDX,dword ptr [ESI + 0x4]       ; 0058f1d8
    PUSH EDX                            ; 0058f1db
    MOV ECX,dword ptr [EBX + 0x68]      ; 0058f1dc
    PUSH ECX                            ; 0058f1df
    MOV EBP,dword ptr [EBX + 0x54]      ; 0058f1e0
    PUSH EBP                            ; 0058f1e3
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0058f1e4
    PUSH EAX                            ; 0058f1e7
    PUSH 0x64b297                       ; 0058f1e8 | = "%d,%d,%d,%d,%d\n"
    MOV EDX,dword ptr [ESP + 0x60]      ; 0058f1ed
    PUSH EDX                            ; 0058f1f1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f1f2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0058f1f7
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f1fa
    ADD EBX,0x4                         ; 0058f1fe
    INC EDI                             ; 0058f201
    MOV ECX,dword ptr [EAX]             ; 0058f202
    ADD ESI,0x8                         ; 0058f204
    CMP EDI,ECX                         ; 0058f207
    JL 0x0058f1d4                       ; 0058f209
        ;   XREF to: 0058f1d4 (CONDITIONAL_JUMP)  ; LAB_0058f1d4
    LEA EAX,[EAX]                       ; 0058f20b
    MOV ECX,ECX                         ; 0058f20e
    PUSH 0x64b2a7                       ; 0058f210 | = "// skeleton file\n"
        ;   Label: LAB_0058f210
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058f215
    PUSH EBX                            ; 0058f219
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f21a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f21f
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f222
    ADD EAX,0x8f5c                      ; 0058f226
    PUSH EAX                            ; 0058f22b
    PUSH 0x64b2b9                       ; 0058f22c | = "%s\n"
    PUSH EBX                            ; 0058f231
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f232
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f237
    PUSH 0x64b2bd                       ; 0058f23a | = "// partList: \"name\", dominantBone, ..."
    PUSH EBX                            ; 0058f23f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f240
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f245
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f248
    XOR EBP,EBP                         ; 0058f24c
    MOV EDX,dword ptr [EAX + 0x7140]    ; 0058f24e
    MOV dword ptr [ESP + 0x1c],EBP      ; 0058f254
    TEST EDX,EDX                        ; 0058f258
    JLE 0x0058f2f6                      ; 0058f25a
        ;   XREF to: 0058f2f6 (CONDITIONAL_JUMP)  ; LAB_0058f2f6
    ADD EAX,0x7144                      ; 0058f260
    MOV EBP,dword ptr [ESP + 0x44]      ; 0058f265
    MOV dword ptr [ESP + 0x4],EAX       ; 0058f269
    IMUL EDI,dword ptr [ESP + 0x1c],0x60 ; 0058f26d
        ;   Label: LAB_0058f26d
    MOV EBX,dword ptr [EBP + 0x718c]    ; 0058f272
    PUSH EBX                            ; 0058f278
    MOV ESI,dword ptr [EBP + 0x71a0]    ; 0058f279
    PUSH ESI                            ; 0058f27f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058f280
    PUSH EAX                            ; 0058f284
    PUSH 0x64b318                       ; 0058f285 | = "\"%s\", %d\n"
    MOV EDX,dword ptr [ESP + 0x58]      ; 0058f28a
    PUSH EDX                            ; 0058f28e
    XOR EBX,EBX                         ; 0058f28f
    XOR ESI,ESI                         ; 0058f291
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f293
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058f298
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f29b
        ;   Label: LAB_0058f29b
    ADD EAX,EDI                         ; 0058f29f
    CMP EBX,dword ptr [EAX + 0x718c]    ; 0058f2a1
    JGE 0x0058f3cb                      ; 0058f2a7
        ;   XREF to: 0058f3cb (CONDITIONAL_JUMP)  ; LAB_0058f3cb
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x7190] ; 0058f2ad
    PUSH EDX                            ; 0058f2b4
    PUSH 0x64b322                       ; 0058f2b5 | = "\t%d\n"
    MOV ECX,dword ptr [ESP + 0x50]      ; 0058f2ba
    PUSH ECX                            ; 0058f2be
    ADD ESI,0x4                         ; 0058f2bf
    INC EBX                             ; 0058f2c2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f2c3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f2c8
    JMP 0x0058f29b                      ; 0058f2cb
        ;   XREF to: 0058f29b (UNCONDITIONAL_JUMP)  ; LAB_0058f29b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0058f2cd
        ;   Label: LAB_0058f2cd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0058f2d1
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058f2d5
    ADD EBP,0x60                        ; 0058f2d9
    ADD ECX,0x60                        ; 0058f2dc
    INC EBX                             ; 0058f2df
    MOV ESI,dword ptr [EDX + 0x7140]    ; 0058f2e0
    MOV dword ptr [ESP + 0x4],ECX       ; 0058f2e6
    MOV dword ptr [ESP + 0x1c],EBX      ; 0058f2ea
    CMP EBX,ESI                         ; 0058f2ee
    JL 0x0058f26d                       ; 0058f2f0
        ;   XREF to: 0058f26d (CONDITIONAL_JUMP)  ; LAB_0058f26d
    PUSH 0x64b330                       ; 0058f2f6 | = "// vertexList: boneCount, boneInfo(in..."
        ;   Label: LAB_0058f2f6
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0058f2fb
    PUSH EDI                            ; 0058f2ff
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f300
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f305
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f308
    XOR EBP,EBP                         ; 0058f30c
    MOV EDX,dword ptr [EAX]             ; 0058f30e
    MOV dword ptr [ESP + 0x18],EBP      ; 0058f310
    TEST EDX,EDX                        ; 0058f314
    JLE 0x0058f433                      ; 0058f316
        ;   XREF to: 0058f433 (CONDITIONAL_JUMP)  ; LAB_0058f433
    MOV dword ptr [ESP + 0x8],EBP       ; 0058f31c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058f320
        ;   Label: LAB_0058f320
    XOR EBX,EBX                         ; 0058f324
    MOV dword ptr [ESP + 0x20],EAX      ; 0058f326
    MOV dword ptr [ESP + 0x24],EBX      ; 0058f32a
    MOV dword ptr [ESP + 0x28],EBX      ; 0058f32e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f332
        ;   Label: LAB_0058f332
    ADD EAX,dword ptr [ESP + 0x20]      ; 0058f336
    MOV EDX,dword ptr [ESP + 0x28]      ; 0058f33a
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0058f33e
    JGE 0x0058f411                      ; 0058f341
        ;   XREF to: 0058f411 (CONDITIONAL_JUMP)  ; LAB_0058f411
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058f347
    MOV EAX,dword ptr [EAX + 0x40]      ; 0058f34b
    ADD EDX,EAX                         ; 0058f34e
    XOR EAX,EAX                         ; 0058f350
    MOV AL,byte ptr [EDX]               ; 0058f352
    PUSH EAX                            ; 0058f354
    PUSH 0x64b36a                       ; 0058f355 | = "%d\n"
    MOV ESI,dword ptr [ESP + 0x50]      ; 0058f35a
    PUSH ESI                            ; 0058f35e
    MOV dword ptr [ESP + 0x38],EDX      ; 0058f35f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f363
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f368
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0058f36b
    XOR ESI,ESI                         ; 0058f36f
    MOV EBP,EDI                         ; 0058f371
    MOV EBX,EDI                         ; 0058f373
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0058f375
        ;   Label: LAB_0058f375
    XOR EAX,EAX                         ; 0058f379
    MOV AL,byte ptr [EDX]               ; 0058f37b
    CMP ESI,EAX                         ; 0058f37d
    JGE 0x0058f4fd                      ; 0058f37f
        ;   XREF to: 0058f4fd (CONDITIONAL_JUMP)  ; LAB_0058f4fd
    SUB ESP,0x8                         ; 0058f385
    FLD float ptr [EBX + 0x18]          ; 0058f388
    FSTP double ptr [ESP]               ; 0058f38b
    SUB ESP,0x8                         ; 0058f38e
    FLD float ptr [EBX + 0x14]          ; 0058f391
    FSTP double ptr [ESP]               ; 0058f394
    SUB ESP,0x8                         ; 0058f397
    FLD float ptr [EBX + 0x10]          ; 0058f39a
    FSTP double ptr [ESP]               ; 0058f39d
    XOR EAX,EAX                         ; 0058f3a0
    SUB ESP,0x8                         ; 0058f3a2
    FLD float ptr [EBP + 0x4]           ; 0058f3a5
    FSTP double ptr [ESP]               ; 0058f3a8
    MOV AL,byte ptr [EDI + 0x1]         ; 0058f3ab
    PUSH EAX                            ; 0058f3ae
    INC EDI                             ; 0058f3af
    PUSH 0x64b36e                       ; 0058f3b0 | = "%d, %g, %g,%g,%g\n"
    MOV EAX,dword ptr [ESP + 0x70]      ; 0058f3b5
    ADD EBP,0x4                         ; 0058f3b9
    PUSH EAX                            ; 0058f3bc
    ADD EBX,0xc                         ; 0058f3bd
    INC ESI                             ; 0058f3c0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f3c1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x2c                        ; 0058f3c6
    JMP 0x0058f375                      ; 0058f3c9
        ;   XREF to: 0058f375 (UNCONDITIONAL_JUMP)  ; LAB_0058f375
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f3cb
        ;   Label: LAB_0058f3cb
    MOV EBX,dword ptr [EAX]             ; 0058f3cf
    XOR ESI,ESI                         ; 0058f3d1
    TEST EBX,EBX                        ; 0058f3d3
    JLE 0x0058f2cd                      ; 0058f3d5
        ;   XREF to: 0058f2cd (CONDITIONAL_JUMP)  ; LAB_0058f2cd
    MOV EBX,EBP                         ; 0058f3db
    MOV EDI,dword ptr [EBX + 0x7178]    ; 0058f3dd
        ;   Label: LAB_0058f3dd
    PUSH EDI                            ; 0058f3e3
    MOV EAX,dword ptr [EBX + 0x7164]    ; 0058f3e4
    PUSH EAX                            ; 0058f3ea
    PUSH 0x64b327                       ; 0058f3eb | = "\t%d, %d\n"
    MOV EDX,dword ptr [ESP + 0x54]      ; 0058f3f0
    PUSH EDX                            ; 0058f3f4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f3f5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0058f3fa
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f3fd
    INC ESI                             ; 0058f401
    MOV ECX,dword ptr [EAX]             ; 0058f402
    ADD EBX,0x4                         ; 0058f404
    CMP ESI,ECX                         ; 0058f407
    JGE 0x0058f2cd                      ; 0058f409
        ;   XREF to: 0058f2cd (CONDITIONAL_JUMP)  ; LAB_0058f2cd
    JMP 0x0058f3dd                      ; 0058f40f
        ;   XREF to: 0058f3dd (UNCONDITIONAL_JUMP)  ; LAB_0058f3dd
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058f411
        ;   Label: LAB_0058f411
    MOV ESI,dword ptr [ESP + 0x18]      ; 0058f415
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058f419
    ADD EBX,0x4                         ; 0058f41d
    INC ESI                             ; 0058f420
    MOV EDI,dword ptr [EDX]             ; 0058f421
    MOV dword ptr [ESP + 0x8],EBX       ; 0058f423
    MOV dword ptr [ESP + 0x18],ESI      ; 0058f427
    CMP ESI,EDI                         ; 0058f42b
    JL 0x0058f320                       ; 0058f42d
        ;   XREF to: 0058f320 (CONDITIONAL_JUMP)  ; LAB_0058f320
    PUSH 0x64b380                       ; 0058f433 | = "// triList: textureIndex, verts(index..."
        ;   Label: LAB_0058f433
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0058f438
    PUSH EBP                            ; 0058f43c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f43d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f442
    XOR EAX,EAX                         ; 0058f445
    MOV dword ptr [ESP + 0x14],EAX      ; 0058f447
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f44b
    CMP dword ptr [EAX],0x0             ; 0058f44f
    JLE 0x0058f538                      ; 0058f452
        ;   XREF to: 0058f538 (CONDITIONAL_JUMP)  ; LAB_0058f538
    MOV dword ptr [ESP + 0x10],EAX      ; 0058f458
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058f45c
        ;   Label: LAB_0058f45c
    XOR EBP,EBP                         ; 0058f460
    XOR ESI,ESI                         ; 0058f462
    XOR EDI,EDI                         ; 0058f464
    MOV EDX,dword ptr [EBX + 0x68]      ; 0058f466
        ;   Label: LAB_0058f466
    MOV EAX,dword ptr [EBX + 0x54]      ; 0058f469
    ADD EAX,EDX                         ; 0058f46c
    CMP EDI,EAX                         ; 0058f46e
    JGE 0x0058f516                      ; 0058f470
        ;   XREF to: 0058f516 (CONDITIONAL_JUMP)  ; LAB_0058f516
    MOV EAX,dword ptr [EBX + 0x7c]      ; 0058f476
    XOR EDX,EDX                         ; 0058f479
    MOV DX,word ptr [ESI + EAX*0x1 + 0x10] ; 0058f47b
    SHL EDX,0x8                         ; 0058f480
    PUSH EDX                            ; 0058f483
    XOR EDX,EDX                         ; 0058f484
    MOV DX,word ptr [ESI + EAX*0x1 + 0xa] ; 0058f486
    SHL EDX,0x8                         ; 0058f48b
    PUSH EDX                            ; 0058f48e
    XOR EDX,EDX                         ; 0058f48f
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 0058f491
    PUSH EDX                            ; 0058f496
    XOR EDX,EDX                         ; 0058f497
    MOV DX,word ptr [ESI + EAX*0x1 + 0xe] ; 0058f499
    SHL EDX,0x8                         ; 0058f49e
    PUSH EDX                            ; 0058f4a1
    XOR EDX,EDX                         ; 0058f4a2
    MOV DX,word ptr [ESI + EAX*0x1 + 0x8] ; 0058f4a4
    SHL EDX,0x8                         ; 0058f4a9
    PUSH EDX                            ; 0058f4ac
    XOR EDX,EDX                         ; 0058f4ad
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 0058f4af
    PUSH EDX                            ; 0058f4b4
    XOR EDX,EDX                         ; 0058f4b5
    MOV DX,word ptr [ESI + EAX*0x1 + 0xc] ; 0058f4b7
    SHL EDX,0x8                         ; 0058f4bc
    PUSH EDX                            ; 0058f4bf
    XOR EDX,EDX                         ; 0058f4c0
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 0058f4c2
    SHL EDX,0x8                         ; 0058f4c7
    MOV AX,word ptr [ESI + EAX*0x1]     ; 0058f4ca
    PUSH EDX                            ; 0058f4ce
    AND EAX,0xffff                      ; 0058f4cf
    PUSH EAX                            ; 0058f4d4
    MOV EAX,dword ptr [EBX + 0x90]      ; 0058f4d5
    MOV ECX,dword ptr [EAX + EBP*0x1]   ; 0058f4db
    PUSH ECX                            ; 0058f4de
    PUSH 0x64b3ae                       ; 0058f4df | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    MOV EAX,dword ptr [ESP + 0x74]      ; 0058f4e4
    ADD EBP,0x4                         ; 0058f4e8
    PUSH EAX                            ; 0058f4eb
    ADD ESI,0x12                        ; 0058f4ec
    INC EDI                             ; 0058f4ef
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f4f0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0058f4f5
    JMP 0x0058f466                      ; 0058f4f8
        ;   XREF to: 0058f466 (UNCONDITIONAL_JUMP)  ; LAB_0058f466
    MOV EBP,dword ptr [ESP + 0x28]      ; 0058f4fd
        ;   Label: LAB_0058f4fd
    MOV EDI,dword ptr [ESP + 0x24]      ; 0058f501
    INC EBP                             ; 0058f505
    ADD EDI,0x34                        ; 0058f506
    MOV dword ptr [ESP + 0x28],EBP      ; 0058f509
    MOV dword ptr [ESP + 0x24],EDI      ; 0058f50d
    JMP 0x0058f332                      ; 0058f511
        ;   XREF to: 0058f332 (UNCONDITIONAL_JUMP)  ; LAB_0058f332
    MOV EDI,dword ptr [ESP + 0x10]      ; 0058f516
        ;   Label: LAB_0058f516
    MOV EBP,dword ptr [ESP + 0x14]      ; 0058f51a
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058f51e
    ADD EDI,0x4                         ; 0058f522
    INC EBP                             ; 0058f525
    MOV ECX,dword ptr [EDX]             ; 0058f526
    MOV dword ptr [ESP + 0x10],EDI      ; 0058f528
    MOV dword ptr [ESP + 0x14],EBP      ; 0058f52c
    CMP EBP,ECX                         ; 0058f530
    JL 0x0058f45c                       ; 0058f532
        ;   XREF to: 0058f45c (CONDITIONAL_JUMP)  ; LAB_0058f45c
    PUSH 0x64b3cd                       ; 0058f538 | = "// capTriList: matching part\n"
        ;   Label: LAB_0058f538
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058f53d
    PUSH EBX                            ; 0058f541
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f542
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f547
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f54a
    MOV ESI,dword ptr [EAX]             ; 0058f54e
    XOR EBP,EBP                         ; 0058f550
    TEST ESI,ESI                        ; 0058f552
    JLE 0x0058f5a5                      ; 0058f554
        ;   XREF to: 0058f5a5 (CONDITIONAL_JUMP)  ; LAB_0058f5a5
    MOV dword ptr [ESP + 0xc],EBP       ; 0058f556
    MOV EDI,dword ptr [ESP + 0xc]       ; 0058f55a
        ;   Label: LAB_0058f55a
    XOR EBX,EBX                         ; 0058f55e
    XOR ESI,ESI                         ; 0058f560
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f562
        ;   Label: LAB_0058f562
    ADD EAX,EDI                         ; 0058f566
    CMP ESI,dword ptr [EAX + 0x68]      ; 0058f568
    JGE 0x0058f58f                      ; 0058f56b
        ;   XREF to: 0058f58f (CONDITIONAL_JUMP)  ; LAB_0058f58f
    MOV EAX,dword ptr [EAX + 0xa4]      ; 0058f56d
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0058f573
    PUSH ECX                            ; 0058f576
    PUSH 0x64b3eb                       ; 0058f577 | = "%d\n"
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058f57c
    PUSH EAX                            ; 0058f580
    ADD EBX,0x4                         ; 0058f581
    INC ESI                             ; 0058f584
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f585
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f58a
    JMP 0x0058f562                      ; 0058f58d
        ;   XREF to: 0058f562 (UNCONDITIONAL_JUMP)  ; LAB_0058f562
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058f58f
        ;   Label: LAB_0058f58f
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f593
    INC EBP                             ; 0058f597
    ADD EDX,0x4                         ; 0058f598
    MOV ECX,dword ptr [EAX]             ; 0058f59b
    MOV dword ptr [ESP + 0xc],EDX       ; 0058f59d
    CMP EBP,ECX                         ; 0058f5a1
    JL 0x0058f55a                       ; 0058f5a3
        ;   XREF to: 0058f55a (CONDITIONAL_JUMP)  ; LAB_0058f55a
    PUSH 0x64b3ef                       ; 0058f5a5 | = "// texture list\n"
        ;   Label: LAB_0058f5a5
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058f5aa
    PUSH EBX                            ; 0058f5ae
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f5af
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f5b4
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f5b7
    MOV ESI,dword ptr [EAX + 0xb8]      ; 0058f5bb
    XOR EDI,EDI                         ; 0058f5c1
    TEST ESI,ESI                        ; 0058f5c3
    JLE 0x0058f61a                      ; 0058f5c5
        ;   XREF to: 0058f61a (CONDITIONAL_JUMP)  ; LAB_0058f61a
    LEA EBP,[EAX + 0xc0]                ; 0058f5c7
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f5cd
        ;   Label: LAB_0058f5cd
    MOV EDX,dword ptr [EAX + 0xbc]      ; 0058f5d1
    XOR ESI,ESI                         ; 0058f5d7
    TEST EDX,EDX                        ; 0058f5d9
    JLE 0x0058f605                      ; 0058f5db
        ;   XREF to: 0058f605 (CONDITIONAL_JUMP)  ; LAB_0058f605
    LEA EBX,[EBP + 0x8]                 ; 0058f5dd
    PUSH EBX                            ; 0058f5e0
        ;   Label: LAB_0058f5e0
    PUSH 0x64b400                       ; 0058f5e1 | = "%s\n"
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058f5e6
    PUSH EAX                            ; 0058f5ea
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f5eb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f5f0
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f5f3
    INC ESI                             ; 0058f5f7
    MOV EDX,dword ptr [EAX + 0xbc]      ; 0058f5f8
    ADD EBX,0x48                        ; 0058f5fe
    CMP ESI,EDX                         ; 0058f601
    JL 0x0058f5e0                       ; 0058f603
        ;   XREF to: 0058f5e0 (CONDITIONAL_JUMP)  ; LAB_0058f5e0
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f605
        ;   Label: LAB_0058f605
    INC EDI                             ; 0058f609
    MOV EDX,dword ptr [EAX + 0xb8]      ; 0058f60a
    ADD EBP,0x1680                      ; 0058f610
    CMP EDI,EDX                         ; 0058f616
    JL 0x0058f5cd                       ; 0058f618
        ;   XREF to: 0058f5cd (CONDITIONAL_JUMP)  ; LAB_0058f5cd
    PUSH 0x64b404                       ; 0058f61a | = "// bone origin list\n"
        ;   Label: LAB_0058f61a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0058f61f
    PUSH ECX                            ; 0058f623
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f624
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f629
    MOV EBX,dword ptr [ESP]             ; 0058f62c
    XOR ESI,ESI                         ; 0058f62f
    TEST EBX,EBX                        ; 0058f631
    JLE 0x0058f680                      ; 0058f633
        ;   XREF to: 0058f680 (CONDITIONAL_JUMP)  ; LAB_0058f680
    MOV EBX,dword ptr [ESP + 0x44]      ; 0058f635
    MOV EDI,dword ptr [ESP]             ; 0058f639
    ADD EBX,0x7c90                      ; 0058f63c
    SUB ESP,0x8                         ; 0058f642
        ;   Label: LAB_0058f642
    FLD float ptr [EBX + 0x8]           ; 0058f645
    FSTP double ptr [ESP]               ; 0058f648
    SUB ESP,0x8                         ; 0058f64b
    FLD float ptr [EBX + 0x4]           ; 0058f64e
    FSTP double ptr [ESP]               ; 0058f651
    SUB ESP,0x8                         ; 0058f654
    FLD float ptr [EBX]                 ; 0058f657
    FSTP double ptr [ESP]               ; 0058f659
    PUSH 0x64b419                       ; 0058f65c | = "%g,%g,%g\n"
    MOV ECX,dword ptr [ESP + 0x64]      ; 0058f661
    PUSH ECX                            ; 0058f665
    ADD EBX,0xc                         ; 0058f666
    INC ESI                             ; 0058f669
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f66a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0058f66f
    CMP ESI,EDI                         ; 0058f672
    JL 0x0058f642                       ; 0058f674
        ;   XREF to: 0058f642 (CONDITIONAL_JUMP)  ; LAB_0058f642
    LEA EAX,[EAX]                       ; 0058f676
    LEA EDX,[EDX]                       ; 0058f67c
    PUSH 0x64b423                       ; 0058f680 | = "// defaultRootOffsetScale\n"
        ;   Label: LAB_0058f680
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0058f685
    PUSH EBP                            ; 0058f689
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f68a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f68f
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f692
    SUB ESP,0x8                         ; 0058f696
    FLD float ptr [EAX + 0x7c8c]        ; 0058f699
    FSTP double ptr [ESP]               ; 0058f69f
    SUB ESP,0x8                         ; 0058f6a2
    FLD float ptr [EAX + 0x7c88]        ; 0058f6a5
    FSTP double ptr [ESP]               ; 0058f6ab
    SUB ESP,0x8                         ; 0058f6ae
    FLD float ptr [EAX + 0x7c84]        ; 0058f6b1
    FSTP double ptr [ESP]               ; 0058f6b7
    PUSH 0x64b43e                       ; 0058f6ba | = "%g,%g,%g\n"
    PUSH EBP                            ; 0058f6bf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f6c0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0058f6c5
    PUSH 0x64b448                       ; 0058f6c8 | = "// biasUsed\n"
    PUSH EBP                            ; 0058f6cd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f6ce
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f6d3
    MOV EAX,dword ptr [ESP + 0x44]      ; 0058f6d6
    SUB ESP,0x8                         ; 0058f6da
    FLD float ptr [EAX + 0x8148]        ; 0058f6dd
    FSTP double ptr [ESP]               ; 0058f6e3
    SUB ESP,0x8                         ; 0058f6e6
    FLD float ptr [EAX + 0x8144]        ; 0058f6e9
    FSTP double ptr [ESP]               ; 0058f6ef
    SUB ESP,0x8                         ; 0058f6f2
    FLD float ptr [EAX + 0x8140]        ; 0058f6f5
    FSTP double ptr [ESP]               ; 0058f6fb
    PUSH 0x64b455                       ; 0058f6fe | = "%g,%g,%g\n"
    PUSH EBP                            ; 0058f703
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f704
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0058f709
    PUSH 0x64b45f                       ; 0058f70c | = "// partForBoneList\n"
    PUSH EBP                            ; 0058f711
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f712
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058f717
    MOV EBX,EBP                         ; 0058f71a
    MOV ESI,dword ptr [ESP]             ; 0058f71c
    XOR EBX,EBP                         ; 0058f71f
    TEST ESI,ESI                        ; 0058f721
    JLE 0x0058f750                      ; 0058f723
        ;   XREF to: 0058f750 (CONDITIONAL_JUMP)  ; LAB_0058f750
    MOV ESI,dword ptr [ESP + 0x44]      ; 0058f725
    MOV EBP,dword ptr [ESP + 0x48]      ; 0058f729
    MOV EDI,dword ptr [ESI + 0x8c3c]    ; 0058f72d
        ;   Label: LAB_0058f72d
    PUSH EDI                            ; 0058f733
    PUSH 0x64b473                       ; 0058f734 | = "%d\n"
    PUSH EBP                            ; 0058f739
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058f73a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058f73f
    INC EBX                             ; 0058f742
    MOV EAX,dword ptr [ESP]             ; 0058f743
    ADD ESI,0x4                         ; 0058f746
    CMP EBX,EAX                         ; 0058f749
    JL 0x0058f72d                       ; 0058f74b
        ;   XREF to: 0058f72d (CONDITIONAL_JUMP)  ; LAB_0058f72d
    LEA EAX,[EAX]                       ; 0058f74d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058f750
        ;   Label: LAB_0058f750
    TEST byte ptr [EAX + 0xc],0x20      ; 0058f754
    JNZ 0x0058f762                      ; 0058f758
        ;   XREF to: 0058f762 (CONDITIONAL_JUMP)  ; LAB_0058f762
    ADD ESP,0x30                        ; 0058f75a
    POP EBP                             ; 0058f75d
    POP EDI                             ; 0058f75e
    POP ESI                             ; 0058f75f
    POP EBX                             ; 0058f760
    RET                                 ; 0058f761
    MOV EDX,0x64b477                    ; 0058f762 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058f762
    MOV ECX,0xbab                       ; 0058f767
    PUSH 0x64b48c                       ; 0058f76c | = "CDeformableModel::saveStream - error ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0058f771 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058f777 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058f77d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058f782
    ADD ESP,0x30                        ; 0058f785
    POP EBP                             ; 0058f788
    POP EDI                             ; 0058f789
    POP ESI                             ; 0058f78a
    POP EBX                             ; 0058f78b
    RET                                 ; 0058f78c

