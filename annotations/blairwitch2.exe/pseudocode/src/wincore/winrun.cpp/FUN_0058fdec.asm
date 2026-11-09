; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_0058fdec(char *param_1)
;
;
; Called Functions:
;   crt_env.c_getenv_FUN_005bac90
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0058fdec
        ;   Label: wincore_winrun.cpp_FUN_0058fdec
    PUSH EBX                            ; 0058fdf0
    PUSH ESI                            ; 0058fdf1
    PUSH EDI                            ; 0058fdf2
    SUB ESP,0x4                         ; 0058fdf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058fdf6
    PUSH 0x200                          ; 0058fdfa
    PUSH 0x0                            ; 0058fdff
    PUSH EBX                            ; 0058fe01
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0058fe02
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0058fe07
    MOV EAX,ESP                         ; 0058fe0a
    MOV EDX,0x100                       ; 0058fe0c
    PUSH EAX                            ; 0058fe11
    LEA EDI,[EBX + EDX*0x1]             ; 0058fe12
    PUSH EDI                            ; 0058fe15
    MOV dword ptr [ESP + 0x8],EDX       ; 0058fe16
    CALL dword ptr CS:[0x5c856c]        ; 0058fe1a
    MOV EAX,ESP                         ; 0058fe21
    PUSH EAX                            ; 0058fe23
    MOV ECX,0x100                       ; 0058fe24
    PUSH EBX                            ; 0058fe29
    MOV dword ptr [ESP + 0x8],ECX       ; 0058fe2a
    CALL dword ptr CS:[0x5c83d8]        ; 0058fe2e
    CMP byte ptr [EBX + 0x100],0x0      ; 0058fe35
    JZ 0x0058fe4a                       ; 0058fe3c
        ;   XREF to: 0058fe4a (CONDITIONAL_JUMP)  ; LAB_0058fe4a
    CMP byte ptr [EBX],0x0              ; 0058fe3e
        ;   Label: LAB_0058fe3e
    JZ 0x0058fe83                       ; 0058fe41
        ;   XREF to: 0058fe83 (CONDITIONAL_JUMP)  ; LAB_0058fe83
    ADD ESP,0x4                         ; 0058fe43
        ;   Label: LAB_0058fe43
    POP EDI                             ; 0058fe46
    POP ESI                             ; 0058fe47
    POP EBX                             ; 0058fe48
    RET                                 ; 0058fe49
    PUSH 0x5eeaaa                       ; 0058fe4a
        ;   Label: LAB_0058fe4a
    CALL crt_env.c_getenv_FUN_005bac90  ; 0058fe4f
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 0058fe54
    TEST EAX,EAX                        ; 0058fe57
    JZ 0x0058fe3e                       ; 0058fe59
        ;   XREF to: 0058fe3e (CONDITIONAL_JUMP)  ; LAB_0058fe3e
    MOV ESI,EAX                         ; 0058fe5b
    PUSH EDI                            ; 0058fe5d
    MOV AL,byte ptr [ESI]               ; 0058fe5e
        ;   Label: LAB_0058fe5e
    MOV byte ptr [EDI],AL               ; 0058fe60
    CMP AL,0x0                          ; 0058fe62
    JZ 0x0058fe76                       ; 0058fe64
        ;   XREF to: 0058fe76 (CONDITIONAL_JUMP)  ; LAB_0058fe76
    MOV AL,byte ptr [ESI + 0x1]         ; 0058fe66
    ADD ESI,0x2                         ; 0058fe69
    MOV byte ptr [EDI + 0x1],AL         ; 0058fe6c
    ADD EDI,0x2                         ; 0058fe6f
    CMP AL,0x0                          ; 0058fe72
    JNZ 0x0058fe5e                      ; 0058fe74
        ;   XREF to: 0058fe5e (CONDITIONAL_JUMP)  ; LAB_0058fe5e
    POP EDI                             ; 0058fe76
        ;   Label: LAB_0058fe76
    CMP byte ptr [EBX],0x0              ; 0058fe77
    JZ 0x0058fe83                       ; 0058fe7a
        ;   XREF to: 0058fe83 (CONDITIONAL_JUMP)  ; LAB_0058fe83
    ADD ESP,0x4                         ; 0058fe7c
    POP EDI                             ; 0058fe7f
    POP ESI                             ; 0058fe80
    POP EBX                             ; 0058fe81
    RET                                 ; 0058fe82
    PUSH 0x5eeab7                       ; 0058fe83
        ;   Label: LAB_0058fe83
    CALL crt_env.c_getenv_FUN_005bac90  ; 0058fe88
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 0058fe8d
    TEST EAX,EAX                        ; 0058fe90
    JZ 0x0058fe43                       ; 0058fe92
        ;   XREF to: 0058fe43 (CONDITIONAL_JUMP)  ; LAB_0058fe43
    MOV ESI,EAX                         ; 0058fe94
    MOV EDI,EBX                         ; 0058fe96
    PUSH EDI                            ; 0058fe98
    MOV AL,byte ptr [ESI]               ; 0058fe99
        ;   Label: LAB_0058fe99
    MOV byte ptr [EDI],AL               ; 0058fe9b
    CMP AL,0x0                          ; 0058fe9d
    JZ 0x0058feb1                       ; 0058fe9f
        ;   XREF to: 0058feb1 (CONDITIONAL_JUMP)  ; LAB_0058feb1
    MOV AL,byte ptr [ESI + 0x1]         ; 0058fea1
    ADD ESI,0x2                         ; 0058fea4
    MOV byte ptr [EDI + 0x1],AL         ; 0058fea7
    ADD EDI,0x2                         ; 0058feaa
    CMP AL,0x0                          ; 0058fead
    JNZ 0x0058fe99                      ; 0058feaf
        ;   XREF to: 0058fe99 (CONDITIONAL_JUMP)  ; LAB_0058fe99
    POP EDI                             ; 0058feb1
        ;   Label: LAB_0058feb1
    ADD ESP,0x4                         ; 0058feb2
    POP EDI                             ; 0058feb5
    POP ESI                             ; 0058feb6
    POP EBX                             ; 0058feb7
    RET                                 ; 0058feb8

