; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_copyFile_FUN_00537dd0(char *src_filename,char *dest_filename,char *directory)
;
; Parameters:
; char *           Stack[0x4]:4   src_filename
; char *           Stack[0x8]:4   dest_filename
; char *           Stack[0xc]:4   directory
;
; Referenced Globals:
;   TerminatedCString s_Can_t_find_s_s_to_copy_t_0063bc4b
;   TerminatedCString s_rb_0063bc6d
;   TerminatedCString s_core_msnedit_cpp_0063bc70
;   TerminatedCString s_Can_t_open_world_s_0063bc84
;   TerminatedCString s_wb_0063bc98
;   TerminatedCString s_core_msnedit_cpp_0063bc9b
;   TerminatedCString s_Can_t_create_world_s_0063bcaf
;   TerminatedCString s_core_msnedit_cpp_0063bcc5
;   TerminatedCString s_Error_reading_world_s_0063bcd9
;   TerminatedCString s_core_msnedit_cpp_0063bcf0
;   TerminatedCString s_Error_writing_world_s_0063bd04
;   TerminatedCString s_core_msnedit_cpp_0063bd1b
;   TerminatedCString s_core_msnedit_cpp_0063bd2f
;   TerminatedCString s_Copied_s_s_to_s_s_0063bd43
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_dosio.cpp_getFileSize_FUN_00481880
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537dd0
        ;   Label: core_msnedit.cpp_copyFile_FUN_00537dd0
    PUSH ESI                            ; 00537dd1
    PUSH EDI                            ; 00537dd2
    PUSH EBP                            ; 00537dd3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00537dd4
    MOV EDX,dword ptr [ESP + 0x14]      ; 00537dd8
    PUSH EDX                            ; 00537ddc
    PUSH EBP                            ; 00537ddd
    CALL engine_dosio.cpp_getFileSize_FUN_00481880 ; 00537dde
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00537de3
    MOV EBX,EAX                         ; 00537de6
    TEST EAX,EAX                        ; 00537de8
    JL 0x00537e63                       ; 00537dea
        ;   XREF to: 00537e63 (CONDITIONAL_JUMP)  ; LAB_00537e63
    PUSH 0x63bc6d                       ; 00537df0 | = "rb"
    MOV ECX,dword ptr [ESP + 0x18]      ; 00537df5
    PUSH ECX                            ; 00537df9
    PUSH EBP                            ; 00537dfa
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00537dfb
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00537e00
    MOV ESI,EAX                         ; 00537e03
    TEST EAX,EAX                        ; 00537e05
    JNZ 0x00537e30                      ; 00537e07
        ;   XREF to: 00537e30 (CONDITIONAL_JUMP)  ; LAB_00537e30
    MOV EDX,dword ptr [ESP + 0x14]      ; 00537e09
    PUSH EDX                            ; 00537e0d
    MOV EDI,0x63bc70                    ; 00537e0e | = "..\\core\\msnedit.cpp"
    MOV EAX,0x2eb                       ; 00537e13
    PUSH 0x63bc84                       ; 00537e18 | = "Can't open world\\%s"
    MOV dword ptr [0x02f0ca48],EDI      ; 00537e1d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00537e23 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00537e28
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00537e2d
    PUSH 0x63bc98                       ; 00537e30 | = "wb"
        ;   Label: LAB_00537e30
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00537e35
    PUSH ECX                            ; 00537e39
    PUSH EBP                            ; 00537e3a
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00537e3b
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00537e40
    MOV EDI,EAX                         ; 00537e43
    TEST EAX,EAX                        ; 00537e45
    JZ 0x00537e88                       ; 00537e47
        ;   XREF to: 00537e88 (CONDITIONAL_JUMP)  ; LAB_00537e88
    TEST EBX,EBX                        ; 00537e49
        ;   Label: LAB_00537e49
    JLE 0x00537eb1                      ; 00537e4b
        ;   XREF to: 00537eb1 (CONDITIONAL_JUMP)  ; LAB_00537eb1
    PUSH EDI                            ; 00537e4d
    PUSH ESI                            ; 00537e4e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00537e4f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00537e54
    PUSH EAX                            ; 00537e57
    DEC EBX                             ; 00537e58
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00537e59
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 00537e5e
    JMP 0x00537e49                      ; 00537e61
        ;   XREF to: 00537e49 (UNCONDITIONAL_JUMP)  ; LAB_00537e49
    MOV EBX,dword ptr [ESP + 0x18]      ; 00537e63
        ;   Label: LAB_00537e63
    PUSH EBX                            ; 00537e67
    PUSH EBP                            ; 00537e68
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00537e69
    PUSH ESI                            ; 00537e6d
    PUSH EBP                            ; 00537e6e
    PUSH 0x63bc4b                       ; 00537e6f | = "Can't find %s\\%s to copy to %s\\%s"
    MOV EDI,dword ptr [0x00678a60]      ; 00537e74 | g_CEditorToolsPtr
    PUSH EDI                            ; 00537e7a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 00537e7b
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00537e80
    POP EBP                             ; 00537e83
    POP EDI                             ; 00537e84
    POP ESI                             ; 00537e85
    POP EBX                             ; 00537e86
    RET                                 ; 00537e87
    MOV ECX,dword ptr [ESP + 0x18]      ; 00537e88
        ;   Label: LAB_00537e88
    PUSH ECX                            ; 00537e8c
    MOV EAX,0x63bc9b                    ; 00537e8d | = "..\\core\\msnedit.cpp"
    MOV EDX,0x2ed                       ; 00537e92
    PUSH 0x63bcaf                       ; 00537e97 | = "Can't create world\\%s"
    MOV [0x02f0ca48],EAX                ; 00537e9c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00537ea1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00537ea7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00537eac
    JMP 0x00537e49                      ; 00537eaf
        ;   XREF to: 00537e49 (UNCONDITIONAL_JUMP)  ; LAB_00537e49
    TEST byte ptr [ESI + 0xc],0x20      ; 00537eb1
        ;   Label: LAB_00537eb1
    JZ 0x00537ede                       ; 00537eb5
        ;   XREF to: 00537ede (CONDITIONAL_JUMP)  ; LAB_00537ede
    MOV ECX,dword ptr [ESP + 0x14]      ; 00537eb7
    PUSH ECX                            ; 00537ebb
    MOV EAX,0x63bcc5                    ; 00537ebc | = "..\\core\\msnedit.cpp"
    MOV EDX,0x2f2                       ; 00537ec1
    PUSH 0x63bcd9                       ; 00537ec6 | = "Error reading world\\%s"
    MOV [0x02f0ca48],EAX                ; 00537ecb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00537ed0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00537ed6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00537edb
    TEST byte ptr [EDI + 0xc],0x20      ; 00537ede
        ;   Label: LAB_00537ede
    JZ 0x00537f0b                       ; 00537ee2
        ;   XREF to: 00537f0b (CONDITIONAL_JUMP)  ; LAB_00537f0b
    MOV EDX,dword ptr [ESP + 0x18]      ; 00537ee4
    PUSH EDX                            ; 00537ee8
    MOV EBX,0x63bcf0                    ; 00537ee9 | = "..\\core\\msnedit.cpp"
    MOV EAX,0x2f3                       ; 00537eee
    PUSH 0x63bd04                       ; 00537ef3 | = "Error writing world\\%s"
    MOV dword ptr [0x02f0ca48],EBX      ; 00537ef8 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00537efe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00537f03
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00537f08
    PUSH 0x2f4                          ; 00537f0b
        ;   Label: LAB_00537f0b
    PUSH 0x63bd1b                       ; 00537f10 | = "..\\core\\msnedit.cpp"
    PUSH ESI                            ; 00537f15
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00537f16
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00537f1b
    PUSH 0x2f5                          ; 00537f1e
    PUSH 0x63bd2f                       ; 00537f23 | = "..\\core\\msnedit.cpp"
    PUSH EDI                            ; 00537f28
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00537f29
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00537f2e
    MOV ECX,dword ptr [ESP + 0x18]      ; 00537f31
    PUSH ECX                            ; 00537f35
    PUSH EBP                            ; 00537f36
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00537f37
    PUSH EBX                            ; 00537f3b
    PUSH EBP                            ; 00537f3c
    PUSH 0x63bd43                       ; 00537f3d | = "Copied %s\\%s to %s\\%s"
    MOV ESI,dword ptr [0x00678a60]      ; 00537f42 | g_CEditorToolsPtr
    PUSH ESI                            ; 00537f48 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00537f49
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00537f4e
    POP EBP                             ; 00537f51
    POP EDI                             ; 00537f52
    POP ESI                             ; 00537f53
    POP EBX                             ; 00537f54
    RET                                 ; 00537f55

