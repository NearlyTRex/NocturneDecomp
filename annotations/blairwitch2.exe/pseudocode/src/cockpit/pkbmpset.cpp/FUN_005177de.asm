; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_005177de(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60
;   cockpit_pkbmpset.cpp_FUN_00517640
;   cockpit_pkbmpset.cpp_FUN_00517670
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005177de
        ;   Label: cockpit_pkbmpset.cpp_FUN_005177de
    PUSH EBX                            ; 005177e0
    PUSH ESI                            ; 005177e1
    PUSH EDI                            ; 005177e2
    PUSH EBP                            ; 005177e3
    SUB ESP,0x198                       ; 005177e4
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 005177ea
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 005177f1
    PUSH EBX                            ; 005177f8
    CALL cockpit_pkbmpset.cpp_FUN_00517640 ; 005177f9
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00517640()
    ADD ESP,0x4                         ; 005177fe
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 00517801
    PUSH EDX                            ; 00517808
    PUSH 0x5e1f1d                       ; 00517809
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0051780e
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00517813
    PUSH 0x5e1f21                       ; 00517816
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 0051781b
    PUSH ECX                            ; 00517822
    PUSH 0x5e1f24                       ; 00517823
    MOV ESI,EAX                         ; 00517828
    CALL engine_dosio.cpp_FUN_00460c70  ; 0051782a
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051782f
    MOV dword ptr [ESP + 0x190],EAX     ; 00517832
    TEST EAX,EAX                        ; 00517839
    JZ 0x00517a01                       ; 0051783b
        ;   XREF to: 00517a01 (CONDITIONAL_JUMP)  ; LAB_00517a01
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00517841
        ;   Label: LAB_00517841
    IMUL EAX,EBP                        ; 00517848
    MOV EDX,ESI                         ; 0051784b
    MOV dword ptr [ESP + 0x194],EAX     ; 0051784d
    SAR EDX,0x1f                        ; 00517854
    MOV ECX,dword ptr [ESP + 0x194]     ; 00517857
    MOV EAX,ESI                         ; 0051785e
    IDIV ECX                            ; 00517860
    MOV EDI,EAX                         ; 00517862
    MOV EAX,ECX                         ; 00517864
    IMUL EAX,EDI                        ; 00517866
    CMP EAX,ESI                         ; 00517869
    JZ 0x005178b4                       ; 0051786b
        ;   XREF to: 005178b4 (CONDITIONAL_JUMP)  ; LAB_005178b4
    PUSH EBP                            ; 0051786d
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0051786e
    PUSH EAX                            ; 00517875
    PUSH ESI                            ; 00517876
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 00517877
    PUSH EDX                            ; 0051787e
    PUSH 0x5e1f75                       ; 0051787f
    LEA EAX,[ESP + 0x78]                ; 00517884
    PUSH EAX                            ; 00517888
    MOV ESI,0xc7                        ; 00517889
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0051788e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x18                        ; 00517893
    LEA EAX,[ESP + 0x64]                ; 00517896
    MOV ECX,0x5e1fd2                    ; 0051789a
    PUSH EAX                            ; 0051789f
    MOV dword ptr [0x01d046a4],ESI      ; 005178a0 | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 005178a6 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 005178ac
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005178b1
    PUSH EDI                            ; 005178b4
        ;   Label: LAB_005178b4
    PUSH EBX                            ; 005178b5
    CALL cockpit_pkbmpset.cpp_FUN_00517670 ; 005178b6
        ;   XREF to: 00517670 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00517670()
    ADD ESP,0x8                         ; 005178bb
    MOV dword ptr [EBX + 0x20],EBP      ; 005178be
    MOV EDI,dword ptr [ESP + 0x194]     ; 005178c1
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005178c8
    PUSH EDI                            ; 005178cf
    MOV dword ptr [EBX + 0x1c],EAX      ; 005178d0
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005178d3
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005178d8
    MOV EBP,EAX                         ; 005178db
    TEST EAX,EAX                        ; 005178dd
    JNZ 0x0051791d                      ; 005178df
        ;   XREF to: 0051791d (CONDITIONAL_JUMP)  ; LAB_0051791d
    PUSH EDI                            ; 005178e1
    PUSH 0x5e1fea                       ; 005178e2
    LEA EAX,[ESP + 0xd0]                ; 005178e7
    PUSH EAX                            ; 005178ee
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005178ef
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5e2034                    ; 005178f4
    ADD ESP,0xc                         ; 005178f9
    LEA EAX,[ESP + 0xc8]                ; 005178fc
    MOV ECX,0xd8                        ; 00517903
    PUSH EAX                            ; 00517908
    MOV dword ptr [0x01d046a0],EDX      ; 00517909 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0051790f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517915
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051791a
    MOV ESI,dword ptr [EBX]             ; 0051791d
        ;   Label: LAB_0051791d
    XOR EDI,EDI                         ; 0051791f
    TEST ESI,ESI                        ; 00517921
    JLE 0x005179c2                      ; 00517923
        ;   XREF to: 005179c2 (CONDITIONAL_JUMP)  ; LAB_005179c2
    XOR ESI,ESI                         ; 00517929
    MOV EAX,dword ptr [ESP + 0x190]     ; 0051792b
        ;   Label: LAB_0051792b
    PUSH EAX                            ; 00517932
    PUSH 0x1                            ; 00517933
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00517935
    PUSH EDX                            ; 0051793c
    PUSH EBP                            ; 0051793d
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051793e
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00517943
    CMP EAX,0x1                         ; 00517946
    JZ 0x0051798d                       ; 00517949
        ;   XREF to: 0051798d (CONDITIONAL_JUMP)  ; LAB_0051798d
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0051794b
    PUSH ECX                            ; 00517952
    PUSH 0x5e204c                       ; 00517953
    LEA EAX,[ESP + 0x134]               ; 00517958
    PUSH EAX                            ; 0051795f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00517960
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5e2085                    ; 00517965
    ADD ESP,0xc                         ; 0051796a
    MOV [0x01d046a0],EAX                ; 0051796d | DAT_01d046a0
    LEA EAX,[ESP + 0x12c]               ; 00517972
    MOV EDX,0xe2                        ; 00517979
    PUSH EAX                            ; 0051797e
    MOV dword ptr [0x01d046a4],EDX      ; 0051797f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517985
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051798a
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0051798d
        ;   Label: LAB_0051798d
    PUSH EAX                            ; 00517994
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 00517995
    PUSH EDX                            ; 0051799c
    MOV ECX,dword ptr [EBX + 0x20]      ; 0051799d
    PUSH ECX                            ; 005179a0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005179a1
    PUSH EAX                            ; 005179a4
    MOV EAX,dword ptr [EBX + 0x4]       ; 005179a5
    PUSH EBP                            ; 005179a8
    ADD EAX,ESI                         ; 005179a9
    PUSH EAX                            ; 005179ab
    INC EDI                             ; 005179ac
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 ; 005179ad
        ;   XREF to: 00516a60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESI,0x24                        ; 005179b2
    MOV EDX,dword ptr [EBX]             ; 005179b5
    ADD ESP,0x18                        ; 005179b7
    CMP EDI,EDX                         ; 005179ba
    JL 0x0051792b                       ; 005179bc
        ;   XREF to: 0051792b (CONDITIONAL_JUMP)  ; LAB_0051792b
    PUSH EBP                            ; 005179c2
        ;   Label: LAB_005179c2
    CALL crt_unknown.c_FUN_005b86a0     ; 005179c3
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005179c8
    MOV ECX,dword ptr [ESP + 0x190]     ; 005179cb
    PUSH ECX                            ; 005179d2
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 005179d3
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 005179d8
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 005179db
    PUSH ESI                            ; 005179e2
    PUSH EBX                            ; 005179e3
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60 ; 005179e4
        ;   XREF to: 00517f60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005179e9
    CMP dword ptr [ESP + 0x1c0],0x0     ; 005179ec
    JNZ 0x00517a40                      ; 005179f4
        ;   XREF to: 00517a40 (CONDITIONAL_JUMP)  ; LAB_00517a40
    ADD ESP,0x198                       ; 005179f6
    POP EBP                             ; 005179fc
    POP EDI                             ; 005179fd
    POP ESI                             ; 005179fe
    POP EBX                             ; 005179ff
    RET                                 ; 00517a00
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 00517a01
        ;   Label: LAB_00517a01
    PUSH EDI                            ; 00517a08
    PUSH 0x5e1f28                       ; 00517a09
    LEA EAX,[ESP + 0x8]                 ; 00517a0e
    PUSH EAX                            ; 00517a12
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00517a13
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5e1f5d                    ; 00517a18
    ADD ESP,0xc                         ; 00517a1d
    MOV [0x01d046a0],EAX                ; 00517a20 | DAT_01d046a0
    MOV EAX,ESP                         ; 00517a25
    MOV EDX,0xba                        ; 00517a27
    PUSH EAX                            ; 00517a2c
    MOV dword ptr [0x01d046a4],EDX      ; 00517a2d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517a33
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517a38
    JMP 0x00517841                      ; 00517a3b
        ;   XREF to: 00517841 (UNCONDITIONAL_JUMP)  ; LAB_00517841
    PUSH EBX                            ; 00517a40
        ;   Label: LAB_00517a40
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80 ; 00517a41
        ;   XREF to: 00517f80 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517a46
    ADD ESP,0x198                       ; 00517a49
    POP EBP                             ; 00517a4f
    POP EDI                             ; 00517a50
    POP ESI                             ; 00517a51
    POP EBX                             ; 00517a52
    RET                                 ; 00517a53

