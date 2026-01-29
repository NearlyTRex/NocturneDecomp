; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh *this_ptr,char *filename)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_Importing_s_00637c09
;   TerminatedCString s_shape_meshlod_cpp_00637c16
;   TerminatedCString s_rt_00637c2b
;   TerminatedCString s_shape_meshlod_cpp_00637c2e
;   TerminatedCString s_Can_t_open_s_00637c43
;   TerminatedCString s_shape_meshlod_cpp_00637c51
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ad60
        ;   Label: shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60
    PUSH ESI                            ; 0051ad61
    PUSH EBP                            ; 0051ad62
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051ad63
    PUSH ESI                            ; 0051ad67
    PUSH 0x637c09                       ; 0051ad68 | = "Importing %s"
    MOV EDX,dword ptr [0x00678a60]      ; 0051ad6d | g_CEditorToolsPtr
    PUSH EDX                            ; 0051ad73 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0051ad74
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0051ad79
    PUSH 0x10ce                         ; 0051ad7c
    PUSH 0x637c16                       ; 0051ad81 | = "..\\shape\\meshlod.cpp"
    PUSH 0x637c2b                       ; 0051ad86 | = "rt"
    PUSH 0x0                            ; 0051ad8b
    PUSH ESI                            ; 0051ad8d
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0051ad8e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0051ad93
    MOV EBX,EAX                         ; 0051ad96
    TEST EAX,EAX                        ; 0051ad98
    JZ 0x0051adc1                       ; 0051ad9a
        ;   XREF to: 0051adc1 (CONDITIONAL_JUMP)  ; LAB_0051adc1
    PUSH EBX                            ; 0051ad9c
        ;   Label: LAB_0051ad9c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051ad9d
    PUSH EBP                            ; 0051ada1
    CALL shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 ; 0051ada2
        ;   XREF to: 0051adf0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0051ada7
    PUSH 0x10d7                         ; 0051adaa
    PUSH 0x637c51                       ; 0051adaf | = "..\\shape\\meshlod.cpp"
    PUSH EBX                            ; 0051adb4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051adb5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0051adba
    POP EBP                             ; 0051adbd
    POP ESI                             ; 0051adbe
    POP EBX                             ; 0051adbf
    RET                                 ; 0051adc0
    PUSH EDI                            ; 0051adc1
        ;   Label: LAB_0051adc1
    PUSH ESI                            ; 0051adc2
    MOV ECX,0x637c2e                    ; 0051adc3 | = "..\\shape\\meshlod.cpp"
    MOV EDI,0x10cf                      ; 0051adc8
    PUSH 0x637c43                       ; 0051adcd | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0051add2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0051add8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051adde
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0051ade3
    POP EDI                             ; 0051ade6
    JMP 0x0051ad9c                      ; 0051ade7
        ;   XREF to: 0051ad9c (UNCONDITIONAL_JUMP)  ; LAB_0051ad9c

