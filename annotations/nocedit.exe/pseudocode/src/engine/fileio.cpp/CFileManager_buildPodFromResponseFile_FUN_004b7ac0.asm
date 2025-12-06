; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager * this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be43a
;
; Referenced Globals:
;   TerminatedCString s_Enter_response_filename_00627fb1
;   TerminatedCString s_engine_fileio_cpp_00627fc9
;   TerminatedCString s_rt_00627fde
;   TerminatedCString s_Unable_to_open_response__00627fe1
;   TerminatedCString s_engine_fileio_cpp_00627fff
;   TerminatedCString s_engine_fileio_cpp_00628014
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7ac0
        ;   Label: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
    PUSH ESI                            ; 004b7ac1
    PUSH EBP                            ; 004b7ac2
    SUB ESP,0x50                        ; 004b7ac3
    MOV ESI,dword ptr [ESP + 0x60]      ; 004b7ac6
    PUSH 0x0                            ; 004b7aca
    PUSH 0x14                           ; 004b7acc
    LEA EAX,[ESP + 0x8]                 ; 004b7ace
    PUSH EAX                            ; 004b7ad2
    PUSH 0x627fb1                       ; 004b7ad3 | = "Enter response filename" | s_Enter_response_filename_00627fb1 = Enter response filename
    MOV EDX,dword ptr [0x00678a60]      ; 004b7ad8 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b7ade | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b7adf | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b7ae4
    TEST EAX,EAX                        ; 004b7ae7
    JNZ 0x004b7af2                      ; 004b7ae9 | LAB_004b7af2
        ;   XREF to: 004b7af2 (CONDITIONAL_JUMP)
    ADD ESP,0x50                        ; 004b7aeb
    POP EBP                             ; 004b7aee
    POP ESI                             ; 004b7aef
    POP EBX                             ; 004b7af0
    RET                                 ; 004b7af1
    PUSH 0xa67                          ; 004b7af2
        ;   Label: LAB_004b7af2
    PUSH 0x627fc9                       ; 004b7af7 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627fc9 = ..\engine\fileio.cpp
    PUSH 0x627fde                       ; 004b7afc | = "rt" | s_rt_00627fde = rt
    PUSH 0x0                            ; 004b7b01
    LEA EAX,[ESP + 0x10]                ; 004b7b03
    PUSH EAX                            ; 004b7b07
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b7b08 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b7b0d
    MOV EBX,EAX                         ; 004b7b10
    TEST EAX,EAX                        ; 004b7b12
    JZ 0x004b7b64                       ; 004b7b14 | LAB_004b7b64
        ;   XREF to: 004b7b64 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004b7b16
    PUSH ESI                            ; 004b7b17
    CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 ; 004b7b18 | void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
        ;   XREF to: 004b7c10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b7b1d
    MOV EDI,dword ptr [EBX + 0x4]       ; 004b7b20
        ;   Label: LAB_004b7b20
    TEST EDI,EDI                        ; 004b7b23
    JLE 0x004b7b3a                      ; 004b7b25 | LAB_004b7b3a
        ;   XREF to: 004b7b3a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 004b7b27
    MOV AL,byte ptr [EAX]               ; 004b7b29
    AND EAX,0xff                        ; 004b7b2b
    SUB EAX,0xd                         ; 004b7b30
    CMP EAX,0xfd                        ; 004b7b33
    JA 0x004b7b7f                       ; 004b7b38 | LAB_004b7b7f
        ;   XREF to: 004b7b7f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004b7b3a
        ;   Label: LAB_004b7b3a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004b7b3b | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b7b40
    MOV ECX,EAX                         ; 004b7b43
        ;   Label: LAB_004b7b43
    CMP EAX,-0x1                        ; 004b7b45
    JZ 0x004b7bd3                       ; 004b7b48 | LAB_004b7bd3
        ;   XREF to: 004b7bd3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 004b7b4e
    TEST byte ptr [EAX + 0xd],0x4       ; 004b7b50
    JZ 0x004b7b95                       ; 004b7b54 | LAB_004b7b95
        ;   XREF to: 004b7b95 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI]             ; 004b7b56
        ;   Label: LAB_004b7b56
    PUSH EDI                            ; 004b7b58
    PUSH ECX                            ; 004b7b59
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004b7b5a | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7b5f
    JMP 0x004b7b20                      ; 004b7b62 | LAB_004b7b20
        ;   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
    PUSH 0x627fe1                       ; 004b7b64 | = "Unable to open response file!" | s_Unable_to_open_response__00627fe1 = Unable to open response file!
        ;   Label: LAB_004b7b64
    MOV ECX,dword ptr [0x00678a60]      ; 004b7b69 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b7b6f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b7b70 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7b75
    ADD ESP,0x50                        ; 004b7b78
    POP EBP                             ; 004b7b7b
    POP ESI                             ; 004b7b7c
    POP EBX                             ; 004b7b7d
    RET                                 ; 004b7b7e
    MOV EAX,dword ptr [EBX]             ; 004b7b7f
        ;   Label: LAB_004b7b7f
    LEA EBP,[EDI + -0x1]                ; 004b7b81
    LEA EDX,[EAX + 0x1]                 ; 004b7b84
    MOV dword ptr [EBX + 0x4],EBP       ; 004b7b87
    MOV dword ptr [EBX],EDX             ; 004b7b8a
    MOV AL,byte ptr [EAX]               ; 004b7b8c
    AND EAX,0xff                        ; 004b7b8e
    JMP 0x004b7b43                      ; 004b7b93 | LAB_004b7b43
        ;   XREF to: 004b7b43 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x4]       ; 004b7b95
        ;   Label: LAB_004b7b95
    MOV EDX,dword ptr [EAX + 0x14]      ; 004b7b98
    SUB EDX,EDI                         ; 004b7b9b
    CMP EDX,0x1                         ; 004b7b9d
    JBE 0x004b7b56                      ; 004b7ba0 | LAB_004b7b56
        ;   XREF to: 004b7b56 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 004b7ba2
    MOV byte ptr [EDX],CL               ; 004b7ba4
    MOV EAX,dword ptr [EAX]             ; 004b7ba6
    CMP byte ptr [EAX],0xa              ; 004b7ba8
    JNZ 0x004b7bbf                      ; 004b7bab | LAB_004b7bbf
        ;   XREF to: 004b7bbf (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI]             ; 004b7bad
    PUSH ECX                            ; 004b7baf
    PUSH 0xa                            ; 004b7bb0
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004b7bb2 | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b7bb7
    JMP 0x004b7b20                      ; 004b7bba | LAB_004b7b20
        ;   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 004b7bbf
        ;   Label: LAB_004b7bbf
    OR byte ptr [EAX + 0xd],0x10        ; 004b7bc1
    MOV EAX,dword ptr [ESI]             ; 004b7bc5
    INC dword ptr [EAX + 0x4]           ; 004b7bc7
    MOV EAX,dword ptr [ESI]             ; 004b7bca
    INC dword ptr [EAX]                 ; 004b7bcc
    JMP 0x004b7b20                      ; 004b7bce | LAB_004b7b20
        ;   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
    PUSH 0xa79                          ; 004b7bd3
        ;   Label: LAB_004b7bd3
    PUSH 0x627fff                       ; 004b7bd8 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627fff = ..\engine\fileio.cpp
    MOV EAX,dword ptr [ESI]             ; 004b7bdd
    PUSH EAX                            ; 004b7bdf
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b7be0 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7be5
    PUSH 0xa7a                          ; 004b7be8
    PUSH 0x628014                       ; 004b7bed | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628014 = ..\engine\fileio.cpp
    PUSH EBX                            ; 004b7bf2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b7bf3 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7bf8
    PUSH 0x0                            ; 004b7bfb
    PUSH 0x0                            ; 004b7bfd
    PUSH ESI                            ; 004b7bff
    CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 ; 004b7c00 | void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)
        ;   XREF to: 004b5a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b7c05
    POP EDI                             ; 004b7c08
    ADD ESP,0x50                        ; 004b7c09
    POP EBP                             ; 004b7c0c
    POP ESI                             ; 004b7c0d
    POP EBX                             ; 004b7c0e
    RET                                 ; 004b7c0f

