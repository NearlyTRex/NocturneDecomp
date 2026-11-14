; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005aa0f0(char *param_1,uint param_2,uint param_3,int *param_4)
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
;   crt_unknown.c_FUN_005aa0c4 at 005aa0e1
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;   void* PTR_CreateFileA_005b3524 = 001b3c7a
;   undefined4 DAT_005da870
;   undefined4 DAT_00607884
;   void* PTR_crt_unknown.c_FUN_005a7f48_006079ac = 005a7f48
;   undefined4 DAT_00607b20
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607e18
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a7f48
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005ab978
;   crt_unknown.c_FUN_005ab9b0
;   crt_unknown.c_FUN_005abbf8
;   crt_unknown.c_FUN_005aea80
;   crt_unknown.c_FUN_005aeac4
;   crt_unknown.c_FUN_005aeb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa0f0
        ;   Label: crt_unknown.c_FUN_005aa0f0
    PUSH ESI                            ; 005aa0f1
    PUSH EDI                            ; 005aa0f2
    PUSH EBP                            ; 005aa0f3
    SUB ESP,0x18                        ; 005aa0f4
    MOV EDI,dword ptr [ESP + 0x38]      ; 005aa0f7
    CALL crt_unknown.c_FUN_005ab9b0     ; 005aa0fb
        ;   XREF to: 005ab9b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab9b0()
    TEST EAX,EAX                        ; 005aa100
    JZ 0x005aa118                       ; 005aa102
        ;   XREF to: 005aa118 (CONDITIONAL_JUMP)  ; LAB_005aa118
    PUSH 0xb                            ; 005aa104
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aa106
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005aa10b
    ADD ESP,0x4                         ; 005aa110
    JMP 0x005aa329                      ; 005aa113
        ;   XREF to: 005aa329 (UNCONDITIONAL_JUMP)  ; LAB_005aa329
    LEA EAX,[ESP + 0x14]                ; 005aa118
        ;   Label: LAB_005aa118
    PUSH EAX                            ; 005aa11c
    LEA EAX,[ESP + 0x14]                ; 005aa11d
    MOV ESI,dword ptr [ESP + 0x34]      ; 005aa121
    PUSH EAX                            ; 005aa125
    AND ESI,0x7                         ; 005aa126
    PUSH ESI                            ; 005aa129
    CALL crt_unknown.c_FUN_005aea80     ; 005aa12a
        ;   XREF to: 005aea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aea80()
    ADD ESP,0xc                         ; 005aa12f
    LEA EAX,[ESP + 0xc]                 ; 005aa132
    PUSH EAX                            ; 005aa136
    MOV EAX,dword ptr [ESP + 0x38]      ; 005aa137
    OR EAX,ESI                          ; 005aa13b
    PUSH EAX                            ; 005aa13d
    MOV EBP,0x80                        ; 005aa13e
    CALL crt_unknown.c_FUN_005aeac4     ; 005aa143
        ;   XREF to: 005aeac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aeac4()
    MOV EDX,0xc                         ; 005aa148
    ADD ESP,0x8                         ; 005aa14d
    XOR ECX,ECX                         ; 005aa150
    MOV AH,byte ptr [ESP + 0x30]        ; 005aa152
    MOV dword ptr [ESP],EDX             ; 005aa156
    MOV dword ptr [ESP + 0x4],ECX       ; 005aa159
    TEST AH,0x80                        ; 005aa15d
    SETZ AL                             ; 005aa160
    AND EAX,0xff                        ; 005aa163
    MOV dword ptr [ESP + 0x8],EAX       ; 005aa168
    CMP dword ptr [0x00607b20],0x0      ; 005aa16c | DAT_00607b20
    JZ 0x005aa1b4                       ; 005aa173
        ;   XREF to: 005aa1b4 (CONDITIONAL_JUMP)  ; LAB_005aa1b4
    PUSH 0x5da870                       ; 005aa175 | DAT_005da870
    MOV EDX,dword ptr [ESP + 0x30]      ; 005aa17a
    PUSH EDX                            ; 005aa17e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005aa17f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa184
    TEST EAX,EAX                        ; 005aa187
    JNZ 0x005aa1b4                      ; 005aa189
        ;   XREF to: 005aa1b4 (CONDITIONAL_JUMP)  ; LAB_005aa1b4
    CALL crt_unknown.c_FUN_005abbf8     ; 005aa18b
        ;   XREF to: 005abbf8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abbf8()
    PUSH EAX                            ; 005aa190
    CALL dword ptr [0x006079ac]         ; 005aa191 | PTR_crt_unknown.c_FUN_005a7f48_006079ac
    ADD ESP,0x4                         ; 005aa197
    PUSH -0x1                           ; 005aa19a
    PUSH EAX                            ; 005aa19c
    PUSH 0x0                            ; 005aa19d
    MOV EBX,0x2000                      ; 005aa19f
    MOV EBP,EAX                         ; 005aa1a4
    CALL dword ptr [0x00607b20]         ; 005aa1a6 | DAT_00607b20
    ADD ESP,0xc                         ; 005aa1ac
    JMP 0x005aa2d6                      ; 005aa1af
        ;   XREF to: 005aa2d6 (UNCONDITIONAL_JUMP)  ; LAB_005aa2d6
    MOV DL,byte ptr [ESP + 0x30]        ; 005aa1b4
        ;   Label: LAB_005aa1b4
    TEST DL,0x20                        ; 005aa1b8
    JZ 0x005aa21f                       ; 005aa1bb
        ;   XREF to: 005aa21f (CONDITIONAL_JUMP)  ; LAB_005aa21f
    MOV EBX,dword ptr [EDI]             ; 005aa1bd
    ADD EBX,0x4                         ; 005aa1bf
    MOV dword ptr [EDI],EBX             ; 005aa1c2
    MOV EAX,dword ptr [EBX + -0x4]      ; 005aa1c4
    MOV dword ptr [ESP + 0x14],EAX      ; 005aa1c7
    MOV dword ptr [EDI],0x0             ; 005aa1cb
    MOV EAX,[0x00607e18]                ; 005aa1d1 | DAT_00607e18
    MOV ECX,dword ptr [ESP + 0x14]      ; 005aa1d6
    NOT EAX                             ; 005aa1da
    AND ECX,EAX                         ; 005aa1dc
    MOV dword ptr [ESP + 0x14],ECX      ; 005aa1de
    TEST byte ptr [ESP + 0x15],0x1      ; 005aa1e2
    JZ 0x005aa1f5                       ; 005aa1e7
        ;   XREF to: 005aa1f5 (CONDITIONAL_JUMP)  ; LAB_005aa1f5
    TEST byte ptr [ESP + 0x14],0x80     ; 005aa1e9
    JNZ 0x005aa1f5                      ; 005aa1ee
        ;   XREF to: 005aa1f5 (CONDITIONAL_JUMP)  ; LAB_005aa1f5
    MOV EBP,0x1                         ; 005aa1f0
    TEST byte ptr [ESP + 0x31],0x4      ; 005aa1f5
        ;   Label: LAB_005aa1f5
    JZ 0x005aa205                       ; 005aa1fa
        ;   XREF to: 005aa205 (CONDITIONAL_JUMP)  ; LAB_005aa205
    MOV EBX,0x1                         ; 005aa1fc
    MOV EAX,EBX                         ; 005aa201
    JMP 0x005aa230                      ; 005aa203
        ;   XREF to: 005aa230 (UNCONDITIONAL_JUMP)  ; LAB_005aa230
    TEST byte ptr [ESP + 0x30],0x40     ; 005aa205
        ;   Label: LAB_005aa205
    JZ 0x005aa218                       ; 005aa20a
        ;   XREF to: 005aa218 (CONDITIONAL_JUMP)  ; LAB_005aa218
    MOV EBX,0x2                         ; 005aa20c
    MOV EAX,0x1                         ; 005aa211
    JMP 0x005aa230                      ; 005aa216
        ;   XREF to: 005aa230 (UNCONDITIONAL_JUMP)  ; LAB_005aa230
    MOV EBX,0x4                         ; 005aa218
        ;   Label: LAB_005aa218
    JMP 0x005aa22b                      ; 005aa21d
        ;   XREF to: 005aa22b (UNCONDITIONAL_JUMP)  ; LAB_005aa22b
    TEST DL,0x40                        ; 005aa21f
        ;   Label: LAB_005aa21f
    JZ 0x005aa22b                       ; 005aa222
        ;   XREF to: 005aa22b (CONDITIONAL_JUMP)  ; LAB_005aa22b
    MOV EAX,0x5                         ; 005aa224
    JMP 0x005aa230                      ; 005aa229
        ;   XREF to: 005aa230 (UNCONDITIONAL_JUMP)  ; LAB_005aa230
    MOV EAX,0x3                         ; 005aa22b
        ;   Label: LAB_005aa22b
    PUSH 0x0                            ; 005aa230
        ;   Label: LAB_005aa230
    PUSH EBP                            ; 005aa232
    PUSH EAX                            ; 005aa233
    LEA EAX,[ESP + 0xc]                 ; 005aa234
    PUSH EAX                            ; 005aa238
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005aa239
    PUSH EDI                            ; 005aa23d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005aa23e
    PUSH EAX                            ; 005aa242
    MOV EDX,dword ptr [ESP + 0x44]      ; 005aa243
    PUSH EDX                            ; 005aa247
    CALL dword ptr CS:[0x5b3524]        ; 005aa248 | PTR_CreateFileA_005b3524
    MOV EDI,EAX                         ; 005aa24f
    CMP EAX,-0x1                        ; 005aa251
    JNZ 0x005aa28d                      ; 005aa254
        ;   XREF to: 005aa28d (CONDITIONAL_JUMP)  ; LAB_005aa28d
    TEST byte ptr [ESP + 0x30],0x20     ; 005aa256
    JZ 0x005aa27b                       ; 005aa25b
        ;   XREF to: 005aa27b (CONDITIONAL_JUMP)  ; LAB_005aa27b
    PUSH 0x0                            ; 005aa25d
    PUSH EBP                            ; 005aa25f
    PUSH EBX                            ; 005aa260
    PUSH 0x0                            ; 005aa261
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005aa263
    PUSH EBX                            ; 005aa267
    MOV ECX,dword ptr [ESP + 0x24]      ; 005aa268
    PUSH ECX                            ; 005aa26c
    MOV EDI,dword ptr [ESP + 0x44]      ; 005aa26d
    PUSH EDI                            ; 005aa271
    CALL dword ptr CS:[0x5b3524]        ; 005aa272 | PTR_CreateFileA_005b3524
    MOV EDI,EAX                         ; 005aa279
    CMP EDI,-0x1                        ; 005aa27b
        ;   Label: LAB_005aa27b
    JNZ 0x005aa28d                      ; 005aa27e
        ;   XREF to: 005aa28d (CONDITIONAL_JUMP)  ; LAB_005aa28d
    CALL crt_unknown.c_FUN_005ab46c     ; 005aa280
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x18                        ; 005aa285
    POP EBP                             ; 005aa288
    POP EDI                             ; 005aa289
    POP ESI                             ; 005aa28a
    POP EBX                             ; 005aa28b
    RET                                 ; 005aa28c
    PUSH EDI                            ; 005aa28d
        ;   Label: LAB_005aa28d
    CALL dword ptr [0x006079ac]         ; 005aa28e | PTR_crt_unknown.c_FUN_005a7f48_006079ac
    XOR EBX,EBX                         ; 005aa294
    MOV EDX,dword ptr [0x00607b84]      ; 005aa296 | DAT_00607b84
    ADD ESP,0x4                         ; 005aa29c
    MOV EBP,EAX                         ; 005aa29f
    CMP EAX,EDX                         ; 005aa2a1
    JC 0x005aa2c4                       ; 005aa2a3
        ;   XREF to: 005aa2c4 (CONDITIONAL_JUMP)  ; LAB_005aa2c4
    PUSH EDI                            ; 005aa2a5
    CALL dword ptr CS:[0x5b3518]        ; 005aa2a6 | PTR_CloseHandle_005b3518
    PUSH 0x5                            ; 005aa2ad
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aa2af
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005aa2b4
    ADD ESP,0x4                         ; 005aa2b9
    ADD ESP,0x18                        ; 005aa2bc
    POP EBP                             ; 005aa2bf
    POP EDI                             ; 005aa2c0
    POP ESI                             ; 005aa2c1
    POP EBX                             ; 005aa2c2
    RET                                 ; 005aa2c3
    PUSH EAX                            ; 005aa2c4
        ;   Label: LAB_005aa2c4
    CALL crt_unknown.c_FUN_005aeb30     ; 005aa2c5
        ;   XREF to: 005aeb30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aeb30()
    ADD ESP,0x4                         ; 005aa2ca
    TEST EAX,EAX                        ; 005aa2cd
    JZ 0x005aa2d6                       ; 005aa2cf
        ;   XREF to: 005aa2d6 (CONDITIONAL_JUMP)  ; LAB_005aa2d6
    MOV EBX,0x2000                      ; 005aa2d1
    CMP ESI,0x2                         ; 005aa2d6
        ;   Label: LAB_005aa2d6
    JNZ 0x005aa2e0                      ; 005aa2d9
        ;   XREF to: 005aa2e0 (CONDITIONAL_JUMP)  ; LAB_005aa2e0
    OR BL,0x3                           ; 005aa2db
    JMP 0x005aa2f1                      ; 005aa2de
        ;   XREF to: 005aa2f1 (UNCONDITIONAL_JUMP)  ; LAB_005aa2f1
    TEST ESI,ESI                        ; 005aa2e0
        ;   Label: LAB_005aa2e0
    JNZ 0x005aa2e9                      ; 005aa2e2
        ;   XREF to: 005aa2e9 (CONDITIONAL_JUMP)  ; LAB_005aa2e9
    OR BL,0x1                           ; 005aa2e4
    JMP 0x005aa2f1                      ; 005aa2e7
        ;   XREF to: 005aa2f1 (UNCONDITIONAL_JUMP)  ; LAB_005aa2f1
    CMP ESI,0x1                         ; 005aa2e9
        ;   Label: LAB_005aa2e9
    JNZ 0x005aa2f1                      ; 005aa2ec
        ;   XREF to: 005aa2f1 (CONDITIONAL_JUMP)  ; LAB_005aa2f1
    OR BL,0x2                           ; 005aa2ee
    TEST byte ptr [ESP + 0x30],0x10     ; 005aa2f1
        ;   Label: LAB_005aa2f1
    JZ 0x005aa2fb                       ; 005aa2f6
        ;   XREF to: 005aa2fb (CONDITIONAL_JUMP)  ; LAB_005aa2fb
    OR BL,0x80                          ; 005aa2f8
    MOV EAX,EBX                         ; 005aa2fb
        ;   Label: LAB_005aa2fb
    MOV DL,byte ptr [ESP + 0x31]        ; 005aa2fd
    OR AL,0x40                          ; 005aa301
    TEST DL,0x3                         ; 005aa303
    JZ 0x005aa30f                       ; 005aa306
        ;   XREF to: 005aa30f (CONDITIONAL_JUMP)  ; LAB_005aa30f
    TEST DL,0x2                         ; 005aa308
    JZ 0x005aa31d                       ; 005aa30b
        ;   XREF to: 005aa31d (CONDITIONAL_JUMP)  ; LAB_005aa31d
    JMP 0x005aa31b                      ; 005aa30d
        ;   XREF to: 005aa31b (UNCONDITIONAL_JUMP)  ; LAB_005aa31b
    CMP dword ptr [0x00607884],0x200    ; 005aa30f | DAT_00607884
        ;   Label: LAB_005aa30f
    JNZ 0x005aa31d                      ; 005aa319
        ;   XREF to: 005aa31d (CONDITIONAL_JUMP)  ; LAB_005aa31d
    MOV EBX,EAX                         ; 005aa31b
        ;   Label: LAB_005aa31b
    PUSH EBX                            ; 005aa31d
        ;   Label: LAB_005aa31d
    PUSH EBP                            ; 005aa31e
    CALL crt_unknown.c_FUN_005ab978     ; 005aa31f
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab978()
    ADD ESP,0x8                         ; 005aa324
    MOV EAX,EBP                         ; 005aa327
    ADD ESP,0x18                        ; 005aa329
        ;   Label: LAB_005aa329
    POP EBP                             ; 005aa32c
    POP EDI                             ; 005aa32d
    POP ESI                             ; 005aa32e
    POP EBX                             ; 005aa32f
    RET                                 ; 005aa330

