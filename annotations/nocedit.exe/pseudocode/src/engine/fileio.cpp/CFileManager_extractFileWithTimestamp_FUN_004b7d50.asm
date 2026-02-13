; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50 (CFileManager *this_ptr,_FILE *source_file,char *dest_filename,char *name_or_offset, int file_size,int file_offset,int checksum,int timestamp)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   source_file
; char *           Stack[0xc]:4   dest_filename
; char *           Stack[0x10]:4   name_or_offset
; int              Stack[0x14]:4   file_size
; int              Stack[0x18]:4   file_offset
; int              Stack[0x1c]:4   checksum
; int              Stack[0x20]:4   timestamp
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b7993
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b72d9
;
; Referenced Globals:
;   TerminatedCString s_WARNING_Error_setting_da_00626577
;   TerminatedCString s_engine_fileio_cpp_00628112
;   TerminatedCString s_wb_00628127
;   TerminatedCString s_engine_fileio_cpp_0062812a
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_watcom.c__mkdir_FUN_00600e10
;   engine_dosio.c_copyFileTimestamp_FUN_00481910
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7d50
        ;   Label: engine_fileio.cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
    PUSH ESI                            ; 004b7d51
    PUSH EDI                            ; 004b7d52
    PUSH EBP                            ; 004b7d53
    MOV EBP,ESP                         ; 004b7d54
    SUB ESP,0x104                       ; 004b7d56
    MOV EBX,dword ptr [EBP + 0x18]      ; 004b7d5c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b7d5f
    XOR ESI,ESI                         ; 004b7d62
    MOV DL,byte ptr [EAX]               ; 004b7d64
    MOV dword ptr [EBP + -0x4],EAX      ; 004b7d66
    CMP DL,0x5c                         ; 004b7d69
    JZ 0x004b7daa                       ; 004b7d6c
        ;   XREF to: 004b7daa (CONDITIONAL_JUMP)  ; LAB_004b7daa
    MOV ECX,dword ptr [EBP + -0x4]      ; 004b7d6e
        ;   Label: LAB_004b7d6e
    XOR EAX,EAX                         ; 004b7d71
    MOV AL,byte ptr [ECX]               ; 004b7d73
    PUSH EAX                            ; 004b7d75
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004b7d76
    INC ESI                             ; 004b7d79
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004b7d7a
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    MOV EDX,dword ptr [EBP + -0x4]      ; 004b7d7f
    ADD ESP,0x4                         ; 004b7d82
    MOV byte ptr [ESI + EBP*0x1 + 0xfffffefb],AL ; 004b7d85
    INC EDX                             ; 004b7d8c
    SUB ECX,ECX                         ; 004b7d8d
    DEC ECX                             ; 004b7d8f
    XOR EAX,EAX                         ; 004b7d90
    SCASB.REPNE ES:EDI                  ; 004b7d92
    NOT ECX                             ; 004b7d94
    DEC ECX                             ; 004b7d96
    MOV dword ptr [EBP + -0x4],EDX      ; 004b7d97
    CMP ESI,ECX                         ; 004b7d9a
    JBE 0x004b7ea1                      ; 004b7d9c
        ;   XREF to: 004b7ea1 (CONDITIONAL_JUMP)  ; LAB_004b7ea1
    XOR CL,CL                           ; 004b7da2
    MOV byte ptr [EBP + 0xfffffefc],CL  ; 004b7da4
    XOR CH,CH                           ; 004b7daa
        ;   Label: LAB_004b7daa
    PUSH 0x0                            ; 004b7dac
    MOV byte ptr [ESI + EBP*0x1 + 0xfffffefc],CH ; 004b7dae
    MOV ECX,dword ptr [EBP + 0x24]      ; 004b7db5
    PUSH ECX                            ; 004b7db8
    PUSH EBX                            ; 004b7db9
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b7dba
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b7dbf
    LEA EAX,[EBP + 0xfffffefc]          ; 004b7dc2
    PUSH EAX                            ; 004b7dc8
    CALL crt_watcom.c__mkdir_FUN_00600e10 ; 004b7dc9
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00600e10(char * path)
    ADD ESP,0x4                         ; 004b7dce
    PUSH 0xae4                          ; 004b7dd1
    PUSH 0x628112                       ; 004b7dd6 | = "..\\engine\\fileio.cpp"
    PUSH 0x628127                       ; 004b7ddb | = "wb"
    PUSH 0x0                            ; 004b7de0
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004b7de2
    PUSH ESI                            ; 004b7de5
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b7de6
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004b7deb
    MOV ESI,EAX                         ; 004b7dee
    TEST EAX,EAX                        ; 004b7df0
    JZ 0x004b7e9a                       ; 004b7df2
        ;   XREF to: 004b7e9a (CONDITIONAL_JUMP)  ; LAB_004b7e9a
    MOV EAX,dword ptr [EBP + 0x20]      ; 004b7df8
    XOR EDI,EDI                         ; 004b7dfb
    TEST EAX,EAX                        ; 004b7dfd
    JLE 0x004b7e44                      ; 004b7dff
        ;   XREF to: 004b7e44 (CONDITIONAL_JUMP)  ; LAB_004b7e44
    TEST byte ptr [ESI + 0xd],0x4       ; 004b7e01
        ;   Label: LAB_004b7e01
    JZ 0x004b7eb2                       ; 004b7e05
        ;   XREF to: 004b7eb2 (CONDITIONAL_JUMP)  ; LAB_004b7eb2
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b7e0b
        ;   Label: LAB_004b7e0b
    PUSH ESI                            ; 004b7e0e
    TEST EAX,EAX                        ; 004b7e0f
    JLE 0x004b7e2a                      ; 004b7e11
        ;   XREF to: 004b7e2a (CONDITIONAL_JUMP)  ; LAB_004b7e2a
    MOV EAX,dword ptr [EBX]             ; 004b7e13
    MOV AL,byte ptr [EAX]               ; 004b7e15
    AND EAX,0xff                        ; 004b7e17
    SUB EAX,0xd                         ; 004b7e1c
    CMP EAX,0xfd                        ; 004b7e1f
    JA 0x004b7f0b                       ; 004b7e24
        ;   XREF to: 004b7f0b (CONDITIONAL_JUMP)  ; LAB_004b7f0b
    PUSH EBX                            ; 004b7e2a
        ;   Label: LAB_004b7e2a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004b7e2b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004b7e30
    PUSH EAX                            ; 004b7e33
        ;   Label: LAB_004b7e33
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004b7e34
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
        ;   Label: LAB_004b7e34
    ADD ESP,0x8                         ; 004b7e39
    MOV EDX,dword ptr [EBP + 0x20]      ; 004b7e3c
        ;   Label: LAB_004b7e3c
    INC EDI                             ; 004b7e3f
    CMP EDI,EDX                         ; 004b7e40
    JL 0x004b7e01                       ; 004b7e42
        ;   XREF to: 004b7e01 (CONDITIONAL_JUMP)  ; LAB_004b7e01
    MOV AL,byte ptr [EBX + 0xc]         ; 004b7e44
        ;   Label: LAB_004b7e44
    MOV EDI,0x1                         ; 004b7e47
    TEST AL,0x20                        ; 004b7e4c
    JZ 0x004b7e52                       ; 004b7e4e
        ;   XREF to: 004b7e52 (CONDITIONAL_JUMP)  ; LAB_004b7e52
    XOR EDI,EDI                         ; 004b7e50
    TEST byte ptr [ESI + 0xc],0x20      ; 004b7e52
        ;   Label: LAB_004b7e52
    JZ 0x004b7e5a                       ; 004b7e56
        ;   XREF to: 004b7e5a (CONDITIONAL_JUMP)  ; LAB_004b7e5a
    XOR EDI,EDI                         ; 004b7e58
    PUSH 0xaf5                          ; 004b7e5a
        ;   Label: LAB_004b7e5a
    PUSH 0x62812a                       ; 004b7e5f | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b7e64
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b7e65
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b7e6a
    MOV EAX,dword ptr [EBP + 0x28]      ; 004b7e6d
    PUSH EAX                            ; 004b7e70
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004b7e71
    PUSH EBX                            ; 004b7e74
    CALL engine_dosio.c_copyFileTimestamp_FUN_00481910 ; 004b7e75
        ;   XREF to: 00481910 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)
    ADD ESP,0x8                         ; 004b7e7a
    TEST EAX,EAX                        ; 004b7e7d
    JNZ 0x004b7e98                      ; 004b7e7f
        ;   XREF to: 004b7e98 (CONDITIONAL_JUMP)  ; LAB_004b7e98
    PUSH EBX                            ; 004b7e81
    PUSH 0x626577                       ; 004b7e82 | = "WARNING: Error setting date/time on %..."
    MOV ECX,dword ptr [0x00678a60]      ; 004b7e87 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b7e8d | g_CEditorToolsInstance
    XOR EDI,EDI                         ; 004b7e8e
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7e90
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7e95
    MOV EAX,EDI                         ; 004b7e98
        ;   Label: LAB_004b7e98
    MOV ESP,EBP                         ; 004b7e9a
        ;   Label: LAB_004b7e9a
    POP EBP                             ; 004b7e9c
    POP EDI                             ; 004b7e9d
    POP ESI                             ; 004b7e9e
    POP EBX                             ; 004b7e9f
    RET                                 ; 004b7ea0
    MOV EAX,dword ptr [EBP + -0x4]      ; 004b7ea1
        ;   Label: LAB_004b7ea1
    CMP byte ptr [EAX],0x5c             ; 004b7ea4
    JNZ 0x004b7d6e                      ; 004b7ea7
        ;   XREF to: 004b7d6e (CONDITIONAL_JUMP)  ; LAB_004b7d6e
    JMP 0x004b7daa                      ; 004b7ead
        ;   XREF to: 004b7daa (UNCONDITIONAL_JUMP)  ; LAB_004b7daa
    MOV EDX,dword ptr [ESI + 0x4]       ; 004b7eb2
        ;   Label: LAB_004b7eb2
    MOV EAX,dword ptr [ESI + 0x14]      ; 004b7eb5
    SUB EAX,EDX                         ; 004b7eb8
    CMP EAX,0x1                         ; 004b7eba
    JBE 0x004b7e0b                      ; 004b7ebd
        ;   XREF to: 004b7e0b (CONDITIONAL_JUMP)  ; LAB_004b7e0b
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b7ec3
    TEST ECX,ECX                        ; 004b7ec6
    JLE 0x004b7edd                      ; 004b7ec8
        ;   XREF to: 004b7edd (CONDITIONAL_JUMP)  ; LAB_004b7edd
    MOV EAX,dword ptr [EBX]             ; 004b7eca
    MOV AL,byte ptr [EAX]               ; 004b7ecc
    AND EAX,0xff                        ; 004b7ece
    SUB EAX,0xd                         ; 004b7ed3
    CMP EAX,0xfd                        ; 004b7ed6
    JA 0x004b7f25                       ; 004b7edb
        ;   XREF to: 004b7f25 (CONDITIONAL_JUMP)  ; LAB_004b7f25
    PUSH EBX                            ; 004b7edd
        ;   Label: LAB_004b7edd
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004b7ede
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004b7ee3
    MOV ECX,dword ptr [ESI]             ; 004b7ee6
        ;   Label: LAB_004b7ee6
    MOV byte ptr [ECX],AL               ; 004b7ee8
    MOV EAX,dword ptr [ESI]             ; 004b7eea
    CMP byte ptr [EAX],0xa              ; 004b7eec
    JZ 0x004b7f3b                       ; 004b7eef
        ;   XREF to: 004b7f3b (CONDITIONAL_JUMP)  ; LAB_004b7f3b
    MOV CL,byte ptr [ESI + 0xd]         ; 004b7ef1
    OR CL,0x10                          ; 004b7ef4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004b7ef7
    MOV byte ptr [ESI + 0xd],CL         ; 004b7efa
    INC EDX                             ; 004b7efd
    MOV ECX,dword ptr [ESI]             ; 004b7efe
    MOV dword ptr [ESI + 0x4],EDX       ; 004b7f00
    INC ECX                             ; 004b7f03
    MOV dword ptr [ESI],ECX             ; 004b7f04
    JMP 0x004b7e3c                      ; 004b7f06
        ;   XREF to: 004b7e3c (UNCONDITIONAL_JUMP)  ; LAB_004b7e3c
    MOV EAX,dword ptr [EBX]             ; 004b7f0b
        ;   Label: LAB_004b7f0b
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b7f0d
    LEA ECX,[EAX + 0x1]                 ; 004b7f10
    DEC EDX                             ; 004b7f13
    MOV dword ptr [EBX],ECX             ; 004b7f14
    MOV dword ptr [EBX + 0x4],EDX       ; 004b7f16
    MOV AL,byte ptr [EAX]               ; 004b7f19
    AND EAX,0xff                        ; 004b7f1b
    JMP 0x004b7e33                      ; 004b7f20
        ;   XREF to: 004b7e33 (UNCONDITIONAL_JUMP)  ; LAB_004b7e33
    LEA EAX,[ECX + -0x1]                ; 004b7f25
        ;   Label: LAB_004b7f25
    MOV dword ptr [EBX + 0x4],EAX       ; 004b7f28
    MOV EAX,dword ptr [EBX]             ; 004b7f2b
    LEA ECX,[EAX + 0x1]                 ; 004b7f2d
    MOV dword ptr [EBX],ECX             ; 004b7f30
    MOV AL,byte ptr [EAX]               ; 004b7f32
    AND EAX,0xff                        ; 004b7f34
    JMP 0x004b7ee6                      ; 004b7f39
        ;   XREF to: 004b7ee6 (UNCONDITIONAL_JUMP)  ; LAB_004b7ee6
    PUSH ESI                            ; 004b7f3b
        ;   Label: LAB_004b7f3b
    PUSH 0xa                            ; 004b7f3c
    JMP 0x004b7e34                      ; 004b7f3e
        ;   XREF to: 004b7e34 (UNCONDITIONAL_JUMP)  ; LAB_004b7e34

