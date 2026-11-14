; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00510430(CPackedBitmapSet *param_1,CPackedBitmap *param_2,undefined4 param_3,int param_4,int param_5,int param_6,char *param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510430
        ;   Label: cockpit_pkbitmap.cpp_FUN_00510430
    PUSH ESI                            ; 00510431
    PUSH EDI                            ; 00510432
    PUSH EBP                            ; 00510433
    SUB ESP,0x168                       ; 00510434
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0051043a
    MOV EBP,dword ptr [ESP + 0x190]     ; 00510441
    PUSH 0x5cbf41                       ; 00510448
    MOV EDX,dword ptr [ESP + 0x184]     ; 0051044d
    PUSH EDX                            ; 00510454
    PUSH 0x5cbf44                       ; 00510455
    CALL engine_dosio.cpp_FUN_004659c0  ; 0051045a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051045f
    MOV EBX,EAX                         ; 00510462
    TEST EAX,EAX                        ; 00510464
    JZ 0x005104dc                       ; 00510466
        ;   XREF to: 005104dc (CONDITIONAL_JUMP)  ; LAB_005104dc
    PUSH EBP                            ; 0051046c
        ;   Label: LAB_0051046c
    MOV EDX,dword ptr [ESP + 0x190]     ; 0051046d
    PUSH EDX                            ; 00510474
    MOV ECX,dword ptr [ESP + 0x190]     ; 00510475
    PUSH ECX                            ; 0051047c
    PUSH EBX                            ; 0051047d
    PUSH EDI                            ; 0051047e
    CALL cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0 ; 0051047f
        ;   XREF to: 005102b0 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0(CPackedBitmapSet * bitmap_set_ptr, _FILE * file_handle, int frames_per_bitmap, int skip_data_load, ...)
    ADD ESP,0x14                        ; 00510484
    PUSH EBX                            ; 00510487
    MOV ESI,EAX                         ; 00510488
    MOV dword ptr [ESP + 0x168],EAX     ; 0051048a
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00510491
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00510496
    MOV EAX,dword ptr [EDI]             ; 00510499
    XOR EBX,EBX                         ; 0051049b
    TEST EAX,EAX                        ; 0051049d
    JLE 0x005104c0                      ; 0051049f
        ;   XREF to: 005104c0 (CONDITIONAL_JUMP)  ; LAB_005104c0
    MOV EDX,dword ptr [ESP + 0x180]     ; 005104a1
        ;   Label: LAB_005104a1
    PUSH EDX                            ; 005104a8
    PUSH ESI                            ; 005104a9
    INC EBX                             ; 005104aa
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0 ; 005104ab
        ;   XREF to: 0050f2a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005104b0
    MOV ECX,dword ptr [EDI]             ; 005104b3
    ADD ESI,0x24                        ; 005104b5
    CMP EBX,ECX                         ; 005104b8
    JL 0x005104a1                       ; 005104ba
        ;   XREF to: 005104a1 (CONDITIONAL_JUMP)  ; LAB_005104a1
    LEA EAX,[EAX]                       ; 005104bc
    CMP dword ptr [ESP + 0x184],0x0     ; 005104c0
        ;   Label: LAB_005104c0
    JNZ 0x00510523                      ; 005104c8
        ;   XREF to: 00510523 (CONDITIONAL_JUMP)  ; LAB_00510523
    MOV EAX,dword ptr [ESP + 0x164]     ; 005104ca
        ;   Label: LAB_005104ca
    ADD ESP,0x168                       ; 005104d1
    POP EBP                             ; 005104d7
    POP EDI                             ; 005104d8
    POP ESI                             ; 005104d9
    POP EBX                             ; 005104da
    RET                                 ; 005104db
    MOV ECX,dword ptr [ESP + 0x180]     ; 005104dc
        ;   Label: LAB_005104dc
    PUSH ECX                            ; 005104e3
    PUSH 0x5cbf48                       ; 005104e4
    LEA EAX,[ESP + 0x108]               ; 005104e9
    PUSH EAX                            ; 005104f0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005104f1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5b6                       ; 005104f6
    ADD ESP,0xc                         ; 005104fb
    MOV [0x01d71de4],EAX                ; 005104fe | DAT_01d71de4
    LEA EAX,[ESP + 0x100]               ; 00510503
    MOV ESI,0x5cbf63                    ; 0051050a
    PUSH EAX                            ; 0051050f
    MOV dword ptr [0x01d71de0],ESI      ; 00510510 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00510516
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051051b
    JMP 0x0051046c                      ; 0051051e
        ;   XREF to: 0051046c (UNCONDITIONAL_JUMP)  ; LAB_0051046c
    MOV EAX,ESP                         ; 00510523
        ;   Label: LAB_00510523
    PUSH EAX                            ; 00510525
    MOV ESI,dword ptr [ESP + 0x184]     ; 00510526
    PUSH ESI                            ; 0051052d
    XOR EBX,EBX                         ; 0051052e
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010 ; 00510530
        ;   XREF to: 00435010 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010(char * filename, uchar * output_palette)
    MOV EAX,dword ptr [EDI]             ; 00510535
    ADD ESP,0x8                         ; 00510537
    TEST EAX,EAX                        ; 0051053a
    JLE 0x005104ca                      ; 0051053c
        ;   XREF to: 005104ca (CONDITIONAL_JUMP)  ; LAB_005104ca
    MOV ESI,dword ptr [ESP + 0x164]     ; 0051053e
    TEST EBP,EBP                        ; 00510545
        ;   Label: LAB_00510545
    JL 0x0051055d                       ; 00510547
        ;   XREF to: 0051055d (CONDITIONAL_JUMP)  ; LAB_0051055d
    CMP EBX,EBP                         ; 00510549
    JZ 0x0051055d                       ; 0051054b
        ;   XREF to: 0051055d (CONDITIONAL_JUMP)  ; LAB_0051055d
    INC EBX                             ; 0051054d
    MOV EDX,dword ptr [EDI]             ; 0051054e
    ADD ESI,0x24                        ; 00510550
    CMP EBX,EDX                         ; 00510553
    JGE 0x005104ca                      ; 00510555
        ;   XREF to: 005104ca (CONDITIONAL_JUMP)  ; LAB_005104ca
    JMP 0x00510545                      ; 0051055b
        ;   XREF to: 00510545 (UNCONDITIONAL_JUMP)  ; LAB_00510545
    MOV EAX,ESP                         ; 0051055d
        ;   Label: LAB_0051055d
    PUSH EAX                            ; 0051055f
    PUSH ESI                            ; 00510560
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30 ; 00510561
        ;   XREF to: 0050fd30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 00510566
    INC EBX                             ; 00510569
    MOV EDX,dword ptr [EDI]             ; 0051056a
    ADD ESI,0x24                        ; 0051056c
    CMP EBX,EDX                         ; 0051056f
    JGE 0x005104ca                      ; 00510571
        ;   XREF to: 005104ca (CONDITIONAL_JUMP)  ; LAB_005104ca
    JMP 0x00510545                      ; 00510577
        ;   XREF to: 00510545 (UNCONDITIONAL_JUMP)  ; LAB_00510545

