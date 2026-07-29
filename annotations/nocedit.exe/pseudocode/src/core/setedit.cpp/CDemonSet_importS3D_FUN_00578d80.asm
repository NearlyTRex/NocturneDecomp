; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; int[1378]        Stack[-0x3a30]:5512  aiStackY_3a30
; C3DSLight        Stack[-0x2478]:6296  local_2478
; CPickList        Stack[-0xbe0]:936  local_be0
; char[400]        Stack[-0x838]:400  local_838
; char[260]        Stack[-0x6a8]:260  local_6a8
; char[260]        Stack[-0x5a4]:260  local_5a4
; char[256]        Stack[-0x4a0]:256  local_4a0
; char[256]        Stack[-0x3a0]:256  local_3a0
; char[256]        Stack[-0x2a0]:256  local_2a0
; char[256]        Stack[-0x1a0]:256  local_1a0
; undefined1[4]    Stack[-0xa0]:4  local_a0
; undefined1[4]    Stack[-0x9c]:4  local_9c
; undefined1[4]    Stack[-0x98]:4  local_98
; undefined1[4]    Stack[-0x94]:4  local_94
; undefined1[4]    Stack[-0x90]:4  local_90
; undefined1[4]    Stack[-0x8c]:4  local_8c
; int              Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; int              Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; long             Stack[-0x3c]:4  local_3c
; int *            Stack[-0x38]:4  local_38
; long             Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; char *           Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; C3DSLight *      Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_importSet_FUN_00578a20 at 00578c0d
;
; Referenced Globals:
;   TerminatedCString s_Import_geometry_00646bd8
;   TerminatedCString s_Import_omni_lights_00646be8
;   TerminatedCString s_Import_spot_lights_00646bfb
;   TerminatedCString s_Import_cameras_00646c0e
;   TerminatedCString s_Nothing_to_do_00646c1d
;   TerminatedCString s_There_are_currently_no_l_00646c2c
;   TerminatedCString s_There_are_currently_no_c_00646c99
;   TerminatedCString s_Precompute_light_visibil_00646d07
;   TerminatedCString s_Precompute_fog_00646d24
;   TerminatedCString s_Reading_S3D_header_parts_00646d34
;   TerminatedCString s_d_00646d5d
;   TerminatedCString s_core_setedit_cpp_00646d61
;   TerminatedCString s_Can_t_import_S3D_file_ve_00646d75
;   TerminatedCString s_d_d_d_d_d_d_d_00646db1
;   TerminatedCString s_core_setedit_cpp_00646dc7
;   ... and 62 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
;   core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
;   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_clear_FUN_005693c0
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60
;   core_setedit.cpp_addGroundType_FUN_00578290
;   core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0
;   core_setedit.cpp_editGroundTypes_FUN_00578630
;   core_setedit.cpp_loadGroundTypes_FUN_00578420
;   core_setedit.cpp_promptYesNo_FUN_00578c90
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578d80
        ;   Label: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
    PUSH ESI                            ; 00578d81
    PUSH EDI                            ; 00578d82
    PUSH EBP                            ; 00578d83
    SUB ESP,0x2468                      ; 00578d84
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00578d8a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x1                            ; 00578d8f
    PUSH 0x646bd8                       ; 00578d91 | = "Import geometry"
    PUSH 0x0                            ; 00578d96
    CALL core_setedit.cpp_promptYesNo_FUN_00578c90 ; 00578d98
        ;   XREF to: 00578c90 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_promptYesNo_FUN_00578c90(int screen_y, char * prompt, int default_yes)
    ADD ESP,0xc                         ; 00578d9d
    MOV dword ptr [ESP + 0x2400],EAX    ; 00578da0
    TEST EAX,EAX                        ; 00578da7
    JGE 0x00578db6                      ; 00578da9
        ;   XREF to: 00578db6 (CONDITIONAL_JUMP)  ; LAB_00578db6
    ADD ESP,0x2468                      ; 00578dab
        ;   Label: LAB_00578dab
    POP EBP                             ; 00578db1
    POP EDI                             ; 00578db2
    POP ESI                             ; 00578db3
    POP EBX                             ; 00578db4
    RET                                 ; 00578db5
    PUSH 0x1                            ; 00578db6
        ;   Label: LAB_00578db6
    PUSH 0x646be8                       ; 00578db8 | = "Import omni lights"
    PUSH 0xb                            ; 00578dbd
    CALL core_setedit.cpp_promptYesNo_FUN_00578c90 ; 00578dbf
        ;   XREF to: 00578c90 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_promptYesNo_FUN_00578c90(int screen_y, char * prompt, int default_yes)
    ADD ESP,0xc                         ; 00578dc4
    MOV EBX,EAX                         ; 00578dc7
    MOV dword ptr [ESP + 0x2404],EAX    ; 00578dc9
    TEST EAX,EAX                        ; 00578dd0
    JL 0x00578dab                       ; 00578dd2
        ;   XREF to: 00578dab (CONDITIONAL_JUMP)  ; LAB_00578dab
    PUSH 0x1                            ; 00578dd4
    PUSH 0x646bfb                       ; 00578dd6 | = "Import spot lights"
    PUSH 0x16                           ; 00578ddb
    CALL core_setedit.cpp_promptYesNo_FUN_00578c90 ; 00578ddd
        ;   XREF to: 00578c90 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_promptYesNo_FUN_00578c90(int screen_y, char * prompt, int default_yes)
    ADD ESP,0xc                         ; 00578de2
    MOV ESI,EAX                         ; 00578de5
    MOV dword ptr [ESP + 0x2408],EAX    ; 00578de7
    TEST EAX,EAX                        ; 00578dee
    JL 0x00578dab                       ; 00578df0
        ;   XREF to: 00578dab (CONDITIONAL_JUMP)  ; LAB_00578dab
    PUSH 0x1                            ; 00578df2
    PUSH 0x646c0e                       ; 00578df4 | = "Import cameras"
    PUSH 0x21                           ; 00578df9
    CALL core_setedit.cpp_promptYesNo_FUN_00578c90 ; 00578dfb
        ;   XREF to: 00578c90 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_promptYesNo_FUN_00578c90(int screen_y, char * prompt, int default_yes)
    ADD ESP,0xc                         ; 00578e00
    MOV dword ptr [ESP + 0x240c],EAX    ; 00578e03
    TEST EAX,EAX                        ; 00578e0a
    JL 0x00578dab                       ; 00578e0c
        ;   XREF to: 00578dab (CONDITIONAL_JUMP)  ; LAB_00578dab
    TEST EBX,EBX                        ; 00578e0e
    JZ 0x00579529                       ; 00578e10
        ;   XREF to: 00579529 (CONDITIONAL_JUMP)  ; LAB_00579529
    MOV EAX,0x1                         ; 00578e16
        ;   Label: LAB_00578e16
    MOV EDX,dword ptr [ESP + 0x2400]    ; 00578e1b
        ;   Label: LAB_00578e1b
    MOV dword ptr [ESP + 0x2410],EAX    ; 00578e22
    TEST EDX,EDX                        ; 00578e29
    JZ 0x00579538                       ; 00578e2b
        ;   XREF to: 00579538 (CONDITIONAL_JUMP)  ; LAB_00579538
    CMP dword ptr [ESP + 0x2410],0x0    ; 00578e31
        ;   Label: LAB_00578e31
    JZ 0x0057956d                       ; 00578e39
        ;   XREF to: 0057956d (CONDITIONAL_JUMP)  ; LAB_0057956d
    CMP dword ptr [ESP + 0x240c],0x0    ; 00578e3f
        ;   Label: LAB_00578e3f
    JZ 0x005795a8                       ; 00578e47
        ;   XREF to: 005795a8 (CONDITIONAL_JUMP)  ; LAB_005795a8
    PUSH 0x646d07                       ; 00578e4d | = "Precompute light visibility?"
        ;   Label: LAB_00578e4d
    MOV EBX,dword ptr [0x00678a60]      ; 00578e52 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00578e58 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 00578e59
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00578e5e
    PUSH 0x646d24                       ; 00578e61 | = "Precompute fog?"
    MOV ESI,dword ptr [0x00678a60]      ; 00578e66 | g_CEditorToolsPtr
    PUSH ESI                            ; 00578e6c | g_CEditorToolsInstance
    MOV dword ptr [ESP + 0x241c],EAX    ; 00578e6d
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 00578e74
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00578e79
    PUSH 0x646d34                       ; 00578e7c | = "Reading S3D header, parts, and materials"
    MOV EDI,dword ptr [0x00678a60]      ; 00578e81 | g_CEditorToolsPtr
    PUSH EDI                            ; 00578e87 | g_CEditorToolsInstance
    MOV dword ptr [ESP + 0x2420],EAX    ; 00578e88
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00578e8f
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00578e94
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00578e97
    PUSH EBX                            ; 00578e9e
        ;   Label: LAB_00578e9e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578e9f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00578ea4
    TEST EAX,EAX                        ; 00578ea7
    JL 0x00578eb0                       ; 00578ea9
        ;   XREF to: 00578eb0 (CONDITIONAL_JUMP)  ; LAB_00578eb0
    CMP EAX,0xa                         ; 00578eab
    JNZ 0x00578e9e                      ; 00578eae
        ;   XREF to: 00578e9e (CONDITIONAL_JUMP)  ; LAB_00578e9e
    LEA EAX,[ESP + 0x241c]              ; 00578eb0
        ;   Label: LAB_00578eb0
    PUSH EAX                            ; 00578eb7
    PUSH 0x646d5d                       ; 00578eb8 | = "%d\n"
    MOV EBP,dword ptr [ESP + 0x2488]    ; 00578ebd
    PUSH EBP                            ; 00578ec4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00578ec5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00578eca
    MOV EAX,dword ptr [ESP + 0x241c]    ; 00578ecd
    CMP EAX,0x67                        ; 00578ed4
    JNZ 0x005795df                      ; 00578ed7
        ;   XREF to: 005795df (CONDITIONAL_JUMP)  ; LAB_005795df
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00578edd
        ;   Label: LAB_00578edd
    PUSH EBX                            ; 00578ee4
        ;   Label: LAB_00578ee4
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578ee5
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00578eea
    TEST EAX,EAX                        ; 00578eed
    JL 0x00578ef6                       ; 00578eef
        ;   XREF to: 00578ef6 (CONDITIONAL_JUMP)  ; LAB_00578ef6
    CMP EAX,0xa                         ; 00578ef1
    JNZ 0x00578ee4                      ; 00578ef4
        ;   XREF to: 00578ee4 (CONDITIONAL_JUMP)  ; LAB_00578ee4
    LEA EAX,[ESP + 0x2438]              ; 00578ef6
        ;   Label: LAB_00578ef6
    PUSH EAX                            ; 00578efd
    LEA EAX,[ESP + 0x2438]              ; 00578efe
    PUSH EAX                            ; 00578f05
    LEA EAX,[ESP + 0x2434]              ; 00578f06
    PUSH EAX                            ; 00578f0d
    LEA EAX,[ESP + 0x243c]              ; 00578f0e
    PUSH EAX                            ; 00578f15
    LEA EAX,[ESP + 0x2438]              ; 00578f16
    PUSH EAX                            ; 00578f1d
    LEA EAX,[ESP + 0x2438]              ; 00578f1e
    PUSH EAX                            ; 00578f25
    LEA EAX,[ESP + 0x2438]              ; 00578f26
    PUSH EAX                            ; 00578f2d
    PUSH 0x646db1                       ; 00578f2e | = "%d,%d,%d,%d,%d,%d,%d\n"
    MOV ESI,dword ptr [ESP + 0x24a0]    ; 00578f33
    PUSH ESI                            ; 00578f3a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00578f3b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 00578f40
    MOV EDI,dword ptr [ESP + 0x242c]    ; 00578f43
    CMP EDI,0x1                         ; 00578f4a
    JZ 0x00578f72                       ; 00578f4d
        ;   XREF to: 00578f72 (CONDITIONAL_JUMP)  ; LAB_00578f72
    PUSH EDI                            ; 00578f4f
    MOV EBP,0x646dc7                    ; 00578f50 | = "..\\core\\setedit.cpp"
    MOV EAX,0x49a                       ; 00578f55
    PUSH 0x646ddb                       ; 00578f5a | = "Scene contains %d frames.  Only singl..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00578f5f | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00578f65 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00578f6a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00578f6f
    CMP dword ptr [ESP + 0x240c],0x0    ; 00578f72
        ;   Label: LAB_00578f72
    JNZ 0x0057960a                      ; 00578f7a
        ;   XREF to: 0057960a (CONDITIONAL_JUMP)  ; LAB_0057960a
    PUSH 0x646e6b                       ; 00578f80 | = "Skipping part list"
        ;   Label: LAB_00578f80
    MOV EAX,[0x00678a60]                ; 00578f85 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00578f8a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00578f8b
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00578f90
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00578f93
    PUSH EBX                            ; 00578f9a
        ;   Label: LAB_00578f9a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578f9b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00578fa0
    TEST EAX,EAX                        ; 00578fa3
    JL 0x00578fac                       ; 00578fa5
        ;   XREF to: 00578fac (CONDITIONAL_JUMP)  ; LAB_00578fac
    CMP EAX,0xa                         ; 00578fa7
    JNZ 0x00578f9a                      ; 00578faa
        ;   XREF to: 00578f9a (CONDITIONAL_JUMP)  ; LAB_00578f9a
    MOV EDX,dword ptr [ESP + 0x2430]    ; 00578fac
        ;   Label: LAB_00578fac
    XOR ESI,ESI                         ; 00578fb3
    TEST EDX,EDX                        ; 00578fb5
    JLE 0x00578fde                      ; 00578fb7
        ;   XREF to: 00578fde (CONDITIONAL_JUMP)  ; LAB_00578fde
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00578fb9
    PUSH EBX                            ; 00578fc0
        ;   Label: LAB_00578fc0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578fc1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00578fc6
    TEST EAX,EAX                        ; 00578fc9
    JL 0x00578fd2                       ; 00578fcb
        ;   XREF to: 00578fd2 (CONDITIONAL_JUMP)  ; LAB_00578fd2
    CMP EAX,0xa                         ; 00578fcd
    JNZ 0x00578fc0                      ; 00578fd0
        ;   XREF to: 00578fc0 (CONDITIONAL_JUMP)  ; LAB_00578fc0
    MOV ECX,dword ptr [ESP + 0x2430]    ; 00578fd2
        ;   Label: LAB_00578fd2
    INC ESI                             ; 00578fd9
    CMP ESI,ECX                         ; 00578fda
    JL 0x00578fc0                       ; 00578fdc
        ;   XREF to: 00578fc0 (CONDITIONAL_JUMP)  ; LAB_00578fc0
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00578fde
        ;   Label: LAB_00578fde
    PUSH EBX                            ; 00578fe5
        ;   Label: LAB_00578fe5
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578fe6
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00578feb
    TEST EAX,EAX                        ; 00578fee
    JL 0x00578ff7                       ; 00578ff0
        ;   XREF to: 00578ff7 (CONDITIONAL_JUMP)  ; LAB_00578ff7
    CMP EAX,0xa                         ; 00578ff2
    JNZ 0x00578fe5                      ; 00578ff5
        ;   XREF to: 00578fe5 (CONDITIONAL_JUMP)  ; LAB_00578fe5
    CMP dword ptr [ESP + 0x2400],0x0    ; 00578ff7
        ;   Label: LAB_00578ff7
    JNZ 0x0057964b                      ; 00578fff
        ;   XREF to: 0057964b (CONDITIONAL_JUMP)  ; LAB_0057964b
    PUSH 0x647070                       ; 00579005 | = "Skipping textures"
    MOV ESI,dword ptr [0x00678a60]      ; 0057900a | g_CEditorToolsPtr
    PUSH ESI                            ; 00579010 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579011
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00579016
    MOV EDI,dword ptr [ESP + 0x2420]    ; 00579019
    XOR ESI,ESI                         ; 00579020
    TEST EDI,EDI                        ; 00579022
    JLE 0x0057904b                      ; 00579024
        ;   XREF to: 0057904b (CONDITIONAL_JUMP)  ; LAB_0057904b
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00579026
    PUSH EBX                            ; 0057902d
        ;   Label: LAB_0057902d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057902e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579033
    TEST EAX,EAX                        ; 00579036
    JL 0x0057903f                       ; 00579038
        ;   XREF to: 0057903f (CONDITIONAL_JUMP)  ; LAB_0057903f
    CMP EAX,0xa                         ; 0057903a
    JNZ 0x0057902d                      ; 0057903d
        ;   XREF to: 0057902d (CONDITIONAL_JUMP)  ; LAB_0057902d
    MOV EAX,dword ptr [ESP + 0x2420]    ; 0057903f
        ;   Label: LAB_0057903f
    INC ESI                             ; 00579046
    CMP ESI,EAX                         ; 00579047
    JL 0x0057902d                       ; 00579049
        ;   XREF to: 0057902d (CONDITIONAL_JUMP)  ; LAB_0057902d
    PUSH 0x647082                       ; 0057904b | = "Skipping polygons"
        ;   Label: LAB_0057904b
    MOV EDI,dword ptr [0x00678a60]      ; 00579050 | g_CEditorToolsPtr
    PUSH EDI                            ; 00579056 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579057
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057905c
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057905f
    PUSH EBX                            ; 00579066
        ;   Label: LAB_00579066
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00579067
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057906c
    TEST EAX,EAX                        ; 0057906f
    JL 0x00579078                       ; 00579071
        ;   XREF to: 00579078 (CONDITIONAL_JUMP)  ; LAB_00579078
    CMP EAX,0xa                         ; 00579073
    JNZ 0x00579066                      ; 00579076
        ;   XREF to: 00579066 (CONDITIONAL_JUMP)  ; LAB_00579066
    MOV EBP,dword ptr [ESP + 0x2480]    ; 00579078
        ;   Label: LAB_00579078
    PUSH EBP                            ; 0057907f
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00579080
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00579085
    MOV dword ptr [ESP + 0x243c],EAX    ; 00579088
    MOV EAX,dword ptr [ESP + 0x2424]    ; 0057908f
    XOR ESI,ESI                         ; 00579096
    TEST EAX,EAX                        ; 00579098
    JLE 0x005790c1                      ; 0057909a
        ;   XREF to: 005790c1 (CONDITIONAL_JUMP)  ; LAB_005790c1
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057909c
    PUSH EBX                            ; 005790a3
        ;   Label: LAB_005790a3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005790a4
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005790a9
    TEST EAX,EAX                        ; 005790ac
    JL 0x005790b5                       ; 005790ae
        ;   XREF to: 005790b5 (CONDITIONAL_JUMP)  ; LAB_005790b5
    CMP EAX,0xa                         ; 005790b0
    JNZ 0x005790a3                      ; 005790b3
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    MOV EDX,dword ptr [ESP + 0x2424]    ; 005790b5
        ;   Label: LAB_005790b5
    INC ESI                             ; 005790bc
    CMP ESI,EDX                         ; 005790bd
    JL 0x005790a3                       ; 005790bf
        ;   XREF to: 005790a3 (CONDITIONAL_JUMP)  ; LAB_005790a3
    XOR ECX,ECX                         ; 005790c1
        ;   Label: LAB_005790c1
    MOV EBX,dword ptr [ESP + 0x2400]    ; 005790c3
    MOV dword ptr [ESP + 0x2440],ECX    ; 005790ca
    TEST EBX,EBX                        ; 005790d1
    JNZ 0x00579a95                      ; 005790d3
        ;   XREF to: 00579a95 (CONDITIONAL_JUMP)  ; LAB_00579a95
    PUSH 0x647134                       ; 005790d9 | = "Locating lights"
    MOV ESI,dword ptr [0x00678a60]      ; 005790de | g_CEditorToolsPtr
    PUSH ESI                            ; 005790e4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005790e5
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005790ea
    MOV EBX,dword ptr [ESP + 0x2480]    ; 005790ed
    PUSH EBX                            ; 005790f4
        ;   Label: LAB_005790f4
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005790f5
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005790fa
    TEST EAX,EAX                        ; 005790fd
    JL 0x00579106                       ; 005790ff
        ;   XREF to: 00579106 (CONDITIONAL_JUMP)  ; LAB_00579106
    CMP EAX,0xa                         ; 00579101
    JNZ 0x005790f4                      ; 00579104
        ;   XREF to: 005790f4 (CONDITIONAL_JUMP)  ; LAB_005790f4
    MOV EBX,dword ptr [ESP + 0x2428]    ; 00579106
        ;   Label: LAB_00579106
    XOR ESI,ESI                         ; 0057910d
    TEST EBX,EBX                        ; 0057910f
    JLE 0x00579138                      ; 00579111
        ;   XREF to: 00579138 (CONDITIONAL_JUMP)  ; LAB_00579138
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00579113
    PUSH EBX                            ; 0057911a
        ;   Label: LAB_0057911a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057911b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579120
    TEST EAX,EAX                        ; 00579123
    JL 0x0057912c                       ; 00579125
        ;   XREF to: 0057912c (CONDITIONAL_JUMP)  ; LAB_0057912c
    CMP EAX,0xa                         ; 00579127
    JNZ 0x0057911a                      ; 0057912a
        ;   XREF to: 0057911a (CONDITIONAL_JUMP)  ; LAB_0057911a
    MOV ECX,dword ptr [ESP + 0x2428]    ; 0057912c
        ;   Label: LAB_0057912c
    INC ESI                             ; 00579133
    CMP ESI,ECX                         ; 00579134
    JL 0x0057911a                       ; 00579136
        ;   XREF to: 0057911a (CONDITIONAL_JUMP)  ; LAB_0057911a
    CMP dword ptr [ESP + 0x2410],0x0    ; 00579138
        ;   Label: LAB_00579138
    JNZ 0x00579bf4                      ; 00579140
        ;   XREF to: 00579bf4 (CONDITIONAL_JUMP)  ; LAB_00579bf4
    MOV ESI,dword ptr [ESP + 0x2480]    ; 00579146
    PUSH ESI                            ; 0057914d
        ;   Label: LAB_0057914d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057914e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579153
    TEST EAX,EAX                        ; 00579156
    JL 0x0057915f                       ; 00579158
        ;   XREF to: 0057915f (CONDITIONAL_JUMP)  ; LAB_0057915f
    CMP EAX,0xa                         ; 0057915a
    JNZ 0x0057914d                      ; 0057915d
        ;   XREF to: 0057914d (CONDITIONAL_JUMP)  ; LAB_0057914d
    MOV EBP,dword ptr [ESP + 0x2434]    ; 0057915f
        ;   Label: LAB_0057915f
    XOR ESI,ESI                         ; 00579166
    TEST EBP,EBP                        ; 00579168
    JLE 0x00579191                      ; 0057916a
        ;   XREF to: 00579191 (CONDITIONAL_JUMP)  ; LAB_00579191
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057916c
    PUSH EBX                            ; 00579173
        ;   Label: LAB_00579173
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00579174
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579179
    TEST EAX,EAX                        ; 0057917c
    JL 0x00579185                       ; 0057917e
        ;   XREF to: 00579185 (CONDITIONAL_JUMP)  ; LAB_00579185
    CMP EAX,0xa                         ; 00579180
    JNZ 0x00579173                      ; 00579183
        ;   XREF to: 00579173 (CONDITIONAL_JUMP)  ; LAB_00579173
    MOV EDI,dword ptr [ESP + 0x2434]    ; 00579185
        ;   Label: LAB_00579185
    INC ESI                             ; 0057918c
    CMP ESI,EDI                         ; 0057918d
    JL 0x00579173                       ; 0057918f
        ;   XREF to: 00579173 (CONDITIONAL_JUMP)  ; LAB_00579173
    CMP dword ptr [ESP + 0x240c],0x0    ; 00579191
        ;   Label: LAB_00579191
    JZ 0x0057a04d                       ; 00579199
        ;   XREF to: 0057a04d (CONDITIONAL_JUMP)  ; LAB_0057a04d
    PUSH 0x6471ce                       ; 0057919f | = "Reading cameras"
    MOV EAX,[0x00678a60]                ; 005791a4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 005791a9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005791aa
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005791af
    MOV EBX,dword ptr [ESP + 0x2480]    ; 005791b2
    PUSH EBX                            ; 005791b9
        ;   Label: LAB_005791b9
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005791ba
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005791bf
    TEST EAX,EAX                        ; 005791c2
    JL 0x005791cb                       ; 005791c4
        ;   XREF to: 005791cb (CONDITIONAL_JUMP)  ; LAB_005791cb
    CMP EAX,0xa                         ; 005791c6
    JNZ 0x005791b9                      ; 005791c9
        ;   XREF to: 005791b9 (CONDITIONAL_JUMP)  ; LAB_005791b9
    MOV ECX,dword ptr [ESP + 0x2438]    ; 005791cb
        ;   Label: LAB_005791cb
    XOR ESI,ESI                         ; 005791d2
    TEST ECX,ECX                        ; 005791d4
    JLE 0x00579210                      ; 005791d6
        ;   XREF to: 00579210 (CONDITIONAL_JUMP)  ; LAB_00579210
    MOV EBX,dword ptr [ESP + 0x247c]    ; 005791d8
    MOV EDI,dword ptr [ESP + 0x2480]    ; 005791df
    ADD EBX,0x4                         ; 005791e6
    PUSH EDI                            ; 005791e9
        ;   Label: LAB_005791e9
    PUSH EBX                            ; 005791ea
    CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 ; 005791eb
        ;   XREF to: 00585ff0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005791f0
    INC ESI                             ; 005791f3
    MOV EBP,dword ptr [ESP + 0x2438]    ; 005791f4
    ADD EBX,0x1a4                       ; 005791fb
    CMP ESI,EBP                         ; 00579201
    JL 0x005791e9                       ; 00579203
        ;   XREF to: 005791e9 (CONDITIONAL_JUMP)  ; LAB_005791e9
    LEA EAX,[EAX]                       ; 00579205
    LEA EDX,[EDX]                       ; 0057920b
    MOV EBX,EBX                         ; 0057920e
    MOV EBX,dword ptr [ESP + 0x247c]    ; 00579210
        ;   Label: LAB_00579210
    MOV EAX,dword ptr [ESP + 0x2438]    ; 00579217
    MOV dword ptr [EBX],EAX             ; 0057921e
    CMP dword ptr [ESP + 0x2400],0x0    ; 00579220
        ;   Label: LAB_00579220
    JZ 0x005793dc                       ; 00579228
        ;   XREF to: 005793dc (CONDITIONAL_JUMP)  ; LAB_005793dc
    PUSH 0x6471de                       ; 0057922e | = "Reading polygons"
    MOV ECX,dword ptr [0x00678a60]      ; 00579233 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00579239 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0057923a
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057923f
    PUSH 0x0                            ; 00579242
    MOV EBX,dword ptr [ESP + 0x2440]    ; 00579244
    PUSH EBX                            ; 0057924b
    MOV ESI,dword ptr [ESP + 0x2488]    ; 0057924c
    PUSH ESI                            ; 00579253
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00579254
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00579259
    MOV EDI,dword ptr [ESP + 0x2424]    ; 0057925c
    XOR EBX,EBX                         ; 00579263
    TEST EDI,EDI                        ; 00579265
    JLE 0x00579360                      ; 00579267
        ;   XREF to: 00579360 (CONDITIONAL_JUMP)  ; LAB_00579360
    LEA EAX,[ESP + 0x23e0]              ; 0057926d
        ;   Label: LAB_0057926d
    PUSH EAX                            ; 00579274
    LEA EAX,[ESP + 0x23f0]              ; 00579275
    PUSH EAX                            ; 0057927c
    LEA EAX,[ESP + 0x2400]              ; 0057927d
    PUSH EAX                            ; 00579284
    LEA EAX,[ESP + 0x23e8]              ; 00579285
    PUSH EAX                            ; 0057928c
    LEA EAX,[ESP + 0x23f8]              ; 0057928d
    PUSH EAX                            ; 00579294
    LEA EAX,[ESP + 0x2408]              ; 00579295
    PUSH EAX                            ; 0057929c
    LEA EAX,[ESP + 0x23f0]              ; 0057929d
    PUSH EAX                            ; 005792a4
    LEA EAX,[ESP + 0x2400]              ; 005792a5
    PUSH EAX                            ; 005792ac
    LEA EAX,[ESP + 0x2410]              ; 005792ad
    PUSH EAX                            ; 005792b4
    LEA EAX,[ESP + 0x2484]              ; 005792b5
    PUSH EAX                            ; 005792bc
    PUSH 0x6471ef                       ; 005792bd | = "%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x24ac]    ; 005792c2
    PUSH EDI                            ; 005792c9
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005792ca
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 005792cf
    CMP EAX,0xa                         ; 005792d2
    JZ 0x00579302                       ; 005792d5
        ;   XREF to: 00579302 (CONDITIONAL_JUMP)  ; LAB_00579302
    MOV EDX,dword ptr [ESP + 0x2424]    ; 005792d7
    PUSH EDX                            ; 005792de
    PUSH EBX                            ; 005792df
    MOV EBP,0x647211                    ; 005792e0 | = "..\\core\\setedit.cpp"
    MOV EAX,0x5ed                       ; 005792e5
    PUSH 0x647225                       ; 005792ea | = "File is corrupt on poly %d of %d"
    MOV dword ptr [0x02f0ca48],EBP      ; 005792ef | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005792f5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005792fa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005792ff
    MOV ECX,dword ptr [ESP + 0x2460]    ; 00579302
        ;   Label: LAB_00579302
    XOR EAX,EAX                         ; 00579309
    TEST ECX,ECX                        ; 0057930b
    JL 0x00579316                       ; 0057930d
        ;   XREF to: 00579316 (CONDITIONAL_JUMP)  ; LAB_00579316
    MOV EAX,dword ptr [ECX*0x4 + 0x3364d18] ; 0057930f | g_S3DTextureGroundTypes
    MOV EBP,dword ptr [ESP + 0x23f8]    ; 00579316
        ;   Label: LAB_00579316
    PUSH EAX                            ; 0057931d
    IMUL EAX,EBP,0xc                    ; 0057931e
    MOV EDX,dword ptr [ESP + 0x2444]    ; 00579321
    ADD EAX,EDX                         ; 00579328
    MOV ECX,dword ptr [ESP + 0x23f8]    ; 0057932a
    PUSH EAX                            ; 00579331
    IMUL EAX,ECX,0xc                    ; 00579332
    ADD EAX,EDX                         ; 00579335
    MOV EDI,dword ptr [ESP + 0x23f8]    ; 00579337
    PUSH EAX                            ; 0057933e
    IMUL EAX,EDI,0xc                    ; 0057933f
    ADD EAX,EDX                         ; 00579342
    PUSH EAX                            ; 00579344
    PUSH 0x3277d14                      ; 00579345 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100 ; 0057934a
        ;   XREF to: 00495100 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100(CDemonRaytrace * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, ...)
    ADD ESP,0x14                        ; 0057934f
    INC EBX                             ; 00579352
    CMP EBX,dword ptr [ESP + 0x2424]    ; 00579353
    JL 0x0057926d                       ; 0057935a
        ;   XREF to: 0057926d (CONDITIONAL_JUMP)  ; LAB_0057926d
    MOV ECX,0x601                       ; 00579360
        ;   Label: LAB_00579360
    MOV EDX,0x647246                    ; 00579365 | = "..\\core\\setedit.cpp"
    MOV EBX,dword ptr [ESP + 0x2440]    ; 0057936a
    MOV dword ptr [0x02f0d944],ECX      ; 00579371 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 00579377 | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 0057937d
    JZ 0x0057938d                       ; 0057937f
        ;   XREF to: 0057938d (CONDITIONAL_JUMP)  ; LAB_0057938d
    LEA EAX,[EBX + -0x4]                ; 00579381
    PUSH EAX                            ; 00579384
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00579385
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0057938a
    PUSH 0x41200000                     ; 0057938d
        ;   Label: LAB_0057938d
    PUSH 0x3277d14                      ; 00579392 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 ; 00579397
        ;   XREF to: 00495310 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace * this_ptr, float cube_size)
    ADD ESP,0x8                         ; 0057939c
    PUSH 0x64725a                       ; 0057939f | = "Saving raytrace database"
    MOV ESI,dword ptr [0x00678a60]      ; 005793a4 | g_CEditorToolsPtr
    PUSH ESI                            ; 005793aa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005793ab
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005793b0
    MOV EBX,dword ptr [ESP + 0x247c]    ; 005793b3
    ADD EBX,0x14d0f0                    ; 005793ba
    PUSH EBX                            ; 005793c0
    PUSH 0x3277d14                      ; 005793c1 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 ; 005793c6
        ;   XREF to: 00495040 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005793cb
    PUSH EBX                            ; 005793ce
    PUSH 0x3277d14                      ; 005793cf | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 ; 005793d4
        ;   XREF to: 00494de0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005793d9
    CMP dword ptr [ESP + 0x2414],0x0    ; 005793dc
        ;   Label: LAB_005793dc
    JZ 0x005793f8                       ; 005793e4
        ;   XREF to: 005793f8 (CONDITIONAL_JUMP)  ; LAB_005793f8
    PUSH -0x1                           ; 005793e6
    MOV ESI,dword ptr [ESP + 0x2480]    ; 005793e8
    PUSH ESI                            ; 005793ef
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 005793f0
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr, int light_index)
    ADD ESP,0x8                         ; 005793f5
    CMP dword ptr [ESP + 0x2400],0x0    ; 005793f8
        ;   Label: LAB_005793f8
    JZ 0x0057a0a2                       ; 00579400
        ;   XREF to: 0057a0a2 (CONDITIONAL_JUMP)  ; LAB_0057a0a2
    PUSH 0x647273                       ; 00579406 | = "Precalcs for virtual director"
        ;   Label: LAB_00579406
    MOV EAX,[0x00678a60]                ; 0057940b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00579410 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579411
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00579416
    MOV EDX,dword ptr [ESP + 0x247c]    ; 00579419
    PUSH EDX                            ; 00579420
    CALL core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60 ; 00579421
        ;   XREF to: 00575f60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00579426
    PUSH 0x647291                       ; 00579429 | = "Deleting possibly out-of-date fog files"
    MOV ECX,dword ptr [0x00678a60]      ; 0057942e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00579434 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579435
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057943a
    MOV EAX,dword ptr [ESP + 0x247c]    ; 0057943d
    MOV EBX,dword ptr [EAX]             ; 00579444
    XOR EDI,EDI                         ; 00579446
    TEST EBX,EBX                        ; 00579448
    JLE 0x005794f0                      ; 0057944a
        ;   XREF to: 005794f0 (CONDITIONAL_JUMP)  ; LAB_005794f0
    LEA ESI,[EAX + 0x4]                 ; 00579450
    MOV EBX,EAX                         ; 00579453
    PUSH ESI                            ; 00579455
        ;   Label: LAB_00579455
    PUSH 0x6472b9                       ; 00579456 | = "backdrop\\%s.fog"
    LEA EAX,[ESP + 0x21e0]              ; 0057945b
    PUSH EAX                            ; 00579462
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00579463
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00579468
    LEA EAX,[ESP + 0x21d8]              ; 0057946b
    PUSH EAX                            ; 00579472
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00579473
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00579478
    PUSH ESI                            ; 0057947b
    PUSH 0x6472c9                       ; 0057947c | = "backdrop\\%s.pvs"
    LEA EAX,[ESP + 0x21e0]              ; 00579481
    PUSH EAX                            ; 00579488
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00579489
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057948e
    LEA EAX,[ESP + 0x21d8]              ; 00579491
    PUSH EAX                            ; 00579498
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00579499
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0057949e
    MOV EAX,dword ptr [EBX + 0x19c]     ; 005794a1
    MOV dword ptr [EBX + 0x198],0x0     ; 005794a7
    TEST EAX,EAX                        ; 005794b1
    JZ 0x005794d2                       ; 005794b3
        ;   XREF to: 005794d2 (CONDITIONAL_JUMP)  ; LAB_005794d2
    PUSH 0x634                          ; 005794b5
    PUSH 0x6472d9                       ; 005794ba | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 005794bf
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005794c0
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005794c5
    MOV dword ptr [EBX + 0x19c],0x0     ; 005794c8
    MOV EAX,dword ptr [ESP + 0x247c]    ; 005794d2
        ;   Label: LAB_005794d2
    ADD EBX,0x1a4                       ; 005794d9
    INC EDI                             ; 005794df
    MOV EBP,dword ptr [EAX]             ; 005794e0
    ADD ESI,0x1a4                       ; 005794e2
    CMP EDI,EBP                         ; 005794e8
    JL 0x00579455                       ; 005794ea
        ;   XREF to: 00579455 (CONDITIONAL_JUMP)  ; LAB_00579455
    CMP dword ptr [ESP + 0x2418],0x0    ; 005794f0
        ;   Label: LAB_005794f0
    JZ 0x0057950a                       ; 005794f8
        ;   XREF to: 0057950a (CONDITIONAL_JUMP)  ; LAB_0057950a
    MOV EBX,dword ptr [ESP + 0x247c]    ; 005794fa
    PUSH EBX                            ; 00579501
    CALL core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0 ; 00579502
        ;   XREF to: 005805a0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00579507
    PUSH 0x6472ed                       ; 0057950a | = "CDemonSet::importS3D completed OK"
        ;   Label: LAB_0057950a
    MOV ESI,dword ptr [0x00678a60]      ; 0057950f | g_CEditorToolsPtr
    PUSH ESI                            ; 00579515 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579516
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057951b
    ADD ESP,0x2468                      ; 0057951e
    POP EBP                             ; 00579524
    POP EDI                             ; 00579525
    POP ESI                             ; 00579526
    POP EBX                             ; 00579527
    RET                                 ; 00579528
    TEST ESI,ESI                        ; 00579529
        ;   Label: LAB_00579529
    JNZ 0x00578e16                      ; 0057952b
        ;   XREF to: 00578e16 (CONDITIONAL_JUMP)  ; LAB_00578e16
    XOR EAX,EAX                         ; 00579531
    JMP 0x00578e1b                      ; 00579533
        ;   XREF to: 00578e1b (UNCONDITIONAL_JUMP)  ; LAB_00578e1b
    TEST EAX,EAX                        ; 00579538
        ;   Label: LAB_00579538
    JNZ 0x00578e31                      ; 0057953a
        ;   XREF to: 00578e31 (CONDITIONAL_JUMP)  ; LAB_00578e31
    CMP dword ptr [ESP + 0x240c],0x0    ; 00579540
    JNZ 0x00578e31                      ; 00579548
        ;   XREF to: 00578e31 (CONDITIONAL_JUMP)  ; LAB_00578e31
    PUSH 0x646c1d                       ; 0057954e | = "Nothing to do!"
    MOV EBX,dword ptr [0x00678a60]      ; 00579553 | g_CEditorToolsPtr
    PUSH EBX                            ; 00579559 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057955a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057955f
    ADD ESP,0x2468                      ; 00579562
    POP EBP                             ; 00579568
    POP EDI                             ; 00579569
    POP ESI                             ; 0057956a
    POP EBX                             ; 0057956b
    RET                                 ; 0057956c
    MOV EAX,dword ptr [ESP + 0x247c]    ; 0057956d
        ;   Label: LAB_0057956d
    CMP dword ptr [EAX + 0x19a2c],0x1   ; 00579574
    JGE 0x00578e3f                      ; 0057957b
        ;   XREF to: 00578e3f (CONDITIONAL_JUMP)  ; LAB_00578e3f
    PUSH 0x646c2c                       ; 00579581 | = "There are currently no lights current..."
    MOV EBP,dword ptr [0x00678a60]      ; 00579586 | g_CEditorToolsPtr
    PUSH EBP                            ; 0057958c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060 ; 0057958d
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00579592
    TEST EAX,EAX                        ; 00579595
    JNZ 0x00578e3f                      ; 00579597
        ;   XREF to: 00578e3f (CONDITIONAL_JUMP)  ; LAB_00578e3f
    ADD ESP,0x2468                      ; 0057959d
    POP EBP                             ; 005795a3
    POP EDI                             ; 005795a4
    POP ESI                             ; 005795a5
    POP EBX                             ; 005795a6
    RET                                 ; 005795a7
    MOV EAX,dword ptr [ESP + 0x247c]    ; 005795a8
        ;   Label: LAB_005795a8
    CMP dword ptr [EAX],0x1             ; 005795af
    JGE 0x00578e4d                      ; 005795b2
        ;   XREF to: 00578e4d (CONDITIONAL_JUMP)  ; LAB_00578e4d
    PUSH 0x646c99                       ; 005795b8 | = "There are currently no cameras curren..."
    MOV ECX,dword ptr [0x00678a60]      ; 005795bd | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005795c3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060 ; 005795c4
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 005795c9
    TEST EAX,EAX                        ; 005795cc
    JNZ 0x00578e4d                      ; 005795ce
        ;   XREF to: 00578e4d (CONDITIONAL_JUMP)  ; LAB_00578e4d
    ADD ESP,0x2468                      ; 005795d4
    POP EBP                             ; 005795da
    POP EDI                             ; 005795db
    POP ESI                             ; 005795dc
    POP EBX                             ; 005795dd
    RET                                 ; 005795de
    PUSH 0x67                           ; 005795df
        ;   Label: LAB_005795df
    PUSH EAX                            ; 005795e1
    MOV EDX,0x646d61                    ; 005795e2 | = "..\\core\\setedit.cpp"
    MOV ECX,0x490                       ; 005795e7
    PUSH 0x646d75                       ; 005795ec | = "Can't import S3D file version %d, I c..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005795f1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005795f7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005795fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00579602
    JMP 0x00578edd                      ; 00579605
        ;   XREF to: 00578edd (UNCONDITIONAL_JUMP)  ; LAB_00578edd
    MOV EBX,dword ptr [ESP + 0x2438]    ; 0057960a
        ;   Label: LAB_0057960a
    CMP EBX,0xfa                        ; 00579611
    JLE 0x00578f80                      ; 00579617
        ;   XREF to: 00578f80 (CONDITIONAL_JUMP)  ; LAB_00578f80
    PUSH 0xfa                           ; 0057961d
    PUSH EBX                            ; 00579622
    MOV ESI,0x646e1a                    ; 00579623 | = "..\\core\\setedit.cpp"
    MOV EDI,0x4a1                       ; 00579628
    PUSH 0x646e2e                       ; 0057962d | = "Scene contains %d cameras.  Maximum n..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00579632 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00579638 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057963e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00579643
    JMP 0x00578f80                      ; 00579646
        ;   XREF to: 00578f80 (UNCONDITIONAL_JUMP)  ; LAB_00578f80
    MOV EBP,dword ptr [ESP + 0x2480]    ; 0057964b
        ;   Label: LAB_0057964b
    PUSH EBP                            ; 00579652
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00579653
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00579658
    MOV dword ptr [ESP + 0x2444],EAX    ; 0057965b
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579662
    ADD EAX,0x14d0f0                    ; 00579669
    MOV dword ptr [ESP + 0x2450],EAX    ; 0057966e
    LEA EAX,[ESP + 0x22d8]              ; 00579675
        ;   Label: LAB_00579675
    PUSH EAX                            ; 0057967c
    LEA EAX,[ESP + 0x2468]              ; 0057967d
    PUSH EAX                            ; 00579684
    XOR EDX,EDX                         ; 00579685
    PUSH 0x6816d8                       ; 00579687 | g_GroundTypesBuffer
    MOV dword ptr [0x03654368],EDX      ; 0057968c | g_GroundTextureCount
    CALL engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80 ; 00579692
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 00579697
    PUSH 0x0                            ; 0057969a
    LEA EAX,[ESP + 0x20dc]              ; 0057969c
    PUSH EAX                            ; 005796a3
    PUSH 0x0                            ; 005796a4
    PUSH 0x0                            ; 005796a6
    MOV ECX,dword ptr [ESP + 0x2460]    ; 005796a8
    PUSH ECX                            ; 005796af
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 005796b0
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005796b5
    PUSH 0x646e7e                       ; 005796b8 | = ".txt"
    LEA EAX,[ESP + 0x20dc]              ; 005796bd
    PUSH EAX                            ; 005796c4
    LEA EAX,[ESP + 0x22e0]              ; 005796c5
    PUSH EAX                            ; 005796cc
    LEA EAX,[ESP + 0x2470]              ; 005796cd
    PUSH EAX                            ; 005796d4
    LEA EAX,[ESP + 0x1de0]              ; 005796d5
    PUSH EAX                            ; 005796dc
    CALL engine_dosio.cpp_makePath_FUN_00481f50 ; 005796dd
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005796e2
    LEA EAX,[ESP + 0x1dd0]              ; 005796e5
    PUSH EAX                            ; 005796ec
    CALL core_setedit.cpp_loadGroundTypes_FUN_00578420 ; 005796ed
        ;   XREF to: 00578420 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_loadGroundTypes_FUN_00578420(char * filename)
    ADD ESP,0x4                         ; 005796f2
    PUSH 0x646e83                       ; 005796f5 | = "Reading textures"
    MOV EBX,dword ptr [0x00678a60]      ; 005796fa | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00579700 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579701
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00579706
    CMP dword ptr [ESP + 0x2420],0x3e8  ; 00579709
    JLE 0x00579739                      ; 00579714
        ;   XREF to: 00579739 (CONDITIONAL_JUMP)  ; LAB_00579739
    MOV EDI,0x646e94                    ; 00579716 | = "..\\core\\setedit.cpp"
    MOV EBP,0x4cc                       ; 0057971b
    PUSH 0x646ea8                       ; 00579720 | = "Too many textures!"
    MOV dword ptr [0x02f0ca48],EDI      ; 00579725 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0057972b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00579731
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00579736
    MOV ECX,dword ptr [ESP + 0x2420]    ; 00579739
        ;   Label: LAB_00579739
    XOR EAX,EAX                         ; 00579740
    XOR EBP,EBP                         ; 00579742
    MOV dword ptr [ESP + 0x244c],EAX    ; 00579744
    MOV dword ptr [ESP + 0x2448],EAX    ; 0057974b
    TEST ECX,ECX                        ; 00579752
    JLE 0x00579848                      ; 00579754
        ;   XREF to: 00579848 (CONDITIONAL_JUMP)  ; LAB_00579848
    XOR EDI,EDI                         ; 0057975a
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057975c
        ;   Label: LAB_0057975c
    PUSH EBX                            ; 00579763
    PUSH 0x104                          ; 00579764
    LEA EAX,[ESP + 0x1edc]              ; 00579769
    PUSH EAX                            ; 00579770
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00579771
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00579776
    LEA ESI,[ESP + 0x1ed4]              ; 00579779
    MOV DL,0xa                          ; 00579780
    MOV AL,byte ptr [ESI]               ; 00579782
        ;   Label: LAB_00579782
    CMP AL,DL                           ; 00579784
    JZ 0x0057979a                       ; 00579786
        ;   XREF to: 0057979a (CONDITIONAL_JUMP)  ; LAB_0057979a
    CMP AL,0x0                          ; 00579788
    JZ 0x00579798                       ; 0057978a
        ;   XREF to: 00579798 (CONDITIONAL_JUMP)  ; LAB_00579798
    INC ESI                             ; 0057978c
    MOV AL,byte ptr [ESI]               ; 0057978d
    CMP AL,DL                           ; 0057978f
    JZ 0x0057979a                       ; 00579791
        ;   XREF to: 0057979a (CONDITIONAL_JUMP)  ; LAB_0057979a
    INC ESI                             ; 00579793
    CMP AL,0x0                          ; 00579794
    JNZ 0x00579782                      ; 00579796
        ;   XREF to: 00579782 (CONDITIONAL_JUMP)  ; LAB_00579782
    SUB ESI,ESI                         ; 00579798
        ;   Label: LAB_00579798
    TEST ESI,ESI                        ; 0057979a
        ;   Label: LAB_0057979a
    JZ 0x005797c0                       ; 0057979c
        ;   XREF to: 005797c0 (CONDITIONAL_JUMP)  ; LAB_005797c0
    LEA ESI,[ESP + 0x1ed4]              ; 0057979e
    MOV AL,byte ptr [ESI]               ; 005797a5
        ;   Label: LAB_005797a5
    CMP AL,DL                           ; 005797a7
    JZ 0x005797bd                       ; 005797a9
        ;   XREF to: 005797bd (CONDITIONAL_JUMP)  ; LAB_005797bd
    CMP AL,0x0                          ; 005797ab
    JZ 0x005797bb                       ; 005797ad
        ;   XREF to: 005797bb (CONDITIONAL_JUMP)  ; LAB_005797bb
    INC ESI                             ; 005797af
    MOV AL,byte ptr [ESI]               ; 005797b0
    CMP AL,DL                           ; 005797b2
    JZ 0x005797bd                       ; 005797b4
        ;   XREF to: 005797bd (CONDITIONAL_JUMP)  ; LAB_005797bd
    INC ESI                             ; 005797b6
    CMP AL,0x0                          ; 005797b7
    JNZ 0x005797a5                      ; 005797b9
        ;   XREF to: 005797a5 (CONDITIONAL_JUMP)  ; LAB_005797a5
    SUB ESI,ESI                         ; 005797bb
        ;   Label: LAB_005797bb
    MOV byte ptr [ESI],0x0              ; 005797bd
        ;   Label: LAB_005797bd
    PUSH 0x0                            ; 005797c0
        ;   Label: LAB_005797c0
    LEA EAX,[ESP + 0x1fdc]              ; 005797c2
    PUSH EAX                            ; 005797c9
    PUSH 0x0                            ; 005797ca
    PUSH 0x0                            ; 005797cc
    LEA EAX,[ESP + 0x1ee4]              ; 005797ce
    PUSH EAX                            ; 005797d5
    XOR EBX,EBX                         ; 005797d6
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 005797d8
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ESI,dword ptr [0x03654368]      ; 005797dd | g_GroundTextureCount
    ADD ESP,0x14                        ; 005797e3
    TEST ESI,ESI                        ; 005797e6
    JLE 0x00579937                      ; 005797e8
        ;   XREF to: 00579937 (CONDITIONAL_JUMP)  ; LAB_00579937
    MOV ESI,0x3654370                   ; 005797ee | g_GroundTextureNames
    LEA EAX,[ESP + 0x1fd8]              ; 005797f3
        ;   Label: LAB_005797f3
    PUSH EAX                            ; 005797fa
    PUSH ESI                            ; 005797fb | g_GroundTextureNames | g_GroundTextureNames[1][0]
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005797fc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00579801
    TEST EAX,EAX                        ; 00579804
    JNZ 0x00579926                      ; 00579806
        ;   XREF to: 00579926 (CONDITIONAL_JUMP)  ; LAB_00579926
    TEST EBX,EBX                        ; 0057980c
    JL 0x00579937                       ; 0057980e
        ;   XREF to: 00579937 (CONDITIONAL_JUMP)  ; LAB_00579937
    MOV AL,byte ptr [EBX + 0x3659190]   ; 00579814 | g_GroundTextureTypes
    MOV dword ptr [EDI + 0x3364d18],EAX ; 0057981a | g_S3DTextureGroundTypes
        ;   Label: LAB_0057981a
    TEST EAX,EAX                        ; 00579820
    JL 0x00579941                       ; 00579822
        ;   XREF to: 00579941 (CONDITIONAL_JUMP)  ; LAB_00579941
    JNZ 0x00579835                      ; 00579828
        ;   XREF to: 00579835 (CONDITIONAL_JUMP)  ; LAB_00579835
    MOV dword ptr [ESP + 0x244c],0x1    ; 0057982a
    MOV EBX,dword ptr [ESP + 0x2420]    ; 00579835
        ;   Label: LAB_00579835
    INC EBP                             ; 0057983c
    ADD EDI,0x4                         ; 0057983d
    CMP EBP,EBX                         ; 00579840
    JL 0x0057975c                       ; 00579842
        ;   XREF to: 0057975c (CONDITIONAL_JUMP)  ; LAB_0057975c
    CMP dword ptr [ESP + 0x2448],0x0    ; 00579848
        ;   Label: LAB_00579848
    JZ 0x00579a1a                       ; 00579850
        ;   XREF to: 00579a1a (CONDITIONAL_JUMP)  ; LAB_00579a1a
    CMP dword ptr [ESP + 0x2448],0x0    ; 00579856
        ;   Label: LAB_00579856
    JZ 0x00579a2d                       ; 0057985e
        ;   XREF to: 00579a2d (CONDITIONAL_JUMP)  ; LAB_00579a2d
    LEA EAX,[ESP + 0x1dd0]              ; 00579864
    PUSH EAX                            ; 0057986b
    PUSH 0x646f0f                       ; 0057986c | = "You have some new textures which have..."
    LEA EAX,[ESP + 0x1c48]              ; 00579871
    PUSH EAX                            ; 00579878
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00579879
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057987e
    LEA EAX,[ESP + 0x1898]              ; 00579881
        ;   Label: LAB_00579881
    PUSH EAX                            ; 00579888
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00579889
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057988e
    PUSH 0x646ff8                       ; 00579891 | = "Edit the gound types now."
    LEA EAX,[ESP + 0x189c]              ; 00579896
    PUSH EAX                            ; 0057989d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057989e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005798a3
    PUSH 0x647012                       ; 005798a6 | = "Just leave the default assignments fo..."
    LEA EAX,[ESP + 0x189c]              ; 005798ab
    PUSH EAX                            ; 005798b2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005798b3
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005798b8
    PUSH 0x0                            ; 005798bb
    PUSH -0x1                           ; 005798bd
    LEA EAX,[ESP + 0x1c48]              ; 005798bf
    PUSH EAX                            ; 005798c6
    LEA EAX,[ESP + 0x18a4]              ; 005798c7
    PUSH EAX                            ; 005798ce
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005798cf
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 005798d4
    TEST EAX,EAX                        ; 005798d7
    JL 0x00579a47                       ; 005798d9
        ;   XREF to: 00579a47 (CONDITIONAL_JUMP)  ; LAB_00579a47
    JNZ 0x00579a7e                      ; 005798df
        ;   XREF to: 00579a7e (CONDITIONAL_JUMP)  ; LAB_00579a7e
    LEA EAX,[ESP + 0x1dd0]              ; 005798e5
    PUSH EAX                            ; 005798ec
    CALL core_setedit.cpp_editGroundTypes_FUN_00578630 ; 005798ed
        ;   XREF to: 00578630 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_editGroundTypes_FUN_00578630(char * filename)
    ADD ESP,0x4                         ; 005798f2
    PUSH 0x0                            ; 005798f5
    MOV EAX,dword ptr [ESP + 0x2448]    ; 005798f7
    PUSH EAX                            ; 005798fe
    MOV EDX,dword ptr [ESP + 0x2488]    ; 005798ff
    PUSH EDX                            ; 00579906
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00579907
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0057990c
    PUSH 0x0                            ; 0057990f
    LEA EAX,[ESP + 0x189c]              ; 00579911
    PUSH EAX                            ; 00579918
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00579919
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057991e
    JMP 0x00579675                      ; 00579921
        ;   XREF to: 00579675 (UNCONDITIONAL_JUMP)  ; LAB_00579675
    MOV EAX,[0x03654368]                ; 00579926 | g_GroundTextureCount
        ;   Label: LAB_00579926
    INC EBX                             ; 0057992b
    ADD ESI,0x28                        ; 0057992c
    CMP EBX,EAX                         ; 0057992f
    JL 0x005797f3                       ; 00579931
        ;   XREF to: 005797f3 (CONDITIONAL_JUMP)  ; LAB_005797f3
    MOV EAX,0xffffffff                  ; 00579937
        ;   Label: LAB_00579937
    JMP 0x0057981a                      ; 0057993c
        ;   XREF to: 0057981a (UNCONDITIONAL_JUMP)  ; LAB_0057981a
    PUSH 0x4e1                          ; 00579941
        ;   Label: LAB_00579941
    PUSH 0x646ebb                       ; 00579946 | = "..\\core\\setedit.cpp"
    PUSH 0x646ecf                       ; 0057994b | = "a+t"
    PUSH 0x0                            ; 00579950
    LEA EAX,[ESP + 0x1de0]              ; 00579952
    PUSH EAX                            ; 00579959
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0057995a
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 0057995f
    ADD ESP,0x14                        ; 00579961
    TEST EAX,EAX                        ; 00579964
    JNZ 0x005799c3                      ; 00579966
        ;   XREF to: 005799c3 (CONDITIONAL_JUMP)  ; LAB_005799c3
    CMP dword ptr [0x03365cb8],0x0      ; 00579968 | INT_03365cb8
    JZ 0x0057999b                       ; 0057996f
        ;   XREF to: 0057999b (CONDITIONAL_JUMP)  ; LAB_0057999b
    XOR ECX,ECX                         ; 00579971
        ;   Label: LAB_00579971
    PUSH ECX                            ; 00579973
    LEA EAX,[ESP + 0x1ed8]              ; 00579974
    PUSH EAX                            ; 0057997b
    MOV ESI,0x1                         ; 0057997c
    MOV dword ptr [EDI + 0x3364d18],ECX ; 00579981 | g_S3DTextureGroundTypes
    CALL core_setedit.cpp_addGroundType_FUN_00578290 ; 00579987
        ;   XREF to: 00578290 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_addGroundType_FUN_00578290(char * filename, int ground_type)
    ADD ESP,0x8                         ; 0057998c
    MOV dword ptr [ESP + 0x2448],ESI    ; 0057998f
    JMP 0x00579835                      ; 00579996
        ;   XREF to: 00579835 (UNCONDITIONAL_JUMP)  ; LAB_00579835
    LEA EAX,[ESP + 0x1dd0]              ; 0057999b
        ;   Label: LAB_0057999b
    PUSH EAX                            ; 005799a2
    PUSH 0x646ed3                       ; 005799a3 | = "Warning: Can't create/append %s"
    MOV EAX,[0x00678a60]                ; 005799a8 | g_CEditorToolsPtr
    PUSH EAX                            ; 005799ad | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005799ae
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EDX,0x1                         ; 005799b3
    ADD ESP,0xc                         ; 005799b8
    MOV dword ptr [0x03365cb8],EDX      ; 005799bb | INT_03365cb8
    JMP 0x00579971                      ; 005799c1
        ;   XREF to: 00579971 (UNCONDITIONAL_JUMP)  ; LAB_00579971
    PUSH 0x0                            ; 005799c3
        ;   Label: LAB_005799c3
    LEA EAX,[ESP + 0x20dc]              ; 005799c5
    PUSH EAX                            ; 005799cc
    PUSH 0x0                            ; 005799cd
    PUSH 0x0                            ; 005799cf
    LEA EAX,[ESP + 0x1ee4]              ; 005799d1
    PUSH EAX                            ; 005799d8
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 005799d9
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005799de
    PUSH 0x0                            ; 005799e1
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 005799e3
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 005799e8
    PUSH EAX                            ; 005799eb
    LEA EAX,[ESP + 0x20dc]              ; 005799ec
    PUSH EAX                            ; 005799f3
    PUSH 0x646ef3                       ; 005799f4 | = "%s, %s\n"
    PUSH EBX                            ; 005799f9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005799fa
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005799ff
    PUSH 0x4eb                          ; 00579a02
    PUSH 0x646efb                       ; 00579a07 | = "..\\core\\setedit.cpp"
    PUSH EBX                            ; 00579a0c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00579a0d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00579a12
    JMP 0x00579971                      ; 00579a15
        ;   XREF to: 00579971 (UNCONDITIONAL_JUMP)  ; LAB_00579971
    CMP dword ptr [ESP + 0x244c],0x0    ; 00579a1a
        ;   Label: LAB_00579a1a
    JNZ 0x00579856                      ; 00579a22
        ;   XREF to: 00579856 (CONDITIONAL_JUMP)  ; LAB_00579856
    JMP 0x0057904b                      ; 00579a28
        ;   XREF to: 0057904b (UNCONDITIONAL_JUMP)  ; LAB_0057904b
    PUSH 0x646f9b                       ; 00579a2d | = "You have some textures which are curr..."
        ;   Label: LAB_00579a2d
    LEA EAX,[ESP + 0x1c44]              ; 00579a32
    PUSH EAX                            ; 00579a39
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00579a3a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00579a3f
    JMP 0x00579881                      ; 00579a42
        ;   XREF to: 00579881 (UNCONDITIONAL_JUMP)  ; LAB_00579881
    PUSH 0x516                          ; 00579a47
        ;   Label: LAB_00579a47
    PUSH 0x64705c                       ; 00579a4c | = "..\\core\\setedit.cpp"
    MOV ECX,dword ptr [ESP + 0x2488]    ; 00579a51
    PUSH ECX                            ; 00579a58
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00579a59
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00579a5e
    PUSH 0x0                            ; 00579a61
    LEA EAX,[ESP + 0x189c]              ; 00579a63
    PUSH EAX                            ; 00579a6a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00579a6b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00579a70
    ADD ESP,0x2468                      ; 00579a73
    POP EBP                             ; 00579a79
    POP EDI                             ; 00579a7a
    POP ESI                             ; 00579a7b
    POP EBX                             ; 00579a7c
    RET                                 ; 00579a7d
    PUSH 0x0                            ; 00579a7e
        ;   Label: LAB_00579a7e
    LEA EAX,[ESP + 0x189c]              ; 00579a80
    PUSH EAX                            ; 00579a87
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00579a88
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00579a8d
    JMP 0x0057904b                      ; 00579a90
        ;   XREF to: 0057904b (UNCONDITIONAL_JUMP)  ; LAB_0057904b
    MOV EDI,dword ptr [ESP + 0x247c]    ; 00579a95
        ;   Label: LAB_00579a95
    PUSH EDI                            ; 00579a9c
    CALL core_set.cpp_CDemonSet_clear_FUN_005693c0 ; 00579a9d
        ;   XREF to: 005693c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00579aa2
    PUSH 0x3277d14                      ; 00579aa5 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0 ; 00579aaa
        ;   XREF to: 004950b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00579aaf
    PUSH 0x647094                       ; 00579ab2 | = "Reading vertices"
    MOV EBP,dword ptr [0x00678a60]      ; 00579ab7 | g_CEditorToolsPtr
    PUSH EBP                            ; 00579abd | g_CEditorToolsInstance
    MOV dword ptr [EDI + 0x15ae94],0x3f800000 ; 00579abe
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579ac8
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00579acd
    MOV EBX,dword ptr [ESP + 0x2428]    ; 00579ad0
    LEA EAX,[EBX*0x4 + 0x0]             ; 00579ad7
    SUB EAX,EBX                         ; 00579ade
    PUSH 0x547                          ; 00579ae0
    SHL EAX,0x2                         ; 00579ae5
    PUSH 0x6470a5                       ; 00579ae8 | = "..\\core\\setedit.cpp"
    ADD EAX,0x4                         ; 00579aed
    PUSH EAX                            ; 00579af0
    CALL shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0 ; 00579af1
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV EBX,EAX                         ; 00579af6
    ADD ESP,0xc                         ; 00579af8
    TEST EAX,EAX                        ; 00579afb
    JZ 0x00579b0c                       ; 00579afd
        ;   XREF to: 00579b0c (CONDITIONAL_JUMP)  ; LAB_00579b0c
    ADD EBX,0x4                         ; 00579aff
    MOV EAX,dword ptr [ESP + 0x2428]    ; 00579b02
    MOV dword ptr [EBX + -0x4],EAX      ; 00579b09
    MOV dword ptr [ESP + 0x2440],EBX    ; 00579b0c
        ;   Label: LAB_00579b0c
    TEST EBX,EBX                        ; 00579b13
    JZ 0x00579bc5                       ; 00579b15
        ;   XREF to: 00579bc5 (CONDITIONAL_JUMP)  ; LAB_00579bc5
    MOV EBX,dword ptr [ESP + 0x2480]    ; 00579b1b
        ;   Label: LAB_00579b1b
    PUSH EBX                            ; 00579b22
        ;   Label: LAB_00579b22
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00579b23
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579b28
    TEST EAX,EAX                        ; 00579b2b
    JL 0x00579b34                       ; 00579b2d
        ;   XREF to: 00579b34 (CONDITIONAL_JUMP)  ; LAB_00579b34
    CMP EAX,0xa                         ; 00579b2f
    JNZ 0x00579b22                      ; 00579b32
        ;   XREF to: 00579b22 (CONDITIONAL_JUMP)  ; LAB_00579b22
    MOV ESI,dword ptr [ESP + 0x2428]    ; 00579b34
        ;   Label: LAB_00579b34
    XOR EBX,EBX                         ; 00579b3b
    TEST ESI,ESI                        ; 00579b3d
    JLE 0x00579138                      ; 00579b3f
        ;   XREF to: 00579138 (CONDITIONAL_JUMP)  ; LAB_00579138
    MOV ESI,dword ptr [ESP + 0x2440]    ; 00579b45
    MOV EDI,dword ptr [ESP + 0x2440]    ; 00579b4c
    ADD ESI,0x8                         ; 00579b53
    ADD EDI,0x4                         ; 00579b56
    IMUL EAX,EBX,0xc                    ; 00579b59
        ;   Label: LAB_00579b59
    PUSH ESI                            ; 00579b5c
    MOV EDX,dword ptr [ESP + 0x2444]    ; 00579b5d
    PUSH EDI                            ; 00579b64
    ADD EAX,EDX                         ; 00579b65
    PUSH EAX                            ; 00579b67
    PUSH 0x6470f3                       ; 00579b68 | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x2490]    ; 00579b6d
    PUSH ECX                            ; 00579b74
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00579b75
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00579b7a
    CMP EAX,0x3                         ; 00579b7d
    JZ 0x00579bad                       ; 00579b80
        ;   XREF to: 00579bad (CONDITIONAL_JUMP)  ; LAB_00579bad
    MOV EDX,dword ptr [ESP + 0x2428]    ; 00579b82
    PUSH EDX                            ; 00579b89
    PUSH EBX                            ; 00579b8a
    MOV EBP,0x6470fd                    ; 00579b8b | = "..\\core\\setedit.cpp"
    MOV EAX,0x54f                       ; 00579b90
    PUSH 0x647111                       ; 00579b95 | = "File is corrupt on vertex %d of %d"
    MOV dword ptr [0x02f0ca48],EBP      ; 00579b9a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00579ba0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00579ba5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00579baa
    MOV EBP,dword ptr [ESP + 0x2428]    ; 00579bad
        ;   Label: LAB_00579bad
    ADD EDI,0xc                         ; 00579bb4
    INC EBX                             ; 00579bb7
    ADD ESI,0xc                         ; 00579bb8
    CMP EBX,EBP                         ; 00579bbb
    JGE 0x00579138                      ; 00579bbd
        ;   XREF to: 00579138 (CONDITIONAL_JUMP)  ; LAB_00579138
    JMP 0x00579b59                      ; 00579bc3
        ;   XREF to: 00579b59 (UNCONDITIONAL_JUMP)  ; LAB_00579b59
    MOV ECX,dword ptr [ESP + 0x2428]    ; 00579bc5
        ;   Label: LAB_00579bc5
    PUSH ECX                            ; 00579bcc
    MOV EAX,0x6470b9                    ; 00579bcd | = "..\\core\\setedit.cpp"
    MOV EDX,0x548                       ; 00579bd2
    PUSH 0x6470cd                       ; 00579bd7 | = "Can't allocate memory for %d vertices"
    MOV [0x02f0ca48],EAX                ; 00579bdc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00579be1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00579be7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00579bec
    JMP 0x00579b1b                      ; 00579bef
        ;   XREF to: 00579b1b (UNCONDITIONAL_JUMP)  ; LAB_00579b1b
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579bf4
        ;   Label: LAB_00579bf4
    MOV EDI,dword ptr [EAX + 0x19a2c]   ; 00579bfb
    XOR ESI,ESI                         ; 00579c01
    TEST EDI,EDI                        ; 00579c03
    JLE 0x00579c7d                      ; 00579c05
        ;   XREF to: 00579c7d (CONDITIONAL_JUMP)  ; LAB_00579c7d
    ADD EAX,0x19a30                     ; 00579c07
    MOV EBX,dword ptr [ESP + 0x247c]    ; 00579c0c
    MOV EDI,EAX                         ; 00579c13
    LEA EBP,[EAX + 0x1898]              ; 00579c15
    MOV EAX,dword ptr [EBX + 0x19a30]   ; 00579c1b
        ;   Label: LAB_00579c1b
    TEST EAX,EAX                        ; 00579c21
    JNZ 0x00579fbc                      ; 00579c23
        ;   XREF to: 00579fbc (CONDITIONAL_JUMP)  ; LAB_00579fbc
    MOV EAX,dword ptr [ESP + 0x2408]    ; 00579c29
    MOV dword ptr [ESP + 0x2454],EAX    ; 00579c30
        ;   Label: LAB_00579c30
    CMP dword ptr [ESP + 0x2454],0x0    ; 00579c37
        ;   Label: LAB_00579c37
    JZ 0x00579ffb                       ; 00579c3f
        ;   XREF to: 00579ffb (CONDITIONAL_JUMP)  ; LAB_00579ffb
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579c45
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00579c4c
    DEC EDX                             ; 00579c52
    MOV dword ptr [EAX + 0x19a2c],EDX   ; 00579c53
    MOV EAX,EDX                         ; 00579c59
    SUB EAX,ESI                         ; 00579c5b
    IMUL EAX,EAX,0x1898                 ; 00579c5d
    PUSH EAX                            ; 00579c63
    PUSH EBP                            ; 00579c64
    PUSH EDI                            ; 00579c65
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00579c66
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00579c6b
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579c6e
        ;   Label: LAB_00579c6e
    CMP ESI,dword ptr [EAX + 0x19a2c]   ; 00579c75
    JL 0x00579c1b                       ; 00579c7b
        ;   XREF to: 00579c1b (CONDITIONAL_JUMP)  ; LAB_00579c1b
    PUSH 0x64716f                       ; 00579c7d | = "Reading lights"
        ;   Label: LAB_00579c7d
    MOV ECX,dword ptr [0x00678a60]      ; 00579c82 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00579c88 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00579c89
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00579c8e
    MOV EDI,dword ptr [ESP + 0x2480]    ; 00579c91
    PUSH EDI                            ; 00579c98
        ;   Label: LAB_00579c98
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00579c99
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00579c9e
    TEST EAX,EAX                        ; 00579ca1
    JL 0x00579caa                       ; 00579ca3
        ;   XREF to: 00579caa (CONDITIONAL_JUMP)  ; LAB_00579caa
    CMP EAX,0xa                         ; 00579ca5
    JNZ 0x00579c98                      ; 00579ca8
        ;   XREF to: 00579c98 (CONDITIONAL_JUMP)  ; LAB_00579c98
    XOR ECX,ECX                         ; 00579caa
        ;   Label: LAB_00579caa
    MOV EBX,dword ptr [ESP + 0x2434]    ; 00579cac
    MOV dword ptr [ESP + 0x23fc],ECX    ; 00579cb3
    TEST EBX,EBX                        ; 00579cba
    JLE 0x00579191                      ; 00579cbc
        ;   XREF to: 00579191 (CONDITIONAL_JUMP)  ; LAB_00579191
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579cc2
    ADD EAX,0x19a30                     ; 00579cc9
    MOV dword ptr [ESP + 0x245c],EAX    ; 00579cce
    MOV EAX,ESP                         ; 00579cd5
        ;   Label: LAB_00579cd5
    PUSH EAX                            ; 00579cd7
    CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0 ; 00579cd8
        ;   XREF to: 005862f0 (UNCONDITIONAL_CALL)  ; C3DSLight * core_setutil.cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 00579cdd
    MOV EBP,dword ptr [ESP + 0x2480]    ; 00579ce0
    PUSH EBP                            ; 00579ce7
    LEA EAX,[ESP + 0x4]                 ; 00579ce8
    PUSH EAX                            ; 00579cec
    CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 ; 00579ced
        ;   XREF to: 00587710 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00579cf2
    MOV EAX,dword ptr [ESP]             ; 00579cf5
    TEST EAX,EAX                        ; 00579cf8
    JNZ 0x0057a013                      ; 00579cfa
        ;   XREF to: 0057a013 (CONDITIONAL_JUMP)  ; LAB_0057a013
    MOV EAX,dword ptr [ESP + 0x2408]    ; 00579d00
    MOV dword ptr [ESP + 0x2458],EAX    ; 00579d07
        ;   Label: LAB_00579d07
    CMP dword ptr [ESP + 0x2458],0x0    ; 00579d0e
        ;   Label: LAB_00579d0e
    JZ 0x00579f99                       ; 00579d16
        ;   XREF to: 00579f99 (CONDITIONAL_JUMP)  ; LAB_00579f99
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579d1c
    CMP dword ptr [EAX + 0x19a2c],0xc8  ; 00579d23
    JL 0x00579d51                       ; 00579d2d
        ;   XREF to: 00579d51 (CONDITIONAL_JUMP)  ; LAB_00579d51
    MOV EAX,0x6471a9                    ; 00579d2f | = "..\\core\\setedit.cpp"
    MOV EDX,0x58f                       ; 00579d34
    PUSH 0x6471bd                       ; 00579d39 | = "Too many lights!"
    MOV [0x02f0ca48],EAX                ; 00579d3e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00579d43 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00579d49
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00579d4e
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579d51
        ;   Label: LAB_00579d51
    IMUL EBP,dword ptr [EAX + 0x19a2c],0x1898 ; 00579d58
    MOV EBX,dword ptr [ESP + 0x245c]    ; 00579d62
    LEA ESI,[ESP + 0x4]                 ; 00579d69
    ADD EBP,EBX                         ; 00579d6d
    MOV EAX,dword ptr [ESP]             ; 00579d6f
    MOV ECX,0x40                        ; 00579d72
    LEA EDI,[EBP + 0x4]                 ; 00579d77
    MOV dword ptr [EBP],EAX             ; 00579d7a
    MOV EBX,EBP                         ; 00579d7d
    MOVSD.REP ES:EDI,ESI                ; 00579d7f
    LEA EAX,[ESP + 0x104]               ; 00579d81
    LEA ESI,[EBP + 0x104]               ; 00579d88
    CMP ESI,EAX                         ; 00579d8e
    JZ 0x00579daf                       ; 00579d90
        ;   XREF to: 00579daf (CONDITIONAL_JUMP)  ; LAB_00579daf
    MOV EAX,dword ptr [ESP + 0x104]     ; 00579d92
    MOV dword ptr [ESI],EAX             ; 00579d99
    MOV EAX,dword ptr [ESP + 0x108]     ; 00579d9b
    MOV dword ptr [ESI + 0x4],EAX       ; 00579da2
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00579da5
    MOV dword ptr [ESI + 0x8],EAX       ; 00579dac
    LEA EAX,[ESP + 0x110]               ; 00579daf
        ;   Label: LAB_00579daf
    LEA ESI,[EBX + 0x110]               ; 00579db6
    CMP ESI,EAX                         ; 00579dbc
    JZ 0x00579ddd                       ; 00579dbe
        ;   XREF to: 00579ddd (CONDITIONAL_JUMP)  ; LAB_00579ddd
    MOV EAX,dword ptr [ESP + 0x110]     ; 00579dc0
    MOV dword ptr [ESI],EAX             ; 00579dc7
    MOV EAX,dword ptr [ESP + 0x114]     ; 00579dc9
    MOV dword ptr [ESI + 0x4],EAX       ; 00579dd0
    MOV EAX,dword ptr [ESP + 0x118]     ; 00579dd3
    MOV dword ptr [ESI + 0x8],EAX       ; 00579dda
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00579ddd
        ;   Label: LAB_00579ddd
    MOV dword ptr [EBX + 0x11c],EAX     ; 00579de4
    MOV EAX,dword ptr [ESP + 0x120]     ; 00579dea
    MOV ECX,0x3e                        ; 00579df1
    MOV dword ptr [EBX + 0x120],EAX     ; 00579df6
    LEA ESI,[ESP + 0x128]               ; 00579dfc
    MOV EAX,dword ptr [ESP + 0x124]     ; 00579e03
    LEA EDI,[EBX + 0x128]               ; 00579e0a
    MOV dword ptr [EBX + 0x124],EAX     ; 00579e10
    MOVSD.REP ES:EDI,ESI                ; 00579e16
    MOVSW ES:EDI,ESI                    ; 00579e18
    LEA ESI,[ESP + 0x224]               ; 00579e1a
    LEA EDI,[EBX + 0x224]               ; 00579e21
    JMP 0x00604acc                      ; 00579e27
        ;   XREF to: 00604acc (UNCONDITIONAL_JUMP)  ; LAB_00604acc
    MOV dword ptr [EBX + 0x11c4],EAX    ; 00579e32
        ;   Label: LAB_00579e32
    MOV EAX,dword ptr [ESP + 0x11c8]    ; 00579e38
    MOV dword ptr [EBX + 0x11c8],EAX    ; 00579e3f
    MOV EAX,dword ptr [ESP + 0x11cc]    ; 00579e45
    MOV dword ptr [EBX + 0x11cc],EAX    ; 00579e4c
    MOV EAX,dword ptr [ESP + 0x11d0]    ; 00579e52
    MOV dword ptr [EBX + 0x11d0],EAX    ; 00579e59
    MOV EAX,dword ptr [ESP + 0x11d4]    ; 00579e5f
    MOV dword ptr [EBX + 0x11d4],EAX    ; 00579e66
    MOV EAX,dword ptr [ESP + 0x11d8]    ; 00579e6c
    MOV dword ptr [EBX + 0x11d8],EAX    ; 00579e73
    MOV EAX,dword ptr [ESP + 0x11dc]    ; 00579e79
    MOV dword ptr [EBX + 0x11dc],EAX    ; 00579e80
    MOV EAX,dword ptr [ESP + 0x11e0]    ; 00579e86
    MOV dword ptr [EBX + 0x11e0],EAX    ; 00579e8d
    MOV EAX,dword ptr [ESP + 0x11e4]    ; 00579e93
    MOV dword ptr [EBX + 0x11e4],EAX    ; 00579e9a
    MOV EAX,dword ptr [ESP + 0x11e8]    ; 00579ea0
    MOV dword ptr [EBX + 0x11e8],EAX    ; 00579ea7
    MOV EAX,dword ptr [ESP + 0x11ec]    ; 00579ead
    MOV ECX,0x140                       ; 00579eb4
    MOV dword ptr [EBX + 0x11ec],EAX    ; 00579eb9
    LEA ESI,[ESP + 0x11f4]              ; 00579ebf
    MOV EAX,dword ptr [ESP + 0x11f0]    ; 00579ec6
    LEA EDI,[EBX + 0x11f4]              ; 00579ecd
    MOV dword ptr [EBX + 0x11f0],EAX    ; 00579ed3
    MOVSD.REP ES:EDI,ESI                ; 00579ed9
    MOV ECX,0x20                        ; 00579edb
    LEA ESI,[ESP + 0x16f4]              ; 00579ee0
    LEA EDI,[EBX + 0x16f4]              ; 00579ee7
    MOVSD.REP ES:EDI,ESI                ; 00579eed
    MOV ECX,0x20                        ; 00579eef
    LEA ESI,[ESP + 0x1774]              ; 00579ef4
    LEA EDI,[EBX + 0x1774]              ; 00579efb
    MOVSD.REP ES:EDI,ESI                ; 00579f01
    MOV EAX,dword ptr [ESP + 0x17f4]    ; 00579f03
    MOV dword ptr [EBX + 0x17f4],EAX    ; 00579f0a
    MOV EAX,dword ptr [ESP + 0x17f8]    ; 00579f10
    MOV dword ptr [EBX + 0x17f8],EAX    ; 00579f17
    MOV EAX,dword ptr [ESP + 0x17fc]    ; 00579f1d
    MOV dword ptr [EBX + 0x17fc],EAX    ; 00579f24
    MOV EAX,dword ptr [ESP + 0x1800]    ; 00579f2a
    MOV dword ptr [EBX + 0x1800],EAX    ; 00579f31
    MOV EAX,dword ptr [ESP + 0x1804]    ; 00579f37
    MOV dword ptr [EBX + 0x1804],EAX    ; 00579f3e
    MOV EAX,dword ptr [ESP + 0x1808]    ; 00579f44
    MOV ECX,0x20                        ; 00579f4b
    MOV dword ptr [EBX + 0x1808],EAX    ; 00579f50
    LEA ESI,[ESP + 0x1810]              ; 00579f56
    MOV EAX,dword ptr [ESP + 0x180c]    ; 00579f5d
    LEA EDI,[EBX + 0x1810]              ; 00579f64
    MOV dword ptr [EBX + 0x180c],EAX    ; 00579f6a
    MOVSD.REP ES:EDI,ESI                ; 00579f70
    MOV EAX,dword ptr [ESP + 0x1890]    ; 00579f72
    MOV dword ptr [EBX + 0x1890],EAX    ; 00579f79
    MOV EAX,dword ptr [ESP + 0x1894]    ; 00579f7f
    MOV dword ptr [EBX + 0x1894],EAX    ; 00579f86
    MOV EAX,dword ptr [ESP + 0x247c]    ; 00579f8c
    INC dword ptr [EAX + 0x19a2c]       ; 00579f93
    MOV ESI,dword ptr [ESP + 0x23fc]    ; 00579f99
        ;   Label: LAB_00579f99
    INC ESI                             ; 00579fa0
    MOV EDI,dword ptr [ESP + 0x2434]    ; 00579fa1
    MOV dword ptr [ESP + 0x23fc],ESI    ; 00579fa8
    CMP ESI,EDI                         ; 00579faf
    JGE 0x00579191                      ; 00579fb1
        ;   XREF to: 00579191 (CONDITIONAL_JUMP)  ; LAB_00579191
    JMP 0x00579cd5                      ; 00579fb7
        ;   XREF to: 00579cd5 (UNCONDITIONAL_JUMP)  ; LAB_00579cd5
    CMP EAX,0x1                         ; 00579fbc
        ;   Label: LAB_00579fbc
    JNZ 0x00579fcd                      ; 00579fbf
        ;   XREF to: 00579fcd (CONDITIONAL_JUMP)  ; LAB_00579fcd
    MOV EAX,dword ptr [ESP + 0x2404]    ; 00579fc1
    JMP 0x00579c30                      ; 00579fc8
        ;   XREF to: 00579c30 (UNCONDITIONAL_JUMP)  ; LAB_00579c30
    MOV EDX,dword ptr [EBX + 0x19a30]   ; 00579fcd
        ;   Label: LAB_00579fcd
    PUSH EDX                            ; 00579fd3
    MOV ECX,0x647144                    ; 00579fd4 | = "..\\core\\setedit.cpp"
    MOV EAX,0x56b                       ; 00579fd9
    PUSH 0x647158                       ; 00579fde | = "unknown light type: %d"
    MOV dword ptr [0x02f0ca48],ECX      ; 00579fe3 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00579fe9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00579fee
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00579ff3
    JMP 0x00579c37                      ; 00579ff6
        ;   XREF to: 00579c37 (UNCONDITIONAL_JUMP)  ; LAB_00579c37
    ADD EDI,0x1898                      ; 00579ffb
        ;   Label: LAB_00579ffb
    ADD EBP,0x1898                      ; 0057a001
    INC ESI                             ; 0057a007
    ADD EBX,0x1898                      ; 0057a008
    JMP 0x00579c6e                      ; 0057a00e
        ;   XREF to: 00579c6e (UNCONDITIONAL_JUMP)  ; LAB_00579c6e
    CMP EAX,0x1                         ; 0057a013
        ;   Label: LAB_0057a013
    JNZ 0x0057a024                      ; 0057a016
        ;   XREF to: 0057a024 (CONDITIONAL_JUMP)  ; LAB_0057a024
    MOV EAX,dword ptr [ESP + 0x2404]    ; 0057a018
    JMP 0x00579d07                      ; 0057a01f
        ;   XREF to: 00579d07 (UNCONDITIONAL_JUMP)  ; LAB_00579d07
    PUSH EAX                            ; 0057a024
        ;   Label: LAB_0057a024
    MOV ECX,0x64717e                    ; 0057a025 | = "..\\core\\setedit.cpp"
    MOV EBX,0x589                       ; 0057a02a
    PUSH 0x647192                       ; 0057a02f | = "unknown light type: %d"
    MOV dword ptr [0x02f0ca48],ECX      ; 0057a034 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057a03a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057a040
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057a045
    JMP 0x00579d0e                      ; 0057a048
        ;   XREF to: 00579d0e (UNCONDITIONAL_JUMP)  ; LAB_00579d0e
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057a04d
        ;   Label: LAB_0057a04d
    PUSH EBX                            ; 0057a054
        ;   Label: LAB_0057a054
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057a055
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057a05a
    TEST EAX,EAX                        ; 0057a05d
    JL 0x0057a066                       ; 0057a05f
        ;   XREF to: 0057a066 (CONDITIONAL_JUMP)  ; LAB_0057a066
    CMP EAX,0xa                         ; 0057a061
    JNZ 0x0057a054                      ; 0057a064
        ;   XREF to: 0057a054 (CONDITIONAL_JUMP)  ; LAB_0057a054
    MOV EDX,dword ptr [ESP + 0x2438]    ; 0057a066
        ;   Label: LAB_0057a066
    XOR ESI,ESI                         ; 0057a06d
    TEST EDX,EDX                        ; 0057a06f
    JLE 0x00579220                      ; 0057a071
        ;   XREF to: 00579220 (CONDITIONAL_JUMP)  ; LAB_00579220
    MOV EBX,dword ptr [ESP + 0x2480]    ; 0057a077
    PUSH EBX                            ; 0057a07e
        ;   Label: LAB_0057a07e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0057a07f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0057a084
    TEST EAX,EAX                        ; 0057a087
    JL 0x0057a090                       ; 0057a089
        ;   XREF to: 0057a090 (CONDITIONAL_JUMP)  ; LAB_0057a090
    CMP EAX,0xa                         ; 0057a08b
    JNZ 0x0057a07e                      ; 0057a08e
        ;   XREF to: 0057a07e (CONDITIONAL_JUMP)  ; LAB_0057a07e
    MOV EAX,dword ptr [ESP + 0x2438]    ; 0057a090
        ;   Label: LAB_0057a090
    INC ESI                             ; 0057a097
    CMP ESI,EAX                         ; 0057a098
    JGE 0x00579220                      ; 0057a09a
        ;   XREF to: 00579220 (CONDITIONAL_JUMP)  ; LAB_00579220
    JMP 0x0057a07e                      ; 0057a0a0
        ;   XREF to: 0057a07e (UNCONDITIONAL_JUMP)  ; LAB_0057a07e
    CMP dword ptr [ESP + 0x240c],0x0    ; 0057a0a2
        ;   Label: LAB_0057a0a2
    JNZ 0x00579406                      ; 0057a0aa
        ;   XREF to: 00579406 (CONDITIONAL_JUMP)  ; LAB_00579406
    JMP 0x005794f0                      ; 0057a0b0
        ;   XREF to: 005794f0 (UNCONDITIONAL_JUMP)  ; LAB_005794f0
    MOV ECX,dword ptr [ESI]             ; 00604acc
        ;   Label: LAB_00604acc
    MOV dword ptr [EDI],ECX             ; 00604ace
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604ad0
    MOV dword ptr [EDI + 0x4],ECX       ; 00604ad3
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604ad6
    MOV dword ptr [EDI + 0x8],ECX       ; 00604ad9
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604adc
    MOV dword ptr [EDI + 0xc],ECX       ; 00604adf
    ADD ESI,0x10                        ; 00604ae2
    ADD EDI,0x10                        ; 00604ae5
    MOV EAX,dword ptr [ESP + 0x11c4]    ; 00604ae8
    JMP 0x00579e32                      ; 00604aef
        ;   XREF to: 00579e32 (UNCONDITIONAL_JUMP)  ; LAB_00579e32

