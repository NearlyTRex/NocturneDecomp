; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005c10e8(undefined4 *param_1,ulong param_2)
;
;
; XREF[1]:
;   crt_memory.c_realloc_FUN_005c10d0 at 005c10db
;
; Called Functions:
;   crt_unknown.c_FUN_005c0a00
;   crt_unknown.c_FUN_005c6ff0
;   crt_unknown.c_FUN_005c71d4
;   crt_unknown.c_InternalHeapAlloc_FUN_005c08e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c10e8
        ;   Label: crt_unknown.c_FUN_005c10e8
    PUSH ESI                            ; 005c10e9
    PUSH EDI                            ; 005c10ea
    PUSH EBP                            ; 005c10eb
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c10ec
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c10f0
    TEST EBX,EBX                        ; 005c10f4
    JNZ 0x005c1106                      ; 005c10f6
        ;   XREF to: 005c1106 (CONDITIONAL_JUMP)  ; LAB_005c1106
    PUSH EDI                            ; 005c10f8
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005c08e0 ; 005c10f9
        ;   XREF to: 005c08e0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005c08e0(ulong size)
    ADD ESP,0x4                         ; 005c10fe
    POP EBP                             ; 005c1101
    POP EDI                             ; 005c1102
    POP ESI                             ; 005c1103
    POP EBX                             ; 005c1104
    RET                                 ; 005c1105
    TEST EDI,EDI                        ; 005c1106
        ;   Label: LAB_005c1106
    JNZ 0x005c111a                      ; 005c1108
        ;   XREF to: 005c111a (CONDITIONAL_JUMP)  ; LAB_005c111a
    PUSH EBX                            ; 005c110a
    CALL crt_unknown.c_FUN_005c0a00     ; 005c110b
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a00()
    ADD ESP,0x4                         ; 005c1110
    XOR EAX,EAX                         ; 005c1113
    POP EBP                             ; 005c1115
    POP EDI                             ; 005c1116
    POP ESI                             ; 005c1117
    POP EBX                             ; 005c1118
    RET                                 ; 005c1119
    PUSH EBX                            ; 005c111a
        ;   Label: LAB_005c111a
    CALL crt_unknown.c_FUN_005c6ff0     ; 005c111b
        ;   XREF to: 005c6ff0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6ff0()
    ADD ESP,0x4                         ; 005c1120
    PUSH EDI                            ; 005c1123
    PUSH EBX                            ; 005c1124
    MOV ESI,EAX                         ; 005c1125
    CALL crt_unknown.c_FUN_005c71d4     ; 005c1127
        ;   XREF to: 005c71d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c71d4()
    ADD ESP,0x8                         ; 005c112c
    MOV EBP,EAX                         ; 005c112f
    TEST EAX,EAX                        ; 005c1131
    JNZ 0x005c1175                      ; 005c1133
        ;   XREF to: 005c1175 (CONDITIONAL_JUMP)  ; LAB_005c1175
    PUSH EDI                            ; 005c1135
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005c08e0 ; 005c1136
        ;   XREF to: 005c08e0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005c08e0(ulong size)
    ADD ESP,0x4                         ; 005c113b
    MOV EBP,EAX                         ; 005c113e
    TEST EAX,EAX                        ; 005c1140
    JZ 0x005c116b                       ; 005c1142
        ;   XREF to: 005c116b (CONDITIONAL_JUMP)  ; LAB_005c116b
    MOV ECX,ESI                         ; 005c1144
    MOV EDI,EAX                         ; 005c1146
    MOV ESI,EBX                         ; 005c1148
    PUSH ES                             ; 005c114a
    MOV AX,DS                           ; 005c114b
    MOV ES,AX                           ; 005c114d
    PUSH EDI                            ; 005c114f
    MOV EAX,ECX                         ; 005c1150
    SHR ECX,0x2                         ; 005c1152
    MOVSD.REP ES:EDI,ESI                ; 005c1155
    MOV CL,AL                           ; 005c1157
    AND CL,0x3                          ; 005c1159
    MOVSB.REP ES:EDI,ESI                ; 005c115c
    POP EDI                             ; 005c115e
    POP ES                              ; 005c115f
    PUSH EBX                            ; 005c1160
    CALL crt_unknown.c_FUN_005c0a00     ; 005c1161
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a00()
    ADD ESP,0x4                         ; 005c1166
    JMP 0x005c1175                      ; 005c1169
        ;   XREF to: 005c1175 (UNCONDITIONAL_JUMP)  ; LAB_005c1175
    PUSH ESI                            ; 005c116b
        ;   Label: LAB_005c116b
    PUSH EBX                            ; 005c116c
    CALL crt_unknown.c_FUN_005c71d4     ; 005c116d
        ;   XREF to: 005c71d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c71d4()
    ADD ESP,0x8                         ; 005c1172
    MOV EAX,EBP                         ; 005c1175
        ;   Label: LAB_005c1175
    POP EBP                             ; 005c1177
    POP EDI                             ; 005c1178
    POP ESI                             ; 005c1179
    POP EBX                             ; 005c117a
    RET                                 ; 005c117b

