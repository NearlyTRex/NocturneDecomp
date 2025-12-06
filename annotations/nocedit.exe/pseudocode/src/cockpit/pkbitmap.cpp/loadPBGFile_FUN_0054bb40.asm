; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet * bitmap_set, char * pbg_filename, char * palette_filename, int param3, int param4, int selected_bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   bitmap_set
; char *           Stack[0x8]:4   pbg_filename
; char *           Stack[0xc]:4   palette_filename
; int              Stack[0x10]:4   param3
; int              Stack[0x14]:4   param4
; int              Stack[0x18]:4   selected_bitmap_index
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 at 0054c4a7
;
; Referenced Globals:
;   TerminatedCString s_rb_0063f34c
;   TerminatedCString s_art_0063f34f
;   TerminatedCString s_Unable_to_open_PBG_file__0063f353
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f36e
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f386
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bb40
        ;   Label: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
    PUSH ESI                            ; 0054bb41
    PUSH EDI                            ; 0054bb42
    PUSH EBP                            ; 0054bb43
    SUB ESP,0x168                       ; 0054bb44
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0054bb4a
    MOV EBP,dword ptr [ESP + 0x190]     ; 0054bb51
    PUSH 0x63f34c                       ; 0054bb58 | = "rb" | s_rb_0063f34c = rb
    MOV EDX,dword ptr [ESP + 0x184]     ; 0054bb5d
    PUSH EDX                            ; 0054bb64
    PUSH 0x63f34f                       ; 0054bb65 | = "art" | s_art_0063f34f = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0054bb6a | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bb6f
    MOV EBX,EAX                         ; 0054bb72
    TEST EAX,EAX                        ; 0054bb74
    JZ 0x0054bbfc                       ; 0054bb76 | LAB_0054bbfc
        ;   XREF to: 0054bbfc (CONDITIONAL_JUMP)
    PUSH EBP                            ; 0054bb7c
        ;   Label: LAB_0054bb7c
    MOV EDX,dword ptr [ESP + 0x190]     ; 0054bb7d
    PUSH EDX                            ; 0054bb84
    MOV ECX,dword ptr [ESP + 0x190]     ; 0054bb85
    PUSH ECX                            ; 0054bb8c
    PUSH EBX                            ; 0054bb8d
    PUSH EDI                            ; 0054bb8e
    CALL cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 ; 0054bb8f | CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet * bitmap_set, FILE * file_handle, int param3, int param4, ...)
        ;   XREF to: 0054b9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0054bb94
    PUSH 0x59a                          ; 0054bb97
    PUSH 0x63f386                       ; 0054bb9c | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f386 = ..\cockpit\pkbitmap.cpp
    PUSH EBX                            ; 0054bba1
    MOV ESI,EAX                         ; 0054bba2
    MOV dword ptr [ESP + 0x170],EAX     ; 0054bba4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054bbab | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bbb0
    MOV EAX,dword ptr [EDI]             ; 0054bbb3
    XOR EBX,EBX                         ; 0054bbb5
    TEST EAX,EAX                        ; 0054bbb7
    JLE 0x0054bbe0                      ; 0054bbb9 | LAB_0054bbe0
        ;   XREF to: 0054bbe0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x180]     ; 0054bbbb
        ;   Label: LAB_0054bbbb
    PUSH EDX                            ; 0054bbc2
    PUSH ESI                            ; 0054bbc3
    INC EBX                             ; 0054bbc4
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990 ; 0054bbc5 | void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap * this_ptr, char * filename)
        ;   XREF to: 0054a990 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054bbca
    MOV ECX,dword ptr [EDI]             ; 0054bbcd
    ADD ESI,0x24                        ; 0054bbcf
    CMP EBX,ECX                         ; 0054bbd2
    JL 0x0054bbbb                       ; 0054bbd4 | LAB_0054bbbb
        ;   XREF to: 0054bbbb (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0054bbd6
    LEA EDX,[EDX]                       ; 0054bbdc
    CMP dword ptr [ESP + 0x184],0x0     ; 0054bbe0
        ;   Label: LAB_0054bbe0
    JNZ 0x0054bc43                      ; 0054bbe8 | LAB_0054bc43
        ;   XREF to: 0054bc43 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x164]     ; 0054bbea
        ;   Label: LAB_0054bbea
    ADD ESP,0x168                       ; 0054bbf1
    POP EBP                             ; 0054bbf7
    POP EDI                             ; 0054bbf8
    POP ESI                             ; 0054bbf9
    POP EBX                             ; 0054bbfa
    RET                                 ; 0054bbfb
    MOV ECX,dword ptr [ESP + 0x180]     ; 0054bbfc
        ;   Label: LAB_0054bbfc
    PUSH ECX                            ; 0054bc03
    PUSH 0x63f353                       ; 0054bc04 | = "Unable to open PBG file %s" | s_Unable_to_open_PBG_file__0063f353 = Unable to open PBG file %s
    LEA EAX,[ESP + 0x108]               ; 0054bc09
    PUSH EAX                            ; 0054bc10
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054bc11 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x595                       ; 0054bc16
    ADD ESP,0xc                         ; 0054bc1b
    MOV [0x02f0ca4c],EAX                ; 0054bc1e | int g_CurrentLineNumber
    LEA EAX,[ESP + 0x100]               ; 0054bc23
    MOV ESI,0x63f36e                    ; 0054bc2a | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063f36e = ..\cockpit\pkbitmap.cpp
    PUSH EAX                            ; 0054bc2f
    MOV dword ptr [0x02f0ca48],ESI      ; 0054bc30 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054bc36 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054bc3b
    JMP 0x0054bb7c                      ; 0054bc3e | LAB_0054bb7c
        ;   XREF to: 0054bb7c (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0054bc43
        ;   Label: LAB_0054bc43
    PUSH EAX                            ; 0054bc45
    MOV ESI,dword ptr [ESP + 0x184]     ; 0054bc46
    PUSH ESI                            ; 0054bc4d
    XOR EBX,EBX                         ; 0054bc4e
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 ; 0054bc50 | void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)
        ;   XREF to: 00431a30 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EDI]             ; 0054bc55
    ADD ESP,0x8                         ; 0054bc57
    TEST EAX,EAX                        ; 0054bc5a
    JLE 0x0054bbea                      ; 0054bc5c | LAB_0054bbea
        ;   XREF to: 0054bbea (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x164]     ; 0054bc5e
    TEST EBP,EBP                        ; 0054bc65
        ;   Label: LAB_0054bc65
    JL 0x0054bc7d                       ; 0054bc67 | LAB_0054bc7d
        ;   XREF to: 0054bc7d (CONDITIONAL_JUMP)
    CMP EBX,EBP                         ; 0054bc69
    JZ 0x0054bc7d                       ; 0054bc6b | LAB_0054bc7d
        ;   XREF to: 0054bc7d (CONDITIONAL_JUMP)
    INC EBX                             ; 0054bc6d
    MOV EDX,dword ptr [EDI]             ; 0054bc6e
    ADD ESI,0x24                        ; 0054bc70
    CMP EBX,EDX                         ; 0054bc73
    JGE 0x0054bbea                      ; 0054bc75 | LAB_0054bbea
        ;   XREF to: 0054bbea (CONDITIONAL_JUMP)
    JMP 0x0054bc65                      ; 0054bc7b | LAB_0054bc65
        ;   XREF to: 0054bc65 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0054bc7d
        ;   Label: LAB_0054bc7d
    PUSH EAX                            ; 0054bc7f
    PUSH ESI                            ; 0054bc80
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440 ; 0054bc81 | void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap * this_ptr, uchar * palette_buffer)
        ;   XREF to: 0054b440 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054bc86
    INC EBX                             ; 0054bc89
    MOV EDX,dword ptr [EDI]             ; 0054bc8a
    ADD ESI,0x24                        ; 0054bc8c
    CMP EBX,EDX                         ; 0054bc8f
    JGE 0x0054bbea                      ; 0054bc91 | LAB_0054bbea
        ;   XREF to: 0054bbea (CONDITIONAL_JUMP)
    JMP 0x0054bc65                      ; 0054bc97 | LAB_0054bc65
        ;   XREF to: 0054bc65 (UNCONDITIONAL_JUMP)

