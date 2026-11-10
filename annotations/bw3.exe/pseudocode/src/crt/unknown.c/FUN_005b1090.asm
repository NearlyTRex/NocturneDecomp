; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005b1090(char *param_1,undefined4 *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b121c at 005b122e
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005b1238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1090
        ;   Label: crt_unknown.c_FUN_005b1090
    PUSH ESI                            ; 005b1091
    PUSH EDI                            ; 005b1092
    PUSH EBP                            ; 005b1093
    SUB ESP,0xc                         ; 005b1094
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b1097
    MOV EDX,dword ptr [ESP + 0x24]      ; 005b109b
    TEST EDX,EDX                        ; 005b109f
    JZ 0x005b10a9                       ; 005b10a1
        ;   XREF to: 005b10a9 (CONDITIONAL_JUMP)  ; LAB_005b10a9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b10a3
    MOV dword ptr [EDX],EAX             ; 005b10a7
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b10a9
        ;   Label: LAB_005b10a9
    MOV AL,byte ptr [EBX]               ; 005b10ad
        ;   Label: LAB_005b10ad
    INC AL                              ; 005b10af
    AND EAX,0xff                        ; 005b10b1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005b10b6
    JZ 0x005b10c2                       ; 005b10bd
        ;   XREF to: 005b10c2 (CONDITIONAL_JUMP)  ; LAB_005b10c2
    INC EBX                             ; 005b10bf
    JMP 0x005b10ad                      ; 005b10c0
        ;   XREF to: 005b10ad (UNCONDITIONAL_JUMP)  ; LAB_005b10ad
    MOV AL,byte ptr [EBX]               ; 005b10c2
        ;   Label: LAB_005b10c2
    MOV byte ptr [ESP + 0x8],AL         ; 005b10c4
    CMP AL,0x2b                         ; 005b10c8
    JZ 0x005b10d0                       ; 005b10ca
        ;   XREF to: 005b10d0 (CONDITIONAL_JUMP)  ; LAB_005b10d0
    CMP AL,0x2d                         ; 005b10cc
    JNZ 0x005b10d1                      ; 005b10ce
        ;   XREF to: 005b10d1 (CONDITIONAL_JUMP)  ; LAB_005b10d1
    INC EBX                             ; 005b10d0
        ;   Label: LAB_005b10d0
    TEST EDI,EDI                        ; 005b10d1
        ;   Label: LAB_005b10d1
    JNZ 0x005b10ff                      ; 005b10d3
        ;   XREF to: 005b10ff (CONDITIONAL_JUMP)  ; LAB_005b10ff
    CMP byte ptr [EBX],0x30             ; 005b10d5
    JNZ 0x005b10ec                      ; 005b10d8
        ;   XREF to: 005b10ec (CONDITIONAL_JUMP)  ; LAB_005b10ec
    MOV AL,byte ptr [EBX + 0x1]         ; 005b10da
    CMP AL,0x78                         ; 005b10dd
    JZ 0x005b10e5                       ; 005b10df
        ;   XREF to: 005b10e5 (CONDITIONAL_JUMP)  ; LAB_005b10e5
    CMP AL,0x58                         ; 005b10e1
    JNZ 0x005b10ec                      ; 005b10e3
        ;   XREF to: 005b10ec (CONDITIONAL_JUMP)  ; LAB_005b10ec
    MOV EDI,0x10                        ; 005b10e5
        ;   Label: LAB_005b10e5
    JMP 0x005b111f                      ; 005b10ea
        ;   XREF to: 005b111f (UNCONDITIONAL_JUMP)  ; LAB_005b111f
    CMP byte ptr [EBX],0x30             ; 005b10ec
        ;   Label: LAB_005b10ec
    JNZ 0x005b10f8                      ; 005b10ef
        ;   XREF to: 005b10f8 (CONDITIONAL_JUMP)  ; LAB_005b10f8
    MOV EDI,0x8                         ; 005b10f1
    JMP 0x005b1134                      ; 005b10f6
        ;   XREF to: 005b1134 (UNCONDITIONAL_JUMP)  ; LAB_005b1134
    MOV EDI,0xa                         ; 005b10f8
        ;   Label: LAB_005b10f8
    JMP 0x005b1134                      ; 005b10fd
        ;   XREF to: 005b1134 (UNCONDITIONAL_JUMP)  ; LAB_005b1134
    CMP EDI,0x2                         ; 005b10ff
        ;   Label: LAB_005b10ff
    JL 0x005b1109                       ; 005b1102
        ;   XREF to: 005b1109 (CONDITIONAL_JUMP)  ; LAB_005b1109
    CMP EDI,0x24                        ; 005b1104
    JLE 0x005b111a                      ; 005b1107
        ;   XREF to: 005b111a (CONDITIONAL_JUMP)  ; LAB_005b111a
    PUSH 0xd                            ; 005b1109
        ;   Label: LAB_005b1109
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005b110b
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005b1110
    XOR EAX,EAX                         ; 005b1113
    JMP 0x005b11f6                      ; 005b1115
        ;   XREF to: 005b11f6 (UNCONDITIONAL_JUMP)  ; LAB_005b11f6
    CMP EDI,0x10                        ; 005b111a
        ;   Label: LAB_005b111a
    JNZ 0x005b1134                      ; 005b111d
        ;   XREF to: 005b1134 (CONDITIONAL_JUMP)  ; LAB_005b1134
    CMP byte ptr [EBX],0x30             ; 005b111f
        ;   Label: LAB_005b111f
    JNZ 0x005b1134                      ; 005b1122
        ;   XREF to: 005b1134 (CONDITIONAL_JUMP)  ; LAB_005b1134
    MOV CL,byte ptr [EBX + 0x1]         ; 005b1124
    CMP CL,0x78                         ; 005b1127
    JZ 0x005b1131                       ; 005b112a
        ;   XREF to: 005b1131 (CONDITIONAL_JUMP)  ; LAB_005b1131
    CMP CL,0x58                         ; 005b112c
    JNZ 0x005b1134                      ; 005b112f
        ;   XREF to: 005b1134 (CONDITIONAL_JUMP)  ; LAB_005b1134
    ADD EBX,0x2                         ; 005b1131
        ;   Label: LAB_005b1131
    MOV dword ptr [ESP],EBX             ; 005b1134
        ;   Label: LAB_005b1134
    LEA EBP,[EDI*0x4 + 0x0]             ; 005b1137
    XOR AL,AL                           ; 005b113e
    XOR ESI,ESI                         ; 005b1140
    MOV byte ptr [ESP + 0x4],AL         ; 005b1142
    XOR EAX,EAX                         ; 005b1146
        ;   Label: LAB_005b1146
    MOV AL,byte ptr [EBX]               ; 005b1148
    PUSH EAX                            ; 005b114a
    CALL crt_unknown.c_FUN_005b1238     ; 005b114b
        ;   XREF to: 005b1238 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1238()
    ADD ESP,0x4                         ; 005b1150
    MOV EDX,EAX                         ; 005b1153
    CMP EAX,EDI                         ; 005b1155
    JGE 0x005b1179                      ; 005b1157
        ;   XREF to: 005b1179 (CONDITIONAL_JUMP)  ; LAB_005b1179
    CMP ESI,dword ptr [EBP + 0x607f18]  ; 005b1159
    JBE 0x005b1166                      ; 005b115f
        ;   XREF to: 005b1166 (CONDITIONAL_JUMP)  ; LAB_005b1166
    MOV byte ptr [ESP + 0x4],0x1        ; 005b1161
    MOV EAX,ESI                         ; 005b1166
        ;   Label: LAB_005b1166
    IMUL ESI,EDI                        ; 005b1168
    ADD ESI,EDX                         ; 005b116b
    CMP ESI,EAX                         ; 005b116d
    JNC 0x005b1176                      ; 005b116f
        ;   XREF to: 005b1176 (CONDITIONAL_JUMP)  ; LAB_005b1176
    MOV byte ptr [ESP + 0x4],0x1        ; 005b1171
    INC EBX                             ; 005b1176
        ;   Label: LAB_005b1176
    JMP 0x005b1146                      ; 005b1177
        ;   XREF to: 005b1146 (UNCONDITIONAL_JUMP)  ; LAB_005b1146
    CMP EBX,dword ptr [ESP]             ; 005b1179
        ;   Label: LAB_005b1179
    JNZ 0x005b1182                      ; 005b117c
        ;   XREF to: 005b1182 (CONDITIONAL_JUMP)  ; LAB_005b1182
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b117e
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b1182
        ;   Label: LAB_005b1182
    TEST EBP,EBP                        ; 005b1186
    JZ 0x005b118d                       ; 005b1188
        ;   XREF to: 005b118d (CONDITIONAL_JUMP)  ; LAB_005b118d
    MOV dword ptr [EBP],EBX             ; 005b118a
    CMP dword ptr [ESP + 0x2c],0x1      ; 005b118d
        ;   Label: LAB_005b118d
    JNZ 0x005b11a5                      ; 005b1192
        ;   XREF to: 005b11a5 (CONDITIONAL_JUMP)  ; LAB_005b11a5
    CMP ESI,0x80000000                  ; 005b1194
    JC 0x005b11a5                       ; 005b119a
        ;   XREF to: 005b11a5 (CONDITIONAL_JUMP)  ; LAB_005b11a5
    JNZ 0x005b11ac                      ; 005b119c
        ;   XREF to: 005b11ac (CONDITIONAL_JUMP)  ; LAB_005b11ac
    CMP byte ptr [ESP + 0x8],0x2d       ; 005b119e
    JNZ 0x005b11ac                      ; 005b11a3
        ;   XREF to: 005b11ac (CONDITIONAL_JUMP)  ; LAB_005b11ac
    CMP byte ptr [ESP + 0x4],0x0        ; 005b11a5
        ;   Label: LAB_005b11a5
    JZ 0x005b11eb                       ; 005b11aa
        ;   XREF to: 005b11eb (CONDITIONAL_JUMP)  ; LAB_005b11eb
    PUSH 0xe                            ; 005b11ac
        ;   Label: LAB_005b11ac
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005b11ae
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005b11b3
    CMP dword ptr [ESP + 0x2c],0x0      ; 005b11b6
    JNZ 0x005b11ca                      ; 005b11bb
        ;   XREF to: 005b11ca (CONDITIONAL_JUMP)  ; LAB_005b11ca
    MOV EAX,0xffffffff                  ; 005b11bd
    ADD ESP,0xc                         ; 005b11c2
    POP EBP                             ; 005b11c5
    POP EDI                             ; 005b11c6
    POP ESI                             ; 005b11c7
    POP EBX                             ; 005b11c8
    RET                                 ; 005b11c9
    CMP byte ptr [ESP + 0x8],0x2d       ; 005b11ca
        ;   Label: LAB_005b11ca
    JNZ 0x005b11de                      ; 005b11cf
        ;   XREF to: 005b11de (CONDITIONAL_JUMP)  ; LAB_005b11de
    MOV EAX,0x80000000                  ; 005b11d1
    ADD ESP,0xc                         ; 005b11d6
    POP EBP                             ; 005b11d9
    POP EDI                             ; 005b11da
    POP ESI                             ; 005b11db
    POP EBX                             ; 005b11dc
    RET                                 ; 005b11dd
    MOV EAX,0x7fffffff                  ; 005b11de
        ;   Label: LAB_005b11de
    ADD ESP,0xc                         ; 005b11e3
    POP EBP                             ; 005b11e6
    POP EDI                             ; 005b11e7
    POP ESI                             ; 005b11e8
    POP EBX                             ; 005b11e9
    RET                                 ; 005b11ea
    CMP byte ptr [ESP + 0x8],0x2d       ; 005b11eb
        ;   Label: LAB_005b11eb
    JNZ 0x005b11f4                      ; 005b11f0
        ;   XREF to: 005b11f4 (CONDITIONAL_JUMP)  ; LAB_005b11f4
    NEG ESI                             ; 005b11f2
    MOV EAX,ESI                         ; 005b11f4
        ;   Label: LAB_005b11f4
    ADD ESP,0xc                         ; 005b11f6
        ;   Label: LAB_005b11f6
    POP EBP                             ; 005b11f9
    POP EDI                             ; 005b11fa
    POP ESI                             ; 005b11fb
    POP EBX                             ; 005b11fc
    RET                                 ; 005b11fd

