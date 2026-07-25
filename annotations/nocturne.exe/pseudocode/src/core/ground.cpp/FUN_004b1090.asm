; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b1090(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)
;
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x5f]:1  local_5f
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_0058525d
;   TerminatedCString s_eopen_ext_not_found_00585270
;   TerminatedCString s_core_ground_cpp_00585287
;   TerminatedCString s_eopen_Cannot_open_file_0058529a
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1090
        ;   Label: FUN_004b1090
    PUSH ESI                            ; 004b1091
    PUSH EDI                            ; 004b1092
    PUSH EBP                            ; 004b1093
    SUB ESP,0x50                        ; 004b1094
    MOV ESI,dword ptr [ESP + 0x68]      ; 004b1097
    MOV EDI,ESP                         ; 004b109b
    MOV DL,0x2e                         ; 004b109d
    PUSH EDI                            ; 004b109f
    MOV AL,byte ptr [ESI]               ; 004b10a0
        ;   Label: LAB_004b10a0
    MOV byte ptr [EDI],AL               ; 004b10a2
    CMP AL,0x0                          ; 004b10a4
    JZ 0x004b10b8                       ; 004b10a6
        ;   XREF to: 004b10b8 (CONDITIONAL_JUMP)  ; LAB_004b10b8
    MOV AL,byte ptr [ESI + 0x1]         ; 004b10a8
    ADD ESI,0x2                         ; 004b10ab
    MOV byte ptr [EDI + 0x1],AL         ; 004b10ae
    ADD EDI,0x2                         ; 004b10b1
    CMP AL,0x0                          ; 004b10b4
    JNZ 0x004b10a0                      ; 004b10b6
        ;   XREF to: 004b10a0 (CONDITIONAL_JUMP)  ; LAB_004b10a0
    POP EDI                             ; 004b10b8
        ;   Label: LAB_004b10b8
    MOV ESI,ESP                         ; 004b10b9
    MOV AL,byte ptr [ESI]               ; 004b10bb
        ;   Label: LAB_004b10bb
    CMP AL,DL                           ; 004b10bd
    JZ 0x004b10d3                       ; 004b10bf
        ;   XREF to: 004b10d3 (CONDITIONAL_JUMP)  ; LAB_004b10d3
    CMP AL,0x0                          ; 004b10c1
    JZ 0x004b10d1                       ; 004b10c3
        ;   XREF to: 004b10d1 (CONDITIONAL_JUMP)  ; LAB_004b10d1
    INC ESI                             ; 004b10c5
    MOV AL,byte ptr [ESI]               ; 004b10c6
    CMP AL,DL                           ; 004b10c8
    JZ 0x004b10d3                       ; 004b10ca
        ;   XREF to: 004b10d3 (CONDITIONAL_JUMP)  ; LAB_004b10d3
    INC ESI                             ; 004b10cc
    CMP AL,0x0                          ; 004b10cd
    JNZ 0x004b10bb                      ; 004b10cf
        ;   XREF to: 004b10bb (CONDITIONAL_JUMP)  ; LAB_004b10bb
    SUB ESI,ESI                         ; 004b10d1
        ;   Label: LAB_004b10d1
    MOV EDI,ESI                         ; 004b10d3
        ;   Label: LAB_004b10d3
    TEST ESI,ESI                        ; 004b10d5
    JNZ 0x004b10fc                      ; 004b10d7
        ;   XREF to: 004b10fc (CONDITIONAL_JUMP)  ; LAB_004b10fc
    MOV EDX,0x58525d                    ; 004b10d9 | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004b10de
    PUSH 0x585270                       ; 004b10e3 | = "eopen - ext not found!"
    MOV dword ptr [0x01cc4800],EDX      ; 004b10e8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004b10ee | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b10f4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b10f9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004b10fc
        ;   Label: LAB_004b10fc
    INC EDI                             ; 004b1100
    MOV EBX,dword ptr [ESP + 0x70]      ; 004b1101
    PUSH EDI                            ; 004b1105
    MOV AL,byte ptr [ESI]               ; 004b1106
        ;   Label: LAB_004b1106
    MOV byte ptr [EDI],AL               ; 004b1108
    CMP AL,0x0                          ; 004b110a
    JZ 0x004b111e                       ; 004b110c
        ;   XREF to: 004b111e (CONDITIONAL_JUMP)  ; LAB_004b111e
    MOV AL,byte ptr [ESI + 0x1]         ; 004b110e
    ADD ESI,0x2                         ; 004b1111
    MOV byte ptr [EDI + 0x1],AL         ; 004b1114
    ADD EDI,0x2                         ; 004b1117
    CMP AL,0x0                          ; 004b111a
    JNZ 0x004b1106                      ; 004b111c
        ;   XREF to: 004b1106 (CONDITIONAL_JUMP)  ; LAB_004b1106
    POP EDI                             ; 004b111e
        ;   Label: LAB_004b111e
    PUSH EBX                            ; 004b111f
    LEA EAX,[ESP + 0x4]                 ; 004b1120
    PUSH EAX                            ; 004b1124
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004b1125
    PUSH ESI                            ; 004b1129
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004b112a
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004b112f
    MOV ESI,EAX                         ; 004b1132
    TEST EAX,EAX                        ; 004b1134
    JZ 0x004b1142                       ; 004b1136
        ;   XREF to: 004b1142 (CONDITIONAL_JUMP)  ; LAB_004b1142
    MOV EAX,ESI                         ; 004b1138
    ADD ESP,0x50                        ; 004b113a
    POP EBP                             ; 004b113d
    POP EDI                             ; 004b113e
    POP ESI                             ; 004b113f
    POP EBX                             ; 004b1140
    RET                                 ; 004b1141
    MOV EDI,0x585287                    ; 004b1142 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004b1142
    MOV EBP,0x44                        ; 004b1147
    PUSH 0x58529a                       ; 004b114c | = "eopen - Cannot open file"
    MOV dword ptr [0x01cc4800],EDI      ; 004b1151 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004b1157 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b115d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b1162
    MOV EAX,ESI                         ; 004b1165
    ADD ESP,0x50                        ; 004b1167
    POP EBP                             ; 004b116a
    POP EDI                             ; 004b116b
    POP ESI                             ; 004b116c
    POP EBX                             ; 004b116d
    RET                                 ; 004b116e

