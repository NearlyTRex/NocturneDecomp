; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList *this_ptr,_FILE **file_handle)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; _FILE * *        Stack[0x8]:4   file_handle
;
; XREF[5]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3e54
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4f90
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b37fd
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bc02a
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bad0b
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_File_I_O_error_accessing_0062647d
;   TerminatedCString s_s_s_006264ce
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_io.c_chsize_FUN_00600cf0
;   crt_stdio.c_fflush_FUN_00601540
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_ftell_FUN_00601560
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2eb0
        ;   Label: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
    PUSH ESI                            ; 004b2eb1
    PUSH EDI                            ; 004b2eb2
    PUSH EBP                            ; 004b2eb3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b2eb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b2eb8
    PUSH 0x0                            ; 004b2ebc
    PUSH 0x0                            ; 004b2ebe
    MOV EDX,dword ptr [EBP]             ; 004b2ec0
    PUSH EDX                            ; 004b2ec3
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b2ec4
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b2ec9
    TEST EAX,EAX                        ; 004b2ecc
    JNZ 0x004b2f27                      ; 004b2ece
        ;   XREF to: 004b2f27 (CONDITIONAL_JUMP)  ; LAB_004b2f27
    MOV ECX,dword ptr [EDI]             ; 004b2ed0
    XOR EBX,EBX                         ; 004b2ed2
    TEST ECX,ECX                        ; 004b2ed4
    JLE 0x004b2f10                      ; 004b2ed6
        ;   XREF to: 004b2f10 (CONDITIONAL_JUMP)  ; LAB_004b2f10
    XOR ESI,ESI                         ; 004b2ed8
    MOV EAX,dword ptr [EDI + 0x4]       ; 004b2eda
        ;   Label: LAB_004b2eda
    ADD EAX,ESI                         ; 004b2edd
    LEA EDX,[EAX + 0x104]               ; 004b2edf
    PUSH EDX                            ; 004b2ee5
    PUSH EAX                            ; 004b2ee6
    PUSH 0x6264ce                       ; 004b2ee7 | = "%s = %s\n"
    MOV EAX,dword ptr [EBP]             ; 004b2eec
    PUSH EAX                            ; 004b2eef
    INC EBX                             ; 004b2ef0
    ADD ESI,0x168                       ; 004b2ef1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b2ef7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EDI]             ; 004b2efc
    ADD ESP,0x10                        ; 004b2efe
    CMP EBX,EDX                         ; 004b2f01
    JL 0x004b2eda                       ; 004b2f03
        ;   XREF to: 004b2eda (CONDITIONAL_JUMP)  ; LAB_004b2eda
    LEA EAX,[EAX]                       ; 004b2f05
    LEA EDX,[EDX]                       ; 004b2f0b
    MOV EBX,EBX                         ; 004b2f0e
    MOV ECX,dword ptr [EBP]             ; 004b2f10
        ;   Label: LAB_004b2f10
    PUSH ECX                            ; 004b2f13
    CALL crt_stdio.c_fflush_FUN_00601540 ; 004b2f14
        ;   XREF to: 00601540 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00601540(_FILE * stream)
    MOV EAX,dword ptr [EBP]             ; 004b2f19
    MOV DL,byte ptr [EAX + 0xc]         ; 004b2f1c
    ADD ESP,0x4                         ; 004b2f1f
    TEST DL,0x20                        ; 004b2f22
    JZ 0x004b2f63                       ; 004b2f25
        ;   XREF to: 004b2f63 (CONDITIONAL_JUMP)  ; LAB_004b2f63
    PUSH 0x62647d                       ; 004b2f27 | = "File I/O error accessing checkout fil..."
        ;   Label: LAB_004b2f27
    MOV ESI,dword ptr [0x00678a60]      ; 004b2f2c | g_CEditorToolsPtr
    PUSH ESI                            ; 004b2f32 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2f33
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EDI,dword ptr [EBP]             ; 004b2f38
    ADD ESP,0x8                         ; 004b2f3b
    TEST EDI,EDI                        ; 004b2f3e
    JZ 0x004b2f5c                       ; 004b2f40
        ;   XREF to: 004b2f5c (CONDITIONAL_JUMP)  ; LAB_004b2f5c
    PUSH 0xc4                           ; 004b2f42
    PUSH 0x62604b                       ; 004b2f47 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b2f4c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2f4d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2f52
    MOV dword ptr [EBP],0x0             ; 004b2f55
    XOR EAX,EAX                         ; 004b2f5c
        ;   Label: LAB_004b2f5c
    POP EBP                             ; 004b2f5e
    POP EDI                             ; 004b2f5f
    POP ESI                             ; 004b2f60
    POP EBX                             ; 004b2f61
    RET                                 ; 004b2f62
    PUSH EAX                            ; 004b2f63
        ;   Label: LAB_004b2f63
    CALL crt_stdio.c_ftell_FUN_00601560 ; 004b2f64
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 004b2f69
    TEST EAX,EAX                        ; 004b2f6c
    JL 0x004b2f27                       ; 004b2f6e
        ;   XREF to: 004b2f27 (CONDITIONAL_JUMP)  ; LAB_004b2f27
    PUSH EAX                            ; 004b2f70
    MOV EAX,dword ptr [EBP]             ; 004b2f71
    MOV EBX,dword ptr [EAX + 0x10]      ; 004b2f74
    PUSH EBX                            ; 004b2f77
    CALL crt_io.c_chsize_FUN_00600cf0   ; 004b2f78
        ;   XREF to: 00600cf0 (UNCONDITIONAL_CALL)  ; int crt_io.c_chsize_FUN_00600cf0(int file_handle, long new_size)
    ADD ESP,0x8                         ; 004b2f7d
    TEST EAX,EAX                        ; 004b2f80
    JNZ 0x004b2f27                      ; 004b2f82
        ;   XREF to: 004b2f27 (CONDITIONAL_JUMP)  ; LAB_004b2f27
    MOV EAX,0x1                         ; 004b2f84
    POP EBP                             ; 004b2f89
    POP EDI                             ; 004b2f8a
    POP ESI                             ; 004b2f8b
    POP EBX                             ; 004b2f8c
    RET                                 ; 004b2f8d

