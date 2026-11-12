; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dimage_cpp_FUN_0044902e(CDemonImage *param_1,CDemonImage *param_2,SIZE_T param_3,int param_4,SIZE_T param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_allocMemory_FUN_00448f40
;   core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0044902e
        ;   Label: core_dimage.cpp_FUN_0044902e
    PUSH EBX                            ; 00449030
    PUSH ESI                            ; 00449031
    PUSH EDI                            ; 00449032
    PUSH EBP                            ; 00449033
    SUB ESP,0x10c                       ; 00449034
    MOV ESI,dword ptr [ESP + 0x124]     ; 0044903a
    MOV EBP,dword ptr [ESP + 0x128]     ; 00449041
    MOV EDI,ESP                         ; 00449048
    PUSH EDI                            ; 0044904a
    MOV AL,byte ptr [ESI]               ; 0044904b
        ;   Label: LAB_0044904b
    MOV byte ptr [EDI],AL               ; 0044904d
    CMP AL,0x0                          ; 0044904f
    JZ 0x00449063                       ; 00449051
        ;   XREF to: 00449063 (CONDITIONAL_JUMP)  ; LAB_00449063
    MOV AL,byte ptr [ESI + 0x1]         ; 00449053
    ADD ESI,0x2                         ; 00449056
    MOV byte ptr [EDI + 0x1],AL         ; 00449059
    ADD EDI,0x2                         ; 0044905c
    CMP AL,0x0                          ; 0044905f
    JNZ 0x0044904b                      ; 00449061
        ;   XREF to: 0044904b (CONDITIONAL_JUMP)  ; LAB_0044904b
    POP EDI                             ; 00449063
        ;   Label: LAB_00449063
    PUSH 0x5cf05f                       ; 00449064
    LEA EAX,[ESP + 0x4]                 ; 00449069
    PUSH EAX                            ; 0044906d
    PUSH 0x5cf062                       ; 0044906e
    CALL engine_dosio.cpp_FUN_00460c70  ; 00449073
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00449078
    MOV EBX,EAX                         ; 0044907b
    TEST EAX,EAX                        ; 0044907d
    JZ 0x00449223                       ; 0044907f
        ;   XREF to: 00449223 (CONDITIONAL_JUMP)  ; LAB_00449223
    MOV EAX,dword ptr [ESP + 0x120]     ; 00449085
        ;   Label: LAB_00449085
    MOV ESI,dword ptr [ESP + 0x120]     ; 0044908c
    MOV dword ptr [EAX + 0x304],EBP     ; 00449093
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00449099
    PUSH ESI                            ; 004490a0
    MOV dword ptr [ESI + 0x308],EAX     ; 004490a1
    CALL core_dimage.cpp_CDemonImage_allocMemory_FUN_00448f40 ; 004490a7
        ;   XREF to: 00448f40 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_allocMemory_FUN_00448f40(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 004490ac
    PUSH EBX                            ; 004490af
    MOV EDI,dword ptr [ESP + 0x130]     ; 004490b0
    PUSH EDI                            ; 004490b7
    PUSH EBP                            ; 004490b8
    MOV EBP,dword ptr [ESI + 0x300]     ; 004490b9
    PUSH EBP                            ; 004490bf
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004490c0
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004490c5
    PUSH EBX                            ; 004490c8
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004490c9
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004490ce
    MOV ESI,ESP                         ; 004490d1
    MOV DL,0x2e                         ; 004490d3
    MOV AL,byte ptr [ESI]               ; 004490d5
        ;   Label: LAB_004490d5
    CMP AL,DL                           ; 004490d7
    JZ 0x004490ed                       ; 004490d9
        ;   XREF to: 004490ed (CONDITIONAL_JUMP)  ; LAB_004490ed
    CMP AL,0x0                          ; 004490db
    JZ 0x004490eb                       ; 004490dd
        ;   XREF to: 004490eb (CONDITIONAL_JUMP)  ; LAB_004490eb
    INC ESI                             ; 004490df
    MOV AL,byte ptr [ESI]               ; 004490e0
    CMP AL,DL                           ; 004490e2
    JZ 0x004490ed                       ; 004490e4
        ;   XREF to: 004490ed (CONDITIONAL_JUMP)  ; LAB_004490ed
    INC ESI                             ; 004490e6
    CMP AL,0x0                          ; 004490e7
    JNZ 0x004490d5                      ; 004490e9
        ;   XREF to: 004490d5 (CONDITIONAL_JUMP)  ; LAB_004490d5
    SUB ESI,ESI                         ; 004490eb
        ;   Label: LAB_004490eb
    MOV EDI,ESI                         ; 004490ed
        ;   Label: LAB_004490ed
    TEST ESI,ESI                        ; 004490ef
    JNZ 0x00449115                      ; 004490f1
        ;   XREF to: 00449115 (CONDITIONAL_JUMP)  ; LAB_00449115
    MOV EAX,0x5cf0a3                    ; 004490f3
    MOV EDX,0x7b                        ; 004490f8
    PUSH 0x5cf0b6                       ; 004490fd
    MOV [0x01d046a0],EAX                ; 00449102 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00449107 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044910d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00449112
    MOV ESI,0x5cf0e4                    ; 00449115
        ;   Label: LAB_00449115
    PUSH EDI                            ; 0044911a
    MOV AL,byte ptr [ESI]               ; 0044911b
        ;   Label: LAB_0044911b
    MOV byte ptr [EDI],AL               ; 0044911d
    CMP AL,0x0                          ; 0044911f
    JZ 0x00449133                       ; 00449121
        ;   XREF to: 00449133 (CONDITIONAL_JUMP)  ; LAB_00449133
    MOV AL,byte ptr [ESI + 0x1]         ; 00449123
    ADD ESI,0x2                         ; 00449126
    MOV byte ptr [EDI + 0x1],AL         ; 00449129
    ADD EDI,0x2                         ; 0044912c
    CMP AL,0x0                          ; 0044912f
    JNZ 0x0044911b                      ; 00449131
        ;   XREF to: 0044911b (CONDITIONAL_JUMP)  ; LAB_0044911b
    POP EDI                             ; 00449133
        ;   Label: LAB_00449133
    PUSH 0x5cf0e9                       ; 00449134
    LEA EAX,[ESP + 0x4]                 ; 00449139
    PUSH EAX                            ; 0044913d
    PUSH 0x5cf0ec                       ; 0044913e
    CALL engine_dosio.cpp_FUN_00460c70  ; 00449143
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00449148
    MOV EBX,EAX                         ; 0044914b
    TEST EAX,EAX                        ; 0044914d
    JZ 0x0044924b                       ; 0044914f
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    PUSH EBX                            ; 00449155
        ;   Label: LAB_00449155
    PUSH 0x3                            ; 00449156
    MOV EAX,dword ptr [ESP + 0x128]     ; 00449158
    PUSH 0x100                          ; 0044915f
    ADD EAX,0x30c                       ; 00449164
    PUSH EAX                            ; 00449169
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044916a
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044916f
    PUSH EBX                            ; 00449172
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00449173
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00449178
    MOV EDI,dword ptr [ESP + 0x120]     ; 0044917b
    MOV ESI,EDI                         ; 00449182
    MOV EBX,EDI                         ; 00449184
    LEA EAX,[EDI + 0x200]               ; 00449186
    MOV dword ptr [ESP + 0x108],EAX     ; 0044918c
    XOR EAX,EAX                         ; 00449193
        ;   Label: LAB_00449193
    MOV AL,byte ptr [EBX + 0x30c]       ; 00449195
    MOV dword ptr [ESP + 0x100],EAX     ; 0044919b
    XOR EAX,EAX                         ; 004491a2
    MOV AL,byte ptr [EBX + 0x30e]       ; 004491a4
    PUSH EAX                            ; 004491aa
    MOVZX EBP,byte ptr [EBX + 0x30d]    ; 004491ab
    PUSH EBP                            ; 004491b2
    MOV EDX,dword ptr [ESP + 0x108]     ; 004491b3
    PUSH EDX                            ; 004491ba
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004491bb
    PUSH ECX                            ; 004491c2
    MOV dword ptr [ESP + 0x114],EAX     ; 004491c3
    CALL core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0 ; 004491ca
        ;   XREF to: 00448fd0 (UNCONDITIONAL_CALL)  ; ushort core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage * this_ptr, uint red, uint green, uint blue)
    ADD ESP,0x10                        ; 004491cf
    MOV word ptr [ESI + 0x100],AX       ; 004491d2
    MOV EAX,dword ptr [ESP + 0x100]     ; 004491d9
    SHR EBP,0x3                         ; 004491e0
    SHR EAX,0x3                         ; 004491e3
    SHL EBP,0x5                         ; 004491e6
    SHL EAX,0xa                         ; 004491e9
    INC EDI                             ; 004491ec
    ADD EBP,EAX                         ; 004491ed
    MOV EAX,dword ptr [ESP + 0x104]     ; 004491ef
    ADD ESI,0x2                         ; 004491f6
    SHR EAX,0x3                         ; 004491f9
    ADD EBX,0x3                         ; 004491fc
    MOV AL,byte ptr [EAX + EBP*0x1 + 0x1c2c910] ; 004491ff
    MOV EBP,dword ptr [ESP + 0x108]     ; 00449206
    MOV byte ptr [EDI + -0x1],AL        ; 0044920d
    CMP ESI,EBP                         ; 00449210
    JNZ 0x00449193                      ; 00449212
        ;   XREF to: 00449193 (CONDITIONAL_JUMP)  ; LAB_00449193
    ADD ESP,0x10c                       ; 00449218
    POP EBP                             ; 0044921e
    POP EDI                             ; 0044921f
    POP ESI                             ; 00449220
    POP EBX                             ; 00449221
    RET                                 ; 00449222
    MOV EDX,0x5cf066                    ; 00449223
        ;   Label: LAB_00449223
    MOV ECX,0x68                        ; 00449228
    PUSH 0x5cf079                       ; 0044922d
    MOV dword ptr [0x01d046a0],EDX      ; 00449232 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00449238 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044923e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00449243
    JMP 0x00449085                      ; 00449246
        ;   XREF to: 00449085 (UNCONDITIONAL_JUMP)  ; LAB_00449085
    MOV ECX,0x5cf0f0                    ; 0044924b
        ;   Label: LAB_0044924b
    MOV ESI,0x7f                        ; 00449250
    PUSH 0x5cf103                       ; 00449255
    MOV dword ptr [0x01d046a0],ECX      ; 0044925a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00449260 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00449266
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044926b
    JMP 0x00449155                      ; 0044926e
        ;   XREF to: 00449155 (UNCONDITIONAL_JUMP)  ; LAB_00449155

