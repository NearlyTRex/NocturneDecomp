; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram *this_ptr)
;
; Parameters:
; CMultiCram *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_multicramTextures_FUN_0046eb80 at 0046eb92
;
; Referenced Globals:
;   TerminatedCString s_shape_multicrm_cpp_0063d0f1
;   TerminatedCString s_shape_multicrm_cpp_0063d107
;   TerminatedCString s_CMultiCram_run_Out_of_me_0063d11d
;   TerminatedCString s_Found_model_s_0063d13d
;   TerminatedCString s_s_bin_0063d14e
;   TerminatedCString s_s_is_a_new_model_0063d155
;   TerminatedCString s_Sizing_s_to_existing_BIN_0063d168
;   TerminatedCString s_s_mdl_0063d188
;   TerminatedCString s_s_bin_0063d18f
;   TerminatedCString s_s_c_bin_0063d196
;   TerminatedCString s_rb_0063d19f
;   TerminatedCString s_models_0063d1a2
;   TerminatedCString s_shape_multicrm_cpp_0063d1a9
;   TerminatedCString s_Found_clone_of_different_0063d1bf
;   TerminatedCString s_s_c_mdl_0063d1e4
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_exportModelToBIN_FUN_0045aa80
;   shape_design.c_exportModelToMDL_FUN_00459e80
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
;   shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
;   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ee70
        ;   Label: shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
    PUSH ESI                            ; 0053ee71
    PUSH EDI                            ; 0053ee72
    PUSH EBP                            ; 0053ee73
    MOV EBP,ESP                         ; 0053ee74
    SUB ESP,0x114                       ; 0053ee76
    MOV dword ptr [EBP + -0x4],0x0      ; 0053ee7c
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053ee83
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EDX,dword ptr [0x01e528a0]      ; 0053ee88 | g_PartsCount
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ee8e
    MOV dword ptr [EAX],EDX             ; 0053ee91
    MOV dword ptr [EBP + -0xc],0x0      ; 0053ee93
    JMP 0x0053eea2                      ; 0053ee9a
        ;   XREF to: 0053eea2 (UNCONDITIONAL_JUMP)  ; LAB_0053eea2
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ee9c
        ;   Label: LAB_0053ee9c
    INC dword ptr [EBP + -0xc]          ; 0053ee9f
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053eea2
        ;   Label: LAB_0053eea2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053eea5
    CMP EAX,dword ptr [EDX]             ; 0053eea8
    JGE 0x0053ef7d                      ; 0053eeaa
        ;   XREF to: 0053ef7d (CONDITIONAL_JUMP)  ; LAB_0053ef7d
    PUSH 0x42                           ; 0053eeb0
    MOV EAX,0x63d0f1                    ; 0053eeb2 | = "..\\shape\\multicrm.cpp"
    PUSH EAX                            ; 0053eeb7 | = "..\\shape\\multicrm.cpp"
    PUSH 0x1f20dc                       ; 0053eeb8
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0053eebd
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0053eec2
    MOV EDX,dword ptr [EBP + -0xc]      ; 0053eec5
    SHL EDX,0x2                         ; 0053eec8
    ADD EDX,dword ptr [EBP + 0x14]      ; 0053eecb
    MOV dword ptr [EDX + 0x4],EAX       ; 0053eece
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053eed1
    SHL EAX,0x2                         ; 0053eed4
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053eed7
    CMP dword ptr [EAX + 0x4],0x0       ; 0053eeda
    JNZ 0x0053ef02                      ; 0053eede
        ;   XREF to: 0053ef02 (CONDITIONAL_JUMP)  ; LAB_0053ef02
    MOV dword ptr [0x02f0ca48],0x63d107 ; 0053eee0 | g_CurrentFilename | = "..\\shape\\multicrm.cpp"
    MOV dword ptr [0x02f0ca4c],0x43     ; 0053eeea | g_CurrentLineNumber
    MOV EAX,0x63d11d                    ; 0053eef4 | = "CMultiCram::run - Out of memory"
    PUSH EAX                            ; 0053eef9 | = "CMultiCram::run - Out of memory"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053eefa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053eeff
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef02
        ;   Label: LAB_0053ef02
    PUSH EAX                            ; 0053ef05
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef06
    SHL EAX,0x2                         ; 0053ef09
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053ef0c
    PUSH dword ptr [EAX + 0x4]          ; 0053ef0f
    CALL shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 ; 0053ef12
        ;   XREF to: 0048f770 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel * this_ptr, uint part_index)
    ADD ESP,0x8                         ; 0053ef17
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef1a
    SHL EAX,0x2                         ; 0053ef1d
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053ef20
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053ef23
    ADD EAX,0x1f20c8                    ; 0053ef26
    PUSH EAX                            ; 0053ef2b
    MOV EAX,0x63d13d                    ; 0053ef2c | = "Found model : %s"
    PUSH EAX                            ; 0053ef31 | = "Found model : %s"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053ef32
    PUSH EAX                            ; 0053ef38
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053ef39
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053ef3e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053ef41
    PUSH EAX                            ; 0053ef44
    PUSH 0x0                            ; 0053ef45
    LEA EAX,[EBP + 0xfffffef4]          ; 0053ef47
    PUSH EAX                            ; 0053ef4d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053ef4e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053ef53
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053ef56
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    ADD dword ptr [EBP + -0x4],0xb      ; 0053ef5b
    MOV EAX,[0x00679398]                ; 0053ef5f | g_WindowHeight
    SUB EAX,0xb                         ; 0053ef64
    CMP EAX,dword ptr [EBP + -0x4]      ; 0053ef67
    JGE 0x0053ef78                      ; 0053ef6a
        ;   XREF to: 0053ef78 (CONDITIONAL_JUMP)  ; LAB_0053ef78
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053ef6c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0x4],0x0      ; 0053ef71
    JMP 0x0053ee9c                      ; 0053ef78
        ;   XREF to: 0053ee9c (UNCONDITIONAL_JUMP)  ; LAB_0053ee9c
        ;   Label: LAB_0053ef78
    MOV dword ptr [EBP + -0xc],0x0      ; 0053ef7d
        ;   Label: LAB_0053ef7d
    JMP 0x0053ef8c                      ; 0053ef84
        ;   XREF to: 0053ef8c (UNCONDITIONAL_JUMP)  ; LAB_0053ef8c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef86
        ;   Label: LAB_0053ef86
    INC dword ptr [EBP + -0xc]          ; 0053ef89
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef8c
        ;   Label: LAB_0053ef8c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053ef8f
    CMP EAX,dword ptr [EDX]             ; 0053ef92
    JGE 0x0053f29d                      ; 0053ef94
        ;   XREF to: 0053f29d (CONDITIONAL_JUMP)  ; LAB_0053f29d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053ef9a
    SHL EAX,0x2                         ; 0053ef9d
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053efa0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053efa3
    ADD EAX,0x1f20c8                    ; 0053efa6
    PUSH EAX                            ; 0053efab
    MOV EAX,0x63d14e                    ; 0053efac | = "%s.bin"
    PUSH EAX                            ; 0053efb1 | = "%s.bin"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053efb2
    PUSH EAX                            ; 0053efb8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053efb9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053efbe
    LEA EAX,[EBP + 0xfffffef4]          ; 0053efc1
    PUSH EAX                            ; 0053efc7
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053efc8
    SHL EAX,0x2                         ; 0053efcb
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053efce
    PUSH dword ptr [EAX + 0x4]          ; 0053efd1
    CALL shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 ; 0053efd4
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; int shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053efd9
    MOV dword ptr [EBP + 0xfffffef0],EAX ; 0053efdc
    CMP dword ptr [EBP + 0xfffffef0],0x0 ; 0053efe2
    JNZ 0x0053f014                      ; 0053efe9
        ;   XREF to: 0053f014 (CONDITIONAL_JUMP)  ; LAB_0053f014
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053efeb
    SHL EAX,0x2                         ; 0053efee
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053eff1
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053eff4
    ADD EAX,0x1f20c8                    ; 0053eff7
    PUSH EAX                            ; 0053effc
    MOV EAX,0x63d155                    ; 0053effd | = "%s is a new model."
    PUSH EAX                            ; 0053f002 | = "%s is a new model."
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f003
    PUSH EAX                            ; 0053f009
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f00a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053f00f
    JMP 0x0053f03b                      ; 0053f012
        ;   XREF to: 0053f03b (UNCONDITIONAL_JUMP)  ; LAB_0053f03b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f014
        ;   Label: LAB_0053f014
    SHL EAX,0x2                         ; 0053f017
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f01a
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f01d
    ADD EAX,0x1f20c8                    ; 0053f020
    PUSH EAX                            ; 0053f025
    MOV EAX,0x63d168                    ; 0053f026 | = "Sizing %s to existing .BIN file"
    PUSH EAX                            ; 0053f02b | = "Sizing %s to existing .BIN file"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f02c
    PUSH EAX                            ; 0053f032
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f033
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053f038
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053f03b
        ;   Label: LAB_0053f03b
    PUSH EAX                            ; 0053f03e
    PUSH 0x0                            ; 0053f03f
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f041
    PUSH EAX                            ; 0053f047
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053f048
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053f04d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053f050
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    ADD dword ptr [EBP + -0x4],0xb      ; 0053f055
    MOV EAX,[0x00679398]                ; 0053f059 | g_WindowHeight
    SUB EAX,0xb                         ; 0053f05e
    CMP EAX,dword ptr [EBP + -0x4]      ; 0053f061
    JGE 0x0053f072                      ; 0053f064
        ;   XREF to: 0053f072 (CONDITIONAL_JUMP)  ; LAB_0053f072
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053f066
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0x4],0x0      ; 0053f06b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f072
        ;   Label: LAB_0053f072
    SHL EAX,0x2                         ; 0053f075
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f078
    PUSH dword ptr [EAX + 0x4]          ; 0053f07b
    CALL shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960 ; 0053f07e
        ;   XREF to: 0048f960 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960(CDSEModel * this_ptr)
    ADD ESP,0x4                         ; 0053f083
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f086
    SHL EAX,0x2                         ; 0053f089
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f08c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f08f
    ADD EAX,0x1f20c8                    ; 0053f092
    PUSH EAX                            ; 0053f097
    MOV EAX,0x63d188                    ; 0053f098 | = "%s.mdl"
    PUSH EAX                            ; 0053f09d | = "%s.mdl"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f09e
    PUSH EAX                            ; 0053f0a4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f0a5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053f0aa
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f0ad
    PUSH EAX                            ; 0053f0b3
    CALL shape_design.c_exportModelToMDL_FUN_00459e80 ; 0053f0b4
        ;   XREF to: 00459e80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
    ADD ESP,0x4                         ; 0053f0b9
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f0bc
    SHL EAX,0x2                         ; 0053f0bf
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f0c2
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f0c5
    ADD EAX,0x1f20c8                    ; 0053f0c8
    PUSH EAX                            ; 0053f0cd
    MOV EAX,0x63d18f                    ; 0053f0ce | = "%s.bin"
    PUSH EAX                            ; 0053f0d3 | = "%s.bin"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f0d4
    PUSH EAX                            ; 0053f0da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f0db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053f0e0
    PUSH 0x59                           ; 0053f0e3
    PUSH 0x1                            ; 0053f0e5
    PUSH 0x35                           ; 0053f0e7
    PUSH 0x4e                           ; 0053f0e9
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f0eb
    PUSH EAX                            ; 0053f0f1
    CALL shape_design.c_exportModelToBIN_FUN_0045aa80 ; 0053f0f2
        ;   XREF to: 0045aa80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, ...)
    ADD ESP,0x14                        ; 0053f0f7
    MOV dword ptr [EBP + -0x8],0x61     ; 0053f0fa
    JMP 0x0053f109                      ; 0053f101
        ;   XREF to: 0053f109 (UNCONDITIONAL_JUMP)  ; LAB_0053f109
    MOV EAX,dword ptr [EBP + -0x8]      ; 0053f103
        ;   Label: LAB_0053f103
    INC dword ptr [EBP + -0x8]          ; 0053f106
    CMP dword ptr [EBP + -0x8],0x7a     ; 0053f109
        ;   Label: LAB_0053f109
    JG 0x0053f298                       ; 0053f10d
        ;   XREF to: 0053f298 (CONDITIONAL_JUMP)  ; LAB_0053f298
    MOV EAX,dword ptr [EBP + -0x8]      ; 0053f113
    PUSH EAX                            ; 0053f116
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f117
    SHL EAX,0x2                         ; 0053f11a
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f11d
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f120
    ADD EAX,0x1f20c8                    ; 0053f123
    PUSH EAX                            ; 0053f128
    MOV EAX,0x63d196                    ; 0053f129 | = "%s%c.bin"
    PUSH EAX                            ; 0053f12e | = "%s%c.bin"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f12f
    PUSH EAX                            ; 0053f135
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f136
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053f13b
    MOV EAX,0x63d19f                    ; 0053f13e | = "rb"
    PUSH EAX                            ; 0053f143 | = "rb"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f144
    PUSH EAX                            ; 0053f14a
    MOV EAX,0x63d1a2                    ; 0053f14b | = "models"
    PUSH EAX                            ; 0053f150 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0053f151
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0053f156
    MOV dword ptr [EBP + 0xfffffeec],EAX ; 0053f159
    CMP dword ptr [EBP + 0xfffffeec],0x0 ; 0053f15f
    JZ 0x0053f293                       ; 0053f166
        ;   XREF to: 0053f293 (CONDITIONAL_JUMP)  ; LAB_0053f293
    PUSH 0x80                           ; 0053f16c
    MOV EAX,0x63d1a9                    ; 0053f171 | = "..\\shape\\multicrm.cpp"
    PUSH EAX                            ; 0053f176 | = "..\\shape\\multicrm.cpp"
    MOV EAX,dword ptr [EBP + 0xfffffeec] ; 0053f177
    PUSH EAX                            ; 0053f17d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0053f17e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053f183
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f186
    PUSH EAX                            ; 0053f18c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f18d
    SHL EAX,0x2                         ; 0053f190
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f193
    PUSH dword ptr [EAX + 0x4]          ; 0053f196
    CALL shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 ; 0053f199
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; int shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053f19e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0053f1a1
    PUSH EAX                            ; 0053f1a4
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f1a5
    SHL EAX,0x2                         ; 0053f1a8
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f1ab
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f1ae
    ADD EAX,0x1f20c8                    ; 0053f1b1
    PUSH EAX                            ; 0053f1b6
    MOV EAX,0x63d1bf                    ; 0053f1b7 | = "Found clone of different size : %s%c"
    PUSH EAX                            ; 0053f1bc | = "Found clone of different size : %s%c"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f1bd
    PUSH EAX                            ; 0053f1c3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f1c4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053f1c9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053f1cc
    PUSH EAX                            ; 0053f1cf
    PUSH 0x0                            ; 0053f1d0
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f1d2
    PUSH EAX                            ; 0053f1d8
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053f1d9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053f1de
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053f1e1
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    ADD dword ptr [EBP + -0x4],0xb      ; 0053f1e6
    MOV EAX,[0x00679398]                ; 0053f1ea | g_WindowHeight
    SUB EAX,0xb                         ; 0053f1ef
    CMP EAX,dword ptr [EBP + -0x4]      ; 0053f1f2
    JGE 0x0053f203                      ; 0053f1f5
        ;   XREF to: 0053f203 (CONDITIONAL_JUMP)  ; LAB_0053f203
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053f1f7
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0x4],0x0      ; 0053f1fc
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f203
        ;   Label: LAB_0053f203
    SHL EAX,0x2                         ; 0053f206
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f209
    PUSH dword ptr [EAX + 0x4]          ; 0053f20c
    CALL shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960 ; 0053f20f
        ;   XREF to: 0048f960 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960(CDSEModel * this_ptr)
    ADD ESP,0x4                         ; 0053f214
    MOV EAX,dword ptr [EBP + -0x8]      ; 0053f217
    PUSH EAX                            ; 0053f21a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f21b
    SHL EAX,0x2                         ; 0053f21e
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f221
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f224
    ADD EAX,0x1f20c8                    ; 0053f227
    PUSH EAX                            ; 0053f22c
    MOV EAX,0x63d1e4                    ; 0053f22d | = "%s%c.mdl"
    PUSH EAX                            ; 0053f232 | = "%s%c.mdl"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f233
    PUSH EAX                            ; 0053f239
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f23a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053f23f
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f242
    PUSH EAX                            ; 0053f248
    CALL shape_design.c_exportModelToMDL_FUN_00459e80 ; 0053f249
        ;   XREF to: 00459e80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
    ADD ESP,0x4                         ; 0053f24e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0053f251
    PUSH EAX                            ; 0053f254
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f255
    SHL EAX,0x2                         ; 0053f258
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f25b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053f25e
    ADD EAX,0x1f20c8                    ; 0053f261
    PUSH EAX                            ; 0053f266
    MOV EAX,0x63d1ed                    ; 0053f267 | = "%s%c.bin"
    PUSH EAX                            ; 0053f26c | = "%s%c.bin"
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f26d
    PUSH EAX                            ; 0053f273
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053f274
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053f279
    PUSH 0x59                           ; 0053f27c
    PUSH 0x1                            ; 0053f27e
    PUSH 0x35                           ; 0053f280
    PUSH 0x4e                           ; 0053f282
    LEA EAX,[EBP + 0xfffffef4]          ; 0053f284
    PUSH EAX                            ; 0053f28a
    CALL shape_design.c_exportModelToBIN_FUN_0045aa80 ; 0053f28b
        ;   XREF to: 0045aa80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToBIN_FUN_0045aa80(char * filename, int depth_mode, int scale_mode, int export_format, ...)
    ADD ESP,0x14                        ; 0053f290
    JMP 0x0053f103                      ; 0053f293
        ;   XREF to: 0053f103 (UNCONDITIONAL_JUMP)  ; LAB_0053f103
        ;   Label: LAB_0053f293
    JMP 0x0053ef86                      ; 0053f298
        ;   XREF to: 0053ef86 (UNCONDITIONAL_JUMP)  ; LAB_0053ef86
        ;   Label: LAB_0053f298
    MOV dword ptr [EBP + -0xc],0x0      ; 0053f29d
        ;   Label: LAB_0053f29d
    JMP 0x0053f2ac                      ; 0053f2a4
        ;   XREF to: 0053f2ac (UNCONDITIONAL_JUMP)  ; LAB_0053f2ac
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f2a6
        ;   Label: LAB_0053f2a6
    INC dword ptr [EBP + -0xc]          ; 0053f2a9
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f2ac
        ;   Label: LAB_0053f2ac
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053f2af
    CMP EAX,dword ptr [EDX]             ; 0053f2b2
    JGE 0x0053f2e0                      ; 0053f2b4
        ;   XREF to: 0053f2e0 (CONDITIONAL_JUMP)  ; LAB_0053f2e0
    MOV dword ptr [0x0067d20c],0x63d1f6 ; 0053f2b6 | g_CurrentDebugFilename | = "..\\shape\\multicrm.cpp"
    MOV dword ptr [0x02f0d944],0xa9     ; 0053f2c0 | g_CurrentDebugLine
    MOV EAX,dword ptr [EBP + -0xc]      ; 0053f2ca
    SHL EAX,0x2                         ; 0053f2cd
    ADD EAX,dword ptr [EBP + 0x14]      ; 0053f2d0
    PUSH dword ptr [EAX + 0x4]          ; 0053f2d3
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0053f2d6
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0053f2db
    JMP 0x0053f2a6                      ; 0053f2de
        ;   XREF to: 0053f2a6 (UNCONDITIONAL_JUMP)  ; LAB_0053f2a6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053f2e0
        ;   Label: LAB_0053f2e0
    PUSH EAX                            ; 0053f2e3
    PUSH 0x0                            ; 0053f2e4
    MOV EAX,0x63d20c                    ; 0053f2e6 | = "Press any key..."
    PUSH EAX                            ; 0053f2eb | = "Press any key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053f2ec
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053f2f1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053f2f4
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053f2f9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0053f2fe
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 0053f303
    POP EBP                             ; 0053f305
    POP EDI                             ; 0053f306
    POP ESI                             ; 0053f307
    POP EBX                             ; 0053f308
    RET                                 ; 0053f309

