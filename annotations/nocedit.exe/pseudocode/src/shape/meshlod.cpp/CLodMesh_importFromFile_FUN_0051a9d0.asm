; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh * this_ptr, char * filename)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_Importing_s_00637ad3
;   TerminatedCString s_shape_meshlod_cpp_00637ae0
;   TerminatedCString s_rt_00637af5
;   TerminatedCString s_shape_meshlod_cpp_00637af8
;   TerminatedCString s_Can_t_open_s_00637b0d
;   TerminatedCString s_shape_meshlod_cpp_00637b1b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a9d0
        ;   Label: shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0
    PUSH ESI                            ; 0051a9d1
    PUSH EBP                            ; 0051a9d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051a9d3
    PUSH ESI                            ; 0051a9d7
    PUSH 0x637ad3                       ; 0051a9d8 | = "Importing %s" | s_Importing_s_00637ad3 = Importing %s
    MOV EDX,dword ptr [0x00678a60]      ; 0051a9dd | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0051a9e3 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0051a9e4 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051a9e9
    PUSH 0x1062                         ; 0051a9ec
    PUSH 0x637ae0                       ; 0051a9f1 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637ae0 = ..\shape\meshlod.cpp
    PUSH 0x637af5                       ; 0051a9f6 | = "rt" | s_rt_00637af5 = rt
    PUSH 0x0                            ; 0051a9fb
    PUSH ESI                            ; 0051a9fd
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0051a9fe | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0051aa03
    MOV EBX,EAX                         ; 0051aa06
    TEST EAX,EAX                        ; 0051aa08
    JZ 0x0051aa31                       ; 0051aa0a | LAB_0051aa31
        ;   XREF to: 0051aa31 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0051aa0c
        ;   Label: LAB_0051aa0c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051aa0d
    PUSH EBP                            ; 0051aa11
    CALL shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 ; 0051aa12 | void shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60(CLodMesh * this_ptr, FILE * file_handle)
        ;   XREF to: 0051aa60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051aa17
    PUSH 0x106b                         ; 0051aa1a
    PUSH 0x637b1b                       ; 0051aa1f | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637b1b = ..\shape\meshlod.cpp
    PUSH EBX                            ; 0051aa24
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0051aa25 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051aa2a
    POP EBP                             ; 0051aa2d
    POP ESI                             ; 0051aa2e
    POP EBX                             ; 0051aa2f
    RET                                 ; 0051aa30
    PUSH EDI                            ; 0051aa31
        ;   Label: LAB_0051aa31
    PUSH ESI                            ; 0051aa32
    MOV ECX,0x637af8                    ; 0051aa33 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637af8 = ..\shape\meshlod.cpp
    MOV EDI,0x1063                      ; 0051aa38
    PUSH 0x637b0d                       ; 0051aa3d | = "Can't open %s" | s_Can_t_open_s_00637b0d = Can't open %s
    MOV dword ptr [0x02f0ca48],ECX      ; 0051aa42 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0051aa48 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051aa4e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051aa53
    POP EDI                             ; 0051aa56
    JMP 0x0051aa0c                      ; 0051aa57 | LAB_0051aa0c
        ;   XREF to: 0051aa0c (UNCONDITIONAL_JUMP)

