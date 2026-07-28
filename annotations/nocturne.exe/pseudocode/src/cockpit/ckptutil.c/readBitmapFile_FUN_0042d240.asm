; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(char *filename,void *buffer,int size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[5]:
;   cockpit_ckptutil.c_FUN_0042d180 at 0042d19c
;   cockpit_ckptutil.c_applyColorPalette_FUN_0042d200 at 0042d21a
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0 at 004f46c1
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f465e
;   engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70 at 00490099
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_0057a625
;   TerminatedCString s_cockpit_ckptutil_c_0057a657
;   TerminatedCString s_rb_0057a66d
;   TerminatedCString s_art_0057a670
;   TerminatedCString s_Unable_to_open_bitmap_fi_0057a674
;   TerminatedCString s_cockpit_ckptutil_c_0057a695
;   TerminatedCString s_Unable_to_read_bitmap_fi_0057a6ab
;   TerminatedCString s_cockpit_ckptutil_c_0057a6cc
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d240
        ;   Label: cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
    PUSH ESI                            ; 0042d241
    PUSH EDI                            ; 0042d242
    PUSH EBP                            ; 0042d243
    SUB ESP,0x50                        ; 0042d244
    MOV EDI,dword ptr [ESP + 0x64]      ; 0042d247
    MOV ESI,dword ptr [ESP + 0x68]      ; 0042d24b
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0042d24f
    TEST ESI,ESI                        ; 0042d253
    JZ 0x0042d2c8                       ; 0042d255
        ;   XREF to: 0042d2c8 (CONDITIONAL_JUMP)  ; LAB_0042d2c8
    PUSH 0x57a66d                       ; 0042d257 | = "rb"
        ;   Label: LAB_0042d257
    PUSH EDI                            ; 0042d25c
    PUSH 0x57a670                       ; 0042d25d | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0042d262
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0042d267
    MOV EBX,EAX                         ; 0042d26a
    TEST EAX,EAX                        ; 0042d26c
    JNZ 0x0042d2a3                      ; 0042d26e
        ;   XREF to: 0042d2a3 (CONDITIONAL_JUMP)  ; LAB_0042d2a3
    PUSH EDI                            ; 0042d270
    PUSH 0x57a674                       ; 0042d271 | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042d276
    PUSH EAX                            ; 0042d27a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042d27b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x57a695                    ; 0042d280 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042d285
    MOV [0x01cc4800],EAX                ; 0042d288 | PTR_01cc4800
    MOV EAX,ESP                         ; 0042d28d
    MOV EDX,0xdb                        ; 0042d28f
    PUSH EAX                            ; 0042d294
    MOV dword ptr [0x01cc4804],EDX      ; 0042d295 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042d29b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042d2a0
    PUSH EBX                            ; 0042d2a3
        ;   Label: LAB_0042d2a3
    PUSH 0x1                            ; 0042d2a4
    PUSH EBP                            ; 0042d2a6
    PUSH ESI                            ; 0042d2a7
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0042d2a8
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0042d2ad
    CMP EAX,0x1                         ; 0042d2b0
    JNZ 0x0042d311                      ; 0042d2b3
        ;   XREF to: 0042d311 (CONDITIONAL_JUMP)  ; LAB_0042d311
    PUSH EBX                            ; 0042d2b5
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0042d2b6
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0042d2bb
    MOV EAX,ESI                         ; 0042d2be
    ADD ESP,0x50                        ; 0042d2c0
    POP EBP                             ; 0042d2c3
    POP EDI                             ; 0042d2c4
    POP ESI                             ; 0042d2c5
    POP EBX                             ; 0042d2c6
    RET                                 ; 0042d2c7
    PUSH EBP                            ; 0042d2c8
        ;   Label: LAB_0042d2c8
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0042d2c9
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0042d2ce
    MOV ESI,EAX                         ; 0042d2d1
    TEST EAX,EAX                        ; 0042d2d3
    JNZ 0x0042d257                      ; 0042d2d5
        ;   XREF to: 0042d257 (CONDITIONAL_JUMP)  ; LAB_0042d257
    PUSH EDI                            ; 0042d2d7
    PUSH EBP                            ; 0042d2d8
    PUSH 0x57a625                       ; 0042d2d9 | = "Unable to allocate %u bytes for bitma..."
    LEA EAX,[ESP + 0xc]                 ; 0042d2de
    PUSH EAX                            ; 0042d2e2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042d2e3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x57a657                    ; 0042d2e8 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 0042d2ed
    MOV EAX,ESP                         ; 0042d2f0
    MOV ECX,0xd2                        ; 0042d2f2
    PUSH EAX                            ; 0042d2f7
    MOV dword ptr [0x01cc4800],EDX      ; 0042d2f8 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042d2fe | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042d304
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042d309
    JMP 0x0042d257                      ; 0042d30c
        ;   XREF to: 0042d257 (UNCONDITIONAL_JUMP)  ; LAB_0042d257
    PUSH EDI                            ; 0042d311
        ;   Label: LAB_0042d311
    PUSH 0x57a6ab                       ; 0042d312 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042d317
    PUSH EAX                            ; 0042d31b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0042d31c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0042d321
    PUSH EBX                            ; 0042d324
    MOV EDI,0xe3                        ; 0042d325
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0042d32a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0042d32f
    MOV EAX,ESP                         ; 0042d332
    MOV ECX,0x57a6cc                    ; 0042d334 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0042d339
    MOV dword ptr [0x01cc4804],EDI      ; 0042d33a | INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 0042d340 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 0042d346
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042d34b
    PUSH EBX                            ; 0042d34e
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0042d34f
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0042d354
    MOV EAX,ESI                         ; 0042d357
    ADD ESP,0x50                        ; 0042d359
    POP EBP                             ; 0042d35c
    POP EDI                             ; 0042d35d
    POP ESI                             ; 0042d35e
    POP EBX                             ; 0042d35f
    RET                                 ; 0042d360

