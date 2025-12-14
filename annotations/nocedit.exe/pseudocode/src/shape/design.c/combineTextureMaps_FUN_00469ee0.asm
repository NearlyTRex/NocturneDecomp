; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_combineTextureMaps_FUN_00469ee0(void)
;
; Local Variables:
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f772
;
; Referenced Globals:
;   TerminatedCString s_Enter_response_file_0061d106
;   TerminatedCString s_shape_design_c_0061d11c
;   TerminatedCString s_rt_0061d12e
;   TerminatedCString s_shape_design_c_0061d131
;   TerminatedCString s_Bad_name_0061d143
;   TerminatedCString s_s_0061d14c
;   TerminatedCString s_f_f_0061d150
;   TerminatedCString s_d_0061d157
;   TerminatedCString s_s_0061d15b
;   TerminatedCString s_f_f_f_f_0061d15f
;   double g_ColorNormalizationFactor = 0.00392156862745098
;   double g_ColorScaleFactor = 255
;   TerminatedCString s_shape_design_c_0061d17e
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_strcmp_FUN_005fef20
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469ee0
        ;   Label: shape_design.c_combineTextureMaps_FUN_00469ee0
    PUSH ESI                            ; 00469ee1
    PUSH EDI                            ; 00469ee2
    PUSH EBP                            ; 00469ee3
    MOV EBP,ESP                         ; 00469ee4
    SUB ESP,0x12c                       ; 00469ee6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00469eec
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61d106                    ; 00469ef1 | = "Enter response file :"
    PUSH ECX                            ; 00469ef6 | = "Enter response file :"
    PUSH 0x0                            ; 00469ef7
    PUSH 0x0                            ; 00469ef9
    PUSH 0x46                           ; 00469efb
    LEA ECX,[EBP + 0xffffff7c]          ; 00469efd
    PUSH ECX                            ; 00469f03
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00469f04
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00469f09
    LEA EDI,[EBP + 0xffffff7c]          ; 00469f0c
    SUB ECX,ECX                         ; 00469f12
    DEC ECX                             ; 00469f14
    XOR EAX,EAX                         ; 00469f15
    SCASB.REPNE ES:EDI                  ; 00469f17
    NOT ECX                             ; 00469f19
    DEC ECX                             ; 00469f1b
    TEST ECX,ECX                        ; 00469f1c
    JNZ 0x00469f25                      ; 00469f1e
        ;   XREF to: 00469f25 (CONDITIONAL_JUMP)  ; LAB_00469f25
    JMP 0x0046a176                      ; 00469f20
        ;   XREF to: 0046a176 (UNCONDITIONAL_JUMP)  ; LAB_0046a176
    PUSH 0x25a1                         ; 00469f25
        ;   Label: LAB_00469f25
    MOV EAX,0x61d11c                    ; 00469f2a | = "..\\shape\\design.c"
    PUSH EAX                            ; 00469f2f | = "..\\shape\\design.c"
    MOV EAX,0x61d12e                    ; 00469f30 | = "rt"
    PUSH EAX                            ; 00469f35 | = "rt"
    PUSH 0x0                            ; 00469f36
    LEA EAX,[EBP + 0xffffff7c]          ; 00469f38
    PUSH EAX                            ; 00469f3e
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00469f3f
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00469f44
    MOV dword ptr [EBP + -0x30],EAX     ; 00469f47
    CMP dword ptr [EBP + -0x30],0x0     ; 00469f4a
    JNZ 0x00469f72                      ; 00469f4e
        ;   XREF to: 00469f72 (CONDITIONAL_JUMP)  ; LAB_00469f72
    MOV dword ptr [0x02f0ca48],0x61d131 ; 00469f50 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x25a2   ; 00469f5a | g_CurrentLineNumber
    MOV EAX,0x61d143                    ; 00469f64 | = "Bad name"
    PUSH EAX                            ; 00469f69 | = "Bad name"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00469f6a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00469f6f
    LEA EAX,[EBP + 0xfffffedc]          ; 00469f72
        ;   Label: LAB_00469f72
    PUSH EAX                            ; 00469f78
    MOV EAX,0x61d14c                    ; 00469f79 | = "%s\n"
    PUSH EAX                            ; 00469f7e | = "%s\n"
    MOV EAX,dword ptr [EBP + -0x30]     ; 00469f7f
    PUSH EAX                            ; 00469f82
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00469f83
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00469f88
    LEA EAX,[EBP + -0x1c]               ; 00469f8b
    PUSH EAX                            ; 00469f8e
    LEA EAX,[EBP + -0x20]               ; 00469f8f
    PUSH EAX                            ; 00469f92
    MOV EAX,0x61d150                    ; 00469f93 | = "%f,%f\n"
    PUSH EAX                            ; 00469f98 | = "%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x30]     ; 00469f99
    PUSH EAX                            ; 00469f9c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00469f9d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00469fa2
    LEA EAX,[EBP + -0x34]               ; 00469fa5
    PUSH EAX                            ; 00469fa8
    MOV EAX,0x61d157                    ; 00469fa9 | = "%d\n"
    PUSH EAX                            ; 00469fae | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x30]     ; 00469faf
    PUSH EAX                            ; 00469fb2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00469fb3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00469fb8
    MOV dword ptr [EBP + -0x28],0x0     ; 00469fbb
    JMP 0x00469fca                      ; 00469fc2
        ;   XREF to: 00469fca (UNCONDITIONAL_JUMP)  ; LAB_00469fca
    MOV EAX,dword ptr [EBP + -0x28]     ; 00469fc4
        ;   Label: LAB_00469fc4
    INC dword ptr [EBP + -0x28]         ; 00469fc7
    MOV EAX,dword ptr [EBP + -0x28]     ; 00469fca
        ;   Label: LAB_00469fca
    CMP EAX,dword ptr [EBP + -0x34]     ; 00469fcd
    JGE 0x0046a15f                      ; 00469fd0
        ;   XREF to: 0046a15f (CONDITIONAL_JUMP)  ; LAB_0046a15f
    LEA EAX,[EBP + 0xffffff2c]          ; 00469fd6
    PUSH EAX                            ; 00469fdc
    MOV EAX,0x61d15b                    ; 00469fdd | = "%s\n"
    PUSH EAX                            ; 00469fe2 | = "%s\n"
    MOV EAX,dword ptr [EBP + -0x30]     ; 00469fe3
    PUSH EAX                            ; 00469fe6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00469fe7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00469fec
    LEA EAX,[EBP + -0x4]                ; 00469fef
    PUSH EAX                            ; 00469ff2
    LEA EAX,[EBP + -0x8]                ; 00469ff3
    PUSH EAX                            ; 00469ff6
    LEA EAX,[EBP + -0xc]                ; 00469ff7
    PUSH EAX                            ; 00469ffa
    LEA EAX,[EBP + -0x10]               ; 00469ffb
    PUSH EAX                            ; 00469ffe
    MOV EAX,0x61d15f                    ; 00469fff | = "%f,%f,%f,%f\n"
    PUSH EAX                            ; 0046a004 | = "%f,%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046a005
    PUSH EAX                            ; 0046a008
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0046a009
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x18                        ; 0046a00e
    MOV dword ptr [EBP + -0x24],0x0     ; 0046a011
    JMP 0x0046a020                      ; 0046a018
        ;   XREF to: 0046a020 (UNCONDITIONAL_JUMP)  ; LAB_0046a020
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046a01a
        ;   Label: LAB_0046a01a
    INC dword ptr [EBP + -0x24]         ; 0046a01d
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046a020
        ;   Label: LAB_0046a020
    CMP EAX,dword ptr [0x016e990c]      ; 0046a023 | g_PolygonCount
    JGE 0x0046a15a                      ; 0046a029
        ;   XREF to: 0046a15a (CONDITIONAL_JUMP)  ; LAB_0046a15a
    LEA EAX,[EBP + 0xffffff2c]          ; 0046a02f
    PUSH EAX                            ; 0046a035
    IMUL EAX,dword ptr [EBP + -0x24],0x184 ; 0046a036
    MOV EDX,0x16e9910                   ; 0046a03d | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a042
    ADD EAX,0x4                         ; 0046a044
    PUSH EAX                            ; 0046a047
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0046a048
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0046a04d
    TEST EAX,EAX                        ; 0046a050
    JNZ 0x0046a155                      ; 0046a052
        ;   XREF to: 0046a155 (CONDITIONAL_JUMP)  ; LAB_0046a155
    LEA ESI,[EBP + 0xfffffedc]          ; 0046a058
    IMUL EDI,dword ptr [EBP + -0x24],0x184 ; 0046a05e
    MOV EAX,0x16e9910                   ; 0046a065 | g_ModelPolygonData
    ADD EDI,EAX                         ; 0046a06a
    ADD EDI,0x4                         ; 0046a06c
    PUSH EDI                            ; 0046a06f
    MOV AL,byte ptr [ESI]               ; 0046a070
        ;   Label: LAB_0046a070
    MOV byte ptr [EDI],AL               ; 0046a072 | DAT_016e9914 | DAT_016e9916
    CMP AL,0x0                          ; 0046a074
    JZ 0x0046a088                       ; 0046a076
        ;   XREF to: 0046a088 (CONDITIONAL_JUMP)  ; LAB_0046a088
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a078
    ADD ESI,0x2                         ; 0046a07b
    MOV byte ptr [EDI + 0x1],AL         ; 0046a07e | DAT_016e9915 | DAT_016e9917
    ADD EDI,0x2                         ; 0046a081
    CMP AL,0x0                          ; 0046a084
    JNZ 0x0046a070                      ; 0046a086
        ;   XREF to: 0046a070 (CONDITIONAL_JUMP)  ; LAB_0046a070
    POP EDI                             ; 0046a088
        ;   Label: LAB_0046a088
    MOV dword ptr [EBP + -0x2c],0x0     ; 0046a089
    JMP 0x0046a098                      ; 0046a090
        ;   XREF to: 0046a098 (UNCONDITIONAL_JUMP)  ; LAB_0046a098
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046a092
        ;   Label: LAB_0046a092
    INC dword ptr [EBP + -0x2c]         ; 0046a095
    CMP dword ptr [EBP + -0x2c],0x4     ; 0046a098
        ;   Label: LAB_0046a098
    JGE 0x0046a155                      ; 0046a09c
        ;   XREF to: 0046a155 (CONDITIONAL_JUMP)  ; LAB_0046a155
    IMUL EDX,dword ptr [EBP + -0x24],0x184 ; 0046a0a2
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046a0a9
    SHL EAX,0x2                         ; 0046a0ac
    ADD EAX,EDX                         ; 0046a0af
    FLD float ptr [EAX + 0x16e9a08]     ; 0046a0b1 | DAT_016e9a08
    FMUL double ptr [0x0061d16e]        ; 0046a0b7 | g_ColorNormalizationFactor
    FSTP float ptr [EBP + 0xfffffed4]   ; 0046a0bd
    IMUL EDX,dword ptr [EBP + -0x24],0x184 ; 0046a0c3
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046a0ca
    SHL EAX,0x2                         ; 0046a0cd
    ADD EAX,EDX                         ; 0046a0d0
    FLD float ptr [EAX + 0x16e9a48]     ; 0046a0d2 | DAT_016e9a48
    FMUL double ptr [0x0061d16e]        ; 0046a0d8 | g_ColorNormalizationFactor
    FSTP float ptr [EBP + 0xfffffed8]   ; 0046a0de
    FLD float ptr [EBP + -0x8]          ; 0046a0e4
    FMUL float ptr [EBP + 0xfffffed4]   ; 0046a0e7
    FADD float ptr [EBP + -0x10]        ; 0046a0ed
    FDIV float ptr [EBP + -0x20]        ; 0046a0f0
    FSTP float ptr [EBP + 0xfffffed4]   ; 0046a0f3
    FLD float ptr [EBP + -0x4]          ; 0046a0f9
    FMUL float ptr [EBP + 0xfffffed8]   ; 0046a0fc
    FADD float ptr [EBP + -0xc]         ; 0046a102
    FDIV float ptr [EBP + -0x1c]        ; 0046a105
    FSTP float ptr [EBP + 0xfffffed8]   ; 0046a108
    FLD float ptr [EBP + 0xfffffed4]    ; 0046a10e
    FMUL double ptr [0x0061d176]        ; 0046a114 | g_ColorScaleFactor
    IMUL EDX,dword ptr [EBP + -0x24],0x184 ; 0046a11a
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046a121
    SHL EAX,0x2                         ; 0046a124
    ADD EAX,EDX                         ; 0046a127
    FSTP float ptr [EAX + 0x16e9a08]    ; 0046a129 | DAT_016e9a08
    FLD float ptr [EBP + 0xfffffed8]    ; 0046a12f
    FMUL double ptr [0x0061d176]        ; 0046a135 | g_ColorScaleFactor
    IMUL EDX,dword ptr [EBP + -0x24],0x184 ; 0046a13b
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046a142
    SHL EAX,0x2                         ; 0046a145
    ADD EAX,EDX                         ; 0046a148
    FSTP float ptr [EAX + 0x16e9a48]    ; 0046a14a | DAT_016e9a48
    JMP 0x0046a092                      ; 0046a150
        ;   XREF to: 0046a092 (UNCONDITIONAL_JUMP)  ; LAB_0046a092
    JMP 0x0046a01a                      ; 0046a155
        ;   XREF to: 0046a01a (UNCONDITIONAL_JUMP)  ; LAB_0046a01a
        ;   Label: LAB_0046a155
    JMP 0x00469fc4                      ; 0046a15a
        ;   XREF to: 00469fc4 (UNCONDITIONAL_JUMP)  ; LAB_00469fc4
        ;   Label: LAB_0046a15a
    PUSH 0x25da                         ; 0046a15f
        ;   Label: LAB_0046a15f
    MOV EAX,0x61d17e                    ; 0046a164 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046a169 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046a16a
    PUSH EAX                            ; 0046a16d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046a16e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046a173
    MOV ESP,EBP                         ; 0046a176
        ;   Label: LAB_0046a176
    POP EBP                             ; 0046a178
    POP EDI                             ; 0046a179
    POP ESI                             ; 0046a17a
    POP EBX                             ; 0046a17b
    RET                                 ; 0046a17c

