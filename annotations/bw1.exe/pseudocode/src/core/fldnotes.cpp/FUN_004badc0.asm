; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004badc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   crt_memory.c_memset_FUN_005bfb70
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_FUN_005bfb40
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004badc0
        ;   Label: core_fldnotes.cpp_FUN_004badc0
    PUSH ESI                            ; 004badc1
    PUSH EDI                            ; 004badc2
    PUSH EBP                            ; 004badc3
    SUB ESP,0x114                       ; 004badc4
    MOV EBP,dword ptr [ESP + 0x128]     ; 004badca
    PUSH 0xffff                         ; 004badd1
    PUSH 0x16c                          ; 004badd6
    PUSH 0x16c                          ; 004baddb
    PUSH 0x1cc7c70                      ; 004bade0
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004bade5
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004badea
    LEA EAX,[EBP + 0x18]                ; 004baded
    XOR EBX,EBX                         ; 004badf0
    MOV dword ptr [ESP + 0x104],EAX     ; 004badf2
    LEA EAX,[EBP + 0xdc]                ; 004badf9
    MOV dword ptr [ESP + 0x108],EBX     ; 004badff
    LEA ESI,[EBP + 0x7c]                ; 004bae06
    MOV dword ptr [ESP + 0x110],EAX     ; 004bae09
    MOV dword ptr [ESP + 0x100],ESI     ; 004bae10
    MOV dword ptr [ESP + 0x10c],EBP     ; 004bae17
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004bae1e
        ;   Label: LAB_004bae1e
    MOV ESI,EBX                         ; 004bae25
    MOV DL,byte ptr [EAX + 0x18]        ; 004bae27
    SHL ESI,0x5                         ; 004bae2a
    TEST DL,DL                          ; 004bae2d
    JNZ 0x004bae7e                      ; 004bae2f
        ;   XREF to: 004bae7e (CONDITIONAL_JUMP)  ; LAB_004bae7e
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004bae31
        ;   Label: LAB_004bae31
    MOV ECX,dword ptr [ESP + 0x110]     ; 004bae38
    MOV ESI,dword ptr [ESP + 0x108]     ; 004bae3f
    INC EBX                             ; 004bae46
    MOV EAX,dword ptr [EBP + 0x78]      ; 004bae47
    ADD EDX,0x20                        ; 004bae4a
    ADD ECX,0x14                        ; 004bae4d
    ADD ESI,0x23                        ; 004bae50
    ADD EAX,0x23                        ; 004bae53
    MOV dword ptr [ESP + 0x10c],EDX     ; 004bae56
    MOV dword ptr [ESP + 0x110],ECX     ; 004bae5d
    MOV dword ptr [ESP + 0x108],ESI     ; 004bae64
    MOV dword ptr [EBP + 0x78],EAX      ; 004bae6b
    CMP EBX,0x3                         ; 004bae6e
    JL 0x004bae1e                       ; 004bae71
        ;   XREF to: 004bae1e (CONDITIONAL_JUMP)  ; LAB_004bae1e
    ADD ESP,0x114                       ; 004bae73
    POP EBP                             ; 004bae79
    POP EDI                             ; 004bae7a
    POP ESI                             ; 004bae7b
    POP EBX                             ; 004bae7c
    RET                                 ; 004bae7d
    MOV EDI,dword ptr [ESP + 0x100]     ; 004bae7e
        ;   Label: LAB_004bae7e
    ADD EDI,ESI                         ; 004bae85
    MOV ECX,dword ptr [ESP + 0x104]     ; 004bae87
    PUSH EDI                            ; 004bae8e
    ADD ESI,ECX                         ; 004bae8f
    PUSH ESI                            ; 004bae91
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bae92
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bae97
    TEST EAX,EAX                        ; 004bae9a
    JZ 0x004baee4                       ; 004bae9c
        ;   XREF to: 004baee4 (CONDITIONAL_JUMP)  ; LAB_004baee4
    PUSH ESI                            ; 004bae9e
    PUSH 0x5df8f6                       ; 004bae9f
    LEA EAX,[ESP + 0x8]                 ; 004baea4
    PUSH EAX                            ; 004baea8
    CALL crt_unknown.c_FUN_005bfb40     ; 004baea9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004baeae
    PUSH 0x2f                           ; 004baeb1
    PUSH 0x23                           ; 004baeb3
    LEA EAX,[ESP + 0x8]                 ; 004baeb5
    PUSH EAX                            ; 004baeb9
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004baeba
    PUSH EAX                            ; 004baec1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004baec2
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004baec7
    PUSH EDI                            ; 004baeca
    MOV AL,byte ptr [ESI]               ; 004baecb
        ;   Label: LAB_004baecb
    MOV byte ptr [EDI],AL               ; 004baecd
    CMP AL,0x0                          ; 004baecf
    JZ 0x004baee3                       ; 004baed1
        ;   XREF to: 004baee3 (CONDITIONAL_JUMP)  ; LAB_004baee3
    MOV AL,byte ptr [ESI + 0x1]         ; 004baed3
    ADD ESI,0x2                         ; 004baed6
    MOV byte ptr [EDI + 0x1],AL         ; 004baed9
    ADD EDI,0x2                         ; 004baedc
    CMP AL,0x0                          ; 004baedf
    JNZ 0x004baecb                      ; 004baee1
        ;   XREF to: 004baecb (CONDITIONAL_JUMP)  ; LAB_004baecb
    POP EDI                             ; 004baee3
        ;   Label: LAB_004baee3
    PUSH 0xffff                         ; 004baee4
        ;   Label: LAB_004baee4
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004baee9
    PUSH 0x17c                          ; 004baef0
    ADD EAX,0x17c                       ; 004baef5
    PUSH EAX                            ; 004baefa
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004baefb
    PUSH ECX                            ; 004baf02
    MOV dword ptr [EBP + 0x78],EAX      ; 004baf03
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004baf06
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004baf0b
    CMP EBX,0x2                         ; 004baf0e
    JNZ 0x004bae31                      ; 004baf11
        ;   XREF to: 004bae31 (CONDITIONAL_JUMP)  ; LAB_004bae31
    PUSH 0x5df8fc                       ; 004baf17
    MOV ESI,dword ptr [0x0061b4d0]      ; 004baf1c | DAT_0061b4d0
    PUSH ESI                            ; 004baf22
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004baf23
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004baf28
    PUSH 0x60                           ; 004baf2b
    PUSH 0x0                            ; 004baf2d
    MOV EDI,dword ptr [ESP + 0x10c]     ; 004baf2f
    PUSH EDI                            ; 004baf36
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004baf37
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004baf3c
    JMP 0x004bae31                      ; 004baf3f
        ;   XREF to: 004bae31 (UNCONDITIONAL_JUMP)  ; LAB_004bae31

