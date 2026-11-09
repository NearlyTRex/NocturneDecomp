; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005cee44(short *param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ce510 at 005ce6cc
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_string.c_memmove_FUN_005c25d0
;   crt_unknown.c_FUN_005c08d0
;   unkafter_2d.cpp_FUN_005cefe4
;   unkafter_zombie.cpp_FUN_005ccff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cee44
        ;   Label: unkafter_2d.cpp_FUN_005cee44
    PUSH ESI                            ; 005cee45
    PUSH EDI                            ; 005cee46
    PUSH EBP                            ; 005cee47
    SUB ESP,0x8                         ; 005cee48
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005cee4b
    TEST EDX,EDX                        ; 005cee4f
    JNZ 0x005cee5d                      ; 005cee51
        ;   XREF to: 005cee5d (CONDITIONAL_JUMP)  ; LAB_005cee5d
    MOV EAX,0xffffffff                  ; 005cee53
    JMP 0x005cefda                      ; 005cee58
        ;   XREF to: 005cefda (UNCONDITIONAL_JUMP)  ; LAB_005cefda
    CMP word ptr [EDX],0x0              ; 005cee5d
        ;   Label: LAB_005cee5d
    JZ 0x005cee85                       ; 005cee61
        ;   XREF to: 005cee85 (CONDITIONAL_JUMP)  ; LAB_005cee85
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cee63
    MOV BX,word ptr [EAX + 0x2]         ; 005cee67
    ADD EAX,0x2                         ; 005cee6b
    TEST BX,BX                          ; 005cee6e
    JZ 0x005cee85                       ; 005cee71
        ;   XREF to: 005cee85 (CONDITIONAL_JUMP)  ; LAB_005cee85
    CMP word ptr [EAX],0x3d             ; 005cee73
        ;   Label: LAB_005cee73
    JZ 0x005cee85                       ; 005cee77
        ;   XREF to: 005cee85 (CONDITIONAL_JUMP)  ; LAB_005cee85
    MOV CX,word ptr [EAX + 0x2]         ; 005cee79
    ADD EAX,0x2                         ; 005cee7d
    TEST CX,CX                          ; 005cee80
    JNZ 0x005cee73                      ; 005cee83
        ;   XREF to: 005cee73 (CONDITIONAL_JUMP)  ; LAB_005cee73
    CMP word ptr [EAX],0x0              ; 005cee85
        ;   Label: LAB_005cee85
    JNZ 0x005cee98                      ; 005cee89
        ;   XREF to: 005cee98 (CONDITIONAL_JUMP)  ; LAB_005cee98
    MOV EAX,0xffffffff                  ; 005cee8b
    ADD ESP,0x8                         ; 005cee90
    POP EBP                             ; 005cee93
    POP EDI                             ; 005cee94
    POP ESI                             ; 005cee95
    POP EBX                             ; 005cee96
    RET                                 ; 005cee97
    CMP word ptr [EAX + 0x2],0x0        ; 005cee98
        ;   Label: LAB_005cee98
    SETZ AL                             ; 005cee9d
    MOV EBX,dword ptr [0x02c9f6d8]      ; 005ceea0 | DAT_02c9f6d8
    MOVZX ESI,AL                        ; 005ceea6
    TEST EBX,EBX                        ; 005ceea9
    JNZ 0x005ceeea                      ; 005ceeab
        ;   XREF to: 005ceeea (CONDITIONAL_JUMP)  ; LAB_005ceeea
    TEST ESI,ESI                        ; 005ceead
    JNZ 0x005cefd8                      ; 005ceeaf
        ;   XREF to: 005cefd8 (CONDITIONAL_JUMP)  ; LAB_005cefd8
    PUSH 0x9                            ; 005ceeb5
    CALL crt_unknown.c_FUN_005c08d0     ; 005ceeb7
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ceebc
    MOV EBX,EAX                         ; 005ceebf
    TEST EAX,EAX                        ; 005ceec1
    JNZ 0x005ceed2                      ; 005ceec3
        ;   XREF to: 005ceed2 (CONDITIONAL_JUMP)  ; LAB_005ceed2
    MOV EAX,0xffffffff                  ; 005ceec5
    ADD ESP,0x8                         ; 005ceeca
    POP EBP                             ; 005ceecd
    POP EDI                             ; 005ceece
    POP ESI                             ; 005ceecf
    POP EBX                             ; 005ceed0
    RET                                 ; 005ceed1
    MOV [0x02c9f6d8],EAX                ; 005ceed2 | DAT_02c9f6d8
        ;   Label: LAB_005ceed2
    ADD EAX,0x8                         ; 005ceed7
    MOV dword ptr [EAX + -0x8],ESI      ; 005ceeda
    MOV dword ptr [EAX + -0x4],ESI      ; 005ceedd
    MOV [0x02c9f6d0],EAX                ; 005ceee0 | DAT_02c9f6d0
    JMP 0x005cefc0                      ; 005ceee5
        ;   XREF to: 005cefc0 (UNCONDITIONAL_JUMP)  ; LAB_005cefc0
    PUSH ESI                            ; 005ceeea
        ;   Label: LAB_005ceeea
    MOV ECX,dword ptr [ESP + 0x20]      ; 005ceeeb
    PUSH ECX                            ; 005ceeef
    CALL unkafter_2d.cpp_FUN_005cefe4   ; 005ceef0
        ;   XREF to: 005cefe4 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cefe4()
    ADD ESP,0x8                         ; 005ceef5
    TEST ESI,ESI                        ; 005ceef8
    JNZ 0x005cefd8                      ; 005ceefa
        ;   XREF to: 005cefd8 (CONDITIONAL_JUMP)  ; LAB_005cefd8
    TEST EAX,EAX                        ; 005cef00
    JG 0x005cefbd                       ; 005cef02
        ;   XREF to: 005cefbd (CONDITIONAL_JUMP)  ; LAB_005cefbd
    NEG EAX                             ; 005cef08
    MOV ESI,EAX                         ; 005cef0a
    INC EAX                             ; 005cef0c
    MOV dword ptr [ESP + 0x4],EAX       ; 005cef0d
    MOV EAX,ESI                         ; 005cef11
    SHL EAX,0x2                         ; 005cef13
    MOV dword ptr [ESP],EAX             ; 005cef16
    LEA EBP,[EAX + 0x8]                 ; 005cef19
    MOV EAX,dword ptr [ESP + 0x4]       ; 005cef1c
    MOV EDI,dword ptr [0x02c9f6d0]      ; 005cef20 | DAT_02c9f6d0
    ADD EAX,EBP                         ; 005cef26
    TEST EDI,EDI                        ; 005cef28
    JNZ 0x005cef77                      ; 005cef2a
        ;   XREF to: 005cef77 (CONDITIONAL_JUMP)  ; LAB_005cef77
    PUSH EAX                            ; 005cef2c
    CALL crt_unknown.c_FUN_005c08d0     ; 005cef2d
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    MOV EDI,EAX                         ; 005cef32
    ADD ESP,0x4                         ; 005cef34
    MOV EBX,EAX                         ; 005cef37
    TEST EAX,EAX                        ; 005cef39
    JNZ 0x005cef4a                      ; 005cef3b
        ;   XREF to: 005cef4a (CONDITIONAL_JUMP)  ; LAB_005cef4a
    MOV EAX,0xffffffff                  ; 005cef3d
    ADD ESP,0x8                         ; 005cef42
    POP EBP                             ; 005cef45
    POP EDI                             ; 005cef46
    POP ESI                             ; 005cef47
    POP EBX                             ; 005cef48
    RET                                 ; 005cef49
    MOV ECX,dword ptr [ESP]             ; 005cef4a
        ;   Label: LAB_005cef4a
    PUSH ECX                            ; 005cef4d
    MOV EAX,[0x02c9f6d8]                ; 005cef4e | DAT_02c9f6d8
    PUSH EAX                            ; 005cef53
    PUSH EDI                            ; 005cef54
    CALL unkafter_zombie.cpp_FUN_005ccff0 ; 005cef55
        ;   XREF to: 005ccff0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ccff0()
    ADD ESP,0xc                         ; 005cef5a
    MOV EDX,dword ptr [ESP + 0x4]       ; 005cef5d
    PUSH EDX                            ; 005cef61
    PUSH 0x0                            ; 005cef62
    ADD EDI,EBP                         ; 005cef64
    PUSH EDI                            ; 005cef66
    MOV dword ptr [0x02c9f6d0],EDI      ; 005cef67 | DAT_02c9f6d0
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005cef6d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005cef72
    JMP 0x005cefad                      ; 005cef75
        ;   XREF to: 005cefad (UNCONDITIONAL_JUMP)  ; LAB_005cefad
    PUSH EAX                            ; 005cef77
        ;   Label: LAB_005cef77
    PUSH EBX                            ; 005cef78
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005cef79
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005cef7e
    MOV EBX,EAX                         ; 005cef81
    TEST EAX,EAX                        ; 005cef83
    JNZ 0x005cef94                      ; 005cef85
        ;   XREF to: 005cef94 (CONDITIONAL_JUMP)  ; LAB_005cef94
    MOV EAX,0xffffffff                  ; 005cef87
    ADD ESP,0x8                         ; 005cef8c
    POP EBP                             ; 005cef8f
    POP EDI                             ; 005cef90
    POP ESI                             ; 005cef91
    POP EBX                             ; 005cef92
    RET                                 ; 005cef93
    PUSH ESI                            ; 005cef94
        ;   Label: LAB_005cef94
    MOV EDX,dword ptr [0x02c9f6d0]      ; 005cef95 | DAT_02c9f6d0
    PUSH EDX                            ; 005cef9b
    ADD EBP,EAX                         ; 005cef9c
    PUSH EBP                            ; 005cef9e
    CALL crt_string.c_memmove_FUN_005c25d0 ; 005cef9f
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005cefa4
    MOV dword ptr [0x02c9f6d0],EBP      ; 005cefa7 | DAT_02c9f6d0
    MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0 ; 005cefad
        ;   Label: LAB_005cefad
    MOV dword ptr [0x02c9f6d8],EBX      ; 005cefb5 | DAT_02c9f6d8
    JMP 0x005cefc0                      ; 005cefbb
        ;   XREF to: 005cefc0 (UNCONDITIONAL_JUMP)  ; LAB_005cefc0
    LEA ESI,[EAX + -0x1]                ; 005cefbd
        ;   Label: LAB_005cefbd
    LEA EAX,[ESI*0x4 + 0x0]             ; 005cefc0
        ;   Label: LAB_005cefc0
    ADD EBX,EAX                         ; 005cefc7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cefc9
    MOV dword ptr [EBX],EAX             ; 005cefcd
    MOV EAX,[0x02c9f6d0]                ; 005cefcf | DAT_02c9f6d0
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005cefd4
    XOR EAX,EAX                         ; 005cefd8
        ;   Label: LAB_005cefd8
    ADD ESP,0x8                         ; 005cefda
        ;   Label: LAB_005cefda
    POP EBP                             ; 005cefdd
    POP EDI                             ; 005cefde
    POP ESI                             ; 005cefdf
    POP EBX                             ; 005cefe0
    RET                                 ; 005cefe1

