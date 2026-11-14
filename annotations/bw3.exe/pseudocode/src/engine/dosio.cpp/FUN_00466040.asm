; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00466040(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00482ea0 at 00482ed4
;
; Called Functions:
;   engine_dosio.cpp_FUN_00465eb0
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466040
        ;   Label: engine_dosio.cpp_FUN_00466040
    PUSH ESI                            ; 00466041
    PUSH EDI                            ; 00466042
    SUB ESP,0x508                       ; 00466043
    MOV EDI,dword ptr [ESP + 0x51c]     ; 00466049
    MOV EBX,dword ptr [ESP + 0x520]     ; 00466050
    LEA ESI,[ESP + 0x200]               ; 00466057
    PUSH ESI                            ; 0046605e
    LEA ESI,[ESP + 0x304]               ; 0046605f
    PUSH ESI                            ; 00466066
    LEA ESI,[ESP + 0x408]               ; 00466067
    PUSH ESI                            ; 0046606e
    LEA ESI,[ESP + 0x50c]               ; 0046606f
    PUSH ESI                            ; 00466076
    PUSH EDI                            ; 00466077
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00466078
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0046607d
    CMP byte ptr [ESP + 0x500],0x0      ; 00466080
    JNZ 0x0046614f                      ; 00466088
        ;   XREF to: 0046614f (CONDITIONAL_JUMP)  ; LAB_0046614f
    MOV DL,byte ptr [ESP + 0x400]       ; 0046608e
    CMP DL,0x5c                         ; 00466095
    JNZ 0x00466141                      ; 00466098
        ;   XREF to: 00466141 (CONDITIONAL_JUMP)  ; LAB_00466141
    MOV CL,byte ptr [ESP + 0x401]       ; 0046609e
        ;   Label: LAB_0046609e
    CMP CL,0x5c                         ; 004660a5
    JZ 0x0046614f                       ; 004660a8
        ;   XREF to: 0046614f (CONDITIONAL_JUMP)  ; LAB_0046614f
    CMP CL,0x2f                         ; 004660ae
    JZ 0x0046614f                       ; 004660b1
        ;   XREF to: 0046614f (CONDITIONAL_JUMP)  ; LAB_0046614f
    MOV ESI,ESP                         ; 004660b7
        ;   Label: LAB_004660b7
    PUSH ESI                            ; 004660b9
    LEA ESI,[ESP + 0x508]               ; 004660ba
    PUSH ESI                            ; 004660c1
    MOV EDX,dword ptr [ESP + 0x520]     ; 004660c2
    PUSH EDX                            ; 004660c9
    CALL engine_dosio.cpp_FUN_00465eb0  ; 004660ca
        ;   XREF to: 00465eb0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465eb0(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004660cf
    MOV AL,byte ptr [ESP + 0x400]       ; 004660d2
    CMP AL,0x2f                         ; 004660d9
    JNZ 0x00466177                      ; 004660db
        ;   XREF to: 00466177 (CONDITIONAL_JUMP)  ; LAB_00466177
    XOR DL,DL                           ; 004660e1
        ;   Label: LAB_004660e1
    MOV byte ptr [ESP],DL               ; 004660e3
    LEA ESI,[ESP + 0x400]               ; 004660e6
        ;   Label: LAB_004660e6
    MOV EDI,ESP                         ; 004660ed
    PUSH EDI                            ; 004660ef
    SUB ECX,ECX                         ; 004660f0
    DEC ECX                             ; 004660f2
    MOV AL,0x0                          ; 004660f3
    SCASB.REPNE ES:EDI                  ; 004660f5
    DEC EDI                             ; 004660f7
    MOV AL,byte ptr [ESI]               ; 004660f8
        ;   Label: LAB_004660f8
    MOV byte ptr [EDI],AL               ; 004660fa
    CMP AL,0x0                          ; 004660fc
    JZ 0x00466110                       ; 004660fe
        ;   XREF to: 00466110 (CONDITIONAL_JUMP)  ; LAB_00466110
    MOV AL,byte ptr [ESI + 0x1]         ; 00466100
    ADD ESI,0x2                         ; 00466103
    MOV byte ptr [EDI + 0x1],AL         ; 00466106
    ADD EDI,0x2                         ; 00466109
    CMP AL,0x0                          ; 0046610c
    JNZ 0x004660f8                      ; 0046610e
        ;   XREF to: 004660f8 (CONDITIONAL_JUMP)  ; LAB_004660f8
    POP EDI                             ; 00466110
        ;   Label: LAB_00466110
    LEA ESI,[ESP + 0x200]               ; 00466111
    PUSH ESI                            ; 00466118
    LEA ESI,[ESP + 0x304]               ; 00466119
    PUSH ESI                            ; 00466120
    LEA ESI,[ESP + 0x8]                 ; 00466121
    PUSH ESI                            ; 00466125
    LEA ESI,[ESP + 0x510]               ; 00466126
    PUSH ESI                            ; 0046612d
    PUSH EBX                            ; 0046612e
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 0046612f
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00466134
    ADD ESP,0x508                       ; 00466137
    POP EDI                             ; 0046613d
    POP ESI                             ; 0046613e
    POP EBX                             ; 0046613f
    RET                                 ; 00466140
    CMP DL,0x2f                         ; 00466141
        ;   Label: LAB_00466141
    JZ 0x0046609e                       ; 00466144
        ;   XREF to: 0046609e (CONDITIONAL_JUMP)  ; LAB_0046609e
    JMP 0x004660b7                      ; 0046614a
        ;   XREF to: 004660b7 (UNCONDITIONAL_JUMP)  ; LAB_004660b7
    MOV ESI,EDI                         ; 0046614f
        ;   Label: LAB_0046614f
    MOV EDI,EBX                         ; 00466151
    PUSH EDI                            ; 00466153
    MOV AL,byte ptr [ESI]               ; 00466154
        ;   Label: LAB_00466154
    MOV byte ptr [EDI],AL               ; 00466156
    CMP AL,0x0                          ; 00466158
    JZ 0x0046616c                       ; 0046615a
        ;   XREF to: 0046616c (CONDITIONAL_JUMP)  ; LAB_0046616c
    MOV AL,byte ptr [ESI + 0x1]         ; 0046615c
    ADD ESI,0x2                         ; 0046615f
    MOV byte ptr [EDI + 0x1],AL         ; 00466162
    ADD EDI,0x2                         ; 00466165
    CMP AL,0x0                          ; 00466168
    JNZ 0x00466154                      ; 0046616a
        ;   XREF to: 00466154 (CONDITIONAL_JUMP)  ; LAB_00466154
    POP EDI                             ; 0046616c
        ;   Label: LAB_0046616c
    ADD ESP,0x508                       ; 0046616d
    POP EDI                             ; 00466173
    POP ESI                             ; 00466174
    POP EBX                             ; 00466175
    RET                                 ; 00466176
    CMP AL,0x5c                         ; 00466177
        ;   Label: LAB_00466177
    JZ 0x004660e1                       ; 00466179
        ;   XREF to: 004660e1 (CONDITIONAL_JUMP)  ; LAB_004660e1
    JMP 0x004660e6                      ; 0046617f
        ;   XREF to: 004660e6 (UNCONDITIONAL_JUMP)  ; LAB_004660e6

