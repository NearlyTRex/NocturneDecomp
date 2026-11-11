; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042dec0(char *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_printf_FUN_005b8e10
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dec0
        ;   Label: cockpit_ckptutil.c_FUN_0042dec0
    PUSH ESI                            ; 0042dec1
    PUSH EDI                            ; 0042dec2
    PUSH EBP                            ; 0042dec3
    SUB ESP,0x58                        ; 0042dec4
    MOV EBX,dword ptr [ESP + 0x70]      ; 0042dec7
    PUSH 0x5cd4a0                       ; 0042decb
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042ded0
    PUSH EDX                            ; 0042ded4
    PUSH 0x5cd4a3                       ; 0042ded5
    CALL engine_dosio.cpp_FUN_00460c70  ; 0042deda
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0042dedf
    MOV dword ptr [ESP + 0x54],EAX      ; 0042dee2
    TEST EAX,EAX                        ; 0042dee6
    JNZ 0x0042df22                      ; 0042dee8
        ;   XREF to: 0042df22 (CONDITIONAL_JUMP)  ; LAB_0042df22
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042deea
    PUSH ECX                            ; 0042deee
    PUSH 0x5cd4a7                       ; 0042deef
    LEA EAX,[ESP + 0x8]                 ; 0042def4
    PUSH EAX                            ; 0042def8
    MOV ESI,0x5cd4cb                    ; 0042def9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042defe
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0042df03
    MOV EAX,ESP                         ; 0042df06
    MOV EDI,0x4b4                       ; 0042df08
    PUSH EAX                            ; 0042df0d
    MOV dword ptr [0x01d046a0],ESI      ; 0042df0e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0042df14 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042df1a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042df1f
    MOV EBP,dword ptr [ESP + 0x54]      ; 0042df22
        ;   Label: LAB_0042df22
    PUSH EBP                            ; 0042df26
    PUSH 0x1                            ; 0042df27
    PUSH 0x4                            ; 0042df29
    LEA EAX,[ESP + 0x5c]                ; 0042df2b
    PUSH EAX                            ; 0042df2f
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0042df30
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0042df35
    CMP EAX,0x1                         ; 0042df38
    JZ 0x0042df75                       ; 0042df3b
        ;   XREF to: 0042df75 (CONDITIONAL_JUMP)  ; LAB_0042df75
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042df3d
    PUSH EAX                            ; 0042df41
    PUSH 0x5cd4e1                       ; 0042df42
    LEA EAX,[ESP + 0x8]                 ; 0042df47
    PUSH EAX                            ; 0042df4b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042df4c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5cd50b                    ; 0042df51
    ADD ESP,0xc                         ; 0042df56
    MOV EAX,ESP                         ; 0042df59
    MOV ECX,0x4bd                       ; 0042df5b
    PUSH EAX                            ; 0042df60
    MOV dword ptr [0x01d046a0],EDX      ; 0042df61 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042df67 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042df6d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042df72
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042df75
        ;   Label: LAB_0042df75
    CMP EAX,dword ptr [ESP + 0x74]      ; 0042df79
    JZ 0x0042dfb6                       ; 0042df7d
        ;   XREF to: 0042dfb6 (CONDITIONAL_JUMP)  ; LAB_0042dfb6
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0042df7f
    PUSH EDI                            ; 0042df83
    PUSH 0x5cd521                       ; 0042df84
    LEA EAX,[ESP + 0x8]                 ; 0042df89
    PUSH EAX                            ; 0042df8d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042df8e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x4c6                       ; 0042df93
    ADD ESP,0xc                         ; 0042df98
    MOV [0x01d046a4],EAX                ; 0042df9b | DAT_01d046a4
    MOV EAX,ESP                         ; 0042dfa0
    MOV EBP,0x5cd54c                    ; 0042dfa2
    PUSH EAX                            ; 0042dfa7
    MOV dword ptr [0x01d046a0],EBP      ; 0042dfa8 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042dfae
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042dfb3
    MOV EDX,dword ptr [ESP + 0x74]      ; 0042dfb6
        ;   Label: LAB_0042dfb6
    XOR EDI,EDI                         ; 0042dfba
    TEST EDX,EDX                        ; 0042dfbc
    JLE 0x0042e0a5                      ; 0042dfbe
        ;   XREF to: 0042e0a5 (CONDITIONAL_JUMP)  ; LAB_0042e0a5
    LEA ESI,[EBX + 0x4]                 ; 0042dfc4
    MOV EBP,dword ptr [ESP + 0x54]      ; 0042dfc7
        ;   Label: LAB_0042dfc7
    PUSH EBP                            ; 0042dfcb
    PUSH 0x1                            ; 0042dfcc
    PUSH 0x4                            ; 0042dfce
    PUSH ESI                            ; 0042dfd0
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0042dfd1
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0042dfd6
    CMP EAX,0x1                         ; 0042dfd9
    JZ 0x0042e016                       ; 0042dfdc
        ;   XREF to: 0042e016 (CONDITIONAL_JUMP)  ; LAB_0042e016
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042dfde
    PUSH EAX                            ; 0042dfe2
    PUSH 0x5cd562                       ; 0042dfe3
    LEA EAX,[ESP + 0x8]                 ; 0042dfe8
    PUSH EAX                            ; 0042dfec
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042dfed
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5cd587                    ; 0042dff2
    ADD ESP,0xc                         ; 0042dff7
    MOV EAX,ESP                         ; 0042dffa
    MOV ECX,0x4d1                       ; 0042dffc
    PUSH EAX                            ; 0042e001
    MOV dword ptr [0x01d046a0],EDX      ; 0042e002 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042e008 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e00e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e013
    MOV EBP,dword ptr [EBX]             ; 0042e016
        ;   Label: LAB_0042e016
    TEST EBP,EBP                        ; 0042e018
    JZ 0x0042e025                       ; 0042e01a
        ;   XREF to: 0042e025 (CONDITIONAL_JUMP)  ; LAB_0042e025
    PUSH EBP                            ; 0042e01c
    CALL crt_unknown.c_FUN_005b86a0     ; 0042e01d
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0042e022
    MOV EDX,dword ptr [EBX + 0x4]       ; 0042e025
        ;   Label: LAB_0042e025
    TEST EDX,EDX                        ; 0042e028
    JLE 0x0042e092                      ; 0042e02a
        ;   XREF to: 0042e092 (CONDITIONAL_JUMP)  ; LAB_0042e092
    LEA EBP,[EDX*0x8 + 0x0]             ; 0042e02c
    PUSH EBP                            ; 0042e033
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0042e034
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0042e039
    MOV dword ptr [EBX],EAX             ; 0042e03c
    TEST EAX,EAX                        ; 0042e03e
    JZ 0x0042e0ba                       ; 0042e040
        ;   XREF to: 0042e0ba (CONDITIONAL_JUMP)  ; LAB_0042e0ba
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042e042
        ;   Label: LAB_0042e042
    PUSH ECX                            ; 0042e046
    PUSH 0x1                            ; 0042e047
    PUSH EBP                            ; 0042e049
    MOV EBP,dword ptr [EBX]             ; 0042e04a
    PUSH EBP                            ; 0042e04c
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0042e04d
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0042e052
    CMP EAX,0x1                         ; 0042e055
    JZ 0x0042e092                       ; 0042e058
        ;   XREF to: 0042e092 (CONDITIONAL_JUMP)  ; LAB_0042e092
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042e05a
    PUSH EAX                            ; 0042e05e
    PUSH 0x5cd5de                       ; 0042e05f
    LEA EAX,[ESP + 0x8]                 ; 0042e064
    PUSH EAX                            ; 0042e068
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0042e069
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5cd5fd                    ; 0042e06e
    ADD ESP,0xc                         ; 0042e073
    MOV EAX,ESP                         ; 0042e076
    MOV ECX,0x4ee                       ; 0042e078
    PUSH EAX                            ; 0042e07d
    MOV dword ptr [0x01d046a0],EDX      ; 0042e07e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042e084 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e08a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e08f
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042e092
        ;   Label: LAB_0042e092
    ADD ESI,0x8                         ; 0042e096
    INC EDI                             ; 0042e099
    ADD EBX,0x8                         ; 0042e09a
    CMP EDI,ECX                         ; 0042e09d
    JL 0x0042dfc7                       ; 0042e09f
        ;   XREF to: 0042dfc7 (CONDITIONAL_JUMP)  ; LAB_0042dfc7
    MOV EBX,dword ptr [ESP + 0x54]      ; 0042e0a5
        ;   Label: LAB_0042e0a5
    PUSH EBX                            ; 0042e0a9
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0042e0aa
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0042e0af
    ADD ESP,0x58                        ; 0042e0b2
    POP EBP                             ; 0042e0b5
    POP EDI                             ; 0042e0b6
    POP ESI                             ; 0042e0b7
    POP EBX                             ; 0042e0b8
    RET                                 ; 0042e0b9
    PUSH 0x5cd59d                       ; 0042e0ba
        ;   Label: LAB_0042e0ba
    CALL crt_unknown.c_printf_FUN_005b8e10 ; 0042e0bf
        ;   XREF to: 005b8e10 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_printf_FUN_005b8e10(char * format)
    MOV EAX,0x5cd5c8                    ; 0042e0c4
    ADD ESP,0x4                         ; 0042e0c9
    MOV [0x01d046a0],EAX                ; 0042e0cc | DAT_01d046a0
    MOV EAX,ESP                         ; 0042e0d1
    MOV EDX,0x4e7                       ; 0042e0d3
    PUSH EAX                            ; 0042e0d8
    MOV dword ptr [0x01d046a4],EDX      ; 0042e0d9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042e0df
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042e0e4
    JMP 0x0042e042                      ; 0042e0e7
        ;   XREF to: 0042e042 (UNCONDITIONAL_JUMP)  ; LAB_0042e042

