; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(int offset,_FILE *file)
;
; Parameters:
; int              Stack[0x4]:4   offset
; _FILE *          Stack[0x8]:4   file
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffba2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ffa70
        ;   Label: crt_stdio.c_seek_within_buffer_FUN_005ffa70
    PUSH ESI                            ; 005ffa71
    PUSH EDI                            ; 005ffa72
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ffa73
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ffa77
    CMP EBX,dword ptr [EAX + 0x4]       ; 005ffa7b
    JG 0x005ffaab                       ; 005ffa7e
        ;   XREF to: 005ffaab (CONDITIONAL_JUMP)  ; LAB_005ffaab
    MOV EDX,dword ptr [EAX + 0x8]       ; 005ffa80
    MOV ECX,dword ptr [EAX]             ; 005ffa83
    MOV EDX,dword ptr [EDX + 0x8]       ; 005ffa85
    SUB EDX,ECX                         ; 005ffa88
    CMP EBX,EDX                         ; 005ffa8a
    JL 0x005ffaab                       ; 005ffa8c
        ;   XREF to: 005ffaab (CONDITIONAL_JUMP)  ; LAB_005ffaab
    MOV DL,byte ptr [EAX + 0xc]         ; 005ffa8e
    MOV ESI,dword ptr [EAX]             ; 005ffa91
    MOV EDI,dword ptr [EAX + 0x4]       ; 005ffa93
    AND DL,0xef                         ; 005ffa96
    ADD ESI,EBX                         ; 005ffa99
    MOV byte ptr [EAX + 0xc],DL         ; 005ffa9b
    SUB EDI,EBX                         ; 005ffa9e
    MOV dword ptr [EAX],ESI             ; 005ffaa0
    MOV dword ptr [EAX + 0x4],EDI       ; 005ffaa2
    XOR EAX,EAX                         ; 005ffaa5
    POP EDI                             ; 005ffaa7
    POP ESI                             ; 005ffaa8
    POP EBX                             ; 005ffaa9
    RET                                 ; 005ffaaa
    MOV EAX,0x1                         ; 005ffaab
        ;   Label: LAB_005ffaab
    POP EDI                             ; 005ffab0
    POP ESI                             ; 005ffab1
    POP EBX                             ; 005ffab2
    RET                                 ; 005ffab3

