; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005befc0(char *param_1,uint param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005bef94 at 005befb1
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;   void* PTR_CreateFileA_005c8518 = 001c8c64
;   undefined4 DAT_005f1a0c
;   undefined4 DAT_0061f160
;   void* PTR_crt_unknown.c_FUN_005bce08_0061f2b0 = 005bce08
;   undefined4 DAT_0061f41c
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f6f4
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_errno.c_setErrno_FUN_005be180
;   crt_string.c__stricmp_FUN_005b8130
;   crt_unknown.c_FUN_005bce08
;   crt_unknown.c_FUN_005c036c
;   crt_unknown.c_FUN_005c0878
;   crt_unknown.c_FUN_005c08b0
;   crt_unknown.c_FUN_005c0af8
;   crt_unknown.c_FUN_005c3910
;   crt_unknown.c_FUN_005c3954
;   crt_unknown.c_FUN_005c39c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005befc0
        ;   Label: crt_unknown.c_FUN_005befc0
    PUSH ESI                            ; 005befc1
    PUSH EDI                            ; 005befc2
    PUSH EBP                            ; 005befc3
    SUB ESP,0x18                        ; 005befc4
    MOV EDI,dword ptr [ESP + 0x38]      ; 005befc7
    CALL crt_unknown.c_FUN_005c08b0     ; 005befcb
        ;   XREF to: 005c08b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c08b0()
    TEST EAX,EAX                        ; 005befd0
    JZ 0x005befe8                       ; 005befd2
        ;   XREF to: 005befe8 (CONDITIONAL_JUMP)  ; LAB_005befe8
    PUSH 0xb                            ; 005befd4
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005befd6
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005befdb
    ADD ESP,0x4                         ; 005befe0
    JMP 0x005bf1f9                      ; 005befe3
        ;   XREF to: 005bf1f9 (UNCONDITIONAL_JUMP)  ; LAB_005bf1f9
    LEA EAX,[ESP + 0x14]                ; 005befe8
        ;   Label: LAB_005befe8
    PUSH EAX                            ; 005befec
    LEA EAX,[ESP + 0x14]                ; 005befed
    MOV ESI,dword ptr [ESP + 0x34]      ; 005beff1
    PUSH EAX                            ; 005beff5
    AND ESI,0x7                         ; 005beff6
    PUSH ESI                            ; 005beff9
    CALL crt_unknown.c_FUN_005c3910     ; 005beffa
        ;   XREF to: 005c3910 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3910()
    ADD ESP,0xc                         ; 005befff
    LEA EAX,[ESP + 0xc]                 ; 005bf002
    PUSH EAX                            ; 005bf006
    MOV EAX,dword ptr [ESP + 0x38]      ; 005bf007
    OR EAX,ESI                          ; 005bf00b
    PUSH EAX                            ; 005bf00d
    MOV EBP,0x80                        ; 005bf00e
    CALL crt_unknown.c_FUN_005c3954     ; 005bf013
        ;   XREF to: 005c3954 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3954()
    MOV EDX,0xc                         ; 005bf018
    ADD ESP,0x8                         ; 005bf01d
    XOR ECX,ECX                         ; 005bf020
    MOV AH,byte ptr [ESP + 0x30]        ; 005bf022
    MOV dword ptr [ESP],EDX             ; 005bf026
    MOV dword ptr [ESP + 0x4],ECX       ; 005bf029
    TEST AH,0x80                        ; 005bf02d
    SETZ AL                             ; 005bf030
    AND EAX,0xff                        ; 005bf033
    MOV dword ptr [ESP + 0x8],EAX       ; 005bf038
    CMP dword ptr [0x0061f41c],0x0      ; 005bf03c | DAT_0061f41c
    JZ 0x005bf084                       ; 005bf043
        ;   XREF to: 005bf084 (CONDITIONAL_JUMP)  ; LAB_005bf084
    PUSH 0x5f1a0c                       ; 005bf045 | DAT_005f1a0c
    MOV EDX,dword ptr [ESP + 0x30]      ; 005bf04a
    PUSH EDX                            ; 005bf04e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005bf04f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005bf054
    TEST EAX,EAX                        ; 005bf057
    JNZ 0x005bf084                      ; 005bf059
        ;   XREF to: 005bf084 (CONDITIONAL_JUMP)  ; LAB_005bf084
    CALL crt_unknown.c_FUN_005c0af8     ; 005bf05b
        ;   XREF to: 005c0af8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0af8()
    PUSH EAX                            ; 005bf060
    CALL dword ptr [0x0061f2b0]         ; 005bf061 | PTR_crt_unknown.c_FUN_005bce08_0061f2b0
    ADD ESP,0x4                         ; 005bf067
    PUSH -0x1                           ; 005bf06a
    PUSH EAX                            ; 005bf06c
    PUSH 0x0                            ; 005bf06d
    MOV EBX,0x2000                      ; 005bf06f
    MOV EBP,EAX                         ; 005bf074
    CALL dword ptr [0x0061f41c]         ; 005bf076 | DAT_0061f41c
    ADD ESP,0xc                         ; 005bf07c
    JMP 0x005bf1a6                      ; 005bf07f
        ;   XREF to: 005bf1a6 (UNCONDITIONAL_JUMP)  ; LAB_005bf1a6
    MOV DL,byte ptr [ESP + 0x30]        ; 005bf084
        ;   Label: LAB_005bf084
    TEST DL,0x20                        ; 005bf088
    JZ 0x005bf0ef                       ; 005bf08b
        ;   XREF to: 005bf0ef (CONDITIONAL_JUMP)  ; LAB_005bf0ef
    MOV EBX,dword ptr [EDI]             ; 005bf08d
    ADD EBX,0x4                         ; 005bf08f
    MOV dword ptr [EDI],EBX             ; 005bf092
    MOV EAX,dword ptr [EBX + -0x4]      ; 005bf094
    MOV dword ptr [ESP + 0x14],EAX      ; 005bf097
    MOV dword ptr [EDI],0x0             ; 005bf09b
    MOV EAX,[0x0061f6f4]                ; 005bf0a1 | DAT_0061f6f4
    MOV ECX,dword ptr [ESP + 0x14]      ; 005bf0a6
    NOT EAX                             ; 005bf0aa
    AND ECX,EAX                         ; 005bf0ac
    MOV dword ptr [ESP + 0x14],ECX      ; 005bf0ae
    TEST byte ptr [ESP + 0x15],0x1      ; 005bf0b2
    JZ 0x005bf0c5                       ; 005bf0b7
        ;   XREF to: 005bf0c5 (CONDITIONAL_JUMP)  ; LAB_005bf0c5
    TEST byte ptr [ESP + 0x14],0x80     ; 005bf0b9
    JNZ 0x005bf0c5                      ; 005bf0be
        ;   XREF to: 005bf0c5 (CONDITIONAL_JUMP)  ; LAB_005bf0c5
    MOV EBP,0x1                         ; 005bf0c0
    TEST byte ptr [ESP + 0x31],0x4      ; 005bf0c5
        ;   Label: LAB_005bf0c5
    JZ 0x005bf0d5                       ; 005bf0ca
        ;   XREF to: 005bf0d5 (CONDITIONAL_JUMP)  ; LAB_005bf0d5
    MOV EBX,0x1                         ; 005bf0cc
    MOV EAX,EBX                         ; 005bf0d1
    JMP 0x005bf100                      ; 005bf0d3
        ;   XREF to: 005bf100 (UNCONDITIONAL_JUMP)  ; LAB_005bf100
    TEST byte ptr [ESP + 0x30],0x40     ; 005bf0d5
        ;   Label: LAB_005bf0d5
    JZ 0x005bf0e8                       ; 005bf0da
        ;   XREF to: 005bf0e8 (CONDITIONAL_JUMP)  ; LAB_005bf0e8
    MOV EBX,0x2                         ; 005bf0dc
    MOV EAX,0x1                         ; 005bf0e1
    JMP 0x005bf100                      ; 005bf0e6
        ;   XREF to: 005bf100 (UNCONDITIONAL_JUMP)  ; LAB_005bf100
    MOV EBX,0x4                         ; 005bf0e8
        ;   Label: LAB_005bf0e8
    JMP 0x005bf0fb                      ; 005bf0ed
        ;   XREF to: 005bf0fb (UNCONDITIONAL_JUMP)  ; LAB_005bf0fb
    TEST DL,0x40                        ; 005bf0ef
        ;   Label: LAB_005bf0ef
    JZ 0x005bf0fb                       ; 005bf0f2
        ;   XREF to: 005bf0fb (CONDITIONAL_JUMP)  ; LAB_005bf0fb
    MOV EAX,0x5                         ; 005bf0f4
    JMP 0x005bf100                      ; 005bf0f9
        ;   XREF to: 005bf100 (UNCONDITIONAL_JUMP)  ; LAB_005bf100
    MOV EAX,0x3                         ; 005bf0fb
        ;   Label: LAB_005bf0fb
    PUSH 0x0                            ; 005bf100
        ;   Label: LAB_005bf100
    PUSH EBP                            ; 005bf102
    PUSH EAX                            ; 005bf103
    LEA EAX,[ESP + 0xc]                 ; 005bf104
    PUSH EAX                            ; 005bf108
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005bf109
    PUSH EDI                            ; 005bf10d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005bf10e
    PUSH EAX                            ; 005bf112
    MOV EDX,dword ptr [ESP + 0x44]      ; 005bf113
    PUSH EDX                            ; 005bf117
    CALL dword ptr CS:[0x5c8518]        ; 005bf118 | PTR_CreateFileA_005c8518
    MOV EDI,EAX                         ; 005bf11f
    CMP EAX,-0x1                        ; 005bf121
    JNZ 0x005bf15d                      ; 005bf124
        ;   XREF to: 005bf15d (CONDITIONAL_JUMP)  ; LAB_005bf15d
    TEST byte ptr [ESP + 0x30],0x20     ; 005bf126
    JZ 0x005bf14b                       ; 005bf12b
        ;   XREF to: 005bf14b (CONDITIONAL_JUMP)  ; LAB_005bf14b
    PUSH 0x0                            ; 005bf12d
    PUSH EBP                            ; 005bf12f
    PUSH EBX                            ; 005bf130
    PUSH 0x0                            ; 005bf131
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005bf133
    PUSH EBX                            ; 005bf137
    MOV ECX,dword ptr [ESP + 0x24]      ; 005bf138
    PUSH ECX                            ; 005bf13c
    MOV EDI,dword ptr [ESP + 0x44]      ; 005bf13d
    PUSH EDI                            ; 005bf141
    CALL dword ptr CS:[0x5c8518]        ; 005bf142 | PTR_CreateFileA_005c8518
    MOV EDI,EAX                         ; 005bf149
    CMP EDI,-0x1                        ; 005bf14b
        ;   Label: LAB_005bf14b
    JNZ 0x005bf15d                      ; 005bf14e
        ;   XREF to: 005bf15d (CONDITIONAL_JUMP)  ; LAB_005bf15d
    CALL crt_unknown.c_FUN_005c036c     ; 005bf150
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    ADD ESP,0x18                        ; 005bf155
    POP EBP                             ; 005bf158
    POP EDI                             ; 005bf159
    POP ESI                             ; 005bf15a
    POP EBX                             ; 005bf15b
    RET                                 ; 005bf15c
    PUSH EDI                            ; 005bf15d
        ;   Label: LAB_005bf15d
    CALL dword ptr [0x0061f2b0]         ; 005bf15e | PTR_crt_unknown.c_FUN_005bce08_0061f2b0
    XOR EBX,EBX                         ; 005bf164
    MOV EDX,dword ptr [0x0061f480]      ; 005bf166 | DAT_0061f480
    ADD ESP,0x4                         ; 005bf16c
    MOV EBP,EAX                         ; 005bf16f
    CMP EAX,EDX                         ; 005bf171
    JC 0x005bf194                       ; 005bf173
        ;   XREF to: 005bf194 (CONDITIONAL_JUMP)  ; LAB_005bf194
    PUSH EDI                            ; 005bf175
    CALL dword ptr CS:[0x5c850c]        ; 005bf176 | PTR_CloseHandle_005c850c
    PUSH 0x5                            ; 005bf17d
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bf17f
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005bf184
    ADD ESP,0x4                         ; 005bf189
    ADD ESP,0x18                        ; 005bf18c
    POP EBP                             ; 005bf18f
    POP EDI                             ; 005bf190
    POP ESI                             ; 005bf191
    POP EBX                             ; 005bf192
    RET                                 ; 005bf193
    PUSH EAX                            ; 005bf194
        ;   Label: LAB_005bf194
    CALL crt_unknown.c_FUN_005c39c0     ; 005bf195
        ;   XREF to: 005c39c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c39c0()
    ADD ESP,0x4                         ; 005bf19a
    TEST EAX,EAX                        ; 005bf19d
    JZ 0x005bf1a6                       ; 005bf19f
        ;   XREF to: 005bf1a6 (CONDITIONAL_JUMP)  ; LAB_005bf1a6
    MOV EBX,0x2000                      ; 005bf1a1
    CMP ESI,0x2                         ; 005bf1a6
        ;   Label: LAB_005bf1a6
    JNZ 0x005bf1b0                      ; 005bf1a9
        ;   XREF to: 005bf1b0 (CONDITIONAL_JUMP)  ; LAB_005bf1b0
    OR BL,0x3                           ; 005bf1ab
    JMP 0x005bf1c1                      ; 005bf1ae
        ;   XREF to: 005bf1c1 (UNCONDITIONAL_JUMP)  ; LAB_005bf1c1
    TEST ESI,ESI                        ; 005bf1b0
        ;   Label: LAB_005bf1b0
    JNZ 0x005bf1b9                      ; 005bf1b2
        ;   XREF to: 005bf1b9 (CONDITIONAL_JUMP)  ; LAB_005bf1b9
    OR BL,0x1                           ; 005bf1b4
    JMP 0x005bf1c1                      ; 005bf1b7
        ;   XREF to: 005bf1c1 (UNCONDITIONAL_JUMP)  ; LAB_005bf1c1
    CMP ESI,0x1                         ; 005bf1b9
        ;   Label: LAB_005bf1b9
    JNZ 0x005bf1c1                      ; 005bf1bc
        ;   XREF to: 005bf1c1 (CONDITIONAL_JUMP)  ; LAB_005bf1c1
    OR BL,0x2                           ; 005bf1be
    TEST byte ptr [ESP + 0x30],0x10     ; 005bf1c1
        ;   Label: LAB_005bf1c1
    JZ 0x005bf1cb                       ; 005bf1c6
        ;   XREF to: 005bf1cb (CONDITIONAL_JUMP)  ; LAB_005bf1cb
    OR BL,0x80                          ; 005bf1c8
    MOV EAX,EBX                         ; 005bf1cb
        ;   Label: LAB_005bf1cb
    MOV DL,byte ptr [ESP + 0x31]        ; 005bf1cd
    OR AL,0x40                          ; 005bf1d1
    TEST DL,0x3                         ; 005bf1d3
    JZ 0x005bf1df                       ; 005bf1d6
        ;   XREF to: 005bf1df (CONDITIONAL_JUMP)  ; LAB_005bf1df
    TEST DL,0x2                         ; 005bf1d8
    JZ 0x005bf1ed                       ; 005bf1db
        ;   XREF to: 005bf1ed (CONDITIONAL_JUMP)  ; LAB_005bf1ed
    JMP 0x005bf1eb                      ; 005bf1dd
        ;   XREF to: 005bf1eb (UNCONDITIONAL_JUMP)  ; LAB_005bf1eb
    CMP dword ptr [0x0061f160],0x200    ; 005bf1df | DAT_0061f160
        ;   Label: LAB_005bf1df
    JNZ 0x005bf1ed                      ; 005bf1e9
        ;   XREF to: 005bf1ed (CONDITIONAL_JUMP)  ; LAB_005bf1ed
    MOV EBX,EAX                         ; 005bf1eb
        ;   Label: LAB_005bf1eb
    PUSH EBX                            ; 005bf1ed
        ;   Label: LAB_005bf1ed
    PUSH EBP                            ; 005bf1ee
    CALL crt_unknown.c_FUN_005c0878     ; 005bf1ef
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0878()
    ADD ESP,0x8                         ; 005bf1f4
    MOV EAX,EBP                         ; 005bf1f7
    ADD ESP,0x18                        ; 005bf1f9
        ;   Label: LAB_005bf1f9
    POP EBP                             ; 005bf1fc
    POP EDI                             ; 005bf1fd
    POP ESI                             ; 005bf1fe
    POP EBX                             ; 005bf1ff
    RET                                 ; 005bf200

