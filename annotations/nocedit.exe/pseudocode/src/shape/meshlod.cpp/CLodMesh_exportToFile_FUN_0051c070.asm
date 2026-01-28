; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_exportToFile_FUN_0051c070(CLodMesh *this_ptr,char *filename)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_Exporting_s_00637e25
;   TerminatedCString s_shape_meshlod_cpp_00637e32
;   TerminatedCString s_wt_00637e47
;   TerminatedCString s_shape_meshlod_cpp_00637e4a
;   TerminatedCString s_Can_t_create_s_00637e5f
;   TerminatedCString s_shape_meshlod_cpp_00637e6f
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
;   shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c070
        ;   Label: shape_meshlod.cpp_CLodMesh_exportToFile_FUN_0051c070
    PUSH ESI                            ; 0051c071
    PUSH EBP                            ; 0051c072
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051c073
    PUSH ESI                            ; 0051c077
    PUSH 0x637e25                       ; 0051c078 | = "Exporting %s"
    MOV EDX,dword ptr [0x00678a60]      ; 0051c07d | g_CEditorToolsPtr
    PUSH EDX                            ; 0051c083 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0051c084
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0051c089
    PUSH 0x133e                         ; 0051c08c
    PUSH 0x637e32                       ; 0051c091 | = "..\\shape\\meshlod.cpp"
    PUSH 0x637e47                       ; 0051c096 | = "wt"
    PUSH 0x0                            ; 0051c09b
    PUSH ESI                            ; 0051c09d
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0051c09e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0051c0a3
    MOV EBX,EAX                         ; 0051c0a6
    TEST EAX,EAX                        ; 0051c0a8
    JZ 0x0051c0d1                       ; 0051c0aa
        ;   XREF to: 0051c0d1 (CONDITIONAL_JUMP)  ; LAB_0051c0d1
    PUSH EBX                            ; 0051c0ac
        ;   Label: LAB_0051c0ac
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051c0ad
    PUSH EBP                            ; 0051c0b1
    CALL shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100 ; 0051c0b2
        ;   XREF to: 0051c100 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh * this_ptr, FILE * file_ptr)
    ADD ESP,0x8                         ; 0051c0b7
    PUSH 0x1347                         ; 0051c0ba
    PUSH 0x637e6f                       ; 0051c0bf | = "..\\shape\\meshlod.cpp"
    PUSH EBX                            ; 0051c0c4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051c0c5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0051c0ca
    POP EBP                             ; 0051c0cd
    POP ESI                             ; 0051c0ce
    POP EBX                             ; 0051c0cf
    RET                                 ; 0051c0d0
    PUSH EDI                            ; 0051c0d1
        ;   Label: LAB_0051c0d1
    PUSH ESI                            ; 0051c0d2
    MOV ECX,0x637e4a                    ; 0051c0d3 | = "..\\shape\\meshlod.cpp"
    MOV EDI,0x133f                      ; 0051c0d8
    PUSH 0x637e5f                       ; 0051c0dd | = "Can't create %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0051c0e2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0051c0e8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051c0ee
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0051c0f3
    POP EDI                             ; 0051c0f6
    JMP 0x0051c0ac                      ; 0051c0f7
        ;   XREF to: 0051c0ac (UNCONDITIONAL_JUMP)  ; LAB_0051c0ac

