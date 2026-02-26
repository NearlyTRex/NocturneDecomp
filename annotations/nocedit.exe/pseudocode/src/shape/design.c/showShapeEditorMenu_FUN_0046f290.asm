; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_showShapeEditorMenu_FUN_0046f290(void)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e3d4
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507788
;
; Referenced Globals:
;   void* switchdataD_0046f7bc = 0046f67d
;   TerminatedCString s_vga_act_0061e0ee
;   TerminatedCString s_vga_lte_0061e0f6
;   TerminatedCString s_vga_act_0061e0fe
;   TerminatedCString s_vga_act_0061e106
;   TerminatedCString s_s_12_03_47_0061e10e
;   TerminatedCString s_Jan_10_2000_0061e117
;   TerminatedCString s_Demented_Shape_Editor_Bu_0061e123
;   TerminatedCString s_s_1_Point_Editor_0061e14e
;   TerminatedCString s_s_2_Facet_Part_Editor_0061e15e
;   TerminatedCString s_s_3_Model_Editor_0061e173
;   TerminatedCString s_s_4_Center_object_0061e183
;   TerminatedCString s_s_5_Inside_out_0061e194
;   TerminatedCString s_s_6_Simple_texture_0061e1a2
;   TerminatedCString s_s_7_Scale_model_0061e1b4
;   ... and 45 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_doNothing_FUN_00401590
;   engine_2d.c_doNothing_FUN_00402860
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_loadOrBuildColorMap_FUN_00402930
;   engine_2d.c_loadPaletteFile_FUN_004015a0
;   engine_2d.c_setupViewportAndClipping_FUN_00401800
;   shape_design.c_bisectMesh_FUN_0046ed50
;   shape_design.c_centerObject_FUN_00466610
;   shape_design.c_combineTextureMaps_FUN_00469ee0
;   shape_design.c_createCenterVertex_FUN_00469690
;   shape_design.c_createKeyframeModel_FUN_00468320
;   shape_design.c_crushModel_FUN_00469bd0
;   ... and 29 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f290
        ;   Label: shape_design.c_showShapeEditorMenu_FUN_0046f290
    PUSH ESI                            ; 0046f291
    PUSH EDI                            ; 0046f292
    PUSH EBP                            ; 0046f293
    MOV EBP,ESP                         ; 0046f294
    SUB ESP,0x5c                        ; 0046f296
    MOV EAX,[0x00679398]                ; 0046f29c | g_WindowHeight
    DEC EAX                             ; 0046f2a1
    PUSH EAX                            ; 0046f2a2
    MOV EAX,[0x00679394]                ; 0046f2a3 | g_WindowWidth
    DEC EAX                             ; 0046f2a8
    PUSH EAX                            ; 0046f2a9
    PUSH 0x0                            ; 0046f2aa
    PUSH 0x0                            ; 0046f2ac
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 0046f2ae
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 0046f2b3
    MOV EAX,0x61e0ee                    ; 0046f2b6 | = "vga.act"
    PUSH EAX                            ; 0046f2bb | = "vga.act"
    CALL engine_2d.c_loadPaletteFile_FUN_004015a0 ; 0046f2bc
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadPaletteFile_FUN_004015a0(char * filename)
    ADD ESP,0x4                         ; 0046f2c1
    MOV EAX,0x61e0f6                    ; 0046f2c4 | = "vga.lte"
    PUSH EAX                            ; 0046f2c9 | = "vga.lte"
    CALL engine_2d.c_doNothing_FUN_00402860 ; 0046f2ca
        ;   XREF to: 00402860 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00402860(char * filename)
    ADD ESP,0x4                         ; 0046f2cf
    MOV EAX,0x61e0fe                    ; 0046f2d2 | = "vga.act"
    PUSH EAX                            ; 0046f2d7 | = "vga.act"
    CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930 ; 0046f2d8
        ;   XREF to: 00402930 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * filename)
    ADD ESP,0x4                         ; 0046f2dd
    MOV EAX,0x61e106                    ; 0046f2e0 | = "vga.act"
    PUSH EAX                            ; 0046f2e5 | = "vga.act"
    CALL engine_2d.c_doNothing_FUN_00401590 ; 0046f2e6
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; void engine_2d.c_doNothing_FUN_00401590(char * filename)
    ADD ESP,0x4                         ; 0046f2eb
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 ; 0046f2ee
        ;   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0()
    MOV dword ptr [0x01626400],0x8      ; 0046f2f3 | g_ModelCount
    MOV dword ptr [0x016263c0],0x0      ; 0046f2fd | g_EditorBackgroundColors
    MOV dword ptr [0x016263c4],0xff     ; 0046f307 | INT_016263c4
    MOV dword ptr [0x016263c8],0xf8     ; 0046f311 | INT_016263c8
    MOV dword ptr [0x016263cc],0x3      ; 0046f31b | INT_016263cc
    MOV dword ptr [0x016263d0],0x2      ; 0046f325 | INT_016263d0
    MOV dword ptr [0x016263d4],0xfc     ; 0046f32f | INT_016263d4
    MOV dword ptr [0x016263d8],0x4      ; 0046f339 | INT_016263d8
    MOV dword ptr [0x016263dc],0x1      ; 0046f343 | INT_016263dc
    MOV dword ptr [0x016263e0],0x7      ; 0046f34d | g_EditorColorIndices
    MOV dword ptr [0x016263e4],0xf8     ; 0046f357 | INT_016263e4
    MOV dword ptr [0x016263e8],0xff     ; 0046f361 | INT_016263e8
    MOV dword ptr [0x016263ec],0xff     ; 0046f36b | INT_016263ec
    MOV dword ptr [0x016263f0],0xff     ; 0046f375 | INT_016263f0
    MOV dword ptr [0x016263f4],0xff     ; 0046f37f | INT_016263f4
    MOV dword ptr [0x016263f8],0x7      ; 0046f389 | INT_016263f8
    MOV dword ptr [0x016263fc],0x7      ; 0046f393 | INT_016263fc
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046f39d
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046f3a2
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046f3a7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [0x02dd3094],0xffff4b03 ; 0046f3ac | g_LightDirectionX2
    MOV dword ptr [0x02dd3098],0xffff4b03 ; 0046f3b6 | g_LightDirectionY2
    MOV dword ptr [0x02dd309c],0x0      ; 0046f3c0 | g_LightDirectionZ2
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046f3ca
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046f3ca
    MOV EAX,0x61e10e                    ; 0046f3cf | = "12:03:47"
    PUSH EAX                            ; 0046f3d4 | = "12:03:47"
    MOV EAX,0x61e117                    ; 0046f3d5 | = "Jan 10 2000"
    PUSH EAX                            ; 0046f3da | = "Jan 10 2000"
    MOV EAX,0x61e123                    ; 0046f3db | = "Demented Shape Editor    Build date: ..."
    PUSH EAX                            ; 0046f3e0 | = "Demented Shape Editor    Build date: ..."
    LEA EAX,[EBP + -0x54]               ; 0046f3e1
    PUSH EAX                            ; 0046f3e4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046f3e5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046f3ea
    PUSH 0x0                            ; 0046f3ed
    PUSH 0x0                            ; 0046f3ef
    LEA EAX,[EBP + -0x54]               ; 0046f3f1
    PUSH EAX                            ; 0046f3f4
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f3f5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f3fa
    PUSH 0x16                           ; 0046f3fd
    PUSH 0x0                            ; 0046f3ff
    MOV EAX,0x61e14e                    ; 0046f401 | = "1. Point Editor"
    PUSH EAX                            ; 0046f406 | = "1. Point Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f407
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f40c
    PUSH 0x21                           ; 0046f40f
    PUSH 0x0                            ; 0046f411
    MOV EAX,0x61e15e                    ; 0046f413 | = "2. Facet/Part Editor"
    PUSH EAX                            ; 0046f418 | = "2. Facet/Part Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f419
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f41e
    PUSH 0x2c                           ; 0046f421
    PUSH 0x0                            ; 0046f423
    MOV EAX,0x61e173                    ; 0046f425 | = "3. Model Editor"
    PUSH EAX                            ; 0046f42a | = "3. Model Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f42b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f430
    PUSH 0x37                           ; 0046f433
    PUSH 0x0                            ; 0046f435
    MOV EAX,0x61e183                    ; 0046f437 | = "4. Center object"
    PUSH EAX                            ; 0046f43c | = "4. Center object"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f43d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f442
    PUSH 0x42                           ; 0046f445
    PUSH 0x0                            ; 0046f447
    MOV EAX,0x61e194                    ; 0046f449 | = "5. Inside out"
    PUSH EAX                            ; 0046f44e | = "5. Inside out"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f44f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f454
    PUSH 0x4d                           ; 0046f457
    PUSH 0x0                            ; 0046f459
    MOV EAX,0x61e1a2                    ; 0046f45b | = "6. Simple texture"
    PUSH EAX                            ; 0046f460 | = "6. Simple texture"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f461
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f466
    PUSH 0x58                           ; 0046f469
    PUSH 0x0                            ; 0046f46b
    MOV EAX,0x61e1b4                    ; 0046f46d | = "7. Scale model"
    PUSH EAX                            ; 0046f472 | = "7. Scale model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f473
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f478
    PUSH 0x63                           ; 0046f47b
    PUSH 0x0                            ; 0046f47d
    MOV EAX,0x61e1c3                    ; 0046f47f | = "8. Vertex reducer"
    PUSH EAX                            ; 0046f484 | = "8. Vertex reducer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f485
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f48a
    PUSH 0x6e                           ; 0046f48d
    PUSH 0x0                            ; 0046f48f
    MOV EAX,0x61e1d5                    ; 0046f491 | = "9. Polygon reducer"
    PUSH EAX                            ; 0046f496 | = "9. Polygon reducer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f497
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f49c
    PUSH 0x84                           ; 0046f49f
    PUSH 0x0                            ; 0046f4a4
    MOV EAX,0x61e1e8                    ; 0046f4a6 | = "A. Ground center object"
    PUSH EAX                            ; 0046f4ab | = "A. Ground center object"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f4ac
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f4b1
    PUSH 0x8f                           ; 0046f4b4
    PUSH 0x0                            ; 0046f4b9
    MOV EAX,0x61e200                    ; 0046f4bb | = "B. Key frame model"
    PUSH EAX                            ; 0046f4c0 | = "B. Key frame model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f4c1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f4c6
    PUSH 0x9a                           ; 0046f4c9
    PUSH 0x0                            ; 0046f4ce
    MOV EAX,0x61e213                    ; 0046f4d0 | = "C. Squash model for 3D morph"
    PUSH EAX                            ; 0046f4d5 | = "C. Squash model for 3D morph"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f4d6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f4db
    PUSH 0xa5                           ; 0046f4de
    PUSH 0x0                            ; 0046f4e3
    MOV EAX,0x61e230                    ; 0046f4e5 | = "D. Crush model"
    PUSH EAX                            ; 0046f4ea | = "D. Crush model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f4eb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f4f0
    PUSH 0xb0                           ; 0046f4f3
    PUSH 0x0                            ; 0046f4f8
    MOV EAX,0x61e23f                    ; 0046f4fa | = "E. Create center vertex"
    PUSH EAX                            ; 0046f4ff | = "E. Create center vertex"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f500
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f505
    PUSH 0xbb                           ; 0046f508
    PUSH 0x0                            ; 0046f50d
    MOV EAX,0x61e257                    ; 0046f50f | = "F. Globe gen"
    PUSH EAX                            ; 0046f514 | = "F. Globe gen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f515
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f51a
    PUSH 0xc6                           ; 0046f51d
    PUSH 0x0                            ; 0046f522
    MOV EAX,0x61e264                    ; 0046f524 | = "G. Shell gen"
    PUSH EAX                            ; 0046f529 | = "G. Shell gen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f52a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f52f
    PUSH 0xd1                           ; 0046f532
    PUSH 0x0                            ; 0046f537
    MOV EAX,0x61e271                    ; 0046f539 | = "I. Octant gen"
    PUSH EAX                            ; 0046f53e | = "I. Octant gen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f53f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f544
    PUSH 0xdc                           ; 0046f547
    PUSH 0x0                            ; 0046f54c
    MOV EAX,0x61e27f                    ; 0046f54e | = "J. Scale X,Y,Z"
    PUSH EAX                            ; 0046f553 | = "J. Scale X,Y,Z"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f554
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f559
    PUSH 0xe7                           ; 0046f55c
    PUSH 0x0                            ; 0046f561
    MOV EAX,0x61e28e                    ; 0046f563 | = "K. Size model in one dimension"
    PUSH EAX                            ; 0046f568 | = "K. Size model in one dimension"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f569
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f56e
    PUSH 0xf2                           ; 0046f571
    PUSH 0x0                            ; 0046f576
    MOV EAX,0x61e2ad                    ; 0046f578 | = "L. Size model to X feet"
    PUSH EAX                            ; 0046f57d | = "L. Size model to X feet"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f57e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f583
    PUSH 0xfd                           ; 0046f586
    PUSH 0x0                            ; 0046f58b
    MOV EAX,0x61e2c5                    ; 0046f58d | = "M. Size model to Y feet"
    PUSH EAX                            ; 0046f592 | = "M. Size model to Y feet"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f593
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f598
    PUSH 0x108                          ; 0046f59b
    PUSH 0x0                            ; 0046f5a0
    MOV EAX,0x61e2dd                    ; 0046f5a2 | = "N. Size model to Z feet"
    PUSH EAX                            ; 0046f5a7 | = "N. Size model to Z feet"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f5a8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f5ad
    PUSH 0x113                          ; 0046f5b0
    PUSH 0x0                            ; 0046f5b5
    MOV EAX,0x61e2f5                    ; 0046f5b7 | = "O. Size stadium"
    PUSH EAX                            ; 0046f5bc | = "O. Size stadium"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f5bd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f5c2
    PUSH 0x11e                          ; 0046f5c5
    PUSH 0x0                            ; 0046f5ca
    MOV EAX,0x61e305                    ; 0046f5cc | = "P. Combine texture maps"
    PUSH EAX                            ; 0046f5d1 | = "P. Combine texture maps"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f5d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f5d7
    PUSH 0x129                          ; 0046f5da
    PUSH 0x0                            ; 0046f5df
    MOV EAX,0x61e31d                    ; 0046f5e1 | = "Q. Tile texture maps"
    PUSH EAX                            ; 0046f5e6 | = "Q. Tile texture maps"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f5e7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f5ec
    PUSH 0x134                          ; 0046f5ef
    PUSH 0x0                            ; 0046f5f4
    MOV EAX,0x61e332                    ; 0046f5f6 | = "R. Multicram"
    PUSH EAX                            ; 0046f5fb | = "R. Multicram"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f5fc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f601
    PUSH 0x13f                          ; 0046f604
    PUSH 0x0                            ; 0046f609
    MOV EAX,0x61e33f                    ; 0046f60b | = "S. Detach faces"
    PUSH EAX                            ; 0046f610 | = "S. Detach faces"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f611
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f616
    PUSH 0x14a                          ; 0046f619
    PUSH 0x0                            ; 0046f61e
    MOV EAX,0x61e34f                    ; 0046f620 | = "T. Mesh smooth"
    PUSH EAX                            ; 0046f625 | = "T. Mesh smooth"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f626
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f62b
    PUSH 0x155                          ; 0046f62e
    PUSH 0x0                            ; 0046f633
    MOV EAX,0x61e35e                    ; 0046f635 | = "U. Bisect mesh"
    PUSH EAX                            ; 0046f63a | = "U. Bisect mesh"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046f63b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046f640
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046f643
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046f648
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0046f64d
    PUSH EAX                            ; 0046f652
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0046f653
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046f658
    MOV dword ptr [EBP + -0x4],EAX      ; 0046f65b
    CMP dword ptr [EBP + -0x4],0x48     ; 0046f65e
    JNZ 0x0046f672                      ; 0046f662
        ;   XREF to: 0046f672 (CONDITIONAL_JUMP)  ; LAB_0046f672
    MOV EAX,0x61e36d                    ; 0046f664 | = "editmain.hlp"
    PUSH EAX                            ; 0046f669 | = "editmain.hlp"
    CALL shape_design.c_showHelpFile_FUN_00457f00 ; 0046f66a
        ;   XREF to: 00457f00 (UNCONDITIONAL_CALL)  ; void shape_design.c_showHelpFile_FUN_00457f00(char * help_filename)
    ADD ESP,0x4                         ; 0046f66f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046f672
        ;   Label: LAB_0046f672
    MOV dword ptr [EBP + -0x58],EAX     ; 0046f675
    JMP 0x0046f850                      ; 0046f678
        ;   XREF to: 0046f850 (UNCONDITIONAL_JUMP)  ; LAB_0046f850
    CALL shape_design.c_showPointEditor_FUN_0045c6c0 ; 0046f67d
        ;   XREF to: 0045c6c0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showPointEditor_FUN_0045c6c0()
        ;   Label: caseD_31
    JMP 0x0046f86f                      ; 0046f682
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_showFacetPartEditor_FUN_0045f1d0 ; 0046f687
        ;   XREF to: 0045f1d0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showFacetPartEditor_FUN_0045f1d0()
        ;   Label: caseD_32
    JMP 0x0046f86f                      ; 0046f68c
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_showModelEditor_FUN_00461aa0 ; 0046f691
        ;   XREF to: 00461aa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showModelEditor_FUN_00461aa0()
        ;   Label: caseD_33
    JMP 0x0046f86f                      ; 0046f696
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_centerObject_FUN_00466610 ; 0046f69b
        ;   XREF to: 00466610 (UNCONDITIONAL_CALL)  ; void shape_design.c_centerObject_FUN_00466610()
        ;   Label: caseD_34
    JMP 0x0046f86f                      ; 0046f6a0
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_turnModelInsideOut_FUN_004671e0 ; 0046f6a5
        ;   XREF to: 004671e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_turnModelInsideOut_FUN_004671e0()
        ;   Label: caseD_35
    JMP 0x0046f86f                      ; 0046f6aa
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_simpleTexture_FUN_00467350 ; 0046f6af
        ;   XREF to: 00467350 (UNCONDITIONAL_CALL)  ; void shape_design.c_simpleTexture_FUN_00467350()
        ;   Label: caseD_36
    JMP 0x0046f86f                      ; 0046f6b4
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_scaleModel_FUN_00467e70 ; 0046f6b9
        ;   XREF to: 00467e70 (UNCONDITIONAL_CALL)  ; void shape_design.c_scaleModel_FUN_00467e70()
        ;   Label: caseD_37
    JMP 0x0046f86f                      ; 0046f6be
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    PUSH 0x1                            ; 0046f6c3
        ;   Label: caseD_38
    PUSH 0xbf800000                     ; 0046f6c5
    PUSH 0x3dcccccd                     ; 0046f6ca
    CALL shape_design.c_vertexReducer_FUN_00467850 ; 0046f6cf
        ;   XREF to: 00467850 (UNCONDITIONAL_CALL)  ; void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress)
    ADD ESP,0xc                         ; 0046f6d4
    JMP 0x0046f86f                      ; 0046f6d7
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_polygonReducer_FUN_004654e0 ; 0046f6dc
        ;   XREF to: 004654e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_polygonReducer_FUN_004654e0()
        ;   Label: caseD_39
    JMP 0x0046f86f                      ; 0046f6e1
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_groundCenterObject_FUN_00466a30 ; 0046f6e6
        ;   XREF to: 00466a30 (UNCONDITIONAL_CALL)  ; void shape_design.c_groundCenterObject_FUN_00466a30()
        ;   Label: caseD_41
    JMP 0x0046f86f                      ; 0046f6eb
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_createKeyframeModel_FUN_00468320 ; 0046f6f0
        ;   XREF to: 00468320 (UNCONDITIONAL_CALL)  ; void shape_design.c_createKeyframeModel_FUN_00468320()
        ;   Label: caseD_42
    JMP 0x0046f86f                      ; 0046f6f5
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_squashShapeFor3DMorph_FUN_004685e0 ; 0046f6fa
        ;   XREF to: 004685e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_squashShapeFor3DMorph_FUN_004685e0()
        ;   Label: caseD_43
    JMP 0x0046f86f                      ; 0046f6ff
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_crushModel_FUN_00469bd0 ; 0046f704
        ;   XREF to: 00469bd0 (UNCONDITIONAL_CALL)  ; void shape_design.c_crushModel_FUN_00469bd0()
        ;   Label: caseD_44
    JMP 0x0046f86f                      ; 0046f709
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_createCenterVertex_FUN_00469690 ; 0046f70e
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void shape_design.c_createCenterVertex_FUN_00469690()
        ;   Label: caseD_45
    JMP 0x0046f86f                      ; 0046f713
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_generateGlobe_FUN_00468910 ; 0046f718
        ;   XREF to: 00468910 (UNCONDITIONAL_CALL)  ; void shape_design.c_generateGlobe_FUN_00468910()
        ;   Label: caseD_46
    JMP 0x0046f86f                      ; 0046f71d
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_generateShell_FUN_00468f20 ; 0046f722
        ;   XREF to: 00468f20 (UNCONDITIONAL_CALL)  ; void shape_design.c_generateShell_FUN_00468f20()
        ;   Label: caseD_47
    JMP 0x0046f86f                      ; 0046f727
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_generateOctant_FUN_00469420 ; 0046f72c
        ;   XREF to: 00469420 (UNCONDITIONAL_CALL)  ; int shape_design.c_generateOctant_FUN_00469420()
        ;   Label: caseD_49
    JMP 0x0046f86f                      ; 0046f731
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_scaleXYZ_FUN_00467f30 ; 0046f736
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void shape_design.c_scaleXYZ_FUN_00467f30()
        ;   Label: caseD_4a
    JMP 0x0046f86f                      ; 0046f73b
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_sizeModelInOneDimension_FUN_00469850 ; 0046f740
        ;   XREF to: 00469850 (UNCONDITIONAL_CALL)  ; void shape_design.c_sizeModelInOneDimension_FUN_00469850()
        ;   Label: caseD_4b
    JMP 0x0046f86f                      ; 0046f745
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_sizeModelToXFeet_FUN_00466e40 ; 0046f74a
        ;   XREF to: 00466e40 (UNCONDITIONAL_CALL)  ; void shape_design.c_sizeModelToXFeet_FUN_00466e40()
        ;   Label: caseD_4c
    JMP 0x0046f86f                      ; 0046f74f
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_sizeModelToYFeet_FUN_00467010 ; 0046f754
        ;   XREF to: 00467010 (UNCONDITIONAL_CALL)  ; void shape_design.c_sizeModelToYFeet_FUN_00467010()
        ;   Label: caseD_4d
    JMP 0x0046f86f                      ; 0046f759
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_sizeModelToZFeet_FUN_00466c70 ; 0046f75e
        ;   XREF to: 00466c70 (UNCONDITIONAL_CALL)  ; void shape_design.c_sizeModelToZFeet_FUN_00466c70()
        ;   Label: caseD_4e
    JMP 0x0046f86f                      ; 0046f763
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_sizeForStadium_FUN_00469c70 ; 0046f768
        ;   XREF to: 00469c70 (UNCONDITIONAL_CALL)  ; void shape_design.c_sizeForStadium_FUN_00469c70()
        ;   Label: caseD_4f
    JMP 0x0046f86f                      ; 0046f76d
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_combineTextureMaps_FUN_00469ee0 ; 0046f772
        ;   XREF to: 00469ee0 (UNCONDITIONAL_CALL)  ; void shape_design.c_combineTextureMaps_FUN_00469ee0()
        ;   Label: caseD_50
    JMP 0x0046f86f                      ; 0046f777
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    PUSH 0x1                            ; 0046f77c
        ;   Label: caseD_51
    PUSH 0x0                            ; 0046f77e
    CALL shape_design.c_tileTextureMaps_FUN_0046a180 ; 0046f780
        ;   XREF to: 0046a180 (UNCONDITIONAL_CALL)  ; void shape_design.c_tileTextureMaps_FUN_0046a180(SCram * cram, int prompt_for_model)
    ADD ESP,0x8                         ; 0046f785
    JMP 0x0046f86f                      ; 0046f788
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_multicramTextures_FUN_0046eb80 ; 0046f78d
        ;   XREF to: 0046eb80 (UNCONDITIONAL_CALL)  ; void shape_design.c_multicramTextures_FUN_0046eb80()
        ;   Label: caseD_52
    JMP 0x0046f86f                      ; 0046f792
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_detachFaces_FUN_0046eba0 ; 0046f797
        ;   XREF to: 0046eba0 (UNCONDITIONAL_CALL)  ; void shape_design.c_detachFaces_FUN_0046eba0()
        ;   Label: caseD_53
    JMP 0x0046f86f                      ; 0046f79c
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_smoothMesh_FUN_0046ed00 ; 0046f7a1
        ;   XREF to: 0046ed00 (UNCONDITIONAL_CALL)  ; void shape_design.c_smoothMesh_FUN_0046ed00()
        ;   Label: caseD_54
    JMP 0x0046f86f                      ; 0046f7a6
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    CALL shape_design.c_bisectMesh_FUN_0046ed50 ; 0046f7ab
        ;   XREF to: 0046ed50 (UNCONDITIONAL_CALL)  ; void shape_design.c_bisectMesh_FUN_0046ed50()
        ;   Label: caseD_55
    JMP 0x0046f86f                      ; 0046f7b0
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
    JMP 0x0046f86f                      ; 0046f7b5
        ;   XREF to: 0046f86f (UNCONDITIONAL_JUMP)  ; LAB_0046f86f
        ;   Label: caseD_48
    MOV EAX,dword ptr [EBP + -0x58]     ; 0046f850
        ;   Label: LAB_0046f850
    SUB EAX,0x31                        ; 0046f853
    MOV dword ptr [EBP + -0x5c],EAX     ; 0046f856
    CMP dword ptr [EBP + -0x5c],0x24    ; 0046f859
    JA 0x0046f7b5                       ; 0046f85d
        ;   XREF to: 0046f7b5 (CONDITIONAL_JUMP)  ; caseD_40
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046f863
    SHL EAX,0x2                         ; 0046f866
    JMP dword ptr [EAX + 0x46f7bc]      ; 0046f869 | caseD_31 | caseD_32 | caseD_33
        ;   Label: switchD
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046f86f
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0046f86f
    CALL shape_design.c_handleEditorHotkeys_FUN_0045b990 ; 0046f874
        ;   XREF to: 0045b990 (UNCONDITIONAL_CALL)  ; void shape_design.c_handleEditorHotkeys_FUN_0045b990()
    CMP dword ptr [EBP + -0x4],0x1b     ; 0046f879
    JZ 0x0046f884                       ; 0046f87d
        ;   XREF to: 0046f884 (CONDITIONAL_JUMP)  ; LAB_0046f884
    JMP 0x0046f3ca                      ; 0046f87f
        ;   XREF to: 0046f3ca (UNCONDITIONAL_JUMP)  ; LAB_0046f3ca
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046f884
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0046f884
    MOV ESP,EBP                         ; 0046f889
    POP EBP                             ; 0046f88b
    POP EDI                             ; 0046f88c
    POP ESI                             ; 0046f88d
    POP EBX                             ; 0046f88e
    RET                                 ; 0046f88f

