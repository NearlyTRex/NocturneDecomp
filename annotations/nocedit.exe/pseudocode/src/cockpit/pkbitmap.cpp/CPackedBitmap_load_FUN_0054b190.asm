; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   bitmap_data
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   row_stride
; Local Variables:
; undefined        Stack[-0x154]:1  local_154
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b046
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c117
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef81
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef99
;   TerminatedCString s_Unable_to_allocate_memor_0063efb1
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063eff6
;   TerminatedCString s_Out_of_memory_packing_fi_0063f00e
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f04f
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f067
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b190
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
    PUSH ESI                            ; 0054b191
    PUSH EDI                            ; 0054b192
    PUSH EBP                            ; 0054b193
    SUB ESP,0x144                       ; 0054b194
    MOV EBP,dword ptr [ESP + 0x158]     ; 0054b19a
    PUSH EBP                            ; 0054b1a1
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 ; 0054b1a2
        ;   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b1a7
    MOV EAX,dword ptr [ESP + 0x160]     ; 0054b1aa
    MOV dword ptr [EBP + 0x18],EAX      ; 0054b1b1
    MOV EAX,dword ptr [ESP + 0x164]     ; 0054b1b4
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0054b1bb
    MOV dword ptr [EBP + 0x1c],EAX      ; 0054b1c2
    TEST EDX,EDX                        ; 0054b1c5
    JNZ 0x0054b1d3                      ; 0054b1c7
        ;   XREF to: 0054b1d3 (CONDITIONAL_JUMP)  ; LAB_0054b1d3
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054b1c9
    MOV dword ptr [ESP + 0x16c],EAX     ; 0054b1cc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054b1d3
        ;   Label: LAB_0054b1d3
    PUSH 0x378                          ; 0054b1d6
    INC EAX                             ; 0054b1db
    PUSH 0x63ef81                       ; 0054b1dc | = "..\\cockpit\\pkbitmap.cpp"
    SHL EAX,0x2                         ; 0054b1e1
    PUSH EAX                            ; 0054b1e4
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0054b1e5
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054b1ea
    MOV dword ptr [EBP + 0x20],EAX      ; 0054b1ed
    TEST EAX,EAX                        ; 0054b1f0
    JZ 0x0054b39d                       ; 0054b1f2
        ;   XREF to: 0054b39d (CONDITIONAL_JUMP)  ; LAB_0054b39d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0054b1f8
        ;   Label: LAB_0054b1f8
    XOR EDI,EDI                         ; 0054b1ff
    XOR ESI,ESI                         ; 0054b201
    MOV dword ptr [ESP + 0x130],EDI     ; 0054b203
    MOV dword ptr [ESP + 0x140],EAX     ; 0054b20a
    MOV dword ptr [ESP + 0x12c],EDI     ; 0054b211
    MOV dword ptr [ESP + 0x13c],EDI     ; 0054b218
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0054b21f
        ;   Label: LAB_0054b21f
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054b226
    ADD EAX,ECX                         ; 0054b229
    MOV dword ptr [EAX],ESI             ; 0054b22b
    MOV EAX,dword ptr [ESP + 0x130]     ; 0054b22d
    CMP EAX,dword ptr [EBP + 0x1c]      ; 0054b234
    JGE 0x0054b3c8                      ; 0054b237
        ;   XREF to: 0054b3c8 (CONDITIONAL_JUMP)  ; LAB_0054b3c8
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054b23d
    XOR EBX,EBX                         ; 0054b240
    TEST EDI,EDI                        ; 0054b242
    JLE 0x0054b361                      ; 0054b244
        ;   XREF to: 0054b361 (CONDITIONAL_JUMP)  ; LAB_0054b361
    MOV EAX,dword ptr [ESP + 0x140]     ; 0054b24a
        ;   Label: LAB_0054b24a
    ADD EAX,EBX                         ; 0054b251
    XOR EDX,EDX                         ; 0054b253
    MOV EDI,dword ptr [ESP + 0x168]     ; 0054b255
    MOV DL,byte ptr [EAX]               ; 0054b25c
    CMP EDX,EDI                         ; 0054b25e
    JZ 0x0054b3c5                       ; 0054b260
        ;   XREF to: 0054b3c5 (CONDITIONAL_JUMP)  ; LAB_0054b3c5
    MOV ECX,dword ptr [ESP + 0x168]     ; 0054b266
    MOV EDI,EBX                         ; 0054b26d
    INC EBX                             ; 0054b26f
        ;   Label: LAB_0054b26f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054b270
    INC EAX                             ; 0054b273
    CMP EBX,EDX                         ; 0054b274
    JGE 0x0054b280                      ; 0054b276
        ;   XREF to: 0054b280 (CONDITIONAL_JUMP)  ; LAB_0054b280
    XOR EDX,EDX                         ; 0054b278
    MOV DL,byte ptr [EAX]               ; 0054b27a
    CMP EDX,ECX                         ; 0054b27c
    JNZ 0x0054b26f                      ; 0054b27e
        ;   XREF to: 0054b26f (CONDITIONAL_JUMP)  ; LAB_0054b26f
    MOV EAX,EBX                         ; 0054b280
        ;   Label: LAB_0054b280
    SUB EAX,EDI                         ; 0054b282
    MOV dword ptr [ESP + 0x134],EAX     ; 0054b284
    ADD EAX,0x3                         ; 0054b28b
    AND AL,0xfc                         ; 0054b28e
    ADD EAX,ESI                         ; 0054b290
    ADD EAX,0x4                         ; 0054b292
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0054b295
    MOV dword ptr [ESP + 0x138],EAX     ; 0054b29c
    CMP EAX,EDX                         ; 0054b2a3
    JLE 0x0054b315                      ; 0054b2a5
        ;   XREF to: 0054b315 (CONDITIONAL_JUMP)  ; LAB_0054b315
    PUSH 0x3ac                          ; 0054b2a7
    PUSH 0x63eff6                       ; 0054b2ac | = "..\\cockpit\\pkbitmap.cpp"
    ADD EAX,0x4000                      ; 0054b2b1
    PUSH EAX                            ; 0054b2b6
    MOV dword ptr [ESP + 0x148],EAX     ; 0054b2b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b2be
    PUSH EAX                            ; 0054b2c1
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0054b2c2
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0054b2c7
    MOV dword ptr [EBP + 0x14],EAX      ; 0054b2ca
    TEST EAX,EAX                        ; 0054b2cd
    JNZ 0x0054b315                      ; 0054b2cf
        ;   XREF to: 0054b315 (CONDITIONAL_JUMP)  ; LAB_0054b315
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0054b2d1
    PUSH ECX                            ; 0054b2d8
    MOV EAX,dword ptr [ESP + 0x134]     ; 0054b2d9
    PUSH EAX                            ; 0054b2e0
    PUSH EBP                            ; 0054b2e1
    PUSH 0x63f00e                       ; 0054b2e2 | = "Out of memory packing file \"%s\" on ..."
    LEA EAX,[ESP + 0x10]                ; 0054b2e7
    PUSH EAX                            ; 0054b2eb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0054b2ec
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x63f04f                    ; 0054b2f1 | = "..\\cockpit\\pkbitmap.cpp"
    ADD ESP,0x14                        ; 0054b2f6
    MOV EAX,ESP                         ; 0054b2f9
    MOV ECX,0x3b2                       ; 0054b2fb
    PUSH EAX                            ; 0054b300
    MOV dword ptr [0x02f0ca48],EDX      ; 0054b301 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054b307 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b30d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b312
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b315
        ;   Label: LAB_0054b315
    ADD EAX,ESI                         ; 0054b318
    MOV ECX,dword ptr [ESP + 0x134]     ; 0054b31a
    LEA EDX,[EAX + 0x4]                 ; 0054b321
    MOV word ptr [EAX],DI               ; 0054b324
    XOR ESI,ESI                         ; 0054b327
    MOV word ptr [EAX + 0x2],CX         ; 0054b329
    MOV EDI,dword ptr [ESP + 0x140]     ; 0054b32d
    XOR ECX,ECX                         ; 0054b334
    MOV SI,word ptr [EAX]               ; 0054b336
    MOV CX,word ptr [EAX + 0x2]         ; 0054b339
    ADD ESI,EDI                         ; 0054b33d
    MOV EDI,EDX                         ; 0054b33f
    PUSH EDI                            ; 0054b341
    MOV EAX,ECX                         ; 0054b342
    SHR ECX,0x2                         ; 0054b344
    MOVSD.REP ES:EDI,ESI                ; 0054b347
    MOV CL,AL                           ; 0054b349
    AND CL,0x3                          ; 0054b34b
    MOVSB.REP ES:EDI,ESI                ; 0054b34e
    POP EDI                             ; 0054b350
    MOV ESI,dword ptr [ESP + 0x138]     ; 0054b351
    CMP EBX,dword ptr [EBP + 0x18]      ; 0054b358
        ;   Label: LAB_0054b358
    JL 0x0054b24a                       ; 0054b35b
        ;   XREF to: 0054b24a (CONDITIONAL_JUMP)  ; LAB_0054b24a
    MOV ECX,dword ptr [ESP + 0x130]     ; 0054b361
        ;   Label: LAB_0054b361
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0054b368
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0054b36f
    MOV EBX,dword ptr [ESP + 0x140]     ; 0054b376
    INC ECX                             ; 0054b37d
    ADD EDX,0x4                         ; 0054b37e
    ADD EBX,EAX                         ; 0054b381
    MOV dword ptr [ESP + 0x130],ECX     ; 0054b383
    MOV dword ptr [ESP + 0x140],EBX     ; 0054b38a
    MOV dword ptr [ESP + 0x12c],EDX     ; 0054b391
    JMP 0x0054b21f                      ; 0054b398
        ;   XREF to: 0054b21f (UNCONDITIONAL_JUMP)  ; LAB_0054b21f
    MOV EBX,0x63ef99                    ; 0054b39d | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_0054b39d
    MOV ESI,0x37a                       ; 0054b3a2
    PUSH 0x63efb1                       ; 0054b3a7 | = "Unable to allocate memory for rowOffs..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0054b3ac | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054b3b2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b3b8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b3bd
    JMP 0x0054b1f8                      ; 0054b3c0
        ;   XREF to: 0054b1f8 (UNCONDITIONAL_JUMP)  ; LAB_0054b1f8
    INC EBX                             ; 0054b3c5
        ;   Label: LAB_0054b3c5
    JMP 0x0054b358                      ; 0054b3c6
        ;   XREF to: 0054b358 (UNCONDITIONAL_JUMP)  ; LAB_0054b358
    PUSH 0x3d6                          ; 0054b3c8
        ;   Label: LAB_0054b3c8
    PUSH 0x63f067                       ; 0054b3cd | = "..\\cockpit\\pkbitmap.cpp"
    PUSH ESI                            ; 0054b3d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b3d3
    PUSH EAX                            ; 0054b3d6
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0054b3d7
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0054b3dc
    MOV dword ptr [EBP + 0x14],EAX      ; 0054b3df
    ADD ESP,0x144                       ; 0054b3e2
    POP EBP                             ; 0054b3e8
    POP EDI                             ; 0054b3e9
    POP ESI                             ; 0054b3ea
    POP EBX                             ; 0054b3eb
    RET                                 ; 0054b3ec

