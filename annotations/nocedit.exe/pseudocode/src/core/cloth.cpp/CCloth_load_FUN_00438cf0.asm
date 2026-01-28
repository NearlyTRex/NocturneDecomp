; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_cloth_cpp_CCloth_load_FUN_00438cf0(CCloth *this_ptr,char *filename)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x138]:1  local_138
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
; XREF[7]:
;   core_cloth.cpp_CClothList_load_FUN_0043bfa0 at 0043c03b
;   core_cloth.cpp_FUN_0043ddf0 at 0043df01
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 at 004be1b8
;   core_gabriela.cpp_CGabriella_setup_FUN_004d2c40 at 004d2c79
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f5b9
;   core_svetlana.cpp_CSvetlana_FUN_005d88e0 at 005d8b01
;   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 at 005e5760
;
; Referenced Globals:
;   TerminatedCString s_rt_006181bc
;   TerminatedCString s_models_006181bf
;   TerminatedCString s_core_cloth_cpp_006181c6
;   TerminatedCString s_CCloth_load_Unable_to_op_006181d8
;   TerminatedCString s_d_006181fe
;   TerminatedCString s_core_cloth_cpp_00618202
;   TerminatedCString s_s_is_version_d_this_EXE__00618214
;   TerminatedCString s_s_0061825c
;   TerminatedCString s_f_f_f_f_f_f_00618260
;   TerminatedCString s_f_f_f_f_f_f_f_f_00618273
;   TerminatedCString s_f_0061828c
;   TerminatedCString s_d_00618290
;   TerminatedCString s_d_00618294
;   TerminatedCString s_d_00618298
;   TerminatedCString s_d_0061829c
;   ... and 13 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
;   core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438cf0
        ;   Label: core_cloth.cpp_CCloth_load_FUN_00438cf0
    PUSH ESI                            ; 00438cf1
    PUSH EDI                            ; 00438cf2
    PUSH EBP                            ; 00438cf3
    SUB ESP,0x228                       ; 00438cf4
    MOV ESI,dword ptr [ESP + 0x23c]     ; 00438cfa
    MOV EBX,dword ptr [ESP + 0x240]     ; 00438d01
    PUSH 0x6181bc                       ; 00438d08 | = "rt"
    PUSH EBX                            ; 00438d0d
    PUSH 0x6181bf                       ; 00438d0e | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00438d13
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00438d18
    MOV dword ptr [ESP + 0x208],EAX     ; 00438d1b
    TEST EAX,EAX                        ; 00438d22
    JZ 0x004391eb                       ; 00438d24
        ;   XREF to: 004391eb (CONDITIONAL_JUMP)  ; LAB_004391eb
    MOV EDI,dword ptr [ESP + 0x208]     ; 00438d2a
        ;   Label: LAB_00438d2a
    PUSH EDI                            ; 00438d31
    PUSH 0xff                           ; 00438d32
    LEA EAX,[ESP + 0x108]               ; 00438d37
    PUSH EAX                            ; 00438d3e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438d3f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438d44
    LEA EAX,[ESI + 0x3fe60]             ; 00438d47
    PUSH EAX                            ; 00438d4d
    PUSH 0x6181fe                       ; 00438d4e | = "%d\n"
    PUSH EDI                            ; 00438d53
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438d54
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,dword ptr [ESI + 0x3fe60]   ; 00438d59
    ADD ESP,0xc                         ; 00438d5f
    CMP EAX,0x3                         ; 00438d62
    JLE 0x00438d8e                      ; 00438d65
        ;   XREF to: 00438d8e (CONDITIONAL_JUMP)  ; LAB_00438d8e
    PUSH 0x3                            ; 00438d67
    PUSH EAX                            ; 00438d69
    PUSH EBX                            ; 00438d6a
    MOV EDX,0x618202                    ; 00438d6b | = "..\\core\\cloth.cpp"
    MOV ECX,0xa2                        ; 00438d70
    PUSH 0x618214                       ; 00438d75 | = "%s is version %d, this .EXE is old an..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00438d7a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00438d80 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00438d86
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00438d8b
    MOV EBP,dword ptr [ESP + 0x208]     ; 00438d8e
        ;   Label: LAB_00438d8e
    PUSH EBP                            ; 00438d95
    PUSH 0xff                           ; 00438d96
    LEA EAX,[ESP + 0x108]               ; 00438d9b
    PUSH EAX                            ; 00438da2
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438da3
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438da8
    MOV EAX,ESP                         ; 00438dab
    PUSH EAX                            ; 00438dad
    PUSH 0x61825c                       ; 00438dae | = "%s\n"
    PUSH EBP                            ; 00438db3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438db4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00438db9
    MOV EAX,ESP                         ; 00438dbc
    PUSH EAX                            ; 00438dbe
    PUSH ESI                            ; 00438dbf
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00438dc0
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00438dc5
    PUSH ESI                            ; 00438dc8
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190 ; 00438dc9
        ;   XREF to: 00478190 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00438dce
    PUSH EBP                            ; 00438dd1
    PUSH 0xff                           ; 00438dd2
    LEA EAX,[ESP + 0x108]               ; 00438dd7
    PUSH EAX                            ; 00438dde
    LEA EBP,[ESI + 0x3ce58]             ; 00438ddf
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438de5
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    LEA EAX,[ESI + 0x3ce5c]             ; 00438dea
    LEA EBX,[ESI + 0x3ce60]             ; 00438df0
    LEA EDX,[ESI + 0x3ce64]             ; 00438df6
    LEA EDI,[ESI + 0x3ce68]             ; 00438dfc
    ADD ESP,0xc                         ; 00438e02
    LEA ECX,[ESI + 0x3ce6c]             ; 00438e05
    MOV dword ptr [ESP + 0x200],ECX     ; 00438e0b
    CMP dword ptr [ESI + 0x3fe60],0x3   ; 00438e12
    JGE 0x00439214                      ; 00438e19
        ;   XREF to: 00439214 (CONDITIONAL_JUMP)  ; LAB_00439214
    MOV ECX,dword ptr [ESP + 0x200]     ; 00438e1f
    PUSH ECX                            ; 00438e26
    PUSH EDI                            ; 00438e27
    PUSH EDX                            ; 00438e28
    PUSH EBX                            ; 00438e29
    PUSH EAX                            ; 00438e2a
    PUSH EBP                            ; 00438e2b
    PUSH 0x618260                       ; 00438e2c | = "%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x224]     ; 00438e31
    PUSH EBX                            ; 00438e38
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438e39
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    FLD float ptr [0x0065bb54]          ; 00438e3e | FLOAT_0065bb54
    FLD float ptr [0x0065bb58]          ; 00438e44 | FLOAT_0065bb58
    FLD float ptr [0x0065bb5c]          ; 00438e4a | FLOAT_0065bb5c
    FLD float ptr [0x0065bb60]          ; 00438e50 | FLOAT_0065bb60
    FLD float ptr [0x0065bb64]          ; 00438e56 | FLOAT_0065bb64
    FLD float ptr [0x0065bb68]          ; 00438e5c | FLOAT_0065bb68
    FLD float ptr [0x0065bb6c]          ; 00438e62 | FLOAT_0065bb6c
    ADD ESP,0x20                        ; 00438e68
    FXCH ST6                            ; 00438e6b
    FSTP float ptr [ESI + 0x3ce58]      ; 00438e6d
    FLD float ptr [0x0065bb70]          ; 00438e73 | FLOAT_0065bb70
    FXCH ST5                            ; 00438e79
    FSTP float ptr [ESI + 0x3ce5c]      ; 00438e7b
    FXCH ST3                            ; 00438e81
    FSTP float ptr [ESI + 0x3ce60]      ; 00438e83
    FXCH                                ; 00438e89
    FSTP float ptr [ESI + 0x3ce64]      ; 00438e8b
    FSTP float ptr [ESI + 0x3ce68]      ; 00438e91
    FSTP float ptr [ESI + 0x3ce6c]      ; 00438e97
    FXCH                                ; 00438e9d
    FSTP float ptr [ESI + 0x3ce70]      ; 00438e9f
    FSTP float ptr [ESI + 0x3ce74]      ; 00438ea5
    MOV EDI,dword ptr [ESP + 0x208]     ; 00438eab
        ;   Label: LAB_00438eab
    PUSH EDI                            ; 00438eb2
    PUSH 0xff                           ; 00438eb3
    LEA EAX,[ESP + 0x108]               ; 00438eb8
    PUSH EAX                            ; 00438ebf
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438ec0
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438ec5
    LEA EAX,[ESI + 0x3ce88]             ; 00438ec8
    PUSH EAX                            ; 00438ece
    PUSH 0x61828c                       ; 00438ecf | = "%f\n"
    PUSH EDI                            ; 00438ed4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438ed5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,dword ptr [ESI + 0x3fe60]   ; 00438eda
    ADD ESP,0xc                         ; 00438ee0
    CMP EAX,0x2                         ; 00438ee3
    JL 0x00439249                       ; 00438ee6
        ;   XREF to: 00439249 (CONDITIONAL_JUMP)  ; LAB_00439249
    PUSH EDI                            ; 00438eec
    PUSH 0xff                           ; 00438eed
    LEA EAX,[ESP + 0x108]               ; 00438ef2
    PUSH EAX                            ; 00438ef9
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438efa
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438eff
    LEA EAX,[ESI + 0x3ce84]             ; 00438f02
    PUSH EAX                            ; 00438f08
    PUSH 0x618290                       ; 00438f09 | = "%d\n"
    PUSH EDI                            ; 00438f0e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438f0f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00438f14
    MOV EBX,dword ptr [ESP + 0x208]     ; 00438f17
        ;   Label: LAB_00438f17
    PUSH EBX                            ; 00438f1e
    PUSH 0xff                           ; 00438f1f
    LEA EAX,[ESP + 0x108]               ; 00438f24
    PUSH EAX                            ; 00438f2b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438f2c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438f31
    LEA EAX,[ESI + 0x3f028]             ; 00438f34
    PUSH EAX                            ; 00438f3a
    PUSH 0x618294                       ; 00438f3b | = "%d\n"
    PUSH EBX                            ; 00438f40
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438f41
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00438f46
    PUSH ESI                            ; 00438f49
    CALL core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 ; 00438f4a
        ;   XREF to: 00438c50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_allocMemory_FUN_00438c50(CCloth * this_ptr)
    ADD ESP,0x4                         ; 00438f4f
    PUSH EBX                            ; 00438f52
    PUSH 0xff                           ; 00438f53
    LEA EAX,[ESP + 0x108]               ; 00438f58
    PUSH EAX                            ; 00438f5f
    XOR EBX,EBX                         ; 00438f60
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438f62
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    MOV EAX,dword ptr [ESI + 0x3f028]   ; 00438f67
    ADD ESP,0xc                         ; 00438f6d
    TEST EAX,EAX                        ; 00438f70
    JLE 0x00438fa0                      ; 00438f72
        ;   XREF to: 00438fa0 (CONDITIONAL_JUMP)  ; LAB_00438fa0
    LEA EDI,[ESI + 0x3f02c]             ; 00438f74
    PUSH EDI                            ; 00438f7a
        ;   Label: LAB_00438f7a
    PUSH 0x618298                       ; 00438f7b | = "%d\n"
    MOV EDX,dword ptr [ESP + 0x210]     ; 00438f80
    PUSH EDX                            ; 00438f87
    INC EBX                             ; 00438f88
    ADD EDI,0x4                         ; 00438f89
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438f8c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV ECX,dword ptr [ESI + 0x3f028]   ; 00438f91
    ADD ESP,0xc                         ; 00438f97
    CMP EBX,ECX                         ; 00438f9a
    JL 0x00438f7a                       ; 00438f9c
        ;   XREF to: 00438f7a (CONDITIONAL_JUMP)  ; LAB_00438f7a
    MOV EAX,EAX                         ; 00438f9e
    PUSH ESI                            ; 00438fa0
        ;   Label: LAB_00438fa0
    CALL core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0 ; 00438fa1
        ;   XREF to: 004394e0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0()
    ADD ESP,0x4                         ; 00438fa6
    MOV EBX,dword ptr [ESP + 0x208]     ; 00438fa9
    PUSH EBX                            ; 00438fb0
    PUSH 0xff                           ; 00438fb1
    LEA EAX,[ESP + 0x108]               ; 00438fb6
    PUSH EAX                            ; 00438fbd
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00438fbe
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 00438fc3
    LEA EAX,[ESI + 0x3ce8c]             ; 00438fc6
    PUSH EAX                            ; 00438fcc
    PUSH 0x61829c                       ; 00438fcd | = "%d\n"
    PUSH EBX                            ; 00438fd2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00438fd3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00438fd8
    MOV EBP,dword ptr [ESI + 0x3ce8c]   ; 00438fdb
    XOR EBX,EBX                         ; 00438fe1
    TEST EBP,EBP                        ; 00438fe3
    JLE 0x00439170                      ; 00438fe5
        ;   XREF to: 00439170 (CONDITIONAL_JUMP)  ; LAB_00439170
    LEA EAX,[ESI + 0x3ce90]             ; 00438feb
    LEA EBP,[ESI + 0x3cea4]             ; 00438ff1
    MOV dword ptr [ESP + 0x204],EAX     ; 00438ff7
    LEA EAX,[ESI + 0x3cea8]             ; 00438ffe
    MOV dword ptr [ESP + 0x224],EAX     ; 00439004
    LEA EAX,[ESI + 0x3ceac]             ; 0043900b
    MOV dword ptr [ESP + 0x220],EAX     ; 00439011
    LEA EAX,[ESI + 0x3ceb0]             ; 00439018
    MOV dword ptr [ESP + 0x218],EAX     ; 0043901e
    LEA EAX,[ESI + 0x3ceb4]             ; 00439025
    MOV dword ptr [ESP + 0x21c],EAX     ; 0043902b
    LEA EAX,[ESI + 0x3ceb8]             ; 00439032
    MOV dword ptr [ESP + 0x214],EAX     ; 00439038
    LEA EAX,[ESI + 0x3cec0]             ; 0043903f
    LEA EDI,[ESI + 0x3cebc]             ; 00439045
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043904b
    LEA EAX,[ESI + 0x3cec4]             ; 00439052
    MOV dword ptr [ESP + 0x210],EAX     ; 00439058
    IMUL EAX,EBX,0xac                   ; 0043905f
        ;   Label: LAB_0043905f
    MOV ECX,dword ptr [ESP + 0x210]     ; 00439065
    PUSH ECX                            ; 0043906c
    MOV EDX,dword ptr [ESP + 0x208]     ; 0043906d
    PUSH EDI                            ; 00439074
    ADD EAX,EDX                         ; 00439075
    MOV EDX,dword ptr [ESP + 0x214]     ; 00439077
    PUSH EDX                            ; 0043907e
    MOV ECX,dword ptr [ESP + 0x220]     ; 0043907f
    PUSH ECX                            ; 00439086
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00439087
    PUSH EDX                            ; 0043908e
    MOV ECX,dword ptr [ESP + 0x22c]     ; 0043908f
    PUSH ECX                            ; 00439096
    MOV EDX,dword ptr [ESP + 0x238]     ; 00439097
    PUSH EDX                            ; 0043909e
    MOV ECX,dword ptr [ESP + 0x240]     ; 0043909f
    PUSH ECX                            ; 004390a6
    PUSH EBP                            ; 004390a7
    PUSH EAX                            ; 004390a8
    PUSH 0x6182a0                       ; 004390a9 | = "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f,..."
    MOV EAX,dword ptr [ESP + 0x234]     ; 004390ae
    PUSH EAX                            ; 004390b5
    ADD EDI,0xac                        ; 004390b6
    INC EBX                             ; 004390bc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004390bd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x30                        ; 004390c2
    ADD EBP,0xac                        ; 004390c5
    MOV EDX,dword ptr [ESP + 0x224]     ; 004390cb
    MOV ECX,dword ptr [ESP + 0x220]     ; 004390d2
    MOV EAX,dword ptr [ESP + 0x218]     ; 004390d9
    ADD EDX,0xac                        ; 004390e0
    ADD ECX,0xac                        ; 004390e6
    ADD EAX,0xac                        ; 004390ec
    MOV dword ptr [ESP + 0x224],EDX     ; 004390f1
    MOV dword ptr [ESP + 0x220],ECX     ; 004390f8
    MOV dword ptr [ESP + 0x218],EAX     ; 004390ff
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00439106
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043910d
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00439114
    ADD EDX,0xac                        ; 0043911b
    ADD ECX,0xac                        ; 00439121
    ADD EAX,0xac                        ; 00439127
    MOV dword ptr [ESP + 0x21c],EDX     ; 0043912c
    MOV dword ptr [ESP + 0x214],ECX     ; 00439133
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043913a
    MOV dword ptr [ESP + 0x20c],EAX     ; 00439141
    ADD EDX,0xac                        ; 00439148
    MOV ECX,dword ptr [ESI + 0x3ce8c]   ; 0043914e
    MOV dword ptr [ESP + 0x210],EDX     ; 00439154
    CMP EBX,ECX                         ; 0043915b
    JL 0x0043905f                       ; 0043915d
        ;   XREF to: 0043905f (CONDITIONAL_JUMP)  ; LAB_0043905f
    LEA EAX,[EAX]                       ; 00439163
    LEA EDX,[EDX]                       ; 00439169
    NOP                                 ; 0043916f
    PUSH 0x112                          ; 00439170
        ;   Label: LAB_00439170
    PUSH 0x6182c7                       ; 00439175 | = "..\\core\\cloth.cpp"
    MOV EBX,dword ptr [ESP + 0x210]     ; 0043917a
    PUSH EBX                            ; 00439181
    XOR EDI,EDI                         ; 00439182
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00439184
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    MOV EBP,dword ptr [ESI + 0x104]     ; 00439189
    ADD ESP,0xc                         ; 0043918f
    TEST EBP,EBP                        ; 00439192
    JLE 0x004391e0                      ; 00439194
        ;   XREF to: 004391e0 (CONDITIONAL_JUMP)  ; LAB_004391e0
    LEA EDX,[ESI + 0x5798]              ; 00439196
    XOR EBP,EBP                         ; 0043919c
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0043919e
        ;   Label: LAB_0043919e
    MOV EBX,EDX                         ; 004391a4
    ADD EAX,EBP                         ; 004391a6
    INC EDI                             ; 004391a8
    FILD dword ptr [EAX]                ; 004391a9
    FMUL float ptr [0x0065bb44]         ; 004391ab | FLOAT_0065bb44
    FSTP float ptr [EBX]                ; 004391b1
    FILD dword ptr [EAX + 0x4]          ; 004391b3
    FMUL float ptr [0x0065bb44]         ; 004391b6 | FLOAT_0065bb44
    FSTP float ptr [EBX + 0x4]          ; 004391bc
    FILD dword ptr [EAX + 0x8]          ; 004391bf
    FMUL float ptr [0x0065bb44]         ; 004391c2 | FLOAT_0065bb44
    FSTP float ptr [EBX + 0x8]          ; 004391c8
    ADD EDX,0x11c                       ; 004391cb
    MOV EAX,dword ptr [ESI + 0x104]     ; 004391d1
    ADD EBP,0xc                         ; 004391d7
    CMP EDI,EAX                         ; 004391da
    JL 0x0043919e                       ; 004391dc
        ;   XREF to: 0043919e (CONDITIONAL_JUMP)  ; LAB_0043919e
    MOV EAX,EAX                         ; 004391de
    ADD ESP,0x228                       ; 004391e0
        ;   Label: LAB_004391e0
    POP EBP                             ; 004391e6
    POP EDI                             ; 004391e7
    POP ESI                             ; 004391e8
    POP EBX                             ; 004391e9
    RET                                 ; 004391ea
    PUSH EBX                            ; 004391eb
        ;   Label: LAB_004391eb
    MOV EDX,0x6181c6                    ; 004391ec | = "..\\core\\cloth.cpp"
    MOV ECX,0x9b                        ; 004391f1
    PUSH 0x6181d8                       ; 004391f6 | = "CCloth::load - Unable to open file %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 004391fb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00439201 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00439207
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0043920c
    JMP 0x00438d2a                      ; 0043920f
        ;   XREF to: 00438d2a (UNCONDITIONAL_JUMP)  ; LAB_00438d2a
    LEA ECX,[ESI + 0x3ce74]             ; 00439214
        ;   Label: LAB_00439214
    PUSH ECX                            ; 0043921a
    LEA ECX,[ESI + 0x3ce70]             ; 0043921b
    PUSH ECX                            ; 00439221
    MOV ECX,dword ptr [ESP + 0x208]     ; 00439222
    PUSH ECX                            ; 00439229
    PUSH EDI                            ; 0043922a
    PUSH EDX                            ; 0043922b
    PUSH EBX                            ; 0043922c
    PUSH EAX                            ; 0043922d
    PUSH EBP                            ; 0043922e
    PUSH 0x618273                       ; 0043922f | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 00439234
    PUSH EBX                            ; 0043923b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0043923c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x28                        ; 00439241
    JMP 0x00438eab                      ; 00439244
        ;   XREF to: 00438eab (UNCONDITIONAL_JUMP)  ; LAB_00438eab
    MOV dword ptr [ESI + 0x3ce84],0x0   ; 00439249
        ;   Label: LAB_00439249
    JMP 0x00438f17                      ; 00439253
        ;   XREF to: 00438f17 (UNCONDITIONAL_JUMP)  ; LAB_00438f17

