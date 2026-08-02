; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(CFilterFX *this_ptr,char *filename)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_process_FUN_00482010 at 0048212d
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_0057c06d
;   TerminatedCString s_movscrn_raw_0057c079
;   TerminatedCString s_s_txt_0057c085
;   TerminatedCString s_rt_0057c08c
;   TerminatedCString s_core_dfilter_cpp_0057c08f
;   TerminatedCString s_Can_t_open_movie_s_txt_0057c0a3
;   TerminatedCString s_d_0057c0bb
;   TerminatedCString s_s_mov_0057c0bf
;   TerminatedCString s_rb_0057c0c6
;   TerminatedCString s_core_dfilter_cpp_0057c0c9
;   TerminatedCString s_Can_t_open_movie_s_mov_0057c0dd
;   undefined4 DAT_005ad54c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60
;   core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c310
        ;   Label: core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310
    PUSH ESI                            ; 0044c311
    PUSH EBP                            ; 0044c312
    SUB ESP,0x100                       ; 0044c313
    MOV ESI,dword ptr [ESP + 0x110]     ; 0044c319
    MOV EBX,dword ptr [ESP + 0x114]     ; 0044c320
    PUSH ESI                            ; 0044c327
    CALL core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0 ; 0044c328
        ;   XREF to: 0044c2f0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 0044c32d
    TEST EBX,EBX                        ; 0044c330
    JZ 0x0044c431                       ; 0044c332
        ;   XREF to: 0044c431 (CONDITIONAL_JUMP)  ; LAB_0044c431
    PUSH EDI                            ; 0044c338
    PUSH EBX                            ; 0044c339
    PUSH 0x57c085                       ; 0044c33a | = "%s.txt"
    LEA EAX,[ESP + 0xc]                 ; 0044c33f
    PUSH EAX                            ; 0044c343
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0044c344
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0044c349
    PUSH 0x57c08c                       ; 0044c34c | = "rt"
    LEA EAX,[ESP + 0x8]                 ; 0044c351
    PUSH EAX                            ; 0044c355
    PUSH EBX                            ; 0044c356
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044c357
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c35c
    MOV EDI,EAX                         ; 0044c35f
    TEST EAX,EAX                        ; 0044c361
    JNZ 0x0044c389                      ; 0044c363
        ;   XREF to: 0044c389 (CONDITIONAL_JUMP)  ; LAB_0044c389
    PUSH EBX                            ; 0044c365
    MOV EDX,0x57c08f                    ; 0044c366 | = "..\\core\\dfilter.cpp"
    MOV ECX,0x15a                       ; 0044c36b
    PUSH 0x57c0a3                       ; 0044c370 | = "Can't open movie %s.txt"
    MOV dword ptr [0x01cc4800],EDX      ; 0044c375 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0044c37b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c381
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0044c386
    PUSH ESI                            ; 0044c389
        ;   Label: LAB_0044c389
    PUSH 0x57c0bb                       ; 0044c38a | = "%d\n"
    PUSH EDI                            ; 0044c38f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0044c390
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044c395
    PUSH EDI                            ; 0044c398
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044c399
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    MOV EAX,dword ptr [ESI]             ; 0044c39e
    ADD ESP,0x4                         ; 0044c3a0
    SHL EAX,0xd                         ; 0044c3a3
    PUSH EAX                            ; 0044c3a6
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044c3a7
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0044c3ac
    PUSH EBX                            ; 0044c3af
    PUSH 0x57c0bf                       ; 0044c3b0 | = "%s.mov"
    MOV dword ptr [ESI + 0x4],EAX       ; 0044c3b5
    LEA EAX,[ESP + 0xc]                 ; 0044c3b8
    PUSH EAX                            ; 0044c3bc
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0044c3bd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0044c3c2
    PUSH 0x57c0c6                       ; 0044c3c5 | = "rb"
    LEA EAX,[ESP + 0x8]                 ; 0044c3ca
    PUSH EAX                            ; 0044c3ce
    PUSH EBX                            ; 0044c3cf
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044c3d0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044c3d5
    MOV EDI,EAX                         ; 0044c3d8
    TEST EAX,EAX                        ; 0044c3da
    JZ 0x0044c45d                       ; 0044c3dc
        ;   XREF to: 0044c45d (CONDITIONAL_JUMP)  ; LAB_0044c45d
    PUSH EDI                            ; 0044c3e2
        ;   Label: LAB_0044c3e2
    MOV EDX,dword ptr [ESI]             ; 0044c3e3
    PUSH EDX                            ; 0044c3e5
    PUSH 0x2000                         ; 0044c3e6
    MOV ECX,dword ptr [ESI + 0x4]       ; 0044c3eb
    PUSH ECX                            ; 0044c3ee
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044c3ef
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044c3f4
    PUSH EDI                            ; 0044c3f7
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044c3f8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0044c3fd
    XOR ECX,ECX                         ; 0044c400
    POP EDI                             ; 0044c402
    MOV EAX,dword ptr [ESI]             ; 0044c403
        ;   Label: LAB_0044c403
    SHL EAX,0xd                         ; 0044c405
    CMP ECX,EAX                         ; 0044c408
    JGE 0x0044c485                      ; 0044c40a
        ;   XREF to: 0044c485 (CONDITIONAL_JUMP)  ; LAB_0044c485
    MOV EBX,dword ptr [ESI + 0x4]       ; 0044c40c
    XOR EDX,EDX                         ; 0044c40f
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 0044c411
    MOV EAX,EDX                         ; 0044c414
    SAR EDX,0x1f                        ; 0044c416
    SHL EDX,0x2                         ; 0044c419
    SBB EAX,EDX                         ; 0044c41c
    SAR EAX,0x2                         ; 0044c41e
    MOV EDX,EAX                         ; 0044c421
    SAR EDX,0x1f                        ; 0044c423
    SUB EAX,EDX                         ; 0044c426
    SAR EAX,0x1                         ; 0044c428
    INC ECX                             ; 0044c42a
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 0044c42b
    JMP 0x0044c403                      ; 0044c42f
        ;   XREF to: 0044c403 (UNCONDITIONAL_JUMP)  ; LAB_0044c403
    PUSH 0x57c06d                       ; 0044c431 | = "movscrn.raw"
        ;   Label: LAB_0044c431
    MOV EBX,dword ptr [0x005ad54c]      ; 0044c436 | DAT_005ad54c
    PUSH EBX                            ; 0044c43c
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60 ; 0044c43d
        ;   XREF to: 0044be60 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60(CFilterCache * this_ptr, char * filter_name)
    ADD ESP,0x8                         ; 0044c442
    PUSH 0x57c079                       ; 0044c445 | = "movscrn.raw"
    PUSH EAX                            ; 0044c44a
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90 ; 0044c44b
        ;   XREF to: 0044bf90 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0044c450
    ADD ESP,0x100                       ; 0044c453
    POP EBP                             ; 0044c459
    POP ESI                             ; 0044c45a
    POP EBX                             ; 0044c45b
    RET                                 ; 0044c45c
    PUSH EBX                            ; 0044c45d
        ;   Label: LAB_0044c45d
    MOV EBP,0x57c0c9                    ; 0044c45e | = "..\\core\\dfilter.cpp"
    MOV EAX,0x166                       ; 0044c463
    PUSH 0x57c0dd                       ; 0044c468 | = "Can't open movie %s.mov"
    MOV dword ptr [0x01cc4800],EBP      ; 0044c46d | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044c473 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044c478
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0044c47d
    JMP 0x0044c3e2                      ; 0044c480
        ;   XREF to: 0044c3e2 (UNCONDITIONAL_JUMP)  ; LAB_0044c3e2
    MOV dword ptr [ESI + 0x8],0x0       ; 0044c485
        ;   Label: LAB_0044c485
    ADD ESP,0x100                       ; 0044c48c
    POP EBP                             ; 0044c492
    POP ESI                             ; 0044c493
    POP EBX                             ; 0044c494
    RET                                 ; 0044c495

