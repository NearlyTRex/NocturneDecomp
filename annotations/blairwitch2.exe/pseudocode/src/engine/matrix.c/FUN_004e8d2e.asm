; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004e8d2e(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004e8d2e
        ;   Label: engine_matrix.c_FUN_004e8d2e
    PUSH EBX                            ; 004e8d30
    PUSH EDI                            ; 004e8d31
    PUSH EBP                            ; 004e8d32
    SUB ESP,0xc                         ; 004e8d33
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e8d36
    MOV EBP,ESI                         ; 004e8d3a
    MOV EDX,dword ptr [0x01c38b6c]      ; 004e8d3c | DAT_01c38b6c
    MOV EDI,dword ptr [0x01c38b70]      ; 004e8d42 | DAT_01c38b70
    MOV EAX,[0x01c38b74]                ; 004e8d48 | DAT_01c38b74
    MOV ESI,dword ptr [EBX]             ; 004e8d4d
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e8d4f
    SUB ESI,EDX                         ; 004e8d52
    MOV EBX,dword ptr [EBX + 0x8]       ; 004e8d54
    MOV EDX,ESI                         ; 004e8d57
    SUB EBX,EAX                         ; 004e8d59
    MOV EAX,[0x01c38b9c]                ; 004e8d5b | DAT_01c38b9c
    SUB ECX,EDI                         ; 004e8d60
    IMUL EDX                            ; 004e8d62
    SHRD EAX,EDX,0x10                   ; 004e8d64
    MOV EDI,EAX                         ; 004e8d68
    MOV EDX,ECX                         ; 004e8d6a
    MOV EAX,[0x01c38ba8]                ; 004e8d6c | DAT_01c38ba8
    IMUL EDX                            ; 004e8d71
    SHRD EAX,EDX,0x10                   ; 004e8d73
    MOV EDX,EBX                         ; 004e8d77
    ADD EDI,EAX                         ; 004e8d79
    MOV EAX,[0x01c38bb4]                ; 004e8d7b | DAT_01c38bb4
    IMUL EDX                            ; 004e8d80
    SHRD EAX,EDX,0x10                   ; 004e8d82
    MOV EDX,ESI                         ; 004e8d86
    ADD EDI,EAX                         ; 004e8d88
    MOV EAX,[0x01c38ba0]                ; 004e8d8a | DAT_01c38ba0
    MOV dword ptr [ESP],EDI             ; 004e8d8f
    IMUL EDX                            ; 004e8d92
    SHRD EAX,EDX,0x10                   ; 004e8d94
    MOV EDI,EAX                         ; 004e8d98
    MOV EDX,ECX                         ; 004e8d9a
    MOV EAX,[0x01c38bac]                ; 004e8d9c | DAT_01c38bac
    IMUL EDX                            ; 004e8da1
    SHRD EAX,EDX,0x10                   ; 004e8da3
    MOV EDX,EBX                         ; 004e8da7
    ADD EDI,EAX                         ; 004e8da9
    MOV EAX,[0x01c38bb8]                ; 004e8dab | DAT_01c38bb8
    IMUL EDX                            ; 004e8db0
    SHRD EAX,EDX,0x10                   ; 004e8db2
    MOV EDX,ESI                         ; 004e8db6
    ADD EDI,EAX                         ; 004e8db8
    MOV EAX,[0x01c38ba4]                ; 004e8dba | DAT_01c38ba4
    IMUL EDX                            ; 004e8dbf
    SHRD EAX,EDX,0x10                   ; 004e8dc1
    MOV ESI,EAX                         ; 004e8dc5
    MOV EDX,ECX                         ; 004e8dc7
    MOV EAX,[0x01c38bb0]                ; 004e8dc9 | DAT_01c38bb0
    IMUL EDX                            ; 004e8dce
    SHRD EAX,EDX,0x10                   ; 004e8dd0
    MOV EDX,EBX                         ; 004e8dd4
    ADD ESI,EAX                         ; 004e8dd6
    MOV EAX,[0x01c38bbc]                ; 004e8dd8 | DAT_01c38bbc
    MOV dword ptr [ESP + 0x4],EDI       ; 004e8ddd
    IMUL EDX                            ; 004e8de1
    SHRD EAX,EDX,0x10                   ; 004e8de3
    ADD ESI,EAX                         ; 004e8de7
    MOV EDI,EBP                         ; 004e8de9
    MOV dword ptr [ESP + 0x8],ESI       ; 004e8deb
    MOV ESI,ESP                         ; 004e8def
    MOVSD ES:EDI,ESI                    ; 004e8df1
    MOVSD ES:EDI,ESI                    ; 004e8df2
    MOVSD ES:EDI,ESI                    ; 004e8df3
    MOV EAX,EBP                         ; 004e8df4
    ADD ESP,0xc                         ; 004e8df6
    POP EBP                             ; 004e8df9
    POP EDI                             ; 004e8dfa
    POP EBX                             ; 004e8dfb
    RET                                 ; 004e8dfc

