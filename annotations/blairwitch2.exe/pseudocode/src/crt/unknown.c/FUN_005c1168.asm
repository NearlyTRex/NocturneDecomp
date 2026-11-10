; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c1168(void)
;
; Local Variables:
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   crt_time.c__strftime_FUN_005ba3a4 at 005ba773
;   crt_unknown.c_FUN_005ba300 at 005ba306
;   crt_unknown.c_FUN_005c43e0 at 005c44fb
;
; Referenced Globals:
;   void* PTR_GetTimeZoneInformation_005c85c0 = 001c8f66
;   undefined4 DAT_005f1a58
;   undefined4 DAT_0061f52c
;   undefined4 DAT_0061f5ac
;   undefined1 DAT_0061f5ad
;   undefined4 DAT_0061f62d
;   undefined4 DAT_0061f638
;   undefined4 DAT_0061f63c
;   undefined4 DAT_0061f640
;   undefined1 DAT_0061f644
;
; Called Functions:
;   crt_env.c_getenv_FUN_005bac90
;   crt_unknown.c_FUN_005c13dc
;   crt_unknown.c_FUN_005c4310
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c106c
        ;   Label: LAB_005c106c
    PUSH ESI                            ; 005c106d
    SUB ESP,0xac                        ; 005c106e
    MOV AH,byte ptr [0x0061f644]        ; 005c1074 | DAT_0061f644
    TEST AH,0x1                         ; 005c107a
    JZ 0x005c1088                       ; 005c107d
        ;   XREF to: 005c1088 (CONDITIONAL_JUMP)  ; LAB_005c1088
    TEST AH,0x2                         ; 005c107f
    JNZ 0x005c115d                      ; 005c1082
        ;   XREF to: 005c115d (CONDITIONAL_JUMP)  ; LAB_005c115d
    MOV DH,byte ptr [0x0061f644]        ; 005c1088 | DAT_0061f644
        ;   Label: LAB_005c1088
    MOV EAX,ESP                         ; 005c108e
    OR DH,0x2                           ; 005c1090
    PUSH EAX                            ; 005c1093
    MOV byte ptr [0x0061f644],DH        ; 005c1094 | DAT_0061f644
    CALL dword ptr CS:[0x5c85c0]        ; 005c109a | PTR_GetTimeZoneInformation_005c85c0
    CMP EAX,0x1                         ; 005c10a1
    JC 0x005c115d                       ; 005c10a4
        ;   XREF to: 005c115d (CONDITIONAL_JUMP)  ; LAB_005c115d
    JBE 0x005c10e1                      ; 005c10aa
        ;   XREF to: 005c10e1 (CONDITIONAL_JUMP)  ; LAB_005c10e1
    CMP EAX,0x2                         ; 005c10ac
    JNZ 0x005c115d                      ; 005c10af
        ;   XREF to: 005c115d (CONDITIONAL_JUMP)  ; LAB_005c115d
    MOV dword ptr [0x0061f63c],0x1      ; 005c10b5 | DAT_0061f63c
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005c10bf
    MOV EAX,EDX                         ; 005c10c6
    SHL EAX,0x4                         ; 005c10c8
    SUB EAX,EDX                         ; 005c10cb
    SHL EAX,0x2                         ; 005c10cd
    MOV EBX,EAX                         ; 005c10d0
    MOV [0x0061f640],EAX                ; 005c10d2 | DAT_0061f640
    NEG EBX                             ; 005c10d7
    MOV dword ptr [0x0061f640],EBX      ; 005c10d9 | DAT_0061f640
    JMP 0x005c10e9                      ; 005c10df
        ;   XREF to: 005c10e9 (UNCONDITIONAL_JUMP)  ; LAB_005c10e9
    XOR ECX,ECX                         ; 005c10e1
        ;   Label: LAB_005c10e1
    MOV dword ptr [0x0061f63c],ECX      ; 005c10e3 | DAT_0061f63c
    MOV EDX,dword ptr [ESP + 0x54]      ; 005c10e9
        ;   Label: LAB_005c10e9
    MOV ESI,dword ptr [ESP]             ; 005c10ed
    ADD EDX,ESI                         ; 005c10f0
    MOV EAX,EDX                         ; 005c10f2
    SHL EAX,0x4                         ; 005c10f4
    SUB EAX,EDX                         ; 005c10f7
    SHL EAX,0x2                         ; 005c10f9
    PUSH 0x80                           ; 005c10fc
    MOV [0x0061f638],EAX                ; 005c1101 | DAT_0061f638
    LEA EAX,[ESP + 0x8]                 ; 005c1106
    PUSH EAX                            ; 005c110a
    PUSH 0x61f52c                       ; 005c110b | DAT_0061f52c
    CALL crt_unknown.c_FUN_005c4310     ; 005c1110
        ;   XREF to: 005c4310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4310()
    ADD ESP,0xc                         ; 005c1115
    CMP EAX,-0x1                        ; 005c1118
    JNZ 0x005c1127                      ; 005c111b
        ;   XREF to: 005c1127 (CONDITIONAL_JUMP)  ; LAB_005c1127
    XOR BH,BH                           ; 005c111d
    MOV byte ptr [0x0061f52c],BH        ; 005c111f | DAT_0061f52c
    JMP 0x005c112f                      ; 005c1125
        ;   XREF to: 005c112f (UNCONDITIONAL_JUMP)  ; LAB_005c112f
    XOR BL,BL                           ; 005c1127
        ;   Label: LAB_005c1127
    MOV byte ptr [0x0061f5ac],BL        ; 005c1129 | DAT_0061f5ac
    PUSH 0x80                           ; 005c112f
        ;   Label: LAB_005c112f
    LEA EAX,[ESP + 0x5c]                ; 005c1134
    PUSH EAX                            ; 005c1138
    PUSH 0x61f5ad                       ; 005c1139 | DAT_0061f5ad
    CALL crt_unknown.c_FUN_005c4310     ; 005c113e
        ;   XREF to: 005c4310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4310()
    ADD ESP,0xc                         ; 005c1143
    CMP EAX,-0x1                        ; 005c1146
    JNZ 0x005c1155                      ; 005c1149
        ;   XREF to: 005c1155 (CONDITIONAL_JUMP)  ; LAB_005c1155
    XOR CH,CH                           ; 005c114b
    MOV byte ptr [0x0061f5ad],CH        ; 005c114d | DAT_0061f5ad
    JMP 0x005c115d                      ; 005c1153
        ;   XREF to: 005c115d (UNCONDITIONAL_JUMP)  ; LAB_005c115d
    XOR CL,CL                           ; 005c1155
        ;   Label: LAB_005c1155
    MOV byte ptr [0x0061f62d],CL        ; 005c1157 | DAT_0061f62d
    ADD ESP,0xac                        ; 005c115d
        ;   Label: LAB_005c115d
    POP ESI                             ; 005c1163
    POP EBX                             ; 005c1164
    RET                                 ; 005c1165
    PUSH 0x5f1a58                       ; 005c1168 | DAT_005f1a58
        ;   Label: crt_unknown.c_FUN_005c1168
    CALL crt_env.c_getenv_FUN_005bac90  ; 005c116d
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 005c1172
    TEST EAX,EAX                        ; 005c1175
    JZ 0x005c106c                       ; 005c1177
        ;   XREF to: 005c106c (CONDITIONAL_JUMP)  ; LAB_005c106c
    PUSH EAX                            ; 005c117d
    CALL crt_unknown.c_FUN_005c13dc     ; 005c117e
        ;   XREF to: 005c13dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c13dc()
    ADD ESP,0x4                         ; 005c1183
    RET                                 ; 005c1186

