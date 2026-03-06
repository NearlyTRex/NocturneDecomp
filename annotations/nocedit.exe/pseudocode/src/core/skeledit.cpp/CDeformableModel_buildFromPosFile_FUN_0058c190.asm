; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_CDeformableModel_buildFromPosFile_FUN_0058c190(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CLodMeshPrecomputeEntry * Stack[0x8]:4   entry
; Local Variables:
; undefined4       Stack[-0xa228]:4  local_a228
; undefined        Stack[-0xa224]:1  local_a224
; undefined        Stack[-0x6d04]:1  local_6d04
; undefined        Stack[-0x37e0]:1  local_37e0
; undefined        Stack[-0x2520]:1  local_2520
; undefined        Stack[-0x1260]:1  local_1260
; undefined        Stack[-0xeb8]:1  local_eb8
; undefined        Stack[-0xd28]:1  local_d28
; undefined        Stack[-0xc24]:1  local_c24
; undefined        Stack[-0xb20]:1  local_b20
; undefined1       Stack[-0xb1f]:1  local_b1f
; undefined        Stack[-0xa1c]:1  local_a1c
; undefined        Stack[-0x918]:1  local_918
; undefined        Stack[-0x818]:1  local_818
; undefined        Stack[-0x718]:1  local_718
; undefined        Stack[-0x618]:1  local_618
; undefined        Stack[-0x518]:1  local_518
; undefined        Stack[-0x418]:1  local_418
; undefined        Stack[-0x350]:1  local_350
; undefined4       Stack[-0x338]:4  local_338
; undefined4       Stack[-0x334]:4  local_334
; undefined4       Stack[-0x330]:4  local_330
; undefined4       Stack[-0x32c]:4  local_32c
; undefined4       Stack[-0x328]:4  local_328
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined4       Stack[-0x318]:4  local_318
; undefined        Stack[-0x2dc]:1  local_2dc
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined        Stack[-0x268]:1  local_268
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined        Stack[-0x180]:1  local_180
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
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
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   TerminatedCString s_dixie_wav_00649df5
;   TerminatedCString s_LOD_generation_complete_00649e18
;   TerminatedCString s_wt_00649e31
;   TerminatedCString s_core_skeledit_cpp_00649e34
;   TerminatedCString s_Can_t_create_mesh_precom_00649e49
;   TerminatedCString s_core_skeledit_cpp_0064aa70
;   TerminatedCString s_rt_0064aa85
;   TerminatedCString s_Can_t_open_s_0064aa88
;   TerminatedCString s_d_0064aa96
;   TerminatedCString s_Heirarchy_in_s_does_not__0064aa9a
;   TerminatedCString s_Display_s_0064aacd
;   TerminatedCString s_Display_s_0064aad8
;   TerminatedCString s_d_d_d_0064aae3
;   TerminatedCString s_s_is_corrupt_0064aaed
;   TerminatedCString s_core_skeledit_cpp_0064aafc
;   ... and 50 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
;   core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
;   core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
;   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
;   core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
;   core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70
;   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
;   core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
;   core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790
;   core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0
;   core_skeledit.cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0
;   core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40
;   core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790
;   ... and 50 more
;
; *****************************************************************************

section .text

    PUSH 0xa248                         ; 0058c190
        ;   Label: core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058c195
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058c19a
    PUSH ESI                            ; 0058c19b
    PUSH EDI                            ; 0058c19c
    PUSH EBP                            ; 0058c19d
    SUB ESP,0xa218                      ; 0058c19e
    MOV EBP,dword ptr [ESP + 0xa22c]    ; 0058c1a4
    PUSH 0x60a                          ; 0058c1ab
    PUSH 0x64aa70                       ; 0058c1b0 | = "..\\core\\skeledit.cpp"
    PUSH 0x64aa85                       ; 0058c1b5 | = "rt"
    PUSH 0x0                            ; 0058c1ba
    MOV EDX,dword ptr [ESP + 0xa240]    ; 0058c1bc
    XOR AH,AH                           ; 0058c1c3
    PUSH EDX                            ; 0058c1c5
    MOV byte ptr [0x03670650],AH        ; 0058c1c6 | g_SkeleditStatusMessage
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058c1cc
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058c1d1
    MOV ESI,EAX                         ; 0058c1d4
    MOV dword ptr [ESP + 0xa204],EAX    ; 0058c1d6
    TEST EAX,EAX                        ; 0058c1dd
    JZ 0x0058c656                       ; 0058c1df
        ;   XREF to: 0058c656 (CONDITIONAL_JUMP)  ; LAB_0058c656
    PUSH EBP                            ; 0058c1e5
    MOV EBX,0x1                         ; 0058c1e6
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 0058c1eb
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058c1f0
    PUSH ESI                            ; 0058c1f3
        ;   Label: LAB_0058c1f3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058c1f4
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058c1f9
    TEST EAX,EAX                        ; 0058c1fc
    JL 0x0058c20a                       ; 0058c1fe
        ;   XREF to: 0058c20a (CONDITIONAL_JUMP)  ; LAB_0058c20a
    CMP EAX,0xa                         ; 0058c200
    JNZ 0x0058c1f3                      ; 0058c203
        ;   XREF to: 0058c1f3 (CONDITIONAL_JUMP)  ; LAB_0058c1f3
    DEC EBX                             ; 0058c205
    TEST EBX,EBX                        ; 0058c206
    JG 0x0058c1f3                       ; 0058c208
        ;   XREF to: 0058c1f3 (CONDITIONAL_JUMP)  ; LAB_0058c1f3
    LEA EAX,[ESP + 0xa208]              ; 0058c20a
        ;   Label: LAB_0058c20a
    PUSH EAX                            ; 0058c211
    PUSH 0x64aa96                       ; 0058c212 | = "%d\n"
    MOV EBX,dword ptr [ESP + 0xa20c]    ; 0058c217
    PUSH EBX                            ; 0058c21e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058c21f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058c224
    LEA EAX,[ESP + 0xa174]              ; 0058c227
    PUSH EAX                            ; 0058c22e
    PUSH EBX                            ; 0058c22f
    LEA EAX,[ESP + 0x8]                 ; 0058c230
    PUSH EAX                            ; 0058c234
    CALL core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 ; 0058c235
        ;   XREF to: 0058a4a0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr, _FILE * file, int * frame_count_out)
    ADD ESP,0xc                         ; 0058c23a
    PUSH 0x0                            ; 0058c23d
    PUSH EBX                            ; 0058c23f
    LEA EAX,[ESP + 0x8]                 ; 0058c240
    PUSH EAX                            ; 0058c244
    CALL core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 ; 0058c245
        ;   XREF to: 0058aa10 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure * this_ptr, _FILE * file, int mirror_flag)
    ADD ESP,0xc                         ; 0058c24a
    PUSH EBP                            ; 0058c24d
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0058c24e
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058c253
    PUSH EAX                            ; 0058c256
    LEA EAX,[ESP + 0x3528]              ; 0058c257
    PUSH EAX                            ; 0058c25e
    CALL core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160 ; 0058c25f
        ;   XREF to: 0058b160 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure * this_ptr, CSkeleton * skeleton)
    ADD ESP,0x8                         ; 0058c264
    LEA EAX,[ESP + 0x3524]              ; 0058c267
    PUSH EAX                            ; 0058c26e
    LEA EAX,[ESP + 0x4]                 ; 0058c26f
    PUSH EAX                            ; 0058c273
    CALL core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200 ; 0058c274
        ;   XREF to: 0058b200 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure * this_ptr, CBoneStructure * other)
    ADD ESP,0x8                         ; 0058c279
    TEST EAX,EAX                        ; 0058c27c
    JZ 0x0058c67f                       ; 0058c27e
        ;   XREF to: 0058c67f (CONDITIONAL_JUMP)  ; LAB_0058c67f
    MOV ESI,EBX                         ; 0058c284
    MOV EBX,0x1                         ; 0058c286
    PUSH ESI                            ; 0058c28b
        ;   Label: LAB_0058c28b
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058c28c
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058c291
    TEST EAX,EAX                        ; 0058c294
    JL 0x0058c2a2                       ; 0058c296
        ;   XREF to: 0058c2a2 (CONDITIONAL_JUMP)  ; LAB_0058c2a2
    CMP EAX,0xa                         ; 0058c298
    JNZ 0x0058c28b                      ; 0058c29b
        ;   XREF to: 0058c28b (CONDITIONAL_JUMP)  ; LAB_0058c28b
    DEC EBX                             ; 0058c29d
    TEST EBX,EBX                        ; 0058c29e
    JG 0x0058c28b                       ; 0058c2a0
        ;   XREF to: 0058c28b (CONDITIONAL_JUMP)  ; LAB_0058c28b
    LEA EAX,[ESP + 0xa180]              ; 0058c2a2
        ;   Label: LAB_0058c2a2
    PUSH EAX                            ; 0058c2a9
    LEA EAX,[ESP + 0xa180]              ; 0058c2aa
    PUSH EAX                            ; 0058c2b1
    LEA EAX,[ESP + 0xa180]              ; 0058c2b2
    PUSH EAX                            ; 0058c2b9
    PUSH 0x64aae3                       ; 0058c2ba | = "%d,%d,%d\n"
    MOV EAX,dword ptr [ESP + 0xa214]    ; 0058c2bf
    PUSH EAX                            ; 0058c2c6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058c2c7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0058c2cc
    CMP EAX,0x3                         ; 0058c2cf
    JNZ 0x0058c613                      ; 0058c2d2
        ;   XREF to: 0058c613 (CONDITIONAL_JUMP)  ; LAB_0058c613
    PUSH 0x1                            ; 0058c2d8
    MOV EDX,dword ptr [ESP + 0xa17c]    ; 0058c2da
    PUSH EDX                            ; 0058c2e1
    PUSH 0x1                            ; 0058c2e2
    PUSH 0x1                            ; 0058c2e4
    PUSH EBP                            ; 0058c2e6
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 ; 0058c2e7
        ;   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 0058c2ec
    PUSH 0x0                            ; 0058c2ef
    MOV ECX,dword ptr [ESP + 0xa184]    ; 0058c2f1
    PUSH ECX                            ; 0058c2f8
    MOV EBX,dword ptr [ESP + 0xa184]    ; 0058c2f9
    PUSH EBX                            ; 0058c300
    PUSH 0x0                            ; 0058c301
    PUSH EBP                            ; 0058c303
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 ; 0058c304
        ;   XREF to: 0059a510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, ...)
    ADD ESP,0x14                        ; 0058c309
    MOV ESI,dword ptr [ESP + 0xa204]    ; 0058c30c
    PUSH ESI                            ; 0058c313
    PUSH EBP                            ; 0058c314
    CALL core_skeledit.cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0 ; 0058c315
        ;   XREF to: 0058b8e0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058c31a
    TEST EAX,EAX                        ; 0058c31d
    JZ 0x0058c613                       ; 0058c31f
        ;   XREF to: 0058c613 (CONDITIONAL_JUMP)  ; LAB_0058c613
    PUSH ESI                            ; 0058c325
    PUSH EBP                            ; 0058c326
    CALL core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0 ; 0058c327
        ;   XREF to: 0058b9b0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058c32c
    TEST EAX,EAX                        ; 0058c32f
    JZ 0x0058c613                       ; 0058c331
        ;   XREF to: 0058c613 (CONDITIONAL_JUMP)  ; LAB_0058c613
    PUSH ESI                            ; 0058c337
    PUSH EBP                            ; 0058c338
    CALL core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40 ; 0058c339
        ;   XREF to: 0058bc40 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058c33e
    TEST EAX,EAX                        ; 0058c341
    JZ 0x0058c613                       ; 0058c343
        ;   XREF to: 0058c613 (CONDITIONAL_JUMP)  ; LAB_0058c613
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058c349
    CMP byte ptr [EAX + 0x200],0x0      ; 0058c350
    JNZ 0x0058c78b                      ; 0058c357
        ;   XREF to: 0058c78b (CONDITIONAL_JUMP)  ; LAB_0058c78b
    PUSH EBP                            ; 0058c35d
    CALL core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790 ; 0058c35e
        ;   XREF to: 0058f790 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058c363
    PUSH EBP                            ; 0058c366
        ;   Label: LAB_0058c366
    CALL core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60 ; 0058c367
        ;   XREF to: 0058ec60 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058c36c
    LEA EAX,[ESP + 0x6a48]              ; 0058c36f
    PUSH EAX                            ; 0058c376
    LEA EAX,[ESP + 0x4]                 ; 0058c377
    PUSH EAX                            ; 0058c37b
    CALL core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0 ; 0058c37c
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure * this_ptr, CMatrix3x4f * inverse_matrices)
    ADD ESP,0x8                         ; 0058c381
    MOV EAX,ESP                         ; 0058c384
    PUSH EAX                            ; 0058c386
    PUSH EBP                            ; 0058c387
    CALL core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0 ; 0058c388
        ;   XREF to: 0058dde0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel * this_ptr, CBoneStructure * bone_structure)
    ADD ESP,0x8                         ; 0058c38d
    XOR ECX,ECX                         ; 0058c390
    MOV EBX,dword ptr [ESP]             ; 0058c392
    MOV dword ptr [ESP + 0xa200],ECX    ; 0058c395
    TEST EBX,EBX                        ; 0058c39c
    JLE 0x0058c410                      ; 0058c39e
        ;   XREF to: 0058c410 (CONDITIONAL_JUMP)  ; LAB_0058c410
    LEA EAX,[ESP + 0x4]                 ; 0058c3a0
    ADD EAX,0x54                        ; 0058c3a4
    XOR EBX,EBX                         ; 0058c3a7
    MOV dword ptr [ESP + 0xa1b8],EAX    ; 0058c3a9
    MOV ESI,dword ptr [ESP + 0xa1b8]    ; 0058c3b0
        ;   Label: LAB_0058c3b0
    PUSH ESI                            ; 0058c3b7
    LEA ESI,[ESP + 0xa110]              ; 0058c3b8
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0058c3bf
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0058c3c4
    ADD ESP,0x4                         ; 0058c3c9
    LEA ESI,[ESP + 0xa10c]              ; 0058c3cc
    LEA EDI,[ESP + EBX*0x1 + 0x7d08]    ; 0058c3d3
    ADD EBX,0x30                        ; 0058c3da
    MOV EAX,dword ptr [ESP + 0xa200]    ; 0058c3dd
    MOVSD.REP ES:EDI,ESI                ; 0058c3e4
    INC EAX                             ; 0058c3e6
    MOV EDI,dword ptr [ESP + 0xa1b8]    ; 0058c3e7
    MOV EDX,dword ptr [ESP]             ; 0058c3ee
    ADD EDI,0x84                        ; 0058c3f1
    MOV dword ptr [ESP + 0xa200],EAX    ; 0058c3f7
    MOV dword ptr [ESP + 0xa1b8],EDI    ; 0058c3fe
    CMP EAX,EDX                         ; 0058c405
    JL 0x0058c3b0                       ; 0058c407
        ;   XREF to: 0058c3b0 (CONDITIONAL_JUMP)  ; LAB_0058c3b0
    LEA EAX,[EAX]                       ; 0058c409
    NOP                                 ; 0058c40f
    PUSH 0x0                            ; 0058c410
        ;   Label: LAB_0058c410
    PUSH 0x0                            ; 0058c412
    LEA EAX,[ESP + 0x9b18]              ; 0058c414
    PUSH EAX                            ; 0058c41b
    LEA EAX,[ESP + 0xa220]              ; 0058c41c
    PUSH EAX                            ; 0058c423
    MOV ECX,dword ptr [ESP + 0xa240]    ; 0058c424
    PUSH ECX                            ; 0058c42b
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058c42c
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058c431
    PUSH 0x0                            ; 0058c434
    PUSH 0x0                            ; 0058c436
    LEA EAX,[ESP + 0x9b18]              ; 0058c438
    PUSH EAX                            ; 0058c43f
    LEA EAX,[ESP + 0xa220]              ; 0058c440
    PUSH EAX                            ; 0058c447
    LEA EAX,[ESP + 0x9510]              ; 0058c448
    PUSH EAX                            ; 0058c44f
    CALL crt_file.c_makepath_FUN_005febfc ; 0058c450
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058c455
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058c458
    MOV EBX,dword ptr [EAX + 0x308]     ; 0058c45f
    TEST EBX,EBX                        ; 0058c465
    JNZ 0x0058c494                      ; 0058c467
        ;   XREF to: 0058c494 (CONDITIONAL_JUMP)  ; LAB_0058c494
    PUSH 0x1                            ; 0058c469
    PUSH 0x104                          ; 0058c46b
    LEA EAX,[ESP + 0x9508]              ; 0058c470
    PUSH EAX                            ; 0058c477
    PUSH 0x64ab11                       ; 0058c478 | = "Copy textures from a directory (empty..."
    MOV ESI,dword ptr [0x00678a60]      ; 0058c47d | g_CEditorToolsPtr
    PUSH ESI                            ; 0058c483 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0058c484
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0058c489
    TEST EAX,EAX                        ; 0058c48c
    JZ 0x0058c649                       ; 0058c48e
        ;   XREF to: 0058c649 (CONDITIONAL_JUMP)  ; LAB_0058c649
    CMP byte ptr [ESP + 0x9500],0x0     ; 0058c494
        ;   Label: LAB_0058c494
    JNZ 0x0058c7ac                      ; 0058c49c
        ;   XREF to: 0058c7ac (CONDITIONAL_JUMP)  ; LAB_0058c7ac
    MOV EDX,0x2                         ; 0058c4a2
        ;   Label: LAB_0058c4a2
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058c4a7
    MOV dword ptr [ESP + 0xa184],EDX    ; 0058c4ae
    MOV ECX,dword ptr [EAX + 0x308]     ; 0058c4b5
    XOR EBX,EBX                         ; 0058c4bb
    CMP ECX,0x1                         ; 0058c4bd
    JZ 0x0058cb01                       ; 0058c4c0
        ;   XREF to: 0058cb01 (CONDITIONAL_JUMP)  ; LAB_0058cb01
    CMP ECX,EDX                         ; 0058c4c6
    JNZ 0x0058cb3b                      ; 0058c4c8
        ;   XREF to: 0058cb3b (CONDITIONAL_JUMP)  ; LAB_0058cb3b
    MOV ESI,0x64acc4                    ; 0058c4ce | = "$$BATCH"
    LEA EDI,[ESP + 0x9708]              ; 0058c4d3
    MOV EBX,0x1e                        ; 0058c4da
    PUSH EDI                            ; 0058c4df
        ;   Label: LAB_0058c4df
    MOV AL,byte ptr [ESI]               ; 0058c4e0 | = "$$BATCH" | s_BATCH_0064acc6 | s_TEST_0064acbd
        ;   Label: LAB_0058c4e0
    MOV byte ptr [EDI],AL               ; 0058c4e2
    CMP AL,0x0                          ; 0058c4e4
    JZ 0x0058c4f8                       ; 0058c4e6
        ;   XREF to: 0058c4f8 (CONDITIONAL_JUMP)  ; LAB_0058c4f8
    MOV AL,byte ptr [ESI + 0x1]         ; 0058c4e8 | s_$BATCH_0064acc5 | s_ATCH_0064acc7 | s_$TEST_0064acbe
    ADD ESI,0x2                         ; 0058c4eb
    MOV byte ptr [EDI + 0x1],AL         ; 0058c4ee
    ADD EDI,0x2                         ; 0058c4f1
    CMP AL,0x0                          ; 0058c4f4
    JNZ 0x0058c4e0                      ; 0058c4f6
        ;   XREF to: 0058c4e0 (CONDITIONAL_JUMP)  ; LAB_0058c4e0
    POP EDI                             ; 0058c4f8
        ;   Label: LAB_0058c4f8
    PUSH EBX                            ; 0058c4f9
        ;   Label: LAB_0058c4f9
    PUSH 0x0                            ; 0058c4fa
    PUSH 0x100                          ; 0058c4fc
    MOV EAX,dword ptr [ESP + 0xa190]    ; 0058c501
    PUSH EAX                            ; 0058c508
    LEA EAX,[ESP + 0x9718]              ; 0058c509
    PUSH EAX                            ; 0058c510
    PUSH EBP                            ; 0058c511
    CALL core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70 ; 0058c512
        ;   XREF to: 0058de70 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel * this_ptr, char * base_name, int num_crams, int atlas_dimension, ...)
    ADD ESP,0x18                        ; 0058c517
    CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860 ; 0058c51a
        ;   XREF to: 0046a860 (UNCONDITIONAL_CALL)  ; int shape_design.c_getLastTextureProcessIndex_FUN_0046a860()
    MOV dword ptr [ESP + 0xa188],EAX    ; 0058c51f
    LEA EAX,[ESP + 0xa034]              ; 0058c526
    PUSH EAX                            ; 0058c52d
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 0058c52e
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0058c533
    MOV EDX,dword ptr [EBP + 0xbc]      ; 0058c536
    MOV EAX,dword ptr [EBP + 0x54]      ; 0058c53c
    MOV ECX,dword ptr [EBP + 0x68]      ; 0058c53f
    PUSH EDX                            ; 0058c542
    ADD EAX,ECX                         ; 0058c543
    PUSH EAX                            ; 0058c545
    MOV EBX,dword ptr [EBP + 0x2c]      ; 0058c546
    PUSH EBX                            ; 0058c549
    LEA EAX,[ESP + 0xa040]              ; 0058c54a
    PUSH EAX                            ; 0058c551
    CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 ; 0058c552
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int lod_texture_count)
    ADD ESP,0x10                        ; 0058c557
    MOV EBX,0x1                         ; 0058c55a
    MOV ESI,dword ptr [ESP + 0xa204]    ; 0058c55f
    PUSH ESI                            ; 0058c566
        ;   Label: LAB_0058c566
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058c567
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058c56c
    TEST EAX,EAX                        ; 0058c56f
    JL 0x0058c57d                       ; 0058c571
        ;   XREF to: 0058c57d (CONDITIONAL_JUMP)  ; LAB_0058c57d
    CMP EAX,0xa                         ; 0058c573
    JNZ 0x0058c566                      ; 0058c576
        ;   XREF to: 0058c566 (CONDITIONAL_JUMP)  ; LAB_0058c566
    DEC EBX                             ; 0058c578
    TEST EBX,EBX                        ; 0058c579
    JG 0x0058c566                       ; 0058c57b
        ;   XREF to: 0058c566 (CONDITIONAL_JUMP)  ; LAB_0058c566
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0058c57d
        ;   Label: LAB_0058c57d
    XOR EDI,EDI                         ; 0058c580
    TEST ESI,ESI                        ; 0058c582
    JLE 0x0058cc9f                      ; 0058c584
        ;   XREF to: 0058cc9f (CONDITIONAL_JUMP)  ; LAB_0058cc9f
    MOV dword ptr [ESP + 0xa1c0],EDI    ; 0058c58a
    MOV dword ptr [ESP + 0xa1c4],EDI    ; 0058c591
    MOV ESI,dword ptr [ESP + 0xa038]    ; 0058c598
        ;   Label: LAB_0058c598
    MOV EBX,dword ptr [ESP + 0xa1c0]    ; 0058c59f
    MOV EAX,dword ptr [EBP + 0x40]      ; 0058c5a6
    MOV ECX,dword ptr [ESP + 0xa1c4]    ; 0058c5a9
    ADD EAX,EBX                         ; 0058c5b0
    ADD ESI,ECX                         ; 0058c5b2
    MOV EDX,dword ptr [EAX + 0x10]      ; 0058c5b4
    MOV dword ptr [ESI],EDX             ; 0058c5b7
    MOV EDX,dword ptr [EAX + 0x14]      ; 0058c5b9
    MOV dword ptr [ESI + 0x4],EDX       ; 0058c5bc
    MOV EDX,dword ptr [EAX + 0x18]      ; 0058c5bf
    MOV dword ptr [ESI + 0x8],EDX       ; 0058c5c2
    MOV EAX,ESI                         ; 0058c5c5
    LEA EDX,[ESI + 0x190]               ; 0058c5c7
    ADD EAX,0x4                         ; 0058c5cd
        ;   Label: LAB_0058c5cd
    MOV dword ptr [EAX + 0x8],0x0       ; 0058c5d0
    CMP EAX,EDX                         ; 0058c5d7
    JNZ 0x0058c5cd                      ; 0058c5d9
        ;   XREF to: 0058c5cd (CONDITIONAL_JUMP)  ; LAB_0058c5cd
    LEA EAX,[ESP + 0xa194]              ; 0058c5db
    PUSH EAX                            ; 0058c5e2
    PUSH 0x64ad63                       ; 0058c5e3 | = "%d\n"
    MOV EAX,dword ptr [ESP + 0xa20c]    ; 0058c5e8
    PUSH EAX                            ; 0058c5ef
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058c5f0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058c5f5
    CMP EAX,0x1                         ; 0058c5f8
    JZ 0x0058cbf4                       ; 0058c5fb
        ;   XREF to: 0058cbf4 (CONDITIONAL_JUMP)  ; LAB_0058cbf4
    PUSH 0x0                            ; 0058c601
        ;   Label: LAB_0058c601
    LEA EAX,[ESP + 0xa038]              ; 0058c603
    PUSH EAX                            ; 0058c60a
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058c60b
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058c610
    MOV EBX,dword ptr [ESP + 0xa230]    ; 0058c613
        ;   Label: LAB_0058c613
    PUSH EBX                            ; 0058c61a
    PUSH 0x64aaed                       ; 0058c61b | = "%s is corrupt!"
    PUSH 0x3670650                      ; 0058c620 | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c625
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058c62a
    PUSH 0x647                          ; 0058c62d
    PUSH 0x64aafc                       ; 0058c632 | = "..\\core\\skeledit.cpp"
    MOV ESI,dword ptr [ESP + 0xa20c]    ; 0058c637
    PUSH ESI                            ; 0058c63e
    XOR EBX,EBX                         ; 0058c63f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058c641
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058c646
    MOV EAX,EBX                         ; 0058c649
        ;   Label: LAB_0058c649
    ADD ESP,0xa218                      ; 0058c64b
    POP EBP                             ; 0058c651
    POP EDI                             ; 0058c652
    POP ESI                             ; 0058c653
    POP EBX                             ; 0058c654
    RET                                 ; 0058c655
    MOV ECX,dword ptr [ESP + 0xa230]    ; 0058c656
        ;   Label: LAB_0058c656
    PUSH ECX                            ; 0058c65d
    PUSH 0x64aa88                       ; 0058c65e | = "Can't open %s"
    PUSH 0x3670650                      ; 0058c663 | g_SkeleditStatusMessage
    XOR EBX,EBX                         ; 0058c668
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c66a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058c66f
    MOV EAX,EBX                         ; 0058c672
    ADD ESP,0xa218                      ; 0058c674
    POP EBP                             ; 0058c67a
    POP EDI                             ; 0058c67b
    POP ESI                             ; 0058c67c
    POP EBX                             ; 0058c67d
    RET                                 ; 0058c67e
    LEA ESI,[EBP + 0x8f5c]              ; 0058c67f
        ;   Label: LAB_0058c67f
    PUSH ESI                            ; 0058c685
    MOV EBP,dword ptr [ESP + 0xa234]    ; 0058c686
    PUSH EBP                            ; 0058c68d
    PUSH 0x64aa9a                       ; 0058c68e | = "Heirarchy in %s does not match that i..."
    PUSH 0x3670650                      ; 0058c693 | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c698
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,dword ptr [EBP + 0x308]     ; 0058c69d
    ADD ESP,0x10                        ; 0058c6a3
    CMP EDX,0x2                         ; 0058c6a6
    JZ 0x0058c77c                       ; 0058c6a9
        ;   XREF to: 0058c77c (CONDITIONAL_JUMP)  ; LAB_0058c77c
    LEA EAX,[ESP + 0x8fc8]              ; 0058c6af
    PUSH EAX                            ; 0058c6b6
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0058c6b7
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0058c6bc
    PUSH EBP                            ; 0058c6bf
    PUSH 0x64aacd                       ; 0058c6c0 | = "Display %s"
    LEA EAX,[ESP + 0x9e18]              ; 0058c6c5
    PUSH EAX                            ; 0058c6cc
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c6cd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058c6d2
    LEA EAX,[ESP + 0x9e10]              ; 0058c6d5
    PUSH EAX                            ; 0058c6dc
    LEA EAX,[ESP + 0x8fcc]              ; 0058c6dd
    PUSH EAX                            ; 0058c6e4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058c6e5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0058c6ea
    PUSH ESI                            ; 0058c6ed
    PUSH 0x64aad8                       ; 0058c6ee | = "Display %s"
    LEA EAX,[ESP + 0x9e18]              ; 0058c6f3
    PUSH EAX                            ; 0058c6fa
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c6fb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058c700
    LEA EAX,[ESP + 0x9e10]              ; 0058c703
    PUSH EAX                            ; 0058c70a
    LEA EAX,[ESP + 0x8fcc]              ; 0058c70b
    PUSH EAX                            ; 0058c712
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058c713
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0058c718
    XOR EBX,EBX                         ; 0058c71b
    MOV EDI,dword ptr [ESP + 0xa230]    ; 0058c71d
    PUSH 0x0                            ; 0058c724
        ;   Label: LAB_0058c724
    PUSH EBX                            ; 0058c726
    PUSH 0x3670650                      ; 0058c727 | g_SkeleditStatusMessage
    LEA EAX,[ESP + 0x8fd4]              ; 0058c72c
    PUSH EAX                            ; 0058c733
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0058c734
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0058c739
    MOV EBX,EAX                         ; 0058c73c
    TEST EAX,EAX                        ; 0058c73e
    JL 0x0058c76a                       ; 0058c740
        ;   XREF to: 0058c76a (CONDITIONAL_JUMP)  ; LAB_0058c76a
    JNZ 0x0058c752                      ; 0058c742
        ;   XREF to: 0058c752 (CONDITIONAL_JUMP)  ; LAB_0058c752
    PUSH EDI                            ; 0058c744
    LEA EAX,[ESP + 0x4]                 ; 0058c745
    PUSH EAX                            ; 0058c749
    CALL core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0 ; 0058c74a
        ;   XREF to: 0058afe0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0058c74f
    CMP EBX,0x1                         ; 0058c752
        ;   Label: LAB_0058c752
    JNZ 0x0058c724                      ; 0058c755
        ;   XREF to: 0058c724 (CONDITIONAL_JUMP)  ; LAB_0058c724
    PUSH ESI                            ; 0058c757
    LEA EAX,[ESP + 0x3528]              ; 0058c758
    PUSH EAX                            ; 0058c75f
    CALL core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0 ; 0058c760
        ;   XREF to: 0058afe0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0058c765
    JMP 0x0058c724                      ; 0058c768
        ;   XREF to: 0058c724 (UNCONDITIONAL_JUMP)  ; LAB_0058c724
    PUSH 0x0                            ; 0058c76a
        ;   Label: LAB_0058c76a
    LEA EAX,[ESP + 0x8fcc]              ; 0058c76c
    PUSH EAX                            ; 0058c773
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0058c774
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058c779
    XOR EBX,EBX                         ; 0058c77c
        ;   Label: LAB_0058c77c
    MOV EAX,EBX                         ; 0058c77e
    ADD ESP,0xa218                      ; 0058c780
    POP EBP                             ; 0058c786
    POP EDI                             ; 0058c787
    POP ESI                             ; 0058c788
    POP EBX                             ; 0058c789
    RET                                 ; 0058c78a
    PUSH EAX                            ; 0058c78b
        ;   Label: LAB_0058c78b
    PUSH EBP                            ; 0058c78c
    CALL core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 ; 0058c78d
        ;   XREF to: 0058f810 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0058c792
    TEST EAX,EAX                        ; 0058c795
    JNZ 0x0058c366                      ; 0058c797
        ;   XREF to: 0058c366 (CONDITIONAL_JUMP)  ; LAB_0058c366
    XOR EBX,EBX                         ; 0058c79d
        ;   Label: LAB_0058c79d
    MOV EAX,EBX                         ; 0058c79f
    ADD ESP,0xa218                      ; 0058c7a1
    POP EBP                             ; 0058c7a7
    POP EDI                             ; 0058c7a8
    POP ESI                             ; 0058c7a9
    POP EBX                             ; 0058c7aa
    RET                                 ; 0058c7ab
    LEA EAX,[ESP + 0x9910]              ; 0058c7ac
        ;   Label: LAB_0058c7ac
    PUSH EAX                            ; 0058c7b3
    LEA EAX,[ESP + 0x9a14]              ; 0058c7b4
    PUSH EAX                            ; 0058c7bb
    LEA EAX,[ESP + 0x9c18]              ; 0058c7bc
    PUSH EAX                            ; 0058c7c3
    LEA EAX,[ESP + 0xa21c]              ; 0058c7c4
    PUSH EAX                            ; 0058c7cb
    LEA EAX,[ESP + 0x9510]              ; 0058c7cc
    PUSH EAX                            ; 0058c7d3
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058c7d4
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058c7d9
    LEA EAX,[ESP + 0x9910]              ; 0058c7dc
    PUSH EAX                            ; 0058c7e3
    LEA EAX,[ESP + 0x9a14]              ; 0058c7e4
    PUSH EAX                            ; 0058c7eb
    LEA EAX,[ESP + 0x9c18]              ; 0058c7ec
    PUSH EAX                            ; 0058c7f3
    PUSH 0x0                            ; 0058c7f4
    LEA EAX,[ESP + 0x9d20]              ; 0058c7f6
    PUSH EAX                            ; 0058c7fd
    XOR EDI,EDI                         ; 0058c7fe
    CALL crt_file.c_makepath_FUN_005febfc ; 0058c800
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058c805
    MOV EAX,dword ptr [EBP + 0xb8]      ; 0058c808
    MOV dword ptr [ESP + 0xa1fc],EDI    ; 0058c80e
    TEST EAX,EAX                        ; 0058c815
    JLE 0x0058c4a2                      ; 0058c817
        ;   XREF to: 0058c4a2 (CONDITIONAL_JUMP)  ; LAB_0058c4a2
    LEA EAX,[EBP + 0xc0]                ; 0058c81d
    MOV dword ptr [ESP + 0xa1bc],EAX    ; 0058c823
    XOR ESI,ESI                         ; 0058c82a
        ;   Label: LAB_0058c82a
    MOV EDI,dword ptr [EBP + 0xbc]      ; 0058c82c
    MOV dword ptr [ESP + 0xa190],ESI    ; 0058c832
    TEST EDI,EDI                        ; 0058c839
    JLE 0x0058c9d4                      ; 0058c83b
        ;   XREF to: 0058c9d4 (CONDITIONAL_JUMP)  ; LAB_0058c9d4
    MOV EDI,dword ptr [ESP + 0xa1bc]    ; 0058c841
    ADD EDI,0x8                         ; 0058c848
    PUSH 0x0                            ; 0058c84b
        ;   Label: LAB_0058c84b
    LEA EAX,[ESP + 0x9a14]              ; 0058c84d
    PUSH EAX                            ; 0058c854
    PUSH 0x0                            ; 0058c855
    PUSH 0x0                            ; 0058c857
    PUSH EDI                            ; 0058c859
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058c85a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058c85f
    PUSH 0x64ab69                       ; 0058c862 | = "tga"
    LEA EAX,[ESP + 0x9a14]              ; 0058c867
    PUSH EAX                            ; 0058c86e
    LEA EAX,[ESP + 0x9d18]              ; 0058c86f
    PUSH EAX                            ; 0058c876
    LEA EAX,[ESP + 0xa21c]              ; 0058c877
    PUSH EAX                            ; 0058c87e
    LEA EAX,[ESP + 0x981c]              ; 0058c87f
    PUSH EAX                            ; 0058c886
    CALL crt_file.c_makepath_FUN_005febfc ; 0058c887
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058c88c
    PUSH 0x64ab6d                       ; 0058c88f | = "tga"
    LEA EAX,[ESP + 0x9a14]              ; 0058c894
    PUSH EAX                            ; 0058c89b
    PUSH 0x64ab71                       ; 0058c89c | = "art"
    PUSH 0x0                            ; 0058c8a1
    LEA EAX,[ESP + 0x9614]              ; 0058c8a3
    PUSH EAX                            ; 0058c8aa
    CALL crt_file.c_makepath_FUN_005febfc ; 0058c8ab
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058c8b0
    PUSH 0x6a5                          ; 0058c8b3
    PUSH 0x64ab75                       ; 0058c8b8 | = "..\\core\\skeledit.cpp"
    PUSH 0x64ab8a                       ; 0058c8bd | = "rb"
    PUSH 0x0                            ; 0058c8c2
    LEA EAX,[ESP + 0x981c]              ; 0058c8c4
    PUSH EAX                            ; 0058c8cb
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058c8cc
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058c8d1
    MOV EBX,EAX                         ; 0058c8d4
    TEST EAX,EAX                        ; 0058c8d6
    JNZ 0x0058c93c                      ; 0058c8d8
        ;   XREF to: 0058c93c (CONDITIONAL_JUMP)  ; LAB_0058c93c
    PUSH 0x64ab8d                       ; 0058c8da | = "gore"
    LEA EAX,[ESP + 0x9a14]              ; 0058c8df
    PUSH EAX                            ; 0058c8e6
    CALL crt_string.c_strstr_FUN_005fedd0 ; 0058c8e7
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0058c8ec
    TEST EAX,EAX                        ; 0058c8ef
    JZ 0x0058c93c                       ; 0058c8f1
        ;   XREF to: 0058c93c (CONDITIONAL_JUMP)  ; LAB_0058c93c
    PUSH 0x64ab92                       ; 0058c8f3 | = "tga"
    LEA EAX,[ESP + 0x9a14]              ; 0058c8f8
    PUSH EAX                            ; 0058c8ff
    PUSH 0x64ab96                       ; 0058c900 | = "\\enemy"
    PUSH 0x64ab9d                       ; 0058c905 | = "t:"
    LEA EAX,[ESP + 0x981c]              ; 0058c90a
    PUSH EAX                            ; 0058c911
    CALL crt_file.c_makepath_FUN_005febfc ; 0058c912
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058c917
    PUSH 0x6a9                          ; 0058c91a
    PUSH 0x64aba0                       ; 0058c91f | = "..\\core\\skeledit.cpp"
    PUSH 0x64abb5                       ; 0058c924 | = "rb"
    PUSH EBX                            ; 0058c929
    LEA EAX,[ESP + 0x981c]              ; 0058c92a
    PUSH EAX                            ; 0058c931
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058c932
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058c937
    MOV EBX,EAX                         ; 0058c93a
    LEA EAX,[ESP + 0x9604]              ; 0058c93c
        ;   Label: LAB_0058c93c
    PUSH EAX                            ; 0058c943
    LEA EAX,[ESP + 0x9810]              ; 0058c944
    PUSH EAX                            ; 0058c94b
    PUSH 0x64abb8                       ; 0058c94c | = "Copying %s -> %s"
    MOV ECX,dword ptr [0x00678a60]      ; 0058c951 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058c957 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058c958
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x10                        ; 0058c95d
    TEST EBX,EBX                        ; 0058c960
    JNZ 0x0058ca0a                      ; 0058c962
        ;   XREF to: 0058ca0a (CONDITIONAL_JUMP)  ; LAB_0058ca0a
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058c968
    CMP dword ptr [EAX + 0x308],0x2     ; 0058c96f
    JZ 0x0058c9b4                       ; 0058c976
        ;   XREF to: 0058c9b4 (CONDITIONAL_JUMP)  ; LAB_0058c9b4
    LEA EAX,[ESP + 0x980c]              ; 0058c978
    PUSH EAX                            ; 0058c97f
    PUSH 0x64abc9                       ; 0058c980 | = "Can't open %s.  Keep going anyway?"
    LEA EAX,[ESP + 0x9378]              ; 0058c985
    PUSH EAX                            ; 0058c98c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058c98d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058c992
    LEA EAX,[ESP + 0x9370]              ; 0058c995
    PUSH EAX                            ; 0058c99c
    MOV EBX,dword ptr [0x00678a60]      ; 0058c99d | g_CEditorToolsPtr
    PUSH EBX                            ; 0058c9a3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 0058c9a4
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0058c9a9
    TEST EAX,EAX                        ; 0058c9ac
    JZ 0x0058c79d                       ; 0058c9ae
        ;   XREF to: 0058c79d (CONDITIONAL_JUMP)  ; LAB_0058c79d
    MOV EAX,dword ptr [ESP + 0xa190]    ; 0058c9b4
        ;   Label: LAB_0058c9b4
    ADD EDI,0x48                        ; 0058c9bb
    INC EAX                             ; 0058c9be
    MOV EDX,dword ptr [EBP + 0xbc]      ; 0058c9bf
    MOV dword ptr [ESP + 0xa190],EAX    ; 0058c9c5
    CMP EAX,EDX                         ; 0058c9cc
    JL 0x0058c84b                       ; 0058c9ce
        ;   XREF to: 0058c84b (CONDITIONAL_JUMP)  ; LAB_0058c84b
    MOV EDX,dword ptr [ESP + 0xa1bc]    ; 0058c9d4
        ;   Label: LAB_0058c9d4
    MOV ECX,dword ptr [ESP + 0xa1fc]    ; 0058c9db
    MOV EBX,dword ptr [EBP + 0xb8]      ; 0058c9e2
    ADD EDX,0x1680                      ; 0058c9e8
    INC ECX                             ; 0058c9ee
    MOV dword ptr [ESP + 0xa1bc],EDX    ; 0058c9ef
    MOV dword ptr [ESP + 0xa1fc],ECX    ; 0058c9f6
    CMP ECX,EBX                         ; 0058c9fd
    JL 0x0058c82a                       ; 0058c9ff
        ;   XREF to: 0058c82a (CONDITIONAL_JUMP)  ; LAB_0058c82a
    JMP 0x0058c4a2                      ; 0058ca05
        ;   XREF to: 0058c4a2 (UNCONDITIONAL_JUMP)  ; LAB_0058c4a2
    PUSH 0x6b5                          ; 0058ca0a
        ;   Label: LAB_0058ca0a
    PUSH 0x64abec                       ; 0058ca0f | = "..\\core\\skeledit.cpp"
    PUSH 0x64ac01                       ; 0058ca14 | = "wb"
    PUSH 0x0                            ; 0058ca19
    LEA EAX,[ESP + 0x9614]              ; 0058ca1b
    PUSH EAX                            ; 0058ca22
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058ca23
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058ca28
    MOV ESI,EAX                         ; 0058ca2b
    TEST EAX,EAX                        ; 0058ca2d
    JZ 0x0058ca4a                       ; 0058ca2f
        ;   XREF to: 0058ca4a (CONDITIONAL_JUMP)  ; LAB_0058ca4a
    PUSH EBX                            ; 0058ca31
        ;   Label: LAB_0058ca31
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058ca32
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058ca37
    TEST EAX,EAX                        ; 0058ca3a
    JL 0x0058ca76                       ; 0058ca3c
        ;   XREF to: 0058ca76 (CONDITIONAL_JUMP)  ; LAB_0058ca76
    PUSH ESI                            ; 0058ca3e
    PUSH EAX                            ; 0058ca3f
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0058ca40
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0058ca45
    JMP 0x0058ca31                      ; 0058ca48
        ;   XREF to: 0058ca31 (UNCONDITIONAL_JUMP)  ; LAB_0058ca31
    MOV dword ptr [0x02f0ca48],0x64ac04 ; 0058ca4a | g_CurrentFilename | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058ca4a
    LEA EAX,[ESP + 0x9604]              ; 0058ca54
    PUSH EAX                            ; 0058ca5b
    MOV EDX,0x6b6                       ; 0058ca5c
    PUSH 0x64ac19                       ; 0058ca61 | = "Can't create %s"
    MOV dword ptr [0x02f0ca4c],EDX      ; 0058ca66 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ca6c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058ca71
    JMP 0x0058ca31                      ; 0058ca74
        ;   XREF to: 0058ca31 (UNCONDITIONAL_JUMP)  ; LAB_0058ca31
    TEST byte ptr [EBX + 0xc],0x20      ; 0058ca76
        ;   Label: LAB_0058ca76
    JZ 0x0058caa6                       ; 0058ca7a
        ;   XREF to: 0058caa6 (CONDITIONAL_JUMP)  ; LAB_0058caa6
    MOV dword ptr [0x02f0ca48],0x64ac29 ; 0058ca7c | g_CurrentFilename | = "..\\core\\skeledit.cpp"
    LEA EAX,[ESP + 0x980c]              ; 0058ca86
    PUSH EAX                            ; 0058ca8d
    MOV EDX,0x6bc                       ; 0058ca8e
    PUSH 0x64ac3e                       ; 0058ca93 | = "Error reading %s"
    MOV dword ptr [0x02f0ca4c],EDX      ; 0058ca98 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ca9e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058caa3
    TEST byte ptr [ESI + 0xc],0x20      ; 0058caa6
        ;   Label: LAB_0058caa6
    JZ 0x0058cad6                       ; 0058caaa
        ;   XREF to: 0058cad6 (CONDITIONAL_JUMP)  ; LAB_0058cad6
    MOV dword ptr [0x02f0ca4c],0x6bd    ; 0058caac | g_CurrentLineNumber
    LEA EAX,[ESP + 0x9604]              ; 0058cab6
    PUSH EAX                            ; 0058cabd
    MOV ECX,0x64ac4f                    ; 0058cabe | = "..\\core\\skeledit.cpp"
    PUSH 0x64ac64                       ; 0058cac3 | = "Error writing %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058cac8 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058cace
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058cad3
    PUSH 0x6be                          ; 0058cad6
        ;   Label: LAB_0058cad6
    PUSH 0x64ac75                       ; 0058cadb | = "..\\core\\skeledit.cpp"
    PUSH EBX                            ; 0058cae0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058cae1
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058cae6
    PUSH 0x6bf                          ; 0058cae9
    PUSH 0x64ac8a                       ; 0058caee | = "..\\core\\skeledit.cpp"
    PUSH ESI                            ; 0058caf3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058caf4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058caf9
    JMP 0x0058c9b4                      ; 0058cafc
        ;   XREF to: 0058c9b4 (UNCONDITIONAL_JUMP)  ; LAB_0058c9b4
    PUSH ECX                            ; 0058cb01
        ;   Label: LAB_0058cb01
    PUSH 0x8                            ; 0058cb02
    PUSH ECX                            ; 0058cb04
    PUSH ECX                            ; 0058cb05
    LEA EAX,[ESP + 0xa194]              ; 0058cb06
    PUSH EAX                            ; 0058cb0d
    PUSH 0x64ac9f                       ; 0058cb0e | = "Enter number of 256x256 crams"
    MOV EDI,dword ptr [0x00678a60]      ; 0058cb13 | g_CEditorToolsPtr
    PUSH EDI                            ; 0058cb19 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 0058cb1a
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0058cb1f
    TEST EAX,EAX                        ; 0058cb22
    JZ 0x0058c649                       ; 0058cb24
        ;   XREF to: 0058c649 (CONDITIONAL_JUMP)  ; LAB_0058c649
    MOV ESI,0x64acbd                    ; 0058cb2a | = "$$TEST"
    LEA EDI,[ESP + 0x9708]              ; 0058cb2f
    JMP 0x0058c4df                      ; 0058cb36
        ;   XREF to: 0058c4df (UNCONDITIONAL_JUMP)  ; LAB_0058c4df
    PUSH 0x1                            ; 0058cb3b
        ;   Label: LAB_0058cb3b
    PUSH 0x8                            ; 0058cb3d
    PUSH 0x1                            ; 0058cb3f
    PUSH 0x1                            ; 0058cb41
    LEA EAX,[ESP + 0xa194]              ; 0058cb43
    PUSH EAX                            ; 0058cb4a
    PUSH 0x64accc                       ; 0058cb4b | = "Enter number of 256x256 crams"
    MOV EDI,dword ptr [0x00678a60]      ; 0058cb50 | g_CEditorToolsPtr
    PUSH EDI                            ; 0058cb56 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 0058cb57
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0058cb5c
    TEST EAX,EAX                        ; 0058cb5f
    JZ 0x0058c649                       ; 0058cb61
        ;   XREF to: 0058c649 (CONDITIONAL_JUMP)  ; LAB_0058c649
    PUSH EBX                            ; 0058cb67
    LEA EAX,[ESP + 0x970c]              ; 0058cb68
    PUSH EAX                            ; 0058cb6f
    PUSH EBX                            ; 0058cb70
    PUSH EBX                            ; 0058cb71
    MOV EAX,dword ptr [ESP + 0xa240]    ; 0058cb72
    PUSH EAX                            ; 0058cb79
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058cb7a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058cb7f
    PUSH 0x1                            ; 0058cb82
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0058cb84
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
    ADD ESP,0x4                         ; 0058cb89
    PUSH 0x40                           ; 0058cb8c
    CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0 ; 0058cb8e
        ;   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
    ADD ESP,0x4                         ; 0058cb93
    MOV EDX,dword ptr [ESP + 0xa184]    ; 0058cb96
    PUSH EDX                            ; 0058cb9d
    CALL shape_design.c_calculateTextureQualityLevel_FUN_0046a930 ; 0058cb9e
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; int shape_design.c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)
    MOV EDX,EAX                         ; 0058cba3
    MOV ECX,dword ptr [EBP + 0xb8]      ; 0058cba5
    ADD ESP,0x4                         ; 0058cbab
    CMP ECX,0x1                         ; 0058cbae
    JLE 0x0058cbb4                      ; 0058cbb1
        ;   XREF to: 0058cbb4 (CONDITIONAL_JUMP)  ; LAB_0058cbb4
    DEC EAX                             ; 0058cbb3
    PUSH 0x1                            ; 0058cbb4
        ;   Label: LAB_0058cbb4
    INC EAX                             ; 0058cbb6
    XOR DL,DL                           ; 0058cbb7
    PUSH EAX                            ; 0058cbb9
    MOV byte ptr [ESP + EAX*0x1 + 0x970f],DL ; 0058cbba
    LEA EAX,[ESP + 0x9710]              ; 0058cbc1
    PUSH EAX                            ; 0058cbc8
    PUSH 0x64acea                       ; 0058cbc9 | = "Enter crammed texture base name (no p..."
    MOV ESI,dword ptr [0x00678a60]      ; 0058cbce | g_CEditorToolsPtr
    PUSH ESI                            ; 0058cbd4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0058cbd5
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0058cbda
    TEST EAX,EAX                        ; 0058cbdd
    JNZ 0x0058c4f9                      ; 0058cbdf
        ;   XREF to: 0058c4f9 (CONDITIONAL_JUMP)  ; LAB_0058c4f9
    XOR EBX,EBX                         ; 0058cbe5
    MOV EAX,EBX                         ; 0058cbe7
    ADD ESP,0xa218                      ; 0058cbe9
    POP EBP                             ; 0058cbef
    POP EDI                             ; 0058cbf0
    POP ESI                             ; 0058cbf1
    POP EBX                             ; 0058cbf2
    RET                                 ; 0058cbf3
    MOV EDX,dword ptr [ESP + 0xa194]    ; 0058cbf4
        ;   Label: LAB_0058cbf4
    CMP EDX,EAX                         ; 0058cbfb
    JL 0x0058c601                       ; 0058cbfd
        ;   XREF to: 0058c601 (CONDITIONAL_JUMP)  ; LAB_0058c601
    CMP EDX,dword ptr [ESP]             ; 0058cc03
    JG 0x0058c601                       ; 0058cc06
        ;   XREF to: 0058c601 (CONDITIONAL_JUMP)  ; LAB_0058c601
    XOR EBX,EBX                         ; 0058cc0c
    TEST EDX,EDX                        ; 0058cc0e
    JLE 0x0058cc6e                      ; 0058cc10
        ;   XREF to: 0058cc6e (CONDITIONAL_JUMP)  ; LAB_0058cc6e
    LEA EAX,[ESP + 0xa19c]              ; 0058cc12
        ;   Label: LAB_0058cc12
    PUSH EAX                            ; 0058cc19
    LEA EAX,[ESP + 0xa19c]              ; 0058cc1a
    PUSH EAX                            ; 0058cc21
    PUSH 0x64ad67                       ; 0058cc22 | = "%d,%f\n"
    MOV ECX,dword ptr [ESP + 0xa210]    ; 0058cc27
    PUSH ECX                            ; 0058cc2e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058cc2f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0058cc34
    CMP EAX,0x2                         ; 0058cc37
    JNZ 0x0058c601                      ; 0058cc3a
        ;   XREF to: 0058c601 (CONDITIONAL_JUMP)  ; LAB_0058c601
    MOV EAX,dword ptr [ESP + 0xa198]    ; 0058cc40
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x3394] ; 0058cc47
    MOV dword ptr [ESP + 0xa198],EAX    ; 0058cc4e
    FLD float ptr [ESI + EAX*0x4 + 0xc] ; 0058cc55
    FADD float ptr [ESP + 0xa19c]       ; 0058cc59
    INC EBX                             ; 0058cc60
    FSTP float ptr [ESI + EAX*0x4 + 0xc] ; 0058cc61
    CMP EBX,dword ptr [ESP + 0xa194]    ; 0058cc65
    JL 0x0058cc12                       ; 0058cc6c
        ;   XREF to: 0058cc12 (CONDITIONAL_JUMP)  ; LAB_0058cc12
    MOV EAX,dword ptr [ESP + 0xa1c0]    ; 0058cc6e
        ;   Label: LAB_0058cc6e
    MOV EDX,dword ptr [ESP + 0xa1c4]    ; 0058cc75
    INC EDI                             ; 0058cc7c
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0058cc7d
    ADD EAX,0x34                        ; 0058cc80
    ADD EDX,0x4c4                       ; 0058cc83
    MOV dword ptr [ESP + 0xa1c0],EAX    ; 0058cc89
    MOV dword ptr [ESP + 0xa1c4],EDX    ; 0058cc90
    CMP EDI,ECX                         ; 0058cc97
    JL 0x0058c598                       ; 0058cc99
        ;   XREF to: 0058c598 (CONDITIONAL_JUMP)  ; LAB_0058c598
    XOR EDI,EDI                         ; 0058cc9f
        ;   Label: LAB_0058cc9f
    MOV ESI,dword ptr [EBP + 0x7140]    ; 0058cca1
    MOV dword ptr [ESP + 0xa1f8],EDI    ; 0058cca7
    TEST ESI,ESI                        ; 0058ccae
    JLE 0x0058ce34                      ; 0058ccb0
        ;   XREF to: 0058ce34 (CONDITIONAL_JUMP)  ; LAB_0058ce34
    MOV dword ptr [ESP + 0xa1d4],EBP    ; 0058ccb6
    MOV EAX,dword ptr [ESP + 0xa1d4]    ; 0058ccbd
        ;   Label: LAB_0058ccbd
    MOV dword ptr [ESP + 0xa1a4],EAX    ; 0058ccc4
    LEA EAX,[EDI*0x4 + 0x0]             ; 0058cccb
    MOV dword ptr [ESP + 0xa1c8],EAX    ; 0058ccd2
    IMUL EAX,EDI,0x12                   ; 0058ccd9
    MOV dword ptr [ESP + 0xa1cc],EAX    ; 0058ccdc
    IMUL EAX,EDI,0x8c                   ; 0058cce3
    MOV dword ptr [ESP + 0xa1d0],EAX    ; 0058cce9
    MOV EAX,dword ptr [ESP + 0xa1d4]    ; 0058ccf0
    XOR ESI,ESI                         ; 0058ccf7
    MOV EDX,dword ptr [EAX + 0x7164]    ; 0058ccf9
    MOV dword ptr [ESP + 0xa1a0],ESI    ; 0058ccff
    TEST EDX,EDX                        ; 0058cd06
    JLE 0x0058ce06                      ; 0058cd08
        ;   XREF to: 0058ce06 (CONDITIONAL_JUMP)  ; LAB_0058ce06
    MOV EBX,dword ptr [ESP + 0xa040]    ; 0058cd0e
        ;   Label: LAB_0058cd0e
    MOV ESI,dword ptr [ESP + 0xa1d0]    ; 0058cd15
    MOV EAX,dword ptr [ESP + 0xa1cc]    ; 0058cd1c
    ADD EBX,ESI                         ; 0058cd23
    MOV ESI,dword ptr [EBP + 0x7c]      ; 0058cd25
    ADD ESI,EAX                         ; 0058cd28
    MOV EAX,dword ptr [ESP + 0xa1f8]    ; 0058cd2a
    MOV dword ptr [EBX + 0x4],EAX       ; 0058cd31
    MOV EDX,dword ptr [ESP + 0xa1c8]    ; 0058cd34
    MOV EAX,dword ptr [EBP + 0x90]      ; 0058cd3b
    ADD EAX,EDX                         ; 0058cd41
    MOV ECX,EBX                         ; 0058cd43
    MOV EAX,dword ptr [EAX]             ; 0058cd45
    MOV dword ptr [EBX + 0x8],0x0       ; 0058cd47
    MOV EDX,ESI                         ; 0058cd4e
    MOV dword ptr [EBX + 0xc],0xfffe7961 ; 0058cd50
    ADD ESI,0x6                         ; 0058cd57
    MOV dword ptr [EBX],EAX             ; 0058cd5a
    FLD double ptr [0x0064ae0a]         ; 0058cd5c | DOUBLE_0064ae0a
    XOR EAX,EAX                         ; 0058cd62
        ;   Label: LAB_0058cd62
    MOV AX,word ptr [EDX]               ; 0058cd64
    MOV dword ptr [EBX + 0x10],EAX      ; 0058cd67
    XOR EAX,EAX                         ; 0058cd6a
    MOV AX,word ptr [EDX + 0x6]         ; 0058cd6c
    MOV dword ptr [ESP + 0xa20c],EAX    ; 0058cd70
    FILD dword ptr [ESP + 0xa20c]       ; 0058cd77
    FMUL ST1                            ; 0058cd7e
    XOR EAX,EAX                         ; 0058cd80
    FSTP float ptr [ECX + 0x1c]         ; 0058cd82
    MOV AX,word ptr [EDX + 0xc]         ; 0058cd85
    MOV dword ptr [ESP + 0xa20c],EAX    ; 0058cd89
    FILD dword ptr [ESP + 0xa20c]       ; 0058cd90
    FMUL ST1                            ; 0058cd97
    ADD ECX,0x8                         ; 0058cd99
    ADD EBX,0x4                         ; 0058cd9c
    ADD EDX,0x2                         ; 0058cd9f
    FSTP float ptr [ECX + 0x18]         ; 0058cda2
    CMP EDX,ESI                         ; 0058cda5
    JNZ 0x0058cd62                      ; 0058cda7
        ;   XREF to: 0058cd62 (CONDITIONAL_JUMP)  ; LAB_0058cd62
    FSTP ST0                            ; 0058cda9
    MOV ECX,dword ptr [ESP + 0xa1c8]    ; 0058cdab
    MOV EBX,dword ptr [ESP + 0xa1cc]    ; 0058cdb2
    MOV ESI,dword ptr [ESP + 0xa1d0]    ; 0058cdb9
    MOV EAX,dword ptr [ESP + 0xa1a0]    ; 0058cdc0
    MOV EDX,dword ptr [ESP + 0xa1a4]    ; 0058cdc7
    INC EDI                             ; 0058cdce
    ADD ECX,0x4                         ; 0058cdcf
    ADD EBX,0x12                        ; 0058cdd2
    ADD ESI,0x8c                        ; 0058cdd5
    INC EAX                             ; 0058cddb
    MOV dword ptr [ESP + 0xa1c8],ECX    ; 0058cddc
    MOV dword ptr [ESP + 0xa1cc],EBX    ; 0058cde3
    MOV dword ptr [ESP + 0xa1d0],ESI    ; 0058cdea
    MOV ECX,dword ptr [EDX + 0x7164]    ; 0058cdf1
    MOV dword ptr [ESP + 0xa1a0],EAX    ; 0058cdf7
    CMP EAX,ECX                         ; 0058cdfe
    JL 0x0058cd0e                       ; 0058ce00
        ;   XREF to: 0058cd0e (CONDITIONAL_JUMP)  ; LAB_0058cd0e
    MOV EBX,dword ptr [ESP + 0xa1d4]    ; 0058ce06
        ;   Label: LAB_0058ce06
    MOV ESI,dword ptr [ESP + 0xa1f8]    ; 0058ce0d
    MOV EDX,dword ptr [EBP + 0x7140]    ; 0058ce14
    ADD EBX,0x60                        ; 0058ce1a
    INC ESI                             ; 0058ce1d
    MOV dword ptr [ESP + 0xa1d4],EBX    ; 0058ce1e
    MOV dword ptr [ESP + 0xa1f8],ESI    ; 0058ce25
    CMP ESI,EDX                         ; 0058ce2c
    JL 0x0058ccbd                       ; 0058ce2e
        ;   XREF to: 0058ccbd (CONDITIONAL_JUMP)  ; LAB_0058ccbd
    XOR ECX,ECX                         ; 0058ce34
        ;   Label: LAB_0058ce34
    MOV EBX,dword ptr [EBP + 0x7140]    ; 0058ce36
    MOV dword ptr [ESP + 0xa1f4],ECX    ; 0058ce3c
    TEST EBX,EBX                        ; 0058ce43
    JLE 0x0058cfd5                      ; 0058ce45
        ;   XREF to: 0058cfd5 (CONDITIONAL_JUMP)  ; LAB_0058cfd5
    MOV dword ptr [ESP + 0xa1e4],EBP    ; 0058ce4b
    XOR EAX,EAX                         ; 0058ce52
        ;   Label: LAB_0058ce52
    MOV dword ptr [ESP + 0xa1a8],EAX    ; 0058ce54
    MOV EAX,dword ptr [ESP + 0xa1e4]    ; 0058ce5b
    MOV dword ptr [ESP + 0xa1ac],EAX    ; 0058ce62
    LEA EAX,[EDI*0x4 + 0x0]             ; 0058ce69
    MOV dword ptr [ESP + 0xa1d8],EAX    ; 0058ce70
    IMUL EAX,EDI,0x12                   ; 0058ce77
    MOV dword ptr [ESP + 0xa1dc],EAX    ; 0058ce7a
    IMUL EAX,EDI,0x8c                   ; 0058ce81
    MOV dword ptr [ESP + 0xa1e0],EAX    ; 0058ce87
    MOV EAX,dword ptr [ESP + 0xa1e4]    ; 0058ce8e
    CMP dword ptr [EAX + 0x7178],0x0    ; 0058ce95
    JLE 0x0058cfa7                      ; 0058ce9c
        ;   XREF to: 0058cfa7 (CONDITIONAL_JUMP)  ; LAB_0058cfa7
    MOV EBX,dword ptr [ESP + 0xa040]    ; 0058cea2
        ;   Label: LAB_0058cea2
    MOV ESI,dword ptr [ESP + 0xa1e0]    ; 0058cea9
    MOV EAX,dword ptr [ESP + 0xa1dc]    ; 0058ceb0
    ADD EBX,ESI                         ; 0058ceb7
    MOV ESI,dword ptr [EBP + 0x7c]      ; 0058ceb9
    ADD ESI,EAX                         ; 0058cebc
    MOV EAX,dword ptr [ESP + 0xa1f4]    ; 0058cebe
    MOV dword ptr [EBX + 0x4],EAX       ; 0058cec5
    MOV EDX,dword ptr [ESP + 0xa1d8]    ; 0058cec8
    MOV EAX,dword ptr [EBP + 0x90]      ; 0058cecf
    ADD EAX,EDX                         ; 0058ced5
    MOV EAX,dword ptr [EAX]             ; 0058ced7
    MOV dword ptr [EBX + 0x8],0x1       ; 0058ced9
    MOV dword ptr [EBX],EAX             ; 0058cee0
    MOV EDX,EDI                         ; 0058cee2
    MOV ECX,dword ptr [EBP + 0x54]      ; 0058cee4
    MOV EAX,dword ptr [EBP + 0xa4]      ; 0058cee7
    SUB EDX,ECX                         ; 0058ceed
    MOV ECX,EBX                         ; 0058ceef
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0058cef1
    MOV EDX,ESI                         ; 0058cef4
    MOV dword ptr [EBX + 0xc],EAX       ; 0058cef6
    ADD ESI,0x6                         ; 0058cef9
    FLD double ptr [0x0064ae0a]         ; 0058cefc | DOUBLE_0064ae0a
    XOR EAX,EAX                         ; 0058cf02
        ;   Label: LAB_0058cf02
    MOV AX,word ptr [EDX]               ; 0058cf04
    MOV dword ptr [EBX + 0x10],EAX      ; 0058cf07
    XOR EAX,EAX                         ; 0058cf0a
    MOV AX,word ptr [EDX + 0x6]         ; 0058cf0c
    MOV dword ptr [ESP + 0xa20c],EAX    ; 0058cf10
    FILD dword ptr [ESP + 0xa20c]       ; 0058cf17
    FMUL ST1                            ; 0058cf1e
    XOR EAX,EAX                         ; 0058cf20
    FSTP float ptr [ECX + 0x1c]         ; 0058cf22
    MOV AX,word ptr [EDX + 0xc]         ; 0058cf25
    MOV dword ptr [ESP + 0xa20c],EAX    ; 0058cf29
    FILD dword ptr [ESP + 0xa20c]       ; 0058cf30
    FMUL ST1                            ; 0058cf37
    ADD ECX,0x8                         ; 0058cf39
    ADD EBX,0x4                         ; 0058cf3c
    ADD EDX,0x2                         ; 0058cf3f
    FSTP float ptr [ECX + 0x18]         ; 0058cf42
    CMP EDX,ESI                         ; 0058cf45
    JNZ 0x0058cf02                      ; 0058cf47
        ;   XREF to: 0058cf02 (CONDITIONAL_JUMP)  ; LAB_0058cf02
    FSTP ST0                            ; 0058cf49
    MOV EBX,dword ptr [ESP + 0xa1d8]    ; 0058cf4b
    MOV ESI,dword ptr [ESP + 0xa1dc]    ; 0058cf52
    MOV EAX,dword ptr [ESP + 0xa1e0]    ; 0058cf59
    MOV EDX,dword ptr [ESP + 0xa1a8]    ; 0058cf60
    INC EDI                             ; 0058cf67
    ADD EBX,0x4                         ; 0058cf68
    ADD EAX,0x8c                        ; 0058cf6b
    INC EDX                             ; 0058cf70
    MOV dword ptr [ESP + 0xa1e0],EAX    ; 0058cf71
    MOV dword ptr [ESP + 0xa1a8],EDX    ; 0058cf78
    MOV EAX,EDX                         ; 0058cf7f
    MOV EDX,dword ptr [ESP + 0xa1ac]    ; 0058cf81
    ADD ESI,0x12                        ; 0058cf88
    MOV dword ptr [ESP + 0xa1d8],EBX    ; 0058cf8b
    MOV ECX,dword ptr [EDX + 0x7178]    ; 0058cf92
    MOV dword ptr [ESP + 0xa1dc],ESI    ; 0058cf98
    CMP EAX,ECX                         ; 0058cf9f
    JL 0x0058cea2                       ; 0058cfa1
        ;   XREF to: 0058cea2 (CONDITIONAL_JUMP)  ; LAB_0058cea2
    MOV ECX,dword ptr [ESP + 0xa1e4]    ; 0058cfa7
        ;   Label: LAB_0058cfa7
    MOV EBX,dword ptr [ESP + 0xa1f4]    ; 0058cfae
    MOV ESI,dword ptr [EBP + 0x7140]    ; 0058cfb5
    ADD ECX,0x60                        ; 0058cfbb
    INC EBX                             ; 0058cfbe
    MOV dword ptr [ESP + 0xa1e4],ECX    ; 0058cfbf
    MOV dword ptr [ESP + 0xa1f4],EBX    ; 0058cfc6
    CMP EBX,ESI                         ; 0058cfcd
    JL 0x0058ce52                       ; 0058cfcf
        ;   XREF to: 0058ce52 (CONDITIONAL_JUMP)  ; LAB_0058ce52
    MOV EAX,0x2                         ; 0058cfd5
        ;   Label: LAB_0058cfd5
    MOV EDX,0x1                         ; 0058cfda
    MOV EDI,0x4                         ; 0058cfdf
    XOR ESI,ESI                         ; 0058cfe4
    MOV dword ptr [ESP + 0xa050],EAX    ; 0058cfe6
    MOV dword ptr [ESP + 0xa05c],EDX    ; 0058cfed
    MOV dword ptr [ESP + 0xa058],EDX    ; 0058cff4
    MOV dword ptr [ESP + 0xa060],EDX    ; 0058cffb
    MOV dword ptr [ESP + 0xa064],ESI    ; 0058d002
    MOV EAX,dword ptr [ESP]             ; 0058d009
    MOV dword ptr [ESP + 0xa04c],EDI    ; 0058d00c
    MOV dword ptr [ESP + 0xa054],EAX    ; 0058d013
    MOV EDI,dword ptr [EBP + 0xbc]      ; 0058d01a
    XOR EAX,EAX                         ; 0058d020
    TEST EDI,EDI                        ; 0058d022
    JLE 0x0058d050                      ; 0058d024
        ;   XREF to: 0058d050 (CONDITIONAL_JUMP)  ; LAB_0058d050
    MOV EDX,EBP                         ; 0058d026
    IMUL EDI,EAX,0x48                   ; 0058d028
        ;   Label: LAB_0058d028
    MOV ECX,dword ptr [ESP + 0xa048]    ; 0058d02b
    LEA ESI,[EDX + 0xc0]                ; 0058d032
    ADD EDI,ECX                         ; 0058d038
    MOV ECX,0x12                        ; 0058d03a
    MOVSD.REP ES:EDI,ESI                ; 0058d03f
    INC EAX                             ; 0058d041
    MOV EBX,dword ptr [EBP + 0xbc]      ; 0058d042
    ADD EDX,0x48                        ; 0058d048
    CMP EAX,EBX                         ; 0058d04b
    JL 0x0058d028                       ; 0058d04d
        ;   XREF to: 0058d028 (CONDITIONAL_JUMP)  ; LAB_0058d028
    NOP                                 ; 0058d04f
    PUSH 0x75a                          ; 0058d050
        ;   Label: LAB_0058d050
    PUSH 0x64ad6e                       ; 0058d055 | = "..\\core\\skeledit.cpp"
    MOV ESI,dword ptr [ESP + 0xa20c]    ; 0058d05a
    PUSH ESI                            ; 0058d061
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058d062
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058d067
    LEA EAX,[ESP + 0xa034]              ; 0058d06a
    PUSH EAX                            ; 0058d071
    CALL shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 ; 0058d072
        ;   XREF to: 0051b330 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0058d077
    LEA EAX,[ESP + 0xa034]              ; 0058d07a
    PUSH EAX                            ; 0058d081
    LEA EAX,[ESP + 0x9edc]              ; 0058d082
    PUSH EAX                            ; 0058d089
    CALL shape_meshlod.cpp_CLodMesh_copy_FUN_00515860 ; 0058d08a
        ;   XREF to: 00515860 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copy_FUN_00515860(CLodMesh * this_ptr, CLodMesh * other)
    ADD ESP,0x8                         ; 0058d08f
    LEA EAX,[ESP + 0x9ed8]              ; 0058d092
    PUSH EAX                            ; 0058d099
    MOV EDI,0x4                         ; 0058d09a
    CALL shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0 ; 0058d09f
        ;   XREF to: 0051bcc0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh * this_ptr)
    MOV EAX,0x2                         ; 0058d0a4
    MOV EDX,0x1                         ; 0058d0a9
    ADD ESP,0x4                         ; 0058d0ae
    XOR ECX,ECX                         ; 0058d0b1
    MOV dword ptr [ESP + 0x9ef0],EDI    ; 0058d0b3
    MOV dword ptr [ESP + 0x9ef4],EAX    ; 0058d0ba
    MOV dword ptr [ESP + 0x9f00],EDX    ; 0058d0c1
    MOV dword ptr [ESP + 0x9efc],ECX    ; 0058d0c8
    MOV EAX,dword ptr [ESP]             ; 0058d0cf
    MOV dword ptr [ESP + 0x9f04],EDX    ; 0058d0d2
    MOV dword ptr [ESP + 0x9ef8],EAX    ; 0058d0d9
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058d0e0
    MOV dword ptr [ESP + 0x9f08],ECX    ; 0058d0e7
    MOV dword ptr [0x0067d394],EDX      ; 0058d0ee | g_EnableMidpointSampling
    MOV EDX,dword ptr [EAX + 0x308]     ; 0058d0f4
    MOV dword ptr [0x02f33330],ECX      ; 0058d0fa | g_LodReplayMode
    CMP EDX,0x2                         ; 0058d100
    JNZ 0x0058d2bf                      ; 0058d103
        ;   XREF to: 0058d2bf (CONDITIONAL_JUMP)  ; LAB_0058d2bf
    PUSH 0x649e31                       ; 0058d109 | = "wt"
    MOV EBX,EAX                         ; 0058d10e
    MOV dword ptr [EAX + 0x30c],ECX     ; 0058d110
    LEA EAX,[ESP + 0xa038]              ; 0058d116
    PUSH EAX                            ; 0058d11d
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 0058d11e
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    ADD ESP,0x8                         ; 0058d123
    MOV dword ptr [ESP + 0xa06c],EAX    ; 0058d126
    TEST EAX,EAX                        ; 0058d12d
    JNZ 0x0058d154                      ; 0058d12f
        ;   XREF to: 0058d154 (CONDITIONAL_JUMP)  ; LAB_0058d154
    MOV EDI,0x649e34                    ; 0058d131 | = "..\\core\\skeledit.cpp"
    MOV EBP,0x179                       ; 0058d136
    PUSH 0x649e49                       ; 0058d13b | = "Can't create mesh precompute file."
    MOV dword ptr [0x02f0ca48],EDI      ; 0058d140 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058d146 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058d14c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058d151
    MOV EAX,dword ptr [ESP + 0xa06c]    ; 0058d154
        ;   Label: LAB_0058d154
    PUSH EAX                            ; 0058d15b
    PUSH EBX                            ; 0058d15c
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0 ; 0058d15d
        ;   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058d162
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058d165
    PUSH 0x2                            ; 0058d16c
    MOV EDX,dword ptr [EAX + 0x300]     ; 0058d16e
    PUSH EDX                            ; 0058d174
    LEA EAX,[ESP + 0xa03c]              ; 0058d175
    PUSH EAX                            ; 0058d17c
    CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 ; 0058d17d
        ;   XREF to: 00516ba0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh * this_ptr, int target_tri_count, int render_mode)
    ADD ESP,0xc                         ; 0058d182
    MOV ECX,0x1                         ; 0058d185
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058d18a
    PUSH 0x649e31                       ; 0058d191 | = "wt"
    MOV EBX,EAX                         ; 0058d196
    MOV dword ptr [EAX + 0x30c],ECX     ; 0058d198
    LEA EAX,[ESP + 0x9edc]              ; 0058d19e
    PUSH EAX                            ; 0058d1a5
    MOV dword ptr [0x02f33330],ECX      ; 0058d1a6 | g_LodReplayMode
    CALL shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 ; 0058d1ac
        ;   XREF to: 0051b770 (UNCONDITIONAL_CALL)  ; _FILE * shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(CLodMesh * this_ptr, char * mode)
    ADD ESP,0x8                         ; 0058d1b1
    MOV dword ptr [ESP + 0x9f10],EAX    ; 0058d1b4
    TEST EAX,EAX                        ; 0058d1bb
    JZ 0x0058d297                       ; 0058d1bd
        ;   XREF to: 0058d297 (CONDITIONAL_JUMP)  ; LAB_0058d297
    MOV EBP,dword ptr [ESP + 0x9f10]    ; 0058d1c3
        ;   Label: LAB_0058d1c3
    PUSH EBP                            ; 0058d1ca
    PUSH EBX                            ; 0058d1cb
    CALL core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0 ; 0058d1cc
        ;   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058d1d1
    MOV EAX,dword ptr [ESP + 0xa230]    ; 0058d1d4
    PUSH 0x0                            ; 0058d1db
    MOV EDX,dword ptr [EAX + 0x304]     ; 0058d1dd
    PUSH EDX                            ; 0058d1e3
    LEA EAX,[ESP + 0x9ee0]              ; 0058d1e4
    PUSH EAX                            ; 0058d1eb
    CALL shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 ; 0058d1ec
        ;   XREF to: 00516ba0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0(CLodMesh * this_ptr, int target_tri_count, int render_mode)
    ADD ESP,0xc                         ; 0058d1f1
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 0058d1f4
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    PUSH 0x649df5                       ; 0058d1f9 | = "dixie.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 0058d1fe
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 0058d203
    PUSH 0x0                            ; 0058d206
    MOV ECX,dword ptr [0x00678a60]      ; 0058d208 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058d20e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 ; 0058d20f
        ;   XREF to: 0049e940 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
    ADD ESP,0x8                         ; 0058d214
    PUSH 0x649e18                       ; 0058d217 | = "LOD generation complete!"
    MOV EBX,dword ptr [0x00678a60]      ; 0058d21c | g_CEditorToolsPtr
    PUSH EBX                            ; 0058d222 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 ; 0058d223
        ;   XREF to: 0049e870 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0058d228
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0058d22b
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    XOR EBX,EBX                         ; 0058d230
    MOV ESI,EAX                         ; 0058d232
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0058d234
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0058d234
    MOV EDX,EAX                         ; 0058d239
    SUB EAX,ESI                         ; 0058d23b
    TEST EAX,EAX                        ; 0058d23d
    JLE 0x0058d243                      ; 0058d23f
        ;   XREF to: 0058d243 (CONDITIONAL_JUMP)  ; LAB_0058d243
    ADD EBX,EAX                         ; 0058d241
    MOV ESI,EDX                         ; 0058d243
        ;   Label: LAB_0058d243
    CMP EBX,0x360000                    ; 0058d245
    JL 0x0058d234                       ; 0058d24b
        ;   XREF to: 0058d234 (CONDITIONAL_JUMP)  ; LAB_0058d234
    MOV EBP,dword ptr [0x00678a60]      ; 0058d24d | g_CEditorToolsPtr
    PUSH EBP                            ; 0058d253 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0058d254
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0058d259
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 0058d25c
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    PUSH 0x0                            ; 0058d261
    LEA EAX,[ESP + 0x9edc]              ; 0058d263
    PUSH EAX                            ; 0058d26a
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d26b
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d270
    PUSH 0x0                            ; 0058d273
    LEA EAX,[ESP + 0xa038]              ; 0058d275
    PUSH EAX                            ; 0058d27c
    MOV EBX,0x1                         ; 0058d27d
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d282
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d287
    MOV EAX,EBX                         ; 0058d28a
    ADD ESP,0xa218                      ; 0058d28c
    POP EBP                             ; 0058d292
    POP EDI                             ; 0058d293
    POP ESI                             ; 0058d294
    POP EBX                             ; 0058d295
    RET                                 ; 0058d296
    MOV ESI,0x649e34                    ; 0058d297 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058d297
    MOV EDI,0x179                       ; 0058d29c
    PUSH 0x649e49                       ; 0058d2a1 | = "Can't create mesh precompute file."
    MOV dword ptr [0x02f0ca48],ESI      ; 0058d2a6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0058d2ac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058d2b2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058d2b7
    JMP 0x0058d1c3                      ; 0058d2ba
        ;   XREF to: 0058d1c3 (UNCONDITIONAL_JUMP)  ; LAB_0058d1c3
    PUSH 0x2                            ; 0058d2bf
        ;   Label: LAB_0058d2bf
    PUSH EAX                            ; 0058d2c1
    MOV dword ptr [EAX + 0x30c],ECX     ; 0058d2c2
    LEA EAX,[ESP + 0xa03c]              ; 0058d2c8
    PUSH EAX                            ; 0058d2cf
    CALL core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 ; 0058d2d0
        ;   XREF to: 00589c20 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh * this_ptr, CLodMeshPrecomputeEntry * entry, int render_mode)
    ADD ESP,0xc                         ; 0058d2d5
    MOV dword ptr [ESP + 0xa18c],EAX    ; 0058d2d8
    TEST EAX,EAX                        ; 0058d2df
    JL 0x0058d5ef                       ; 0058d2e1
        ;   XREF to: 0058d5ef (CONDITIONAL_JUMP)  ; LAB_0058d5ef
    JNZ 0x0058d620                      ; 0058d2e7
        ;   XREF to: 0058d620 (CONDITIONAL_JUMP)  ; LAB_0058d620
    LEA EAX,[EAX]                       ; 0058d2ed
    MOV EDI,dword ptr [EBP]             ; 0058d2f0
        ;   Label: LAB_0058d2f0
    XOR EBX,EBX                         ; 0058d2f3
    TEST EDI,EDI                        ; 0058d2f5
    JLE 0x0058d450                      ; 0058d2f7
        ;   XREF to: 0058d450 (CONDITIONAL_JUMP)  ; LAB_0058d450
    LEA EAX,[EBP + 0xc0]                ; 0058d2fd
    MOV dword ptr [ESP + 0xa1e8],EBX    ; 0058d303
    MOV dword ptr [ESP + 0xa1b0],EAX    ; 0058d30a
    MOV EDI,dword ptr [EBP]             ; 0058d311
        ;   Label: LAB_0058d311
    PUSH EDI                            ; 0058d314
    PUSH EBX                            ; 0058d315
    PUSH 0x64ad83                       ; 0058d316 | = "Extracting LOD %d of %d"
    MOV EAX,[0x00678a60]                ; 0058d31b | g_CEditorToolsPtr
    PUSH EAX                            ; 0058d320 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058d321
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x10                        ; 0058d326
    LEA EAX,[ESP + 0x9f4c]              ; 0058d329
    PUSH EAX                            ; 0058d330
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 0058d331
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0058d336
    CMP dword ptr [ESP + 0xa18c],0x0    ; 0058d339
    JZ 0x0058d67d                       ; 0058d341
        ;   XREF to: 0058d67d (CONDITIONAL_JUMP)  ; LAB_0058d67d
    LEA EAX,[ESP + 0x9f4c]              ; 0058d347
    PUSH EAX                            ; 0058d34e
    MOV EAX,dword ptr [ESP + 0xa1ec]    ; 0058d34f
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0xa140] ; 0058d356
    PUSH ECX                            ; 0058d35d
    LEA EAX,[ESP + 0xa03c]              ; 0058d35e
    PUSH EAX                            ; 0058d365
    CALL shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 ; 0058d366
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh * this_ptr)
    ADD ESP,0xc                         ; 0058d36b
    LEA EAX,[ESP + 0x9f4c]              ; 0058d36e
        ;   Label: LAB_0058d36e
    PUSH EAX                            ; 0058d375
    CALL shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 ; 0058d376
        ;   XREF to: 0051bac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0058d37b
    TEST EBX,EBX                        ; 0058d37e
    JNZ 0x0058d407                      ; 0058d380
        ;   XREF to: 0058d407 (CONDITIONAL_JUMP)  ; LAB_0058d407
    MOV EAX,dword ptr [ESP + 0x9f5c]    ; 0058d386
    CMP EAX,dword ptr [ESP + 0xa188]    ; 0058d38d
    JZ 0x0058d3b8                       ; 0058d394
        ;   XREF to: 0058d3b8 (CONDITIONAL_JUMP)  ; LAB_0058d3b8
    MOV EDI,0x64ad9b                    ; 0058d396 | = "..\\core\\skeledit.cpp"
    MOV EAX,0x7bc                       ; 0058d39b
    PUSH 0x64adb0                       ; 0058d3a0 | = "Texture cram count mismatch!"
    MOV dword ptr [0x02f0ca48],EDI      ; 0058d3a5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0058d3ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058d3b0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058d3b5
    MOV EDX,dword ptr [ESP + 0x9f5c]    ; 0058d3b8
        ;   Label: LAB_0058d3b8
    XOR ECX,ECX                         ; 0058d3bf
    TEST EDX,EDX                        ; 0058d3c1
    JLE 0x0058d407                      ; 0058d3c3
        ;   XREF to: 0058d407 (CONDITIONAL_JUMP)  ; LAB_0058d407
    MOV EDX,dword ptr [ESP + 0xa1b0]    ; 0058d3c5
    ADD EDX,0x8                         ; 0058d3cc
    IMUL ESI,ECX,0x48                   ; 0058d3cf
        ;   Label: LAB_0058d3cf
    ADD ESI,dword ptr [ESP + 0x9f60]    ; 0058d3d2
    ADD ESI,0x8                         ; 0058d3d9
    MOV EDI,EDX                         ; 0058d3dc
    INC ECX                             ; 0058d3de
    PUSH EDI                            ; 0058d3df
    MOV AL,byte ptr [ESI]               ; 0058d3e0
        ;   Label: LAB_0058d3e0
    MOV byte ptr [EDI],AL               ; 0058d3e2
    CMP AL,0x0                          ; 0058d3e4
    JZ 0x0058d3f8                       ; 0058d3e6
        ;   XREF to: 0058d3f8 (CONDITIONAL_JUMP)  ; LAB_0058d3f8
    MOV AL,byte ptr [ESI + 0x1]         ; 0058d3e8
    ADD ESI,0x2                         ; 0058d3eb
    MOV byte ptr [EDI + 0x1],AL         ; 0058d3ee
    ADD EDI,0x2                         ; 0058d3f1
    CMP AL,0x0                          ; 0058d3f4
    JNZ 0x0058d3e0                      ; 0058d3f6
        ;   XREF to: 0058d3e0 (CONDITIONAL_JUMP)  ; LAB_0058d3e0
    POP EDI                             ; 0058d3f8
        ;   Label: LAB_0058d3f8
    MOV EAX,dword ptr [ESP + 0x9f5c]    ; 0058d3f9
    ADD EDX,0x48                        ; 0058d400
    CMP ECX,EAX                         ; 0058d403
    JL 0x0058d3cf                       ; 0058d405
        ;   XREF to: 0058d3cf (CONDITIONAL_JUMP)  ; LAB_0058d3cf
    LEA EAX,[ESP + 0x7d08]              ; 0058d407
        ;   Label: LAB_0058d407
    PUSH EAX                            ; 0058d40e
    LEA EAX,[ESP + 0x9f50]              ; 0058d40f
    PUSH EAX                            ; 0058d416
    PUSH EBX                            ; 0058d417
    PUSH EBP                            ; 0058d418
    CALL core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790 ; 0058d419
        ;   XREF to: 0058d790 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel * this_ptr, int lod_index, CLodMesh * lod_mesh, CMatrix3x4f * inverse_matrices)
    ADD ESP,0x10                        ; 0058d41e
    PUSH 0x0                            ; 0058d421
    LEA EAX,[ESP + 0x9f50]              ; 0058d423
    PUSH EAX                            ; 0058d42a
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d42b
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d430
    MOV EAX,dword ptr [ESP + 0xa1e8]    ; 0058d433
    INC EBX                             ; 0058d43a
    ADD EAX,0x4                         ; 0058d43b
    MOV EDX,dword ptr [EBP]             ; 0058d43e
    MOV dword ptr [ESP + 0xa1e8],EAX    ; 0058d441
    CMP EBX,EDX                         ; 0058d448
    JL 0x0058d311                       ; 0058d44a
        ;   XREF to: 0058d311 (CONDITIONAL_JUMP)  ; LAB_0058d311
    MOV dword ptr [EBP + 0x8],0x0       ; 0058d450
        ;   Label: LAB_0058d450
    MOV ECX,0xf423f                     ; 0058d457
    MOV dword ptr [EBP + 0x4],0xf423f   ; 0058d45c
    MOV dword ptr [ESP + 0xa13c],ECX    ; 0058d463
    CMP dword ptr [EBP],0x5             ; 0058d46a
    JL 0x0058d69a                       ; 0058d46e
        ;   XREF to: 0058d69a (CONDITIONAL_JUMP)  ; LAB_0058d69a
    MOV ECX,0x1                         ; 0058d474
        ;   Label: LAB_0058d474
    MOV EBX,dword ptr [EBP + 0xb8]      ; 0058d479
    MOV dword ptr [ESP + 0xa1f0],ECX    ; 0058d47f
    CMP EBX,ECX                         ; 0058d486
    JLE 0x0058d5ac                      ; 0058d488
        ;   XREF to: 0058d5ac (CONDITIONAL_JUMP)  ; LAB_0058d5ac
    LEA EAX,[EBP + 0x1740]              ; 0058d48e
    MOV dword ptr [ESP + 0xa1ec],EAX    ; 0058d494
    MOV ESI,dword ptr [ESP + 0xa1f0]    ; 0058d49b
        ;   Label: LAB_0058d49b
    PUSH ESI                            ; 0058d4a2
    LEA EAX,[ESP + 0x970c]              ; 0058d4a3
    PUSH EAX                            ; 0058d4aa
    PUSH 0x64adcd                       ; 0058d4ab | = "%s%d"
    LEA EAX,[ESP + 0xa0b4]              ; 0058d4b0
    PUSH EAX                            ; 0058d4b7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058d4b8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0058d4bd
    PUSH 0x0                            ; 0058d4c0
    PUSH ESI                            ; 0058d4c2
    PUSH 0x100                          ; 0058d4c3
    MOV EAX,dword ptr [ESP + 0xa190]    ; 0058d4c8
    PUSH EAX                            ; 0058d4cf
    LEA EAX,[ESP + 0xa0b8]              ; 0058d4d0
    PUSH EAX                            ; 0058d4d7
    PUSH EBP                            ; 0058d4d8
    CALL core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70 ; 0058d4d9
        ;   XREF to: 0058de70 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel * this_ptr, char * base_name, int num_crams, int atlas_dimension, ...)
    ADD ESP,0x18                        ; 0058d4de
    CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860 ; 0058d4e1
        ;   XREF to: 0046a860 (UNCONDITIONAL_CALL)  ; int shape_design.c_getLastTextureProcessIndex_FUN_0046a860()
    CMP EAX,dword ptr [ESP + 0xa188]    ; 0058d4e6
    JZ 0x0058d512                       ; 0058d4ed
        ;   XREF to: 0058d512 (CONDITIONAL_JUMP)  ; LAB_0058d512
    MOV ECX,0x64add2                    ; 0058d4ef | = "..\\core\\skeledit.cpp"
    MOV EBX,0x7fe                       ; 0058d4f4
    PUSH 0x64ade7                       ; 0058d4f9 | = "Cram getNumCramsUsed() mismatch!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058d4fe | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058d504 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058d50a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058d50f
    XOR ESI,ESI                         ; 0058d512
        ;   Label: LAB_0058d512
    MOV EDI,dword ptr [ESP + 0xa188]    ; 0058d514
    MOV dword ptr [ESP + 0xa1b4],ESI    ; 0058d51b
    TEST EDI,EDI                        ; 0058d522
    JLE 0x0058d57b                      ; 0058d524
        ;   XREF to: 0058d57b (CONDITIONAL_JUMP)  ; LAB_0058d57b
    MOV EBX,dword ptr [ESP + 0xa1ec]    ; 0058d526
    ADD EBX,0x8                         ; 0058d52d
    MOV EAX,dword ptr [ESP + 0xa1b4]    ; 0058d530
        ;   Label: LAB_0058d530
    PUSH EAX                            ; 0058d537
    MOV EDI,EBX                         ; 0058d538
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0058d53a
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)  ; char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
    ADD EBX,0x48                        ; 0058d53f
    ADD ESP,0x4                         ; 0058d542
    MOV ESI,EAX                         ; 0058d545
    MOV EDX,dword ptr [ESP + 0xa1b4]    ; 0058d547
    PUSH EDI                            ; 0058d54e
    MOV AL,byte ptr [ESI]               ; 0058d54f
        ;   Label: LAB_0058d54f
    MOV byte ptr [EDI],AL               ; 0058d551
    CMP AL,0x0                          ; 0058d553
    JZ 0x0058d567                       ; 0058d555
        ;   XREF to: 0058d567 (CONDITIONAL_JUMP)  ; LAB_0058d567
    MOV AL,byte ptr [ESI + 0x1]         ; 0058d557
    ADD ESI,0x2                         ; 0058d55a
    MOV byte ptr [EDI + 0x1],AL         ; 0058d55d
    ADD EDI,0x2                         ; 0058d560
    CMP AL,0x0                          ; 0058d563
    JNZ 0x0058d54f                      ; 0058d565
        ;   XREF to: 0058d54f (CONDITIONAL_JUMP)  ; LAB_0058d54f
    POP EDI                             ; 0058d567
        ;   Label: LAB_0058d567
    INC EDX                             ; 0058d568
    MOV ECX,dword ptr [ESP + 0xa188]    ; 0058d569
    MOV dword ptr [ESP + 0xa1b4],EDX    ; 0058d570
    CMP EDX,ECX                         ; 0058d577
    JL 0x0058d530                       ; 0058d579
        ;   XREF to: 0058d530 (CONDITIONAL_JUMP)  ; LAB_0058d530
    MOV EDX,dword ptr [ESP + 0xa1ec]    ; 0058d57b
        ;   Label: LAB_0058d57b
    MOV ECX,dword ptr [ESP + 0xa1f0]    ; 0058d582
    MOV EBX,dword ptr [EBP + 0xb8]      ; 0058d589
    ADD EDX,0x1680                      ; 0058d58f
    INC ECX                             ; 0058d595
    MOV dword ptr [ESP + 0xa1ec],EDX    ; 0058d596
    MOV dword ptr [ESP + 0xa1f0],ECX    ; 0058d59d
    CMP ECX,EBX                         ; 0058d5a4
    JL 0x0058d49b                       ; 0058d5a6
        ;   XREF to: 0058d49b (CONDITIONAL_JUMP)  ; LAB_0058d49b
    MOV EAX,dword ptr [ESP + 0xa188]    ; 0058d5ac
        ;   Label: LAB_0058d5ac
    PUSH 0x0                            ; 0058d5b3
    MOV dword ptr [EBP + 0xbc],EAX      ; 0058d5b5
    LEA EAX,[ESP + 0x9edc]              ; 0058d5bb
    PUSH EAX                            ; 0058d5c2
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d5c3
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d5c8
    PUSH 0x0                            ; 0058d5cb
    LEA EAX,[ESP + 0xa038]              ; 0058d5cd
    PUSH EAX                            ; 0058d5d4
    MOV EBX,0x1                         ; 0058d5d5
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d5da
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d5df
    MOV EAX,EBX                         ; 0058d5e2
    ADD ESP,0xa218                      ; 0058d5e4
    POP EBP                             ; 0058d5ea
    POP EDI                             ; 0058d5eb
    POP ESI                             ; 0058d5ec
    POP EBX                             ; 0058d5ed
    RET                                 ; 0058d5ee
    XOR EBX,EBX                         ; 0058d5ef
        ;   Label: LAB_0058d5ef
    PUSH EBX                            ; 0058d5f1
    LEA EAX,[ESP + 0x9edc]              ; 0058d5f2
    PUSH EAX                            ; 0058d5f9
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d5fa
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d5ff
    PUSH EBX                            ; 0058d602
    LEA EAX,[ESP + 0xa038]              ; 0058d603
    PUSH EAX                            ; 0058d60a
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d60b
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d610
    MOV EAX,EBX                         ; 0058d613
    ADD ESP,0xa218                      ; 0058d615
    POP EBP                             ; 0058d61b
    POP EDI                             ; 0058d61c
    POP ESI                             ; 0058d61d
    POP EBX                             ; 0058d61e
    RET                                 ; 0058d61f
    PUSH 0x2                            ; 0058d620
        ;   Label: LAB_0058d620
    PUSH 0x5                            ; 0058d622
    LEA EAX,[ESP + 0xa144]              ; 0058d624
    PUSH EAX                            ; 0058d62b
    LEA EAX,[ESP + 0xa15c]              ; 0058d62c
    PUSH EAX                            ; 0058d633
    LEA EAX,[ESP + 0xa044]              ; 0058d634
    PUSH EAX                            ; 0058d63b
    CALL shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 ; 0058d63c
        ;   XREF to: 0051d990 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)
    ADD ESP,0x14                        ; 0058d641
    MOV dword ptr [EBP],EAX             ; 0058d644
    CMP EAX,0x1                         ; 0058d647
    JL 0x0058d5ef                       ; 0058d64a
        ;   XREF to: 0058d5ef (CONDITIONAL_JUMP)  ; LAB_0058d5ef
    XOR EDX,EDX                         ; 0058d64c
    TEST EAX,EAX                        ; 0058d64e
    JLE 0x0058d2f0                      ; 0058d650
        ;   XREF to: 0058d2f0 (CONDITIONAL_JUMP)  ; LAB_0058d2f0
    MOV EAX,EBP                         ; 0058d656
    XOR ECX,ECX                         ; 0058d658
    ADD EAX,0x8                         ; 0058d65a
        ;   Label: LAB_0058d65a
    MOV EBX,dword ptr [ESP + ECX*0x1 + 0xa150] ; 0058d65d
    MOV dword ptr [EAX],0x0             ; 0058d664
    MOV dword ptr [EAX + -0x4],EBX      ; 0058d66a
    INC EDX                             ; 0058d66d
    MOV ESI,dword ptr [EBP]             ; 0058d66e
    ADD ECX,0x4                         ; 0058d671
    CMP EDX,ESI                         ; 0058d674
    JL 0x0058d65a                       ; 0058d676
        ;   XREF to: 0058d65a (CONDITIONAL_JUMP)  ; LAB_0058d65a
    JMP 0x0058d2f0                      ; 0058d678
        ;   XREF to: 0058d2f0 (UNCONDITIONAL_JUMP)  ; LAB_0058d2f0
    LEA EAX,[ESP + 0xa034]              ; 0058d67d
        ;   Label: LAB_0058d67d
    PUSH EAX                            ; 0058d684
    LEA EAX,[ESP + 0x9f50]              ; 0058d685
    PUSH EAX                            ; 0058d68c
    CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 ; 0058d68d
        ;   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh * this_ptr, CLodMesh * source_mesh)
    ADD ESP,0x8                         ; 0058d692
    JMP 0x0058d36e                      ; 0058d695
        ;   XREF to: 0058d36e (UNCONDITIONAL_JUMP)  ; LAB_0058d36e
    PUSH 0x0                            ; 0058d69a
        ;   Label: LAB_0058d69a
    MOV EAX,dword ptr [ESP + 0xa234]    ; 0058d69c
    MOV ESI,0x1                         ; 0058d6a3
    PUSH EAX                            ; 0058d6a8
    MOV dword ptr [EAX + 0x30c],ESI     ; 0058d6a9
    LEA EAX,[ESP + 0x9ee0]              ; 0058d6af
    PUSH EAX                            ; 0058d6b6
    MOV dword ptr [0x02f33330],ESI      ; 0058d6b7 | g_LodReplayMode
    CALL core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20 ; 0058d6bd
        ;   XREF to: 00589c20 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh * this_ptr, CLodMeshPrecomputeEntry * entry, int render_mode)
    ADD ESP,0xc                         ; 0058d6c2
    TEST EAX,EAX                        ; 0058d6c5
    JL 0x0058d5ef                       ; 0058d6c7
        ;   XREF to: 0058d5ef (CONDITIONAL_JUMP)  ; LAB_0058d5ef
    JZ 0x0058d474                       ; 0058d6cd
        ;   XREF to: 0058d474 (CONDITIONAL_JUMP)  ; LAB_0058d474
    PUSH 0x0                            ; 0058d6d3
    PUSH 0x2                            ; 0058d6d5
    LEA EAX,[ESP + 0xa174]              ; 0058d6d7
    PUSH EAX                            ; 0058d6de
    LEA EAX,[ESP + 0xa170]              ; 0058d6df
    PUSH EAX                            ; 0058d6e6
    LEA EAX,[ESP + 0x9ee8]              ; 0058d6e7
    PUSH EAX                            ; 0058d6ee
    CALL shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 ; 0058d6ef
        ;   XREF to: 0051d990 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)
    ADD ESP,0x14                        ; 0058d6f4
    CMP EAX,ESI                         ; 0058d6f7
    JL 0x0058d5ef                       ; 0058d6f9
        ;   XREF to: 0058d5ef (CONDITIONAL_JUMP)  ; LAB_0058d5ef
    CMP EAX,0x2                         ; 0058d6ff
    JNZ 0x0058d474                      ; 0058d702
        ;   XREF to: 0058d474 (CONDITIONAL_JUMP)  ; LAB_0058d474
    MOV EAX,dword ptr [EBP]             ; 0058d708
    MOV dword ptr [EBP + EAX*0x8 + 0x4],0xf423f ; 0058d70b
    MOV EAX,dword ptr [EBP]             ; 0058d713
    MOV dword ptr [EBP + EAX*0x8 + 0x8],ESI ; 0058d716
    LEA EAX,[ESP + 0x9fc0]              ; 0058d71a
    PUSH EAX                            ; 0058d721
    ADD dword ptr [EBP],ESI             ; 0058d722
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 0058d725
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0058d72a
    LEA EAX,[ESP + 0x9fc0]              ; 0058d72d
    PUSH EAX                            ; 0058d734
    MOV EDX,dword ptr [ESP + 0xa174]    ; 0058d735
    PUSH EDX                            ; 0058d73c
    LEA EAX,[ESP + 0x9ee0]              ; 0058d73d
    PUSH EAX                            ; 0058d744
    CALL shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 ; 0058d745
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh * this_ptr)
    ADD ESP,0xc                         ; 0058d74a
    LEA EAX,[ESP + 0x7d08]              ; 0058d74d
    PUSH EAX                            ; 0058d754
    LEA EAX,[ESP + 0x9fc4]              ; 0058d755
    PUSH EAX                            ; 0058d75c
    MOV EAX,dword ptr [EBP]             ; 0058d75d
    SUB EAX,ESI                         ; 0058d760
    PUSH EAX                            ; 0058d762
    PUSH EBP                            ; 0058d763
    CALL core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790 ; 0058d764
        ;   XREF to: 0058d790 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel * this_ptr, int lod_index, CLodMesh * lod_mesh, CMatrix3x4f * inverse_matrices)
    ADD ESP,0x10                        ; 0058d769
    PUSH 0x0                            ; 0058d76c
    LEA EAX,[ESP + 0x9fc4]              ; 0058d76e
    PUSH EAX                            ; 0058d775
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 0058d776
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058d77b
    JMP 0x0058d474                      ; 0058d77e
        ;   XREF to: 0058d474 (UNCONDITIONAL_JUMP)  ; LAB_0058d474

