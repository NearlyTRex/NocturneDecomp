; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_0051080e(CPackedBitmapSet *param_1,char *param_2,int param_3,char *param_4,int param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90
;   cockpit_pkbitmap.cpp_FUN_00510670
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90
;   cockpit_pkbmpset.cpp_FUN_005106a0
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0051080e
        ;   Label: cockpit_pkbmpset.cpp_FUN_0051080e
    PUSH EBX                            ; 00510810
    PUSH ESI                            ; 00510811
    PUSH EDI                            ; 00510812
    PUSH EBP                            ; 00510813
    SUB ESP,0x198                       ; 00510814
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 0051081a
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 00510821
    PUSH EBX                            ; 00510828
    CALL cockpit_pkbitmap.cpp_FUN_00510670 ; 00510829
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00510670()
    ADD ESP,0x4                         ; 0051082e
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 00510831
    PUSH EDX                            ; 00510838
    PUSH 0x5cbfe0                       ; 00510839
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0051083e
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00510843
    PUSH 0x5cbfe4                       ; 00510846
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 0051084b
    PUSH ECX                            ; 00510852
    PUSH 0x5cbfe7                       ; 00510853
    MOV ESI,EAX                         ; 00510858
    CALL engine_dosio.cpp_FUN_004659c0  ; 0051085a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051085f
    MOV dword ptr [ESP + 0x190],EAX     ; 00510862
    TEST EAX,EAX                        ; 00510869
    JZ 0x00510a31                       ; 0051086b
        ;   XREF to: 00510a31 (CONDITIONAL_JUMP)  ; LAB_00510a31
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00510871
        ;   Label: LAB_00510871
    IMUL EAX,EBP                        ; 00510878
    MOV EDX,ESI                         ; 0051087b
    MOV dword ptr [ESP + 0x194],EAX     ; 0051087d
    SAR EDX,0x1f                        ; 00510884
    MOV ECX,dword ptr [ESP + 0x194]     ; 00510887
    MOV EAX,ESI                         ; 0051088e
    IDIV ECX                            ; 00510890
    MOV EDI,EAX                         ; 00510892
    MOV EAX,ECX                         ; 00510894
    IMUL EAX,EDI                        ; 00510896
    CMP EAX,ESI                         ; 00510899
    JZ 0x005108e4                       ; 0051089b
        ;   XREF to: 005108e4 (CONDITIONAL_JUMP)  ; LAB_005108e4
    PUSH EBP                            ; 0051089d
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0051089e
    PUSH EAX                            ; 005108a5
    PUSH ESI                            ; 005108a6
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 005108a7
    PUSH EDX                            ; 005108ae
    PUSH 0x5cc038                       ; 005108af
    LEA EAX,[ESP + 0x78]                ; 005108b4
    PUSH EAX                            ; 005108b8
    MOV ESI,0xc9                        ; 005108b9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005108be
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x18                        ; 005108c3
    LEA EAX,[ESP + 0x64]                ; 005108c6
    MOV ECX,0x5cc095                    ; 005108ca
    PUSH EAX                            ; 005108cf
    MOV dword ptr [0x01d71de4],ESI      ; 005108d0 | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 005108d6 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 005108dc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005108e1
    PUSH EDI                            ; 005108e4
        ;   Label: LAB_005108e4
    PUSH EBX                            ; 005108e5
    CALL cockpit_pkbmpset.cpp_FUN_005106a0 ; 005108e6
        ;   XREF to: 005106a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_FUN_005106a0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 005108eb
    MOV dword ptr [EBX + 0x20],EBP      ; 005108ee
    MOV EDI,dword ptr [ESP + 0x194]     ; 005108f1
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005108f8
    PUSH EDI                            ; 005108ff
    MOV dword ptr [EBX + 0x1c],EAX      ; 00510900
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00510903
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00510908
    MOV EBP,EAX                         ; 0051090b
    TEST EAX,EAX                        ; 0051090d
    JNZ 0x0051094d                      ; 0051090f
        ;   XREF to: 0051094d (CONDITIONAL_JUMP)  ; LAB_0051094d
    PUSH EDI                            ; 00510911
    PUSH 0x5cc0ad                       ; 00510912
    LEA EAX,[ESP + 0xd0]                ; 00510917
    PUSH EAX                            ; 0051091e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0051091f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5cc0f7                    ; 00510924
    ADD ESP,0xc                         ; 00510929
    LEA EAX,[ESP + 0xc8]                ; 0051092c
    MOV ECX,0xda                        ; 00510933
    PUSH EAX                            ; 00510938
    MOV dword ptr [0x01d71de0],EDX      ; 00510939 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0051093f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510945
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051094a
    MOV ESI,dword ptr [EBX]             ; 0051094d
        ;   Label: LAB_0051094d
    XOR EDI,EDI                         ; 0051094f
    TEST ESI,ESI                        ; 00510951
    JLE 0x005109f2                      ; 00510953
        ;   XREF to: 005109f2 (CONDITIONAL_JUMP)  ; LAB_005109f2
    XOR ESI,ESI                         ; 00510959
    MOV EAX,dword ptr [ESP + 0x190]     ; 0051095b
        ;   Label: LAB_0051095b
    PUSH EAX                            ; 00510962
    PUSH 0x1                            ; 00510963
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00510965
    PUSH EDX                            ; 0051096c
    PUSH EBP                            ; 0051096d
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0051096e
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00510973
    CMP EAX,0x1                         ; 00510976
    JZ 0x005109bd                       ; 00510979
        ;   XREF to: 005109bd (CONDITIONAL_JUMP)  ; LAB_005109bd
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0051097b
    PUSH ECX                            ; 00510982
    PUSH 0x5cc10f                       ; 00510983
    LEA EAX,[ESP + 0x134]               ; 00510988
    PUSH EAX                            ; 0051098f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510990
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5cc148                    ; 00510995
    ADD ESP,0xc                         ; 0051099a
    MOV [0x01d71de0],EAX                ; 0051099d | DAT_01d71de0
    LEA EAX,[ESP + 0x12c]               ; 005109a2
    MOV EDX,0xe4                        ; 005109a9
    PUSH EAX                            ; 005109ae
    MOV dword ptr [0x01d71de4],EDX      ; 005109af | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005109b5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005109ba
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005109bd
        ;   Label: LAB_005109bd
    PUSH EAX                            ; 005109c4
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 005109c5
    PUSH EDX                            ; 005109cc
    MOV ECX,dword ptr [EBX + 0x20]      ; 005109cd
    PUSH ECX                            ; 005109d0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005109d1
    PUSH EAX                            ; 005109d4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005109d5
    PUSH EBP                            ; 005109d8
    ADD EAX,ESI                         ; 005109d9
    PUSH EAX                            ; 005109db
    INC EDI                             ; 005109dc
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 ; 005109dd
        ;   XREF to: 0050fa90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESI,0x24                        ; 005109e2
    MOV EDX,dword ptr [EBX]             ; 005109e5
    ADD ESP,0x18                        ; 005109e7
    CMP EDI,EDX                         ; 005109ea
    JL 0x0051095b                       ; 005109ec
        ;   XREF to: 0051095b (CONDITIONAL_JUMP)  ; LAB_0051095b
    PUSH EBP                            ; 005109f2
        ;   Label: LAB_005109f2
    CALL crt_unknown.c_FUN_005a3770     ; 005109f3
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005109f8
    MOV ECX,dword ptr [ESP + 0x190]     ; 005109fb
    PUSH ECX                            ; 00510a02
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00510a03
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00510a08
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 00510a0b
    PUSH ESI                            ; 00510a12
    PUSH EBX                            ; 00510a13
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90 ; 00510a14
        ;   XREF to: 00510f90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00510a19
    CMP dword ptr [ESP + 0x1c0],0x0     ; 00510a1c
    JNZ 0x00510a70                      ; 00510a24
        ;   XREF to: 00510a70 (CONDITIONAL_JUMP)  ; LAB_00510a70
    ADD ESP,0x198                       ; 00510a26
    POP EBP                             ; 00510a2c
    POP EDI                             ; 00510a2d
    POP ESI                             ; 00510a2e
    POP EBX                             ; 00510a2f
    RET                                 ; 00510a30
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 00510a31
        ;   Label: LAB_00510a31
    PUSH EDI                            ; 00510a38
    PUSH 0x5cbfeb                       ; 00510a39
    LEA EAX,[ESP + 0x8]                 ; 00510a3e
    PUSH EAX                            ; 00510a42
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510a43
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5cc020                    ; 00510a48
    ADD ESP,0xc                         ; 00510a4d
    MOV [0x01d71de0],EAX                ; 00510a50 | DAT_01d71de0
    MOV EAX,ESP                         ; 00510a55
    MOV EDX,0xbc                        ; 00510a57
    PUSH EAX                            ; 00510a5c
    MOV dword ptr [0x01d71de4],EDX      ; 00510a5d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510a63
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510a68
    JMP 0x00510871                      ; 00510a6b
        ;   XREF to: 00510871 (UNCONDITIONAL_JUMP)  ; LAB_00510871
    PUSH EBX                            ; 00510a70
        ;   Label: LAB_00510a70
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0 ; 00510a71
        ;   XREF to: 00510fb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510a76
    ADD ESP,0x198                       ; 00510a79
    POP EBP                             ; 00510a7f
    POP EDI                             ; 00510a80
    POP ESI                             ; 00510a81
    POP EBX                             ; 00510a82
    RET                                 ; 00510a83

