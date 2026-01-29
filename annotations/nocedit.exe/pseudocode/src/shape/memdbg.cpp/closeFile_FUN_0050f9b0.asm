; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(_FILE *file_ptr,char *source_file,int line_number)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_ptr
; char *           Stack[0x8]:4   source_file
; int              Stack[0xc]:4   line_number
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[181]:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 at 00431bc8
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 004333fc
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 0043472e
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 00431980
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 at 004335d9
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 at 0054b8e8
;   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 at 0054b565
;   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 at 0054bbab
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c151
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c2e2
;   ... and 171 more
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_0063629b
;   TerminatedCString s_Tried_to_close_NULL_file_006362af
;   TerminatedCString s_Closing_s_at_s_line_d_or_006362de
;   TerminatedCString s_Closing_s_in_s_at_s_line_0063631f
;   TerminatedCString s_shape_memdbg_cpp_00636366
;   TerminatedCString s_Tried_to_close_file_whic_0063637a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;   int g_OpenFileCount
;   FileTrackingEntry[100] g_FileRegistry
;   undefined4 g_FileRegistry[0].directory[0]
;   undefined4 g_FileRegistry[0].mode[0]
;   undefined4 g_FileRegistry[0].source_file[0]
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fclose_FUN_00601ea0
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_memdbg.cpp_traceFile_FUN_0050f180
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f9b0
        ;   Label: shape_memdbg.cpp_closeFile_FUN_0050f9b0
    PUSH ESI                            ; 0050f9b1
    PUSH EDI                            ; 0050f9b2
    PUSH EBP                            ; 0050f9b3
    SUB ESP,0x4                         ; 0050f9b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050f9b7
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050f9bb
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f9bf | g_RecursiveCallFlag
    JZ 0x0050fa98                       ; 0050f9c6
        ;   XREF to: 0050fa98 (CONDITIONAL_JUMP)  ; LAB_0050fa98
    TEST ESI,ESI                        ; 0050f9cc
        ;   Label: LAB_0050f9cc
    JZ 0x0050fabf                       ; 0050f9ce
        ;   XREF to: 0050fabf (CONDITIONAL_JUMP)  ; LAB_0050fabf
    MOV EBP,dword ptr [0x02f0d948]      ; 0050f9d4 | g_OpenFileCount
        ;   Label: LAB_0050f9d4
    XOR EBX,EBX                         ; 0050f9da
    TEST EBP,EBP                        ; 0050f9dc
    JLE 0x0050fb1d                      ; 0050f9de
        ;   XREF to: 0050fb1d (CONDITIONAL_JUMP)  ; LAB_0050fb1d
    XOR EAX,EAX                         ; 0050f9e4
    IMUL EDX,EBP,0x328                  ; 0050f9e6
    CMP ESI,dword ptr [EAX + 0x2f0dc70] ; 0050f9ec | g_FileRegistry[0].file_ptr | g_FileRegistry[1].file_ptr
        ;   Label: LAB_0050f9ec
    JNZ 0x0050fb0f                      ; 0050f9f2
        ;   XREF to: 0050fb0f (CONDITIONAL_JUMP)  ; LAB_0050fb0f
    MOV EDX,0x2f0d94c                   ; 0050f9f8 | g_FileRegistry
    ADD EDX,EAX                         ; 0050f9fd
    LEA ECX,[EDX + 0x208]               ; 0050f9ff | g_FileRegistry[0].mode[0]
    LEA EBP,[EDX + 0x21c]               ; 0050fa05 | g_FileRegistry[0].source_file[0]
    MOV dword ptr [ESP],EBP             ; 0050fa0b | g_FileRegistry[0].source_file[0] | g_FileRegistry[1].source_file[0]
    CMP byte ptr [EAX + 0x2f0da50],0x0  ; 0050fa0e | g_FileRegistry[0].directory[0] | g_FileRegistry[1].directory[0]
    JNZ 0x0050fb68                      ; 0050fa15
        ;   XREF to: 0050fb68 (CONDITIONAL_JUMP)  ; LAB_0050fb68
    MOV EBP,dword ptr [EAX + 0x2f0dc6c] ; 0050fa1b | g_FileRegistry[0].line_number | g_FileRegistry[1].line_number
    PUSH EBP                            ; 0050fa21
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050fa22
    PUSH EAX                            ; 0050fa26 | g_FileRegistry[0].source_file[0] | g_FileRegistry[1].source_file[0]
    PUSH ECX                            ; 0050fa27 | g_FileRegistry[0].mode[0] | g_FileRegistry[1].mode[0]
    PUSH EDI                            ; 0050fa28
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0050fa29
    PUSH ECX                            ; 0050fa2d
    PUSH EDX                            ; 0050fa2e | g_FileRegistry
    PUSH 0x6362de                       ; 0050fa2f | = "Closing %s at %s line %d, originally ..."
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050fa34
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x1c                        ; 0050fa39
    MOV EDI,dword ptr [0x02f0d948]      ; 0050fa3c | g_OpenFileCount
        ;   Label: LAB_0050fa3c
    DEC EDI                             ; 0050fa42
    MOV EAX,EDI                         ; 0050fa43
    SUB EAX,EBX                         ; 0050fa45
    IMUL EAX,EAX,0x328                  ; 0050fa47
    PUSH EAX                            ; 0050fa4d
    LEA EAX,[EBX + 0x1]                 ; 0050fa4e
    IMUL EAX,EAX,0x328                  ; 0050fa51
    IMUL EBX,EBX,0x328                  ; 0050fa57
    ADD EAX,0x2f0d94c                   ; 0050fa5d | g_FileRegistry
    PUSH EAX                            ; 0050fa62 | g_FileRegistry[1].filename[0]
    ADD EBX,0x2f0d94c                   ; 0050fa63 | g_FileRegistry
    PUSH EBX                            ; 0050fa69 | g_FileRegistry
    MOV dword ptr [0x02f0d948],EDI      ; 0050fa6a | g_OpenFileCount
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0050fa70
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050fa75
    MOV EBP,dword ptr [0x02f0d93c]      ; 0050fa78 | g_FileMutex
    PUSH EBP                            ; 0050fa7e
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050fa7f
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050fa84
    PUSH ESI                            ; 0050fa87
    CALL crt_stdio.c_fclose_FUN_00601ea0 ; 0050fa88
        ;   XREF to: 00601ea0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00601ea0(_FILE * file_handle)
    ADD ESP,0x4                         ; 0050fa8d
    ADD ESP,0x4                         ; 0050fa90
    POP EBP                             ; 0050fa93
    POP EDI                             ; 0050fa94
    POP ESI                             ; 0050fa95
    POP EBX                             ; 0050fa96
    RET                                 ; 0050fa97
    CMP dword ptr [0x02f0d93c],0x0      ; 0050fa98 | g_FileMutex
        ;   Label: LAB_0050fa98
    JNZ 0x0050faab                      ; 0050fa9f
        ;   XREF to: 0050faab (CONDITIONAL_JUMP)  ; LAB_0050faab
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050faa1
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050faa6 | g_FileMutex
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050faab | g_FileMutex
        ;   Label: LAB_0050faab
    PUSH EBX                            ; 0050fab1
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050fab2
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050fab7
    JMP 0x0050f9cc                      ; 0050faba
        ;   XREF to: 0050f9cc (UNCONDITIONAL_JUMP)  ; LAB_0050f9cc
    MOV EBP,dword ptr [0x02f0d93c]      ; 0050fabf | g_FileMutex
        ;   Label: LAB_0050fabf
    PUSH EBP                            ; 0050fac5
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050fac6
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    MOV EAX,[0x02f0ca50]                ; 0050facb | g_RecursiveCallFlag
    ADD ESP,0x4                         ; 0050fad0
    TEST EAX,EAX                        ; 0050fad3
    JZ 0x0050fae1                       ; 0050fad5
        ;   XREF to: 0050fae1 (CONDITIONAL_JUMP)  ; LAB_0050fae1
    XOR EAX,EAX                         ; 0050fad7
    ADD ESP,0x4                         ; 0050fad9
    POP EBP                             ; 0050fadc
    POP EDI                             ; 0050fadd
    POP ESI                             ; 0050fade
    POP EBX                             ; 0050fadf
    RET                                 ; 0050fae0
    PUSH EDI                            ; 0050fae1
        ;   Label: LAB_0050fae1
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050fae2
    PUSH EBX                            ; 0050fae6
    MOV EDX,0x63629b                    ; 0050fae7 | = "..\\shape\\memdbg.cpp"
    MOV ECX,0x216                       ; 0050faec
    PUSH 0x6362af                       ; 0050faf1 | = "Tried to close NULL file pointer at %..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0050faf6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050fafc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fb02
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0050fb07
    JMP 0x0050f9d4                      ; 0050fb0a
        ;   XREF to: 0050f9d4 (UNCONDITIONAL_JUMP)  ; LAB_0050f9d4
    ADD EAX,0x328                       ; 0050fb0f
        ;   Label: LAB_0050fb0f
    INC EBX                             ; 0050fb14
    CMP EAX,EDX                         ; 0050fb15
    JL 0x0050f9ec                       ; 0050fb17
        ;   XREF to: 0050f9ec (CONDITIONAL_JUMP)  ; LAB_0050f9ec
    MOV EAX,[0x02f0d93c]                ; 0050fb1d | g_FileMutex
        ;   Label: LAB_0050fb1d
    PUSH EAX                            ; 0050fb22
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050fb23
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    MOV EDX,dword ptr [0x02f0ca50]      ; 0050fb28 | g_RecursiveCallFlag
    ADD ESP,0x4                         ; 0050fb2e
    TEST EDX,EDX                        ; 0050fb31
    JNZ 0x0050fb5e                      ; 0050fb33
        ;   XREF to: 0050fb5e (CONDITIONAL_JUMP)  ; LAB_0050fb5e
    PUSH EDI                            ; 0050fb35
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050fb36
    PUSH ESI                            ; 0050fb3a
    MOV ECX,0x636366                    ; 0050fb3b | = "..\\shape\\memdbg.cpp"
    MOV EBX,0x235                       ; 0050fb40
    PUSH 0x63637a                       ; 0050fb45 | = "Tried to close file which which was n..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0050fb4a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0050fb50 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fb56
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0050fb5b
    XOR EAX,EAX                         ; 0050fb5e
        ;   Label: LAB_0050fb5e
    ADD ESP,0x4                         ; 0050fb60
    POP EBP                             ; 0050fb63
    POP EDI                             ; 0050fb64
    POP ESI                             ; 0050fb65
    POP EBX                             ; 0050fb66
    RET                                 ; 0050fb67
    MOV EBP,dword ptr [EAX + 0x2f0dc6c] ; 0050fb68 | g_FileRegistry[0].line_number
        ;   Label: LAB_0050fb68
    PUSH EBP                            ; 0050fb6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050fb6f
    PUSH EAX                            ; 0050fb73 | g_FileRegistry[0].source_file[0]
    PUSH ECX                            ; 0050fb74 | g_FileRegistry[0].mode[0]
    PUSH EDI                            ; 0050fb75
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0050fb76
    PUSH ECX                            ; 0050fb7a
    PUSH EDX                            ; 0050fb7b | g_FileRegistry
    ADD EDX,0x104                       ; 0050fb7c
    PUSH EDX                            ; 0050fb82 | g_FileRegistry[0].directory[0]
    PUSH 0x63631f                       ; 0050fb83 | = "Closing %s in %s at %s line %d, origi..."
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050fb88
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x20                        ; 0050fb8d
    JMP 0x0050fa3c                      ; 0050fb90
        ;   XREF to: 0050fa3c (UNCONDITIONAL_JUMP)  ; LAB_0050fa3c

