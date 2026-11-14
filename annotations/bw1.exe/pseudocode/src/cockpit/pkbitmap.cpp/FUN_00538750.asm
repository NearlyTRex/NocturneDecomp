; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00538750(CPackedBitmapSet *param_1,CPackedBitmap *param_2,undefined4 param_3,int param_4,int param_5,int param_6,char *param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538750
        ;   Label: cockpit_pkbitmap.cpp_FUN_00538750
    PUSH ESI                            ; 00538751
    PUSH EDI                            ; 00538752
    PUSH EBP                            ; 00538753
    SUB ESP,0x168                       ; 00538754
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0053875a
    MOV EBP,dword ptr [ESP + 0x190]     ; 00538761
    PUSH 0x5ed0d9                       ; 00538768
    MOV EDX,dword ptr [ESP + 0x184]     ; 0053876d
    PUSH EDX                            ; 00538774
    PUSH 0x5ed0dc                       ; 00538775
    CALL engine_dosio.cpp_FUN_00479180  ; 0053877a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0053877f
    MOV EBX,EAX                         ; 00538782
    TEST EAX,EAX                        ; 00538784
    JZ 0x005387fc                       ; 00538786
        ;   XREF to: 005387fc (CONDITIONAL_JUMP)  ; LAB_005387fc
    PUSH EBP                            ; 0053878c
        ;   Label: LAB_0053878c
    MOV EDX,dword ptr [ESP + 0x190]     ; 0053878d
    PUSH EDX                            ; 00538794
    MOV ECX,dword ptr [ESP + 0x190]     ; 00538795
    PUSH ECX                            ; 0053879c
    PUSH EBX                            ; 0053879d
    PUSH EDI                            ; 0053879e
    CALL cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0 ; 0053879f
        ;   XREF to: 005385d0 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0(CPackedBitmapSet * bitmap_set_ptr, _FILE * file_handle, int frames_per_bitmap, int skip_data_load, ...)
    ADD ESP,0x14                        ; 005387a4
    PUSH EBX                            ; 005387a7
    MOV ESI,EAX                         ; 005387a8
    MOV dword ptr [ESP + 0x168],EAX     ; 005387aa
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 005387b1
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 005387b6
    MOV EAX,dword ptr [EDI]             ; 005387b9
    XOR EBX,EBX                         ; 005387bb
    TEST EAX,EAX                        ; 005387bd
    JLE 0x005387e0                      ; 005387bf
        ;   XREF to: 005387e0 (CONDITIONAL_JUMP)  ; LAB_005387e0
    MOV EDX,dword ptr [ESP + 0x180]     ; 005387c1
        ;   Label: LAB_005387c1
    PUSH EDX                            ; 005387c8
    PUSH ESI                            ; 005387c9
    INC EBX                             ; 005387ca
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0 ; 005387cb
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005387d0
    MOV ECX,dword ptr [EDI]             ; 005387d3
    ADD ESI,0x24                        ; 005387d5
    CMP EBX,ECX                         ; 005387d8
    JL 0x005387c1                       ; 005387da
        ;   XREF to: 005387c1 (CONDITIONAL_JUMP)  ; LAB_005387c1
    LEA EAX,[EAX]                       ; 005387dc
    CMP dword ptr [ESP + 0x184],0x0     ; 005387e0
        ;   Label: LAB_005387e0
    JNZ 0x00538843                      ; 005387e8
        ;   XREF to: 00538843 (CONDITIONAL_JUMP)  ; LAB_00538843
    MOV EAX,dword ptr [ESP + 0x164]     ; 005387ea
        ;   Label: LAB_005387ea
    ADD ESP,0x168                       ; 005387f1
    POP EBP                             ; 005387f7
    POP EDI                             ; 005387f8
    POP ESI                             ; 005387f9
    POP EBX                             ; 005387fa
    RET                                 ; 005387fb
    MOV ECX,dword ptr [ESP + 0x180]     ; 005387fc
        ;   Label: LAB_005387fc
    PUSH ECX                            ; 00538803
    PUSH 0x5ed0e0                       ; 00538804
    LEA EAX,[ESP + 0x108]               ; 00538809
    PUSH EAX                            ; 00538810
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538811
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5b6                       ; 00538816
    ADD ESP,0xc                         ; 0053881b
    MOV [0x01d1d404],EAX                ; 0053881e | DAT_01d1d404
    LEA EAX,[ESP + 0x100]               ; 00538823
    MOV ESI,0x5ed0fb                    ; 0053882a
    PUSH EAX                            ; 0053882f
    MOV dword ptr [0x01d1d400],ESI      ; 00538830 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00538836
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053883b
    JMP 0x0053878c                      ; 0053883e
        ;   XREF to: 0053878c (UNCONDITIONAL_JUMP)  ; LAB_0053878c
    MOV EAX,ESP                         ; 00538843
        ;   Label: LAB_00538843
    PUSH EAX                            ; 00538845
    MOV ESI,dword ptr [ESP + 0x184]     ; 00538846
    PUSH ESI                            ; 0053884d
    XOR EBX,EBX                         ; 0053884e
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400 ; 00538850
        ;   XREF to: 00437400 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400(char * filename, uchar * output_palette)
    MOV EAX,dword ptr [EDI]             ; 00538855
    ADD ESP,0x8                         ; 00538857
    TEST EAX,EAX                        ; 0053885a
    JLE 0x005387ea                      ; 0053885c
        ;   XREF to: 005387ea (CONDITIONAL_JUMP)  ; LAB_005387ea
    MOV ESI,dword ptr [ESP + 0x164]     ; 0053885e
    TEST EBP,EBP                        ; 00538865
        ;   Label: LAB_00538865
    JL 0x0053887d                       ; 00538867
        ;   XREF to: 0053887d (CONDITIONAL_JUMP)  ; LAB_0053887d
    CMP EBX,EBP                         ; 00538869
    JZ 0x0053887d                       ; 0053886b
        ;   XREF to: 0053887d (CONDITIONAL_JUMP)  ; LAB_0053887d
    INC EBX                             ; 0053886d
    MOV EDX,dword ptr [EDI]             ; 0053886e
    ADD ESI,0x24                        ; 00538870
    CMP EBX,EDX                         ; 00538873
    JGE 0x005387ea                      ; 00538875
        ;   XREF to: 005387ea (CONDITIONAL_JUMP)  ; LAB_005387ea
    JMP 0x00538865                      ; 0053887b
        ;   XREF to: 00538865 (UNCONDITIONAL_JUMP)  ; LAB_00538865
    MOV EAX,ESP                         ; 0053887d
        ;   Label: LAB_0053887d
    PUSH EAX                            ; 0053887f
    PUSH ESI                            ; 00538880
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050 ; 00538881
        ;   XREF to: 00538050 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 00538886
    INC EBX                             ; 00538889
    MOV EDX,dword ptr [EDI]             ; 0053888a
    ADD ESI,0x24                        ; 0053888c
    CMP EBX,EDX                         ; 0053888f
    JGE 0x005387ea                      ; 00538891
        ;   XREF to: 005387ea (CONDITIONAL_JUMP)  ; LAB_005387ea
    JMP 0x00538865                      ; 00538897
        ;   XREF to: 00538865 (UNCONDITIONAL_JUMP)  ; LAB_00538865

