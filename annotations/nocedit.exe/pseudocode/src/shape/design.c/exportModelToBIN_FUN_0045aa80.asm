; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, int include_textures)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   depth_mode
; int              Stack[0xc]:4   scale_mode
; int              Stack[0x10]:4   export_format
; int              Stack[0x14]:4   include_textures
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined8       Stack[-0xf0]:8  local_f0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined1       Stack[-0x90]:1  local_90
; undefined1       Stack[-0x8f]:1  local_8f
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
; XREF[2]:
;   shape_design.c_modelExportWizard_FUN_0045a7b0 at 0045aa6c
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053f28b
;
; Referenced Globals:
;   TerminatedCString s_wb_0061b09e
;   TerminatedCString s_models_0061b0a1
;   TerminatedCString s_wt_0061b0a8
;   TerminatedCString s_models_0061b0ab
;   TerminatedCString s_Model_Display_List_0061b0b2
;   TerminatedCString s_Copyright_C_1994_Termina_0061b0c8
;   TerminatedCString s_All_rights_reserved_0061b0f5
;   TerminatedCString s_include_3d_inc_0061b10d
;   TerminatedCString s_code_segment_0061b11f
;   TerminatedCString s_ASSUME_cs_code_0061b12d
;   TerminatedCString s_Unable_to_write_binary_f_0061b13f
;   double g_ScaleToFitConstant = 64
;   double g_NormalizationConstant = 2
;   double g_AnimationScaleConstant = 64
;   double g_MagnifyMultiplier = 65536
;   ... and 58 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_string.c_strcmp_FUN_005fef20
;   crt_unknown.c_FUN_00600002
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045aa80
        ;   Label: shape_design.c_exportModelToBIN_FUN_0045aa80
    PUSH ESI                            ; 0045aa81
    PUSH EDI                            ; 0045aa82
    PUSH EBP                            ; 0045aa83
    MOV EBP,ESP                         ; 0045aa84
    SUB ESP,0xec                        ; 0045aa86
    CALL shape_design.c_sortPolygonsByTexture_FUN_0045b8b0 ; 0045aa8c | void shape_design.c_sortPolygonsByTexture_FUN_0045b8b0()
        ;   XREF to: 0045b8b0 (UNCONDITIONAL_CALL)
    CMP dword ptr [EBP + 0x20],0x0      ; 0045aa91
    JZ 0x0045aab7                       ; 0045aa95 | LAB_0045aab7
        ;   XREF to: 0045aab7 (CONDITIONAL_JUMP)
    MOV EAX,0x61b09e                    ; 0045aa97 | = "wb" | s_wb_0061b09e = wb
    PUSH EAX                            ; 0045aa9c | = "wb" | s_wb_0061b09e = wb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045aa9d
    PUSH EAX                            ; 0045aaa0
    MOV EAX,0x61b0a1                    ; 0045aaa1 | = "models" | s_models_0061b0a1 = models
    PUSH EAX                            ; 0045aaa6 | = "models" | s_models_0061b0a1 = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0045aaa7 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045aaac
    MOV dword ptr [EBP + -0xc],EAX      ; 0045aaaf
    JMP 0x0045ab3e                      ; 0045aab2 | LAB_0045ab3e
        ;   XREF to: 0045ab3e (UNCONDITIONAL_JUMP)
    MOV EAX,0x61b0a8                    ; 0045aab7 | = "wt" | s_wt_0061b0a8 = wt
        ;   Label: LAB_0045aab7
    PUSH EAX                            ; 0045aabc | = "wt" | s_wt_0061b0a8 = wt
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045aabd
    PUSH EAX                            ; 0045aac0
    MOV EAX,0x61b0ab                    ; 0045aac1 | = "models" | s_models_0061b0ab = models
    PUSH EAX                            ; 0045aac6 | = "models" | s_models_0061b0ab = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0045aac7 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045aacc
    MOV dword ptr [EBP + -0xc],EAX      ; 0045aacf
    MOV EAX,0x61b0b2                    ; 0045aad2 | = "; Model Display List\n" | s_Model_Display_List_0061b0b2 = ; Model Display List

    PUSH EAX                            ; 0045aad7 | = "; Model Display List\n" | s_Model_Display_List_0061b0b2 = ; Model Display List

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045aad8
    PUSH EAX                            ; 0045aadb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045aadc | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045aae1
    MOV EAX,0x61b0c8                    ; 0045aae4 | = "; Copyright (C) 1994 Terminal Reality..." | s_Copyright_C_1994_Termina_0061b0c8 = ; Copyright (C) 1994 Terminal Reality, Inc.

    PUSH EAX                            ; 0045aae9 | = "; Copyright (C) 1994 Terminal Reality..." | s_Copyright_C_1994_Termina_0061b0c8 = ; Copyright (C) 1994 Terminal Reality, Inc.

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045aaea
    PUSH EAX                            ; 0045aaed
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045aaee | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045aaf3
    MOV EAX,0x61b0f5                    ; 0045aaf6 | = "; All rights reserved\n\n" | s_All_rights_reserved_0061b0f5 = ; All rights reserved


    PUSH EAX                            ; 0045aafb | = "; All rights reserved\n\n" | s_All_rights_reserved_0061b0f5 = ; All rights reserved


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045aafc
    PUSH EAX                            ; 0045aaff
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ab00 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045ab05
    MOV EAX,0x61b10d                    ; 0045ab08 | = "\tinclude\t3d.inc\n\n" | s_include_3d_inc_0061b10d = 	include	3d.inc


    PUSH EAX                            ; 0045ab0d | = "\tinclude\t3d.inc\n\n" | s_include_3d_inc_0061b10d = 	include	3d.inc


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ab0e
    PUSH EAX                            ; 0045ab11
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ab12 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045ab17
    MOV EAX,0x61b11f                    ; 0045ab1a | = "code\tsegment\n" | s_code_segment_0061b11f = code	segment

    PUSH EAX                            ; 0045ab1f | = "code\tsegment\n" | s_code_segment_0061b11f = code	segment

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ab20
    PUSH EAX                            ; 0045ab23
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ab24 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045ab29
    MOV EAX,0x61b12d                    ; 0045ab2c | = "\tASSUME\tcs:code\n\n" | s_ASSUME_cs_code_0061b12d = 	ASSUME	cs:code


    PUSH EAX                            ; 0045ab31 | = "\tASSUME\tcs:code\n\n" | s_ASSUME_cs_code_0061b12d = 	ASSUME	cs:code


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ab32
    PUSH EAX                            ; 0045ab35
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ab36 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045ab3b
    CMP dword ptr [EBP + -0xc],0x0      ; 0045ab3e
        ;   Label: LAB_0045ab3e
    JNZ 0x0045ab6f                      ; 0045ab42 | LAB_0045ab6f
        ;   XREF to: 0045ab6f (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ab44 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045ab49 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0045ab4e
    PUSH 0x0                            ; 0045ab50
    MOV EAX,0x61b13f                    ; 0045ab52 | = "Unable to write binary file!" | s_Unable_to_write_binary_f_0061b13f = Unable to write binary file!
    PUSH EAX                            ; 0045ab57 | = "Unable to write binary file!" | s_Unable_to_write_binary_f_0061b13f = Unable to write binary file!
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ab58 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ab5d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ab60 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045ab65 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x0045b846                      ; 0045ab6a | LAB_0045b846
        ;   XREF to: 0045b846 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x31     ; 0045ab6f
        ;   Label: LAB_0045ab6f
    JNZ 0x0045ac1e                      ; 0045ab73 | LAB_0045ac1e
        ;   XREF to: 0045ac1e (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ab79
    MOV dword ptr [EBP + -0x18],0x0     ; 0045ab80
    JMP 0x0045ab8f                      ; 0045ab87 | LAB_0045ab8f
        ;   XREF to: 0045ab8f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ab89
        ;   Label: LAB_0045ab89
    INC dword ptr [EBP + -0x18]         ; 0045ab8c
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ab8f
        ;   Label: LAB_0045ab8f
    CMP EAX,dword ptr [0x01626408]      ; 0045ab92 | int g_VertexCount
    JGE 0x0045ac12                      ; 0045ab98 | LAB_0045ac12
        ;   XREF to: 0045ac12 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ab9e
    FLD float ptr [EAX + 0x162640c]     ; 0045aba2 | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045aba8
    FLD float ptr [EBP + -0x4]          ; 0045abaa
    FCOMPP                              ; 0045abad
    FNSTSW AX                           ; 0045abaf
    SAHF                                ; 0045abb1
    JNC 0x0045abc3                      ; 0045abb2 | LAB_0045abc3
        ;   XREF to: 0045abc3 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045abb4
    FLD float ptr [EAX + 0x162640c]     ; 0045abb8 | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045abbe
    FSTP float ptr [EBP + -0x4]         ; 0045abc0
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045abc3
        ;   Label: LAB_0045abc3
    FLD float ptr [EAX + 0x1626410]     ; 0045abc7 | DAT_01626410
    FABS                                ; 0045abcd
    FLD float ptr [EBP + -0x4]          ; 0045abcf
    FCOMPP                              ; 0045abd2
    FNSTSW AX                           ; 0045abd4
    SAHF                                ; 0045abd6
    JNC 0x0045abe8                      ; 0045abd7 | LAB_0045abe8
        ;   XREF to: 0045abe8 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045abd9
    FLD float ptr [EAX + 0x1626410]     ; 0045abdd | DAT_01626410
    FABS                                ; 0045abe3
    FSTP float ptr [EBP + -0x4]         ; 0045abe5
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045abe8
        ;   Label: LAB_0045abe8
    FLD float ptr [EAX + 0x1626414]     ; 0045abec | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045abf2
    FLD float ptr [EBP + -0x4]          ; 0045abf4
    FCOMPP                              ; 0045abf7
    FNSTSW AX                           ; 0045abf9
    SAHF                                ; 0045abfb
    JNC 0x0045ac0d                      ; 0045abfc | LAB_0045ac0d
        ;   XREF to: 0045ac0d (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045abfe
    FLD float ptr [EAX + 0x1626414]     ; 0045ac02 | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045ac08
    FSTP float ptr [EBP + -0x4]         ; 0045ac0a
    JMP 0x0045ab89                      ; 0045ac0d | LAB_0045ab89
        ;   Label: LAB_0045ac0d
        ;   XREF to: 0045ab89 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 0045ac12
        ;   Label: LAB_0045ac12
    FDIVR double ptr [0x0061b15e]       ; 0045ac15 | double g_ScaleToFitConstant
    FSTP float ptr [EBP + -0x4]         ; 0045ac1b
    CMP dword ptr [EBP + 0x1c],0x32     ; 0045ac1e
        ;   Label: LAB_0045ac1e
    JL 0x0045ac2a                       ; 0045ac22 | LAB_0045ac2a
        ;   XREF to: 0045ac2a (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x34     ; 0045ac24
    JLE 0x0045ac2f                      ; 0045ac28 | LAB_0045ac2f
        ;   XREF to: 0045ac2f (CONDITIONAL_JUMP)
    JMP 0x0045ace4                      ; 0045ac2a | LAB_0045ace4
        ;   Label: LAB_0045ac2a
        ;   XREF to: 0045ace4 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045ac2f
        ;   Label: LAB_0045ac2f
    MOV dword ptr [EBP + -0x18],0x0     ; 0045ac36
    JMP 0x0045ac45                      ; 0045ac3d | LAB_0045ac45
        ;   XREF to: 0045ac45 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ac3f
        ;   Label: LAB_0045ac3f
    INC dword ptr [EBP + -0x18]         ; 0045ac42
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ac45
        ;   Label: LAB_0045ac45
    CMP EAX,dword ptr [0x01626408]      ; 0045ac48 | int g_VertexCount
    JGE 0x0045acda                      ; 0045ac4e | LAB_0045acda
        ;   XREF to: 0045acda (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x32     ; 0045ac54
    JNZ 0x0045ac7f                      ; 0045ac58 | LAB_0045ac7f
        ;   XREF to: 0045ac7f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ac5a
    FLD float ptr [EAX + 0x162640c]     ; 0045ac5e | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045ac64
    FLD float ptr [EBP + -0x4]          ; 0045ac66
    FCOMPP                              ; 0045ac69
    FNSTSW AX                           ; 0045ac6b
    SAHF                                ; 0045ac6d
    JNC 0x0045ac7f                      ; 0045ac6e | LAB_0045ac7f
        ;   XREF to: 0045ac7f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ac70
    FLD float ptr [EAX + 0x162640c]     ; 0045ac74 | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045ac7a
    FSTP float ptr [EBP + -0x4]         ; 0045ac7c
    CMP dword ptr [EBP + 0x1c],0x33     ; 0045ac7f
        ;   Label: LAB_0045ac7f
    JNZ 0x0045acaa                      ; 0045ac83 | LAB_0045acaa
        ;   XREF to: 0045acaa (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ac85
    FLD float ptr [EAX + 0x1626410]     ; 0045ac89 | DAT_01626410
    FABS                                ; 0045ac8f
    FLD float ptr [EBP + -0x4]          ; 0045ac91
    FCOMPP                              ; 0045ac94
    FNSTSW AX                           ; 0045ac96
    SAHF                                ; 0045ac98
    JNC 0x0045acaa                      ; 0045ac99 | LAB_0045acaa
        ;   XREF to: 0045acaa (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ac9b
    FLD float ptr [EAX + 0x1626410]     ; 0045ac9f | DAT_01626410
    FABS                                ; 0045aca5
    FSTP float ptr [EBP + -0x4]         ; 0045aca7
    CMP dword ptr [EBP + 0x1c],0x34     ; 0045acaa
        ;   Label: LAB_0045acaa
    JNZ 0x0045acd5                      ; 0045acae | LAB_0045acd5
        ;   XREF to: 0045acd5 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045acb0
    FLD float ptr [EAX + 0x1626414]     ; 0045acb4 | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045acba
    FLD float ptr [EBP + -0x4]          ; 0045acbc
    FCOMPP                              ; 0045acbf
    FNSTSW AX                           ; 0045acc1
    SAHF                                ; 0045acc3
    JNC 0x0045acd5                      ; 0045acc4 | LAB_0045acd5
        ;   XREF to: 0045acd5 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045acc6
    FLD float ptr [EAX + 0x1626414]     ; 0045acca | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045acd0
    FSTP float ptr [EBP + -0x4]         ; 0045acd2
    JMP 0x0045ac3f                      ; 0045acd5 | LAB_0045ac3f
        ;   Label: LAB_0045acd5
        ;   XREF to: 0045ac3f (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 0045acda
        ;   Label: LAB_0045acda
    FLD1                                ; 0045acdd
    FDIVRP                              ; 0045acdf
    FSTP float ptr [EBP + -0x4]         ; 0045ace1
    CMP dword ptr [EBP + 0x1c],0x35     ; 0045ace4
        ;   Label: LAB_0045ace4
    JNZ 0x0045acf1                      ; 0045ace8 | LAB_0045acf1
        ;   XREF to: 0045acf1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x3f800000 ; 0045acea
    CMP dword ptr [EBP + 0x1c],0x36     ; 0045acf1
        ;   Label: LAB_0045acf1
    JNZ 0x0045aded                      ; 0045acf5 | LAB_0045aded
        ;   XREF to: 0045aded (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045acfb
    MOV dword ptr [EBP + -0x18],0x0     ; 0045ad02
    JMP 0x0045ad11                      ; 0045ad09 | LAB_0045ad11
        ;   XREF to: 0045ad11 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ad0b
        ;   Label: LAB_0045ad0b
    INC dword ptr [EBP + -0x18]         ; 0045ad0e
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ad11
        ;   Label: LAB_0045ad11
    CMP EAX,dword ptr [0x01626408]      ; 0045ad14 | int g_VertexCount
    JGE 0x0045ad94                      ; 0045ad1a | LAB_0045ad94
        ;   XREF to: 0045ad94 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad20
    FLD float ptr [EAX + 0x162640c]     ; 0045ad24 | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045ad2a
    FLD float ptr [EBP + -0x4]          ; 0045ad2c
    FCOMPP                              ; 0045ad2f
    FNSTSW AX                           ; 0045ad31
    SAHF                                ; 0045ad33
    JNC 0x0045ad45                      ; 0045ad34 | LAB_0045ad45
        ;   XREF to: 0045ad45 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad36
    FLD float ptr [EAX + 0x162640c]     ; 0045ad3a | SVertexData[20000] g_LoadedVertices
    FABS                                ; 0045ad40
    FSTP float ptr [EBP + -0x4]         ; 0045ad42
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad45
        ;   Label: LAB_0045ad45
    FLD float ptr [EAX + 0x1626410]     ; 0045ad49 | DAT_01626410
    FABS                                ; 0045ad4f
    FLD float ptr [EBP + -0x4]          ; 0045ad51
    FCOMPP                              ; 0045ad54
    FNSTSW AX                           ; 0045ad56
    SAHF                                ; 0045ad58
    JNC 0x0045ad6a                      ; 0045ad59 | LAB_0045ad6a
        ;   XREF to: 0045ad6a (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad5b
    FLD float ptr [EAX + 0x1626410]     ; 0045ad5f | DAT_01626410
    FABS                                ; 0045ad65
    FSTP float ptr [EBP + -0x4]         ; 0045ad67
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad6a
        ;   Label: LAB_0045ad6a
    FLD float ptr [EAX + 0x1626414]     ; 0045ad6e | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045ad74
    FLD float ptr [EBP + -0x4]          ; 0045ad76
    FCOMPP                              ; 0045ad79
    FNSTSW AX                           ; 0045ad7b
    SAHF                                ; 0045ad7d
    JNC 0x0045ad8f                      ; 0045ad7e | LAB_0045ad8f
        ;   XREF to: 0045ad8f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ad80
    FLD float ptr [EAX + 0x1626414]     ; 0045ad84 | g_LoadedVertices[0].vertex.z
    FABS                                ; 0045ad8a
    FSTP float ptr [EBP + -0x4]         ; 0045ad8c
    JMP 0x0045ad0b                      ; 0045ad8f | LAB_0045ad0b
        ;   Label: LAB_0045ad8f
        ;   XREF to: 0045ad0b (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 0045ad94
        ;   Label: LAB_0045ad94
    FLDLN2                              ; 0045ad97
    FXCH                                ; 0045ad99
    FYL2X                               ; 0045ad9b
    FLD double ptr [0x0061b166]         ; 0045ad9d | double g_NormalizationConstant
    FLDLN2                              ; 0045ada3
    FXCH                                ; 0045ada5
    FYL2X                               ; 0045ada7
    FDIVP                               ; 0045ada9
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045adab | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x8]        ; 0045adb0
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045adb3
    INC dword ptr [EBP + -0x8]          ; 0045adb6
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045adb9
    PUSH EAX                            ; 0045adbc
    PUSH 0x3ff00000                     ; 0045adbd
    PUSH 0x0                            ; 0045adc2
    CALL crt_unknown.c_FUN_00600002     ; 0045adc4 | undefined crt_unknown.c_FUN_00600002()
        ;   XREF to: 00600002 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff20],EAX ; 0045adc9
    MOV dword ptr [EBP + 0xffffff24],EDX ; 0045adcf
    FLD double ptr [EBP + 0xffffff20]   ; 0045add5
    ADD ESP,0xc                         ; 0045addb
    FSTP float ptr [EBP + -0x4]         ; 0045adde
    FLD float ptr [EBP + -0x4]          ; 0045ade1
    FDIVR double ptr [0x0061b16e]       ; 0045ade4 | double g_AnimationScaleConstant
    FSTP float ptr [EBP + -0x4]         ; 0045adea
    MOV dword ptr [EBP + -0x28],0x14    ; 0045aded
        ;   Label: LAB_0045aded
    FLD float ptr [EBP + -0x4]          ; 0045adf4
    FMUL double ptr [0x0061b176]        ; 0045adf7 | double g_MagnifyMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045adfd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x24]       ; 0045ae02
    CMP dword ptr [EBP + 0x20],0x0      ; 0045ae05
    JZ 0x0045ae21                       ; 0045ae09 | LAB_0045ae21
        ;   XREF to: 0045ae21 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ae0b
    PUSH EAX                            ; 0045ae0e
    PUSH 0x8                            ; 0045ae0f
    PUSH 0x1                            ; 0045ae11
    LEA EAX,[EBP + -0x28]               ; 0045ae13
    PUSH EAX                            ; 0045ae16
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045ae17 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ae1c
    JMP 0x0045ae37                      ; 0045ae1f | LAB_0045ae37
        ;   XREF to: 0045ae37 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045ae21
        ;   Label: LAB_0045ae21
    PUSH EAX                            ; 0045ae24
    MOV EAX,0x61b17e                    ; 0045ae25 | = "\tMAGNIFY\t%d\n\n" | s_MAGNIFY_d_0061b17e = 	MAGNIFY	%d


    PUSH EAX                            ; 0045ae2a | = "\tMAGNIFY\t%d\n\n" | s_MAGNIFY_d_0061b17e = 	MAGNIFY	%d


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ae2b
    PUSH EAX                            ; 0045ae2e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ae2f | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ae34
    MOV dword ptr [EBP + -0x4c],0x2     ; 0045ae37
        ;   Label: LAB_0045ae37
    MOV dword ptr [EBP + -0x48],0x0     ; 0045ae3e
    MOV EAX,[0x01626408]                ; 0045ae45 | int g_VertexCount
    MOV dword ptr [EBP + -0x44],EAX     ; 0045ae4a
    CMP dword ptr [EBP + 0x20],0x0      ; 0045ae4d
    JZ 0x0045ae69                       ; 0045ae51 | LAB_0045ae69
        ;   XREF to: 0045ae69 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ae53
    PUSH EAX                            ; 0045ae56
    PUSH 0xc                            ; 0045ae57
    PUSH 0x1                            ; 0045ae59
    LEA EAX,[EBP + -0x4c]               ; 0045ae5b
    PUSH EAX                            ; 0045ae5e
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045ae5f | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045ae64
    JMP 0x0045ae7f                      ; 0045ae67 | LAB_0045ae7f
        ;   XREF to: 0045ae7f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x44]     ; 0045ae69
        ;   Label: LAB_0045ae69
    PUSH EAX                            ; 0045ae6c
    MOV EAX,0x61b18c                    ; 0045ae6d | = "\tVLIST\t0,%d\n" | s_VLIST_0_d_0061b18c = 	VLIST	0,%d

    PUSH EAX                            ; 0045ae72 | = "\tVLIST\t0,%d\n" | s_VLIST_0_d_0061b18c = 	VLIST	0,%d

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045ae73
    PUSH EAX                            ; 0045ae76
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045ae77 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ae7c
    MOV dword ptr [EBP + -0x18],0x0     ; 0045ae7f
        ;   Label: LAB_0045ae7f
    JMP 0x0045ae8e                      ; 0045ae86 | LAB_0045ae8e
        ;   XREF to: 0045ae8e (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ae88
        ;   Label: LAB_0045ae88
    INC dword ptr [EBP + -0x18]         ; 0045ae8b
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045ae8e
        ;   Label: LAB_0045ae8e
    CMP EAX,dword ptr [0x01626408]      ; 0045ae91 | int g_VertexCount
    JGE 0x0045af33                      ; 0045ae97 | LAB_0045af33
        ;   XREF to: 0045af33 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045ae9d
    FLD float ptr [EAX + 0x162640c]     ; 0045aea1 | SVertexData[20000] g_LoadedVertices
    FMUL double ptr [0x0061b19e]        ; 0045aea7 | double g_CoordinateMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045aead
    FMULP                               ; 0045aeb0
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045aeb2 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x58]       ; 0045aeb7
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045aeba
    FLD float ptr [EAX + 0x1626410]     ; 0045aebe | DAT_01626410
    FMUL double ptr [0x0061b19e]        ; 0045aec4 | double g_CoordinateMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045aeca
    FMULP                               ; 0045aecd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045aecf | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x54]       ; 0045aed4
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045aed7
    FLD float ptr [EAX + 0x1626414]     ; 0045aedb | g_LoadedVertices[0].vertex.z
    FMUL double ptr [0x0061b19e]        ; 0045aee1 | double g_CoordinateMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045aee7
    FMULP                               ; 0045aeea
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045aeec | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x50]       ; 0045aef1
    CMP dword ptr [EBP + 0x20],0x0      ; 0045aef4
    JZ 0x0045af10                       ; 0045aef8 | LAB_0045af10
        ;   XREF to: 0045af10 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045aefa
    PUSH EAX                            ; 0045aefd
    PUSH 0xc                            ; 0045aefe
    PUSH 0x1                            ; 0045af00
    LEA EAX,[EBP + -0x58]               ; 0045af02
    PUSH EAX                            ; 0045af05
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045af06 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045af0b
    JMP 0x0045af2e                      ; 0045af0e | LAB_0045af2e
        ;   XREF to: 0045af2e (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x50]     ; 0045af10
        ;   Label: LAB_0045af10
    PUSH EAX                            ; 0045af13
    MOV EAX,dword ptr [EBP + -0x54]     ; 0045af14
    PUSH EAX                            ; 0045af17
    MOV EAX,dword ptr [EBP + -0x58]     ; 0045af18
    PUSH EAX                            ; 0045af1b
    MOV EAX,0x61b1a6                    ; 0045af1c | = "\tVERTEX\t%d,%d,%d\n" | s_VERTEX_d_d_d_0061b1a6 = 	VERTEX	%d,%d,%d

    PUSH EAX                            ; 0045af21 | = "\tVERTEX\t%d,%d,%d\n" | s_VERTEX_d_d_d_0061b1a6 = 	VERTEX	%d,%d,%d

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045af22
    PUSH EAX                            ; 0045af25
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045af26 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045af2b
    JMP 0x0045ae88                      ; 0045af2e | LAB_0045ae88
        ;   Label: LAB_0045af2e
        ;   XREF to: 0045ae88 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c0],0x0      ; 0045af33 | int g_GouraudShadingEnabled
        ;   Label: LAB_0045af33
    JZ 0x0045afe2                       ; 0045af3a | LAB_0045afe2
        ;   XREF to: 0045afe2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4c],0x3     ; 0045af40
    MOV dword ptr [EBP + -0x48],0x0     ; 0045af47
    MOV EAX,[0x01626408]                ; 0045af4e | int g_VertexCount
    MOV dword ptr [EBP + -0x44],EAX     ; 0045af53
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045af56
    PUSH EAX                            ; 0045af59
    PUSH 0xc                            ; 0045af5a
    PUSH 0x1                            ; 0045af5c
    LEA EAX,[EBP + -0x4c]               ; 0045af5e
    PUSH EAX                            ; 0045af61
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045af62 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045af67
    MOV dword ptr [EBP + -0x18],0x0     ; 0045af6a
    JMP 0x0045af79                      ; 0045af71 | LAB_0045af79
        ;   XREF to: 0045af79 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045af73
        ;   Label: LAB_0045af73
    INC dword ptr [EBP + -0x18]         ; 0045af76
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045af79
        ;   Label: LAB_0045af79
    CMP EAX,dword ptr [0x01626408]      ; 0045af7c | int g_VertexCount
    JGE 0x0045afe2                      ; 0045af82 | LAB_0045afe2
        ;   XREF to: 0045afe2 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045af84
    FLD float ptr [EAX + 0x1687e8c]     ; 0045af88 | SVertexData[20000] g_VertexNormals
    FMUL float ptr [0x0061b1ba]         ; 0045af8e | float g_VertexNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045af94 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x58]       ; 0045af99
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045af9c
    FLD float ptr [EAX + 0x1687e90]     ; 0045afa0 | DAT_01687e90
    FMUL float ptr [0x0061b1ba]         ; 0045afa6 | float g_VertexNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045afac | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x54]       ; 0045afb1
    IMUL EAX,dword ptr [EBP + -0x18],0x14 ; 0045afb4
    FLD float ptr [EAX + 0x1687e94]     ; 0045afb8 | DAT_01687e94
    FMUL float ptr [0x0061b1ba]         ; 0045afbe | float g_VertexNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045afc4 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x50]       ; 0045afc9
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045afcc
    PUSH EAX                            ; 0045afcf
    PUSH 0xc                            ; 0045afd0
    PUSH 0x1                            ; 0045afd2
    LEA EAX,[EBP + -0x58]               ; 0045afd4
    PUSH EAX                            ; 0045afd7
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045afd8 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045afdd
    JMP 0x0045af73                      ; 0045afe0 | LAB_0045af73
        ;   XREF to: 0045af73 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x59     ; 0045afe2
        ;   Label: LAB_0045afe2
    JZ 0x0045afee                       ; 0045afe6 | LAB_0045afee
        ;   XREF to: 0045afee (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x5a     ; 0045afe8
    JNZ 0x0045b036                      ; 0045afec | LAB_0045b036
        ;   XREF to: 0045b036 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x34],0x17    ; 0045afee
        ;   Label: LAB_0045afee
    MOV dword ptr [EBP + -0x30],0x0     ; 0045aff5
    MOV EAX,[0x01626408]                ; 0045affc | int g_VertexCount
    MOV dword ptr [EBP + -0x2c],EAX     ; 0045b001
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b004
    JZ 0x0045b020                       ; 0045b008 | LAB_0045b020
        ;   XREF to: 0045b020 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b00a
    PUSH EAX                            ; 0045b00d
    PUSH 0xc                            ; 0045b00e
    PUSH 0x1                            ; 0045b010
    LEA EAX,[EBP + -0x34]               ; 0045b012
    PUSH EAX                            ; 0045b015
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b016 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b01b
    JMP 0x0045b036                      ; 0045b01e | LAB_0045b036
        ;   XREF to: 0045b036 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045b020
        ;   Label: LAB_0045b020
    PUSH EAX                            ; 0045b023
    MOV EAX,0x61b1be                    ; 0045b024 | = "\tZBUFFERPOLY\t0,%d\n\n" | s_ZBUFFERPOLY_0_d_0061b1be = 	ZBUFFERPOLY	0,%d


    PUSH EAX                            ; 0045b029 | = "\tZBUFFERPOLY\t0,%d\n\n" | s_ZBUFFERPOLY_0_d_0061b1be = 	ZBUFFERPOLY	0,%d


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b02a
    PUSH EAX                            ; 0045b02d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b02e | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045b033
    MOV dword ptr [0x01626368],0xffffffff ; 0045b036 | int g_EditorColorIndex
        ;   Label: LAB_0045b036
    MOV byte ptr [0x01626370],0x0       ; 0045b040 | char[80] g_TempTextureName
    MOV dword ptr [EBP + -0x18],0x0     ; 0045b047
    JMP 0x0045b056                      ; 0045b04e | LAB_0045b056
        ;   XREF to: 0045b056 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045b050
        ;   Label: LAB_0045b050
    INC dword ptr [EBP + -0x18]         ; 0045b053
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045b056
        ;   Label: LAB_0045b056
    CMP EAX,dword ptr [0x016e990c]      ; 0045b059 | int g_PolygonCount
    JGE 0x0045b7d6                      ; 0045b05f | LAB_0045b7d6
        ;   XREF to: 0045b7d6 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b065
    MOV EDX,0x16e9910                   ; 0045b06c | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b071
    PUSH EAX                            ; 0045b073
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045b074 | void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045b079
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b07c
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 0045b083 | DAT_016e99b4
    MOV dword ptr [EBP + -0x6c],EAX     ; 0045b089
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b08c
    FLD float ptr [EAX + 0x16e99b8]     ; 0045b093 | DAT_016e99b8
    FMUL double ptr [0x0061b1d6]        ; 0045b099 | double g_NormalVectorMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b09f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x68]       ; 0045b0a4
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b0a7
    FLD float ptr [EAX + 0x16e99bc]     ; 0045b0ae | DAT_016e99bc
    FMUL double ptr [0x0061b1d6]        ; 0045b0b4 | double g_NormalVectorMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b0ba | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x64]       ; 0045b0bf
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b0c2
    FLD float ptr [EAX + 0x16e99c0]     ; 0045b0c9 | DAT_016e99c0
    FMUL double ptr [0x0061b1d6]        ; 0045b0cf | double g_NormalVectorMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b0d5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x60]       ; 0045b0da
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b0dd
    FLD float ptr [EAX + 0x16e99c4]     ; 0045b0e4 | DAT_016e99c4
    FMUL double ptr [0x0061b1d6]        ; 0045b0ea | double g_NormalVectorMultiplier
    FMUL double ptr [0x0061b1de]        ; 0045b0f0 | double g_PlaneDistanceMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045b0f6
    FMULP                               ; 0045b0f9
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b0fb | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x5c]       ; 0045b100
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b103
    CMP dword ptr [EAX + 0x16e9910],0x1 ; 0045b10a | SShapeEditorPolygon[20000] g_ModelPolygonData
    JNZ 0x0045b2b2                      ; 0045b111 | LAB_0045b2b2
        ;   XREF to: 0045b2b2 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b117
    MOV EAX,[0x01626368]                ; 0045b11e | int g_EditorColorIndex
    CMP EAX,dword ptr [EDX + 0x16e9a8c] ; 0045b123 | DAT_016e9a8c
    JZ 0x0045b186                       ; 0045b129 | LAB_0045b186
        ;   XREF to: 0045b186 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x20],0xa     ; 0045b12b
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b132
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 0045b139 | DAT_016e9a8c
    MOV dword ptr [EBP + -0x1c],EAX     ; 0045b13f
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b142
    JZ 0x0045b15e                       ; 0045b146 | LAB_0045b15e
        ;   XREF to: 0045b15e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b148
    PUSH EAX                            ; 0045b14b
    PUSH 0x8                            ; 0045b14c
    PUSH 0x1                            ; 0045b14e
    LEA EAX,[EBP + -0x20]               ; 0045b150
    PUSH EAX                            ; 0045b153
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b154 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b159
    JMP 0x0045b174                      ; 0045b15c | LAB_0045b174
        ;   XREF to: 0045b174 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045b15e
        ;   Label: LAB_0045b15e
    PUSH EAX                            ; 0045b161
    MOV EAX,0x61b1e6                    ; 0045b162 | = "\tCOLOR\t%d\n" | s_COLOR_d_0061b1e6 = 	COLOR	%d

    PUSH EAX                            ; 0045b167 | = "\tCOLOR\t%d\n" | s_COLOR_d_0061b1e6 = 	COLOR	%d

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b168
    PUSH EAX                            ; 0045b16b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b16c | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045b171
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b174
        ;   Label: LAB_0045b174
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 0045b17b | DAT_016e9a8c
    MOV [0x01626368],EAX                ; 0045b181 | int g_EditorColorIndex
    CMP dword ptr [EBP + 0x18],0x58     ; 0045b186
        ;   Label: LAB_0045b186
    JZ 0x0045b1a7                       ; 0045b18a | LAB_0045b1a7
        ;   XREF to: 0045b1a7 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c0],0x0      ; 0045b18c | int g_GouraudShadingEnabled
    JZ 0x0045b19e                       ; 0045b193 | LAB_0045b19e
        ;   XREF to: 0045b19e (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x1b    ; 0045b195
    JMP 0x0045b1a5                      ; 0045b19c | LAB_0045b1a5
        ;   XREF to: 0045b1a5 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x19    ; 0045b19e
        ;   Label: LAB_0045b19e
    JMP 0x0045b1c0                      ; 0045b1a5 | LAB_0045b1c0
        ;   Label: LAB_0045b1a5
        ;   XREF to: 0045b1c0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c0],0x0      ; 0045b1a7 | int g_GouraudShadingEnabled
        ;   Label: LAB_0045b1a7
    JZ 0x0045b1b9                       ; 0045b1ae | LAB_0045b1b9
        ;   XREF to: 0045b1b9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x6     ; 0045b1b0
    JMP 0x0045b1c0                      ; 0045b1b7 | LAB_0045b1c0
        ;   XREF to: 0045b1c0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x5     ; 0045b1b9
        ;   Label: LAB_0045b1b9
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b1c0
        ;   Label: LAB_0045b1c0
    JZ 0x0045b205                       ; 0045b1c4 | LAB_0045b205
        ;   XREF to: 0045b205 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b1c6
    PUSH EAX                            ; 0045b1c9
    PUSH 0x18                           ; 0045b1ca
    PUSH 0x1                            ; 0045b1cc
    LEA EAX,[EBP + -0x70]               ; 0045b1ce
    PUSH EAX                            ; 0045b1d1
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b1d2 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b1d7
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b1da
    PUSH EAX                            ; 0045b1dd
    PUSH 0x4                            ; 0045b1de
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0045b1e0
    PUSH EAX                            ; 0045b1e3
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b1e4
    MOV EDX,0x16e9910                   ; 0045b1eb | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b1f0
    ADD EAX,0xb8                        ; 0045b1f2
    PUSH EAX                            ; 0045b1f7
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b1f8 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b1fd
    JMP 0x0045b2ad                      ; 0045b200 | LAB_0045b2ad
        ;   XREF to: 0045b2ad (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x70],0x19    ; 0045b205
        ;   Label: LAB_0045b205
    JNZ 0x0045b21d                      ; 0045b209 | LAB_0045b21d
        ;   XREF to: 0045b21d (CONDITIONAL_JUMP)
    MOV EAX,0x61b1f1                    ; 0045b20b | = "\tZFACET" | s_ZFACET_0061b1f1 = 	ZFACET
    PUSH EAX                            ; 0045b210 | = "\tZFACET" | s_ZFACET_0061b1f1 = 	ZFACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b211
    PUSH EAX                            ; 0045b214
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b215 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b21a
    CMP dword ptr [EBP + -0x70],0x5     ; 0045b21d
        ;   Label: LAB_0045b21d
    JNZ 0x0045b235                      ; 0045b221 | LAB_0045b235
        ;   XREF to: 0045b235 (CONDITIONAL_JUMP)
    MOV EAX,0x61b1f9                    ; 0045b223 | = "\tFACET" | s_FACET_0061b1f9 = 	FACET
    PUSH EAX                            ; 0045b228 | = "\tFACET" | s_FACET_0061b1f9 = 	FACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b229
    PUSH EAX                            ; 0045b22c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b22d | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b232
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0045b235
        ;   Label: LAB_0045b235
    PUSH EAX                            ; 0045b238
    MOV EAX,dword ptr [EBP + -0x60]     ; 0045b239
    PUSH EAX                            ; 0045b23c
    MOV EAX,dword ptr [EBP + -0x64]     ; 0045b23d
    PUSH EAX                            ; 0045b240
    MOV EAX,dword ptr [EBP + -0x68]     ; 0045b241
    PUSH EAX                            ; 0045b244
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0045b245
    PUSH EAX                            ; 0045b248
    MOV EAX,0x61b200                    ; 0045b249 | = "%d\t%d,%d,%d,%d" | s_d_d_d_d_d_0061b200 = %d	%d,%d,%d,%d
    PUSH EAX                            ; 0045b24e | = "%d\t%d,%d,%d,%d" | s_d_d_d_d_d_0061b200 = %d	%d,%d,%d,%d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b24f
    PUSH EAX                            ; 0045b252
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b253 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 0045b258
    MOV dword ptr [EBP + -0x14],0x0     ; 0045b25b
    JMP 0x0045b26a                      ; 0045b262 | LAB_0045b26a
        ;   XREF to: 0045b26a (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b264
        ;   Label: LAB_0045b264
    INC dword ptr [EBP + -0x14]         ; 0045b267
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b26a
        ;   Label: LAB_0045b26a
    CMP EAX,dword ptr [EBP + -0x6c]     ; 0045b26d
    JGE 0x0045b29b                      ; 0045b270 | LAB_0045b29b
        ;   XREF to: 0045b29b (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b272
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b279
    SHL EAX,0x2                         ; 0045b27c
    ADD EAX,EDX                         ; 0045b27f
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045b281 | DAT_016e99c8
    MOV EAX,0x61b20f                    ; 0045b287 | = ",%d" | s_d_0061b20f = ,%d
    PUSH EAX                            ; 0045b28c | = ",%d" | s_d_0061b20f = ,%d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b28d
    PUSH EAX                            ; 0045b290
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b291 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045b296
    JMP 0x0045b264                      ; 0045b299 | LAB_0045b264
        ;   XREF to: 0045b264 (UNCONDITIONAL_JUMP)
    MOV EAX,0x61b213                    ; 0045b29b | = "\n" | s_anon_0061b213 =

        ;   Label: LAB_0045b29b
    PUSH EAX                            ; 0045b2a0 | = "\n" | s_anon_0061b213 =

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b2a1
    PUSH EAX                            ; 0045b2a4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b2a5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b2aa
    JMP 0x0045b7d1                      ; 0045b2ad | LAB_0045b7d1
        ;   Label: LAB_0045b2ad
        ;   XREF to: 0045b7d1 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b2b2
        ;   Label: LAB_0045b2b2
    MOV EAX,0x16e9910                   ; 0045b2b9 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b2be
    ADD EAX,0x4                         ; 0045b2c0
    PUSH EAX                            ; 0045b2c3
    MOV EAX,0x1626370                   ; 0045b2c4 | char[80] g_TempTextureName
    PUSH EAX                            ; 0045b2c9 | char[80] g_TempTextureName
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0045b2ca | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b2cf
    TEST EAX,EAX                        ; 0045b2d2
    JZ 0x0045b37b                       ; 0045b2d4 | LAB_0045b37b
        ;   XREF to: 0045b37b (CONDITIONAL_JUMP)
    IMUL EDI,dword ptr [EBP + -0x18],0x184 ; 0045b2da
    MOV ESI,0x16e9910                   ; 0045b2e1 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD ESI,EDI                         ; 0045b2e6
    ADD ESI,0x4                         ; 0045b2e8
    MOV EDI,0x1626370                   ; 0045b2eb | char[80] g_TempTextureName
    PUSH EDI                            ; 0045b2f0 | char[80] g_TempTextureName
    MOV AL,byte ptr [ESI]               ; 0045b2f1 | DAT_016e9914
        ;   Label: LAB_0045b2f1
    MOV byte ptr [EDI],AL               ; 0045b2f3 | char[80] g_TempTextureName
    CMP AL,0x0                          ; 0045b2f5
    JZ 0x0045b309                       ; 0045b2f7 | LAB_0045b309
        ;   XREF to: 0045b309 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045b2f9 | DAT_016e9915
    ADD ESI,0x2                         ; 0045b2fc
    MOV byte ptr [EDI + 0x1],AL         ; 0045b2ff | DAT_01626371
    ADD EDI,0x2                         ; 0045b302
    CMP AL,0x0                          ; 0045b305
    JNZ 0x0045b2f1                      ; 0045b307 | LAB_0045b2f1
        ;   XREF to: 0045b2f1 (CONDITIONAL_JUMP)
    POP EDI                             ; 0045b309
        ;   Label: LAB_0045b309
    MOV ESI,0x1626370                   ; 0045b30a | char[80] g_TempTextureName
    LEA EDI,[EBP + -0x80]               ; 0045b30f
    PUSH EDI                            ; 0045b312
    MOV AL,byte ptr [ESI]               ; 0045b313 | char[80] g_TempTextureName
        ;   Label: LAB_0045b313
    MOV byte ptr [EDI],AL               ; 0045b315
    CMP AL,0x0                          ; 0045b317
    JZ 0x0045b32b                       ; 0045b319 | LAB_0045b32b
        ;   XREF to: 0045b32b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045b31b | DAT_01626371
    ADD ESI,0x2                         ; 0045b31e
    MOV byte ptr [EDI + 0x1],AL         ; 0045b321
    ADD EDI,0x2                         ; 0045b324
    CMP AL,0x0                          ; 0045b327
    JNZ 0x0045b313                      ; 0045b329 | LAB_0045b313
        ;   XREF to: 0045b313 (CONDITIONAL_JUMP)
    POP EDI                             ; 0045b32b
        ;   Label: LAB_0045b32b
    MOV dword ptr [EBP + 0xffffff7c],0x0 ; 0045b32c
    MOV dword ptr [EBP + 0xffffff78],0xd ; 0045b336
    CMP dword ptr [EBP + 0x24],0x59     ; 0045b340
    JNZ 0x0045b37b                      ; 0045b344 | LAB_0045b37b
        ;   XREF to: 0045b37b (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b346
    JZ 0x0045b365                       ; 0045b34a | LAB_0045b365
        ;   XREF to: 0045b365 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b34c
    PUSH EAX                            ; 0045b34f
    PUSH 0x18                           ; 0045b350
    PUSH 0x1                            ; 0045b352
    LEA EAX,[EBP + 0xffffff78]          ; 0045b354
    PUSH EAX                            ; 0045b35a
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b35b | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b360
    JMP 0x0045b37b                      ; 0045b363 | LAB_0045b37b
        ;   XREF to: 0045b37b (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x80]               ; 0045b365
        ;   Label: LAB_0045b365
    PUSH EAX                            ; 0045b368
    MOV EAX,0x61b215                    ; 0045b369 | = "\tTEXTURE\t\"%s\"\n" | s_TEXTURE_s_0061b215 = 	TEXTURE	"%s"

    PUSH EAX                            ; 0045b36e | = "\tTEXTURE\t\"%s\"\n" | s_TEXTURE_s_0061b215 = 	TEXTURE	"%s"

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b36f
    PUSH EAX                            ; 0045b372
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b373 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045b378
    CMP dword ptr [EBP + 0x18],0x58     ; 0045b37b
        ;   Label: LAB_0045b37b
    JNZ 0x0045b38d                      ; 0045b37f | LAB_0045b38d
        ;   XREF to: 0045b38d (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0xe     ; 0045b381
    JMP 0x0045b4f0                      ; 0045b388 | LAB_0045b4f0
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x54     ; 0045b38d
        ;   Label: LAB_0045b38d
    JNZ 0x0045b39f                      ; 0045b391 | LAB_0045b39f
        ;   XREF to: 0045b39f (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x11    ; 0045b393
    JMP 0x0045b4f0                      ; 0045b39a | LAB_0045b4f0
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x52     ; 0045b39f
        ;   Label: LAB_0045b39f
    JNZ 0x0045b3b1                      ; 0045b3a3 | LAB_0045b3b1
        ;   XREF to: 0045b3b1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x33    ; 0045b3a5
    JMP 0x0045b4f0                      ; 0045b3ac | LAB_0045b4f0
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x47     ; 0045b3b1
        ;   Label: LAB_0045b3b1
    JNZ 0x0045b43e                      ; 0045b3b5 | LAB_0045b43e
        ;   XREF to: 0045b43e (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x34    ; 0045b3bb
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b3c2
    FLD float ptr [EAX + 0x16e99b8]     ; 0045b3c9 | DAT_016e99b8
    FMUL double ptr [0x0061b226]        ; 0045b3cf | double g_GiantObjectNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b3d5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x68]       ; 0045b3da
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b3dd
    FLD float ptr [EAX + 0x16e99bc]     ; 0045b3e4 | DAT_016e99bc
    FMUL double ptr [0x0061b226]        ; 0045b3ea | double g_GiantObjectNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b3f0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x64]       ; 0045b3f5
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b3f8
    FLD float ptr [EAX + 0x16e99c0]     ; 0045b3ff | DAT_016e99c0
    FMUL double ptr [0x0061b226]        ; 0045b405 | double g_GiantObjectNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b40b | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x60]       ; 0045b410
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b413
    FLD float ptr [EAX + 0x16e99c4]     ; 0045b41a | DAT_016e99c4
    FMUL double ptr [0x0061b226]        ; 0045b420 | double g_GiantObjectNormalMultiplier
    FMUL double ptr [0x0061b22e]        ; 0045b426 | double g_GiantObjectPlaneDistanceMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045b42c
    FMULP                               ; 0045b42f
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b431 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x5c]       ; 0045b436
    JMP 0x0045b4f0                      ; 0045b439 | LAB_0045b4f0
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x48     ; 0045b43e
        ;   Label: LAB_0045b43e
    JNZ 0x0045b4c8                      ; 0045b442 | LAB_0045b4c8
        ;   XREF to: 0045b4c8 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0xe     ; 0045b448
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b44f
    FLD float ptr [EAX + 0x16e99b8]     ; 0045b456 | DAT_016e99b8
    FMUL double ptr [0x0061b236]        ; 0045b45c | double g_HugeFlatTrackNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b462 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x68]       ; 0045b467
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b46a
    FLD float ptr [EAX + 0x16e99bc]     ; 0045b471 | DAT_016e99bc
    FMUL double ptr [0x0061b236]        ; 0045b477 | double g_HugeFlatTrackNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b47d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x64]       ; 0045b482
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b485
    FLD float ptr [EAX + 0x16e99c0]     ; 0045b48c | DAT_016e99c0
    FMUL double ptr [0x0061b236]        ; 0045b492 | double g_HugeFlatTrackNormalMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b498 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x60]       ; 0045b49d
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b4a0
    FLD float ptr [EAX + 0x16e99c4]     ; 0045b4a7 | DAT_016e99c4
    FMUL double ptr [0x0061b236]        ; 0045b4ad | double g_HugeFlatTrackNormalMultiplier
    FMUL double ptr [0x0061b23e]        ; 0045b4b3 | double g_HugeFlatTrackPlaneDistanceMultiplier
    FLD float ptr [EBP + -0x4]          ; 0045b4b9
    FMULP                               ; 0045b4bc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b4be | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x5c]       ; 0045b4c3
    JMP 0x0045b4f0                      ; 0045b4c6 | LAB_0045b4f0
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x5a     ; 0045b4c8
        ;   Label: LAB_0045b4c8
    JZ 0x0045b4e9                       ; 0045b4cc | LAB_0045b4e9
        ;   XREF to: 0045b4e9 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528c0],0x0      ; 0045b4ce | int g_GouraudShadingEnabled
    JZ 0x0045b4e0                       ; 0045b4d5 | LAB_0045b4e0
        ;   XREF to: 0045b4e0 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x29    ; 0045b4d7
    JMP 0x0045b4e7                      ; 0045b4de | LAB_0045b4e7
        ;   XREF to: 0045b4e7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x18    ; 0045b4e0
        ;   Label: LAB_0045b4e0
    JMP 0x0045b4f0                      ; 0045b4e7 | LAB_0045b4f0
        ;   Label: LAB_0045b4e7
        ;   XREF to: 0045b4f0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x22    ; 0045b4e9
        ;   Label: LAB_0045b4e9
    CMP dword ptr [EBP + -0x70],0x29    ; 0045b4f0
        ;   Label: LAB_0045b4f0
    JNZ 0x0045b5b5                      ; 0045b4f4 | LAB_0045b5b5
        ;   XREF to: 0045b5b5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff1c],0x0 ; 0045b4fa
    MOV dword ptr [EBP + 0xffffff18],0x0 ; 0045b504
    JMP 0x0045b51c                      ; 0045b50e | LAB_0045b51c
        ;   XREF to: 0045b51c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xffffff18] ; 0045b510
        ;   Label: LAB_0045b510
    INC dword ptr [EBP + 0xffffff18]    ; 0045b516
    MOV EAX,dword ptr [EBP + 0xffffff18] ; 0045b51c
        ;   Label: LAB_0045b51c
    CMP EAX,dword ptr [EBP + -0x6c]     ; 0045b522
    JGE 0x0045b5a5                      ; 0045b525 | LAB_0045b5a5
        ;   XREF to: 0045b5a5 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b52b
    MOV EAX,dword ptr [EBP + 0xffffff18] ; 0045b532
    SHL EAX,0x2                         ; 0045b538
    ADD EAX,EDX                         ; 0045b53b
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045b53d | DAT_016e99c8
    MOV dword ptr [EBP + 0xffffff14],EAX ; 0045b543
    IMUL EAX,dword ptr [EBP + 0xffffff14],0x14 ; 0045b549
    TEST dword ptr [EAX + 0x1687e8c],0x7fffffff ; 0045b550 | SVertexData[20000] g_VertexNormals
    JZ 0x0045b566                       ; 0045b55a | LAB_0045b566
        ;   XREF to: 0045b566 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff1c],0x1 ; 0045b55c
    IMUL EAX,dword ptr [EBP + 0xffffff14],0x14 ; 0045b566
        ;   Label: LAB_0045b566
    TEST dword ptr [EAX + 0x1687e90],0x7fffffff ; 0045b56d | DAT_01687e90
    JZ 0x0045b583                       ; 0045b577 | LAB_0045b583
        ;   XREF to: 0045b583 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff1c],0x1 ; 0045b579
    IMUL EAX,dword ptr [EBP + 0xffffff14],0x14 ; 0045b583
        ;   Label: LAB_0045b583
    TEST dword ptr [EAX + 0x1687e94],0x7fffffff ; 0045b58a | DAT_01687e94
    JZ 0x0045b5a0                       ; 0045b594 | LAB_0045b5a0
        ;   XREF to: 0045b5a0 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff1c],0x1 ; 0045b596
    JMP 0x0045b510                      ; 0045b5a0 | LAB_0045b510
        ;   Label: LAB_0045b5a0
        ;   XREF to: 0045b510 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xffffff1c],0x0 ; 0045b5a5
        ;   Label: LAB_0045b5a5
    JNZ 0x0045b5b5                      ; 0045b5ac | LAB_0045b5b5
        ;   XREF to: 0045b5b5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x70],0x18    ; 0045b5ae
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b5b5
        ;   Label: LAB_0045b5b5
    JZ 0x0045b692                       ; 0045b5b9 | LAB_0045b692
        ;   XREF to: 0045b692 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b5bf
    PUSH EAX                            ; 0045b5c2
    PUSH 0x18                           ; 0045b5c3
    PUSH 0x1                            ; 0045b5c5
    LEA EAX,[EBP + -0x70]               ; 0045b5c7
    PUSH EAX                            ; 0045b5ca
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b5cb | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b5d0
    MOV dword ptr [EBP + -0x14],0x0     ; 0045b5d3
    JMP 0x0045b5e2                      ; 0045b5da | LAB_0045b5e2
        ;   XREF to: 0045b5e2 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b5dc
        ;   Label: LAB_0045b5dc
    INC dword ptr [EBP + -0x14]         ; 0045b5df
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b5e2
        ;   Label: LAB_0045b5e2
    CMP EAX,dword ptr [EBP + -0x6c]     ; 0045b5e5
    JGE 0x0045b68d                      ; 0045b5e8 | LAB_0045b68d
        ;   XREF to: 0045b68d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b5ee
    PUSH EAX                            ; 0045b5f1
    PUSH 0x4                            ; 0045b5f2
    PUSH 0x1                            ; 0045b5f4
    IMUL EAX,dword ptr [EBP + -0x18],0x184 ; 0045b5f6
    MOV EDX,0x16e9910                   ; 0045b5fd | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b602
    MOV EDX,dword ptr [EBP + -0x14]     ; 0045b604
    SHL EDX,0x2                         ; 0045b607
    ADD EAX,0xb8                        ; 0045b60a
    ADD EAX,EDX                         ; 0045b60f
    PUSH EAX                            ; 0045b611
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b612 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b617
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b61a
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b621
    SHL EAX,0x2                         ; 0045b624
    ADD EAX,EDX                         ; 0045b627
    FLD float ptr [EAX + 0x16e9a08]     ; 0045b629 | DAT_016e9a08
    FMUL double ptr [0x0061b246]        ; 0045b62f | double g_TextureCoordinateMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b635 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x10]       ; 0045b63a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b63d
    PUSH EAX                            ; 0045b640
    PUSH 0x4                            ; 0045b641
    PUSH 0x1                            ; 0045b643
    LEA EAX,[EBP + -0x10]               ; 0045b645
    PUSH EAX                            ; 0045b648
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b649 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b64e
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b651
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b658
    SHL EAX,0x2                         ; 0045b65b
    ADD EAX,EDX                         ; 0045b65e
    FLD float ptr [EAX + 0x16e9a48]     ; 0045b660 | DAT_016e9a48
    FMUL double ptr [0x0061b246]        ; 0045b666 | double g_TextureCoordinateMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b66c | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x10]       ; 0045b671
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b674
    PUSH EAX                            ; 0045b677
    PUSH 0x4                            ; 0045b678
    PUSH 0x1                            ; 0045b67a
    LEA EAX,[EBP + -0x10]               ; 0045b67c
    PUSH EAX                            ; 0045b67f
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b680 | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b685
    JMP 0x0045b5dc                      ; 0045b688 | LAB_0045b5dc
        ;   XREF to: 0045b5dc (UNCONDITIONAL_JUMP)
    JMP 0x0045b7d1                      ; 0045b68d | LAB_0045b7d1
        ;   Label: LAB_0045b68d
        ;   XREF to: 0045b7d1 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x70],0x5     ; 0045b692
        ;   Label: LAB_0045b692
    JNZ 0x0045b6aa                      ; 0045b696 | LAB_0045b6aa
        ;   XREF to: 0045b6aa (CONDITIONAL_JUMP)
    MOV EAX,0x61b24e                    ; 0045b698 | = "\tFACET" | s_FACET_0061b24e = 	FACET
    PUSH EAX                            ; 0045b69d | = "\tFACET" | s_FACET_0061b24e = 	FACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b69e
    PUSH EAX                            ; 0045b6a1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b6a2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b6a7
    CMP dword ptr [EBP + -0x70],0x19    ; 0045b6aa
        ;   Label: LAB_0045b6aa
    JNZ 0x0045b6c2                      ; 0045b6ae | LAB_0045b6c2
        ;   XREF to: 0045b6c2 (CONDITIONAL_JUMP)
    MOV EAX,0x61b255                    ; 0045b6b0 | = "\tZFACET" | s_ZFACET_0061b255 = 	ZFACET
    PUSH EAX                            ; 0045b6b5 | = "\tZFACET" | s_ZFACET_0061b255 = 	ZFACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b6b6
    PUSH EAX                            ; 0045b6b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b6ba | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b6bf
    CMP dword ptr [EBP + -0x70],0xe     ; 0045b6c2
        ;   Label: LAB_0045b6c2
    JNZ 0x0045b6da                      ; 0045b6c6 | LAB_0045b6da
        ;   XREF to: 0045b6da (CONDITIONAL_JUMP)
    MOV EAX,0x61b25d                    ; 0045b6c8 | = "\tFACET" | s_FACET_0061b25d = 	FACET
    PUSH EAX                            ; 0045b6cd | = "\tFACET" | s_FACET_0061b25d = 	FACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b6ce
    PUSH EAX                            ; 0045b6d1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b6d2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b6d7
    CMP dword ptr [EBP + -0x70],0x18    ; 0045b6da
        ;   Label: LAB_0045b6da
    JNZ 0x0045b6f2                      ; 0045b6de | LAB_0045b6f2
        ;   XREF to: 0045b6f2 (CONDITIONAL_JUMP)
    MOV EAX,0x61b264                    ; 0045b6e0 | = "\tZFACET" | s_ZFACET_0061b264 = 	ZFACET
    PUSH EAX                            ; 0045b6e5 | = "\tZFACET" | s_ZFACET_0061b264 = 	ZFACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b6e6
    PUSH EAX                            ; 0045b6e9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b6ea | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b6ef
    CMP dword ptr [EBP + -0x70],0x22    ; 0045b6f2
        ;   Label: LAB_0045b6f2
    JNZ 0x0045b70a                      ; 0045b6f6 | LAB_0045b70a
        ;   XREF to: 0045b70a (CONDITIONAL_JUMP)
    MOV EAX,0x61b26c                    ; 0045b6f8 | = "\tZPFACET" | s_ZPFACET_0061b26c = 	ZPFACET
    PUSH EAX                            ; 0045b6fd | = "\tZPFACET" | s_ZPFACET_0061b26c = 	ZPFACET
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b6fe
    PUSH EAX                            ; 0045b701
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b702 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b707
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0045b70a
        ;   Label: LAB_0045b70a
    PUSH EAX                            ; 0045b70d
    MOV EAX,dword ptr [EBP + -0x60]     ; 0045b70e
    PUSH EAX                            ; 0045b711
    MOV EAX,dword ptr [EBP + -0x64]     ; 0045b712
    PUSH EAX                            ; 0045b715
    MOV EAX,dword ptr [EBP + -0x68]     ; 0045b716
    PUSH EAX                            ; 0045b719
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0045b71a
    PUSH EAX                            ; 0045b71d
    MOV EAX,0x61b275                    ; 0045b71e | = "%dTMAP\t%d,%d,%d,%d" | s_dTMAP_d_d_d_d_0061b275 = %dTMAP	%d,%d,%d,%d
    PUSH EAX                            ; 0045b723 | = "%dTMAP\t%d,%d,%d,%d" | s_dTMAP_d_d_d_d_0061b275 = %dTMAP	%d,%d,%d,%d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b724
    PUSH EAX                            ; 0045b727
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b728 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 0045b72d
    MOV dword ptr [EBP + -0x14],0x0     ; 0045b730
    JMP 0x0045b73f                      ; 0045b737 | LAB_0045b73f
        ;   XREF to: 0045b73f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b739
        ;   Label: LAB_0045b739
    INC dword ptr [EBP + -0x14]         ; 0045b73c
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b73f
        ;   Label: LAB_0045b73f
    CMP EAX,dword ptr [EBP + -0x6c]     ; 0045b742
    JGE 0x0045b7bf                      ; 0045b745 | LAB_0045b7bf
        ;   XREF to: 0045b7bf (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b747
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b74e
    SHL EAX,0x2                         ; 0045b751
    ADD EAX,EDX                         ; 0045b754
    FLD float ptr [EAX + 0x16e9a48]     ; 0045b756 | DAT_016e9a48
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b75c | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff20]  ; 0045b761
    PUSH dword ptr [EBP + 0xffffff20]   ; 0045b767
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b76d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b774
    SHL EAX,0x2                         ; 0045b777
    ADD EAX,EDX                         ; 0045b77a
    FLD float ptr [EAX + 0x16e9a08]     ; 0045b77c | DAT_016e9a08
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045b782 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff20]  ; 0045b787
    PUSH dword ptr [EBP + 0xffffff20]   ; 0045b78d
    IMUL EDX,dword ptr [EBP + -0x18],0x184 ; 0045b793
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045b79a
    SHL EAX,0x2                         ; 0045b79d
    ADD EAX,EDX                         ; 0045b7a0
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045b7a2 | DAT_016e99c8
    MOV EAX,0x61b288                    ; 0045b7a8 | = ",%d,%d,%d" | s_d_d_d_0061b288 = ,%d,%d,%d
    PUSH EAX                            ; 0045b7ad | = ",%d,%d,%d" | s_d_d_d_0061b288 = ,%d,%d,%d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b7ae
    PUSH EAX                            ; 0045b7b1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b7b2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045b7b7
    JMP 0x0045b739                      ; 0045b7ba | LAB_0045b739
        ;   XREF to: 0045b739 (UNCONDITIONAL_JUMP)
    MOV EAX,0x61b292                    ; 0045b7bf | = "\n" | s_anon_0061b292 =

        ;   Label: LAB_0045b7bf
    PUSH EAX                            ; 0045b7c4 | = "\n" | s_anon_0061b292 =

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b7c5
    PUSH EAX                            ; 0045b7c8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b7c9 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b7ce
    JMP 0x0045b050                      ; 0045b7d1 | LAB_0045b050
        ;   Label: LAB_0045b7d1
        ;   XREF to: 0045b050 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x18],0x0     ; 0045b7d6
        ;   Label: LAB_0045b7d6
    CMP dword ptr [EBP + 0x20],0x0      ; 0045b7dd
    JZ 0x0045b7f9                       ; 0045b7e1 | LAB_0045b7f9
        ;   XREF to: 0045b7f9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b7e3
    PUSH EAX                            ; 0045b7e6
    PUSH 0x4                            ; 0045b7e7
    PUSH 0x1                            ; 0045b7e9
    LEA EAX,[EBP + -0x18]               ; 0045b7eb
    PUSH EAX                            ; 0045b7ee
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045b7ef | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045b7f4
    JMP 0x0045b82f                      ; 0045b7f7 | LAB_0045b82f
        ;   XREF to: 0045b82f (UNCONDITIONAL_JUMP)
    MOV EAX,0x61b294                    ; 0045b7f9 | = "\tRETURN\n\n" | s_RETURN_0061b294 = 	RETURN


        ;   Label: LAB_0045b7f9
    PUSH EAX                            ; 0045b7fe | = "\tRETURN\n\n" | s_RETURN_0061b294 = 	RETURN


    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b7ff
    PUSH EAX                            ; 0045b802
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b803 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b808
    MOV EAX,0x61b29e                    ; 0045b80b | = "\ncode\tends\n" | s_code_ends_0061b29e =
        ; code	ends

    PUSH EAX                            ; 0045b810 | = "\ncode\tends\n" | s_code_ends_0061b29e =
        ; code	ends

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b811
    PUSH EAX                            ; 0045b814
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b815 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b81a
    MOV EAX,0x61b2aa                    ; 0045b81d | = "\tend\n" | s_end_0061b2aa = 	end

    PUSH EAX                            ; 0045b822 | = "\tend\n" | s_end_0061b2aa = 	end

    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b823
    PUSH EAX                            ; 0045b826
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045b827 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b82c
    PUSH 0x868                          ; 0045b82f
        ;   Label: LAB_0045b82f
    MOV EAX,0x61b2b0                    ; 0045b834 | = "..\\shape\\design.c" | s_shape_design_c_0061b2b0 = ..\shape\design.c
    PUSH EAX                            ; 0045b839 | = "..\\shape\\design.c" | s_shape_design_c_0061b2b0 = ..\shape\design.c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045b83a
    PUSH EAX                            ; 0045b83d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0045b83e | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045b843
    MOV ESP,EBP                         ; 0045b846
        ;   Label: LAB_0045b846
    POP EBP                             ; 0045b848
    POP EDI                             ; 0045b849
    POP ESI                             ; 0045b84a
    POP EBX                             ; 0045b84b
    RET                                 ; 0045b84c

