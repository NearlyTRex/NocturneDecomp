; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00517a60(CPackedBitmapSet *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517a60
        ;   Label: cockpit_pkbmpset.cpp_FUN_00517a60
    PUSH ESI                            ; 00517a61
    PUSH EDI                            ; 00517a62
    PUSH EBP                            ; 00517a63
    SUB ESP,0x138                       ; 00517a64
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00517a6a
    PUSH 0x5e209d                       ; 00517a71
    LEA EBX,[ESI + 0x8]                 ; 00517a76
    PUSH EBX                            ; 00517a79
    PUSH 0x5e20a0                       ; 00517a7a
    CALL engine_dosio.cpp_FUN_00460c70  ; 00517a7f
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00517a84
    MOV dword ptr [ESP + 0x134],EAX     ; 00517a87
    TEST EAX,EAX                        ; 00517a8e
    JZ 0x00517b65                       ; 00517a90
        ;   XREF to: 00517b65 (CONDITIONAL_JUMP)  ; LAB_00517b65
    MOV EBP,dword ptr [ESI + 0x1c]      ; 00517a96
        ;   Label: LAB_00517a96
    IMUL EBP,dword ptr [ESI + 0x20]     ; 00517a99
    PUSH EBP                            ; 00517a9d
    CALL crt_unknown.c_FUN_005b8580     ; 00517a9e
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00517aa3
    MOV dword ptr [ESP + 0x130],EAX     ; 00517aa6
    TEST EAX,EAX                        ; 00517aad
    JNZ 0x00517ae4                      ; 00517aaf
        ;   XREF to: 00517ae4 (CONDITIONAL_JUMP)  ; LAB_00517ae4
    PUSH EBP                            ; 00517ab1
    PUSH 0x5e20f3                       ; 00517ab2
    LEA EAX,[ESP + 0x8]                 ; 00517ab7
    PUSH EAX                            ; 00517abb
    CALL crt_unknown.c_FUN_005b7790     ; 00517abc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0x115                       ; 00517ac1
    ADD ESP,0xc                         ; 00517ac6
    MOV [0x01d046a4],EAX                ; 00517ac9 | DAT_01d046a4
    MOV EAX,ESP                         ; 00517ace
    MOV EDI,0x5e213d                    ; 00517ad0
    PUSH EAX                            ; 00517ad5
    MOV dword ptr [0x01d046a0],EDI      ; 00517ad6 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00517adc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517ae1
    MOV EDX,dword ptr [ESI]             ; 00517ae4
        ;   Label: LAB_00517ae4
    XOR EBX,EBX                         ; 00517ae6
    TEST EDX,EDX                        ; 00517ae8
    JLE 0x00517b2c                      ; 00517aea
        ;   XREF to: 00517b2c (CONDITIONAL_JUMP)  ; LAB_00517b2c
    LEA EAX,[ESI + 0x8]                 ; 00517aec
    XOR EDI,EDI                         ; 00517aef
    MOV dword ptr [ESP + 0x12c],EAX     ; 00517af1
    MOV EAX,dword ptr [ESP + 0x154]     ; 00517af8
        ;   Label: LAB_00517af8
    TEST EAX,EAX                        ; 00517aff
    JL 0x00517ba0                       ; 00517b01
        ;   XREF to: 00517ba0 (CONDITIONAL_JUMP)  ; LAB_00517ba0
    CMP EBX,EAX                         ; 00517b07
    JZ 0x00517ba0                       ; 00517b09
        ;   XREF to: 00517ba0 (CONDITIONAL_JUMP)  ; LAB_00517ba0
    PUSH 0x1                            ; 00517b0f
    PUSH EBP                            ; 00517b11
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00517b12
    PUSH EAX                            ; 00517b19
    CALL crt_stdio.c_fseek_FUN_005b929c ; 00517b1a
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 00517b1f
        ;   Label: LAB_00517b1f
    INC EBX                             ; 00517b22
    MOV ECX,dword ptr [ESI]             ; 00517b23
    ADD EDI,0x24                        ; 00517b25
    CMP EBX,ECX                         ; 00517b28
    JL 0x00517af8                       ; 00517b2a
        ;   XREF to: 00517af8 (CONDITIONAL_JUMP)  ; LAB_00517af8
    MOV EBX,dword ptr [ESP + 0x130]     ; 00517b2c
        ;   Label: LAB_00517b2c
    PUSH EBX                            ; 00517b33
    CALL crt_unknown.c_FUN_005b86a0     ; 00517b34
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00517b39
    MOV EDI,dword ptr [ESP + 0x134]     ; 00517b3c
    PUSH EDI                            ; 00517b43
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00517b44
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00517b49
    CMP dword ptr [ESP + 0x150],0x0     ; 00517b4c
    JNZ 0x00517c1e                      ; 00517b54
        ;   XREF to: 00517c1e (CONDITIONAL_JUMP)  ; LAB_00517c1e
    ADD ESP,0x138                       ; 00517b5a
    POP EBP                             ; 00517b60
    POP EDI                             ; 00517b61
    POP ESI                             ; 00517b62
    POP EBX                             ; 00517b63
    RET                                 ; 00517b64
    PUSH EBX                            ; 00517b65
        ;   Label: LAB_00517b65
    PUSH 0x5e20a4                       ; 00517b66
    LEA EAX,[ESP + 0x6c]                ; 00517b6b
    PUSH EAX                            ; 00517b6f
    CALL crt_unknown.c_FUN_005b7790     ; 00517b70
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EDX,0x5e20db                    ; 00517b75
    ADD ESP,0xc                         ; 00517b7a
    LEA EAX,[ESP + 0x64]                ; 00517b7d
    MOV ECX,0x108                       ; 00517b81
    PUSH EAX                            ; 00517b86
    MOV dword ptr [0x01d046a0],EDX      ; 00517b87 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00517b8d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517b93
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517b98
    JMP 0x00517a96                      ; 00517b9b
        ;   XREF to: 00517a96 (UNCONDITIONAL_JUMP)  ; LAB_00517a96
    MOV ECX,dword ptr [ESP + 0x134]     ; 00517ba0
        ;   Label: LAB_00517ba0
    PUSH ECX                            ; 00517ba7
    PUSH 0x1                            ; 00517ba8
    PUSH EBP                            ; 00517baa
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00517bab
    PUSH EAX                            ; 00517bb2
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00517bb3
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00517bb8
    CMP EAX,0x1                         ; 00517bbb
    JZ 0x00517c02                       ; 00517bbe
        ;   XREF to: 00517c02 (CONDITIONAL_JUMP)  ; LAB_00517c02
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00517bc0
    PUSH EDX                            ; 00517bc7
    PUSH 0x5e2155                       ; 00517bc8
    LEA EAX,[ESP + 0xd0]                ; 00517bcd
    PUSH EAX                            ; 00517bd4
    CALL crt_unknown.c_FUN_005b7790     ; 00517bd5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0x128                       ; 00517bda
    ADD ESP,0xc                         ; 00517bdf
    MOV [0x01d046a4],EAX                ; 00517be2 | DAT_01d046a4
    LEA EAX,[ESP + 0xc8]                ; 00517be7
    MOV ECX,0x5e218e                    ; 00517bee
    PUSH EAX                            ; 00517bf3
    MOV dword ptr [0x01d046a0],ECX      ; 00517bf4 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00517bfa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517bff
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00517c02
        ;   Label: LAB_00517c02
    PUSH EDX                            ; 00517c05
    MOV ECX,dword ptr [ESP + 0x134]     ; 00517c06
    MOV EAX,dword ptr [ESI + 0x4]       ; 00517c0d
    PUSH ECX                            ; 00517c10
    ADD EAX,EDI                         ; 00517c11
    PUSH EAX                            ; 00517c13
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0 ; 00517c14
        ;   XREF to: 005169b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    JMP 0x00517b1f                      ; 00517c19
        ;   XREF to: 00517b1f (UNCONDITIONAL_JUMP)  ; LAB_00517b1f
    PUSH ESI                            ; 00517c1e
        ;   Label: LAB_00517c1e
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80 ; 00517c1f
        ;   XREF to: 00517f80 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517c24
    ADD ESP,0x138                       ; 00517c27
    POP EBP                             ; 00517c2d
    POP EDI                             ; 00517c2e
    POP ESI                             ; 00517c2f
    POP EBX                             ; 00517c30
    RET                                 ; 00517c31

