; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(CPackedBitmap *param_1,char *param_2)
;
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0 at 004f4efb
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920 at 004f599c
;
; Referenced Globals:
;   TerminatedCString s_rb_0058d305
;   TerminatedCString s_art_0058d308
;   TerminatedCString s_Unable_to_open_PBM_file_0058d30c
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d327
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
;   cockpit_pkbitmap.cpp_FUN_004f3f50
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4e40
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
    PUSH ESI                            ; 004f4e41
    SUB ESP,0x64                        ; 004f4e42
    MOV EBX,dword ptr [ESP + 0x70]      ; 004f4e45
    PUSH EBX                            ; 004f4e49
    CALL cockpit_pkbitmap.cpp_FUN_004f3f50 ; 004f4e4a
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f3f50()
    ADD ESP,0x4                         ; 004f4e4f
    MOV EDX,dword ptr [ESP + 0x74]      ; 004f4e52
    PUSH EDX                            ; 004f4e56
    PUSH EBX                            ; 004f4e57
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0 ; 004f4e58
        ;   XREF to: 004f3fc0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f4e5d
    PUSH 0x58d305                       ; 004f4e60 | = "rb"
    PUSH EBX                            ; 004f4e65
    PUSH 0x58d308                       ; 004f4e66 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004f4e6b
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f4e70
    MOV ESI,EAX                         ; 004f4e73
    TEST EAX,EAX                        ; 004f4e75
    JNZ 0x004f4eb1                      ; 004f4e77
        ;   XREF to: 004f4eb1 (CONDITIONAL_JUMP)  ; LAB_004f4eb1
    PUSH EDI                            ; 004f4e79
    PUSH EBX                            ; 004f4e7a
    PUSH 0x58d30c                       ; 004f4e7b | = "Unable to open PBM file %s"
    LEA EAX,[ESP + 0xc]                 ; 004f4e80
    PUSH EAX                            ; 004f4e84
    MOV EDI,0x4ff                       ; 004f4e85
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f4e8a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004f4e8f
    LEA EAX,[ESP + 0x4]                 ; 004f4e92
    MOV ECX,0x58d327                    ; 004f4e96 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH EAX                            ; 004f4e9b
    MOV dword ptr [0x01cc4804],EDI      ; 004f4e9c | g_INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 004f4ea2 | g_CHAR_PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f4ea8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4ead
    POP EDI                             ; 004f4eb0
    PUSH 0x0                            ; 004f4eb1
        ;   Label: LAB_004f4eb1
    PUSH ESI                            ; 004f4eb3
    PUSH EBX                            ; 004f4eb4
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 ; 004f4eb5
        ;   XREF to: 004f4c80 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 004f4eba
    PUSH ESI                            ; 004f4ebd
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f4ebe
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f4ec3
    CMP dword ptr [ESP + 0x78],0x0      ; 004f4ec6
    JNZ 0x004f4ed3                      ; 004f4ecb
        ;   XREF to: 004f4ed3 (CONDITIONAL_JUMP)  ; LAB_004f4ed3
    ADD ESP,0x64                        ; 004f4ecd
    POP ESI                             ; 004f4ed0
    POP EBX                             ; 004f4ed1
    RET                                 ; 004f4ed2
    PUSH EBX                            ; 004f4ed3
        ;   Label: LAB_004f4ed3
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0 ; 004f4ed4
        ;   XREF to: 004f4ab0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f4ed9
    ADD ESP,0x64                        ; 004f4edc
    POP ESI                             ; 004f4edf
    POP EBX                             ; 004f4ee0
    RET                                 ; 004f4ee1

