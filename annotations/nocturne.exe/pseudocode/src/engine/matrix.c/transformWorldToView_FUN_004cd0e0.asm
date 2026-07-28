; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_transformWorldToView_FUN_004cd0e0(int *param_1)
;
;
; XREF[1]:
;   engine_matrix.c_projectToScreen_FUN_004cea50 at 004cea76
;
; Referenced Globals:
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd0e0
        ;   Label: engine_matrix.c_transformWorldToView_FUN_004cd0e0
    PUSH EDI                            ; 004cd0e1
    PUSH EBP                            ; 004cd0e2
    SUB ESP,0xc                         ; 004cd0e3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004cd0e6
    MOV EBP,ESI                         ; 004cd0ea
    MOV EDX,dword ptr [0x01c039b8]      ; 004cd0ec | DAT_01c039b8
    MOV EDI,dword ptr [0x01c039bc]      ; 004cd0f2 | DAT_01c039bc
    MOV EAX,[0x01c039c0]                ; 004cd0f8 | DAT_01c039c0
    MOV ESI,dword ptr [EBX]             ; 004cd0fd
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cd0ff
    SUB ESI,EDX                         ; 004cd102
    MOV EBX,dword ptr [EBX + 0x8]       ; 004cd104
    MOV EDX,ESI                         ; 004cd107
    SUB EBX,EAX                         ; 004cd109
    MOV EAX,[0x01c039e8]                ; 004cd10b | DAT_01c039e8
    SUB ECX,EDI                         ; 004cd110
    IMUL EDX                            ; 004cd112
    SHRD EAX,EDX,0x10                   ; 004cd114
    MOV EDI,EAX                         ; 004cd118
    MOV EDX,ECX                         ; 004cd11a
    MOV EAX,[0x01c039f4]                ; 004cd11c | DAT_01c039f4
    IMUL EDX                            ; 004cd121
    SHRD EAX,EDX,0x10                   ; 004cd123
    MOV EDX,EBX                         ; 004cd127
    ADD EDI,EAX                         ; 004cd129
    MOV EAX,[0x01c03a00]                ; 004cd12b | DAT_01c03a00
    IMUL EDX                            ; 004cd130
    SHRD EAX,EDX,0x10                   ; 004cd132
    MOV EDX,ESI                         ; 004cd136
    ADD EDI,EAX                         ; 004cd138
    MOV EAX,[0x01c039ec]                ; 004cd13a | DAT_01c039ec
    MOV dword ptr [ESP],EDI             ; 004cd13f
    IMUL EDX                            ; 004cd142
    SHRD EAX,EDX,0x10                   ; 004cd144
    MOV EDI,EAX                         ; 004cd148
    MOV EDX,ECX                         ; 004cd14a
    MOV EAX,[0x01c039f8]                ; 004cd14c | DAT_01c039f8
    IMUL EDX                            ; 004cd151
    SHRD EAX,EDX,0x10                   ; 004cd153
    MOV EDX,EBX                         ; 004cd157
    ADD EDI,EAX                         ; 004cd159
    MOV EAX,[0x01c03a04]                ; 004cd15b | DAT_01c03a04
    IMUL EDX                            ; 004cd160
    SHRD EAX,EDX,0x10                   ; 004cd162
    MOV EDX,ESI                         ; 004cd166
    ADD EDI,EAX                         ; 004cd168
    MOV EAX,[0x01c039f0]                ; 004cd16a | DAT_01c039f0
    IMUL EDX                            ; 004cd16f
    SHRD EAX,EDX,0x10                   ; 004cd171
    MOV ESI,EAX                         ; 004cd175
    MOV EDX,ECX                         ; 004cd177
    MOV EAX,[0x01c039fc]                ; 004cd179 | DAT_01c039fc
    IMUL EDX                            ; 004cd17e
    SHRD EAX,EDX,0x10                   ; 004cd180
    MOV EDX,EBX                         ; 004cd184
    ADD ESI,EAX                         ; 004cd186
    MOV EAX,[0x01c03a08]                ; 004cd188 | DAT_01c03a08
    MOV dword ptr [ESP + 0x4],EDI       ; 004cd18d
    IMUL EDX                            ; 004cd191
    SHRD EAX,EDX,0x10                   ; 004cd193
    ADD ESI,EAX                         ; 004cd197
    MOV EDI,EBP                         ; 004cd199
    MOV dword ptr [ESP + 0x8],ESI       ; 004cd19b
    MOV ESI,ESP                         ; 004cd19f
    MOVSD ES:EDI,ESI                    ; 004cd1a1
    MOVSD ES:EDI,ESI                    ; 004cd1a2
    MOVSD ES:EDI,ESI                    ; 004cd1a3
    MOV EAX,EBP                         ; 004cd1a4
    ADD ESP,0xc                         ; 004cd1a6
    POP EBP                             ; 004cd1a9
    POP EDI                             ; 004cd1aa
    POP EBX                             ; 004cd1ab
    RET                                 ; 004cd1ac

