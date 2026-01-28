; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_0060b142(void)
;
;
; XREF[1]:
;   crt_unknown.c_thunk_FUN_0060b142 at 0060477a
;
; Called Functions:
;   crt_unknown.c_FUN_0060b133
;   crt_unknown.c_FUN_0060d480
;   crt_unknown.c_FUN_0060d48c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060b142
        ;   Label: crt_unknown.c_FUN_0060b142
    MOV EBP,ESP                         ; 0060b143
    PUSH EBX                            ; 0060b145
    PUSH ESI                            ; 0060b146
    PUSH EDI                            ; 0060b147
    MOV EBX,dword ptr [EBP + 0x14]      ; 0060b148
    CALL crt_unknown.c_FUN_0060d480     ; 0060b14b
        ;   XREF to: 0060d480 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060d480()
    PUSH EAX                            ; 0060b150
    PUSH 0x46                           ; 0060b151
    MOV EDX,dword ptr [EBP + 0x18]      ; 0060b153
    PUSH EDX                            ; 0060b156
    PUSH EBX                            ; 0060b157
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060b158
    PUSH ECX                            ; 0060b15b
    MOV ESI,dword ptr [EBP + 0xc]       ; 0060b15c
    PUSH ESI                            ; 0060b15f
    MOV EDI,dword ptr [EBP + 0x8]       ; 0060b160
    PUSH EDI                            ; 0060b163
    CALL crt_unknown.c_FUN_0060d48c     ; 0060b164
        ;   XREF to: 0060d48c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060d48c()
    MOV EDX,dword ptr [EBP + 0x10]      ; 0060b169
    MOV ECX,dword ptr [EBX]             ; 0060b16c
    ADD ESP,0x1c                        ; 0060b16e
    ADD EDX,ECX                         ; 0060b171
    JMP 0x0060b133                      ; 0060b173
        ;   XREF to: 0060b133 (UNCONDITIONAL_CALL)

