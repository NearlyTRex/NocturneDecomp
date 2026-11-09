; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574310(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574ea0 at 00574f47
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574310
        ;   Label: engine_texture.cpp_FUN_00574310
    PUSH ESI                            ; 00574311
    PUSH EDI                            ; 00574312
    PUSH EBP                            ; 00574313
    MOV EDI,dword ptr [ESP + 0x18]      ; 00574314
    MOV EDI,dword ptr [EDI + 0x4]       ; 00574318
    AND EDI,0xffff                      ; 0057431b
    LEA EBX,[EDI*0x4 + 0x0]             ; 00574321
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574328
    SUB EBX,EDI                         ; 0057432c
    ADD ESI,0x4                         ; 0057432e
    SHL EBX,0x5                         ; 00574331
    ADD EBX,ESI                         ; 00574334
    MOV EDX,dword ptr [EBX + 0x44]      ; 00574336
    TEST EDX,EDX                        ; 00574339
    JNZ 0x005743c0                      ; 0057433b
        ;   XREF to: 005743c0 (CONDITIONAL_JUMP)  ; LAB_005743c0
    MOV ESI,dword ptr [EBX + 0x48]      ; 00574341
        ;   Label: LAB_00574341
    TEST ESI,ESI                        ; 00574344
    JZ 0x00574351                       ; 00574346
        ;   XREF to: 00574351 (CONDITIONAL_JUMP)  ; LAB_00574351
    PUSH ESI                            ; 00574348
    CALL crt_unknown.c_FUN_005b86a0     ; 00574349
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057434e
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00574351
        ;   Label: LAB_00574351
    TEST EBP,EBP                        ; 00574354
    JZ 0x00574361                       ; 00574356
        ;   XREF to: 00574361 (CONDITIONAL_JUMP)  ; LAB_00574361
    PUSH EBP                            ; 00574358
    CALL crt_unknown.c_FUN_005b86a0     ; 00574359
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0057435e
    MOV EDX,dword ptr [EBX + 0x50]      ; 00574361
        ;   Label: LAB_00574361
    TEST EDX,EDX                        ; 00574364
    JNZ 0x005743ce                      ; 00574366
        ;   XREF to: 005743ce (CONDITIONAL_JUMP)  ; LAB_005743ce
    PUSH 0x60                           ; 00574368
        ;   Label: LAB_00574368
    PUSH 0x0                            ; 0057436a
    PUSH EBX                            ; 0057436c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057436d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00574372
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574375
    LEA EDI,[EBX + 0x4]                 ; 00574379
    ADD ESI,0x8                         ; 0057437c
    PUSH EDI                            ; 0057437f
    MOV AL,byte ptr [ESI]               ; 00574380
        ;   Label: LAB_00574380
    MOV byte ptr [EDI],AL               ; 00574382
    CMP AL,0x0                          ; 00574384
    JZ 0x00574398                       ; 00574386
        ;   XREF to: 00574398 (CONDITIONAL_JUMP)  ; LAB_00574398
    MOV AL,byte ptr [ESI + 0x1]         ; 00574388
    ADD ESI,0x2                         ; 0057438b
    MOV byte ptr [EDI + 0x1],AL         ; 0057438e
    ADD EDI,0x2                         ; 00574391
    CMP AL,0x0                          ; 00574394
    JNZ 0x00574380                      ; 00574396
        ;   XREF to: 00574380 (CONDITIONAL_JUMP)  ; LAB_00574380
    POP EDI                             ; 00574398
        ;   Label: LAB_00574398
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00574399
    MOV dword ptr [EBX + 0x58],0x1      ; 0057439d
    MOV dword ptr [EBX],ESI             ; 005743a4
    MOV ESI,dword ptr [ESP + 0x20]      ; 005743a6
    MOV dword ptr [EBX + 0x44],ESI      ; 005743aa
    MOV ESI,dword ptr [ESP + 0x24]      ; 005743ad
    MOV dword ptr [EBX + 0x4c],ESI      ; 005743b1
    MOV ESI,dword ptr [ESP + 0x28]      ; 005743b4
    MOV dword ptr [EBX + 0x48],ESI      ; 005743b8
    POP EBP                             ; 005743bb
    POP EDI                             ; 005743bc
    POP ESI                             ; 005743bd
    POP EBX                             ; 005743be
    RET                                 ; 005743bf
    PUSH EDX                            ; 005743c0
        ;   Label: LAB_005743c0
    CALL crt_unknown.c_FUN_005b86a0     ; 005743c1
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005743c6
    JMP 0x00574341                      ; 005743c9
        ;   XREF to: 00574341 (UNCONDITIONAL_JUMP)  ; LAB_00574341
    PUSH EDX                            ; 005743ce
        ;   Label: LAB_005743ce
    CALL crt_unknown.c_FUN_005b86a0     ; 005743cf
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005743d4
    JMP 0x00574368                      ; 005743d7
        ;   XREF to: 00574368 (UNCONDITIONAL_JUMP)  ; LAB_00574368

