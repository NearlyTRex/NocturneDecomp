; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet * bitmap_set, FILE * file_handle, int param3, int param4, int selected_bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   bitmap_set
; FILE *           Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   param3
; int              Stack[0x10]:4   param4
; int              Stack[0x14]:4   selected_bitmap_index
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 at 0054bb8f
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f281
;   TerminatedCString s_IO_error_reading_PBG_pos_0063f299
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f2c7
;   TerminatedCString s_Corrupt_data_detected_re_0063f2df
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f302
;   TerminatedCString s_Out_of_memory_reading_PB_0063f31a
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f334
;   WatcomTypeInfo g_CPackedBitmapTypeInfo
;   undefined4 s_PBG_00680ca0
;   undefined4 s_BG_00680ca1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_constructTypedObjectArray_FUN_00601272
;   crt_stdio.c_fread_FUN_005fd990
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b9b0
        ;   Label: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
    PUSH ESI                            ; 0054b9b1
    PUSH EDI                            ; 0054b9b2
    PUSH EBP                            ; 0054b9b3
    SUB ESP,0x34                        ; 0054b9b4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0054b9b7
    MOV EBX,0x1                         ; 0054b9bb
    PUSH EBP                            ; 0054b9c0
        ;   Label: LAB_0054b9c0
    PUSH EBX                            ; 0054b9c1
    PUSH 0x8                            ; 0054b9c2
    LEA EAX,[ESP + 0x30]                ; 0054b9c4
    PUSH EAX                            ; 0054b9c8
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054b9c9 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054b9ce
    CMP EAX,0x1                         ; 0054b9d1
    JNZ 0x0054ba3a                      ; 0054b9d4 | LAB_0054ba3a
        ;   XREF to: 0054ba3a (CONDITIONAL_JUMP)
    MOV ECX,0x4                         ; 0054b9d6
    MOV EDI,0x680ca0                    ; 0054b9db | s_PBG_00680ca0
    LEA ESI,[ESP + 0x24]                ; 0054b9e0
    XOR EAX,EAX                         ; 0054b9e4
    CMPSB.REPE ES:EDI,ESI               ; 0054b9e6 | s_PBG_00680ca0
    JZ 0x0054b9ef                       ; 0054b9e8 | LAB_0054b9ef
        ;   XREF to: 0054b9ef (CONDITIONAL_JUMP)
    SBB EAX,EAX                         ; 0054b9ea
    SBB EAX,-0x1                        ; 0054b9ec
    TEST EAX,EAX                        ; 0054b9ef
        ;   Label: LAB_0054b9ef
    JZ 0x0054ba5f                       ; 0054b9f1 | LAB_0054ba5f
        ;   XREF to: 0054ba5f (CONDITIONAL_JUMP)
    MOV EAX,0x63f2c7                    ; 0054b9f3 | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f2c7 = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054b9f3
    MOV EDX,0x554                       ; 0054b9f8
    PUSH 0x63f2df                       ; 0054b9fd | = "Corrupt data detected reading PBG." | s_Corrupt_data_detected_re_0063f2df = Corrupt data detected reading PBG.
    MOV [0x02f0ca48],EAX                ; 0054ba02 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054ba07 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054ba0d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054ba12
    MOV ECX,0x63f302                    ; 0054ba15 | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f302 = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054ba15
    MOV ESI,0x555                       ; 0054ba1a
    PUSH 0x63f31a                       ; 0054ba1f | = "Out of memory reading PBG" | s_Out_of_memory_reading_PB_0063f31a = Out of memory reading PBG
    MOV dword ptr [0x02f0ca48],ECX      ; 0054ba24 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054ba2a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054ba30 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054ba35
    JMP 0x0054b9c0                      ; 0054ba38 | LAB_0054b9c0
        ;   XREF to: 0054b9c0 (UNCONDITIONAL_JUMP)
    MOV ESI,0x63f281                    ; 0054ba3a | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f281 = ..\cockpit\pkbitmap.cpp
        ;   Label: LAB_0054ba3a
    MOV EDI,0x553                       ; 0054ba3f
    PUSH 0x63f299                       ; 0054ba44 | = "IO error reading PBG (possibly corrup..." | s_IO_error_reading_PBG_pos_0063f299 = IO error reading PBG (possibly corrupt file).
    MOV dword ptr [0x02f0ca48],ESI      ; 0054ba49 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054ba4f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054ba55 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054ba5a
    JMP 0x0054b9f3                      ; 0054ba5d | LAB_0054b9f3
        ;   XREF to: 0054b9f3 (UNCONDITIONAL_JUMP)
    CMP EBX,dword ptr [ESP + 0x28]      ; 0054ba5f
        ;   Label: LAB_0054ba5f
    JA 0x0054b9f3                       ; 0054ba63 | LAB_0054b9f3
        ;   XREF to: 0054b9f3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054ba65
    MOV ECX,dword ptr [ESP + 0x50]      ; 0054ba69
    XOR EDX,EDX                         ; 0054ba6d
    DIV ECX                             ; 0054ba6f
    PUSH 0x662260                       ; 0054ba71 | WatcomTypeInfo g_CPackedBitmapTypeInfo
    MOV ESI,EAX                         ; 0054ba76
    PUSH EAX                            ; 0054ba78
    IMUL EAX,EAX,0x24                   ; 0054ba79
    PUSH 0x562                          ; 0054ba7c
    PUSH 0x63f334                       ; 0054ba81 | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f334 = ..\cockpit\pkbitmap.cpp
    ADD EAX,0x4                         ; 0054ba86
    PUSH EAX                            ; 0054ba89
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0054ba8a | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054ba8f
    PUSH EAX                            ; 0054ba92
    CALL crt_memory.c_constructTypedObjectArray_FUN_00601272 ; 0054ba93 | void * crt_memory.c_constructTypedObjectArray_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054ba98
    TEST EAX,EAX                        ; 0054ba9b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054ba9d
    JZ 0x0054ba15                       ; 0054baa1 | LAB_0054ba15
        ;   XREF to: 0054ba15 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0054baa7
    TEST ESI,ESI                        ; 0054baa9
    JLE 0x0054bb25                      ; 0054baab | LAB_0054bb25
        ;   XREF to: 0054bb25 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x30],EAX      ; 0054bab1
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054bab5
        ;   Label: LAB_0054bab5
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054bab9
    TEST EDX,EDX                        ; 0054babd
    JL 0x0054baca                       ; 0054babf | LAB_0054baca
        ;   XREF to: 0054baca (CONDITIONAL_JUMP)
    CMP EDI,EDX                         ; 0054bac1
    JZ 0x0054baca                       ; 0054bac3 | LAB_0054baca
        ;   XREF to: 0054baca (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0054bac5
    PUSH EAX                            ; 0054baca
        ;   Label: LAB_0054baca
    PUSH EBP                            ; 0054bacb
    MOV EBX,dword ptr [ESP + 0x38]      ; 0054bacc
    PUSH EBX                            ; 0054bad0
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 ; 0054bad1 | void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)
        ;   XREF to: 0054b690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bad6
    MOV EBX,0x1                         ; 0054bad9
    CMP EBX,dword ptr [ESP + 0x50]      ; 0054bade
    JGE 0x0054bb15                      ; 0054bae2 | LAB_0054bb15
        ;   XREF to: 0054bb15 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0054bae4
        ;   Label: LAB_0054bae4
    PUSH EAX                            ; 0054bae6
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820 ; 0054bae7 | CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap * this_ptr)
        ;   XREF to: 0054a820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054baec
    PUSH 0x1                            ; 0054baef
    PUSH EBP                            ; 0054baf1
    LEA EAX,[ESP + 0x8]                 ; 0054baf2
    PUSH EAX                            ; 0054baf6
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 ; 0054baf7 | void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)
        ;   XREF to: 0054b690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bafc
    PUSH 0x0                            ; 0054baff
    LEA EAX,[ESP + 0x4]                 ; 0054bb01
    PUSH EAX                            ; 0054bb05
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890 ; 0054bb06 | CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap * this_ptr)
        ;   XREF to: 0054a890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054bb0b
    INC EBX                             ; 0054bb0e
    CMP EBX,dword ptr [ESP + 0x50]      ; 0054bb0f
    JL 0x0054bae4                       ; 0054bb13 | LAB_0054bae4
        ;   XREF to: 0054bae4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054bb15
        ;   Label: LAB_0054bb15
    ADD EAX,0x24                        ; 0054bb19
    INC EDI                             ; 0054bb1c
    MOV dword ptr [ESP + 0x30],EAX      ; 0054bb1d
    CMP EDI,ESI                         ; 0054bb21
    JL 0x0054bab5                       ; 0054bb23 | LAB_0054bab5
        ;   XREF to: 0054bab5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054bb25
        ;   Label: LAB_0054bb25
    MOV dword ptr [EAX],ESI             ; 0054bb29
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054bb2b
    ADD ESP,0x34                        ; 0054bb2f
    POP EBP                             ; 0054bb32
    POP EDI                             ; 0054bb33
    POP ESI                             ; 0054bb34
    POP EBX                             ; 0054bb35
    RET                                 ; 0054bb36

