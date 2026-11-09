; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_texlist_cpp_FUN_00569380(int *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_FUN_005a3140
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569380
        ;   Label: core_texlist.cpp_FUN_00569380
    PUSH ESI                            ; 00569381
    PUSH EDI                            ; 00569382
    PUSH EBP                            ; 00569383
    SUB ESP,0x104                       ; 00569384
    MOV EBP,dword ptr [ESP + 0x118]     ; 0056938a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00569391
    MOV EDI,ESP                         ; 00569398
    MOV DL,0x2e                         ; 0056939a
    PUSH EDI                            ; 0056939c
    MOV AL,byte ptr [ESI]               ; 0056939d
        ;   Label: LAB_0056939d
    MOV byte ptr [EDI],AL               ; 0056939f
    CMP AL,0x0                          ; 005693a1
    JZ 0x005693b5                       ; 005693a3
        ;   XREF to: 005693b5 (CONDITIONAL_JUMP)  ; LAB_005693b5
    MOV AL,byte ptr [ESI + 0x1]         ; 005693a5
    ADD ESI,0x2                         ; 005693a8
    MOV byte ptr [EDI + 0x1],AL         ; 005693ab
    ADD EDI,0x2                         ; 005693ae
    CMP AL,0x0                          ; 005693b1
    JNZ 0x0056939d                      ; 005693b3
        ;   XREF to: 0056939d (CONDITIONAL_JUMP)  ; LAB_0056939d
    POP EDI                             ; 005693b5
        ;   Label: LAB_005693b5
    MOV ESI,ESP                         ; 005693b6
    MOV AL,byte ptr [ESI]               ; 005693b8
        ;   Label: LAB_005693b8
    CMP AL,DL                           ; 005693ba
    JZ 0x005693d0                       ; 005693bc
        ;   XREF to: 005693d0 (CONDITIONAL_JUMP)  ; LAB_005693d0
    CMP AL,0x0                          ; 005693be
    JZ 0x005693ce                       ; 005693c0
        ;   XREF to: 005693ce (CONDITIONAL_JUMP)  ; LAB_005693ce
    INC ESI                             ; 005693c2
    MOV AL,byte ptr [ESI]               ; 005693c3
    CMP AL,DL                           ; 005693c5
    JZ 0x005693d0                       ; 005693c7
        ;   XREF to: 005693d0 (CONDITIONAL_JUMP)  ; LAB_005693d0
    INC ESI                             ; 005693c9
    CMP AL,0x0                          ; 005693ca
    JNZ 0x005693b8                      ; 005693cc
        ;   XREF to: 005693b8 (CONDITIONAL_JUMP)  ; LAB_005693b8
    SUB ESI,ESI                         ; 005693ce
        ;   Label: LAB_005693ce
    MOV EDI,ESI                         ; 005693d0
        ;   Label: LAB_005693d0
    TEST ESI,ESI                        ; 005693d2
    JZ 0x005694ab                       ; 005693d4
        ;   XREF to: 005694ab (CONDITIONAL_JUMP)  ; LAB_005694ab
    MOV ESI,0x5d5dee                    ; 005693da
        ;   Label: LAB_005693da
    PUSH EDI                            ; 005693df
    MOV AL,byte ptr [ESI]               ; 005693e0
        ;   Label: LAB_005693e0
    MOV byte ptr [EDI],AL               ; 005693e2
    CMP AL,0x0                          ; 005693e4
    JZ 0x005693f8                       ; 005693e6
        ;   XREF to: 005693f8 (CONDITIONAL_JUMP)  ; LAB_005693f8
    MOV AL,byte ptr [ESI + 0x1]         ; 005693e8
    ADD ESI,0x2                         ; 005693eb
    MOV byte ptr [EDI + 0x1],AL         ; 005693ee
    ADD EDI,0x2                         ; 005693f1
    CMP AL,0x0                          ; 005693f4
    JNZ 0x005693e0                      ; 005693f6
        ;   XREF to: 005693e0 (CONDITIONAL_JUMP)  ; LAB_005693e0
    POP EDI                             ; 005693f8
        ;   Label: LAB_005693f8
    PUSH 0x5d5df3                       ; 005693f9
    LEA EAX,[ESP + 0x4]                 ; 005693fe
    PUSH EAX                            ; 00569402
    PUSH 0x5d5df6                       ; 00569403
    CALL engine_dosio.cpp_FUN_004659c0  ; 00569408
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0056940d
    MOV dword ptr [ESP + 0x100],EAX     ; 00569410
    TEST EAX,EAX                        ; 00569417
    JNZ 0x0056943e                      ; 00569419
        ;   XREF to: 0056943e (CONDITIONAL_JUMP)  ; LAB_0056943e
    MOV EBX,0x5d5dfb                    ; 0056941b
    MOV ESI,0xb6                        ; 00569420
    PUSH 0x5d5e0f                       ; 00569425
    MOV dword ptr [0x01d71de0],EBX      ; 0056942a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00569430 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569436
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056943b
    MOV EDI,dword ptr [EBP]             ; 0056943e
        ;   Label: LAB_0056943e
    PUSH EDI                            ; 00569441
    PUSH 0x5d5e32                       ; 00569442
    MOV EAX,dword ptr [ESP + 0x108]     ; 00569447
    PUSH EAX                            ; 0056944e
    XOR EDI,EDI                         ; 0056944f
    CALL crt_unknown.c_FUN_005a3140     ; 00569451
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBP]             ; 00569456
    ADD ESP,0xc                         ; 00569459
    TEST EDX,EDX                        ; 0056945c
    JLE 0x00569490                      ; 0056945e
        ;   XREF to: 00569490 (CONDITIONAL_JUMP)  ; LAB_00569490
    LEA ESI,[EBP + 0xc]                 ; 00569460
    MOV EBX,EBP                         ; 00569463
    MOV ECX,dword ptr [EBX + 0x5dc4]    ; 00569465
        ;   Label: LAB_00569465
    PUSH ECX                            ; 0056946b
    PUSH ESI                            ; 0056946c
    PUSH 0x5d5e36                       ; 0056946d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00569472
    ADD EBX,0x4                         ; 00569479
    PUSH EAX                            ; 0056947c
    INC EDI                             ; 0056947d
    ADD ESI,0x18                        ; 0056947e
    CALL crt_unknown.c_FUN_005a3140     ; 00569481
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBP]             ; 00569486
    ADD ESP,0x10                        ; 00569489
    CMP EDI,EDX                         ; 0056948c
    JL 0x00569465                       ; 0056948e
        ;   XREF to: 00569465 (CONDITIONAL_JUMP)  ; LAB_00569465
    MOV ECX,dword ptr [ESP + 0x100]     ; 00569490
        ;   Label: LAB_00569490
    PUSH ECX                            ; 00569497
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00569498
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0056949d
    ADD ESP,0x104                       ; 005694a0
    POP EBP                             ; 005694a6
    POP EDI                             ; 005694a7
    POP ESI                             ; 005694a8
    POP EBX                             ; 005694a9
    RET                                 ; 005694aa
    MOV EDX,0x5d5db2                    ; 005694ab
        ;   Label: LAB_005694ab
    MOV ECX,0xad                        ; 005694b0
    PUSH 0x5d5dc6                       ; 005694b5
    MOV dword ptr [0x01d71de0],EDX      ; 005694ba | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005694c0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005694c6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005694cb
    JMP 0x005693da                      ; 005694ce
        ;   XREF to: 005693da (UNCONDITIONAL_JUMP)  ; LAB_005693da

