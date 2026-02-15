; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dmodel_cpp_copyFile_FUN_0047c930(char *source_filename,char *destination_filename,int show_error_if_missing)
;
; Parameters:
; char *           Stack[0x4]:4   source_filename
; char *           Stack[0x8]:4   destination_filename
; int              Stack[0xc]:4   show_error_if_missing
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 at 0047cb95
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d975
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_006205bb
;   TerminatedCString s_rb_006205ce
;   TerminatedCString s_Can_t_open_s_006205d1
;   TerminatedCString s_core_dmodel_cpp_006205df
;   TerminatedCString s_wb_006205f2
;   TerminatedCString s_core_dmodel_cpp_006205f5
;   TerminatedCString s_Can_t_create_s_00620608
;   TerminatedCString s_Copying_s_s_00620618
;   TerminatedCString s_core_dmodel_cpp_00620629
;   TerminatedCString s_core_dmodel_cpp_0062063c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c930
        ;   Label: core_dmodel.cpp_copyFile_FUN_0047c930
    PUSH ESI                            ; 0047c931
    PUSH EDI                            ; 0047c932
    PUSH EBP                            ; 0047c933
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047c934
    PUSH 0xb7c                          ; 0047c938
    PUSH 0x6205bb                       ; 0047c93d | = "..\\core\\dmodel.cpp"
    PUSH 0x6205ce                       ; 0047c942 | = "rb"
    PUSH 0x0                            ; 0047c947
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047c949
    PUSH EDX                            ; 0047c94d
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0047c94e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EDI,EAX                         ; 0047c953
    ADD ESP,0x14                        ; 0047c955
    MOV ESI,EAX                         ; 0047c958
    TEST EAX,EAX                        ; 0047c95a
    JNZ 0x0047c98f                      ; 0047c95c
        ;   XREF to: 0047c98f (CONDITIONAL_JUMP)  ; LAB_0047c98f
    CMP dword ptr [ESP + 0x1c],0x0      ; 0047c95e
    JNZ 0x0047c96f                      ; 0047c963
        ;   XREF to: 0047c96f (CONDITIONAL_JUMP)  ; LAB_0047c96f
    MOV EAX,0x1                         ; 0047c965
    POP EBP                             ; 0047c96a
    POP EDI                             ; 0047c96b
    POP ESI                             ; 0047c96c
    POP EBX                             ; 0047c96d
    RET                                 ; 0047c96e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047c96f
        ;   Label: LAB_0047c96f
    PUSH EDX                            ; 0047c973
    PUSH 0x6205d1                       ; 0047c974 | = "Can't open %s"
    MOV ECX,dword ptr [0x00678a60]      ; 0047c979 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047c97f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047c980
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047c985
    XOR EAX,EAX                         ; 0047c988
    POP EBP                             ; 0047c98a
    POP EDI                             ; 0047c98b
    POP ESI                             ; 0047c98c
    POP EBX                             ; 0047c98d
    RET                                 ; 0047c98e
    PUSH 0xb83                          ; 0047c98f
        ;   Label: LAB_0047c98f
    PUSH 0x6205df                       ; 0047c994 | = "..\\core\\dmodel.cpp"
    PUSH 0x6205f2                       ; 0047c999 | = "wb"
    PUSH 0x0                            ; 0047c99e
    PUSH EBP                            ; 0047c9a0
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0047c9a1
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0047c9a6
    MOV EBX,EAX                         ; 0047c9a9
    TEST EAX,EAX                        ; 0047c9ab
    JZ 0x0047c9e2                       ; 0047c9ad
        ;   XREF to: 0047c9e2 (CONDITIONAL_JUMP)  ; LAB_0047c9e2
    PUSH EBP                            ; 0047c9af
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047c9b0
    PUSH ECX                            ; 0047c9b4
    PUSH 0x620618                       ; 0047c9b5 | = "Copying %s -> %s"
    MOV EDI,dword ptr [0x00678a60]      ; 0047c9ba | g_CEditorToolsPtr
    PUSH EDI                            ; 0047c9c0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0047c9c1
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x10                        ; 0047c9c6
    PUSH ESI                            ; 0047c9c9
        ;   Label: LAB_0047c9c9
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047c9ca
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0047c9cf
    TEST EAX,EAX                        ; 0047c9d2
    JL 0x0047ca11                       ; 0047c9d4
        ;   XREF to: 0047ca11 (CONDITIONAL_JUMP)  ; LAB_0047ca11
    PUSH EBX                            ; 0047c9d6
    PUSH EAX                            ; 0047c9d7
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0047c9d8
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0047c9dd
    JMP 0x0047c9c9                      ; 0047c9e0
        ;   XREF to: 0047c9c9 (UNCONDITIONAL_JUMP)  ; LAB_0047c9c9
    PUSH 0xb85                          ; 0047c9e2
        ;   Label: LAB_0047c9e2
    PUSH 0x6205f5                       ; 0047c9e7 | = "..\\core\\dmodel.cpp"
    PUSH EDI                            ; 0047c9ec
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0047c9ed
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047c9f2
    PUSH EBP                            ; 0047c9f5
    PUSH 0x620608                       ; 0047c9f6 | = "Can't create %s"
    MOV EBP,dword ptr [0x00678a60]      ; 0047c9fb | g_CEditorToolsPtr
    PUSH EBP                            ; 0047ca01 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047ca02
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047ca07
    XOR EAX,EAX                         ; 0047ca0a
    POP EBP                             ; 0047ca0c
    POP EDI                             ; 0047ca0d
    POP ESI                             ; 0047ca0e
    POP EBX                             ; 0047ca0f
    RET                                 ; 0047ca10
    PUSH 0xb92                          ; 0047ca11
        ;   Label: LAB_0047ca11
    PUSH 0x620629                       ; 0047ca16 | = "..\\core\\dmodel.cpp"
    PUSH ESI                            ; 0047ca1b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0047ca1c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047ca21
    PUSH 0xb93                          ; 0047ca24
    PUSH 0x62063c                       ; 0047ca29 | = "..\\core\\dmodel.cpp"
    PUSH EBX                            ; 0047ca2e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0047ca2f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,0x1                         ; 0047ca34
    ADD ESP,0xc                         ; 0047ca39
    POP EBP                             ; 0047ca3c
    POP EDI                             ; 0047ca3d
    POP ESI                             ; 0047ca3e
    POP EBX                             ; 0047ca3f
    RET                                 ; 0047ca40

