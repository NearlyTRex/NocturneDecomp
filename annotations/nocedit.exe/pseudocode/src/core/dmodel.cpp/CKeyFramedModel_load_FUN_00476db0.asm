; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[9]:
;   core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0 at 0043dccd
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438dc0
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d6b7
;   core_dmodel.cpp_loadModel_FUN_00478c00 at 00478c8a
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 at 0047ee97
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0 at 00503e4a
;   core_moon.cpp_CMoon_init_FUN_00529ae0 at 00529c11
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569e1b
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 0059842c
;
; Referenced Globals:
;   TerminatedCString s_rb_0061f2e3
;   TerminatedCString s_models_0061f2e6
;   TerminatedCString s_core_dmodel_cpp_0061f2ed
;   TerminatedCString s_Can_t_open_keyframed_mod_0061f300
;   TerminatedCString s_core_dmodel_cpp_0061f31e
;   TerminatedCString s_rt_0061f331
;   TerminatedCString s_models_0061f334
;   TerminatedCString s_core_dmodel_cpp_0061f33b
;   TerminatedCString s_Can_t_open_keyframed_mod_0061f34e
;   TerminatedCString s_core_dmodel_cpp_0061f36c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_ungetc_FUN_005fea10
;   engine_dosio.cpp_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476db0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
    PUSH ESI                            ; 00476db1
    PUSH EDI                            ; 00476db2
    PUSH EBP                            ; 00476db3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476db4
    PUSH EBX                            ; 00476db8
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00476db9
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00476dbe
    PUSH 0x61f2e3                       ; 00476dc1 | = "rb"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00476dc6
    PUSH EDX                            ; 00476dca
    PUSH 0x61f2e6                       ; 00476dcb | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00476dd0
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00476dd5
    MOV EBP,EAX                         ; 00476dd8
    TEST EAX,EAX                        ; 00476dda
    JZ 0x00476ede                       ; 00476ddc
        ;   XREF to: 00476ede (CONDITIONAL_JUMP)  ; LAB_00476ede
    MOV ESI,dword ptr [ESP + 0x18]      ; 00476de2
        ;   Label: LAB_00476de2
    MOV EDI,EBX                         ; 00476de6
    PUSH EDI                            ; 00476de8
    MOV AL,byte ptr [ESI]               ; 00476de9
        ;   Label: LAB_00476de9
    MOV byte ptr [EDI],AL               ; 00476deb
    CMP AL,0x0                          ; 00476ded
    JZ 0x00476e01                       ; 00476def
        ;   XREF to: 00476e01 (CONDITIONAL_JUMP)  ; LAB_00476e01
    MOV AL,byte ptr [ESI + 0x1]         ; 00476df1
    ADD ESI,0x2                         ; 00476df4
    MOV byte ptr [EDI + 0x1],AL         ; 00476df7
    ADD EDI,0x2                         ; 00476dfa
    CMP AL,0x0                          ; 00476dfd
    JNZ 0x00476de9                      ; 00476dff
        ;   XREF to: 00476de9 (CONDITIONAL_JUMP)  ; LAB_00476de9
    POP EDI                             ; 00476e01
        ;   Label: LAB_00476e01
    PUSH EBP                            ; 00476e02
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00476e03
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00476e08
    PUSH EBP                            ; 00476e0b
    PUSH EAX                            ; 00476e0c
    MOV ESI,EAX                         ; 00476e0d
    CALL crt_stdio.c_ungetc_FUN_005fea10 ; 00476e0f
        ;   XREF to: 005fea10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_ungetc_FUN_005fea10(int character, _FILE * stream)
    ADD ESP,0x8                         ; 00476e14
    CMP ESI,0x2f                        ; 00476e17
    JNZ 0x00476f0b                      ; 00476e1a
        ;   XREF to: 00476f0b (CONDITIONAL_JUMP)  ; LAB_00476f0b
    PUSH 0xc3                           ; 00476e20
    PUSH 0x61f31e                       ; 00476e25 | = "..\\core\\dmodel.cpp"
    PUSH EBP                            ; 00476e2a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00476e2b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00476e30
    PUSH 0x61f331                       ; 00476e33 | = "rt"
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00476e38
    PUSH EBP                            ; 00476e3c
    PUSH 0x61f334                       ; 00476e3d | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00476e42
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00476e47
    MOV EBP,EAX                         ; 00476e4a
    TEST EAX,EAX                        ; 00476e4c
    JNZ 0x00476e77                      ; 00476e4e
        ;   XREF to: 00476e77 (CONDITIONAL_JUMP)  ; LAB_00476e77
    MOV ECX,dword ptr [ESP + 0x18]      ; 00476e50
    PUSH ECX                            ; 00476e54
    MOV EAX,0x61f33b                    ; 00476e55 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xc5                        ; 00476e5a
    PUSH 0x61f34e                       ; 00476e5f | = "Can't open keyframed model %s"
    MOV [0x02f0ca48],EAX                ; 00476e64 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00476e69 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00476e6f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00476e74
    PUSH EBP                            ; 00476e77
        ;   Label: LAB_00476e77
    PUSH EBX                            ; 00476e78
    CALL core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 ; 00476e79
        ;   XREF to: 00477110 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, _FILE * file)
    ADD ESP,0x8                         ; 00476e7e
        ;   Label: LAB_00476e7e
    PUSH 0xcd                           ; 00476e81
    PUSH 0x61f36c                       ; 00476e86 | = "..\\core\\dmodel.cpp"
    PUSH EBP                            ; 00476e8b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00476e8c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00476e91
    PUSH EBX                            ; 00476e94
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 00476e95
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 00476e9a
    MOV ESI,dword ptr [EBX + 0x120]     ; 00476e9d
    XOR EDX,EDX                         ; 00476ea3
    TEST ESI,ESI                        ; 00476ea5
    JLE 0x00476ed0                      ; 00476ea7
        ;   XREF to: 00476ed0 (CONDITIONAL_JUMP)  ; LAB_00476ed0
    MOV EAX,EBX                         ; 00476ea9
    MOV dword ptr [EAX + 0x128],0x0     ; 00476eab
        ;   Label: LAB_00476eab
    INC EDX                             ; 00476eb5
    MOV EDI,dword ptr [EBX + 0x120]     ; 00476eb6
    ADD EAX,0x48                        ; 00476ebc
    CMP EDX,EDI                         ; 00476ebf
    JL 0x00476eab                       ; 00476ec1
        ;   XREF to: 00476eab (CONDITIONAL_JUMP)  ; LAB_00476eab
    LEA EAX,[EAX]                       ; 00476ec3
    LEA EDX,[EDX]                       ; 00476ec9
    NOP                                 ; 00476ecf
    PUSH EBX                            ; 00476ed0
        ;   Label: LAB_00476ed0
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 ; 00476ed1
        ;   XREF to: 00477e60 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00476ed6
    POP EBP                             ; 00476ed9
    POP EDI                             ; 00476eda
    POP ESI                             ; 00476edb
    POP EBX                             ; 00476edc
    RET                                 ; 00476edd
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476ede
        ;   Label: LAB_00476ede
    PUSH EDI                            ; 00476ee2
    MOV ECX,0x61f2ed                    ; 00476ee3 | = "..\\core\\dmodel.cpp"
    MOV ESI,0xb8                        ; 00476ee8
    PUSH 0x61f300                       ; 00476eed | = "Can't open keyframed model %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00476ef2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00476ef8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00476efe
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00476f03
    JMP 0x00476de2                      ; 00476f06
        ;   XREF to: 00476de2 (UNCONDITIONAL_JUMP)  ; LAB_00476de2
    PUSH EBP                            ; 00476f0b
        ;   Label: LAB_00476f0b
    PUSH EBX                            ; 00476f0c
    CALL core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 ; 00476f0d
        ;   XREF to: 00476f20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel * this_ptr, _FILE * file)
    JMP 0x00476e7e                      ; 00476f12
        ;   XREF to: 00476e7e (UNCONDITIONAL_JUMP)  ; LAB_00476e7e

