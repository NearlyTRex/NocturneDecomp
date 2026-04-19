; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; char[100]        Stack[-0x6c]:100  local_6c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f089
;   TerminatedCString s_wb_0063f0a1
;   TerminatedCString s_Unable_to_create_PBM_fil_0063f0a4
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0c1
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0d9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b520
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
    PUSH EBP                            ; 0054b521
    SUB ESP,0x64                        ; 0054b522
    PUSH 0x46c                          ; 0054b525
    PUSH 0x63f089                       ; 0054b52a | = "..\\cockpit\\pkbitmap.cpp"
    PUSH 0x63f0a1                       ; 0054b52f | = "wb"
    PUSH 0x0                            ; 0054b534
    MOV EDX,dword ptr [ESP + 0x84]      ; 0054b536
    PUSH EDX                            ; 0054b53d
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0054b53e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0054b543
    MOV EBX,EAX                         ; 0054b546
    TEST EAX,EAX                        ; 0054b548
    JZ 0x0054b573                       ; 0054b54a
        ;   XREF to: 0054b573 (CONDITIONAL_JUMP)  ; LAB_0054b573
    PUSH EBX                            ; 0054b54c
        ;   Label: LAB_0054b54c
    MOV EBP,dword ptr [ESP + 0x74]      ; 0054b54d
    PUSH EBP                            ; 0054b551
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 ; 0054b552
        ;   XREF to: 0054b5c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0054b557
    PUSH 0x474                          ; 0054b55a
    PUSH 0x63f0d9                       ; 0054b55f | = "..\\cockpit\\pkbitmap.cpp"
    PUSH EBX                            ; 0054b564
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054b565
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054b56a
    ADD ESP,0x64                        ; 0054b56d
    POP EBP                             ; 0054b570
    POP EBX                             ; 0054b571
    RET                                 ; 0054b572
    PUSH EDI                            ; 0054b573
        ;   Label: LAB_0054b573
    PUSH ESI                            ; 0054b574
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0054b575
    PUSH ECX                            ; 0054b579
    PUSH 0x63f0a4                       ; 0054b57a | = "Unable to create PBM file %s"
    LEA EAX,[ESP + 0x10]                ; 0054b57f
    PUSH EAX                            ; 0054b583
    MOV ESI,0x63f0c1                    ; 0054b584 | = "..\\cockpit\\pkbitmap.cpp"
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054b589
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054b58e
    LEA EAX,[ESP + 0x8]                 ; 0054b591
    MOV EDI,0x470                       ; 0054b595
    PUSH EAX                            ; 0054b59a
    MOV dword ptr [0x02f0ca48],ESI      ; 0054b59b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054b5a1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b5a7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b5ac
    POP ESI                             ; 0054b5af
    POP EDI                             ; 0054b5b0
    JMP 0x0054b54c                      ; 0054b5b1
        ;   XREF to: 0054b54c (UNCONDITIONAL_JUMP)  ; LAB_0054b54c

