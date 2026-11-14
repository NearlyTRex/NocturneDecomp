; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_rotateBitmap_FUN_0043a040(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_00437380
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a040
        ;   Label: cockpit_ckptutil.c_rotateBitmap_FUN_0043a040
    PUSH ESI                            ; 0043a041
    PUSH EDI                            ; 0043a042
    PUSH EBP                            ; 0043a043
    SUB ESP,0x5c                        ; 0043a044
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0043a047
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043a04b
    IMUL EAX,EBP                        ; 0043a04f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0043a052
    MOV dword ptr [ESP + 0x50],EAX      ; 0043a056
    TEST EDX,EDX                        ; 0043a05a
    JZ 0x0043a141                       ; 0043a05c
        ;   XREF to: 0043a141 (CONDITIONAL_JUMP)  ; LAB_0043a141
    PUSH 0x5d640f                       ; 0043a062
        ;   Label: LAB_0043a062
    MOV EDX,dword ptr [ESP + 0x74]      ; 0043a067
    PUSH EDX                            ; 0043a06b
    PUSH 0x5d6412                       ; 0043a06c
    CALL engine_dosio.cpp_FUN_00479180  ; 0043a071
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043a076
    MOV EDI,EAX                         ; 0043a079
    TEST EAX,EAX                        ; 0043a07b
    JZ 0x0043a197                       ; 0043a07d
        ;   XREF to: 0043a197 (CONDITIONAL_JUMP)  ; LAB_0043a197
    XOR EAX,EAX                         ; 0043a083
        ;   Label: LAB_0043a083
    MOV dword ptr [ESP + 0x54],EAX      ; 0043a085
    TEST EBP,EBP                        ; 0043a089
    JBE 0x0043a11e                      ; 0043a08b
        ;   XREF to: 0043a11e (CONDITIONAL_JUMP)  ; LAB_0043a11e
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043a091
        ;   Label: LAB_0043a091
    MOV EAX,EBP                         ; 0043a095
    MOV ESI,dword ptr [ESP + 0x74]      ; 0043a097
    SUB EAX,EDX                         ; 0043a09b
    MOV ECX,dword ptr [ESP + 0x78]      ; 0043a09d
    DEC EAX                             ; 0043a0a1
    XOR EBX,EBX                         ; 0043a0a2
    ADD ESI,EAX                         ; 0043a0a4
    TEST ECX,ECX                        ; 0043a0a6
    JBE 0x0043a10d                      ; 0043a0a8
        ;   XREF to: 0043a10d (CONDITIONAL_JUMP)  ; LAB_0043a10d
    PUSH EDI                            ; 0043a0aa
        ;   Label: LAB_0043a0aa
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0043a0ab
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0043a0b0
    MOV dword ptr [ESP + 0x58],EAX      ; 0043a0b3
    CMP EAX,-0x1                        ; 0043a0b7
    JNZ 0x0043a0fc                      ; 0043a0ba
        ;   XREF to: 0043a0fc (CONDITIONAL_JUMP)  ; LAB_0043a0fc
    MOV EDX,dword ptr [ESP + 0x70]      ; 0043a0bc
    PUSH EDX                            ; 0043a0c0
    PUSH 0x5d644d                       ; 0043a0c1
    LEA EAX,[ESP + 0x8]                 ; 0043a0c6
    PUSH EAX                            ; 0043a0ca
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043a0cb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043a0d0
    PUSH EDI                            ; 0043a0d3
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0043a0d4
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EAX,0x7cd                       ; 0043a0d9
    ADD ESP,0x4                         ; 0043a0de
    MOV [0x01d1d404],EAX                ; 0043a0e1 | DAT_01d1d404
    MOV EAX,ESP                         ; 0043a0e6
    MOV ECX,0x5d646e                    ; 0043a0e8
    PUSH EAX                            ; 0043a0ed
    MOV dword ptr [0x01d1d400],ECX      ; 0043a0ee | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0043a0f4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043a0f9
    MOV AL,byte ptr [ESP + 0x58]        ; 0043a0fc
        ;   Label: LAB_0043a0fc
    INC EBX                             ; 0043a100
    MOV byte ptr [ESI],AL               ; 0043a101
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043a103
    ADD ESI,EBP                         ; 0043a107
    CMP EBX,EAX                         ; 0043a109
    JC 0x0043a0aa                       ; 0043a10b
        ;   XREF to: 0043a0aa (CONDITIONAL_JUMP)  ; LAB_0043a0aa
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043a10d
        ;   Label: LAB_0043a10d
    INC EDX                             ; 0043a111
    MOV dword ptr [ESP + 0x54],EDX      ; 0043a112
    CMP EBP,EDX                         ; 0043a116
    JA 0x0043a091                       ; 0043a118
        ;   XREF to: 0043a091 (CONDITIONAL_JUMP)  ; LAB_0043a091
    PUSH EDI                            ; 0043a11e
        ;   Label: LAB_0043a11e
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0043a11f
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0043a124
    CMP dword ptr [ESP + 0x80],0x0      ; 0043a127
    JNZ 0x0043a1d4                      ; 0043a12f
        ;   XREF to: 0043a1d4 (CONDITIONAL_JUMP)  ; LAB_0043a1d4
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043a135
    ADD ESP,0x5c                        ; 0043a139
    POP EBP                             ; 0043a13c
    POP EDI                             ; 0043a13d
    POP ESI                             ; 0043a13e
    POP EBX                             ; 0043a13f
    RET                                 ; 0043a140
    PUSH EAX                            ; 0043a141
        ;   Label: LAB_0043a141
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0043a142
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0043a147
    MOV dword ptr [ESP + 0x74],EAX      ; 0043a14a
    TEST EAX,EAX                        ; 0043a14e
    JNZ 0x0043a062                      ; 0043a150
        ;   XREF to: 0043a062 (CONDITIONAL_JUMP)  ; LAB_0043a062
    MOV EBX,dword ptr [ESP + 0x70]      ; 0043a156
    PUSH EBX                            ; 0043a15a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0043a15b
    PUSH ESI                            ; 0043a15f
    PUSH 0x5d63bf                       ; 0043a160
    LEA EAX,[ESP + 0xc]                 ; 0043a165
    PUSH EAX                            ; 0043a169
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043a16a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x7b7                       ; 0043a16f
    ADD ESP,0x10                        ; 0043a174
    MOV [0x01d1d404],EAX                ; 0043a177 | DAT_01d1d404
    MOV EAX,ESP                         ; 0043a17c
    MOV EDI,0x5d63f9                    ; 0043a17e
    PUSH EAX                            ; 0043a183
    MOV dword ptr [0x01d1d400],EDI      ; 0043a184 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0043a18a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043a18f
    JMP 0x0043a062                      ; 0043a192
        ;   XREF to: 0043a062 (UNCONDITIONAL_JUMP)  ; LAB_0043a062
    MOV ECX,dword ptr [ESP + 0x70]      ; 0043a197
        ;   Label: LAB_0043a197
    PUSH ECX                            ; 0043a19b
    PUSH 0x5d6416                       ; 0043a19c
    LEA EAX,[ESP + 0x8]                 ; 0043a1a1
    PUSH EAX                            ; 0043a1a5
    MOV EBX,0x5d6437                    ; 0043a1a6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0043a1ab
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043a1b0
    MOV EAX,ESP                         ; 0043a1b3
    MOV ESI,0x7c0                       ; 0043a1b5
    PUSH EAX                            ; 0043a1ba
    MOV dword ptr [0x01d1d400],EBX      ; 0043a1bb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0043a1c1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043a1c7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043a1cc
    JMP 0x0043a083                      ; 0043a1cf
        ;   XREF to: 0043a083 (UNCONDITIONAL_JUMP)  ; LAB_0043a083
    MOV ESI,dword ptr [ESP + 0x84]      ; 0043a1d4
        ;   Label: LAB_0043a1d4
    PUSH ESI                            ; 0043a1db
    MOV EDI,dword ptr [ESP + 0x54]      ; 0043a1dc
    PUSH EDI                            ; 0043a1e0
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0043a1e1
    PUSH EBP                            ; 0043a1e5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0043a1e6
    PUSH EAX                            ; 0043a1ea
    CALL cockpit_ckptutil.c_applyActPalette_FUN_00437380 ; 0043a1eb
        ;   XREF to: 00437380 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_00437380(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 0043a1f0
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043a1f3
    ADD ESP,0x5c                        ; 0043a1f7
    POP EBP                             ; 0043a1fa
    POP EDI                             ; 0043a1fb
    POP ESI                             ; 0043a1fc
    POP EBX                             ; 0043a1fd
    RET                                 ; 0043a1fe

