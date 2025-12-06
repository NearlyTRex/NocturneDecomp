; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   skip_data_load
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b8d5
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 at 0054bad1
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f11b
;   TerminatedCString s_IO_error_reading_PBM_pos_0063f133
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f161
;   TerminatedCString s_Corrupt_data_detected_re_0063f179
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f19c
;   TerminatedCString s_Out_of_memory_reading_PB_0063f1b4
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f1ce
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f1e6
;   TerminatedCString s_anon_00680c9c
;   undefined4 s_BM_PBG_00680c9d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b690
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
    PUSH ESI                            ; 0054b691
    PUSH EDI                            ; 0054b692
    PUSH EBP                            ; 0054b693
    SUB ESP,0x1c                        ; 0054b694
    MOV EBX,dword ptr [ESP + 0x30]      ; 0054b697
    MOV EBP,dword ptr [ESP + 0x34]      ; 0054b69b
    PUSH EBX                            ; 0054b69f
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 ; 0054b6a0 | void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
        ;   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054b6a5
        ;   Label: LAB_0054b6a5
    PUSH EBP                            ; 0054b6a8
    PUSH 0x1                            ; 0054b6a9
    PUSH 0x1c                           ; 0054b6ab
    LEA EAX,[ESP + 0xc]                 ; 0054b6ad
    PUSH EAX                            ; 0054b6b1
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054b6b2 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054b6b7
    CMP EAX,0x1                         ; 0054b6ba
    JNZ 0x0054b71f                      ; 0054b6bd | LAB_0054b71f
        ;   XREF to: 0054b71f (CONDITIONAL_JUMP)
    MOV ECX,0x4                         ; 0054b6bf
    MOV EDI,0x680c9c                    ; 0054b6c4 | = "PBM\032PBG\032" | s_anon_00680c9c = PBM PBG
    MOV ESI,ESP                         ; 0054b6c9
    XOR EAX,EAX                         ; 0054b6cb
    CMPSB.REPE ES:EDI,ESI               ; 0054b6cd | = "PBM\032PBG\032" | s_anon_00680c9c = PBM PBG
    JZ 0x0054b6d6                       ; 0054b6cf | LAB_0054b6d6
        ;   XREF to: 0054b6d6 (CONDITIONAL_JUMP)
    SBB EAX,EAX                         ; 0054b6d1
    SBB EAX,-0x1                        ; 0054b6d3
    TEST EAX,EAX                        ; 0054b6d6
        ;   Label: LAB_0054b6d6
    JZ 0x0054b743                       ; 0054b6d8 | LAB_0054b743
        ;   XREF to: 0054b743 (CONDITIONAL_JUMP)
    MOV EDX,0x63f161                    ; 0054b6da | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f161 = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054b6da
    MOV ECX,0x4ae                       ; 0054b6df
    PUSH 0x63f179                       ; 0054b6e4 | = "Corrupt data detected reading PBM." | s_Corrupt_data_detected_re_0063f179 = Corrupt data detected reading PBM.
    MOV dword ptr [0x02f0ca48],EDX      ; 0054b6e9 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054b6ef | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b6f5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054b6fa
    MOV ESI,0x63f19c                    ; 0054b6fd | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f19c = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054b6fd
    MOV EDI,0x4af                       ; 0054b702
    PUSH 0x63f1b4                       ; 0054b707 | = "Out of memory reading PBM" | s_Out_of_memory_reading_PB_0063f1b4 = Out of memory reading PBM
    MOV dword ptr [0x02f0ca48],ESI      ; 0054b70c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054b712 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b718 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    JMP 0x0054b6a5                      ; 0054b71d | LAB_0054b6a5
        ;   XREF to: 0054b6a5 (UNCONDITIONAL_JUMP)
    MOV EDI,0x63f11b                    ; 0054b71f | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f11b = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054b71f
    MOV EAX,0x4ad                       ; 0054b724
    PUSH 0x63f133                       ; 0054b729 | = "IO error reading PBM (possibly corrup..." | s_IO_error_reading_PBM_pos_0063f133 = IO error reading PBM (possibly corrupt file).
    MOV dword ptr [0x02f0ca48],EDI      ; 0054b72e | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0054b734 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b739 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054b73e
    JMP 0x0054b6da                      ; 0054b741 | LAB_0054b6da
        ;   XREF to: 0054b6da (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054b743
        ;   Label: LAB_0054b743
    CMP EDX,0x1                         ; 0054b747
    JC 0x0054b6da                       ; 0054b74a | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x8],0x1       ; 0054b74c
    JC 0x0054b6da                       ; 0054b751 | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x18],EDX      ; 0054b753
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054b756
    MOV dword ptr [EBX + 0x1c],EAX      ; 0054b75a
    CMP dword ptr [ESP + 0xc],0x0       ; 0054b75d
    JNZ 0x0054b6da                      ; 0054b762 | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 0054b768
    JNZ 0x0054b6da                      ; 0054b76d | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x18]      ; 0054b773
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054b776
    DEC EAX                             ; 0054b77a
    CMP EAX,EDX                         ; 0054b77b
    JNZ 0x0054b6da                      ; 0054b77d | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b783
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054b786
    DEC EAX                             ; 0054b78a
    CMP EAX,ECX                         ; 0054b78b
    JNZ 0x0054b6da                      ; 0054b78d | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b793
    PUSH 0x4c6                          ; 0054b796
    INC EAX                             ; 0054b79b
    PUSH 0x63f1ce                       ; 0054b79c | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f1ce = ..\cockpit\pkbitmap.cpp
    SHL EAX,0x2                         ; 0054b7a1
    PUSH EAX                            ; 0054b7a4
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0054b7a5 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054b7aa
    MOV dword ptr [EBX + 0x20],EAX      ; 0054b7ad
    TEST EAX,EAX                        ; 0054b7b0
    JZ 0x0054b6fd                       ; 0054b7b2 | LAB_0054b6fd
        ;   XREF to: 0054b6fd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b7b8
    PUSH EBP                            ; 0054b7bb
    INC EAX                             ; 0054b7bc
    PUSH 0x1                            ; 0054b7bd
    SHL EAX,0x2                         ; 0054b7bf
    PUSH EAX                            ; 0054b7c2
    MOV EDI,dword ptr [EBX + 0x20]      ; 0054b7c3
    PUSH EDI                            ; 0054b7c6
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054b7c7 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054b7cc
    CMP EAX,0x1                         ; 0054b7cf
    JNZ 0x0054b71f                      ; 0054b7d2 | LAB_0054b71f
        ;   XREF to: 0054b71f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054b7d8
    XOR EDX,EDX                         ; 0054b7db
    TEST EAX,EAX                        ; 0054b7dd
    JLE 0x0054b7fa                      ; 0054b7df | LAB_0054b7fa
        ;   XREF to: 0054b7fa (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0054b7e1
    MOV ESI,dword ptr [EAX + 0x4]       ; 0054b7e4
        ;   Label: LAB_0054b7e4
    CMP ESI,dword ptr [EAX]             ; 0054b7e7
    JL 0x0054b6da                       ; 0054b7e9 | LAB_0054b6da
        ;   XREF to: 0054b6da (CONDITIONAL_JUMP)
    INC EDX                             ; 0054b7ef
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0054b7f0
    ADD EAX,0x4                         ; 0054b7f3
    CMP EDX,ECX                         ; 0054b7f6
    JL 0x0054b7e4                       ; 0054b7f8 | LAB_0054b7e4
        ;   XREF to: 0054b7e4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0054b7fa
        ;   Label: LAB_0054b7fa
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0054b7fd
    MOV EDI,dword ptr [ESP + 0x38]      ; 0054b800
    MOV ESI,dword ptr [EAX + EDX*0x4]   ; 0054b804
    TEST EDI,EDI                        ; 0054b807
    JNZ 0x0054b847                      ; 0054b809 | LAB_0054b847
        ;   XREF to: 0054b847 (CONDITIONAL_JUMP)
    PUSH 0x4de                          ; 0054b80b
    PUSH 0x63f1e6                       ; 0054b810 | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f1e6 = ..\cockpit\pkbitmap.cpp
    PUSH ESI                            ; 0054b815
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054b816 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054b81b
    MOV dword ptr [EBX + 0x14],EAX      ; 0054b81e
    TEST EAX,EAX                        ; 0054b821
    JZ 0x0054b6fd                       ; 0054b823 | LAB_0054b6fd
        ;   XREF to: 0054b6fd (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0054b829
    PUSH 0x1                            ; 0054b82a
    PUSH ESI                            ; 0054b82c
    PUSH EAX                            ; 0054b82d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054b82e | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054b833
    CMP EAX,0x1                         ; 0054b836
    JNZ 0x0054b71f                      ; 0054b839 | LAB_0054b71f
        ;   XREF to: 0054b71f (CONDITIONAL_JUMP)
    ADD ESP,0x1c                        ; 0054b83f
    POP EBP                             ; 0054b842
    POP EDI                             ; 0054b843
    POP ESI                             ; 0054b844
    POP EBX                             ; 0054b845
    RET                                 ; 0054b846
    PUSH 0x1                            ; 0054b847
        ;   Label: LAB_0054b847
    PUSH ESI                            ; 0054b849
    PUSH EBP                            ; 0054b84a
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0054b84b | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054b850
    ADD ESP,0x1c                        ; 0054b853
    POP EBP                             ; 0054b856
    POP EDI                             ; 0054b857
    POP ESI                             ; 0054b858
    POP EBX                             ; 0054b859
    RET                                 ; 0054b85a

