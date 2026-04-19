; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_simpleTexture_FUN_00467350(void)
;
; Local Variables:
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; char[80]         Stack[-0x70]:80  local_70
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; _FILE *          Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6af
;
; Referenced Globals:
;   TerminatedCString s_Enter_texture_name_0061c963
;   TerminatedCString s_rb_0061c979
;   TerminatedCString s_art_0061c97c
;   TerminatedCString s_ERROR_Bad_texture_name_0061c980
;   TerminatedCString s_shape_design_c_0061c999
;   TerminatedCString s_Face_map_on_Z_axis_Y_N_0061c9ab
;   double g_TextureScalingFactor_0061c9c6 = 254
;   TerminatedCString s_s_0061c9ce
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[0]
;   ... and 8 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467350
        ;   Label: shape_design.c_simpleTexture_FUN_00467350
    PUSH ESI                            ; 00467351
    PUSH EDI                            ; 00467352
    PUSH EBP                            ; 00467353
    MOV EBP,ESP                         ; 00467354
    SUB ESP,0x74                        ; 00467356
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046735c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61c963                    ; 00467361 | = "Enter texture name : "
    PUSH ECX                            ; 00467366 | = "Enter texture name : "
    PUSH 0x0                            ; 00467367
    PUSH 0x0                            ; 00467369
    PUSH 0x28                           ; 0046736b
    LEA ECX,[EBP + -0x60]               ; 0046736d
    PUSH ECX                            ; 00467370
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00467371
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467376
    LEA EDI,[EBP + -0x60]               ; 00467379
    SUB ECX,ECX                         ; 0046737c
    DEC ECX                             ; 0046737e
    XOR EAX,EAX                         ; 0046737f
    SCASB.REPNE ES:EDI                  ; 00467381
    NOT ECX                             ; 00467383
    DEC ECX                             ; 00467385
    TEST ECX,ECX                        ; 00467386
    JNZ 0x0046738f                      ; 00467388
        ;   XREF to: 0046738f (CONDITIONAL_JUMP)  ; LAB_0046738f
    JMP 0x004676a2                      ; 0046738a
        ;   XREF to: 004676a2 (UNCONDITIONAL_JUMP)  ; LAB_004676a2
    MOV EAX,0x61c979                    ; 0046738f | = "rb"
        ;   Label: LAB_0046738f
    PUSH EAX                            ; 00467394 | = "rb"
    LEA EAX,[EBP + -0x60]               ; 00467395
    PUSH EAX                            ; 00467398
    MOV EAX,0x61c97c                    ; 00467399 | = "art"
    PUSH EAX                            ; 0046739e | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046739f
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004673a4
    MOV dword ptr [EBP + -0x8],EAX      ; 004673a7
    CMP dword ptr [EBP + -0x8],0x0      ; 004673aa
    JNZ 0x004673db                      ; 004673ae
        ;   XREF to: 004673db (CONDITIONAL_JUMP)  ; LAB_004673db
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004673b0
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004673b5
    PUSH 0x0                            ; 004673b7
    MOV EAX,0x61c980                    ; 004673b9 | = "ERROR! Bad texture name!"
    PUSH EAX                            ; 004673be | = "ERROR! Bad texture name!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004673bf
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004673c4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004673c7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004673cc
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004673d1
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x004676a2                      ; 004673d6
        ;   XREF to: 004676a2 (UNCONDITIONAL_JUMP)  ; LAB_004676a2
    PUSH 0x1ffd                         ; 004673db
        ;   Label: LAB_004673db
    MOV EAX,0x61c999                    ; 004673e0 | = "..\\shape\\design.c"
    PUSH EAX                            ; 004673e5 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x8]      ; 004673e6
    PUSH EAX                            ; 004673e9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004673ea
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004673ef
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004673f2
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004673f7
    PUSH 0x0                            ; 004673f9
    MOV EAX,0x61c9ab                    ; 004673fb | = "Face map on Z axis (Y/N) ?"
    PUSH EAX                            ; 00467400 | = "Face map on Z axis (Y/N) ?"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00467401
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00467406
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00467409
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046740e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00467413
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00467418
    MOV dword ptr [EBP + -0x4],EAX      ; 0046741d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00467420
    PUSH EAX                            ; 00467423
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00467424
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00467429
    CMP EAX,0x59                        ; 0046742c
    JNZ 0x004675c2                      ; 0046742f
        ;   XREF to: 004675c2 (CONDITIONAL_JUMP)  ; LAB_004675c2
    MOV dword ptr [EBP + -0x64],0x47c34ff3 ; 00467435
    MOV dword ptr [EBP + -0x68],0x47c34ff3 ; 0046743c
    MOV dword ptr [EBP + -0x6c],0xc7c34ff3 ; 00467443
    MOV dword ptr [EBP + -0x70],0xc7c34ff3 ; 0046744a
    MOV dword ptr [EBP + -0xc],0x0      ; 00467451
    JMP 0x00467460                      ; 00467458
        ;   XREF to: 00467460 (UNCONDITIONAL_JUMP)  ; LAB_00467460
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046745a
        ;   Label: LAB_0046745a
    INC dword ptr [EBP + -0xc]          ; 0046745d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00467460
        ;   Label: LAB_00467460
    CMP EAX,dword ptr [0x01626408]      ; 00467463 | g_VertexCount
    JGE 0x004674f0                      ; 00467469
        ;   XREF to: 004674f0 (CONDITIONAL_JUMP)  ; LAB_004674f0
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0046746f
    FLD float ptr [EAX + 0x162640c]     ; 00467473 | g_LoadedVertices
    FCOMP float ptr [EBP + -0x64]       ; 00467479
    FNSTSW AX                           ; 0046747c
    SAHF                                ; 0046747e
    JNC 0x0046748e                      ; 0046747f
        ;   XREF to: 0046748e (CONDITIONAL_JUMP)  ; LAB_0046748e
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00467481
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00467485 | g_LoadedVertices
    MOV dword ptr [EBP + -0x64],EAX     ; 0046748b
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0046748e
        ;   Label: LAB_0046748e
    FLD float ptr [EAX + 0x1626410]     ; 00467492 | g_LoadedVertices[0].vertex.y
    FCOMP float ptr [EBP + -0x68]       ; 00467498
    FNSTSW AX                           ; 0046749b
    SAHF                                ; 0046749d
    JNC 0x004674ad                      ; 0046749e
        ;   XREF to: 004674ad (CONDITIONAL_JUMP)  ; LAB_004674ad
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004674a0
    MOV EAX,dword ptr [EAX + 0x1626410] ; 004674a4 | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x68],EAX     ; 004674aa
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004674ad
        ;   Label: LAB_004674ad
    FLD float ptr [EAX + 0x162640c]     ; 004674b1 | g_LoadedVertices
    FCOMP float ptr [EBP + -0x6c]       ; 004674b7
    FNSTSW AX                           ; 004674ba
    SAHF                                ; 004674bc
    JBE 0x004674cc                      ; 004674bd
        ;   XREF to: 004674cc (CONDITIONAL_JUMP)  ; LAB_004674cc
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004674bf
    MOV EAX,dword ptr [EAX + 0x162640c] ; 004674c3 | g_LoadedVertices
    MOV dword ptr [EBP + -0x6c],EAX     ; 004674c9
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004674cc
        ;   Label: LAB_004674cc
    FLD float ptr [EAX + 0x1626410]     ; 004674d0 | g_LoadedVertices[0].vertex.y
    FCOMP float ptr [EBP + -0x70]       ; 004674d6
    FNSTSW AX                           ; 004674d9
    SAHF                                ; 004674db
    JBE 0x004674eb                      ; 004674dc
        ;   XREF to: 004674eb (CONDITIONAL_JUMP)  ; LAB_004674eb
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 004674de
    MOV EAX,dword ptr [EAX + 0x1626410] ; 004674e2 | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x70],EAX     ; 004674e8
    JMP 0x0046745a                      ; 004674eb
        ;   XREF to: 0046745a (UNCONDITIONAL_JUMP)  ; LAB_0046745a
        ;   Label: LAB_004674eb
    MOV dword ptr [EBP + -0xc],0x0      ; 004674f0
        ;   Label: LAB_004674f0
    JMP 0x004674ff                      ; 004674f7
        ;   XREF to: 004674ff (UNCONDITIONAL_JUMP)  ; LAB_004674ff
    MOV EAX,dword ptr [EBP + -0xc]      ; 004674f9
        ;   Label: LAB_004674f9
    INC dword ptr [EBP + -0xc]          ; 004674fc
    MOV EAX,dword ptr [EBP + -0xc]      ; 004674ff
        ;   Label: LAB_004674ff
    CMP EAX,dword ptr [0x016e990c]      ; 00467502 | g_PolygonCount
    JGE 0x004675bd                      ; 00467508
        ;   XREF to: 004675bd (CONDITIONAL_JUMP)  ; LAB_004675bd
    MOV dword ptr [EBP + -0x10],0x0     ; 0046750e
    JMP 0x0046751d                      ; 00467515
        ;   XREF to: 0046751d (UNCONDITIONAL_JUMP)  ; LAB_0046751d
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467517
        ;   Label: LAB_00467517
    INC dword ptr [EBP + -0x10]         ; 0046751a
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0046751d
        ;   Label: LAB_0046751d
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467524
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00467527 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x004675b8                      ; 0046752d
        ;   XREF to: 004675b8 (CONDITIONAL_JUMP)  ; LAB_004675b8
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 00467533
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046753a
    SHL EAX,0x2                         ; 0046753d
    ADD EAX,EDX                         ; 00467540
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00467542 | g_ModelPolygonData[0].vertex_indices[0]
    MOV dword ptr [EBP + -0x74],EAX     ; 00467548
    IMUL EAX,dword ptr [EBP + -0x74],0x14 ; 0046754b
    FLD float ptr [EAX + 0x162640c]     ; 0046754f | g_LoadedVertices
    FSUB float ptr [EBP + -0x64]        ; 00467555
    FMUL double ptr [0x0061c9c6]        ; 00467558 | g_TextureScalingFactor_0061c9c6
    FLD float ptr [EBP + -0x6c]         ; 0046755e
    FSUB float ptr [EBP + -0x64]        ; 00467561
    FDIVP                               ; 00467564
    FLD1                                ; 00467566
    FADDP                               ; 00467568
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0046756a
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467571
    SHL EAX,0x2                         ; 00467574
    ADD EAX,EDX                         ; 00467577
    FSTP float ptr [EAX + 0x16e9a08]    ; 00467579 | g_ModelPolygonData[0].uv_u[0]
    IMUL EAX,dword ptr [EBP + -0x74],0x14 ; 0046757f
    FLD float ptr [EAX + 0x1626410]     ; 00467583 | g_LoadedVertices[0].vertex.y
    FSUB float ptr [EBP + -0x68]        ; 00467589
    FMUL double ptr [0x0061c9c6]        ; 0046758c | g_TextureScalingFactor_0061c9c6
    FLD float ptr [EBP + -0x70]         ; 00467592
    FSUB float ptr [EBP + -0x68]        ; 00467595
    FDIVP                               ; 00467598
    FLD1                                ; 0046759a
    FADDP                               ; 0046759c
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0046759e
    MOV EAX,dword ptr [EBP + -0x10]     ; 004675a5
    SHL EAX,0x2                         ; 004675a8
    ADD EAX,EDX                         ; 004675ab
    FSTP float ptr [EAX + 0x16e9a48]    ; 004675ad | g_ModelPolygonData[0].uv_v[0]
    JMP 0x00467517                      ; 004675b3
        ;   XREF to: 00467517 (UNCONDITIONAL_JUMP)  ; LAB_00467517
    JMP 0x004674f9                      ; 004675b8
        ;   XREF to: 004674f9 (UNCONDITIONAL_JUMP)  ; LAB_004674f9
        ;   Label: LAB_004675b8
    JMP 0x004676a2                      ; 004675bd
        ;   XREF to: 004676a2 (UNCONDITIONAL_JUMP)  ; LAB_004676a2
        ;   Label: LAB_004675bd
    MOV dword ptr [EBP + -0xc],0x0      ; 004675c2
        ;   Label: LAB_004675c2
    JMP 0x004675d1                      ; 004675c9
        ;   XREF to: 004675d1 (UNCONDITIONAL_JUMP)  ; LAB_004675d1
    MOV EAX,dword ptr [EBP + -0xc]      ; 004675cb
        ;   Label: LAB_004675cb
    INC dword ptr [EBP + -0xc]          ; 004675ce
    MOV EAX,dword ptr [EBP + -0xc]      ; 004675d1
        ;   Label: LAB_004675d1
    CMP EAX,dword ptr [0x016e990c]      ; 004675d4 | g_PolygonCount
    JGE 0x004676a2                      ; 004675da
        ;   XREF to: 004676a2 (CONDITIONAL_JUMP)  ; LAB_004676a2
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004675e0
    MOV dword ptr [EAX + 0x16e9a08],0x3f800000 ; 004675e7 | g_ModelPolygonData[0].uv_u[0]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004675f1
    MOV dword ptr [EAX + 0x16e9a0c],0x437f0000 ; 004675f8 | g_ModelPolygonData[0].uv_u[1]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467602
    MOV dword ptr [EAX + 0x16e9a10],0x437f0000 ; 00467609 | g_ModelPolygonData[0].uv_u[2]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467613
    MOV dword ptr [EAX + 0x16e9a14],0x3f800000 ; 0046761a | g_ModelPolygonData[0].uv_u[3]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467624
    MOV dword ptr [EAX + 0x16e9a48],0x3f800000 ; 0046762b | g_ModelPolygonData[0].uv_v[0]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467635
    MOV dword ptr [EAX + 0x16e9a4c],0x3f800000 ; 0046763c | g_ModelPolygonData[0].uv_v[1]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467646
    MOV dword ptr [EAX + 0x16e9a50],0x437f0000 ; 0046764d | g_ModelPolygonData[0].uv_v[2]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467657
    MOV dword ptr [EAX + 0x16e9a54],0x437f0000 ; 0046765e | g_ModelPolygonData[0].uv_v[3]
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467668
    MOV dword ptr [EAX + 0x16e9910],0x2 ; 0046766f | g_ModelPolygonData
    LEA EAX,[EBP + -0x60]               ; 00467679
    PUSH EAX                            ; 0046767c
    MOV EAX,0x61c9ce                    ; 0046767d | = "%s"
    PUSH EAX                            ; 00467682 | = "%s"
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00467683
    MOV EDX,0x16e9910                   ; 0046768a | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046768f
    ADD EAX,0x4                         ; 00467691
    PUSH EAX                            ; 00467694
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00467695
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046769a
    JMP 0x004675cb                      ; 0046769d
        ;   XREF to: 004675cb (UNCONDITIONAL_JUMP)  ; LAB_004675cb
    MOV ESP,EBP                         ; 004676a2
        ;   Label: LAB_004676a2
    POP EBP                             ; 004676a4
    POP EDI                             ; 004676a5
    POP ESI                             ; 004676a6
    POP EBX                             ; 004676a7
    RET                                 ; 004676a8

