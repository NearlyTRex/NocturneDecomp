; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_showMenu_FUN_0043ddf0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x278]:256  local_278
; char[256]        Stack[-0x178]:256  local_178
; char[100]        Stack[-0x78]:100  local_78
; float *          Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_0043ddd4 = 0043decc
;   TerminatedCString s_Demented_R_Cloth_Editor_00618976
;   TerminatedCString s_s_1_Load_cloth_file_0061898f
;   TerminatedCString s_s_2_Save_cloth_file_006189a3
;   TerminatedCString s_s_3_Locked_vertex_editor_006189b7
;   TerminatedCString s_s_4_Load_skeleton_006189d0
;   TerminatedCString s_s_5_Bone_editor_006189e2
;   TerminatedCString s_s_6_Edit_transparency_006189f2
;   TerminatedCString s_s_7_Create_cloth_from_KF_00618a08
;   TerminatedCString s_cth_00618a23
;   TerminatedCString s_models_00618a29
;   TerminatedCString s_Load_cloth_file_00618a30
;   TerminatedCString s_cth_00618a40
;   TerminatedCString s_models_00618a44
;   TerminatedCString s_Save_cloth_file_00618a4b
;   ... and 16 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880
;   core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590
;   core_cloth.cpp_CCloth_save_FUN_00439260
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ddf0
        ;   Label: core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0
    PUSH ESI                            ; 0043ddf1
    PUSH EDI                            ; 0043ddf2
    PUSH EBP                            ; 0043ddf3
    SUB ESP,0x268                       ; 0043ddf4
    MOV EBP,dword ptr [ESP + 0x27c]     ; 0043ddfa
    XOR AH,AH                           ; 0043de01
    MOV byte ptr [ESP + 0x100],AH       ; 0043de03
    MOV byte ptr [ESP],AH               ; 0043de0a
    LEA EAX,[EBP + 0x3ce88]             ; 0043de0d
    MOV dword ptr [ESP + 0x264],EAX     ; 0043de13
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0043de1a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0043de1a
    PUSH 0x0                            ; 0043de1f
    PUSH 0x0                            ; 0043de21
    PUSH 0x618976                       ; 0043de23 | = "Demented(R) Cloth Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de28
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de2d
    PUSH 0x16                           ; 0043de30
    PUSH 0x0                            ; 0043de32
    PUSH 0x61898f                       ; 0043de34 | = "1.  Load cloth file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de39
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de3e
    PUSH 0x21                           ; 0043de41
    PUSH 0x0                            ; 0043de43
    PUSH 0x6189a3                       ; 0043de45 | = "2.  Save cloth file"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de4a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de4f
    PUSH 0x2c                           ; 0043de52
    PUSH 0x0                            ; 0043de54
    PUSH 0x6189b7                       ; 0043de56 | = "3.  Locked vertex editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de5b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de60
    PUSH 0x37                           ; 0043de63
    PUSH 0x0                            ; 0043de65
    PUSH 0x6189d0                       ; 0043de67 | = "4.  Load skeleton"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de6c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de71
    PUSH 0x42                           ; 0043de74
    PUSH 0x0                            ; 0043de76
    PUSH 0x6189e2                       ; 0043de78 | = "5.  Bone editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de7d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de82
    PUSH 0x4d                           ; 0043de85
    PUSH 0x0                            ; 0043de87
    PUSH 0x6189f2                       ; 0043de89 | = "6.  Edit transparency"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de8e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043de93
    PUSH 0x58                           ; 0043de96
    PUSH 0x0                            ; 0043de98
    PUSH 0x618a08                       ; 0043de9a | = "7.  Create cloth from .KFM"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043de9f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043dea4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0043dea7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EDX,dword ptr [0x0067cf44]      ; 0043deac | g_CKeysPtr
    PUSH EDX                            ; 0043deb2 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0043deb3
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    MOV EBX,EAX                         ; 0043deb8
    SUB EAX,0x31                        ; 0043deba
    ADD ESP,0x4                         ; 0043debd
    CMP EAX,0x6                         ; 0043dec0
    JA 0x0043df09                       ; 0043dec3
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x43ddd4]  ; 0043dec5 | caseD_31 | caseD_32 | caseD_33
        ;   Label: switchD
    PUSH 0x0                            ; 0043decc
        ;   Label: caseD_31
    LEA EAX,[ESP + 0x104]               ; 0043dece
    PUSH EAX                            ; 0043ded5
    PUSH 0x618a23                       ; 0043ded6 | = "*.cth"
    PUSH 0x618a29                       ; 0043dedb | = "models"
    PUSH 0x618a30                       ; 0043dee0 | = "Load cloth file"
    MOV ECX,dword ptr [0x00678a60]      ; 0043dee5 | g_CEditorToolsPtr
    PUSH ECX                            ; 0043deeb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0043deec
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 0043def1
    TEST EAX,EAX                        ; 0043def4
    JZ 0x0043df09                       ; 0043def6
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x100]               ; 0043def8
    PUSH EAX                            ; 0043deff
    PUSH EBP                            ; 0043df00
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 0043df01
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0043df06
        ;   Label: LAB_0043df06
    CMP EBX,0x1b                        ; 0043df09
        ;   Label: default
    JNZ 0x0043de1a                      ; 0043df0c
        ;   XREF to: 0043de1a (CONDITIONAL_JUMP)  ; LAB_0043de1a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0043df12
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    ADD ESP,0x268                       ; 0043df17
    POP EBP                             ; 0043df1d
    POP EDI                             ; 0043df1e
    POP ESI                             ; 0043df1f
    POP EBX                             ; 0043df20
    RET                                 ; 0043df21
    PUSH 0x1                            ; 0043df22
        ;   Label: caseD_32
    LEA EAX,[ESP + 0x104]               ; 0043df24
    PUSH EAX                            ; 0043df2b
    PUSH 0x618a40                       ; 0043df2c | = "cth"
    PUSH 0x618a44                       ; 0043df31 | = "models"
    PUSH 0x618a4b                       ; 0043df36 | = "Save cloth file"
    MOV EDX,dword ptr [0x00678a60]      ; 0043df3b | g_CEditorToolsPtr
    PUSH EDX                            ; 0043df41 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 0043df42
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 0043df47
    TEST EAX,EAX                        ; 0043df4a
    JZ 0x0043df09                       ; 0043df4c
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x100]               ; 0043df4e
    PUSH EAX                            ; 0043df55
    PUSH EBP                            ; 0043df56
    CALL core_cloth.cpp_CCloth_save_FUN_00439260 ; 0043df57
        ;   XREF to: 00439260 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_save_FUN_00439260(CCloth * this_ptr, char * filename)
    JMP 0x0043df06                      ; 0043df5c
        ;   XREF to: 0043df06 (UNCONDITIONAL_JUMP)  ; LAB_0043df06
    PUSH EBP                            ; 0043df5e
        ;   Label: caseD_33
    CALL core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 ; 0043df5f
        ;   XREF to: 0043d590 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043df64
    JMP 0x0043df09                      ; 0043df67
        ;   XREF to: 0043df09 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x0                            ; 0043df69
        ;   Label: caseD_34
    LEA EAX,[ESP + 0x4]                 ; 0043df6b
    PUSH EAX                            ; 0043df6f
    PUSH 0x618a5b                       ; 0043df70 | = "*.dfm"
    PUSH 0x618a61                       ; 0043df75 | = "models"
    PUSH 0x618a68                       ; 0043df7a | = "Select deformable model"
    MOV EAX,[0x00678a60]                ; 0043df7f | g_CEditorToolsPtr
    PUSH EAX                            ; 0043df84 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0043df85
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 0043df8a
    TEST EAX,EAX                        ; 0043df8d
    JZ 0x0043df09                       ; 0043df8f
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ESP                         ; 0043df95
    PUSH EAX                            ; 0043df97
    PUSH 0x838e58                       ; 0043df98 | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0043df9d
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0043dfa2
    PUSH 0x838e58                       ; 0043dfa5 | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0043dfaa
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043dfaf
    JMP 0x0043df09                      ; 0043dfb2
        ;   XREF to: 0043df09 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [ESP],0x0              ; 0043dfb7
        ;   Label: caseD_35
    JZ 0x0043df09                       ; 0043dfbb
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    CMP byte ptr [ESP + 0x100],0x0      ; 0043dfc1
    JZ 0x0043df09                       ; 0043dfc9
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    PUSH EBP                            ; 0043dfcf
    CALL core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 ; 0043dfd0
        ;   XREF to: 0043c880 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_boneEditor_FUN_0043c880(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043dfd5
    JMP 0x0043df09                      ; 0043dfd8
        ;   XREF to: 0043df09 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0043dfdd
        ;   Label: caseD_36
    PUSH 0x3f800000                     ; 0043dfdf
    PUSH 0x0                            ; 0043dfe4
    PUSH 0x1                            ; 0043dfe6
    MOV ESI,dword ptr [ESP + 0x274]     ; 0043dfe8
    PUSH ESI                            ; 0043dfef
    PUSH 0x618a80                       ; 0043dff0 | = "Enter transparency (0..1.0)"
    MOV EDI,dword ptr [0x00678a60]      ; 0043dff5 | g_CEditorToolsPtr
    PUSH EDI                            ; 0043dffb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0043dffc
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0043e001
    JMP 0x0043df09                      ; 0043e004
        ;   XREF to: 0043df09 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x0                            ; 0043e009
        ;   Label: caseD_37
    LEA EAX,[ESP + 0x204]               ; 0043e00b
    PUSH EAX                            ; 0043e012
    PUSH 0x618a9c                       ; 0043e013 | = "*.kfm"
    PUSH 0x618aa2                       ; 0043e018 | = "models"
    PUSH 0x618aa9                       ; 0043e01d | = "Create cloth file from KFM"
    MOV ECX,dword ptr [0x00678a60]      ; 0043e022 | g_CEditorToolsPtr
    PUSH ECX                            ; 0043e028 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0043e029
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 0043e02e
    TEST EAX,EAX                        ; 0043e031
    JZ 0x0043df09                       ; 0043e033
        ;   XREF to: 0043df09 (CONDITIONAL_JUMP)  ; default
    PUSH 0x0                            ; 0043e039
    LEA EAX,[ESP + 0x104]               ; 0043e03b
    PUSH EAX                            ; 0043e042
    PUSH 0x0                            ; 0043e043
    PUSH 0x0                            ; 0043e045
    LEA EAX,[ESP + 0x210]               ; 0043e047
    PUSH EAX                            ; 0043e04e
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0043e04f
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0043e054
    MOV ESI,0x618ac4                    ; 0043e057 | = ".cth"
    LEA EDI,[ESP + 0x100]               ; 0043e05c
    PUSH EDI                            ; 0043e063
    SUB ECX,ECX                         ; 0043e064
    DEC ECX                             ; 0043e066
    MOV AL,0x0                          ; 0043e067
    SCASB.REPNE ES:EDI                  ; 0043e069
    DEC EDI                             ; 0043e06b
    MOV AL,byte ptr [ESI]               ; 0043e06c | = ".cth" | s_cth_00618ac4+2
        ;   Label: LAB_0043e06c
    MOV byte ptr [EDI],AL               ; 0043e06e
    CMP AL,0x0                          ; 0043e070
    JZ 0x0043e084                       ; 0043e072
        ;   XREF to: 0043e084 (CONDITIONAL_JUMP)  ; LAB_0043e084
    MOV AL,byte ptr [ESI + 0x1]         ; 0043e074 | s_cth_00618ac4+1 | s_cth_00618ac4+3
    ADD ESI,0x2                         ; 0043e077
    MOV byte ptr [EDI + 0x1],AL         ; 0043e07a
    ADD EDI,0x2                         ; 0043e07d
    CMP AL,0x0                          ; 0043e080
    JNZ 0x0043e06c                      ; 0043e082
        ;   XREF to: 0043e06c (CONDITIONAL_JUMP)  ; LAB_0043e06c
    POP EDI                             ; 0043e084
        ;   Label: LAB_0043e084
    LEA EAX,[ESP + 0x200]               ; 0043e085
    PUSH EAX                            ; 0043e08c
    PUSH EBP                            ; 0043e08d
    CALL core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0 ; 0043e08e
        ;   XREF to: 0043dcc0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0(CCloth * this_ptr, char * filename)
    JMP 0x0043df06                      ; 0043e093
        ;   XREF to: 0043df06 (UNCONDITIONAL_JUMP)  ; LAB_0043df06

