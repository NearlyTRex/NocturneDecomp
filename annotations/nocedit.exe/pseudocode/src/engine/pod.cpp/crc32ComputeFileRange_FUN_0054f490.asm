; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0054f490(char *filename,int start_offset)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   start_offset
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   char s_EmptyString_0064015e = \x00
;   TerminatedCString s_engine_pod_cpp_0064015f
;   TerminatedCString s_rb_00640171
;   TerminatedCString s_engine_pod_cpp_00640174
;   char[65536] g_FileIOBuffer
;   undefined4 DAT_030d5091
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f490
        ;   Label: engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490
    PUSH ESI                            ; 0054f491
    PUSH EDI                            ; 0054f492
    PUSH EBP                            ; 0054f493
    SUB ESP,0x8                         ; 0054f494
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054f497
    MOV EDI,dword ptr [ESP + 0x20]      ; 0054f49b
    PUSH ESI                            ; 0054f49f
    PUSH 0x64015e                       ; 0054f4a0 | s_EmptyString_0064015e
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0054f4a5
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054f4aa
    PUSH 0xf2                           ; 0054f4ad
    PUSH 0x64015f                       ; 0054f4b2 | = "..\\engine\\pod.cpp"
    PUSH 0x640171                       ; 0054f4b7 | = "rb"
    PUSH 0x0                            ; 0054f4bc
    PUSH ESI                            ; 0054f4be
    MOV EBX,EAX                         ; 0054f4bf
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0054f4c1
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0054f4c6
    PUSH 0x0                            ; 0054f4c9
    PUSH EDI                            ; 0054f4cb
    SUB EBX,EDI                         ; 0054f4cc
    MOV ESI,0xffffffff                  ; 0054f4ce
    PUSH EAX                            ; 0054f4d3
    MOV EBP,EAX                         ; 0054f4d4
    MOV dword ptr [ESP + 0xc],EAX       ; 0054f4d6
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0054f4da
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    MOV EDI,EBX                         ; 0054f4df
    ADD ESP,0xc                         ; 0054f4e1
    CMP EBX,0x10000                     ; 0054f4e4
    JL 0x0054f532                       ; 0054f4ea
        ;   XREF to: 0054f532 (CONDITIONAL_JUMP)  ; LAB_0054f532
    PUSH EBP                            ; 0054f4ec
        ;   Label: LAB_0054f4ec
    PUSH 0x1                            ; 0054f4ed
    PUSH 0x10000                        ; 0054f4ef
    PUSH 0x30d5090                      ; 0054f4f4 | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 0054f4f9 | g_FileIOBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f4fe
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054f503
    MOV EAX,ESI                         ; 0054f506
    XOR ESI,ESI                         ; 0054f508
    XOR EDX,EDX                         ; 0054f50a
        ;   Label: LAB_0054f50a
    MOV DL,byte ptr [EBX]               ; 0054f50c | g_FileIOBuffer | DAT_030d5091
    PUSH EDX                            ; 0054f50e
    PUSH EAX                            ; 0054f50f
    INC EBX                             ; 0054f510
    INC ESI                             ; 0054f511
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0054f512
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0054f517
    CMP ESI,0x10000                     ; 0054f51a
    JC 0x0054f50a                       ; 0054f520
        ;   XREF to: 0054f50a (CONDITIONAL_JUMP)  ; LAB_0054f50a
    SUB EDI,0x10000                     ; 0054f522
    MOV ESI,EAX                         ; 0054f528
    CMP EDI,0x10000                     ; 0054f52a
    JGE 0x0054f4ec                      ; 0054f530
        ;   XREF to: 0054f4ec (CONDITIONAL_JUMP)  ; LAB_0054f4ec
    PUSH EBP                            ; 0054f532
        ;   Label: LAB_0054f532
    PUSH 0x1                            ; 0054f533
    PUSH EDI                            ; 0054f535
    PUSH 0x30d5090                      ; 0054f536 | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 0054f53b | g_FileIOBuffer
    MOV EBP,ESI                         ; 0054f540
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f542
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054f547
    XOR ESI,ESI                         ; 0054f54a
    MOV dword ptr [ESP + 0x4],EDI       ; 0054f54c
    TEST EDI,EDI                        ; 0054f550
    JBE 0x0054f570                      ; 0054f552
        ;   XREF to: 0054f570 (CONDITIONAL_JUMP)  ; LAB_0054f570
    XOR EAX,EAX                         ; 0054f554
        ;   Label: LAB_0054f554
    MOV AL,byte ptr [EBX]               ; 0054f556 | g_FileIOBuffer | DAT_030d5091
    PUSH EAX                            ; 0054f558
    PUSH EBP                            ; 0054f559
    INC EBX                             ; 0054f55a
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0054f55b
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0054f560
    INC ESI                             ; 0054f563
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054f564
    MOV EBP,EAX                         ; 0054f568
    CMP ESI,EDX                         ; 0054f56a
    JC 0x0054f554                       ; 0054f56c
        ;   XREF to: 0054f554 (CONDITIONAL_JUMP)  ; LAB_0054f554
    MOV EAX,EAX                         ; 0054f56e
    PUSH 0xfb                           ; 0054f570
        ;   Label: LAB_0054f570
    PUSH 0x640174                       ; 0054f575 | = "..\\engine\\pod.cpp"
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054f57a
    PUSH ECX                            ; 0054f57e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054f57f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054f584
    MOV EAX,EBP                         ; 0054f587
    ADD ESP,0x8                         ; 0054f589
    POP EBP                             ; 0054f58c
    POP EDI                             ; 0054f58d
    POP ESI                             ; 0054f58e
    POP EBX                             ; 0054f58f
    RET                                 ; 0054f590

