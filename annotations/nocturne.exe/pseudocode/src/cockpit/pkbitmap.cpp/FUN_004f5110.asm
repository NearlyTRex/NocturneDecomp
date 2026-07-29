; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f5110(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   bitmap_set_ptr
; char *           Stack[0x8]:4   pbg_filename
; int              Stack[0xc]:4   apply_palette_flag
; int              Stack[0x10]:4   frames_per_bitmap
; int              Stack[0x14]:4   skip_data_load
; int              Stack[0x18]:4   selected_bitmap_index
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_004f59d0 at 004f59f7
;
; Referenced Globals:
;   TerminatedCString s_rb_0058d423
;   TerminatedCString s_art_0058d426
;   TerminatedCString s_Unable_to_open_PBG_file_0058d42a
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d445
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
;   cockpit_pkbitmap.cpp_FUN_004f4f90
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5110
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f5110
    PUSH ESI                            ; 004f5111
    PUSH EDI                            ; 004f5112
    PUSH EBP                            ; 004f5113
    SUB ESP,0x168                       ; 004f5114
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004f511a
    MOV EBP,dword ptr [ESP + 0x190]     ; 004f5121
    PUSH 0x58d423                       ; 004f5128 | = "rb"
    MOV EDX,dword ptr [ESP + 0x184]     ; 004f512d
    PUSH EDX                            ; 004f5134
    PUSH 0x58d426                       ; 004f5135 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004f513a
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f513f
    MOV EBX,EAX                         ; 004f5142
    TEST EAX,EAX                        ; 004f5144
    JZ 0x004f51bc                       ; 004f5146
        ;   XREF to: 004f51bc (CONDITIONAL_JUMP)  ; LAB_004f51bc
    PUSH EBP                            ; 004f514c
        ;   Label: LAB_004f514c
    MOV EDX,dword ptr [ESP + 0x190]     ; 004f514d
    PUSH EDX                            ; 004f5154
    MOV ECX,dword ptr [ESP + 0x190]     ; 004f5155
    PUSH ECX                            ; 004f515c
    PUSH EBX                            ; 004f515d
    PUSH EDI                            ; 004f515e
    CALL cockpit_pkbitmap.cpp_FUN_004f4f90 ; 004f515f
        ;   XREF to: 004f4f90 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_FUN_004f4f90(CPackedBitmapSet * bitmap_set_ptr, _FILE * file_handle, int frames_per_bitmap, int skip_data_load, ...)
    ADD ESP,0x14                        ; 004f5164
    PUSH EBX                            ; 004f5167
    MOV ESI,EAX                         ; 004f5168
    MOV dword ptr [ESP + 0x168],EAX     ; 004f516a
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f5171
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f5176
    MOV EAX,dword ptr [EDI]             ; 004f5179
    XOR EBX,EBX                         ; 004f517b
    TEST EAX,EAX                        ; 004f517d
    JLE 0x004f51a0                      ; 004f517f
        ;   XREF to: 004f51a0 (CONDITIONAL_JUMP)  ; LAB_004f51a0
    MOV EDX,dword ptr [ESP + 0x180]     ; 004f5181
        ;   Label: LAB_004f5181
    PUSH EDX                            ; 004f5188
    PUSH ESI                            ; 004f5189
    INC EBX                             ; 004f518a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0 ; 004f518b
        ;   XREF to: 004f3fc0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f5190
    MOV ECX,dword ptr [EDI]             ; 004f5193
    ADD ESI,0x24                        ; 004f5195
    CMP EBX,ECX                         ; 004f5198
    JL 0x004f5181                       ; 004f519a
        ;   XREF to: 004f5181 (CONDITIONAL_JUMP)  ; LAB_004f5181
    LEA EAX,[EAX]                       ; 004f519c
    CMP dword ptr [ESP + 0x184],0x0     ; 004f51a0
        ;   Label: LAB_004f51a0
    JNZ 0x004f5203                      ; 004f51a8
        ;   XREF to: 004f5203 (CONDITIONAL_JUMP)  ; LAB_004f5203
    MOV EAX,dword ptr [ESP + 0x164]     ; 004f51aa
        ;   Label: LAB_004f51aa
    ADD ESP,0x168                       ; 004f51b1
    POP EBP                             ; 004f51b7
    POP EDI                             ; 004f51b8
    POP ESI                             ; 004f51b9
    POP EBX                             ; 004f51ba
    RET                                 ; 004f51bb
    MOV ECX,dword ptr [ESP + 0x180]     ; 004f51bc
        ;   Label: LAB_004f51bc
    PUSH ECX                            ; 004f51c3
    PUSH 0x58d42a                       ; 004f51c4 | = "Unable to open PBG file %s"
    LEA EAX,[ESP + 0x108]               ; 004f51c9
    PUSH EAX                            ; 004f51d0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f51d1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x598                       ; 004f51d6
    ADD ESP,0xc                         ; 004f51db
    MOV [0x01cc4804],EAX                ; 004f51de | INT_01cc4804
    LEA EAX,[ESP + 0x100]               ; 004f51e3
    MOV ESI,0x58d445                    ; 004f51ea | = "..\\cockpit\\pkbitmap.cpp"
    PUSH EAX                            ; 004f51ef
    MOV dword ptr [0x01cc4800],ESI      ; 004f51f0 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f51f6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f51fb
    JMP 0x004f514c                      ; 004f51fe
        ;   XREF to: 004f514c (UNCONDITIONAL_JUMP)  ; LAB_004f514c
    MOV EAX,ESP                         ; 004f5203
        ;   Label: LAB_004f5203
    PUSH EAX                            ; 004f5205
    MOV ESI,dword ptr [ESP + 0x184]     ; 004f5206
    PUSH ESI                            ; 004f520d
    XOR EBX,EBX                         ; 004f520e
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0 ; 004f5210
        ;   XREF to: 0042d3f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0(char * filename, uchar * output_palette)
    MOV EAX,dword ptr [EDI]             ; 004f5215
    ADD ESP,0x8                         ; 004f5217
    TEST EAX,EAX                        ; 004f521a
    JLE 0x004f51aa                      ; 004f521c
        ;   XREF to: 004f51aa (CONDITIONAL_JUMP)  ; LAB_004f51aa
    MOV ESI,dword ptr [ESP + 0x164]     ; 004f521e
    TEST EBP,EBP                        ; 004f5225
        ;   Label: LAB_004f5225
    JL 0x004f523d                       ; 004f5227
        ;   XREF to: 004f523d (CONDITIONAL_JUMP)  ; LAB_004f523d
    CMP EBX,EBP                         ; 004f5229
    JZ 0x004f523d                       ; 004f522b
        ;   XREF to: 004f523d (CONDITIONAL_JUMP)  ; LAB_004f523d
    INC EBX                             ; 004f522d
    MOV EDX,dword ptr [EDI]             ; 004f522e
    ADD ESI,0x24                        ; 004f5230
    CMP EBX,EDX                         ; 004f5233
    JGE 0x004f51aa                      ; 004f5235
        ;   XREF to: 004f51aa (CONDITIONAL_JUMP)  ; LAB_004f51aa
    JMP 0x004f5225                      ; 004f523b
        ;   XREF to: 004f5225 (UNCONDITIONAL_JUMP)  ; LAB_004f5225
    MOV EAX,ESP                         ; 004f523d
        ;   Label: LAB_004f523d
    PUSH EAX                            ; 004f523f
    PUSH ESI                            ; 004f5240
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50 ; 004f5241
        ;   XREF to: 004f4a50 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 004f5246
    INC EBX                             ; 004f5249
    MOV EDX,dword ptr [EDI]             ; 004f524a
    ADD ESI,0x24                        ; 004f524c
    CMP EBX,EDX                         ; 004f524f
    JGE 0x004f51aa                      ; 004f5251
        ;   XREF to: 004f51aa (CONDITIONAL_JUMP)  ; LAB_004f51aa
    JMP 0x004f5225                      ; 004f5257
        ;   XREF to: 004f5225 (UNCONDITIONAL_JUMP)  ; LAB_004f5225

