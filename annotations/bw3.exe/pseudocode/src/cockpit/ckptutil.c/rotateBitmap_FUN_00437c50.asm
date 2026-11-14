; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_rotateBitmap_FUN_00437c50(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_00434f90
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437c50
        ;   Label: cockpit_ckptutil.c_rotateBitmap_FUN_00437c50
    PUSH ESI                            ; 00437c51
    PUSH EDI                            ; 00437c52
    PUSH EBP                            ; 00437c53
    SUB ESP,0x5c                        ; 00437c54
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00437c57
    MOV EAX,dword ptr [ESP + 0x78]      ; 00437c5b
    IMUL EAX,EBP                        ; 00437c5f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00437c62
    MOV dword ptr [ESP + 0x50],EAX      ; 00437c66
    TEST EDX,EDX                        ; 00437c6a
    JZ 0x00437d51                       ; 00437c6c
        ;   XREF to: 00437d51 (CONDITIONAL_JUMP)  ; LAB_00437d51
    PUSH 0x5b8c7f                       ; 00437c72
        ;   Label: LAB_00437c72
    MOV EDX,dword ptr [ESP + 0x74]      ; 00437c77
    PUSH EDX                            ; 00437c7b
    PUSH 0x5b8c82                       ; 00437c7c
    CALL engine_dosio.cpp_FUN_004659c0  ; 00437c81
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00437c86
    MOV EDI,EAX                         ; 00437c89
    TEST EAX,EAX                        ; 00437c8b
    JZ 0x00437da7                       ; 00437c8d
        ;   XREF to: 00437da7 (CONDITIONAL_JUMP)  ; LAB_00437da7
    XOR EAX,EAX                         ; 00437c93
        ;   Label: LAB_00437c93
    MOV dword ptr [ESP + 0x54],EAX      ; 00437c95
    TEST EBP,EBP                        ; 00437c99
    JBE 0x00437d2e                      ; 00437c9b
        ;   XREF to: 00437d2e (CONDITIONAL_JUMP)  ; LAB_00437d2e
    MOV EDX,dword ptr [ESP + 0x54]      ; 00437ca1
        ;   Label: LAB_00437ca1
    MOV EAX,EBP                         ; 00437ca5
    MOV ESI,dword ptr [ESP + 0x74]      ; 00437ca7
    SUB EAX,EDX                         ; 00437cab
    MOV ECX,dword ptr [ESP + 0x78]      ; 00437cad
    DEC EAX                             ; 00437cb1
    XOR EBX,EBX                         ; 00437cb2
    ADD ESI,EAX                         ; 00437cb4
    TEST ECX,ECX                        ; 00437cb6
    JBE 0x00437d1d                      ; 00437cb8
        ;   XREF to: 00437d1d (CONDITIONAL_JUMP)  ; LAB_00437d1d
    PUSH EDI                            ; 00437cba
        ;   Label: LAB_00437cba
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 00437cbb
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005a32b0(_FILE * file)
    ADD ESP,0x4                         ; 00437cc0
    MOV dword ptr [ESP + 0x58],EAX      ; 00437cc3
    CMP EAX,-0x1                        ; 00437cc7
    JNZ 0x00437d0c                      ; 00437cca
        ;   XREF to: 00437d0c (CONDITIONAL_JUMP)  ; LAB_00437d0c
    MOV EDX,dword ptr [ESP + 0x70]      ; 00437ccc
    PUSH EDX                            ; 00437cd0
    PUSH 0x5b8cbd                       ; 00437cd1
    LEA EAX,[ESP + 0x8]                 ; 00437cd6
    PUSH EAX                            ; 00437cda
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00437cdb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00437ce0
    PUSH EDI                            ; 00437ce3
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00437ce4
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EAX,0x7cd                       ; 00437ce9
    ADD ESP,0x4                         ; 00437cee
    MOV [0x01d71de4],EAX                ; 00437cf1 | DAT_01d71de4
    MOV EAX,ESP                         ; 00437cf6
    MOV ECX,0x5b8cde                    ; 00437cf8
    PUSH EAX                            ; 00437cfd
    MOV dword ptr [0x01d71de0],ECX      ; 00437cfe | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00437d04
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00437d09
    MOV AL,byte ptr [ESP + 0x58]        ; 00437d0c
        ;   Label: LAB_00437d0c
    INC EBX                             ; 00437d10
    MOV byte ptr [ESI],AL               ; 00437d11
    MOV EAX,dword ptr [ESP + 0x78]      ; 00437d13
    ADD ESI,EBP                         ; 00437d17
    CMP EBX,EAX                         ; 00437d19
    JC 0x00437cba                       ; 00437d1b
        ;   XREF to: 00437cba (CONDITIONAL_JUMP)  ; LAB_00437cba
    MOV EDX,dword ptr [ESP + 0x54]      ; 00437d1d
        ;   Label: LAB_00437d1d
    INC EDX                             ; 00437d21
    MOV dword ptr [ESP + 0x54],EDX      ; 00437d22
    CMP EBP,EDX                         ; 00437d26
    JA 0x00437ca1                       ; 00437d28
        ;   XREF to: 00437ca1 (CONDITIONAL_JUMP)  ; LAB_00437ca1
    PUSH EDI                            ; 00437d2e
        ;   Label: LAB_00437d2e
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00437d2f
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00437d34
    CMP dword ptr [ESP + 0x80],0x0      ; 00437d37
    JNZ 0x00437de4                      ; 00437d3f
        ;   XREF to: 00437de4 (CONDITIONAL_JUMP)  ; LAB_00437de4
    MOV EAX,dword ptr [ESP + 0x74]      ; 00437d45
    ADD ESP,0x5c                        ; 00437d49
    POP EBP                             ; 00437d4c
    POP EDI                             ; 00437d4d
    POP ESI                             ; 00437d4e
    POP EBX                             ; 00437d4f
    RET                                 ; 00437d50
    PUSH EAX                            ; 00437d51
        ;   Label: LAB_00437d51
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00437d52
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00437d57
    MOV dword ptr [ESP + 0x74],EAX      ; 00437d5a
    TEST EAX,EAX                        ; 00437d5e
    JNZ 0x00437c72                      ; 00437d60
        ;   XREF to: 00437c72 (CONDITIONAL_JUMP)  ; LAB_00437c72
    MOV EBX,dword ptr [ESP + 0x70]      ; 00437d66
    PUSH EBX                            ; 00437d6a
    MOV ESI,dword ptr [ESP + 0x54]      ; 00437d6b
    PUSH ESI                            ; 00437d6f
    PUSH 0x5b8c2f                       ; 00437d70
    LEA EAX,[ESP + 0xc]                 ; 00437d75
    PUSH EAX                            ; 00437d79
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00437d7a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x7b7                       ; 00437d7f
    ADD ESP,0x10                        ; 00437d84
    MOV [0x01d71de4],EAX                ; 00437d87 | DAT_01d71de4
    MOV EAX,ESP                         ; 00437d8c
    MOV EDI,0x5b8c69                    ; 00437d8e
    PUSH EAX                            ; 00437d93
    MOV dword ptr [0x01d71de0],EDI      ; 00437d94 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00437d9a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00437d9f
    JMP 0x00437c72                      ; 00437da2
        ;   XREF to: 00437c72 (UNCONDITIONAL_JUMP)  ; LAB_00437c72
    MOV ECX,dword ptr [ESP + 0x70]      ; 00437da7
        ;   Label: LAB_00437da7
    PUSH ECX                            ; 00437dab
    PUSH 0x5b8c86                       ; 00437dac
    LEA EAX,[ESP + 0x8]                 ; 00437db1
    PUSH EAX                            ; 00437db5
    MOV EBX,0x5b8ca7                    ; 00437db6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00437dbb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00437dc0
    MOV EAX,ESP                         ; 00437dc3
    MOV ESI,0x7c0                       ; 00437dc5
    PUSH EAX                            ; 00437dca
    MOV dword ptr [0x01d71de0],EBX      ; 00437dcb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00437dd1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00437dd7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00437ddc
    JMP 0x00437c93                      ; 00437ddf
        ;   XREF to: 00437c93 (UNCONDITIONAL_JUMP)  ; LAB_00437c93
    MOV ESI,dword ptr [ESP + 0x84]      ; 00437de4
        ;   Label: LAB_00437de4
    PUSH ESI                            ; 00437deb
    MOV EDI,dword ptr [ESP + 0x54]      ; 00437dec
    PUSH EDI                            ; 00437df0
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00437df1
    PUSH EBP                            ; 00437df5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00437df6
    PUSH EAX                            ; 00437dfa
    CALL cockpit_ckptutil.c_applyActPalette_FUN_00434f90 ; 00437dfb
        ;   XREF to: 00434f90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_00434f90(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 00437e00
    MOV EAX,dword ptr [ESP + 0x74]      ; 00437e03
    ADD ESP,0x5c                        ; 00437e07
    POP EBP                             ; 00437e0a
    POP EDI                             ; 00437e0b
    POP ESI                             ; 00437e0c
    POP EBX                             ; 00437e0d
    RET                                 ; 00437e0e

