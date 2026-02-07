; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)
;
; Parameters:
; char *           Stack[0x4]:4   mdl_filename
; Local Variables:
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_design.c_saveCurrentModel_FUN_00459de0 at 00459e6f
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a7ab
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053f249
;
; Referenced Globals:
;   TerminatedCString s_wt_0061ad9b
;   TerminatedCString s_models_0061ad9e
;   TerminatedCString s_FILE_ERROR_Nothing_chang_0061ada5
;   TerminatedCString s_d_0061adc2
;   TerminatedCString s_f_f_f_0061adc6
;   TerminatedCString s_d_0061add0
;   TerminatedCString s_d_d_s_s_0061add4
;   TerminatedCString s_d_d_x_0061ade1
;   TerminatedCString s_d_d_s_0061adea
;   TerminatedCString s_d_f_f_0061adf4
;   TerminatedCString s_d_0061adfe
;   TerminatedCString s_s_0061ae02
;   TerminatedCString s_d_0061ae06
;   TerminatedCString s_d_0061ae0a
;   TerminatedCString s_shape_design_c_0061ae0e
;   ... and 17 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
;   shape_design.c_writeBinaryTreeNode_FUN_00457fd0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459e80
        ;   Label: shape_design.c_exportModelToMDL_FUN_00459e80
    PUSH ESI                            ; 00459e81
    PUSH EDI                            ; 00459e82
    PUSH EBP                            ; 00459e83
    MOV EBP,ESP                         ; 00459e84
    SUB ESP,0x5c                        ; 00459e86
    CALL shape_design.c_sortPolygonsByTexture_FUN_0045b8b0 ; 00459e8c
        ;   XREF to: 0045b8b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_sortPolygonsByTexture_FUN_0045b8b0()
    MOV ESI,dword ptr [EBP + 0x14]      ; 00459e91
    LEA EDI,[EBP + -0x5c]               ; 00459e94
    PUSH EDI                            ; 00459e97
    MOV AL,byte ptr [ESI]               ; 00459e98
        ;   Label: LAB_00459e98
    MOV byte ptr [EDI],AL               ; 00459e9a
    CMP AL,0x0                          ; 00459e9c
    JZ 0x00459eb0                       ; 00459e9e
        ;   XREF to: 00459eb0 (CONDITIONAL_JUMP)  ; LAB_00459eb0
    MOV AL,byte ptr [ESI + 0x1]         ; 00459ea0
    ADD ESI,0x2                         ; 00459ea3
    MOV byte ptr [EDI + 0x1],AL         ; 00459ea6
    ADD EDI,0x2                         ; 00459ea9
    CMP AL,0x0                          ; 00459eac
    JNZ 0x00459e98                      ; 00459eae
        ;   XREF to: 00459e98 (CONDITIONAL_JUMP)  ; LAB_00459e98
    POP EDI                             ; 00459eb0
        ;   Label: LAB_00459eb0
    MOV EAX,0x61ad9b                    ; 00459eb1 | = "wt"
    PUSH EAX                            ; 00459eb6 | = "wt"
    LEA EAX,[EBP + -0x5c]               ; 00459eb7
    PUSH EAX                            ; 00459eba
    MOV EAX,0x61ad9e                    ; 00459ebb | = "models"
    PUSH EAX                            ; 00459ec0 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00459ec1
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00459ec6
    MOV dword ptr [EBP + -0x4],EAX      ; 00459ec9
    CMP dword ptr [EBP + -0x4],0x0      ; 00459ecc
    JNZ 0x00459ef3                      ; 00459ed0
        ;   XREF to: 00459ef3 (CONDITIONAL_JUMP)  ; LAB_00459ef3
    PUSH 0x16                           ; 00459ed2
    PUSH 0x0                            ; 00459ed4
    MOV EAX,0x61ada5                    ; 00459ed6 | = "FILE ERROR! Nothing changed!"
    PUSH EAX                            ; 00459edb | = "FILE ERROR! Nothing changed!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00459edc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00459ee1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00459ee4
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00459ee9
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0045a1f8                      ; 00459eee
        ;   XREF to: 0045a1f8 (UNCONDITIONAL_JUMP)  ; LAB_0045a1f8
    PUSH dword ptr [0x01626408]         ; 00459ef3 | g_VertexCount
        ;   Label: LAB_00459ef3
    MOV EAX,0x61adc2                    ; 00459ef9 | = "%d\n"
    PUSH EAX                            ; 00459efe | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459eff
    PUSH EAX                            ; 00459f02
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00459f03
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00459f08
    MOV dword ptr [EBP + -0xc],0x0      ; 00459f0b
    JMP 0x00459f1a                      ; 00459f12
        ;   XREF to: 00459f1a (UNCONDITIONAL_JUMP)  ; LAB_00459f1a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459f14
        ;   Label: LAB_00459f14
    INC dword ptr [EBP + -0xc]          ; 00459f17
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459f1a
        ;   Label: LAB_00459f1a
    CMP EAX,dword ptr [0x01626408]      ; 00459f1d | g_VertexCount
    JGE 0x00459f69                      ; 00459f23
        ;   XREF to: 00459f69 (CONDITIONAL_JUMP)  ; LAB_00459f69
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00459f25
    FLD float ptr [EAX + 0x1626414]     ; 00459f29 | g_LoadedVertices[0].vertex.z
    SUB ESP,0x8                         ; 00459f2f
    FSTP double ptr [ESP]               ; 00459f32
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00459f35
    FLD float ptr [EAX + 0x1626410]     ; 00459f39 | DAT_01626410
    SUB ESP,0x8                         ; 00459f3f
    FSTP double ptr [ESP]               ; 00459f42
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 00459f45
    FLD float ptr [EAX + 0x162640c]     ; 00459f49 | g_LoadedVertices
    SUB ESP,0x8                         ; 00459f4f
    FSTP double ptr [ESP]               ; 00459f52
    MOV EAX,0x61adc6                    ; 00459f55 | = "%f,%f,%f\n"
    PUSH EAX                            ; 00459f5a | = "%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459f5b
    PUSH EAX                            ; 00459f5e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00459f5f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 00459f64
    JMP 0x00459f14                      ; 00459f67
        ;   XREF to: 00459f14 (UNCONDITIONAL_JUMP)  ; LAB_00459f14
    PUSH dword ptr [0x016e990c]         ; 00459f69 | g_PolygonCount
        ;   Label: LAB_00459f69
    MOV EAX,0x61add0                    ; 00459f6f | = "%d\n"
    PUSH EAX                            ; 00459f74 | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459f75
    PUSH EAX                            ; 00459f78
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00459f79
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00459f7e
    MOV dword ptr [EBP + -0xc],0x0      ; 00459f81
    JMP 0x00459f90                      ; 00459f88
        ;   XREF to: 00459f90 (UNCONDITIONAL_JUMP)  ; LAB_00459f90
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459f8a
        ;   Label: LAB_00459f8a
    INC dword ptr [EBP + -0xc]          ; 00459f8d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459f90
        ;   Label: LAB_00459f90
    CMP EAX,dword ptr [0x016e990c]      ; 00459f93 | g_PolygonCount
    JGE 0x0045a105                      ; 00459f99
        ;   XREF to: 0045a105 (CONDITIONAL_JUMP)  ; LAB_0045a105
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459f9f
    CMP byte ptr [EAX + 0x16e9964],0x0  ; 00459fa6 | DAT_016e9964
    JZ 0x0045a004                       ; 00459fad
        ;   XREF to: 0045a004 (CONDITIONAL_JUMP)  ; LAB_0045a004
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459faf
    MOV EDX,0x16e9910                   ; 00459fb6 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00459fbb
    ADD EAX,0x54                        ; 00459fbd
    PUSH EAX                            ; 00459fc0
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459fc1
    MOV EDX,0x16e9910                   ; 00459fc8 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00459fcd
    ADD EAX,0x4                         ; 00459fcf
    PUSH EAX                            ; 00459fd2
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459fd3
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00459fda | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 00459fe0
    PUSH dword ptr [EAX + 0x16e9910]    ; 00459fe7 | g_ModelPolygonData
    MOV EAX,0x61add4                    ; 00459fed | = "%d,%d,%s,%s\n"
    PUSH EAX                            ; 00459ff2 | = "%d,%d,%s,%s\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459ff3
    PUSH EAX                            ; 00459ff6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00459ff7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00459ffc
    JMP 0x0045a080                      ; 00459fff
        ;   XREF to: 0045a080 (UNCONDITIONAL_JUMP)  ; LAB_0045a080
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a004
        ;   Label: LAB_0045a004
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0045a00b | DAT_016e9914
    JNZ 0x0045a042                      ; 0045a012
        ;   XREF to: 0045a042 (CONDITIONAL_JUMP)  ; LAB_0045a042
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a014
    PUSH dword ptr [EAX + 0x16e99b4]    ; 0045a01b | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a021
    PUSH dword ptr [EAX + 0x16e9910]    ; 0045a028 | g_ModelPolygonData
    MOV EAX,0x61ade1                    ; 0045a02e | = "%d,%d,x\n"
    PUSH EAX                            ; 0045a033 | = "%d,%d,x\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a034
    PUSH EAX                            ; 0045a037
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a038
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0045a03d
    JMP 0x0045a080                      ; 0045a040
        ;   XREF to: 0045a080 (UNCONDITIONAL_JUMP)  ; LAB_0045a080
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a042
        ;   Label: LAB_0045a042
    MOV EDX,0x16e9910                   ; 0045a049 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045a04e
    ADD EAX,0x4                         ; 0045a050
    PUSH EAX                            ; 0045a053
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a054
    PUSH dword ptr [EAX + 0x16e99b4]    ; 0045a05b | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a061
    PUSH dword ptr [EAX + 0x16e9910]    ; 0045a068 | g_ModelPolygonData
    MOV EAX,0x61adea                    ; 0045a06e | = "%d,%d,%s\n"
    PUSH EAX                            ; 0045a073 | = "%d,%d,%s\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a074
    PUSH EAX                            ; 0045a077
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a078
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0045a07d
    MOV dword ptr [EBP + -0x8],0x0      ; 0045a080
        ;   Label: LAB_0045a080
    JMP 0x0045a08f                      ; 0045a087
        ;   XREF to: 0045a08f (UNCONDITIONAL_JUMP)  ; LAB_0045a08f
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a089
        ;   Label: LAB_0045a089
    INC dword ptr [EBP + -0x8]          ; 0045a08c
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a08f
        ;   Label: LAB_0045a08f
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a096
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045a099 | DAT_016e99b4
    JGE 0x0045a100                      ; 0045a09f
        ;   XREF to: 0045a100 (CONDITIONAL_JUMP)  ; LAB_0045a100
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a0a1
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a0a8
    SHL EAX,0x2                         ; 0045a0ab
    ADD EAX,EDX                         ; 0045a0ae
    FLD float ptr [EAX + 0x16e9a48]     ; 0045a0b0 | DAT_016e9a48
    SUB ESP,0x8                         ; 0045a0b6
    FSTP double ptr [ESP]               ; 0045a0b9
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a0bc
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a0c3
    SHL EAX,0x2                         ; 0045a0c6
    ADD EAX,EDX                         ; 0045a0c9
    FLD float ptr [EAX + 0x16e9a08]     ; 0045a0cb | DAT_016e9a08
    SUB ESP,0x8                         ; 0045a0d1
    FSTP double ptr [ESP]               ; 0045a0d4
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a0d7
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a0de
    SHL EAX,0x2                         ; 0045a0e1
    ADD EAX,EDX                         ; 0045a0e4
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045a0e6 | DAT_016e99c8
    MOV EAX,0x61adf4                    ; 0045a0ec | = "%d,%f,%f\n"
    PUSH EAX                            ; 0045a0f1 | = "%d,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a0f2
    PUSH EAX                            ; 0045a0f5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a0f6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 0045a0fb
    JMP 0x0045a089                      ; 0045a0fe
        ;   XREF to: 0045a089 (UNCONDITIONAL_JUMP)  ; LAB_0045a089
    JMP 0x00459f8a                      ; 0045a100
        ;   XREF to: 00459f8a (UNCONDITIONAL_JUMP)  ; LAB_00459f8a
        ;   Label: LAB_0045a100
    PUSH dword ptr [0x01e528a0]         ; 0045a105 | g_PartsCount
        ;   Label: LAB_0045a105
    MOV EAX,0x61adfe                    ; 0045a10b | = "%d\n"
    PUSH EAX                            ; 0045a110 | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a111
    PUSH EAX                            ; 0045a114
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a115
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a11a
    MOV dword ptr [EBP + -0xc],0x0      ; 0045a11d
    JMP 0x0045a12c                      ; 0045a124
        ;   XREF to: 0045a12c (UNCONDITIONAL_JUMP)  ; LAB_0045a12c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a126
        ;   Label: LAB_0045a126
    INC dword ptr [EBP + -0xc]          ; 0045a129
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a12c
        ;   Label: LAB_0045a12c
    CMP EAX,dword ptr [0x01e528a0]      ; 0045a12f | g_PartsCount
    JGE 0x0045a157                      ; 0045a135
        ;   XREF to: 0045a157 (CONDITIONAL_JUMP)  ; LAB_0045a157
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045a137
    MOV EDX,0x1e50190                   ; 0045a13b | g_ModelPartNames
    ADD EAX,EDX                         ; 0045a140
    PUSH EAX                            ; 0045a142
    MOV EAX,0x61ae02                    ; 0045a143 | = "%s\n"
    PUSH EAX                            ; 0045a148 | = "%s\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a149
    PUSH EAX                            ; 0045a14c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a14d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a152
    JMP 0x0045a126                      ; 0045a155
        ;   XREF to: 0045a126 (UNCONDITIONAL_JUMP)  ; LAB_0045a126
    MOV dword ptr [EBP + -0xc],0x0      ; 0045a157
        ;   Label: LAB_0045a157
    JMP 0x0045a166                      ; 0045a15e
        ;   XREF to: 0045a166 (UNCONDITIONAL_JUMP)  ; LAB_0045a166
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a160
        ;   Label: LAB_0045a160
    INC dword ptr [EBP + -0xc]          ; 0045a163
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a166
        ;   Label: LAB_0045a166
    CMP EAX,dword ptr [0x016e990c]      ; 0045a169 | g_PolygonCount
    JGE 0x0045a192                      ; 0045a16f
        ;   XREF to: 0045a192 (CONDITIONAL_JUMP)  ; LAB_0045a192
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a171
    PUSH dword ptr [EAX + 0x16e9a88]    ; 0045a178 | DAT_016e9a88
    MOV EAX,0x61ae06                    ; 0045a17e | = "%d\n"
    PUSH EAX                            ; 0045a183 | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a184
    PUSH EAX                            ; 0045a187
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a188
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a18d
    JMP 0x0045a160                      ; 0045a190
        ;   XREF to: 0045a160 (UNCONDITIONAL_JUMP)  ; LAB_0045a160
    MOV dword ptr [EBP + -0xc],0x0      ; 0045a192
        ;   Label: LAB_0045a192
    JMP 0x0045a1a1                      ; 0045a199
        ;   XREF to: 0045a1a1 (UNCONDITIONAL_JUMP)  ; LAB_0045a1a1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a19b
        ;   Label: LAB_0045a19b
    INC dword ptr [EBP + -0xc]          ; 0045a19e
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a1a1
        ;   Label: LAB_0045a1a1
    CMP EAX,dword ptr [0x016e990c]      ; 0045a1a4 | g_PolygonCount
    JGE 0x0045a1cd                      ; 0045a1aa
        ;   XREF to: 0045a1cd (CONDITIONAL_JUMP)  ; LAB_0045a1cd
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a1ac
    PUSH dword ptr [EAX + 0x16e9a8c]    ; 0045a1b3 | DAT_016e9a8c
    MOV EAX,0x61ae0a                    ; 0045a1b9 | = "%d\n"
    PUSH EAX                            ; 0045a1be | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a1bf
    PUSH EAX                            ; 0045a1c2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a1c3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a1c8
    JMP 0x0045a19b                      ; 0045a1cb
        ;   XREF to: 0045a19b (UNCONDITIONAL_JUMP)  ; LAB_0045a19b
    PUSH 0x1                            ; 0045a1cd
        ;   Label: LAB_0045a1cd
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a1cf
    PUSH EAX                            ; 0045a1d2
    PUSH dword ptr [0x01e66150]         ; 0045a1d3 | g_SpatialTreeRoot
    CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0 ; 0045a1d9
        ;   XREF to: 00457fd0 (UNCONDITIONAL_CALL)  ; void shape_design.c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, _FILE * file, int depth)
    ADD ESP,0xc                         ; 0045a1de
    PUSH 0x604                          ; 0045a1e1
    MOV EAX,0x61ae0e                    ; 0045a1e6 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0045a1eb | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a1ec
    PUSH EAX                            ; 0045a1ef
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0045a1f0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0045a1f5
    MOV ESP,EBP                         ; 0045a1f8
        ;   Label: LAB_0045a1f8
    POP EBP                             ; 0045a1fa
    POP EDI                             ; 0045a1fb
    POP ESI                             ; 0045a1fc
    POP EBX                             ; 0045a1fd
    RET                                 ; 0045a1fe

