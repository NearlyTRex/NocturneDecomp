; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)
;
; Parameters:
; CProceduralTexture * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x134]:4  local_134
; char[256]        Stack[-0x130]:256  local_130
; CProceduralTexture * Stack[-0x30]:4  local_30
; CProceduralTexture * Stack[-0x2c]:4  local_2c
; uchar *          Stack[-0x28]:4  local_28
; uchar *          Stack[-0x24]:4  local_24
; CProceduralTexture * Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; CProceduralTexture * Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_procedur.cpp_CProceduralTexture_showMenu_FUN_00554880 at 005548e4
;
; Referenced Globals:
;   TerminatedCString s_water_d_raw_00640938
;   TerminatedCString s_wb_00640944
;   TerminatedCString s_art_00640947
;   TerminatedCString s_core_procedur_cpp_0064094b
;   TerminatedCString s_Can_t_write_water_frame_00640960
;   TerminatedCString s_core_procedur_cpp_00640978
;   TerminatedCString s_water_d_act_0064098d
;   TerminatedCString s_wb_00640999
;   TerminatedCString s_art_0064099c
;   TerminatedCString s_core_procedur_cpp_006409a0
;   TerminatedCString s_Can_t_write_water_frame_006409b5
;   TerminatedCString s_core_procedur_cpp_006409cd
;   float FLOAT_006409e4 = 0.00003051851
;   double DOUBLE_006409e8 = 256
;   double DOUBLE_006409f0 = 128
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_procedur.cpp_CProceduralTexture_applyRipple_FUN_00554670
;   core_procedur.cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005542b0
        ;   Label: core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0
    PUSH ESI                            ; 005542b1
    PUSH EDI                            ; 005542b2
    PUSH EBP                            ; 005542b3
    SUB ESP,0x120                       ; 005542b4
    MOV EBX,dword ptr [ESP + 0x134]     ; 005542ba
    LEA ESI,[EBX + 0x200]               ; 005542c1
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005542c7
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005542c7
    MOV dword ptr [ESP + 0x11c],EAX     ; 005542cc
    FILD dword ptr [ESP + 0x11c]        ; 005542d3
    FMUL float ptr [0x006409e4]         ; 005542da | FLOAT_006409e4
    FMUL double ptr [0x006409e8]        ; 005542e0 | DOUBLE_006409e8
    FSTP float ptr [EBX + 0x10008]      ; 005542e6
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005542ec
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0x11c],EAX     ; 005542f1
    FILD dword ptr [ESP + 0x11c]        ; 005542f8
    FMUL float ptr [0x006409e4]         ; 005542ff | FLOAT_006409e4
    FMUL double ptr [0x006409e8]        ; 00554305 | DOUBLE_006409e8
    FSTP float ptr [EBX + 0x10208]      ; 0055430b
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00554311
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0x11c],EAX     ; 00554316
    FILD dword ptr [ESP + 0x11c]        ; 0055431d
    FMUL float ptr [0x006409e4]         ; 00554324 | FLOAT_006409e4
    FMUL double ptr [0x006409f0]        ; 0055432a | DOUBLE_006409f0
    ADD EBX,0x4                         ; 00554330
    FSTP float ptr [EBX + 0x10404]      ; 00554333
    CMP EBX,ESI                         ; 00554339
    JNZ 0x005542c7                      ; 0055433b
        ;   XREF to: 005542c7 (CONDITIONAL_JUMP)  ; LAB_005542c7
    MOV EAX,dword ptr [ESP + 0x134]     ; 0055433d
    ADD EAX,0x8                         ; 00554344
    MOV dword ptr [ESP + 0x108],EAX     ; 00554347
    MOV EAX,dword ptr [ESP + 0x134]     ; 0055434e
    ADD EAX,0x10000                     ; 00554355
    MOV dword ptr [ESP + 0x110],EAX     ; 0055435a
    MOV EAX,dword ptr [ESP + 0x134]     ; 00554361
    ADD EAX,0x200                       ; 00554368
    MOV dword ptr [ESP + 0x10c],EAX     ; 0055436d
    MOV EAX,dword ptr [ESP + 0x134]     ; 00554374
    XOR EDX,EDX                         ; 0055437b
    ADD EAX,0x100                       ; 0055437d
    MOV dword ptr [ESP + 0x114],EDX     ; 00554382
    MOV dword ptr [ESP + 0x104],EAX     ; 00554389
    MOV dword ptr [ESP + 0x100],EAX     ; 00554390
    PUSH 0x10000                        ; 00554397
        ;   Label: LAB_00554397
    PUSH 0x0                            ; 0055439c
    MOV ECX,dword ptr [ESP + 0x110]     ; 0055439e
    PUSH ECX                            ; 005543a5
    CALL crt_memory.c_memset_FUN_005fde40 ; 005543a6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005543ab
    MOV EBX,dword ptr [ESP + 0x134]     ; 005543ae
    MOV ESI,dword ptr [ESP + 0x134]     ; 005543b5
    MOV EBP,dword ptr [ESP + 0x10c]     ; 005543bc
    MOV EAX,dword ptr [ESP + 0x114]     ; 005543c3
        ;   Label: LAB_005543c3
    MOV dword ptr [ESP + 0x11c],EAX     ; 005543ca
    FILD dword ptr [ESP + 0x11c]        ; 005543d1
    SUB ESP,0x4                         ; 005543d8
    FSTP float ptr [ESP]                ; 005543db
    PUSH dword ptr [EBX + 0x10408]      ; 005543de
    PUSH ESI                            ; 005543e4
    CALL core_procedur.cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620 ; 005543e5
        ;   XREF to: 00554620 (UNCONDITIONAL_CALL)  ; float core_procedur.cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620(CProceduralTexture * this_ptr, float wave_radius, float frame_index)
    MOV dword ptr [ESP + 0x128],EAX     ; 005543ea
    FLD float ptr [ESP + 0x128]         ; 005543f1
    ADD ESP,0xc                         ; 005543f8
    SUB ESP,0x4                         ; 005543fb
    FSTP float ptr [ESP]                ; 005543fe
    PUSH dword ptr [EBX + 0x10208]      ; 00554401
    PUSH dword ptr [EBX + 0x10008]      ; 00554407
    PUSH ESI                            ; 0055440d
    ADD EBX,0x4                         ; 0055440e
    CALL core_procedur.cpp_CProceduralTexture_applyRipple_FUN_00554670 ; 00554411
        ;   XREF to: 00554670 (UNCONDITIONAL_CALL)  ; void core_procedur.cpp_CProceduralTexture_applyRipple_FUN_00554670(CProceduralTexture * this_ptr, float wave_x, float wave_y, float wave_offset)
    ADD ESP,0x10                        ; 00554416
    CMP EBX,EBP                         ; 00554419
    JNZ 0x005543c3                      ; 0055441b
        ;   XREF to: 005543c3 (CONDITIONAL_JUMP)  ; LAB_005543c3
    MOV EBP,0xff                        ; 0055441d
    MOV EDI,dword ptr [ESP + 0x100]     ; 00554422
    MOV EDX,ESI                         ; 00554429
        ;   Label: LAB_00554429
    MOV EBX,EDI                         ; 0055442b
    MOV ECX,ESI                         ; 0055442d
    XOR EAX,EAX                         ; 0055442f
        ;   Label: LAB_0055442f
    MOV AL,byte ptr [ECX + 0x8]         ; 00554431
    ADD EAX,0x10                        ; 00554434
    CMP EAX,0xff                        ; 00554437
    JBE 0x00554440                      ; 0055443c
        ;   XREF to: 00554440 (CONDITIONAL_JUMP)  ; LAB_00554440
    MOV EAX,EBP                         ; 0055443e
    INC EDX                             ; 00554440
        ;   Label: LAB_00554440
    INC ECX                             ; 00554441
    MOV byte ptr [EDX + 0x7],AL         ; 00554442
    CMP EDX,EBX                         ; 00554445
    JNZ 0x0055442f                      ; 00554447
        ;   XREF to: 0055442f (CONDITIONAL_JUMP)  ; LAB_0055442f
    MOV EAX,dword ptr [ESP + 0x110]     ; 00554449
    ADD ESI,0x100                       ; 00554450
    ADD EDI,0x100                       ; 00554456
    CMP ESI,EAX                         ; 0055445c
    JNZ 0x00554429                      ; 0055445e
        ;   XREF to: 00554429 (CONDITIONAL_JUMP)  ; LAB_00554429
    MOV EDX,dword ptr [ESP + 0x114]     ; 00554460
    PUSH EDX                            ; 00554467
    PUSH 0x640938                       ; 00554468 | = "water%d.raw"
    LEA EAX,[ESP + 0x8]                 ; 0055446d
    PUSH EAX                            ; 00554471
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00554472
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00554477
    PUSH 0x640944                       ; 0055447a | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 0055447f
    PUSH EAX                            ; 00554483
    PUSH 0x640947                       ; 00554484 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00554489
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0055448e
    MOV ESI,EAX                         ; 00554491
    TEST EAX,EAX                        ; 00554493
    JNZ 0x005544ba                      ; 00554495
        ;   XREF to: 005544ba (CONDITIONAL_JUMP)  ; LAB_005544ba
    MOV ECX,0x64094b                    ; 00554497 | = "..\\core\\procedur.cpp"
    MOV EBX,0x64                        ; 0055449c
    PUSH 0x640960                       ; 005544a1 | = "Can't write water frame"
    MOV dword ptr [0x02f0ca48],ECX      ; 005544a6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005544ac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005544b2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005544b7
    PUSH ESI                            ; 005544ba
        ;   Label: LAB_005544ba
    PUSH 0x100                          ; 005544bb
    PUSH 0x100                          ; 005544c0
    MOV EDI,dword ptr [ESP + 0x114]     ; 005544c5
    PUSH EDI                            ; 005544cc
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 005544cd
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005544d2
    PUSH 0x66                           ; 005544d5
    PUSH 0x640978                       ; 005544d7 | = "..\\core\\procedur.cpp"
    PUSH ESI                            ; 005544dc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005544dd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005544e2
    MOV EBP,dword ptr [ESP + 0x114]     ; 005544e5
    PUSH EBP                            ; 005544ec
    PUSH 0x64098d                       ; 005544ed | = "water%d.act"
    LEA EAX,[ESP + 0x8]                 ; 005544f2
    PUSH EAX                            ; 005544f6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005544f7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005544fc
    PUSH 0x640999                       ; 005544ff | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 00554504
    PUSH EAX                            ; 00554508
    PUSH 0x64099c                       ; 00554509 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0055450e
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00554513
    MOV ESI,EAX                         ; 00554516
    TEST EAX,EAX                        ; 00554518
    JZ 0x005545ea                       ; 0055451a
        ;   XREF to: 005545ea (CONDITIONAL_JUMP)  ; LAB_005545ea
    XOR EBX,EBX                         ; 00554520
        ;   Label: LAB_00554520
    PUSH ESI                            ; 00554522
        ;   Label: LAB_00554522
    PUSH EBX                            ; 00554523
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00554524
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 00554529
    PUSH ESI                            ; 0055452c
    PUSH EBX                            ; 0055452d
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0055452e
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 00554533
    PUSH ESI                            ; 00554536
    PUSH EBX                            ; 00554537
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00554538
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    INC EBX                             ; 0055453d
    ADD ESP,0x8                         ; 0055453e
    CMP EBX,0x100                       ; 00554541
    JL 0x00554522                       ; 00554547
        ;   XREF to: 00554522 (CONDITIONAL_JUMP)  ; LAB_00554522
    PUSH 0x6f                           ; 00554549
    PUSH 0x6409cd                       ; 0055454b | = "..\\core\\procedur.cpp"
    PUSH ESI                            ; 00554550
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00554551
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00554556
    XOR EDI,EDI                         ; 00554559
    MOV EAX,dword ptr [ESP + 0x104]     ; 0055455b
    XOR EBP,EBP                         ; 00554562
    MOV dword ptr [ESP + 0x118],EAX     ; 00554564
    MOV EDX,dword ptr [ESP + 0x134]     ; 0055456b
        ;   Label: LAB_0055456b
    MOV EAX,EDI                         ; 00554572
    MOV ESI,dword ptr [ESP + 0x118]     ; 00554574
    SHL EAX,0x8                         ; 0055457b
    MOV ECX,dword ptr [EBP + 0x2cf6a9c] ; 0055457e | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EAX                         ; 00554584
    XOR EAX,EAX                         ; 00554586
        ;   Label: LAB_00554586
    MOV AL,byte ptr [EDX + 0x8]         ; 00554588
    MOV EBX,EAX                         ; 0055458b
    SHL EBX,0x8                         ; 0055458d
    ADD EBX,EAX                         ; 00554590
    SHL EAX,0x10                        ; 00554592
    ADD ECX,0x4                         ; 00554595
    ADD EAX,EBX                         ; 00554598
    INC EDX                             ; 0055459a
    MOV dword ptr [ECX + -0x4],EAX      ; 0055459b
    CMP EDX,ESI                         ; 0055459e
    JNZ 0x00554586                      ; 005545a0
        ;   XREF to: 00554586 (CONDITIONAL_JUMP)  ; LAB_00554586
    MOV ECX,dword ptr [ESP + 0x118]     ; 005545a2
    ADD EBP,0x4                         ; 005545a9
    ADD ECX,0x100                       ; 005545ac
    INC EDI                             ; 005545b2
    MOV dword ptr [ESP + 0x118],ECX     ; 005545b3
    CMP EDI,0x100                       ; 005545ba
    JL 0x0055456b                       ; 005545c0
        ;   XREF to: 0055456b (CONDITIONAL_JUMP)  ; LAB_0055456b
    MOV EBX,dword ptr [ESP + 0x114]     ; 005545c2
    INC EBX                             ; 005545c9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005545ca
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV dword ptr [ESP + 0x114],EBX     ; 005545cf
    CMP EBX,0x10                        ; 005545d6
    JL 0x00554397                       ; 005545d9
        ;   XREF to: 00554397 (CONDITIONAL_JUMP)  ; LAB_00554397
    ADD ESP,0x120                       ; 005545df
    POP EBP                             ; 005545e5
    POP EDI                             ; 005545e6
    POP ESI                             ; 005545e7
    POP EBX                             ; 005545e8
    RET                                 ; 005545e9
    MOV EAX,0x6409a0                    ; 005545ea | = "..\\core\\procedur.cpp"
        ;   Label: LAB_005545ea
    MOV EDX,0x69                        ; 005545ef
    PUSH 0x6409b5                       ; 005545f4 | = "Can't write water frame"
    MOV [0x02f0ca48],EAX                ; 005545f9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005545fe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00554604
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00554609
    JMP 0x00554520                      ; 0055460c
        ;   XREF to: 00554520 (UNCONDITIONAL_JUMP)  ; LAB_00554520

