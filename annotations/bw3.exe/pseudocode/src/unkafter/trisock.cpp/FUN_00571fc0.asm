; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_trisock_cpp_FUN_00571fc0(undefined4 *param_1,char *param_2)
;
;
; XREF[2]:
;   unkafter_trisock.cpp_FUN_00572190 at 00572204
;   unkafter_trisock.cpp_FUN_00572220 at 00572277
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_string.c__strncpy_FUN_005a4ee0
;   support_trisock.cpp_buildIPAddress_FUN_0056f630
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00571fc0
        ;   Label: unkafter_trisock.cpp_FUN_00571fc0
    SUB ESP,0x18                        ; 00571fc1
    PUSH 0x2b8                          ; 00571fc4
    PUSH 0x0                            ; 00571fc9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00571fcb
    PUSH EDX                            ; 00571fcf
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00571fd0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00571fd5
    MOV ECX,dword ptr [ESP + 0x20]      ; 00571fd8
    TEST ECX,ECX                        ; 00571fdc
    JNZ 0x00571fe7                      ; 00571fde
        ;   XREF to: 00571fe7 (CONDITIONAL_JUMP)  ; LAB_00571fe7
    XOR EAX,EAX                         ; 00571fe0
    ADD ESP,0x18                        ; 00571fe2
    POP EBP                             ; 00571fe5
    RET                                 ; 00571fe6
    PUSH EDI                            ; 00571fe7
        ;   Label: LAB_00571fe7
    PUSH ESI                            ; 00571fe8
    PUSH EBX                            ; 00571fe9
    PUSH 0x7f                           ; 00571fea
    MOV EBX,dword ptr [ECX]             ; 00571fec
    PUSH EBX                            ; 00571fee
    MOV ESI,dword ptr [ESP + 0x38]      ; 00571fef
    PUSH ESI                            ; 00571ff3
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 00571ff4
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00571ff9
    LEA EAX,[ESI + 0x84]                ; 00571ffc
    XOR EDI,EDI                         ; 00572002
    MOV dword ptr [ESP + 0x10],EAX      ; 00572004
    MOV dword ptr [ESP + 0x18],EDI      ; 00572008
    MOV dword ptr [ESP + 0x20],EAX      ; 0057200c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00572010
        ;   Label: LAB_00572010
    MOV EDX,dword ptr [ESP + 0x18]      ; 00572014
    MOV EAX,dword ptr [EAX + 0x4]       ; 00572018
    ADD EAX,EDX                         ; 0057201b
    MOV EAX,dword ptr [EAX]             ; 0057201d
    TEST EAX,EAX                        ; 0057201f
    JNZ 0x00572092                      ; 00572021
        ;   XREF to: 00572092 (CONDITIONAL_JUMP)  ; LAB_00572092
    MOV EAX,dword ptr [ESP + 0x30]      ; 00572023
        ;   Label: LAB_00572023
    MOV dword ptr [EAX + 0x80],EDI      ; 00572027
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0057202d
    CMP word ptr [EAX + 0x8],0x2        ; 00572031
    JNZ 0x00572077                      ; 00572036
        ;   XREF to: 00572077 (CONDITIONAL_JUMP)  ; LAB_00572077
    CMP word ptr [EAX + 0xa],0x4        ; 00572038
    JNZ 0x00572077                      ; 0057203d
        ;   XREF to: 00572077 (CONDITIONAL_JUMP)  ; LAB_00572077
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057203f
    XOR EDI,EDI                         ; 00572043
    ADD EAX,0x288                       ; 00572045
    MOV dword ptr [ESP + 0x1c],EDI      ; 0057204a
    MOV dword ptr [ESP + 0xc],EAX       ; 0057204e
    MOV dword ptr [ESP + 0x14],EAX      ; 00572052
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00572056
        ;   Label: LAB_00572056
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057205a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0057205e
    ADD EAX,EBX                         ; 00572061
    MOV EAX,dword ptr [EAX]             ; 00572063
    TEST EAX,EAX                        ; 00572065
    JNZ 0x0057210f                      ; 00572067
        ;   XREF to: 0057210f (CONDITIONAL_JUMP)  ; LAB_0057210f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057206d
        ;   Label: LAB_0057206d
    MOV dword ptr [EAX + 0x284],EDI     ; 00572071
    MOV EAX,dword ptr [ESP + 0x30]      ; 00572077
        ;   Label: LAB_00572077
    CMP dword ptr [EAX + 0x284],0x0     ; 0057207b
    SETG AL                             ; 00572082
    AND EAX,0xff                        ; 00572085
    POP EBX                             ; 0057208a
    POP ESI                             ; 0057208b
    POP EDI                             ; 0057208c
    ADD ESP,0x18                        ; 0057208d
    POP EBP                             ; 00572090
    RET                                 ; 00572091
    PUSH 0x7f                           ; 00572092
        ;   Label: LAB_00572092
    PUSH EAX                            ; 00572094
    MOV EBP,dword ptr [ESP + 0x28]      ; 00572095
    LEA ECX,[EDX + 0x4]                 ; 00572099
    PUSH EBP                            ; 0057209c
    MOV dword ptr [ESP + 0x24],ECX      ; 0057209d
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 005720a1
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005720a6
    MOV ESI,dword ptr [ESP + 0x30]      ; 005720a9
    PUSH ESI                            ; 005720ad
    PUSH EBP                            ; 005720ae
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005720af
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005720b4
    TEST EAX,EAX                        ; 005720b7
    JNZ 0x005720c9                      ; 005720b9
        ;   XREF to: 005720c9 (CONDITIONAL_JUMP)  ; LAB_005720c9
    CMP EDI,0x4                         ; 005720bb
        ;   Label: LAB_005720bb
    JL 0x00572010                       ; 005720be
        ;   XREF to: 00572010 (CONDITIONAL_JUMP)  ; LAB_00572010
    JMP 0x00572023                      ; 005720c4
        ;   XREF to: 00572023 (UNCONDITIONAL_JUMP)  ; LAB_00572023
    XOR EBX,EBX                         ; 005720c9
        ;   Label: LAB_005720c9
    TEST EDI,EDI                        ; 005720cb
    JLE 0x005720e1                      ; 005720cd
        ;   XREF to: 005720e1 (CONDITIONAL_JUMP)  ; LAB_005720e1
    MOV ESI,dword ptr [ESP + 0x10]      ; 005720cf
    PUSH ESI                            ; 005720d3
        ;   Label: LAB_005720d3
    PUSH EBP                            ; 005720d4
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005720d5
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005720da
    TEST EAX,EAX                        ; 005720dd
    JNZ 0x00572102                      ; 005720df
        ;   XREF to: 00572102 (CONDITIONAL_JUMP)  ; LAB_00572102
    CMP EBX,EDI                         ; 005720e1
        ;   Label: LAB_005720e1
    JL 0x005720bb                       ; 005720e3
        ;   XREF to: 005720bb (CONDITIONAL_JUMP)  ; LAB_005720bb
    MOV EDX,dword ptr [ESP + 0x20]      ; 005720e5
    ADD EDX,0x80                        ; 005720e9
    INC EDI                             ; 005720ef
    MOV dword ptr [ESP + 0x20],EDX      ; 005720f0
    CMP EDI,0x4                         ; 005720f4
    JL 0x00572010                       ; 005720f7
        ;   XREF to: 00572010 (CONDITIONAL_JUMP)  ; LAB_00572010
    JMP 0x00572023                      ; 005720fd
        ;   XREF to: 00572023 (UNCONDITIONAL_JUMP)  ; LAB_00572023
    INC EBX                             ; 00572102
        ;   Label: LAB_00572102
    ADD ESI,0x80                        ; 00572103
    CMP EBX,EDI                         ; 00572109
    JL 0x005720d3                       ; 0057210b
        ;   XREF to: 005720d3 (CONDITIONAL_JUMP)  ; LAB_005720d3
    JMP 0x005720e1                      ; 0057210d
        ;   XREF to: 005720e1 (UNCONDITIONAL_JUMP)  ; LAB_005720e1
    XOR EBX,EBX                         ; 0057210f
        ;   Label: LAB_0057210f
    MOV BL,byte ptr [EAX + 0x3]         ; 00572111
    PUSH EBX                            ; 00572114
    XOR EBX,EBX                         ; 00572115
    MOV BL,byte ptr [EAX + 0x2]         ; 00572117
    PUSH EBX                            ; 0057211a
    XOR EBX,EBX                         ; 0057211b
    MOV BL,byte ptr [EAX + 0x1]         ; 0057211d
    PUSH EBX                            ; 00572120
    MOV AL,byte ptr [EAX]               ; 00572121
    MOV ESI,dword ptr [ESP + 0x28]      ; 00572123
    AND EAX,0xff                        ; 00572127
    LEA EBP,[EDI*0x4 + 0x0]             ; 0057212c
    PUSH EAX                            ; 00572133
    MOV EAX,dword ptr [ESP + 0x24]      ; 00572134
    ADD ESI,0x4                         ; 00572138
    PUSH EAX                            ; 0057213b
    XOR EBX,EBX                         ; 0057213c
    MOV dword ptr [ESP + 0x30],ESI      ; 0057213e
    CALL support_trisock.cpp_buildIPAddress_FUN_0056f630 ; 00572142
        ;   XREF to: 0056f630 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_0056f630()
    ADD ESP,0x14                        ; 00572147
    TEST EDI,EDI                        ; 0057214a
    JLE 0x00572163                      ; 0057214c
        ;   XREF to: 00572163 (CONDITIONAL_JUMP)  ; LAB_00572163
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057214e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00572152
    ADD EBP,EDX                         ; 00572156
    MOV ECX,dword ptr [EBP]             ; 00572158
        ;   Label: LAB_00572158
    CMP ECX,dword ptr [EAX + 0x288]     ; 0057215b
    JNZ 0x00572181                      ; 00572161
        ;   XREF to: 00572181 (CONDITIONAL_JUMP)  ; LAB_00572181
    CMP EBX,EDI                         ; 00572163
        ;   Label: LAB_00572163
    JL 0x00572173                       ; 00572165
        ;   XREF to: 00572173 (CONDITIONAL_JUMP)  ; LAB_00572173
    MOV EBX,dword ptr [ESP + 0x14]      ; 00572167
    ADD EBX,0x4                         ; 0057216b
    INC EDI                             ; 0057216e
    MOV dword ptr [ESP + 0x14],EBX      ; 0057216f
    CMP EDI,0xc                         ; 00572173
        ;   Label: LAB_00572173
    JL 0x00572056                       ; 00572176
        ;   XREF to: 00572056 (CONDITIONAL_JUMP)  ; LAB_00572056
    JMP 0x0057206d                      ; 0057217c
        ;   XREF to: 0057206d (UNCONDITIONAL_JUMP)  ; LAB_0057206d
    INC EBX                             ; 00572181
        ;   Label: LAB_00572181
    ADD EAX,0x4                         ; 00572182
    CMP EBX,EDI                         ; 00572185
    JL 0x00572158                       ; 00572187
        ;   XREF to: 00572158 (CONDITIONAL_JUMP)  ; LAB_00572158
    JMP 0x00572163                      ; 00572189
        ;   XREF to: 00572163 (UNCONDITIONAL_JUMP)  ; LAB_00572163

