; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00438bd0(char *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_printf_FUN_005c1280
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438bd0
        ;   Label: cockpit_ckptutil.c_FUN_00438bd0
    PUSH ESI                            ; 00438bd1
    PUSH EDI                            ; 00438bd2
    PUSH EBP                            ; 00438bd3
    SUB ESP,0x58                        ; 00438bd4
    MOV EBX,dword ptr [ESP + 0x70]      ; 00438bd7
    PUSH 0x5d615e                       ; 00438bdb
    MOV EDX,dword ptr [ESP + 0x70]      ; 00438be0
    PUSH EDX                            ; 00438be4
    PUSH 0x5d6161                       ; 00438be5
    CALL engine_dosio.cpp_FUN_00479180  ; 00438bea
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00438bef
    MOV dword ptr [ESP + 0x54],EAX      ; 00438bf2
    TEST EAX,EAX                        ; 00438bf6
    JNZ 0x00438c32                      ; 00438bf8
        ;   XREF to: 00438c32 (CONDITIONAL_JUMP)  ; LAB_00438c32
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00438bfa
    PUSH ECX                            ; 00438bfe
    PUSH 0x5d6165                       ; 00438bff
    LEA EAX,[ESP + 0x8]                 ; 00438c04
    PUSH EAX                            ; 00438c08
    MOV ESI,0x5d6189                    ; 00438c09
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438c0e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00438c13
    MOV EAX,ESP                         ; 00438c16
    MOV EDI,0x486                       ; 00438c18
    PUSH EAX                            ; 00438c1d
    MOV dword ptr [0x01d1d400],ESI      ; 00438c1e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00438c24 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438c2a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438c2f
    MOV EBP,dword ptr [ESP + 0x54]      ; 00438c32
        ;   Label: LAB_00438c32
    PUSH EBP                            ; 00438c36
    PUSH 0x1                            ; 00438c37
    PUSH 0x4                            ; 00438c39
    LEA EAX,[ESP + 0x5c]                ; 00438c3b
    PUSH EAX                            ; 00438c3f
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00438c40
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00438c45
    CMP EAX,0x1                         ; 00438c48
    JZ 0x00438c85                       ; 00438c4b
        ;   XREF to: 00438c85 (CONDITIONAL_JUMP)  ; LAB_00438c85
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00438c4d
    PUSH EAX                            ; 00438c51
    PUSH 0x5d619f                       ; 00438c52
    LEA EAX,[ESP + 0x8]                 ; 00438c57
    PUSH EAX                            ; 00438c5b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438c5c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5d61c9                    ; 00438c61
    ADD ESP,0xc                         ; 00438c66
    MOV EAX,ESP                         ; 00438c69
    MOV ECX,0x48f                       ; 00438c6b
    PUSH EAX                            ; 00438c70
    MOV dword ptr [0x01d1d400],EDX      ; 00438c71 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00438c77 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438c7d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438c82
    MOV EAX,dword ptr [ESP + 0x50]      ; 00438c85
        ;   Label: LAB_00438c85
    CMP EAX,dword ptr [ESP + 0x74]      ; 00438c89
    JZ 0x00438cc6                       ; 00438c8d
        ;   XREF to: 00438cc6 (CONDITIONAL_JUMP)  ; LAB_00438cc6
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00438c8f
    PUSH EDI                            ; 00438c93
    PUSH 0x5d61df                       ; 00438c94
    LEA EAX,[ESP + 0x8]                 ; 00438c99
    PUSH EAX                            ; 00438c9d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438c9e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x498                       ; 00438ca3
    ADD ESP,0xc                         ; 00438ca8
    MOV [0x01d1d404],EAX                ; 00438cab | DAT_01d1d404
    MOV EAX,ESP                         ; 00438cb0
    MOV EBP,0x5d620a                    ; 00438cb2
    PUSH EAX                            ; 00438cb7
    MOV dword ptr [0x01d1d400],EBP      ; 00438cb8 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00438cbe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438cc3
    MOV EDX,dword ptr [ESP + 0x74]      ; 00438cc6
        ;   Label: LAB_00438cc6
    XOR EDI,EDI                         ; 00438cca
    TEST EDX,EDX                        ; 00438ccc
    JLE 0x00438db5                      ; 00438cce
        ;   XREF to: 00438db5 (CONDITIONAL_JUMP)  ; LAB_00438db5
    LEA ESI,[EBX + 0x4]                 ; 00438cd4
    MOV EBP,dword ptr [ESP + 0x54]      ; 00438cd7
        ;   Label: LAB_00438cd7
    PUSH EBP                            ; 00438cdb
    PUSH 0x1                            ; 00438cdc
    PUSH 0x4                            ; 00438cde
    PUSH ESI                            ; 00438ce0
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00438ce1
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00438ce6
    CMP EAX,0x1                         ; 00438ce9
    JZ 0x00438d26                       ; 00438cec
        ;   XREF to: 00438d26 (CONDITIONAL_JUMP)  ; LAB_00438d26
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00438cee
    PUSH EAX                            ; 00438cf2
    PUSH 0x5d6220                       ; 00438cf3
    LEA EAX,[ESP + 0x8]                 ; 00438cf8
    PUSH EAX                            ; 00438cfc
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438cfd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5d6245                    ; 00438d02
    ADD ESP,0xc                         ; 00438d07
    MOV EAX,ESP                         ; 00438d0a
    MOV ECX,0x4a3                       ; 00438d0c
    PUSH EAX                            ; 00438d11
    MOV dword ptr [0x01d1d400],EDX      ; 00438d12 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00438d18 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438d1e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438d23
    MOV EBP,dword ptr [EBX]             ; 00438d26
        ;   Label: LAB_00438d26
    TEST EBP,EBP                        ; 00438d28
    JZ 0x00438d35                       ; 00438d2a
        ;   XREF to: 00438d35 (CONDITIONAL_JUMP)  ; LAB_00438d35
    PUSH EBP                            ; 00438d2c
    CALL crt_unknown.c_FUN_005c09f0     ; 00438d2d
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00438d32
    MOV EDX,dword ptr [EBX + 0x4]       ; 00438d35
        ;   Label: LAB_00438d35
    TEST EDX,EDX                        ; 00438d38
    JLE 0x00438da2                      ; 00438d3a
        ;   XREF to: 00438da2 (CONDITIONAL_JUMP)  ; LAB_00438da2
    LEA EBP,[EDX*0x8 + 0x0]             ; 00438d3c
    PUSH EBP                            ; 00438d43
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00438d44
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00438d49
    MOV dword ptr [EBX],EAX             ; 00438d4c
    TEST EAX,EAX                        ; 00438d4e
    JZ 0x00438dca                       ; 00438d50
        ;   XREF to: 00438dca (CONDITIONAL_JUMP)  ; LAB_00438dca
    MOV ECX,dword ptr [ESP + 0x54]      ; 00438d52
        ;   Label: LAB_00438d52
    PUSH ECX                            ; 00438d56
    PUSH 0x1                            ; 00438d57
    PUSH EBP                            ; 00438d59
    MOV EBP,dword ptr [EBX]             ; 00438d5a
    PUSH EBP                            ; 00438d5c
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00438d5d
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00438d62
    CMP EAX,0x1                         ; 00438d65
    JZ 0x00438da2                       ; 00438d68
        ;   XREF to: 00438da2 (CONDITIONAL_JUMP)  ; LAB_00438da2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00438d6a
    PUSH EAX                            ; 00438d6e
    PUSH 0x5d629c                       ; 00438d6f
    LEA EAX,[ESP + 0x8]                 ; 00438d74
    PUSH EAX                            ; 00438d78
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00438d79
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5d62bb                    ; 00438d7e
    ADD ESP,0xc                         ; 00438d83
    MOV EAX,ESP                         ; 00438d86
    MOV ECX,0x4c0                       ; 00438d88
    PUSH EAX                            ; 00438d8d
    MOV dword ptr [0x01d1d400],EDX      ; 00438d8e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00438d94 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438d9a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438d9f
    MOV ECX,dword ptr [ESP + 0x74]      ; 00438da2
        ;   Label: LAB_00438da2
    ADD ESI,0x8                         ; 00438da6
    INC EDI                             ; 00438da9
    ADD EBX,0x8                         ; 00438daa
    CMP EDI,ECX                         ; 00438dad
    JL 0x00438cd7                       ; 00438daf
        ;   XREF to: 00438cd7 (CONDITIONAL_JUMP)  ; LAB_00438cd7
    MOV EBX,dword ptr [ESP + 0x54]      ; 00438db5
        ;   Label: LAB_00438db5
    PUSH EBX                            ; 00438db9
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00438dba
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00438dbf
    ADD ESP,0x58                        ; 00438dc2
    POP EBP                             ; 00438dc5
    POP EDI                             ; 00438dc6
    POP ESI                             ; 00438dc7
    POP EBX                             ; 00438dc8
    RET                                 ; 00438dc9
    PUSH 0x5d625b                       ; 00438dca
        ;   Label: LAB_00438dca
    CALL crt_unknown.c_printf_FUN_005c1280 ; 00438dcf
        ;   XREF to: 005c1280 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_printf_FUN_005c1280(char * format)
    MOV EAX,0x5d6286                    ; 00438dd4
    ADD ESP,0x4                         ; 00438dd9
    MOV [0x01d1d400],EAX                ; 00438ddc | DAT_01d1d400
    MOV EAX,ESP                         ; 00438de1
    MOV EDX,0x4b9                       ; 00438de3
    PUSH EAX                            ; 00438de8
    MOV dword ptr [0x01d1d404],EDX      ; 00438de9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00438def
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00438df4
    JMP 0x00438d52                      ; 00438df7
        ;   XREF to: 00438d52 (UNCONDITIONAL_JUMP)  ; LAB_00438d52

