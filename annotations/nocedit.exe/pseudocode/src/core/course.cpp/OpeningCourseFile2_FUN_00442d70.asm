; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_course.cpp_OpeningCourseFile2_FUN_00442d70()
;
; Local Variables:
; undefined1       Stack[-0x17c]:1  local_17c
; undefined1       Stack[-0x14]:1  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443278
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_006190d7
;   TerminatedCString s_rt_006190ea
;   TerminatedCString s_Can_t_open_s_006190ed
;   TerminatedCString s_d_006190fb
;   TerminatedCString s_d_006190ff
;   TerminatedCString s_Importing_s_00619103
;   TerminatedCString s_core_course_cpp_00619110
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
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

    PUSH ESI                            ; 00442d70
        ;   Label: core_course.cpp_OpeningCourseFile2_FUN_00442d70
    PUSH EDI                            ; 00442d71
    PUSH EBP                            ; 00442d72
    SUB ESP,0x170                       ; 00442d73
    MOV EDI,dword ptr [ESP + 0x184]     ; 00442d79
    PUSH 0x184                          ; 00442d80
    PUSH 0x6190d7                       ; 00442d85 | = "..\\core\\course.cpp" | s_core_course_cpp_006190d7 = ..\core\course.cpp
    PUSH 0x6190ea                       ; 00442d8a | = "rt" | s_rt_006190ea = rt
    PUSH 0x0                            ; 00442d8f
    PUSH EDI                            ; 00442d91
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00442d92 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00442d97
    MOV ESI,EAX                         ; 00442d9a
    TEST EAX,EAX                        ; 00442d9c
    JZ 0x00442e7f                       ; 00442d9e | LAB_00442e7f
        ;   XREF to: 00442e7f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00442da4
    MOV EBX,EAX                         ; 00442da5
    PUSH EBX                            ; 00442da7
        ;   Label: LAB_00442da7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442da8 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00442dad
    TEST EAX,EAX                        ; 00442db0
    JL 0x00442db9                       ; 00442db2 | LAB_00442db9
        ;   XREF to: 00442db9 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00442db4
    JNZ 0x00442da7                      ; 00442db7 | LAB_00442da7
        ;   XREF to: 00442da7 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x16c]               ; 00442db9
        ;   Label: LAB_00442db9
    PUSH EAX                            ; 00442dc0
    PUSH 0x6190fb                       ; 00442dc1 | = "%d\n" | s_d_006190fb = %d

    PUSH ESI                            ; 00442dc6
    MOV EBX,ESI                         ; 00442dc7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442dc9 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00442dce
    PUSH EBX                            ; 00442dd1
        ;   Label: LAB_00442dd1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442dd2 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00442dd7
    TEST EAX,EAX                        ; 00442dda
    JL 0x00442de3                       ; 00442ddc | LAB_00442de3
        ;   XREF to: 00442de3 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00442dde
    JNZ 0x00442dd1                      ; 00442de1 | LAB_00442dd1
        ;   XREF to: 00442dd1 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x170]               ; 00442de3
        ;   Label: LAB_00442de3
    PUSH EAX                            ; 00442dea
    PUSH 0x6190ff                       ; 00442deb | = "%d\n" | s_d_006190ff = %d

    PUSH ESI                            ; 00442df0
    MOV EBX,ESI                         ; 00442df1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442df3 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00442df8
    PUSH EBX                            ; 00442dfb
        ;   Label: LAB_00442dfb
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442dfc | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00442e01
    TEST EAX,EAX                        ; 00442e04
    JL 0x00442e0d                       ; 00442e06 | LAB_00442e0d
        ;   XREF to: 00442e0d (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00442e08
    JNZ 0x00442dfb                      ; 00442e0b | LAB_00442dfb
        ;   XREF to: 00442dfb (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00442e0d
        ;   Label: LAB_00442e0d
    PUSH 0x619103                       ; 00442e0e | = "Importing %s" | s_Importing_s_00619103 = Importing %s
    LEA EAX,[ESP + 0xc]                 ; 00442e13
    PUSH EAX                            ; 00442e17
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00442e18 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00442e1d
    LEA EAX,[ESP + 0x4]                 ; 00442e20
    PUSH EAX                            ; 00442e24
    MOV ECX,dword ptr [0x00678a60]      ; 00442e25 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00442e2b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00442e2c | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00442e31
    MOV EBX,dword ptr [ESP + 0x170]     ; 00442e34
    PUSH EBX                            ; 00442e3b
    PUSH ESI                            ; 00442e3c
    MOV EDI,dword ptr [ESP + 0x18c]     ; 00442e3d
    PUSH EDI                            ; 00442e44
    CALL core_course.cpp_CCourse_importMatrices_FUN_00442ea0 ; 00442e45 | void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)
        ;   XREF to: 00442ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00442e4a
    MOV EBP,dword ptr [0x00678a60]      ; 00442e4d | CEditorTools * g_CEditorToolsPtr
    PUSH EBP                            ; 00442e53 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00442e54 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00442e59
    PUSH 0x1a7                          ; 00442e5c
    PUSH 0x619110                       ; 00442e61 | = "..\\core\\course.cpp" | s_core_course_cpp_00619110 = ..\core\course.cpp
    PUSH ESI                            ; 00442e66
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00442e67 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 00442e6c
    ADD ESP,0xc                         ; 00442e71
    POP EBX                             ; 00442e74
    ADD ESP,0x170                       ; 00442e75
    POP EBP                             ; 00442e7b
    POP EDI                             ; 00442e7c
    POP ESI                             ; 00442e7d
    RET                                 ; 00442e7e
    PUSH EDI                            ; 00442e7f
        ;   Label: LAB_00442e7f
    PUSH 0x6190ed                       ; 00442e80 | = "Can't open %s" | s_Can_t_open_s_006190ed = Can't open %s
    MOV EDX,dword ptr [0x00678a60]      ; 00442e85 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00442e8b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00442e8c | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00442e91
    XOR EAX,EAX                         ; 00442e94
    ADD ESP,0x170                       ; 00442e96
    POP EBP                             ; 00442e9c
    POP EDI                             ; 00442e9d
    POP ESI                             ; 00442e9e
    RET                                 ; 00442e9f

