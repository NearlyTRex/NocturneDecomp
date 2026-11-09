; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_trisock_cpp_FUN_0059efd0(undefined4 *param_1,char *param_2)
;
;
; XREF[2]:
;   unkafter_trisock.cpp_FUN_0059f1a0 at 0059f214
;   unkafter_trisock.cpp_FUN_0059f230 at 0059f287
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_string.c__strncpy_FUN_005c20d0
;   support_trisock.cpp_buildIPAddress_FUN_0059c640
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0059efd0
        ;   Label: unkafter_trisock.cpp_FUN_0059efd0
    SUB ESP,0x18                        ; 0059efd1
    PUSH 0x2b8                          ; 0059efd4
    PUSH 0x0                            ; 0059efd9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0059efdb
    PUSH EDX                            ; 0059efdf
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059efe0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059efe5
    MOV ECX,dword ptr [ESP + 0x20]      ; 0059efe8
    TEST ECX,ECX                        ; 0059efec
    JNZ 0x0059eff7                      ; 0059efee
        ;   XREF to: 0059eff7 (CONDITIONAL_JUMP)  ; LAB_0059eff7
    XOR EAX,EAX                         ; 0059eff0
    ADD ESP,0x18                        ; 0059eff2
    POP EBP                             ; 0059eff5
    RET                                 ; 0059eff6
    PUSH EDI                            ; 0059eff7
        ;   Label: LAB_0059eff7
    PUSH ESI                            ; 0059eff8
    PUSH EBX                            ; 0059eff9
    PUSH 0x7f                           ; 0059effa
    MOV EBX,dword ptr [ECX]             ; 0059effc
    PUSH EBX                            ; 0059effe
    MOV ESI,dword ptr [ESP + 0x38]      ; 0059efff
    PUSH ESI                            ; 0059f003
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 0059f004
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0059f009
    LEA EAX,[ESI + 0x84]                ; 0059f00c
    XOR EDI,EDI                         ; 0059f012
    MOV dword ptr [ESP + 0x10],EAX      ; 0059f014
    MOV dword ptr [ESP + 0x18],EDI      ; 0059f018
    MOV dword ptr [ESP + 0x20],EAX      ; 0059f01c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059f020
        ;   Label: LAB_0059f020
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059f024
    MOV EAX,dword ptr [EAX + 0x4]       ; 0059f028
    ADD EAX,EDX                         ; 0059f02b
    MOV EAX,dword ptr [EAX]             ; 0059f02d
    TEST EAX,EAX                        ; 0059f02f
    JNZ 0x0059f0a2                      ; 0059f031
        ;   XREF to: 0059f0a2 (CONDITIONAL_JUMP)  ; LAB_0059f0a2
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f033
        ;   Label: LAB_0059f033
    MOV dword ptr [EAX + 0x80],EDI      ; 0059f037
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059f03d
    CMP word ptr [EAX + 0x8],0x2        ; 0059f041
    JNZ 0x0059f087                      ; 0059f046
        ;   XREF to: 0059f087 (CONDITIONAL_JUMP)  ; LAB_0059f087
    CMP word ptr [EAX + 0xa],0x4        ; 0059f048
    JNZ 0x0059f087                      ; 0059f04d
        ;   XREF to: 0059f087 (CONDITIONAL_JUMP)  ; LAB_0059f087
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f04f
    XOR EDI,EDI                         ; 0059f053
    ADD EAX,0x288                       ; 0059f055
    MOV dword ptr [ESP + 0x1c],EDI      ; 0059f05a
    MOV dword ptr [ESP + 0xc],EAX       ; 0059f05e
    MOV dword ptr [ESP + 0x14],EAX      ; 0059f062
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059f066
        ;   Label: LAB_0059f066
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059f06a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059f06e
    ADD EAX,EBX                         ; 0059f071
    MOV EAX,dword ptr [EAX]             ; 0059f073
    TEST EAX,EAX                        ; 0059f075
    JNZ 0x0059f11f                      ; 0059f077
        ;   XREF to: 0059f11f (CONDITIONAL_JUMP)  ; LAB_0059f11f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f07d
        ;   Label: LAB_0059f07d
    MOV dword ptr [EAX + 0x284],EDI     ; 0059f081
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f087
        ;   Label: LAB_0059f087
    CMP dword ptr [EAX + 0x284],0x0     ; 0059f08b
    SETG AL                             ; 0059f092
    AND EAX,0xff                        ; 0059f095
    POP EBX                             ; 0059f09a
    POP ESI                             ; 0059f09b
    POP EDI                             ; 0059f09c
    ADD ESP,0x18                        ; 0059f09d
    POP EBP                             ; 0059f0a0
    RET                                 ; 0059f0a1
    PUSH 0x7f                           ; 0059f0a2
        ;   Label: LAB_0059f0a2
    PUSH EAX                            ; 0059f0a4
    MOV EBP,dword ptr [ESP + 0x28]      ; 0059f0a5
    LEA ECX,[EDX + 0x4]                 ; 0059f0a9
    PUSH EBP                            ; 0059f0ac
    MOV dword ptr [ESP + 0x24],ECX      ; 0059f0ad
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 0059f0b1
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0059f0b6
    MOV ESI,dword ptr [ESP + 0x30]      ; 0059f0b9
    PUSH ESI                            ; 0059f0bd
    PUSH EBP                            ; 0059f0be
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0059f0bf
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059f0c4
    TEST EAX,EAX                        ; 0059f0c7
    JNZ 0x0059f0d9                      ; 0059f0c9
        ;   XREF to: 0059f0d9 (CONDITIONAL_JUMP)  ; LAB_0059f0d9
    CMP EDI,0x4                         ; 0059f0cb
        ;   Label: LAB_0059f0cb
    JL 0x0059f020                       ; 0059f0ce
        ;   XREF to: 0059f020 (CONDITIONAL_JUMP)  ; LAB_0059f020
    JMP 0x0059f033                      ; 0059f0d4
        ;   XREF to: 0059f033 (UNCONDITIONAL_JUMP)  ; LAB_0059f033
    XOR EBX,EBX                         ; 0059f0d9
        ;   Label: LAB_0059f0d9
    TEST EDI,EDI                        ; 0059f0db
    JLE 0x0059f0f1                      ; 0059f0dd
        ;   XREF to: 0059f0f1 (CONDITIONAL_JUMP)  ; LAB_0059f0f1
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059f0df
    PUSH ESI                            ; 0059f0e3
        ;   Label: LAB_0059f0e3
    PUSH EBP                            ; 0059f0e4
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0059f0e5
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059f0ea
    TEST EAX,EAX                        ; 0059f0ed
    JNZ 0x0059f112                      ; 0059f0ef
        ;   XREF to: 0059f112 (CONDITIONAL_JUMP)  ; LAB_0059f112
    CMP EBX,EDI                         ; 0059f0f1
        ;   Label: LAB_0059f0f1
    JL 0x0059f0cb                       ; 0059f0f3
        ;   XREF to: 0059f0cb (CONDITIONAL_JUMP)  ; LAB_0059f0cb
    MOV EDX,dword ptr [ESP + 0x20]      ; 0059f0f5
    ADD EDX,0x80                        ; 0059f0f9
    INC EDI                             ; 0059f0ff
    MOV dword ptr [ESP + 0x20],EDX      ; 0059f100
    CMP EDI,0x4                         ; 0059f104
    JL 0x0059f020                       ; 0059f107
        ;   XREF to: 0059f020 (CONDITIONAL_JUMP)  ; LAB_0059f020
    JMP 0x0059f033                      ; 0059f10d
        ;   XREF to: 0059f033 (UNCONDITIONAL_JUMP)  ; LAB_0059f033
    INC EBX                             ; 0059f112
        ;   Label: LAB_0059f112
    ADD ESI,0x80                        ; 0059f113
    CMP EBX,EDI                         ; 0059f119
    JL 0x0059f0e3                       ; 0059f11b
        ;   XREF to: 0059f0e3 (CONDITIONAL_JUMP)  ; LAB_0059f0e3
    JMP 0x0059f0f1                      ; 0059f11d
        ;   XREF to: 0059f0f1 (UNCONDITIONAL_JUMP)  ; LAB_0059f0f1
    XOR EBX,EBX                         ; 0059f11f
        ;   Label: LAB_0059f11f
    MOV BL,byte ptr [EAX + 0x3]         ; 0059f121
    PUSH EBX                            ; 0059f124
    XOR EBX,EBX                         ; 0059f125
    MOV BL,byte ptr [EAX + 0x2]         ; 0059f127
    PUSH EBX                            ; 0059f12a
    XOR EBX,EBX                         ; 0059f12b
    MOV BL,byte ptr [EAX + 0x1]         ; 0059f12d
    PUSH EBX                            ; 0059f130
    MOV AL,byte ptr [EAX]               ; 0059f131
    MOV ESI,dword ptr [ESP + 0x28]      ; 0059f133
    AND EAX,0xff                        ; 0059f137
    LEA EBP,[EDI*0x4 + 0x0]             ; 0059f13c
    PUSH EAX                            ; 0059f143
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059f144
    ADD ESI,0x4                         ; 0059f148
    PUSH EAX                            ; 0059f14b
    XOR EBX,EBX                         ; 0059f14c
    MOV dword ptr [ESP + 0x30],ESI      ; 0059f14e
    CALL support_trisock.cpp_buildIPAddress_FUN_0059c640 ; 0059f152
        ;   XREF to: 0059c640 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_0059c640()
    ADD ESP,0x14                        ; 0059f157
    TEST EDI,EDI                        ; 0059f15a
    JLE 0x0059f173                      ; 0059f15c
        ;   XREF to: 0059f173 (CONDITIONAL_JUMP)  ; LAB_0059f173
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059f15e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059f162
    ADD EBP,EDX                         ; 0059f166
    MOV ECX,dword ptr [EBP]             ; 0059f168
        ;   Label: LAB_0059f168
    CMP ECX,dword ptr [EAX + 0x288]     ; 0059f16b
    JNZ 0x0059f191                      ; 0059f171
        ;   XREF to: 0059f191 (CONDITIONAL_JUMP)  ; LAB_0059f191
    CMP EBX,EDI                         ; 0059f173
        ;   Label: LAB_0059f173
    JL 0x0059f183                       ; 0059f175
        ;   XREF to: 0059f183 (CONDITIONAL_JUMP)  ; LAB_0059f183
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059f177
    ADD EBX,0x4                         ; 0059f17b
    INC EDI                             ; 0059f17e
    MOV dword ptr [ESP + 0x14],EBX      ; 0059f17f
    CMP EDI,0xc                         ; 0059f183
        ;   Label: LAB_0059f183
    JL 0x0059f066                       ; 0059f186
        ;   XREF to: 0059f066 (CONDITIONAL_JUMP)  ; LAB_0059f066
    JMP 0x0059f07d                      ; 0059f18c
        ;   XREF to: 0059f07d (UNCONDITIONAL_JUMP)  ; LAB_0059f07d
    INC EBX                             ; 0059f191
        ;   Label: LAB_0059f191
    ADD EAX,0x4                         ; 0059f192
    CMP EBX,EDI                         ; 0059f195
    JL 0x0059f168                       ; 0059f197
        ;   XREF to: 0059f168 (CONDITIONAL_JUMP)  ; LAB_0059f168
    JMP 0x0059f173                      ; 0059f199
        ;   XREF to: 0059f173 (UNCONDITIONAL_JUMP)  ; LAB_0059f173

