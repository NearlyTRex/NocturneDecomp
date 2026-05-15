; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   font_path
; Local Variables:
; char[256]        Stack[-0x22c]:256  local_22c
; char[256]        Stack[-0x12c]:256  local_12c
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_rt_0062a582
;   TerminatedCString s_art_0062a585
;   TerminatedCString s_s_0062a589
;   TerminatedCString s_d_d_0062a58d
;   TerminatedCString s_d_d_0062a594
;   TerminatedCString s_d_0062a59b
;   TerminatedCString s_d_0062a59f
;   TerminatedCString s_d_d_0062a5a3
;   TerminatedCString s_engine_font_cpp_0062a5aa
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
;   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd2c0
        ;   Label: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
    PUSH ESI                            ; 004cd2c1
    PUSH EBP                            ; 004cd2c2
    SUB ESP,0x220                       ; 004cd2c3
    MOV ESI,dword ptr [ESP + 0x230]     ; 004cd2c9
    PUSH 0x62a582                       ; 004cd2d0 | = "rt"
    MOV EDX,dword ptr [ESP + 0x238]     ; 004cd2d5
    PUSH EDX                            ; 004cd2dc
    PUSH 0x62a585                       ; 004cd2dd | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 004cd2e2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004cd2e7
    ADD ESP,0xc                         ; 004cd2e9
    TEST EAX,EAX                        ; 004cd2ec
    JNZ 0x004cd2fa                      ; 004cd2ee
        ;   XREF to: 004cd2fa (CONDITIONAL_JUMP)  ; LAB_004cd2fa
    ADD ESP,0x220                       ; 004cd2f0
    POP EBP                             ; 004cd2f6
    POP ESI                             ; 004cd2f7
    POP EBX                             ; 004cd2f8
    RET                                 ; 004cd2f9
    PUSH EDI                            ; 004cd2fa
        ;   Label: LAB_004cd2fa
    PUSH EAX                            ; 004cd2fb
    PUSH 0xff                           ; 004cd2fc
    LEA EAX,[ESP + 0x10c]               ; 004cd301
    PUSH EAX                            ; 004cd308
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd309
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd30e
    LEA EAX,[ESP + 0x4]                 ; 004cd311
    PUSH EAX                            ; 004cd315
    PUSH 0x62a589                       ; 004cd316 | = "%s\n"
    PUSH EBX                            ; 004cd31b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd31c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004cd321
    PUSH EBX                            ; 004cd324
    PUSH 0xff                           ; 004cd325
    LEA EAX,[ESP + 0x10c]               ; 004cd32a
    PUSH EAX                            ; 004cd331
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd332
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd337
    LEA EAX,[ESP + 0x208]               ; 004cd33a
    PUSH EAX                            ; 004cd341
    LEA EAX,[ESP + 0x208]               ; 004cd342
    PUSH EAX                            ; 004cd349
    PUSH 0x62a58d                       ; 004cd34a | = "%d,%d\n"
    PUSH EBX                            ; 004cd34f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd350
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004cd355
    PUSH EBX                            ; 004cd358
    PUSH 0xff                           ; 004cd359
    LEA EAX,[ESP + 0x10c]               ; 004cd35e
    PUSH EAX                            ; 004cd365
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd366
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd36b
    LEA EAX,[ESP + 0x210]               ; 004cd36e
    PUSH EAX                            ; 004cd375
    LEA EAX,[ESP + 0x210]               ; 004cd376
    PUSH EAX                            ; 004cd37d
    PUSH 0x62a594                       ; 004cd37e | = "%d,%d\n"
    PUSH EBX                            ; 004cd383
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd384
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004cd389
    PUSH EBX                            ; 004cd38c
    PUSH 0xff                           ; 004cd38d
    LEA EAX,[ESP + 0x10c]               ; 004cd392
    PUSH EAX                            ; 004cd399
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd39a
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd39f
    LEA EAX,[ESP + 0x214]               ; 004cd3a2
    PUSH EAX                            ; 004cd3a9
    PUSH 0x62a59b                       ; 004cd3aa | = "%d\n"
    PUSH EBX                            ; 004cd3af
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd3b0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004cd3b5
    PUSH EBX                            ; 004cd3b8
    PUSH 0xff                           ; 004cd3b9
    LEA EAX,[ESP + 0x10c]               ; 004cd3be
    PUSH EAX                            ; 004cd3c5
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd3c6
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd3cb
    LEA EAX,[ESP + 0x218]               ; 004cd3ce
    PUSH EAX                            ; 004cd3d5
    PUSH 0x62a59f                       ; 004cd3d6 | = "%d\n"
    PUSH EBX                            ; 004cd3db
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd3dc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004cd3e1
    PUSH EBX                            ; 004cd3e4
    PUSH 0xff                           ; 004cd3e5
    LEA EAX,[ESP + 0x10c]               ; 004cd3ea
    PUSH EAX                            ; 004cd3f1
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004cd3f2
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004cd3f7
    LEA EAX,[ESP + 0x220]               ; 004cd3fa
    PUSH EAX                            ; 004cd401
    LEA EAX,[ESP + 0x220]               ; 004cd402
    PUSH EAX                            ; 004cd409
    PUSH 0x62a5a3                       ; 004cd40a | = "%d,%d\n"
    PUSH EBX                            ; 004cd40f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004cd410
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004cd415
    PUSH 0x159                          ; 004cd418
    PUSH 0x62a5aa                       ; 004cd41d | = "..\\engine\\font.cpp"
    PUSH EBX                            ; 004cd422
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004cd423
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004cd428
    CMP dword ptr [ESP + 0x20c],0x20    ; 004cd42b
    JZ 0x004cd49d                       ; 004cd433
        ;   XREF to: 004cd49d (CONDITIONAL_JUMP)  ; LAB_004cd49d
    MOV EDX,dword ptr [ESP + 0x214]     ; 004cd435
        ;   Label: LAB_004cd435
    PUSH EDX                            ; 004cd43c
    MOV ECX,dword ptr [ESP + 0x214]     ; 004cd43d
    PUSH ECX                            ; 004cd444
    MOV EBX,dword ptr [ESP + 0x214]     ; 004cd445
    PUSH EBX                            ; 004cd44c
    MOV EDI,dword ptr [ESP + 0x214]     ; 004cd44d
    PUSH EDI                            ; 004cd454
    MOV EBP,dword ptr [ESP + 0x214]     ; 004cd455
    PUSH EBP                            ; 004cd45c
    LEA EAX,[ESP + 0x18]                ; 004cd45d
    PUSH EAX                            ; 004cd461
    PUSH ESI                            ; 004cd462
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 ; 004cd463
        ;   XREF to: 004cd280 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004cd468
    MOV EAX,dword ptr [ESP + 0x218]     ; 004cd46b
        ;   Label: LAB_004cd46b
    MOV dword ptr [ESI + 0x25e8],EAX    ; 004cd472
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004cd478
    MOV EBX,dword ptr [ESP + 0x220]     ; 004cd47f
    MOV dword ptr [ESI + 0x317c],EAX    ; 004cd486
    MOV dword ptr [ESI + 0x3180],EBX    ; 004cd48c
    POP EDI                             ; 004cd492
    ADD ESP,0x220                       ; 004cd493
    POP EBP                             ; 004cd499
    POP ESI                             ; 004cd49a
    POP EBX                             ; 004cd49b
    RET                                 ; 004cd49c
    CMP dword ptr [ESP + 0x210],0xff    ; 004cd49d
        ;   Label: LAB_004cd49d
    JNZ 0x004cd435                      ; 004cd4a8
        ;   XREF to: 004cd435 (CONDITIONAL_JUMP)  ; LAB_004cd435
    MOV EDI,dword ptr [ESP + 0x214]     ; 004cd4aa
    PUSH EDI                            ; 004cd4b1
    MOV EBP,dword ptr [ESP + 0x20c]     ; 004cd4b2
    PUSH EBP                            ; 004cd4b9
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004cd4ba
    PUSH EAX                            ; 004cd4c1
    LEA EAX,[ESP + 0x10]                ; 004cd4c2
    PUSH EAX                            ; 004cd4c6
    PUSH ESI                            ; 004cd4c7
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 004cd4c8
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004cd4cd
    JMP 0x004cd46b                      ; 004cd4d0
        ;   XREF to: 004cd46b (UNCONDITIONAL_JUMP)  ; LAB_004cd46b

