; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060b106()
;
;
; Called Functions:
;   crt_unknown.c_FUN_0060d480
;   crt_unknown.c_FUN_0060d48c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060b106
        ;   Label: crt_unknown.c_FUN_0060b106
    MOV EBP,ESP                         ; 0060b107
    PUSH EBX                            ; 0060b109
    PUSH ESI                            ; 0060b10a
    PUSH EDI                            ; 0060b10b
    CALL crt_unknown.c_FUN_0060d480     ; 0060b10c
        ;   XREF to: 0060d480 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060d480()
    PUSH EAX                            ; 0060b111
    PUSH 0x47                           ; 0060b112
    MOV EDX,dword ptr [EBP + 0x18]      ; 0060b114
    PUSH EDX                            ; 0060b117
    MOV EBX,dword ptr [EBP + 0x14]      ; 0060b118
    PUSH EBX                            ; 0060b11b
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060b11c
    PUSH ECX                            ; 0060b11f
    MOV ESI,dword ptr [EBP + 0xc]       ; 0060b120
    PUSH ESI                            ; 0060b123
    MOV EDI,dword ptr [EBP + 0x8]       ; 0060b124
    PUSH EDI                            ; 0060b127
    CALL crt_unknown.c_FUN_0060d48c     ; 0060b128
        ;   XREF to: 0060d48c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060d48c()
    ADD ESP,0x1c                        ; 0060b12d
    MOV EDX,dword ptr [EBP + 0x10]      ; 0060b130

