; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_course_cpp_OpeningCourseFileMaybe_FUN_00442bc0(void)
;
; Local Variables:
; undefined1       Stack[-0x184]:1  local_184
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044366c
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_00619049
;   TerminatedCString s_rt_0061905c
;   TerminatedCString s_Can_t_open_s_0061905f
;   TerminatedCString s_d_0061906d
;   TerminatedCString s_d_d_00619071
;   TerminatedCString s_s_contains_d_nodes_must__00619078
;   TerminatedCString s_core_course_cpp_006190a4
;   TerminatedCString s_Importing_s_006190b7
;   TerminatedCString s_core_course_cpp_006190c4
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_course.cpp_CCourse_importMatrices_FUN_00442ea0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442bc0
        ;   Label: core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
    PUSH ESI                            ; 00442bc1
    PUSH EDI                            ; 00442bc2
    PUSH EBP                            ; 00442bc3
    SUB ESP,0x174                       ; 00442bc4
    MOV EDI,dword ptr [ESP + 0x18c]     ; 00442bca
    PUSH 0x14b                          ; 00442bd1
    PUSH 0x619049                       ; 00442bd6 | = "..\\core\\course.cpp"
    PUSH 0x61905c                       ; 00442bdb | = "rt"
    PUSH 0x0                            ; 00442be0
    PUSH EDI                            ; 00442be2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00442be3
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00442be8
    MOV ESI,EAX                         ; 00442beb
    TEST EAX,EAX                        ; 00442bed
    JZ 0x00442d0d                       ; 00442bef
        ;   XREF to: 00442d0d (CONDITIONAL_JUMP)  ; LAB_00442d0d
    MOV EBX,EAX                         ; 00442bf5
    PUSH EBX                            ; 00442bf7
        ;   Label: LAB_00442bf7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442bf8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00442bfd
    TEST EAX,EAX                        ; 00442c00
    JL 0x00442c09                       ; 00442c02
        ;   XREF to: 00442c09 (CONDITIONAL_JUMP)  ; LAB_00442c09
    CMP EAX,0xa                         ; 00442c04
    JNZ 0x00442bf7                      ; 00442c07
        ;   XREF to: 00442bf7 (CONDITIONAL_JUMP)  ; LAB_00442bf7
    LEA EAX,[ESP + 0x168]               ; 00442c09
        ;   Label: LAB_00442c09
    PUSH EAX                            ; 00442c10
    PUSH 0x61906d                       ; 00442c11 | = "%d\n"
    PUSH ESI                            ; 00442c16
    MOV EBX,ESI                         ; 00442c17
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442c19
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00442c1e
    PUSH EBX                            ; 00442c21
        ;   Label: LAB_00442c21
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442c22
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00442c27
    TEST EAX,EAX                        ; 00442c2a
    JL 0x00442c33                       ; 00442c2c
        ;   XREF to: 00442c33 (CONDITIONAL_JUMP)  ; LAB_00442c33
    CMP EAX,0xa                         ; 00442c2e
    JNZ 0x00442c21                      ; 00442c31
        ;   XREF to: 00442c21 (CONDITIONAL_JUMP)  ; LAB_00442c21
    LEA EAX,[ESP + 0x170]               ; 00442c33
        ;   Label: LAB_00442c33
    PUSH EAX                            ; 00442c3a
    LEA EAX,[ESP + 0x170]               ; 00442c3b
    PUSH EAX                            ; 00442c42
    PUSH 0x619071                       ; 00442c43 | = "%d,%d\n"
    PUSH ESI                            ; 00442c48
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442c49
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00442c4e
    MOV ECX,dword ptr [ESP + 0x16c]     ; 00442c51
    CMP ECX,0x1                         ; 00442c58
    JNZ 0x00442d2f                      ; 00442c5b
        ;   XREF to: 00442d2f (CONDITIONAL_JUMP)  ; LAB_00442d2f
    MOV EBX,ESI                         ; 00442c61
    PUSH EBX                            ; 00442c63
        ;   Label: LAB_00442c63
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442c64
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00442c69
    TEST EAX,EAX                        ; 00442c6c
    JL 0x00442c75                       ; 00442c6e
        ;   XREF to: 00442c75 (CONDITIONAL_JUMP)  ; LAB_00442c75
    CMP EAX,0xa                         ; 00442c70
    JNZ 0x00442c63                      ; 00442c73
        ;   XREF to: 00442c63 (CONDITIONAL_JUMP)  ; LAB_00442c63
    MOV EBX,ESI                         ; 00442c75
        ;   Label: LAB_00442c75
    PUSH EBX                            ; 00442c77
        ;   Label: LAB_00442c77
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442c78
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00442c7d
    TEST EAX,EAX                        ; 00442c80
    JL 0x00442c89                       ; 00442c82
        ;   XREF to: 00442c89 (CONDITIONAL_JUMP)  ; LAB_00442c89
    CMP EAX,0xa                         ; 00442c84
    JNZ 0x00442c77                      ; 00442c87
        ;   XREF to: 00442c77 (CONDITIONAL_JUMP)  ; LAB_00442c77
    MOV EBX,ESI                         ; 00442c89
        ;   Label: LAB_00442c89
    PUSH EBX                            ; 00442c8b
        ;   Label: LAB_00442c8b
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442c8c
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00442c91
    TEST EAX,EAX                        ; 00442c94
    JL 0x00442c9d                       ; 00442c96
        ;   XREF to: 00442c9d (CONDITIONAL_JUMP)  ; LAB_00442c9d
    CMP EAX,0xa                         ; 00442c98
    JNZ 0x00442c8b                      ; 00442c9b
        ;   XREF to: 00442c8b (CONDITIONAL_JUMP)  ; LAB_00442c8b
    PUSH EDI                            ; 00442c9d
        ;   Label: LAB_00442c9d
    PUSH 0x6190b7                       ; 00442c9e | = "Importing %s"
    LEA EAX,[ESP + 0x8]                 ; 00442ca3
    PUSH EAX                            ; 00442ca7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00442ca8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00442cad
    MOV EAX,ESP                         ; 00442cb0
    PUSH EAX                            ; 00442cb2
    MOV EBP,dword ptr [0x00678a60]      ; 00442cb3 | g_CEditorToolsPtr
    PUSH EBP                            ; 00442cb9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00442cba
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00442cbf
    MOV EAX,dword ptr [ESP + 0x170]     ; 00442cc2
    PUSH EAX                            ; 00442cc9
    PUSH ESI                            ; 00442cca
    MOV EDX,dword ptr [ESP + 0x190]     ; 00442ccb
    PUSH EDX                            ; 00442cd2
    CALL core_course.cpp_CCourse_importMatrices_FUN_00442ea0 ; 00442cd3
        ;   XREF to: 00442ea0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)
    ADD ESP,0xc                         ; 00442cd8
    MOV ECX,dword ptr [0x00678a60]      ; 00442cdb | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00442ce1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00442ce2
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00442ce7
    PUSH 0x178                          ; 00442cea
    PUSH 0x6190c4                       ; 00442cef | = "..\\core\\course.cpp"
    PUSH ESI                            ; 00442cf4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00442cf5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,0x1                         ; 00442cfa
    ADD ESP,0xc                         ; 00442cff
    ADD ESP,0x174                       ; 00442d02
    POP EBP                             ; 00442d08
    POP EDI                             ; 00442d09
    POP ESI                             ; 00442d0a
    POP EBX                             ; 00442d0b
    RET                                 ; 00442d0c
    PUSH EDI                            ; 00442d0d
        ;   Label: LAB_00442d0d
    PUSH 0x61905f                       ; 00442d0e | = "Can't open %s"
    MOV EDX,dword ptr [0x00678a60]      ; 00442d13 | g_CEditorToolsPtr
    PUSH EDX                            ; 00442d19 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00442d1a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00442d1f
    XOR EAX,EAX                         ; 00442d22
    ADD ESP,0x174                       ; 00442d24
    POP EBP                             ; 00442d2a
    POP EDI                             ; 00442d2b
    POP ESI                             ; 00442d2c
    POP EBX                             ; 00442d2d
    RET                                 ; 00442d2e
    PUSH ECX                            ; 00442d2f
        ;   Label: LAB_00442d2f
    PUSH EDI                            ; 00442d30
    PUSH 0x619078                       ; 00442d31 | = "%s contains %d nodes - must only cont..."
    MOV EDI,dword ptr [0x00678a60]      ; 00442d36 | g_CEditorToolsPtr
    PUSH EDI                            ; 00442d3c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00442d3d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00442d42
    PUSH 0x161                          ; 00442d45
    PUSH 0x6190a4                       ; 00442d4a | = "..\\core\\course.cpp"
    PUSH ESI                            ; 00442d4f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00442d50
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00442d55
    XOR EAX,EAX                         ; 00442d58
    ADD ESP,0x174                       ; 00442d5a
    POP EBP                             ; 00442d60
    POP EDI                             ; 00442d61
    POP ESI                             ; 00442d62
    POP EBX                             ; 00442d63
    RET                                 ; 00442d64

