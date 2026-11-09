; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dimage_cpp_FUN_0045f18e(undefined1 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dimage.cpp_FUN_0045f0a0
;   core_dimage.cpp_FUN_0045f130
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0045f18e
        ;   Label: core_dimage.cpp_FUN_0045f18e
    PUSH EBX                            ; 0045f190
    PUSH ESI                            ; 0045f191
    PUSH EDI                            ; 0045f192
    PUSH EBP                            ; 0045f193
    SUB ESP,0x10c                       ; 0045f194
    MOV ESI,dword ptr [ESP + 0x124]     ; 0045f19a
    MOV EBP,dword ptr [ESP + 0x128]     ; 0045f1a1
    MOV EDI,ESP                         ; 0045f1a8
    PUSH EDI                            ; 0045f1aa
    MOV AL,byte ptr [ESI]               ; 0045f1ab
        ;   Label: LAB_0045f1ab
    MOV byte ptr [EDI],AL               ; 0045f1ad
    CMP AL,0x0                          ; 0045f1af
    JZ 0x0045f1c3                       ; 0045f1b1
        ;   XREF to: 0045f1c3 (CONDITIONAL_JUMP)  ; LAB_0045f1c3
    MOV AL,byte ptr [ESI + 0x1]         ; 0045f1b3
    ADD ESI,0x2                         ; 0045f1b6
    MOV byte ptr [EDI + 0x1],AL         ; 0045f1b9
    ADD EDI,0x2                         ; 0045f1bc
    CMP AL,0x0                          ; 0045f1bf
    JNZ 0x0045f1ab                      ; 0045f1c1
        ;   XREF to: 0045f1ab (CONDITIONAL_JUMP)  ; LAB_0045f1ab
    POP EDI                             ; 0045f1c3
        ;   Label: LAB_0045f1c3
    PUSH 0x5d8958                       ; 0045f1c4
    LEA EAX,[ESP + 0x4]                 ; 0045f1c9
    PUSH EAX                            ; 0045f1cd
    PUSH 0x5d895b                       ; 0045f1ce
    CALL engine_dosio.cpp_FUN_00479180  ; 0045f1d3
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045f1d8
    MOV EBX,EAX                         ; 0045f1db
    TEST EAX,EAX                        ; 0045f1dd
    JZ 0x0045f383                       ; 0045f1df
        ;   XREF to: 0045f383 (CONDITIONAL_JUMP)  ; LAB_0045f383
    MOV EAX,dword ptr [ESP + 0x120]     ; 0045f1e5
        ;   Label: LAB_0045f1e5
    MOV ESI,dword ptr [ESP + 0x120]     ; 0045f1ec
    MOV dword ptr [EAX + 0x304],EBP     ; 0045f1f3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0045f1f9
    PUSH ESI                            ; 0045f200
    MOV dword ptr [ESI + 0x308],EAX     ; 0045f201
    CALL core_dimage.cpp_FUN_0045f0a0   ; 0045f207
        ;   XREF to: 0045f0a0 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_0045f0a0()
    ADD ESP,0x4                         ; 0045f20c
    PUSH EBX                            ; 0045f20f
    MOV EDI,dword ptr [ESP + 0x130]     ; 0045f210
    PUSH EDI                            ; 0045f217
    PUSH EBP                            ; 0045f218
    MOV EBP,dword ptr [ESI + 0x300]     ; 0045f219
    PUSH EBP                            ; 0045f21f
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0045f220
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0045f225
    PUSH EBX                            ; 0045f228
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045f229
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0045f22e
    MOV ESI,ESP                         ; 0045f231
    MOV DL,0x2e                         ; 0045f233
    MOV AL,byte ptr [ESI]               ; 0045f235
        ;   Label: LAB_0045f235
    CMP AL,DL                           ; 0045f237
    JZ 0x0045f24d                       ; 0045f239
        ;   XREF to: 0045f24d (CONDITIONAL_JUMP)  ; LAB_0045f24d
    CMP AL,0x0                          ; 0045f23b
    JZ 0x0045f24b                       ; 0045f23d
        ;   XREF to: 0045f24b (CONDITIONAL_JUMP)  ; LAB_0045f24b
    INC ESI                             ; 0045f23f
    MOV AL,byte ptr [ESI]               ; 0045f240
    CMP AL,DL                           ; 0045f242
    JZ 0x0045f24d                       ; 0045f244
        ;   XREF to: 0045f24d (CONDITIONAL_JUMP)  ; LAB_0045f24d
    INC ESI                             ; 0045f246
    CMP AL,0x0                          ; 0045f247
    JNZ 0x0045f235                      ; 0045f249
        ;   XREF to: 0045f235 (CONDITIONAL_JUMP)  ; LAB_0045f235
    SUB ESI,ESI                         ; 0045f24b
        ;   Label: LAB_0045f24b
    MOV EDI,ESI                         ; 0045f24d
        ;   Label: LAB_0045f24d
    TEST ESI,ESI                        ; 0045f24f
    JNZ 0x0045f275                      ; 0045f251
        ;   XREF to: 0045f275 (CONDITIONAL_JUMP)  ; LAB_0045f275
    MOV EAX,0x5d899c                    ; 0045f253
    MOV EDX,0x7b                        ; 0045f258
    PUSH 0x5d89af                       ; 0045f25d
    MOV [0x01d1d400],EAX                ; 0045f262 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0045f267 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045f26d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045f272
    MOV ESI,0x5d89dd                    ; 0045f275
        ;   Label: LAB_0045f275
    PUSH EDI                            ; 0045f27a
    MOV AL,byte ptr [ESI]               ; 0045f27b
        ;   Label: LAB_0045f27b
    MOV byte ptr [EDI],AL               ; 0045f27d
    CMP AL,0x0                          ; 0045f27f
    JZ 0x0045f293                       ; 0045f281
        ;   XREF to: 0045f293 (CONDITIONAL_JUMP)  ; LAB_0045f293
    MOV AL,byte ptr [ESI + 0x1]         ; 0045f283
    ADD ESI,0x2                         ; 0045f286
    MOV byte ptr [EDI + 0x1],AL         ; 0045f289
    ADD EDI,0x2                         ; 0045f28c
    CMP AL,0x0                          ; 0045f28f
    JNZ 0x0045f27b                      ; 0045f291
        ;   XREF to: 0045f27b (CONDITIONAL_JUMP)  ; LAB_0045f27b
    POP EDI                             ; 0045f293
        ;   Label: LAB_0045f293
    PUSH 0x5d89e2                       ; 0045f294
    LEA EAX,[ESP + 0x4]                 ; 0045f299
    PUSH EAX                            ; 0045f29d
    PUSH 0x5d89e5                       ; 0045f29e
    CALL engine_dosio.cpp_FUN_00479180  ; 0045f2a3
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045f2a8
    MOV EBX,EAX                         ; 0045f2ab
    TEST EAX,EAX                        ; 0045f2ad
    JZ 0x0045f3ab                       ; 0045f2af
        ;   XREF to: 0045f3ab (CONDITIONAL_JUMP)  ; LAB_0045f3ab
    PUSH EBX                            ; 0045f2b5
        ;   Label: LAB_0045f2b5
    PUSH 0x3                            ; 0045f2b6
    MOV EAX,dword ptr [ESP + 0x128]     ; 0045f2b8
    PUSH 0x100                          ; 0045f2bf
    ADD EAX,0x30c                       ; 0045f2c4
    PUSH EAX                            ; 0045f2c9
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0045f2ca
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0045f2cf
    PUSH EBX                            ; 0045f2d2
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0045f2d3
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0045f2d8
    MOV EDI,dword ptr [ESP + 0x120]     ; 0045f2db
    MOV ESI,EDI                         ; 0045f2e2
    MOV EBX,EDI                         ; 0045f2e4
    LEA EAX,[EDI + 0x200]               ; 0045f2e6
    MOV dword ptr [ESP + 0x108],EAX     ; 0045f2ec
    XOR EAX,EAX                         ; 0045f2f3
        ;   Label: LAB_0045f2f3
    MOV AL,byte ptr [EBX + 0x30c]       ; 0045f2f5
    MOV dword ptr [ESP + 0x100],EAX     ; 0045f2fb
    XOR EAX,EAX                         ; 0045f302
    MOV AL,byte ptr [EBX + 0x30e]       ; 0045f304
    PUSH EAX                            ; 0045f30a
    MOVZX EBP,byte ptr [EBX + 0x30d]    ; 0045f30b
    PUSH EBP                            ; 0045f312
    MOV EDX,dword ptr [ESP + 0x108]     ; 0045f313
    PUSH EDX                            ; 0045f31a
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0045f31b
    PUSH ECX                            ; 0045f322
    MOV dword ptr [ESP + 0x114],EAX     ; 0045f323
    CALL core_dimage.cpp_FUN_0045f130   ; 0045f32a
        ;   XREF to: 0045f130 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_0045f130()
    ADD ESP,0x10                        ; 0045f32f
    MOV word ptr [ESI + 0x100],AX       ; 0045f332
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045f339
    SHR EBP,0x3                         ; 0045f340
    SHR EAX,0x3                         ; 0045f343
    SHL EBP,0x5                         ; 0045f346
    SHL EAX,0xa                         ; 0045f349
    INC EDI                             ; 0045f34c
    ADD EBP,EAX                         ; 0045f34d
    MOV EAX,dword ptr [ESP + 0x104]     ; 0045f34f
    ADD ESI,0x2                         ; 0045f356
    SHR EAX,0x3                         ; 0045f359
    ADD EBX,0x3                         ; 0045f35c
    MOV AL,byte ptr [EAX + EBP*0x1 + 0x1c45ad0] ; 0045f35f
    MOV EBP,dword ptr [ESP + 0x108]     ; 0045f366
    MOV byte ptr [EDI + -0x1],AL        ; 0045f36d
    CMP ESI,EBP                         ; 0045f370
    JNZ 0x0045f2f3                      ; 0045f372
        ;   XREF to: 0045f2f3 (CONDITIONAL_JUMP)  ; LAB_0045f2f3
    ADD ESP,0x10c                       ; 0045f378
    POP EBP                             ; 0045f37e
    POP EDI                             ; 0045f37f
    POP ESI                             ; 0045f380
    POP EBX                             ; 0045f381
    RET                                 ; 0045f382
    MOV EDX,0x5d895f                    ; 0045f383
        ;   Label: LAB_0045f383
    MOV ECX,0x68                        ; 0045f388
    PUSH 0x5d8972                       ; 0045f38d
    MOV dword ptr [0x01d1d400],EDX      ; 0045f392 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045f398 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045f39e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045f3a3
    JMP 0x0045f1e5                      ; 0045f3a6
        ;   XREF to: 0045f1e5 (UNCONDITIONAL_JUMP)  ; LAB_0045f1e5
    MOV ECX,0x5d89e9                    ; 0045f3ab
        ;   Label: LAB_0045f3ab
    MOV ESI,0x7f                        ; 0045f3b0
    PUSH 0x5d89fc                       ; 0045f3b5
    MOV dword ptr [0x01d1d400],ECX      ; 0045f3ba | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045f3c0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045f3c6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045f3cb
    JMP 0x0045f2b5                      ; 0045f3ce
        ;   XREF to: 0045f2b5 (UNCONDITIONAL_JUMP)  ; LAB_0045f2b5

