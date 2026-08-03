; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   bitmap_width
; int              Stack[0x10]:4   bitmap_height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
; Local Variables:
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_art_0058d4c2
;   TerminatedCString s_rb_0058d4c6
;   TerminatedCString s_art_0058d4c9
;   TerminatedCString s_Unable_to_open_s_in_CPac_0058d4cd
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d502
;   TerminatedCString s_Size_of_s_is_lu_must_be_0058d51a
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d577
;   TerminatedCString s_Can_t_allocate_u_bytes_f_0058d58f
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d5d9
;   TerminatedCString s_Error_reading_from_s_in_0058d5f1
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d62a
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_unknown.c_FUN_005638d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f54c0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0
    PUSH ESI                            ; 004f54c1
    PUSH EDI                            ; 004f54c2
    PUSH EBP                            ; 004f54c3
    SUB ESP,0x198                       ; 004f54c4
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 004f54ca
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 004f54d1
    PUSH EBX                            ; 004f54d8
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f54d9
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f54de
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 004f54e1
    PUSH EDX                            ; 004f54e8
    PUSH 0x58d4c2                       ; 004f54e9 | = "art"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004f54ee
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004f54f3
    PUSH 0x58d4c6                       ; 004f54f6 | = "rb"
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 004f54fb
    PUSH ECX                            ; 004f5502
    PUSH 0x58d4c9                       ; 004f5503 | = "art"
    MOV ESI,EAX                         ; 004f5508
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004f550a
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f550f
    MOV dword ptr [ESP + 0x190],EAX     ; 004f5512
    TEST EAX,EAX                        ; 004f5519
    JZ 0x004f56e1                       ; 004f551b
        ;   XREF to: 004f56e1 (CONDITIONAL_JUMP)  ; LAB_004f56e1
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 004f5521
        ;   Label: LAB_004f5521
    IMUL EAX,EBP                        ; 004f5528
    MOV EDX,ESI                         ; 004f552b
    MOV dword ptr [ESP + 0x194],EAX     ; 004f552d
    SAR EDX,0x1f                        ; 004f5534
    MOV ECX,dword ptr [ESP + 0x194]     ; 004f5537
    MOV EAX,ESI                         ; 004f553e
    IDIV ECX                            ; 004f5540
    MOV EDI,EAX                         ; 004f5542
    MOV EAX,ECX                         ; 004f5544
    IMUL EAX,EDI                        ; 004f5546
    CMP EAX,ESI                         ; 004f5549
    JZ 0x004f5594                       ; 004f554b
        ;   XREF to: 004f5594 (CONDITIONAL_JUMP)  ; LAB_004f5594
    PUSH EBP                            ; 004f554d
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 004f554e
    PUSH EAX                            ; 004f5555
    PUSH ESI                            ; 004f5556
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004f5557
    PUSH EDX                            ; 004f555e
    PUSH 0x58d51a                       ; 004f555f | = "Size of %s is %lu, must be a multiple..."
    LEA EAX,[ESP + 0x78]                ; 004f5564
    PUSH EAX                            ; 004f5568
    MOV ESI,0xc6                        ; 004f5569
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f556e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x18                        ; 004f5573
    LEA EAX,[ESP + 0x64]                ; 004f5576
    MOV ECX,0x58d577                    ; 004f557a | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 004f557f
    MOV dword ptr [0x01cc4804],ESI      ; 004f5580 | g_INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 004f5586 | g_CHAR_PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f558c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f5591
    PUSH EDI                            ; 004f5594
        ;   Label: LAB_004f5594
    PUSH EBX                            ; 004f5595
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350 ; 004f5596
        ;   XREF to: 004f5350 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 004f559b
    MOV dword ptr [EBX + 0x20],EBP      ; 004f559e
    MOV EDI,dword ptr [ESP + 0x194]     ; 004f55a1
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 004f55a8
    PUSH EDI                            ; 004f55af
    MOV dword ptr [EBX + 0x1c],EAX      ; 004f55b0
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f55b3
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004f55b8
    MOV EBP,EAX                         ; 004f55bb
    TEST EAX,EAX                        ; 004f55bd
    JNZ 0x004f55fd                      ; 004f55bf
        ;   XREF to: 004f55fd (CONDITIONAL_JUMP)  ; LAB_004f55fd
    PUSH EDI                            ; 004f55c1
    PUSH 0x58d58f                       ; 004f55c2 | = "Can't allocate %u bytes for RAW buffe..."
    LEA EAX,[ESP + 0xd0]                ; 004f55c7
    PUSH EAX                            ; 004f55ce
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f55cf
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EDX,0x58d5d9                    ; 004f55d4 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 004f55d9
    LEA EAX,[ESP + 0xc8]                ; 004f55dc
    MOV ECX,0xd7                        ; 004f55e3
    PUSH EAX                            ; 004f55e8
    MOV dword ptr [0x01cc4800],EDX      ; 004f55e9 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f55ef | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f55f5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f55fa
    MOV ESI,dword ptr [EBX]             ; 004f55fd
        ;   Label: LAB_004f55fd
    XOR EDI,EDI                         ; 004f55ff
    TEST ESI,ESI                        ; 004f5601
    JLE 0x004f56a2                      ; 004f5603
        ;   XREF to: 004f56a2 (CONDITIONAL_JUMP)  ; LAB_004f56a2
    XOR ESI,ESI                         ; 004f5609
    MOV EAX,dword ptr [ESP + 0x190]     ; 004f560b
        ;   Label: LAB_004f560b
    PUSH EAX                            ; 004f5612
    PUSH 0x1                            ; 004f5613
    MOV EDX,dword ptr [ESP + 0x19c]     ; 004f5615
    PUSH EDX                            ; 004f561c
    PUSH EBP                            ; 004f561d
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f561e
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f5623
    CMP EAX,0x1                         ; 004f5626
    JZ 0x004f566d                       ; 004f5629
        ;   XREF to: 004f566d (CONDITIONAL_JUMP)  ; LAB_004f566d
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 004f562b
    PUSH ECX                            ; 004f5632
    PUSH 0x58d5f1                       ; 004f5633 | = "Error reading from %s in CPackedBitma..."
    LEA EAX,[ESP + 0x134]               ; 004f5638
    PUSH EAX                            ; 004f563f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f5640
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0x58d62a                    ; 004f5645 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 004f564a
    MOV [0x01cc4800],EAX                ; 004f564d | g_CHAR_PTR_01cc4800
    LEA EAX,[ESP + 0x12c]               ; 004f5652
    MOV EDX,0xe1                        ; 004f5659
    PUSH EAX                            ; 004f565e
    MOV dword ptr [0x01cc4804],EDX      ; 004f565f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f5665
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f566a
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 004f566d
        ;   Label: LAB_004f566d
    PUSH EAX                            ; 004f5674
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 004f5675
    PUSH EDX                            ; 004f567c
    MOV ECX,dword ptr [EBX + 0x20]      ; 004f567d
    PUSH ECX                            ; 004f5680
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f5681
    PUSH EAX                            ; 004f5684
    MOV EAX,dword ptr [EBX + 0x4]       ; 004f5685
    PUSH EBP                            ; 004f5688
    ADD EAX,ESI                         ; 004f5689
    PUSH EAX                            ; 004f568b
    INC EDI                             ; 004f568c
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 ; 004f568d
        ;   XREF to: 004f47b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESI,0x24                        ; 004f5692
    MOV EDX,dword ptr [EBX]             ; 004f5695
    ADD ESP,0x18                        ; 004f5697
    CMP EDI,EDX                         ; 004f569a
    JL 0x004f560b                       ; 004f569c
        ;   XREF to: 004f560b (CONDITIONAL_JUMP)  ; LAB_004f560b
    PUSH EBP                            ; 004f56a2
        ;   Label: LAB_004f56a2
    CALL crt_unknown.c_FUN_005638d0     ; 004f56a3
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004f56a8
    MOV ECX,dword ptr [ESP + 0x190]     ; 004f56ab
    PUSH ECX                            ; 004f56b2
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f56b3
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f56b8
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 004f56bb
    PUSH ESI                            ; 004f56c2
    PUSH EBX                            ; 004f56c3
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40 ; 004f56c4
        ;   XREF to: 004f5c40 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004f56c9
    CMP dword ptr [ESP + 0x1c0],0x0     ; 004f56cc
    JNZ 0x004f5720                      ; 004f56d4
        ;   XREF to: 004f5720 (CONDITIONAL_JUMP)  ; LAB_004f5720
    ADD ESP,0x198                       ; 004f56d6
    POP EBP                             ; 004f56dc
    POP EDI                             ; 004f56dd
    POP ESI                             ; 004f56de
    POP EBX                             ; 004f56df
    RET                                 ; 004f56e0
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 004f56e1
        ;   Label: LAB_004f56e1
    PUSH EDI                            ; 004f56e8
    PUSH 0x58d4cd                       ; 004f56e9 | = "Unable to open %s in CPackedBitmapSet..."
    LEA EAX,[ESP + 0x8]                 ; 004f56ee
    PUSH EAX                            ; 004f56f2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f56f3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0x58d502                    ; 004f56f8 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 004f56fd
    MOV [0x01cc4800],EAX                ; 004f5700 | g_CHAR_PTR_01cc4800
    MOV EAX,ESP                         ; 004f5705
    MOV EDX,0xb9                        ; 004f5707
    PUSH EAX                            ; 004f570c
    MOV dword ptr [0x01cc4804],EDX      ; 004f570d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f5713
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f5718
    JMP 0x004f5521                      ; 004f571b
        ;   XREF to: 004f5521 (UNCONDITIONAL_JUMP)  ; LAB_004f5521
    PUSH EBX                            ; 004f5720
        ;   Label: LAB_004f5720
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60 ; 004f5721
        ;   XREF to: 004f5c60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 004f5726
    ADD ESP,0x198                       ; 004f5729
    POP EBP                             ; 004f572f
    POP EDI                             ; 004f5730
    POP ESI                             ; 004f5731
    POP EBX                             ; 004f5732
    RET                                 ; 004f5733

