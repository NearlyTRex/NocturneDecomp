; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c30d8(PEXCEPTION_RECORD param_1,undefined4 param_2,PCONTEXT param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c32a8 at 005c32d1
;
; Referenced Globals:
;   void* switchdataD_005c30bc = 005c3122
;   void* PTR_ExitProcess_005c8534 = 001c8ce8
;   void* PTR_UnhandledExceptionFilter_005c865c = 001c9246
;   undefined4 DAT_0061f6cc
;   undefined4 DAT_0061f6d0
;   undefined4 DAT_02681084
;
; Called Functions:
;   crt_unknown.c_FUN_005c4de0
;   crt_unknown.c_FUN_005c4fb8
;   ExitProcess
;   UnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c30d8
        ;   Label: crt_unknown.c_FUN_005c30d8
    PUSH ESI                            ; 005c30d9
    PUSH EDI                            ; 005c30da
    SUB ESP,0x8                         ; 005c30db
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c30de
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c30e2
    TEST byte ptr [ESI + 0x4],0x6       ; 005c30e6
    JNZ 0x005c329a                      ; 005c30ea
        ;   XREF to: 005c329a (CONDITIONAL_JUMP)  ; LAB_005c329a
    MOV EAX,dword ptr [ESI]             ; 005c30f0
    ADD EAX,0x3fffff73                  ; 005c30f2
    CMP EAX,0x6                         ; 005c30f7
    JA 0x005c3222                       ; 005c30fa
        ;   XREF to: 005c3222 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x5c30bc] ; 005c3100 | caseD_c000008d | caseD_c000008e | caseD_c000008f
        ;   Label: switchD
    TEST byte ptr [EDI + 0x21],0x2      ; 005c3108
        ;   Label: caseD_c0000092
    JZ 0x005c3118                       ; 005c310c
        ;   XREF to: 005c3118 (CONDITIONAL_JUMP)  ; LAB_005c3118
    MOV EBX,0x8a                        ; 005c310e
    JMP 0x005c31e3                      ; 005c3113
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EBX,0x8b                        ; 005c3118
        ;   Label: LAB_005c3118
    JMP 0x005c31e3                      ; 005c311d
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EBX,0x82                        ; 005c3122
        ;   Label: caseD_c000008d
    JMP 0x005c31e3                      ; 005c3127
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EBX,0x86                        ; 005c312c
        ;   Label: caseD_c000008f
    JMP 0x005c31e3                      ; 005c3131
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EBX,0x84                        ; 005c3136
        ;   Label: caseD_c0000091
    JMP 0x005c31e3                      ; 005c313b
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EBX,0x85                        ; 005c3140
        ;   Label: caseD_c0000093
    JMP 0x005c31e3                      ; 005c3145
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV EAX,dword ptr [EDI + 0x28]      ; 005c314a
        ;   Label: caseD_c0000090
    MOV DX,word ptr [EAX]               ; 005c314d
    MOV EBX,0x81                        ; 005c3150
    CMP DX,0xfad9                       ; 005c3155
    JNZ 0x005c3166                      ; 005c315a
        ;   XREF to: 005c3166 (CONDITIONAL_JUMP)  ; LAB_005c3166
    MOV EBX,0x88                        ; 005c315c
    JMP 0x005c31e3                      ; 005c3161
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    CMP DX,0xf1d9                       ; 005c3166
        ;   Label: LAB_005c3166
    JNZ 0x005c3177                      ; 005c316b
        ;   XREF to: 005c3177 (CONDITIONAL_JUMP)  ; LAB_005c3177
    MOV EBX,0x8e                        ; 005c316d
    JMP 0x005c31e3                      ; 005c3172
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    JNZ 0x005c3183                      ; 005c3177
        ;   XREF to: 005c3183 (CONDITIONAL_JUMP)  ; LAB_005c3183
        ;   Label: LAB_005c3177
    MOV EBX,0x8f                        ; 005c3179
    JMP 0x005c31e3                      ; 005c317e
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    MOV DH,byte ptr [EAX]               ; 005c3183
        ;   Label: LAB_005c3183
    CMP DH,0xdb                         ; 005c3185
    JZ 0x005c318f                       ; 005c3188
        ;   XREF to: 005c318f (CONDITIONAL_JUMP)  ; LAB_005c318f
    CMP DH,0xdf                         ; 005c318a
    JNZ 0x005c319f                      ; 005c318d
        ;   XREF to: 005c319f (CONDITIONAL_JUMP)  ; LAB_005c319f
    MOV CL,byte ptr [EAX + 0x1]         ; 005c318f
        ;   Label: LAB_005c318f
    AND CL,0x30                         ; 005c3192
    CMP CL,0x10                         ; 005c3195
    JNZ 0x005c319f                      ; 005c3198
        ;   XREF to: 005c319f (CONDITIONAL_JUMP)  ; LAB_005c319f
    MOV EBX,0x8d                        ; 005c319a
    TEST byte ptr [EAX],0x1             ; 005c319f
        ;   Label: LAB_005c319f
    JNZ 0x005c31de                      ; 005c31a2
        ;   XREF to: 005c31de (CONDITIONAL_JUMP)  ; LAB_005c31de
    MOV AL,byte ptr [EAX + 0x1]         ; 005c31a4
    AND AL,0x30                         ; 005c31a7
    CMP AL,0x30                         ; 005c31a9
    JNZ 0x005c31de                      ; 005c31ab
        ;   XREF to: 005c31de (CONDITIONAL_JUMP)  ; LAB_005c31de
    MOV ECX,dword ptr [EDI + 0x20]      ; 005c31ad
    AND ECX,0xffff                      ; 005c31b0
    MOV EAX,dword ptr [EDI + 0x24]      ; 005c31b6
    SHL ECX,0x2                         ; 005c31b9
    AND EAX,0xffff                      ; 005c31bc
    SHR CX,0xd                          ; 005c31c1
    AND ECX,0xffff                      ; 005c31c5
    ADD ECX,ECX                         ; 005c31cb
    SHR EAX,CL                          ; 005c31cd
    AND EAX,0x1                         ; 005c31cf
    CMP EAX,0x1                         ; 005c31d2
    JNZ 0x005c31de                      ; 005c31d5
        ;   XREF to: 005c31de (CONDITIONAL_JUMP)  ; LAB_005c31de
    MOV EBX,0x83                        ; 005c31d7
        ;   Label: caseD_c000008e
    JMP 0x005c31e3                      ; 005c31dc
        ;   XREF to: 005c31e3 (UNCONDITIONAL_JUMP)  ; LAB_005c31e3
    CMP EBX,-0x1                        ; 005c31de
        ;   Label: LAB_005c31de
    JZ 0x005c3222                       ; 005c31e1
        ;   XREF to: 005c3222 (CONDITIONAL_JUMP)  ; default
    MOV byte ptr [0x02681084],0x1       ; 005c31e3 | DAT_02681084
        ;   Label: LAB_005c31e3
    CALL crt_unknown.c_FUN_005c4de0     ; 005c31ea
        ;   XREF to: 005c4de0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4de0()
    PUSH EBX                            ; 005c31ef
    CALL crt_unknown.c_FUN_005c4fb8     ; 005c31f0
        ;   XREF to: 005c4fb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4fb8()
    ADD ESP,0x4                         ; 005c31f5
    CMP EAX,-0x1                        ; 005c31f8
    JZ 0x005c327b                       ; 005c31fb
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    CMP byte ptr [0x02681084],0x0       ; 005c3201 | DAT_02681084
    JZ 0x005c327b                       ; 005c3208
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    MOV BX,word ptr [EDI + 0x20]        ; 005c320e
    XOR BL,BL                           ; 005c3212
    AND BH,0x7f                         ; 005c3214
    XOR EAX,EAX                         ; 005c3217
    MOV word ptr [EDI + 0x20],BX        ; 005c3219
    JMP 0x005c329f                      ; 005c321d
        ;   XREF to: 005c329f (UNCONDITIONAL_JUMP)  ; LAB_005c329f
    CMP dword ptr [0x0061f6d0],0x0      ; 005c3222 | DAT_0061f6d0
        ;   Label: default
    JZ 0x005c327b                       ; 005c3229
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    MOV EBX,0x1                         ; 005c322b
    MOV ECX,dword ptr [ESI]             ; 005c3230
        ;   Label: LAB_005c3230
    PUSH ECX                            ; 005c3232
    PUSH EBX                            ; 005c3233
    CALL dword ptr [0x0061f6cc]         ; 005c3234 | DAT_0061f6cc
    ADD ESP,0x8                         ; 005c323a
    TEST EAX,EAX                        ; 005c323d
    JZ 0x005c3275                       ; 005c323f
        ;   XREF to: 005c3275 (CONDITIONAL_JUMP)  ; LAB_005c3275
    CMP EAX,0x1                         ; 005c3241
    JZ 0x005c327b                       ; 005c3244
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    CMP EAX,0x2                         ; 005c3246
    JZ 0x005c327b                       ; 005c3249
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    CMP EAX,0x3                         ; 005c324b
    JZ 0x005c327b                       ; 005c324e
        ;   XREF to: 005c327b (CONDITIONAL_JUMP)  ; LAB_005c327b
    MOV DL,0x1                          ; 005c3250
    PUSH EBX                            ; 005c3252
    MOV byte ptr [0x02681084],DL        ; 005c3253 | DAT_02681084
    CALL dword ptr [0x0061f6d0]         ; 005c3259 | DAT_0061f6d0
    MOV DH,byte ptr [0x02681084]        ; 005c325f | DAT_02681084
    ADD ESP,0x4                         ; 005c3265
    TEST DH,DH                          ; 005c3268
    JZ 0x005c3275                       ; 005c326a
        ;   XREF to: 005c3275 (CONDITIONAL_JUMP)  ; LAB_005c3275
    XOR EAX,EAX                         ; 005c326c
    ADD ESP,0x8                         ; 005c326e
    POP EDI                             ; 005c3271
    POP ESI                             ; 005c3272
    POP EBX                             ; 005c3273
    RET                                 ; 005c3274
    INC EBX                             ; 005c3275
        ;   Label: LAB_005c3275
    CMP EBX,0xc                         ; 005c3276
    JLE 0x005c3230                      ; 005c3279
        ;   XREF to: 005c3230 (CONDITIONAL_JUMP)  ; LAB_005c3230
    MOV EAX,ESP                         ; 005c327b
        ;   Label: LAB_005c327b
    PUSH EAX                            ; 005c327d
    MOV dword ptr [ESP + 0x4],ESI       ; 005c327e
    MOV dword ptr [ESP + 0x8],EDI       ; 005c3282
    CALL dword ptr CS:[0x5c865c]        ; 005c3286 | PTR_UnhandledExceptionFilter_005c865c
    TEST EAX,EAX                        ; 005c328d
    JZ 0x005c329a                       ; 005c328f
        ;   XREF to: 005c329a (CONDITIONAL_JUMP)  ; LAB_005c329a
    PUSH -0x1                           ; 005c3291
    CALL dword ptr CS:[0x5c8534]        ; 005c3293 | PTR_ExitProcess_005c8534
    MOV EAX,0x1                         ; 005c329a
        ;   Label: LAB_005c329a
    ADD ESP,0x8                         ; 005c329f
        ;   Label: LAB_005c329f
    POP EDI                             ; 005c32a2
    POP ESI                             ; 005c32a3
    POP EBX                             ; 005c32a4
    RET                                 ; 005c32a5

