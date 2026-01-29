; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bcb
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00613004
;   TerminatedCString s_No_room_for_frame_buffer_00613013
;   TerminatedCString s_vga_act_0061303f
;   TerminatedCString s_vga_lte_00613047
;   TerminatedCString s_vga_map_0061304f
;   TerminatedCString s_vga_act_00613057
;   TerminatedCString s_rb_0061305f
;   TerminatedCString s_default_act_00613062
;   TerminatedCString s_art_0061306e
;   TerminatedCString s_engine_2d_c_00613072
;   SResolutionEntry[9] g_ResolutionTable
;   undefined4 DAT_0066df30
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_RenderingMode
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   engine_2d.c_loadOrBuildColorMap_FUN_00402930
;   engine_2d.c_loadPaletteFile_FUN_004015a0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401010
        ;   Label: engine_2d.c_initGraphicsSystem_FUN_00401010
    PUSH EDI                            ; 00401011
    MOV EDX,dword ptr [0x00679398]      ; 00401012 | g_WindowHeight
    PUSH EDX                            ; 00401018
    MOV ECX,dword ptr [0x00679394]      ; 00401019 | g_WindowWidth
    PUSH ECX                            ; 0040101f
    CALL wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10 ; 00401020
        ;   XREF to: 005ecc10 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10()
    ADD ESP,0x8                         ; 00401025
    TEST EAX,EAX                        ; 00401028
    JZ 0x004010ce                       ; 0040102a
        ;   XREF to: 004010ce (CONDITIONAL_JUMP)  ; LAB_004010ce
    MOV EAX,[0x00772628]                ; 00401030 | g_RenderingMode
        ;   Label: LAB_00401030
    PUSH 0x8                            ; 00401035
    MOV ECX,dword ptr [EAX*0x8 + 0x66df2c] ; 00401037 | g_ResolutionTable
    MOV EAX,dword ptr [EAX*0x8 + 0x66df30] ; 0040103e | DAT_0066df30
    PUSH EAX                            ; 00401045
    PUSH ECX                            ; 00401046
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 00401047
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0040104c
    PUSH 0x61303f                       ; 0040104f | = "vga.act"
    CALL engine_2d.c_loadPaletteFile_FUN_004015a0 ; 00401054
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadPaletteFile_FUN_004015a0(char * filename)
    ADD ESP,0x4                         ; 00401059
    PUSH 0x613047                       ; 0040105c | = "vga.lte"
    ADD ESP,0x4                         ; 00401061
    PUSH 0x61304f                       ; 00401064 | = "vga.map"
    CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930 ; 00401069
        ;   XREF to: 00402930 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * palette_filename)
    ADD ESP,0x4                         ; 0040106e
    PUSH 0x613057                       ; 00401071 | = "vga.act"
    ADD ESP,0x4                         ; 00401076
    MOV EDI,0xffffffff                  ; 00401079
    MOV EBX,0x4                         ; 0040107e
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 ; 00401083
        ;   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0()
    MOV ECX,0x1                         ; 00401088
    MOV dword ptr [0x02d02580],EDI      ; 0040108d | g_ReciprocalLookupTable
    MOV EAX,0xffffffff                  ; 00401093
        ;   Label: LAB_00401093
    XOR EDX,EDX                         ; 00401098
    DIV ECX                             ; 0040109a
    ADD EBX,0x4                         ; 0040109c
    INC ECX                             ; 0040109f
    MOV dword ptr [EBX + 0x2d0257c],EAX ; 004010a0 | DAT_02d02584 | DAT_02d02588
    CMP ECX,0x640                       ; 004010a6
    JC 0x00401093                       ; 004010ac
        ;   XREF to: 00401093 (CONDITIONAL_JUMP)  ; LAB_00401093
    PUSH 0x61305f                       ; 004010ae | = "rb"
    PUSH 0x613062                       ; 004010b3 | = "default.act"
    PUSH 0x61306e                       ; 004010b8 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004010bd
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004010c2
    ADD ESP,0xc                         ; 004010c4
    TEST EAX,EAX                        ; 004010c7
    JNZ 0x004010f8                      ; 004010c9
        ;   XREF to: 004010f8 (CONDITIONAL_JUMP)  ; LAB_004010f8
    POP EDI                             ; 004010cb
    POP EBX                             ; 004010cc
    RET                                 ; 004010cd
    PUSH ESI                            ; 004010ce
        ;   Label: LAB_004010ce
    MOV EBX,0x613004                    ; 004010cf | = "..\\engine\\2d.c"
    MOV ESI,0x86                        ; 004010d4
    PUSH 0x613013                       ; 004010d9 | = "No room for frame buffer.  Please run..."
    MOV dword ptr [0x02f0ca48],EBX      ; 004010de | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004010e4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004010ea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004010ef
    POP ESI                             ; 004010f2
    JMP 0x00401030                      ; 004010f3
        ;   XREF to: 00401030 (UNCONDITIONAL_JUMP)  ; LAB_00401030
    PUSH EAX                            ; 004010f8
        ;   Label: LAB_004010f8
    PUSH 0x1                            ; 004010f9
    PUSH 0x300                          ; 004010fb
    PUSH 0x2d02248                      ; 00401100 | g_DefaultPalette
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00401105
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0040110a
    PUSH 0xc7                           ; 0040110d
    PUSH 0x613072                       ; 00401112 | = "..\\engine\\2d.c"
    PUSH EBX                            ; 00401117
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00401118
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0040111d
    POP EDI                             ; 00401120
    POP EBX                             ; 00401121
    RET                                 ; 00401122

