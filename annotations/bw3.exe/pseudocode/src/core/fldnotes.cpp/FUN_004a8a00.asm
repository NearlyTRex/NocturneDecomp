; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a8a00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a28c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8a00
        ;   Label: core_fldnotes.cpp_FUN_004a8a00
    PUSH ESI                            ; 004a8a01
    PUSH EDI                            ; 004a8a02
    PUSH EBP                            ; 004a8a03
    SUB ESP,0x114                       ; 004a8a04
    MOV EBP,dword ptr [ESP + 0x128]     ; 004a8a0a
    PUSH 0xffff                         ; 004a8a11
    PUSH 0x16c                          ; 004a8a16
    PUSH 0x16c                          ; 004a8a1b
    PUSH 0x1d19c88                      ; 004a8a20
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004a8a25
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a8a2a
    LEA EAX,[EBP + 0x18]                ; 004a8a2d
    XOR EBX,EBX                         ; 004a8a30
    MOV dword ptr [ESP + 0x104],EAX     ; 004a8a32
    LEA EAX,[EBP + 0xdc]                ; 004a8a39
    MOV dword ptr [ESP + 0x108],EBX     ; 004a8a3f
    LEA ESI,[EBP + 0x7c]                ; 004a8a46
    MOV dword ptr [ESP + 0x110],EAX     ; 004a8a49
    MOV dword ptr [ESP + 0x100],ESI     ; 004a8a50
    MOV dword ptr [ESP + 0x10c],EBP     ; 004a8a57
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004a8a5e
        ;   Label: LAB_004a8a5e
    MOV ESI,EBX                         ; 004a8a65
    MOV DL,byte ptr [EAX + 0x18]        ; 004a8a67
    SHL ESI,0x5                         ; 004a8a6a
    TEST DL,DL                          ; 004a8a6d
    JNZ 0x004a8abe                      ; 004a8a6f
        ;   XREF to: 004a8abe (CONDITIONAL_JUMP)  ; LAB_004a8abe
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004a8a71
        ;   Label: LAB_004a8a71
    MOV ECX,dword ptr [ESP + 0x110]     ; 004a8a78
    MOV ESI,dword ptr [ESP + 0x108]     ; 004a8a7f
    INC EBX                             ; 004a8a86
    MOV EAX,dword ptr [EBP + 0x78]      ; 004a8a87
    ADD EDX,0x20                        ; 004a8a8a
    ADD ECX,0x14                        ; 004a8a8d
    ADD ESI,0x23                        ; 004a8a90
    ADD EAX,0x23                        ; 004a8a93
    MOV dword ptr [ESP + 0x10c],EDX     ; 004a8a96
    MOV dword ptr [ESP + 0x110],ECX     ; 004a8a9d
    MOV dword ptr [ESP + 0x108],ESI     ; 004a8aa4
    MOV dword ptr [EBP + 0x78],EAX      ; 004a8aab
    CMP EBX,0x3                         ; 004a8aae
    JL 0x004a8a5e                       ; 004a8ab1
        ;   XREF to: 004a8a5e (CONDITIONAL_JUMP)  ; LAB_004a8a5e
    ADD ESP,0x114                       ; 004a8ab3
    POP EBP                             ; 004a8ab9
    POP EDI                             ; 004a8aba
    POP ESI                             ; 004a8abb
    POP EBX                             ; 004a8abc
    RET                                 ; 004a8abd
    MOV EDI,dword ptr [ESP + 0x100]     ; 004a8abe
        ;   Label: LAB_004a8abe
    ADD EDI,ESI                         ; 004a8ac5
    MOV ECX,dword ptr [ESP + 0x104]     ; 004a8ac7
    PUSH EDI                            ; 004a8ace
    ADD ESI,ECX                         ; 004a8acf
    PUSH ESI                            ; 004a8ad1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004a8ad2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8ad7
    TEST EAX,EAX                        ; 004a8ada
    JZ 0x004a8b24                       ; 004a8adc
        ;   XREF to: 004a8b24 (CONDITIONAL_JUMP)  ; LAB_004a8b24
    PUSH ESI                            ; 004a8ade
    PUSH 0x5c0de3                       ; 004a8adf
    LEA EAX,[ESP + 0x8]                 ; 004a8ae4
    PUSH EAX                            ; 004a8ae8
    CALL crt_unknown.c_FUN_005a28c0     ; 004a8ae9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004a8aee
    PUSH 0x2f                           ; 004a8af1
    PUSH 0x23                           ; 004a8af3
    LEA EAX,[ESP + 0x8]                 ; 004a8af5
    PUSH EAX                            ; 004a8af9
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004a8afa
    PUSH EAX                            ; 004a8b01
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004a8b02
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a8b07
    PUSH EDI                            ; 004a8b0a
    MOV AL,byte ptr [ESI]               ; 004a8b0b
        ;   Label: LAB_004a8b0b
    MOV byte ptr [EDI],AL               ; 004a8b0d
    CMP AL,0x0                          ; 004a8b0f
    JZ 0x004a8b23                       ; 004a8b11
        ;   XREF to: 004a8b23 (CONDITIONAL_JUMP)  ; LAB_004a8b23
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8b13
    ADD ESI,0x2                         ; 004a8b16
    MOV byte ptr [EDI + 0x1],AL         ; 004a8b19
    ADD EDI,0x2                         ; 004a8b1c
    CMP AL,0x0                          ; 004a8b1f
    JNZ 0x004a8b0b                      ; 004a8b21
        ;   XREF to: 004a8b0b (CONDITIONAL_JUMP)  ; LAB_004a8b0b
    POP EDI                             ; 004a8b23
        ;   Label: LAB_004a8b23
    PUSH 0xffff                         ; 004a8b24
        ;   Label: LAB_004a8b24
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004a8b29
    PUSH 0x17c                          ; 004a8b30
    ADD EAX,0x17c                       ; 004a8b35
    PUSH EAX                            ; 004a8b3a
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004a8b3b
    PUSH ECX                            ; 004a8b42
    MOV dword ptr [EBP + 0x78],EAX      ; 004a8b43
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004a8b46
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a8b4b
    CMP EBX,0x2                         ; 004a8b4e
    JNZ 0x004a8a71                      ; 004a8b51
        ;   XREF to: 004a8a71 (CONDITIONAL_JUMP)  ; LAB_004a8a71
    PUSH 0x5c0de9                       ; 004a8b57
    MOV ESI,dword ptr [0x005fba60]      ; 004a8b5c | DAT_005fba60
    PUSH ESI                            ; 004a8b62
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004a8b63
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004a8b68
    PUSH 0x60                           ; 004a8b6b
    PUSH 0x0                            ; 004a8b6d
    MOV EDI,dword ptr [ESP + 0x10c]     ; 004a8b6f
    PUSH EDI                            ; 004a8b76
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004a8b77
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a8b7c
    JMP 0x004a8a71                      ; 004a8b7f
        ;   XREF to: 004a8a71 (UNCONDITIONAL_JUMP)  ; LAB_004a8a71

