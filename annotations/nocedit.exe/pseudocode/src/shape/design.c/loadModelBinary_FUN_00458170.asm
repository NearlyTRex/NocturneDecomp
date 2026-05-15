; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_loadModelBinary_FUN_00458170(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; SMRGLModelBounds Stack[-0x198]:52  local_198
; uint             Stack[-0x164]:4  local_164
; char[80]         Stack[-0x160]:80  local_160
; int              Stack[-0x110]:4  local_110
; int              Stack[-0x10c]:4  local_10c
; int              Stack[-0x108]:4  local_108
; int              Stack[-0x104]:4  local_104
; int              Stack[-0x100]:4  local_100
; int              Stack[-0xfc]:4  local_fc
; int[13]          Stack[-0xdc]:52  local_dc
; undefined1[4]    Stack[-0xa8]:4  local_a8
; uint             Stack[-0xa4]:4  local_a4
; undefined1[8]    Stack[-0x90]:8  local_90
; char[16]         Stack[-0x88]:16  local_88
; int              Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; undefined1[4]    Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; undefined1[12]   Stack[-0x54]:12  local_54
; undefined1[4]    Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; undefined1[4]    Stack[-0x40]:4  local_40
; uint             Stack[-0x3c]:4  local_3c
; _FILE *          Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; uint             Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; SMRGLHeaderExtended * Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
; SIZE_T           Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_loadModelFile_FUN_00458ac0 at 00458b8e
;
; Referenced Globals:
;   TerminatedCString s_rb_0061a8b2
;   TerminatedCString s_models_0061a8b5
;   TerminatedCString s_loadBinary_Unable_to_rea_0061a8bc
;   double g_ScaleFactorDivisor = 0.0000152587890625
;   double g_VertexCoordinateScale = 0.00390625
;   double g_UVCoordinateScale = 0.0000152587890625
;   TerminatedCString s_shape_design_c_0061a906
;   TerminatedCString s_loadBinary_type_d_is_not_0061a918
;   TerminatedCString s_shape_design_c_0061a939
;   TerminatedCString s_shape_design_c_0061a94b
;   TerminatedCString s_loadBinary_Out_of_mem_0061a95d
;   TerminatedCString s_X_size_f_0061a976
;   TerminatedCString s_Y_size_f_0061a982
;   TerminatedCString s_Z_size_f_0061a98e
;   TerminatedCString s_Hit_a_key_0061a99a
;   ... and 23 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_getMRGLBounds_FUN_00528140
;   engine_model.c_loadModelFile_FUN_00527ec0
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458170
        ;   Label: shape_design.c_loadModelBinary_FUN_00458170
    PUSH ESI                            ; 00458171
    PUSH EDI                            ; 00458172
    PUSH EBP                            ; 00458173
    MOV EBP,ESP                         ; 00458174
    SUB ESP,0x18c                       ; 00458176
    MOV dword ptr [EBP + -0x10],0x3f800000 ; 0045817c
    MOV EAX,0x61a8b2                    ; 00458183 | = "rb"
    PUSH EAX                            ; 00458188 | = "rb"
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458189
    PUSH EAX                            ; 0045818c
    MOV EAX,0x61a8b5                    ; 0045818d | = "models"
    PUSH EAX                            ; 00458192 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00458193
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00458198
    MOV dword ptr [EBP + -0x28],EAX     ; 0045819b
    CMP dword ptr [EBP + -0x28],0x0     ; 0045819e
    JNZ 0x004581f0                      ; 004581a2
        ;   XREF to: 004581f0 (CONDITIONAL_JUMP)  ; LAB_004581f0
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004581a4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004581a9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004581ae
    PUSH EAX                            ; 004581b1
    MOV EAX,0x61a8bc                    ; 004581b2 | = "loadBinary: Unable to read binary fil..."
    PUSH EAX                            ; 004581b7 | = "loadBinary: Unable to read binary fil..."
    LEA EAX,[EBP + 0xfffffeb0]          ; 004581b8
    PUSH EAX                            ; 004581be
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004581bf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004581c4
    PUSH 0x0                            ; 004581c7
    PUSH 0x0                            ; 004581c9
    LEA EAX,[EBP + 0xfffffeb0]          ; 004581cb
    PUSH EAX                            ; 004581d1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004581d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004581d7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004581da
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004581df
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV dword ptr [EBP + -0x20],0x0     ; 004581e4
    JMP 0x00458a04                      ; 004581eb
        ;   XREF to: 00458a04 (UNCONDITIONAL_JUMP)  ; LAB_00458a04
    MOV dword ptr [0x016e990c],0x0      ; 004581f0 | g_PolygonCount
        ;   Label: LAB_004581f0
    MOV dword ptr [0x01626408],0x0      ; 004581fa | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458204
    PUSH EAX                            ; 00458207
    PUSH 0x4                            ; 00458208
    PUSH 0x1                            ; 0045820a
    LEA EAX,[EBP + -0x8]                ; 0045820c
    PUSH EAX                            ; 0045820f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458210
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458215
    MOV dword ptr [EBP + -0x4],EAX      ; 00458218
    PUSH 0x1                            ; 0045821b
    PUSH -0x4                           ; 0045821d
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045821f
    PUSH EAX                            ; 00458222
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00458223
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00458228
    CMP dword ptr [EBP + -0x8],0x0      ; 0045822b
        ;   Label: LAB_0045822b
    JZ 0x00458237                       ; 0045822f
        ;   XREF to: 00458237 (CONDITIONAL_JUMP)  ; LAB_00458237
    CMP dword ptr [EBP + -0x4],-0x1     ; 00458231
    JNZ 0x0045823c                      ; 00458235
        ;   XREF to: 0045823c (CONDITIONAL_JUMP)  ; LAB_0045823c
    JMP 0x00458861                      ; 00458237
        ;   XREF to: 00458861 (UNCONDITIONAL_JUMP)  ; LAB_00458861
        ;   Label: LAB_00458237
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045823c
        ;   Label: LAB_0045823c
    MOV dword ptr [EBP + 0xfffffeac],EAX ; 0045823f
    JMP 0x004586da                      ; 00458245
        ;   XREF to: 004586da (UNCONDITIONAL_JUMP)  ; LAB_004586da
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045824a
        ;   Label: LAB_0045824a
    PUSH EAX                            ; 0045824d
    PUSH 0x8                            ; 0045824e
    PUSH 0x1                            ; 00458250
    LEA EAX,[EBP + -0x38]               ; 00458252
    PUSH EAX                            ; 00458255
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458256
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045825b
    FILD dword ptr [EBP + -0x34]        ; 0045825e
    FMUL double ptr [0x0061a8ee]        ; 00458261 | g_ScaleFactorDivisor
    FSTP float ptr [EBP + -0x10]        ; 00458267
    JMP 0x00458835                      ; 0045826a
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045826f
        ;   Label: LAB_0045826f
    PUSH EAX                            ; 00458272
    PUSH 0xc                            ; 00458273
    PUSH 0x1                            ; 00458275
    LEA EAX,[EBP + -0x5c]               ; 00458277
    PUSH EAX                            ; 0045827a
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0045827b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458280
    MOV EAX,dword ptr [EBP + -0x54]     ; 00458283
    MOV [0x01626408],EAX                ; 00458286 | g_VertexCount
    MOV dword ptr [EBP + -0x1c],0x0     ; 0045828b
    JMP 0x0045829a                      ; 00458292
        ;   XREF to: 0045829a (UNCONDITIONAL_JUMP)  ; LAB_0045829a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00458294
        ;   Label: LAB_00458294
    INC dword ptr [EBP + -0x1c]         ; 00458297
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045829a
        ;   Label: LAB_0045829a
    CMP EAX,dword ptr [EBP + -0x54]     ; 0045829d
    JGE 0x00458300                      ; 004582a0
        ;   XREF to: 00458300 (CONDITIONAL_JUMP)  ; LAB_00458300
    MOV EAX,dword ptr [EBP + -0x28]     ; 004582a2
    PUSH EAX                            ; 004582a5
    PUSH 0xc                            ; 004582a6
    PUSH 0x1                            ; 004582a8
    LEA EAX,[EBP + -0x68]               ; 004582aa
    PUSH EAX                            ; 004582ad
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004582ae
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004582b3
    FILD dword ptr [EBP + -0x68]        ; 004582b6
    FMUL double ptr [0x0061a8f6]        ; 004582b9 | g_VertexCoordinateScale
    FLD float ptr [EBP + -0x10]         ; 004582bf
    FDIVP                               ; 004582c2
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004582c4
    FSTP float ptr [EAX + 0x162640c]    ; 004582c8 | g_LoadedVertices
    FILD dword ptr [EBP + -0x64]        ; 004582ce
    FMUL double ptr [0x0061a8f6]        ; 004582d1 | g_VertexCoordinateScale
    FLD float ptr [EBP + -0x10]         ; 004582d7
    FDIVP                               ; 004582da
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004582dc
    FSTP float ptr [EAX + 0x1626410]    ; 004582e0 | g_LoadedVertices[0].vertex.y
    FILD dword ptr [EBP + -0x60]        ; 004582e6
    FMUL double ptr [0x0061a8f6]        ; 004582e9 | g_VertexCoordinateScale
    FLD float ptr [EBP + -0x10]         ; 004582ef
    FDIVP                               ; 004582f2
    IMUL EAX,dword ptr [EBP + -0x1c],0x14 ; 004582f4
    FSTP float ptr [EAX + 0x1626414]    ; 004582f8 | g_LoadedVertices[0].vertex.z
    JMP 0x00458294                      ; 004582fe
        ;   XREF to: 00458294 (UNCONDITIONAL_JUMP)  ; LAB_00458294
    MOV dword ptr [0x01e528c0],0x0      ; 00458300 | g_GouraudShadingEnabled
        ;   Label: LAB_00458300
    JMP 0x00458835                      ; 0045830a
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045830f
        ;   Label: LAB_0045830f
    PUSH EAX                            ; 00458312
    PUSH 0xc                            ; 00458313
    PUSH 0x1                            ; 00458315
    LEA EAX,[EBP + -0x5c]               ; 00458317
    PUSH EAX                            ; 0045831a
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0045831b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458320
    MOV dword ptr [EBP + -0x1c],0x0     ; 00458323
    JMP 0x00458332                      ; 0045832a
        ;   XREF to: 00458332 (UNCONDITIONAL_JUMP)  ; LAB_00458332
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045832c
        ;   Label: LAB_0045832c
    INC dword ptr [EBP + -0x1c]         ; 0045832f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00458332
        ;   Label: LAB_00458332
    CMP EAX,dword ptr [EBP + -0x54]     ; 00458335
    JGE 0x00458350                      ; 00458338
        ;   XREF to: 00458350 (CONDITIONAL_JUMP)  ; LAB_00458350
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045833a
    PUSH EAX                            ; 0045833d
    PUSH 0xc                            ; 0045833e
    PUSH 0x1                            ; 00458340
    LEA EAX,[EBP + -0x68]               ; 00458342
    PUSH EAX                            ; 00458345
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458346
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045834b
    JMP 0x0045832c                      ; 0045834e
        ;   XREF to: 0045832c (UNCONDITIONAL_JUMP)  ; LAB_0045832c
    MOV dword ptr [0x01e528c0],0x1      ; 00458350 | g_GouraudShadingEnabled
        ;   Label: LAB_00458350
    JMP 0x00458835                      ; 0045835a
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045835f
        ;   Label: LAB_0045835f
    PUSH EAX                            ; 00458362
    PUSH 0xc                            ; 00458363
    PUSH 0x1                            ; 00458365
    LEA EAX,[EBP + -0x44]               ; 00458367
    PUSH EAX                            ; 0045836a
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0045836b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458370
    JMP 0x00458835                      ; 00458373
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458378
        ;   Label: LAB_00458378
    PUSH EAX                            ; 0045837b
    PUSH 0x18                           ; 0045837c
    PUSH 0x1                            ; 0045837e
    LEA EAX,[EBP + 0xffffff68]          ; 00458380
    PUSH EAX                            ; 00458386
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458387
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045838c
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045838f | g_PolygonCount
    MOV dword ptr [EAX + 0x16e9910],0x1 ; 00458399 | g_ModelPolygonData
    IMUL ESI,dword ptr [0x016e990c],0x184 ; 004583a3 | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0xffffff6c] ; 004583ad
    MOV dword ptr [ESI + 0x16e99b4],EAX ; 004583b3 | g_ModelPolygonData[0].vertex_indices_count
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 004583b9 | g_PolygonCount
    MOV ESI,0x16e9910                   ; 004583c3 | g_ModelPolygonData
    ADD EAX,ESI                         ; 004583c8 | g_ModelPolygonData
    PUSH EAX                            ; 004583ca | g_ModelPolygonData
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 004583cb
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 004583d0
    MOV ESI,0x1626370                   ; 004583d3 | g_TempTextureName
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 004583d8 | g_PolygonCount
    MOV EDI,0x16e9910                   ; 004583e2 | g_ModelPolygonData
    ADD EAX,EDI                         ; 004583e7
    LEA EDI,[EAX + 0x4]                 ; 004583e9 | g_ModelPolygonData[0].texture_name[0]
    PUSH EDI                            ; 004583ec | g_ModelPolygonData[0].texture_name[0]
    MOV AL,byte ptr [ESI]               ; 004583ed | g_TempTextureName | g_TempTextureName+2
        ;   Label: LAB_004583ed
    MOV byte ptr [EDI],AL               ; 004583ef | g_ModelPolygonData[0].texture_name[0] | g_ModelPolygonData[0].texture_name[2]
    CMP AL,0x0                          ; 004583f1
    JZ 0x00458405                       ; 004583f3
        ;   XREF to: 00458405 (CONDITIONAL_JUMP)  ; LAB_00458405
    MOV AL,byte ptr [ESI + 0x1]         ; 004583f5 | g_TempTextureName+1 | g_TempTextureName+3
    ADD ESI,0x2                         ; 004583f8
    MOV byte ptr [EDI + 0x1],AL         ; 004583fb | g_ModelPolygonData[0].texture_name[1] | g_ModelPolygonData[0].texture_name[3]
    ADD EDI,0x2                         ; 004583fe
    CMP AL,0x0                          ; 00458401
    JNZ 0x004583ed                      ; 00458403
        ;   XREF to: 004583ed (CONDITIONAL_JUMP)  ; LAB_004583ed
    POP EDI                             ; 00458405
        ;   Label: LAB_00458405
    IMUL ESI,dword ptr [0x016e990c],0x184 ; 00458406 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x14]     ; 00458410
    MOV dword ptr [ESI + 0x16e9a8c],EAX ; 00458413 | g_ModelPolygonData[0].material_id
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458419
    PUSH EAX                            ; 0045841c
    PUSH 0x4                            ; 0045841d
    MOV EAX,dword ptr [EBP + 0xffffff6c] ; 0045841f
    PUSH EAX                            ; 00458425
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00458426 | g_PolygonCount
    MOV ESI,0x16e9910                   ; 00458430 | g_ModelPolygonData
    ADD EAX,ESI                         ; 00458435
    ADD EAX,0xb8                        ; 00458437
    PUSH EAX                            ; 0045843c | g_ModelPolygonData[0].vertex_indices[0]
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0045843d
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458442
    MOV dword ptr [EBP + -0x1c],0x0     ; 00458445
    JMP 0x00458454                      ; 0045844c
        ;   XREF to: 00458454 (UNCONDITIONAL_JUMP)  ; LAB_00458454
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045844e
        ;   Label: LAB_0045844e
    INC dword ptr [EBP + -0x1c]         ; 00458451
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 00458454 | g_PolygonCount
        ;   Label: LAB_00458454
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045845e
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00458461 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0045847e                      ; 00458467
        ;   XREF to: 0045847e (CONDITIONAL_JUMP)  ; LAB_0045847e
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 00458469 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x58]     ; 00458473
    SUB dword ptr [EDX + 0x16e99c8],EAX ; 00458476 | g_ModelPolygonData[0].vertex_indices[0]
    JMP 0x0045844e                      ; 0045847c
        ;   XREF to: 0045844e (UNCONDITIONAL_JUMP)  ; LAB_0045844e
    INC dword ptr [0x016e990c]          ; 0045847e | g_PolygonCount
        ;   Label: LAB_0045847e
    JMP 0x00458835                      ; 00458484
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV ESI,dword ptr [EBP + -0x28]     ; 00458489
        ;   Label: LAB_00458489
    PUSH ESI                            ; 0045848c
    PUSH 0x18                           ; 0045848d
    PUSH 0x1                            ; 0045848f
    LEA ESI,[EBP + -0x80]               ; 00458491
    PUSH ESI                            ; 00458494
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458495
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045849a
    LEA ESI,[EBP + -0x78]               ; 0045849d
    MOV EDI,0x1626370                   ; 004584a0 | g_TempTextureName
    PUSH EDI                            ; 004584a5 | g_TempTextureName
    MOV AL,byte ptr [ESI]               ; 004584a6
        ;   Label: LAB_004584a6
    MOV byte ptr [EDI],AL               ; 004584a8 | g_TempTextureName | g_TempTextureName+2
    CMP AL,0x0                          ; 004584aa
    JZ 0x004584be                       ; 004584ac
        ;   XREF to: 004584be (CONDITIONAL_JUMP)  ; LAB_004584be
    MOV AL,byte ptr [ESI + 0x1]         ; 004584ae
    ADD ESI,0x2                         ; 004584b1
    MOV byte ptr [EDI + 0x1],AL         ; 004584b4 | g_TempTextureName+1 | g_TempTextureName+3
    ADD EDI,0x2                         ; 004584b7
    CMP AL,0x0                          ; 004584ba
    JNZ 0x004584a6                      ; 004584bc
        ;   XREF to: 004584a6 (CONDITIONAL_JUMP)  ; LAB_004584a6
    POP EDI                             ; 004584be
        ;   Label: LAB_004584be
    JMP 0x00458835                      ; 004584bf
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 004584c4
        ;   Label: LAB_004584c4
    PUSH EAX                            ; 004584c7
    PUSH 0x8                            ; 004584c8
    PUSH 0x1                            ; 004584ca
    LEA EAX,[EBP + -0x30]               ; 004584cc
    PUSH EAX                            ; 004584cf
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004584d0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004584d5
    IMUL EAX,dword ptr [EBP + -0x1c],0x184 ; 004584d8
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 004584df | g_ModelPolygonData[0].material_id
    MOV dword ptr [EBP + -0x2c],EAX     ; 004584e5
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004584e8
    MOV dword ptr [EBP + -0x14],EAX     ; 004584eb
    JMP 0x00458835                      ; 004584ee
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    MOV EAX,dword ptr [EBP + -0x28]     ; 004584f3
        ;   Label: LAB_004584f3
    PUSH EAX                            ; 004584f6
    PUSH 0x18                           ; 004584f7
    PUSH 0x1                            ; 004584f9
    LEA EAX,[EBP + 0xffffff68]          ; 004584fb
    PUSH EAX                            ; 00458501
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458502
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458507
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045850a | g_PolygonCount
    MOV dword ptr [EAX + 0x16e9910],0x2 ; 00458514 | g_ModelPolygonData
    IMUL ESI,dword ptr [0x016e990c],0x184 ; 0045851e | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0xffffff6c] ; 00458528
    MOV dword ptr [ESI + 0x16e99b4],EAX ; 0045852e | g_ModelPolygonData[0].vertex_indices_count
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00458534 | g_PolygonCount
    MOV ESI,0x16e9910                   ; 0045853e | g_ModelPolygonData
    ADD EAX,ESI                         ; 00458543 | g_ModelPolygonData
    PUSH EAX                            ; 00458545 | g_ModelPolygonData
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 00458546
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0045854b
    MOV ESI,0x1626370                   ; 0045854e | g_TempTextureName
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00458553 | g_PolygonCount
    MOV EDI,0x16e9910                   ; 0045855d | g_ModelPolygonData
    ADD EAX,EDI                         ; 00458562
    LEA EDI,[EAX + 0x4]                 ; 00458564 | g_ModelPolygonData[0].texture_name[0]
    PUSH EDI                            ; 00458567 | g_ModelPolygonData[0].texture_name[0]
    MOV AL,byte ptr [ESI]               ; 00458568 | g_TempTextureName | g_TempTextureName+2
        ;   Label: LAB_00458568
    MOV byte ptr [EDI],AL               ; 0045856a | g_ModelPolygonData[0].texture_name[0] | g_ModelPolygonData[0].texture_name[2]
    CMP AL,0x0                          ; 0045856c
    JZ 0x00458580                       ; 0045856e
        ;   XREF to: 00458580 (CONDITIONAL_JUMP)  ; LAB_00458580
    MOV AL,byte ptr [ESI + 0x1]         ; 00458570 | g_TempTextureName+1 | g_TempTextureName+3
    ADD ESI,0x2                         ; 00458573
    MOV byte ptr [EDI + 0x1],AL         ; 00458576 | g_ModelPolygonData[0].texture_name[1] | g_ModelPolygonData[0].texture_name[3]
    ADD EDI,0x2                         ; 00458579
    CMP AL,0x0                          ; 0045857c
    JNZ 0x00458568                      ; 0045857e
        ;   XREF to: 00458568 (CONDITIONAL_JUMP)  ; LAB_00458568
    POP EDI                             ; 00458580
        ;   Label: LAB_00458580
    IMUL ESI,dword ptr [0x016e990c],0x184 ; 00458581 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045858b
    MOV dword ptr [ESI + 0x16e9a8c],EAX ; 0045858e | g_ModelPolygonData[0].material_id
    MOV dword ptr [EBP + -0x18],0x0     ; 00458594
    JMP 0x004585a3                      ; 0045859b
        ;   XREF to: 004585a3 (UNCONDITIONAL_JUMP)  ; LAB_004585a3
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045859d
        ;   Label: LAB_0045859d
    INC dword ptr [EBP + -0x18]         ; 004585a0
    MOV EAX,dword ptr [EBP + -0x18]     ; 004585a3
        ;   Label: LAB_004585a3
    CMP EAX,dword ptr [EBP + 0xffffff6c] ; 004585a6
    JGE 0x0045866c                      ; 004585ac
        ;   XREF to: 0045866c (CONDITIONAL_JUMP)  ; LAB_0045866c
    MOV EAX,dword ptr [EBP + -0x28]     ; 004585b2
    PUSH EAX                            ; 004585b5
    PUSH 0x4                            ; 004585b6
    PUSH 0x1                            ; 004585b8
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 004585ba | g_PolygonCount
    MOV EDX,0x16e9910                   ; 004585c4 | g_ModelPolygonData
    ADD EDX,EAX                         ; 004585c9
    MOV EAX,dword ptr [EBP + -0x18]     ; 004585cb
    SHL EAX,0x2                         ; 004585ce
    ADD EDX,0xb8                        ; 004585d1
    ADD EAX,EDX                         ; 004585d7
    PUSH EAX                            ; 004585d9
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004585da
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004585df
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 004585e2 | g_PolygonCount
    MOV EDX,dword ptr [EBP + -0x18]     ; 004585ec
    SHL EDX,0x2                         ; 004585ef
    ADD EDX,EAX                         ; 004585f2
    MOV EAX,dword ptr [EBP + -0x58]     ; 004585f4
    SUB dword ptr [EDX + 0x16e99c8],EAX ; 004585f7 | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [EBP + -0x28]     ; 004585fd
    PUSH EAX                            ; 00458600
    PUSH 0x4                            ; 00458601
    PUSH 0x1                            ; 00458603
    LEA EAX,[EBP + -0x24]               ; 00458605
    PUSH EAX                            ; 00458608
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458609
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045860e
    FILD dword ptr [EBP + -0x24]        ; 00458611
    FMUL double ptr [0x0061a8fe]        ; 00458614 | g_UVCoordinateScale
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045861a | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x18]     ; 00458624
    SHL EAX,0x2                         ; 00458627
    ADD EAX,EDX                         ; 0045862a
    FSTP float ptr [EAX + 0x16e9a08]    ; 0045862c | g_ModelPolygonData[0].uv_u[0]
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458632
    PUSH EAX                            ; 00458635
    PUSH 0x4                            ; 00458636
    PUSH 0x1                            ; 00458638
    LEA EAX,[EBP + -0x24]               ; 0045863a
    PUSH EAX                            ; 0045863d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0045863e
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458643
    FILD dword ptr [EBP + -0x24]        ; 00458646
    FMUL double ptr [0x0061a8fe]        ; 00458649 | g_UVCoordinateScale
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045864f | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x18]     ; 00458659
    SHL EAX,0x2                         ; 0045865c
    ADD EAX,EDX                         ; 0045865f
    FSTP float ptr [EAX + 0x16e9a48]    ; 00458661 | g_ModelPolygonData[0].uv_v[0]
    JMP 0x0045859d                      ; 00458667
        ;   XREF to: 0045859d (UNCONDITIONAL_JUMP)  ; LAB_0045859d
    INC dword ptr [0x016e990c]          ; 0045866c | g_PolygonCount
        ;   Label: LAB_0045866c
    JMP 0x00458835                      ; 00458672
        ;   XREF to: 00458835 (UNCONDITIONAL_JUMP)  ; LAB_00458835
    PUSH 0x2a4                          ; 00458677
        ;   Label: LAB_00458677
    MOV EAX,0x61a906                    ; 0045867c | = "..\\shape\\design.c"
    PUSH EAX                            ; 00458681 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458682
    PUSH EAX                            ; 00458685
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00458686
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0045868b
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045868e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00458693
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + -0x8]      ; 00458698
    PUSH EAX                            ; 0045869b
    MOV EAX,0x61a918                    ; 0045869c | = "loadBinary: type %d is not known"
    PUSH EAX                            ; 004586a1 | = "loadBinary: type %d is not known"
    LEA EAX,[EBP + 0xfffffeb0]          ; 004586a2
    PUSH EAX                            ; 004586a8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004586a9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004586ae
    PUSH 0x0                            ; 004586b1
    PUSH 0x0                            ; 004586b3
    LEA EAX,[EBP + 0xfffffeb0]          ; 004586b5
    PUSH EAX                            ; 004586bb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004586bc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004586c1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004586c4
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004586c9
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV dword ptr [EBP + -0x20],0x1     ; 004586ce
    JMP 0x00458a04                      ; 004586d5
        ;   XREF to: 00458a04 (UNCONDITIONAL_JUMP)  ; LAB_00458a04
    CMP dword ptr [EBP + 0xfffffeac],0x14 ; 004586da
        ;   Label: LAB_004586da
    JC 0x00458799                       ; 004586e1
        ;   XREF to: 00458799 (CONDITIONAL_JUMP)  ; LAB_00458799
    CMP dword ptr [EBP + 0xfffffeac],0x14 ; 004586e7
    JBE 0x0045824a                      ; 004586ee
        ;   XREF to: 0045824a (CONDITIONAL_JUMP)  ; LAB_0045824a
    CMP dword ptr [EBP + 0xfffffeac],0x1b ; 004586f4
    JC 0x0045875f                       ; 004586fb
        ;   XREF to: 0045875f (CONDITIONAL_JUMP)  ; LAB_0045875f
    CMP dword ptr [EBP + 0xfffffeac],0x1b ; 004586fd
    JBE 0x00458378                      ; 00458704
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    CMP dword ptr [EBP + 0xfffffeac],0x29 ; 0045870a
    JC 0x0045874d                       ; 00458711
        ;   XREF to: 0045874d (CONDITIONAL_JUMP)  ; LAB_0045874d
    CMP dword ptr [EBP + 0xfffffeac],0x29 ; 00458713
    JBE 0x004584f3                      ; 0045871a
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    CMP dword ptr [EBP + 0xfffffeac],0x34 ; 00458720
    JC 0x00458748                       ; 00458727
        ;   XREF to: 00458748 (CONDITIONAL_JUMP)  ; LAB_00458748
    CMP dword ptr [EBP + 0xfffffeac],0x34 ; 00458729
    JBE 0x004584f3                      ; 00458730
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    CMP dword ptr [EBP + 0xfffffeac],0x3e ; 00458736
    JZ 0x004584f3                       ; 0045873d
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    JMP 0x00458677                      ; 00458743
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    JMP 0x00458677                      ; 00458748
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
        ;   Label: LAB_00458748
    CMP dword ptr [EBP + 0xfffffeac],0x22 ; 0045874d
        ;   Label: LAB_0045874d
    JZ 0x004584f3                       ; 00458754
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    JMP 0x00458677                      ; 0045875a
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0x18 ; 0045875f
        ;   Label: LAB_0045875f
    JC 0x00458787                       ; 00458766
        ;   XREF to: 00458787 (CONDITIONAL_JUMP)  ; LAB_00458787
    CMP dword ptr [EBP + 0xfffffeac],0x18 ; 00458768
    JBE 0x004584f3                      ; 0045876f
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    CMP dword ptr [EBP + 0xfffffeac],0x19 ; 00458775
    JZ 0x00458378                       ; 0045877c
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    JMP 0x00458677                      ; 00458782
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0x17 ; 00458787
        ;   Label: LAB_00458787
    JZ 0x0045835f                       ; 0045878e
        ;   XREF to: 0045835f (CONDITIONAL_JUMP)  ; LAB_0045835f
    JMP 0x00458677                      ; 00458794
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0x6 ; 00458799
        ;   Label: LAB_00458799
    JC 0x004587fb                       ; 004587a0
        ;   XREF to: 004587fb (CONDITIONAL_JUMP)  ; LAB_004587fb
    CMP dword ptr [EBP + 0xfffffeac],0x6 ; 004587a2
    JBE 0x00458378                      ; 004587a9
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    CMP dword ptr [EBP + 0xfffffeac],0xd ; 004587af
    JC 0x004587e9                       ; 004587b6
        ;   XREF to: 004587e9 (CONDITIONAL_JUMP)  ; LAB_004587e9
    CMP dword ptr [EBP + 0xfffffeac],0xd ; 004587b8
    JBE 0x00458489                      ; 004587bf
        ;   XREF to: 00458489 (CONDITIONAL_JUMP)  ; LAB_00458489
    CMP dword ptr [EBP + 0xfffffeac],0xe ; 004587c5
    JBE 0x004584f3                      ; 004587cc
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    CMP dword ptr [EBP + 0xfffffeac],0x11 ; 004587d2
    JZ 0x004584f3                       ; 004587d9
        ;   XREF to: 004584f3 (CONDITIONAL_JUMP)  ; LAB_004584f3
    JMP 0x00458677                      ; 004587df
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0xa ; 004587e9
        ;   Label: LAB_004587e9
    JZ 0x004584c4                       ; 004587f0
        ;   XREF to: 004584c4 (CONDITIONAL_JUMP)  ; LAB_004584c4
    JMP 0x00458677                      ; 004587f6
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0x3 ; 004587fb
        ;   Label: LAB_004587fb
    JC 0x00458823                       ; 00458802
        ;   XREF to: 00458823 (CONDITIONAL_JUMP)  ; LAB_00458823
    CMP dword ptr [EBP + 0xfffffeac],0x3 ; 00458804
    JBE 0x0045830f                      ; 0045880b
        ;   XREF to: 0045830f (CONDITIONAL_JUMP)  ; LAB_0045830f
    CMP dword ptr [EBP + 0xfffffeac],0x5 ; 00458811
    JZ 0x00458378                       ; 00458818
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    JMP 0x00458677                      ; 0045881e
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    CMP dword ptr [EBP + 0xfffffeac],0x2 ; 00458823
        ;   Label: LAB_00458823
    JZ 0x0045826f                       ; 0045882a
        ;   XREF to: 0045826f (CONDITIONAL_JUMP)  ; LAB_0045826f
    JMP 0x00458677                      ; 00458830
        ;   XREF to: 00458677 (UNCONDITIONAL_JUMP)  ; LAB_00458677
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458835
        ;   Label: LAB_00458835
    PUSH EAX                            ; 00458838
    PUSH 0x4                            ; 00458839
    PUSH 0x1                            ; 0045883b
    LEA EAX,[EBP + -0x8]                ; 0045883d
    PUSH EAX                            ; 00458840
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00458841
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00458846
    MOV dword ptr [EBP + -0x4],EAX      ; 00458849
    PUSH 0x1                            ; 0045884c
    PUSH -0x4                           ; 0045884e
    MOV EAX,dword ptr [EBP + -0x28]     ; 00458850
    PUSH EAX                            ; 00458853
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00458854
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00458859
    JMP 0x0045822b                      ; 0045885c
        ;   XREF to: 0045822b (UNCONDITIONAL_JUMP)  ; LAB_0045822b
    PUSH 0x2b2                          ; 00458861
        ;   Label: LAB_00458861
    MOV EAX,0x61a939                    ; 00458866 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0045886b | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045886c
    PUSH EAX                            ; 0045886f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00458870
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00458875
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 00458878
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045887d
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458882
    PUSH EAX                            ; 00458885
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 00458886
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 0045888b
    MOV dword ptr [EBP + -0xc],EAX      ; 0045888e
    CMP dword ptr [EBP + -0xc],0x0      ; 00458891
    JNZ 0x004588b9                      ; 00458895
        ;   XREF to: 004588b9 (CONDITIONAL_JUMP)  ; LAB_004588b9
    MOV dword ptr [0x02f0ca48],0x61a94b ; 00458897 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2bb    ; 004588a1 | g_CurrentLineNumber
    MOV EAX,0x61a95d                    ; 004588ab | = "loadBinary - Out of mem!"
    PUSH EAX                            ; 004588b0 | = "loadBinary - Out of mem!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004588b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004588b6
    MOV EAX,dword ptr [EBP + -0xc]      ; 004588b9
        ;   Label: LAB_004588b9
    PUSH EAX                            ; 004588bc
    LEA ESI,[EBP + 0xfffffe78]          ; 004588bd
    CALL engine_model.c_getMRGLBounds_FUN_00528140 ; 004588c3
        ;   XREF to: 00528140 (UNCONDITIONAL_CALL)  ; SMRGLModelBounds * engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderBasic * mrgl_data, SMRGLModelBounds * output_bounds)
    ADD ESP,0x4                         ; 004588c8
    JMP 0x03fc4abd                      ; 004588cb
        ;   XREF to: 03fc4abd (UNCONDITIONAL_JUMP)  ; LAB_03fc4abd
    JMP 0x03fc4b27                      ; 004588de
        ;   XREF to: 03fc4b27 (UNCONDITIONAL_JUMP)  ; LAB_03fc4b27
        ;   Label: LAB_004588de
    MOV EAX,dword ptr [EBP + -0xc]      ; 004588f1
        ;   Label: LAB_004588f1
    PUSH EAX                            ; 004588f4
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 004588f5
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 004588fa
    MOV EAX,dword ptr [EBP + 0xffffff0c] ; 004588fd
    SUB EAX,dword ptr [EBP + 0xffffff00] ; 00458903
    MOV dword ptr [EBP + 0xfffffe74],EAX ; 00458909
    FILD dword ptr [EBP + 0xfffffe74]   ; 0045890f
    FMUL double ptr [0x0061a9ae]        ; 00458915 | DOUBLE_0061a9ae
    SUB ESP,0x8                         ; 0045891b
    FSTP double ptr [ESP]               ; 0045891e
    MOV EAX,0x61a976                    ; 00458921 | = "X size : %f"
    PUSH EAX                            ; 00458926 | = "X size : %f"
    LEA EAX,[EBP + 0xfffffeb0]          ; 00458927
    PUSH EAX                            ; 0045892d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045892e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00458933
    PUSH 0x0                            ; 00458936
    PUSH 0x0                            ; 00458938
    LEA EAX,[EBP + 0xfffffeb0]          ; 0045893a
    PUSH EAX                            ; 00458940
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00458941
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00458946
    MOV EAX,dword ptr [EBP + 0xffffff10] ; 00458949
    SUB EAX,dword ptr [EBP + 0xffffff04] ; 0045894f
    MOV dword ptr [EBP + 0xfffffe74],EAX ; 00458955
    FILD dword ptr [EBP + 0xfffffe74]   ; 0045895b
    FMUL double ptr [0x0061a9ae]        ; 00458961 | DOUBLE_0061a9ae
    SUB ESP,0x8                         ; 00458967
    FSTP double ptr [ESP]               ; 0045896a
    MOV EAX,0x61a982                    ; 0045896d | = "Y size : %f"
    PUSH EAX                            ; 00458972 | = "Y size : %f"
    LEA EAX,[EBP + 0xfffffeb0]          ; 00458973
    PUSH EAX                            ; 00458979
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045897a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0045897f
    PUSH 0xb                            ; 00458982
    PUSH 0x0                            ; 00458984
    LEA EAX,[EBP + 0xfffffeb0]          ; 00458986
    PUSH EAX                            ; 0045898c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045898d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00458992
    MOV EAX,dword ptr [EBP + 0xffffff14] ; 00458995
    SUB EAX,dword ptr [EBP + 0xffffff08] ; 0045899b
    MOV dword ptr [EBP + 0xfffffe74],EAX ; 004589a1
    FILD dword ptr [EBP + 0xfffffe74]   ; 004589a7
    FMUL double ptr [0x0061a9ae]        ; 004589ad | DOUBLE_0061a9ae
    SUB ESP,0x8                         ; 004589b3
    FSTP double ptr [ESP]               ; 004589b6
    MOV EAX,0x61a98e                    ; 004589b9 | = "Z size : %f"
    PUSH EAX                            ; 004589be | = "Z size : %f"
    LEA EAX,[EBP + 0xfffffeb0]          ; 004589bf
    PUSH EAX                            ; 004589c5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004589c6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004589cb
    PUSH 0x16                           ; 004589ce
    PUSH 0x0                            ; 004589d0
    LEA EAX,[EBP + 0xfffffeb0]          ; 004589d2
    PUSH EAX                            ; 004589d8
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004589d9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004589de
    PUSH 0x2c                           ; 004589e1
    PUSH 0x0                            ; 004589e3
    MOV EAX,0x61a99a                    ; 004589e5 | = "Hit a key..."
    PUSH EAX                            ; 004589ea | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004589eb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004589f0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004589f3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004589f8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV dword ptr [EBP + -0x20],0x1     ; 004589fd
    MOV EAX,dword ptr [EBP + -0x20]     ; 00458a04
        ;   Label: LAB_00458a04
    MOV ESP,EBP                         ; 00458a07
    POP EBP                             ; 00458a09
    POP EDI                             ; 00458a0a
    POP ESI                             ; 00458a0b
    POP EBX                             ; 00458a0c
    RET                                 ; 00458a0d
    MOV ECX,0xd                         ; 03fc4abd
        ;   Label: LAB_03fc4abd
    LEA EDI,[EBP + 0xffffff34]          ; 03fc4ac2
    LEA ESI,[EBP + 0xfffffe78]          ; 03fc4ac8
    MOV ECX,dword ptr [ESI]             ; 03fc4ace
    MOV dword ptr [EDI],ECX             ; 03fc4ad0
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4ad2
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4ad5
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4ad8
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4adb
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4ade
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4ae1
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4ae4
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc4ae7
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4aea
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4aed
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4af0
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4af3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc4af6
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc4af9
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4afc
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4aff
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4b02
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4b05
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4b08
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4b0b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4b0e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4b11
    MOV ECX,dword ptr [ESI + 0x30]      ; 03fc4b14
    MOV dword ptr [EDI + 0x30],ECX      ; 03fc4b17
    ADD ESI,0x34                        ; 03fc4b1a
    ADD EDI,0x34                        ; 03fc4b1d
    XOR ECX,ECX                         ; 03fc4b20
    JMP 0x004588de                      ; 03fc4b22
        ;   XREF to: 004588de (UNCONDITIONAL_JUMP)  ; LAB_004588de
    MOV ECX,0xd                         ; 03fc4b27
        ;   Label: LAB_03fc4b27
    LEA EDI,[EBP + 0xffffff00]          ; 03fc4b2c
    LEA ESI,[EBP + 0xffffff34]          ; 03fc4b32
    MOV ECX,dword ptr [ESI]             ; 03fc4b38
    MOV dword ptr [EDI],ECX             ; 03fc4b3a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4b3c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4b3f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4b42
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4b45
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4b48
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4b4b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4b4e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc4b51
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4b54
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4b57
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4b5a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4b5d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc4b60
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc4b63
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4b66
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4b69
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4b6c
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4b6f
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4b72
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4b75
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4b78
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4b7b
    MOV ECX,dword ptr [ESI + 0x30]      ; 03fc4b7e
    MOV dword ptr [EDI + 0x30],ECX      ; 03fc4b81
    ADD ESI,0x34                        ; 03fc4b84
    ADD EDI,0x34                        ; 03fc4b87
    XOR ECX,ECX                         ; 03fc4b8a
    JMP 0x004588f1                      ; 03fc4b8c
        ;   XREF to: 004588f1 (UNCONDITIONAL_JUMP)  ; LAB_004588f1

