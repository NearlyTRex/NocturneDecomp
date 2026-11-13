; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl cockpit_ckptutil_c_FUN_0043b2e0(char *filename,void *buffer,int size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_00537cb0 at 00537cc1
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30 at 00537c5e
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0df9
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_005d6620
;   TerminatedCString s_cockpit_ckptutil_c_005d6652
;   undefined4 DAT_005d6668
;   TerminatedCString s_Unable_to_open_bitmap_fi_005d666c
;   TerminatedCString s_cockpit_ckptutil_c_005d668d
;   TerminatedCString s_Unable_to_read_bitmap_fi_005d66a3
;   TerminatedCString s_cockpit_ckptutil_c_005d66c4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_CInStreamFile_read_FUN_005a0c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b2e0
        ;   Label: cockpit_ckptutil.c_FUN_0043b2e0
    PUSH ESI                            ; 0043b2e1
    PUSH EDI                            ; 0043b2e2
    PUSH EBP                            ; 0043b2e3
    SUB ESP,0x7c                        ; 0043b2e4
    MOV ESI,dword ptr [ESP + 0x90]      ; 0043b2e7
    MOV EBX,dword ptr [ESP + 0x94]      ; 0043b2ee
    MOV EDI,dword ptr [ESP + 0x98]      ; 0043b2f5
    TEST EBX,EBX                        ; 0043b2fc
    JZ 0x0043b396                       ; 0043b2fe
        ;   XREF to: 0043b396 (CONDITIONAL_JUMP)  ; LAB_0043b396
    LEA EAX,[ESP + 0x50]                ; 0043b304
        ;   Label: LAB_0043b304
    PUSH EAX                            ; 0043b308
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 0043b309
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0043b30e
    PUSH 0x1                            ; 0043b311
    PUSH ESI                            ; 0043b313
    PUSH 0x5d6668                       ; 0043b314 | DAT_005d6668
    LEA EAX,[ESP + 0x5c]                ; 0043b319
    PUSH EAX                            ; 0043b31d
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 0043b31e
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 0043b323
    TEST EAX,EAX                        ; 0043b326
    JNZ 0x0043b35d                      ; 0043b328
        ;   XREF to: 0043b35d (CONDITIONAL_JUMP)  ; LAB_0043b35d
    PUSH ESI                            ; 0043b32a
    PUSH 0x5d666c                       ; 0043b32b | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0043b330
    PUSH EAX                            ; 0043b334
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043b335
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x994                       ; 0043b33a
    ADD ESP,0xc                         ; 0043b33f
    MOV [0x01d1d404],EAX                ; 0043b342 | DAT_01d1d404
    MOV EAX,ESP                         ; 0043b347
    MOV EBP,0x5d668d                    ; 0043b349 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0043b34e
    MOV dword ptr [0x01d1d400],EBP      ; 0043b34f | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0043b355
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043b35a
    PUSH EDI                            ; 0043b35d
        ;   Label: LAB_0043b35d
    PUSH EBX                            ; 0043b35e
    LEA EAX,[ESP + 0x58]                ; 0043b35f
    PUSH EAX                            ; 0043b363
    CALL support_trstream.cpp_CInStreamFile_read_FUN_005a0c10 ; 0043b364
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 0043b369
    CMP EAX,EDI                         ; 0043b36c
    JNZ 0x0043b3e3                      ; 0043b36e
        ;   XREF to: 0043b3e3 (CONDITIONAL_JUMP)  ; LAB_0043b3e3
    LEA EAX,[ESP + 0x50]                ; 0043b370
        ;   Label: LAB_0043b370
    PUSH EAX                            ; 0043b374
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 0043b375
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0043b37a
    PUSH 0x0                            ; 0043b37d
    LEA EAX,[ESP + 0x54]                ; 0043b37f
    PUSH EAX                            ; 0043b383
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 0043b384
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043b389
    MOV EAX,EBX                         ; 0043b38c
    ADD ESP,0x7c                        ; 0043b38e
    POP EBP                             ; 0043b391
    POP EDI                             ; 0043b392
    POP ESI                             ; 0043b393
    POP EBX                             ; 0043b394
    RET                                 ; 0043b395
    PUSH EDI                            ; 0043b396
        ;   Label: LAB_0043b396
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0043b397
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0043b39c
    MOV EBX,EAX                         ; 0043b39f
    TEST EAX,EAX                        ; 0043b3a1
    JNZ 0x0043b304                      ; 0043b3a3
        ;   XREF to: 0043b304 (CONDITIONAL_JUMP)  ; LAB_0043b304
    PUSH ESI                            ; 0043b3a9
    PUSH EDI                            ; 0043b3aa
    PUSH 0x5d6620                       ; 0043b3ab | = "Unable to allocate %u bytes for bitma..."
    LEA EAX,[ESP + 0xc]                 ; 0043b3b0
    PUSH EAX                            ; 0043b3b4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043b3b5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5d6652                    ; 0043b3ba | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 0043b3bf
    MOV EAX,ESP                         ; 0043b3c2
    MOV ECX,0x98b                       ; 0043b3c4
    PUSH EAX                            ; 0043b3c9
    MOV dword ptr [0x01d1d400],EDX      ; 0043b3ca | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043b3d0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043b3d6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043b3db
    JMP 0x0043b304                      ; 0043b3de
        ;   XREF to: 0043b304 (UNCONDITIONAL_JUMP)  ; LAB_0043b304
    PUSH ESI                            ; 0043b3e3
        ;   Label: LAB_0043b3e3
    PUSH 0x5d66a3                       ; 0043b3e4 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0043b3e9
    PUSH EAX                            ; 0043b3ed
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043b3ee
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043b3f3
    LEA EAX,[ESP + 0x50]                ; 0043b3f6
    PUSH EAX                            ; 0043b3fa
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 0043b3fb
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    MOV EDX,0x5d66c4                    ; 0043b400 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x4                         ; 0043b405
    MOV EAX,ESP                         ; 0043b408
    MOV ECX,0x99c                       ; 0043b40a
    PUSH EAX                            ; 0043b40f
    MOV dword ptr [0x01d1d400],EDX      ; 0043b410 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043b416 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043b41c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043b421
    JMP 0x0043b370                      ; 0043b424
        ;   XREF to: 0043b370 (UNCONDITIONAL_JUMP)  ; LAB_0043b370

