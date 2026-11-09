; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00538b2e(CPackedBitmapSet *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0
;   cockpit_pkbmpset.cpp_FUN_005389c0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   unkafter_pkbitmap.cpp_FUN_00538990
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00538b2e
        ;   Label: cockpit_pkbmpset.cpp_FUN_00538b2e
    PUSH EBX                            ; 00538b30
    PUSH ESI                            ; 00538b31
    PUSH EDI                            ; 00538b32
    PUSH EBP                            ; 00538b33
    SUB ESP,0x198                       ; 00538b34
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 00538b3a
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 00538b41
    PUSH EBX                            ; 00538b48
    CALL unkafter_pkbitmap.cpp_FUN_00538990 ; 00538b49
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; undefined unkafter_pkbitmap.cpp_FUN_00538990()
    ADD ESP,0x4                         ; 00538b4e
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 00538b51
    PUSH EDX                            ; 00538b58
    PUSH 0x5ed178                       ; 00538b59
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 00538b5e
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00538b63
    PUSH 0x5ed17c                       ; 00538b66
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 00538b6b
    PUSH ECX                            ; 00538b72
    PUSH 0x5ed17f                       ; 00538b73
    MOV ESI,EAX                         ; 00538b78
    CALL engine_dosio.cpp_FUN_00479180  ; 00538b7a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00538b7f
    MOV dword ptr [ESP + 0x190],EAX     ; 00538b82
    TEST EAX,EAX                        ; 00538b89
    JZ 0x00538d51                       ; 00538b8b
        ;   XREF to: 00538d51 (CONDITIONAL_JUMP)  ; LAB_00538d51
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00538b91
        ;   Label: LAB_00538b91
    IMUL EAX,EBP                        ; 00538b98
    MOV EDX,ESI                         ; 00538b9b
    MOV dword ptr [ESP + 0x194],EAX     ; 00538b9d
    SAR EDX,0x1f                        ; 00538ba4
    MOV ECX,dword ptr [ESP + 0x194]     ; 00538ba7
    MOV EAX,ESI                         ; 00538bae
    IDIV ECX                            ; 00538bb0
    MOV EDI,EAX                         ; 00538bb2
    MOV EAX,ECX                         ; 00538bb4
    IMUL EAX,EDI                        ; 00538bb6
    CMP EAX,ESI                         ; 00538bb9
    JZ 0x00538c04                       ; 00538bbb
        ;   XREF to: 00538c04 (CONDITIONAL_JUMP)  ; LAB_00538c04
    PUSH EBP                            ; 00538bbd
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00538bbe
    PUSH EAX                            ; 00538bc5
    PUSH ESI                            ; 00538bc6
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 00538bc7
    PUSH EDX                            ; 00538bce
    PUSH 0x5ed1d0                       ; 00538bcf
    LEA EAX,[ESP + 0x78]                ; 00538bd4
    PUSH EAX                            ; 00538bd8
    MOV ESI,0xc9                        ; 00538bd9
    CALL crt_unknown.c_FUN_005bfb40     ; 00538bde
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x18                        ; 00538be3
    LEA EAX,[ESP + 0x64]                ; 00538be6
    MOV ECX,0x5ed22d                    ; 00538bea
    PUSH EAX                            ; 00538bef
    MOV dword ptr [0x01d1d404],ESI      ; 00538bf0 | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 00538bf6 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00538bfc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538c01
    PUSH EDI                            ; 00538c04
        ;   Label: LAB_00538c04
    PUSH EBX                            ; 00538c05
    CALL cockpit_pkbmpset.cpp_FUN_005389c0 ; 00538c06
        ;   XREF to: 005389c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_005389c0()
    ADD ESP,0x8                         ; 00538c0b
    MOV dword ptr [EBX + 0x20],EBP      ; 00538c0e
    MOV EDI,dword ptr [ESP + 0x194]     ; 00538c11
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00538c18
    PUSH EDI                            ; 00538c1f
    MOV dword ptr [EBX + 0x1c],EAX      ; 00538c20
    CALL crt_unknown.c_FUN_005c08d0     ; 00538c23
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00538c28
    MOV EBP,EAX                         ; 00538c2b
    TEST EAX,EAX                        ; 00538c2d
    JNZ 0x00538c6d                      ; 00538c2f
        ;   XREF to: 00538c6d (CONDITIONAL_JUMP)  ; LAB_00538c6d
    PUSH EDI                            ; 00538c31
    PUSH 0x5ed245                       ; 00538c32
    LEA EAX,[ESP + 0xd0]                ; 00538c37
    PUSH EAX                            ; 00538c3e
    CALL crt_unknown.c_FUN_005bfb40     ; 00538c3f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5ed28f                    ; 00538c44
    ADD ESP,0xc                         ; 00538c49
    LEA EAX,[ESP + 0xc8]                ; 00538c4c
    MOV ECX,0xda                        ; 00538c53
    PUSH EAX                            ; 00538c58
    MOV dword ptr [0x01d1d400],EDX      ; 00538c59 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00538c5f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538c65
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538c6a
    MOV ESI,dword ptr [EBX]             ; 00538c6d
        ;   Label: LAB_00538c6d
    XOR EDI,EDI                         ; 00538c6f
    TEST ESI,ESI                        ; 00538c71
    JLE 0x00538d12                      ; 00538c73
        ;   XREF to: 00538d12 (CONDITIONAL_JUMP)  ; LAB_00538d12
    XOR ESI,ESI                         ; 00538c79
    MOV EAX,dword ptr [ESP + 0x190]     ; 00538c7b
        ;   Label: LAB_00538c7b
    PUSH EAX                            ; 00538c82
    PUSH 0x1                            ; 00538c83
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00538c85
    PUSH EDX                            ; 00538c8c
    PUSH EBP                            ; 00538c8d
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00538c8e
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 00538c93
    CMP EAX,0x1                         ; 00538c96
    JZ 0x00538cdd                       ; 00538c99
        ;   XREF to: 00538cdd (CONDITIONAL_JUMP)  ; LAB_00538cdd
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00538c9b
    PUSH ECX                            ; 00538ca2
    PUSH 0x5ed2a7                       ; 00538ca3
    LEA EAX,[ESP + 0x134]               ; 00538ca8
    PUSH EAX                            ; 00538caf
    CALL crt_unknown.c_FUN_005bfb40     ; 00538cb0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EAX,0x5ed2e0                    ; 00538cb5
    ADD ESP,0xc                         ; 00538cba
    MOV [0x01d1d400],EAX                ; 00538cbd | DAT_01d1d400
    LEA EAX,[ESP + 0x12c]               ; 00538cc2
    MOV EDX,0xe4                        ; 00538cc9
    PUSH EAX                            ; 00538cce
    MOV dword ptr [0x01d1d404],EDX      ; 00538ccf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538cd5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538cda
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00538cdd
        ;   Label: LAB_00538cdd
    PUSH EAX                            ; 00538ce4
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 00538ce5
    PUSH EDX                            ; 00538cec
    MOV ECX,dword ptr [EBX + 0x20]      ; 00538ced
    PUSH ECX                            ; 00538cf0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00538cf1
    PUSH EAX                            ; 00538cf4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00538cf5
    PUSH EBP                            ; 00538cf8
    ADD EAX,ESI                         ; 00538cf9
    PUSH EAX                            ; 00538cfb
    INC EDI                             ; 00538cfc
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 ; 00538cfd
        ;   XREF to: 00537db0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESI,0x24                        ; 00538d02
    MOV EDX,dword ptr [EBX]             ; 00538d05
    ADD ESP,0x18                        ; 00538d07
    CMP EDI,EDX                         ; 00538d0a
    JL 0x00538c7b                       ; 00538d0c
        ;   XREF to: 00538c7b (CONDITIONAL_JUMP)  ; LAB_00538c7b
    PUSH EBP                            ; 00538d12
        ;   Label: LAB_00538d12
    CALL crt_unknown.c_FUN_005c09f0     ; 00538d13
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00538d18
    MOV ECX,dword ptr [ESP + 0x190]     ; 00538d1b
    PUSH ECX                            ; 00538d22
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00538d23
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00538d28
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 00538d2b
    PUSH ESI                            ; 00538d32
    PUSH EBX                            ; 00538d33
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0 ; 00538d34
        ;   XREF to: 005392b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00538d39
    CMP dword ptr [ESP + 0x1c0],0x0     ; 00538d3c
    JNZ 0x00538d90                      ; 00538d44
        ;   XREF to: 00538d90 (CONDITIONAL_JUMP)  ; LAB_00538d90
    ADD ESP,0x198                       ; 00538d46
    POP EBP                             ; 00538d4c
    POP EDI                             ; 00538d4d
    POP ESI                             ; 00538d4e
    POP EBX                             ; 00538d4f
    RET                                 ; 00538d50
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 00538d51
        ;   Label: LAB_00538d51
    PUSH EDI                            ; 00538d58
    PUSH 0x5ed183                       ; 00538d59
    LEA EAX,[ESP + 0x8]                 ; 00538d5e
    PUSH EAX                            ; 00538d62
    CALL crt_unknown.c_FUN_005bfb40     ; 00538d63
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EAX,0x5ed1b8                    ; 00538d68
    ADD ESP,0xc                         ; 00538d6d
    MOV [0x01d1d400],EAX                ; 00538d70 | DAT_01d1d400
    MOV EAX,ESP                         ; 00538d75
    MOV EDX,0xbc                        ; 00538d77
    PUSH EAX                            ; 00538d7c
    MOV dword ptr [0x01d1d404],EDX      ; 00538d7d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538d83
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538d88
    JMP 0x00538b91                      ; 00538d8b
        ;   XREF to: 00538b91 (UNCONDITIONAL_JUMP)  ; LAB_00538b91
    PUSH EBX                            ; 00538d90
        ;   Label: LAB_00538d90
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0 ; 00538d91
        ;   XREF to: 005392d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00538d96
    ADD ESP,0x198                       ; 00538d99
    POP EBP                             ; 00538d9f
    POP EDI                             ; 00538da0
    POP ESI                             ; 00538da1
    POP EBX                             ; 00538da2
    RET                                 ; 00538da3

