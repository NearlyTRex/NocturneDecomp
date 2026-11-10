; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00510a90(CPackedBitmapSet *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0050f9e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fseek_FUN_005a457c
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510a90
        ;   Label: cockpit_pkbmpset.cpp_FUN_00510a90
    PUSH ESI                            ; 00510a91
    PUSH EDI                            ; 00510a92
    PUSH EBP                            ; 00510a93
    SUB ESP,0x138                       ; 00510a94
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00510a9a
    PUSH 0x5cc160                       ; 00510aa1
    LEA EBX,[ESI + 0x8]                 ; 00510aa6
    PUSH EBX                            ; 00510aa9
    PUSH 0x5cc163                       ; 00510aaa
    CALL engine_dosio.cpp_FUN_004659c0  ; 00510aaf
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00510ab4
    MOV dword ptr [ESP + 0x134],EAX     ; 00510ab7
    TEST EAX,EAX                        ; 00510abe
    JZ 0x00510b95                       ; 00510ac0
        ;   XREF to: 00510b95 (CONDITIONAL_JUMP)  ; LAB_00510b95
    MOV EBP,dword ptr [ESI + 0x1c]      ; 00510ac6
        ;   Label: LAB_00510ac6
    IMUL EBP,dword ptr [ESI + 0x20]     ; 00510ac9
    PUSH EBP                            ; 00510acd
    CALL crt_unknown.c_FUN_005a3650     ; 00510ace
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00510ad3
    MOV dword ptr [ESP + 0x130],EAX     ; 00510ad6
    TEST EAX,EAX                        ; 00510add
    JNZ 0x00510b14                      ; 00510adf
        ;   XREF to: 00510b14 (CONDITIONAL_JUMP)  ; LAB_00510b14
    PUSH EBP                            ; 00510ae1
    PUSH 0x5cc1b6                       ; 00510ae2
    LEA EAX,[ESP + 0x8]                 ; 00510ae7
    PUSH EAX                            ; 00510aeb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510aec
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x117                       ; 00510af1
    ADD ESP,0xc                         ; 00510af6
    MOV [0x01d71de4],EAX                ; 00510af9 | DAT_01d71de4
    MOV EAX,ESP                         ; 00510afe
    MOV EDI,0x5cc200                    ; 00510b00
    PUSH EAX                            ; 00510b05
    MOV dword ptr [0x01d71de0],EDI      ; 00510b06 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00510b0c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510b11
    MOV EDX,dword ptr [ESI]             ; 00510b14
        ;   Label: LAB_00510b14
    XOR EBX,EBX                         ; 00510b16
    TEST EDX,EDX                        ; 00510b18
    JLE 0x00510b5c                      ; 00510b1a
        ;   XREF to: 00510b5c (CONDITIONAL_JUMP)  ; LAB_00510b5c
    LEA EAX,[ESI + 0x8]                 ; 00510b1c
    XOR EDI,EDI                         ; 00510b1f
    MOV dword ptr [ESP + 0x12c],EAX     ; 00510b21
    MOV EAX,dword ptr [ESP + 0x154]     ; 00510b28
        ;   Label: LAB_00510b28
    TEST EAX,EAX                        ; 00510b2f
    JL 0x00510bd0                       ; 00510b31
        ;   XREF to: 00510bd0 (CONDITIONAL_JUMP)  ; LAB_00510bd0
    CMP EBX,EAX                         ; 00510b37
    JZ 0x00510bd0                       ; 00510b39
        ;   XREF to: 00510bd0 (CONDITIONAL_JUMP)  ; LAB_00510bd0
    PUSH 0x1                            ; 00510b3f
    PUSH EBP                            ; 00510b41
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00510b42
    PUSH EAX                            ; 00510b49
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00510b4a
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 00510b4f
        ;   Label: LAB_00510b4f
    INC EBX                             ; 00510b52
    MOV ECX,dword ptr [ESI]             ; 00510b53
    ADD EDI,0x24                        ; 00510b55
    CMP EBX,ECX                         ; 00510b58
    JL 0x00510b28                       ; 00510b5a
        ;   XREF to: 00510b28 (CONDITIONAL_JUMP)  ; LAB_00510b28
    MOV EBX,dword ptr [ESP + 0x130]     ; 00510b5c
        ;   Label: LAB_00510b5c
    PUSH EBX                            ; 00510b63
    CALL crt_unknown.c_FUN_005a3770     ; 00510b64
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00510b69
    MOV EDI,dword ptr [ESP + 0x134]     ; 00510b6c
    PUSH EDI                            ; 00510b73
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00510b74
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00510b79
    CMP dword ptr [ESP + 0x150],0x0     ; 00510b7c
    JNZ 0x00510c4e                      ; 00510b84
        ;   XREF to: 00510c4e (CONDITIONAL_JUMP)  ; LAB_00510c4e
    ADD ESP,0x138                       ; 00510b8a
    POP EBP                             ; 00510b90
    POP EDI                             ; 00510b91
    POP ESI                             ; 00510b92
    POP EBX                             ; 00510b93
    RET                                 ; 00510b94
    PUSH EBX                            ; 00510b95
        ;   Label: LAB_00510b95
    PUSH 0x5cc167                       ; 00510b96
    LEA EAX,[ESP + 0x6c]                ; 00510b9b
    PUSH EAX                            ; 00510b9f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510ba0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5cc19e                    ; 00510ba5
    ADD ESP,0xc                         ; 00510baa
    LEA EAX,[ESP + 0x64]                ; 00510bad
    MOV ECX,0x10a                       ; 00510bb1
    PUSH EAX                            ; 00510bb6
    MOV dword ptr [0x01d71de0],EDX      ; 00510bb7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00510bbd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510bc3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510bc8
    JMP 0x00510ac6                      ; 00510bcb
        ;   XREF to: 00510ac6 (UNCONDITIONAL_JUMP)  ; LAB_00510ac6
    MOV ECX,dword ptr [ESP + 0x134]     ; 00510bd0
        ;   Label: LAB_00510bd0
    PUSH ECX                            ; 00510bd7
    PUSH 0x1                            ; 00510bd8
    PUSH EBP                            ; 00510bda
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00510bdb
    PUSH EAX                            ; 00510be2
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00510be3
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00510be8
    CMP EAX,0x1                         ; 00510beb
    JZ 0x00510c32                       ; 00510bee
        ;   XREF to: 00510c32 (CONDITIONAL_JUMP)  ; LAB_00510c32
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00510bf0
    PUSH EDX                            ; 00510bf7
    PUSH 0x5cc218                       ; 00510bf8
    LEA EAX,[ESP + 0xd0]                ; 00510bfd
    PUSH EAX                            ; 00510c04
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510c05
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x12a                       ; 00510c0a
    ADD ESP,0xc                         ; 00510c0f
    MOV [0x01d71de4],EAX                ; 00510c12 | DAT_01d71de4
    LEA EAX,[ESP + 0xc8]                ; 00510c17
    MOV ECX,0x5cc251                    ; 00510c1e
    PUSH EAX                            ; 00510c23
    MOV dword ptr [0x01d71de0],ECX      ; 00510c24 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00510c2a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510c2f
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00510c32
        ;   Label: LAB_00510c32
    PUSH EDX                            ; 00510c35
    MOV ECX,dword ptr [ESP + 0x134]     ; 00510c36
    MOV EAX,dword ptr [ESI + 0x4]       ; 00510c3d
    PUSH ECX                            ; 00510c40
    ADD EAX,EDI                         ; 00510c41
    PUSH EAX                            ; 00510c43
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0050f9e0 ; 00510c44
        ;   XREF to: 0050f9e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0050f9e0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    JMP 0x00510b4f                      ; 00510c49
        ;   XREF to: 00510b4f (UNCONDITIONAL_JUMP)  ; LAB_00510b4f
    PUSH ESI                            ; 00510c4e
        ;   Label: LAB_00510c4e
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0 ; 00510c4f
        ;   XREF to: 00510fb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510c54
    ADD ESP,0x138                       ; 00510c57
    POP EBP                             ; 00510c5d
    POP EDI                             ; 00510c5e
    POP ESI                             ; 00510c5f
    POP EBX                             ; 00510c60
    RET                                 ; 00510c61

