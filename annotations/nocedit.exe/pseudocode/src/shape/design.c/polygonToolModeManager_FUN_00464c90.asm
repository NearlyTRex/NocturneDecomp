; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_polygonToolModeManager_FUN_00464c90(int input_parameter)
;
; Parameters:
; int              Stack[0x4]:4   input_parameter
; Local Variables:
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xb7]:1  local_b7
; undefined1       Stack[-0x68]:1  local_68
; undefined1       Stack[-0x67]:1  local_67
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460700
;
; Referenced Globals:
;   void* switchdataD_00464e28 = 00464dfd
;   void* switchdataD_00464f0c = 00464e9b
;   void* switchdataD_00465044 = 00464faf
;   char s_EmptyChar_0061c3e2 = \x00
;   TerminatedCString s_Mouse_polygon_selection__0061c3e3
;   undefined4 s_ouse_polygon_selection_on_0061c3e4
;   undefined4 s_use_polygon_selection_on_0061c3e5
;   undefined4 s_se_polygon_selection_on_0061c3e6
;   char s_EmptyChar_0061c3fe = \x00
;   TerminatedCString s_Polygon_merger_tol_4_2f__0061c3ff
;   undefined4 s_-_Polygon_merger_(tol_=_%4.2f_de_0061c400
;   undefined4 s_Polygon_merger_(tol_=_%4.2f_degs_0061c401
;   TerminatedCString s_Polygon_attacher_tol_4_2_0061c424
;   TerminatedCString s_Polygon_detacher_0061c44c
;   TerminatedCString s_Polygon_vertex_welder_to_0061c460
;   ... and 20 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   engine_2d.c_drawTextColor_FUN_00402430
;   shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
;   shape_design.c_detectMouseButtonClick_FUN_00464870
;   shape_design.c_duplicateSharedVertices_FUN_00465d50
;   shape_design.c_findClosestPolygonToMouse_FUN_00466250
;   shape_design.c_interactiveGlobalWeld_FUN_00466040
;   shape_design.c_interactiveWeldVertices_FUN_00465e90
;   shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
;   shape_design.c_weldNearbyVertices_FUN_00465c50
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464c90
        ;   Label: shape_design.c_polygonToolModeManager_FUN_00464c90
    PUSH ESI                            ; 00464c91
    PUSH EDI                            ; 00464c92
    PUSH EBP                            ; 00464c93
    MOV EBP,ESP                         ; 00464c94
    SUB ESP,0xc8                        ; 00464c96
    MOV EAX,0x61c3e2                    ; 00464c9c | char s_EmptyChar_0061c3e2
    PUSH EAX                            ; 00464ca1 | char s_EmptyChar_0061c3e2
    MOV EAX,0x66eda8                    ; 00464ca2 | char[80] g_LoadedModelName
    PUSH EAX                            ; 00464ca7 | char[80] g_LoadedModelName
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00464ca8 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464cad
    TEST EAX,EAX                        ; 00464cb0
    JNZ 0x00464cc0                      ; 00464cb2 | LAB_00464cc0
        ;   XREF to: 00464cc0 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00464cb4
    JMP 0x0046514d                      ; 00464cbb | LAB_0046514d
        ;   XREF to: 0046514d (UNCONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eca],0x0       ; 00464cc0 | CHAR_ARRAY_02d03eca
        ;   Label: LAB_00464cc0
    JZ 0x00464cd2                       ; 00464cc7 | LAB_00464cd2
        ;   XREF to: 00464cd2 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 00464cc9 | CHAR_ARRAY_02d03ec2
    JNZ 0x00464cd4                      ; 00464cd0 | LAB_00464cd4
        ;   XREF to: 00464cd4 (CONDITIONAL_JUMP)
    JMP 0x00464d3f                      ; 00464cd2 | LAB_00464d3f
        ;   Label: LAB_00464cd2
        ;   XREF to: 00464d3f (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eca],0x0       ; 00464cd4 | CHAR_ARRAY_02d03eca
        ;   Label: LAB_00464cd4
    XOR byte ptr [0x015c4880],0x1       ; 00464cdb | int g_ToolModeEnabled
    CMP dword ptr [0x015c4880],0x0      ; 00464ce2 | int g_ToolModeEnabled
    JZ 0x00464d29                       ; 00464ce9 | LAB_00464d29
        ;   XREF to: 00464d29 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x01626408]      ; 00464ceb | int g_VertexCount
    MOV dword ptr [0x015c4884],ESI      ; 00464cf1 | int g_SavedVertexCount
    MOV ESI,dword ptr [0x016e990c]      ; 00464cf7 | int g_PolygonCount
    MOV dword ptr [0x015c4888],ESI      ; 00464cfd | int g_SavedPolygonCount
    MOV ESI,0x66eda8                    ; 00464d03 | char[80] g_LoadedModelName
    MOV EDI,0x15c4890                   ; 00464d08 | char[40] g_SavedModelName
    PUSH EDI                            ; 00464d0d | char[40] g_SavedModelName
    MOV AL,byte ptr [ESI]               ; 00464d0e | char[80] g_LoadedModelName
        ;   Label: LAB_00464d0e
    MOV byte ptr [EDI],AL               ; 00464d10 | char[40] g_SavedModelName
    CMP AL,0x0                          ; 00464d12
    JZ 0x00464d26                       ; 00464d14 | LAB_00464d26
        ;   XREF to: 00464d26 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00464d16 | s__0066eda9
    ADD ESI,0x2                         ; 00464d19
    MOV byte ptr [EDI + 0x1],AL         ; 00464d1c | CHAR_ARRAY_015c4891
    ADD EDI,0x2                         ; 00464d1f
    CMP AL,0x0                          ; 00464d22
    JNZ 0x00464d0e                      ; 00464d24 | LAB_00464d0e
        ;   XREF to: 00464d0e (CONDITIONAL_JUMP)
    POP EDI                             ; 00464d26
        ;   Label: LAB_00464d26
    JMP 0x00464d3f                      ; 00464d27 | LAB_00464d3f
        ;   XREF to: 00464d3f (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x01e528bc],0xffffffff ; 00464d29 | int g_SecondaryPolygonIndex
        ;   Label: LAB_00464d29
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00464d33
    JMP 0x0046514d                      ; 00464d3a | LAB_0046514d
        ;   XREF to: 0046514d (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x015c4880],0x0      ; 00464d3f | int g_ToolModeEnabled
        ;   Label: LAB_00464d3f
    JZ 0x00464d7e                       ; 00464d46 | LAB_00464d7e
        ;   XREF to: 00464d7e (CONDITIONAL_JUMP)
    MOV EAX,0x66eda8                    ; 00464d48 | char[80] g_LoadedModelName
    PUSH EAX                            ; 00464d4d | char[80] g_LoadedModelName
    MOV EAX,0x15c4890                   ; 00464d4e | char[40] g_SavedModelName
    PUSH EAX                            ; 00464d53 | char[40] g_SavedModelName
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00464d54 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464d59
    TEST EAX,EAX                        ; 00464d5c
    JNZ 0x00464d6d                      ; 00464d5e | LAB_00464d6d
        ;   XREF to: 00464d6d (CONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 00464d60 | int g_VertexCount
    CMP EAX,dword ptr [0x015c4884]      ; 00464d65 | int g_SavedVertexCount
    JLE 0x00464d6f                      ; 00464d6b | LAB_00464d6f
        ;   XREF to: 00464d6f (CONDITIONAL_JUMP)
    JMP 0x00464d7c                      ; 00464d6d | LAB_00464d7c
        ;   Label: LAB_00464d6d
        ;   XREF to: 00464d7c (UNCONDITIONAL_JUMP)
    MOV EAX,[0x016e990c]                ; 00464d6f | int g_PolygonCount
        ;   Label: LAB_00464d6f
    CMP EAX,dword ptr [0x015c4888]      ; 00464d74 | int g_SavedPolygonCount
    JLE 0x00464d7e                      ; 00464d7a | LAB_00464d7e
        ;   XREF to: 00464d7e (CONDITIONAL_JUMP)
    JMP 0x00464d80                      ; 00464d7c | LAB_00464d80
        ;   Label: LAB_00464d7c
        ;   XREF to: 00464d80 (UNCONDITIONAL_JUMP)
    JMP 0x00464da0                      ; 00464d7e | LAB_00464da0
        ;   Label: LAB_00464d7e
        ;   XREF to: 00464da0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x015c4880],0x0      ; 00464d80 | int g_ToolModeEnabled
        ;   Label: LAB_00464d80
    MOV dword ptr [0x01e528bc],0xffffffff ; 00464d8a | int g_SecondaryPolygonIndex
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00464d94
    JMP 0x0046514d                      ; 00464d9b | LAB_0046514d
        ;   XREF to: 0046514d (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x015c4880],0x0      ; 00464da0 | int g_ToolModeEnabled
        ;   Label: LAB_00464da0
    JNZ 0x00464db4                      ; 00464da7 | LAB_00464db4
        ;   XREF to: 00464db4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464da9
    MOV dword ptr [EBP + -0x8],EAX      ; 00464dac
    JMP 0x0046514d                      ; 00464daf | LAB_0046514d
        ;   XREF to: 0046514d (UNCONDITIONAL_JUMP)
    CALL shape_design.c_findClosestPolygonToMouse_FUN_00466250 ; 00464db4 | int shape_design.c_findClosestPolygonToMouse_FUN_00466250()
        ;   Label: LAB_00464db4
        ;   XREF to: 00466250 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x14],EAX      ; 00464db9
    CMP byte ptr [0x02d03eca],0x0       ; 00464dbc | CHAR_ARRAY_02d03eca
    JZ 0x00464dce                       ; 00464dc3 | LAB_00464dce
        ;   XREF to: 00464dce (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 00464dc5 | CHAR_ARRAY_02d03ec2
    JZ 0x00464dd0                       ; 00464dcc | LAB_00464dd0
        ;   XREF to: 00464dd0 (CONDITIONAL_JUMP)
    JMP 0x00464df0                      ; 00464dce | LAB_00464df0
        ;   Label: LAB_00464dce
        ;   XREF to: 00464df0 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eca],0x0       ; 00464dd0 | CHAR_ARRAY_02d03eca
        ;   Label: LAB_00464dd0
    INC dword ptr [0x015c48b8]          ; 00464dd7 | int g_PolygonToolMode
    CMP dword ptr [0x015c48b8],0x5      ; 00464ddd | int g_PolygonToolMode
    JLE 0x00464df0                      ; 00464de4 | LAB_00464df0
        ;   XREF to: 00464df0 (CONDITIONAL_JUMP)
    MOV dword ptr [0x015c48b8],0x0      ; 00464de6 | int g_PolygonToolMode
    MOV EAX,[0x015c48b8]                ; 00464df0 | int g_PolygonToolMode
        ;   Label: LAB_00464df0
    MOV dword ptr [EBP + 0xffffff54],EAX ; 00464df5
    JMP 0x00464e3c                      ; 00464dfb | LAB_00464e3c
        ;   XREF to: 00464e3c (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x3e4ccccd ; 00464dfd
        ;   Label: caseD_1
    JMP 0x00464e61                      ; 00464e04 | default
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x3c23d70a ; 00464e06
        ;   Label: caseD_2
    JMP 0x00464e61                      ; 00464e0d | default
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    JMP 0x00464e61                      ; 00464e0f | default
        ;   Label: caseD_3
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x3c23d70a ; 00464e11
        ;   Label: caseD_4
    JMP 0x00464e61                      ; 00464e18 | default
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x3c23d70a ; 00464e1a
        ;   Label: caseD_5
    JMP 0x00464e61                      ; 00464e21 | default
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    JMP 0x00464e61                      ; 00464e23 | default
        ;   Label: LAB_00464e23
        ;   XREF to: 00464e61 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff54] ; 00464e3c
        ;   Label: LAB_00464e3c
    DEC EAX                             ; 00464e42
    MOV dword ptr [EBP + 0xffffff50],EAX ; 00464e43
    CMP dword ptr [EBP + 0xffffff50],0x4 ; 00464e49
    JA 0x00464e23                       ; 00464e50 | LAB_00464e23
        ;   XREF to: 00464e23 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff50] ; 00464e52
    SHL EAX,0x2                         ; 00464e58
    JMP dword ptr [EAX + 0x464e28]      ; 00464e5b | void * switchdataD_00464e28
        ;   Label: switchD
    PUSH 0x1                            ; 00464e61
        ;   Label: default
    CALL shape_design.c_detectMouseButtonClick_FUN_00464870 ; 00464e63 | int shape_design.c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)
        ;   XREF to: 00464870 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00464e68
    TEST EAX,EAX                        ; 00464e6b
    JZ 0x00464f58                       ; 00464e6d | LAB_00464f58
        ;   XREF to: 00464f58 (CONDITIONAL_JUMP)
    CMP dword ptr [0x015c48b8],0x0      ; 00464e73 | int g_PolygonToolMode
    JZ 0x00464e8b                       ; 00464e7a | LAB_00464e8b
        ;   XREF to: 00464e8b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00464e7c
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 00464e7e | void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00464e83
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 00464e86 | void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)
    MOV EAX,[0x015c48b8]                ; 00464e8b | int g_PolygonToolMode
        ;   Label: LAB_00464e8b
    MOV dword ptr [EBP + 0xffffff4c],EAX ; 00464e90
    JMP 0x00464f20                      ; 00464e96 | LAB_00464f20
        ;   XREF to: 00464f20 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464e9b
        ;   Label: caseD_1
    SUB ESP,0x4                         ; 00464e9e
    FSTP float ptr [ESP]                ; 00464ea1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464ea4
    PUSH EAX                            ; 00464ea7
    CALL shape_design.c_polygonMergerSelectAndProcess_FUN_00465160 ; 00464ea8 | void shape_design.c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index, float tolerance)
        ;   XREF to: 00465160 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464ead
    JMP 0x00464f45                      ; 00464eb0 | default
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464eb5
        ;   Label: caseD_2
    SUB ESP,0x4                         ; 00464eb8
    FSTP float ptr [ESP]                ; 00464ebb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464ebe
    PUSH EAX                            ; 00464ec1
    CALL shape_design.c_weldNearbyVertices_FUN_00465c50 ; 00464ec2 | void shape_design.c_weldNearbyVertices_FUN_00465c50(int polygon_index, float tolerance)
        ;   XREF to: 00465c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464ec7
    JMP 0x00464f45                      ; 00464eca | default
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464ecf
        ;   Label: caseD_3
    PUSH EAX                            ; 00464ed2
    CALL shape_design.c_duplicateSharedVertices_FUN_00465d50 ; 00464ed3 | void shape_design.c_duplicateSharedVertices_FUN_00465d50(int polygon_index)
        ;   XREF to: 00465d50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00464ed8
    JMP 0x00464f45                      ; 00464edb | default
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464edd
        ;   Label: caseD_4
    SUB ESP,0x4                         ; 00464ee0
    FSTP float ptr [ESP]                ; 00464ee3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464ee6
    PUSH EAX                            ; 00464ee9
    CALL shape_design.c_interactiveWeldVertices_FUN_00465e90 ; 00464eea | void shape_design.c_interactiveWeldVertices_FUN_00465e90(int polygon_index, float tolerance)
        ;   XREF to: 00465e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464eef
    JMP 0x00464f45                      ; 00464ef2 | default
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464ef4
        ;   Label: caseD_5
    SUB ESP,0x4                         ; 00464ef7
    FSTP float ptr [ESP]                ; 00464efa
    CALL shape_design.c_interactiveGlobalWeld_FUN_00466040 ; 00464efd | void shape_design.c_interactiveGlobalWeld_FUN_00466040(float tolerance)
        ;   XREF to: 00466040 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00464f02
    JMP 0x00464f45                      ; 00464f05 | default
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    JMP 0x00464f45                      ; 00464f07 | default
        ;   Label: LAB_00464f07
        ;   XREF to: 00464f45 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff4c] ; 00464f20
        ;   Label: LAB_00464f20
    DEC EAX                             ; 00464f26
    MOV dword ptr [EBP + 0xffffff48],EAX ; 00464f27
    CMP dword ptr [EBP + 0xffffff48],0x4 ; 00464f2d
    JA 0x00464f07                       ; 00464f34 | LAB_00464f07
        ;   XREF to: 00464f07 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff48] ; 00464f36
    SHL EAX,0x2                         ; 00464f3c
    JMP dword ptr [EAX + 0x464f0c]      ; 00464f3f | void * switchdataD_00464f0c
        ;   Label: switchD
    CMP dword ptr [0x015c48b8],0x0      ; 00464f45 | int g_PolygonToolMode
        ;   Label: default
    JZ 0x00464f58                       ; 00464f4c | LAB_00464f58
        ;   XREF to: 00464f58 (CONDITIONAL_JUMP)
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 00464f4e | void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 00464f53 | int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)
    MOV ESI,0x61c3e3                    ; 00464f58 | = "Mouse polygon selection on" | s_Mouse_polygon_selection__0061c3e3 = Mouse polygon selection on
        ;   Label: LAB_00464f58
    LEA EDI,[EBP + 0xffffff58]          ; 00464f5d
    PUSH EDI                            ; 00464f63
    MOV AL,byte ptr [ESI]               ; 00464f64 | = "Mouse polygon selection on" | s_Mouse_polygon_selection__0061c3e3 = Mouse polygon selection on
        ;   Label: LAB_00464f64
    MOV byte ptr [EDI],AL               ; 00464f66
    CMP AL,0x0                          ; 00464f68
    JZ 0x00464f7c                       ; 00464f6a | LAB_00464f7c
        ;   XREF to: 00464f7c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00464f6c | s_ouse_polygon_selection_on_0061c3e4
    ADD ESI,0x2                         ; 00464f6f
    MOV byte ptr [EDI + 0x1],AL         ; 00464f72
    ADD EDI,0x2                         ; 00464f75
    CMP AL,0x0                          ; 00464f78
    JNZ 0x00464f64                      ; 00464f7a | LAB_00464f64
        ;   XREF to: 00464f64 (CONDITIONAL_JUMP)
    POP EDI                             ; 00464f7c
        ;   Label: LAB_00464f7c
    MOV ESI,0x61c3fe                    ; 00464f7d | char s_EmptyChar_0061c3fe
    LEA EDI,[EBP + -0x58]               ; 00464f82
    PUSH EDI                            ; 00464f85
    MOV AL,byte ptr [ESI]               ; 00464f86 | char s_EmptyChar_0061c3fe
        ;   Label: LAB_00464f86
    MOV byte ptr [EDI],AL               ; 00464f88
    CMP AL,0x0                          ; 00464f8a
    JZ 0x00464f9e                       ; 00464f8c | LAB_00464f9e
        ;   XREF to: 00464f9e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00464f8e | = " - Polygon merger (tol = %4.2f degs)" | s_Polygon_merger_tol_4_2f__0061c3ff =  - Polygon merger (tol = %4.2f degs)
    ADD ESI,0x2                         ; 00464f91
    MOV byte ptr [EDI + 0x1],AL         ; 00464f94
    ADD EDI,0x2                         ; 00464f97
    CMP AL,0x0                          ; 00464f9a
    JNZ 0x00464f86                      ; 00464f9c | LAB_00464f86
        ;   XREF to: 00464f86 (CONDITIONAL_JUMP)
    POP EDI                             ; 00464f9e
        ;   Label: LAB_00464f9e
    MOV EAX,[0x015c48b8]                ; 00464f9f | int g_PolygonToolMode
    MOV dword ptr [EBP + 0xffffff44],EAX ; 00464fa4
    JMP 0x00465058                      ; 00464faa | LAB_00465058
        ;   XREF to: 00465058 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464faf
        ;   Label: caseD_1
    SUB ESP,0x8                         ; 00464fb2
    FSTP double ptr [ESP]               ; 00464fb5
    MOV EAX,0x61c3ff                    ; 00464fb8 | = " - Polygon merger (tol = %4.2f degs)" | s_Polygon_merger_tol_4_2f__0061c3ff =  - Polygon merger (tol = %4.2f degs)
    PUSH EAX                            ; 00464fbd | = " - Polygon merger (tol = %4.2f degs)" | s_Polygon_merger_tol_4_2f__0061c3ff =  - Polygon merger (tol = %4.2f degs)
    LEA EAX,[EBP + -0x58]               ; 00464fbe
    PUSH EAX                            ; 00464fc1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00464fc2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00464fc7
    JMP 0x0046507d                      ; 00464fca | default
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00464fcf
        ;   Label: caseD_2
    SUB ESP,0x8                         ; 00464fd2
    FSTP double ptr [ESP]               ; 00464fd5
    MOV EAX,0x61c424                    ; 00464fd8 | = " - Polygon attacher (tol = %4.2f units)" | s_Polygon_attacher_tol_4_2_0061c424 =  - Polygon attacher (tol = %4.2f units)
    PUSH EAX                            ; 00464fdd | = " - Polygon attacher (tol = %4.2f units)" | s_Polygon_attacher_tol_4_2_0061c424 =  - Polygon attacher (tol = %4.2f units)
    LEA EAX,[EBP + -0x58]               ; 00464fde
    PUSH EAX                            ; 00464fe1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00464fe2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00464fe7
    JMP 0x0046507d                      ; 00464fea | default
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    MOV EAX,0x61c44c                    ; 00464fef | = " - Polygon detacher" | s_Polygon_detacher_0061c44c =  - Polygon detacher
        ;   Label: caseD_3
    PUSH EAX                            ; 00464ff4 | = " - Polygon detacher" | s_Polygon_detacher_0061c44c =  - Polygon detacher
    LEA EAX,[EBP + -0x58]               ; 00464ff5
    PUSH EAX                            ; 00464ff8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00464ff9 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00464ffe
    JMP 0x0046507d                      ; 00465001 | default
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00465006
        ;   Label: caseD_4
    SUB ESP,0x8                         ; 00465009
    FSTP double ptr [ESP]               ; 0046500c
    MOV EAX,0x61c460                    ; 0046500f | = " - Polygon vertex welder (tol = %4.2f..." | s_Polygon_vertex_welder_to_0061c460 =  - Polygon vertex welder (tol = %4.2f units)
    PUSH EAX                            ; 00465014 | = " - Polygon vertex welder (tol = %4.2f..." | s_Polygon_vertex_welder_to_0061c460 =  - Polygon vertex welder (tol = %4.2f units)
    LEA EAX,[EBP + -0x58]               ; 00465015
    PUSH EAX                            ; 00465018
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00465019 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0046501e
    JMP 0x0046507d                      ; 00465021 | default
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 00465023
        ;   Label: caseD_5
    SUB ESP,0x8                         ; 00465026
    FSTP double ptr [ESP]               ; 00465029
    MOV EAX,0x61c48d                    ; 0046502c | = " - Vertex welder (tol = %4.2f units)" | s_Vertex_welder_tol_4_2f_u_0061c48d =  - Vertex welder (tol = %4.2f units)
    PUSH EAX                            ; 00465031 | = " - Vertex welder (tol = %4.2f units)" | s_Vertex_welder_tol_4_2f_u_0061c48d =  - Vertex welder (tol = %4.2f units)
    LEA EAX,[EBP + -0x58]               ; 00465032
    PUSH EAX                            ; 00465035
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00465036 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0046503b
    JMP 0x0046507d                      ; 0046503e | default
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    JMP 0x0046507d                      ; 00465040 | default
        ;   Label: LAB_00465040
        ;   XREF to: 0046507d (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff44] ; 00465058
        ;   Label: LAB_00465058
    DEC EAX                             ; 0046505e
    MOV dword ptr [EBP + 0xffffff40],EAX ; 0046505f
    CMP dword ptr [EBP + 0xffffff40],0x4 ; 00465065
    JA 0x00465040                       ; 0046506c | LAB_00465040
        ;   XREF to: 00465040 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff40] ; 0046506e
    SHL EAX,0x2                         ; 00465074
    JMP dword ptr [EAX + 0x465044]      ; 00465077 | void * switchdataD_00465044
        ;   Label: switchD
    LEA ESI,[EBP + -0x58]               ; 0046507d
        ;   Label: default
    LEA EDI,[EBP + 0xffffff58]          ; 00465080
    PUSH EDI                            ; 00465086
    SUB ECX,ECX                         ; 00465087
    DEC ECX                             ; 00465089
    MOV AL,0x0                          ; 0046508a
    SCASB.REPNE ES:EDI                  ; 0046508c
    DEC EDI                             ; 0046508e
    MOV AL,byte ptr [ESI]               ; 0046508f
        ;   Label: LAB_0046508f
    MOV byte ptr [EDI],AL               ; 00465091
    CMP AL,0x0                          ; 00465093
    JZ 0x004650a7                       ; 00465095 | LAB_004650a7
        ;   XREF to: 004650a7 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00465097
    ADD ESI,0x2                         ; 0046509a
    MOV byte ptr [EDI + 0x1],AL         ; 0046509d
    ADD EDI,0x2                         ; 004650a0
    CMP AL,0x0                          ; 004650a3
    JNZ 0x0046508f                      ; 004650a5 | LAB_0046508f
        ;   XREF to: 0046508f (CONDITIONAL_JUMP)
    POP EDI                             ; 004650a7
        ;   Label: LAB_004650a7
    MOV ESI,dword ptr [0x00679398]      ; 004650a8 | int g_WindowHeight
    SUB ESI,0x42                        ; 004650ae
    PUSH ESI                            ; 004650b1
    PUSH 0x0                            ; 004650b2
    LEA ESI,[EBP + 0xffffff58]          ; 004650b4
    PUSH ESI                            ; 004650ba
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004650bb | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004650c0
    CMP dword ptr [0x015c48b8],0x1      ; 004650c3 | int g_PolygonToolMode
    JNZ 0x004650d5                      ; 004650ca | LAB_004650d5
        ;   XREF to: 004650d5 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528bc],-0x1     ; 004650cc | int g_SecondaryPolygonIndex
    JNZ 0x004650d7                      ; 004650d3 | LAB_004650d7
        ;   XREF to: 004650d7 (CONDITIONAL_JUMP)
    JMP 0x00465147                      ; 004650d5 | LAB_00465147
        ;   Label: LAB_004650d5
        ;   XREF to: 00465147 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004650d7
        ;   Label: LAB_004650d7
    MOV EDX,0x16e9910                   ; 004650de | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004650e3
    PUSH EAX                            ; 004650e5
    IMUL EAX,dword ptr [0x01e528bc],0x184 ; 004650e6 | int g_SecondaryPolygonIndex
    MOV EDX,0x16e9910                   ; 004650f0 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004650f5
    PUSH EAX                            ; 004650f7
    CALL shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0 ; 004650f8 | double shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon * normal1_ptr, SShapeEditorPolygon * normal2_ptr)
        ;   XREF to: 00461cb0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff38],EAX ; 004650fd
    MOV dword ptr [EBP + 0xffffff3c],EDX ; 00465103 | SShapeEditorPolygon[20000] g_ModelPolygonData
    FLD double ptr [EBP + 0xffffff38]   ; 00465109
    ADD ESP,0x8                         ; 0046510f
    SUB ESP,0x8                         ; 00465112
    FSTP double ptr [ESP]               ; 00465115
    MOV EAX,0x61c4b2                    ; 00465118 | = "Angle between polygon normals : %8.6lf" | s_Angle_between_polygon_no_0061c4b2 = Angle between polygon normals : %8.6lf
    PUSH EAX                            ; 0046511d | = "Angle between polygon normals : %8.6lf" | s_Angle_between_polygon_no_0061c4b2 = Angle between polygon normals : %8.6lf
    LEA EAX,[EBP + 0xffffff58]          ; 0046511e
    PUSH EAX                            ; 00465124
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00465125 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0046512a
    MOV EAX,[0x00679398]                ; 0046512d | int g_WindowHeight
    SUB EAX,0x58                        ; 00465132
    PUSH EAX                            ; 00465135
    PUSH 0x0                            ; 00465136
    LEA EAX,[EBP + 0xffffff58]          ; 00465138
    PUSH EAX                            ; 0046513e
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046513f | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00465144
    MOV EAX,dword ptr [EBP + 0x14]      ; 00465147
        ;   Label: LAB_00465147
    MOV dword ptr [EBP + -0x8],EAX      ; 0046514a
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046514d
        ;   Label: LAB_0046514d
    MOV ESP,EBP                         ; 00465150
    POP EBP                             ; 00465152
    POP EDI                             ; 00465153
    POP ESI                             ; 00465154
    POP EBX                             ; 00465155
    RET                                 ; 00465156

