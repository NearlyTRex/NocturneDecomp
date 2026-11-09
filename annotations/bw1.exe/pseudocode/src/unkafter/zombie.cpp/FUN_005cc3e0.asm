; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cc3e0(char *param_1,uint *param_2,uint param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8e7a at 005c8eda
;
; Called Functions:
;   crt_unknown.c_FUN_005c7254
;   crt_unknown.c_FUN_005c8094
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc3e0
        ;   Label: unkafter_zombie.cpp_FUN_005cc3e0
    PUSH ESI                            ; 005cc3e1
    SUB ESP,0x48                        ; 005cc3e2
    MOV ECX,dword ptr [ESP + 0x58]      ; 005cc3e5
    MOV EAX,dword ptr [ECX]             ; 005cc3e9
    MOV EDX,EAX                         ; 005cc3eb
    AND EDX,0x3                         ; 005cc3ed
    CMP EDX,0x3                         ; 005cc3f0
    JNZ 0x005cc3fc                      ; 005cc3f3
        ;   XREF to: 005cc3fc (CONDITIONAL_JUMP)  ; LAB_005cc3fc
    MOV EBX,0x22                        ; 005cc3f5
    JMP 0x005cc417                      ; 005cc3fa
        ;   XREF to: 005cc417 (UNCONDITIONAL_JUMP)  ; LAB_005cc417
    TEST AL,0x1                         ; 005cc3fc
        ;   Label: LAB_005cc3fc
    JZ 0x005cc404                       ; 005cc3fe
        ;   XREF to: 005cc404 (CONDITIONAL_JUMP)  ; LAB_005cc404
    XOR EBX,EBX                         ; 005cc400
    JMP 0x005cc417                      ; 005cc402
        ;   XREF to: 005cc417 (UNCONDITIONAL_JUMP)  ; LAB_005cc417
    TEST AL,0x2                         ; 005cc404
        ;   Label: LAB_005cc404
    JNZ 0x005cc412                      ; 005cc406
        ;   XREF to: 005cc412 (CONDITIONAL_JUMP)  ; LAB_005cc412
    MOV EAX,0xffffffff                  ; 005cc408
    JMP 0x005cc4cc                      ; 005cc40d
        ;   XREF to: 005cc4cc (UNCONDITIONAL_JUMP)  ; LAB_005cc4cc
    MOV EBX,0x21                        ; 005cc412
        ;   Label: LAB_005cc412
    TEST AL,0x8                         ; 005cc417
        ;   Label: LAB_005cc417
    JZ 0x005cc41e                       ; 005cc419
        ;   XREF to: 005cc41e (CONDITIONAL_JUMP)  ; LAB_005cc41e
    OR BL,0x10                          ; 005cc41b
    TEST AL,0x10                        ; 005cc41e
        ;   Label: LAB_005cc41e
    JZ 0x005cc425                       ; 005cc420
        ;   XREF to: 005cc425 (CONDITIONAL_JUMP)  ; LAB_005cc425
    OR BL,0x40                          ; 005cc422
    TEST AL,0x20                        ; 005cc425
        ;   Label: LAB_005cc425
    JZ 0x005cc42c                       ; 005cc427
        ;   XREF to: 005cc42c (CONDITIONAL_JUMP)  ; LAB_005cc42c
    AND BL,0xdf                         ; 005cc429
    TEST AH,0x1                         ; 005cc42c
        ;   Label: LAB_005cc42c
    JZ 0x005cc436                       ; 005cc42f
        ;   XREF to: 005cc436 (CONDITIONAL_JUMP)  ; LAB_005cc436
    OR BH,0x2                           ; 005cc431
    JMP 0x005cc440                      ; 005cc434
        ;   XREF to: 005cc440 (UNCONDITIONAL_JUMP)  ; LAB_005cc440
    MOV DL,byte ptr [ECX]               ; 005cc436
        ;   Label: LAB_005cc436
    OR DL,0x80                          ; 005cc438
    OR BH,0x1                           ; 005cc43b
    MOV byte ptr [ECX],DL               ; 005cc43e
    TEST AL,0x40                        ; 005cc440
        ;   Label: LAB_005cc440
    JZ 0x005cc46c                       ; 005cc442
        ;   XREF to: 005cc46c (CONDITIONAL_JUMP)  ; LAB_005cc46c
    MOV EAX,EBX                         ; 005cc444
    OR AL,0x20                          ; 005cc446
    TEST EAX,EAX                        ; 005cc448
    JZ 0x005cc46c                       ; 005cc44a
        ;   XREF to: 005cc46c (CONDITIONAL_JUMP)  ; LAB_005cc46c
    MOV EAX,ESP                         ; 005cc44c
    PUSH EAX                            ; 005cc44e
    MOV EDX,dword ptr [ESP + 0x58]      ; 005cc44f
    PUSH EDX                            ; 005cc453
    CALL crt_unknown.c_FUN_005c8094     ; 005cc454
        ;   XREF to: 005c8094 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c8094(char * filename, WatcomStat * file_info)
    ADD ESP,0x8                         ; 005cc459
    CMP EAX,-0x1                        ; 005cc45c
    JZ 0x005cc46c                       ; 005cc45f
        ;   XREF to: 005cc46c (CONDITIONAL_JUMP)  ; LAB_005cc46c
    MOV EAX,0xffffffff                  ; 005cc461
    ADD ESP,0x48                        ; 005cc466
    POP ESI                             ; 005cc469
    POP EBX                             ; 005cc46a
    RET                                 ; 005cc46b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005cc46c
        ;   Label: LAB_005cc46c
    AND EAX,0x7000                      ; 005cc470
    XOR EDX,EDX                         ; 005cc475
    CMP EAX,0x2000                      ; 005cc477
    JC 0x005cc492                       ; 005cc47c
        ;   XREF to: 005cc492 (CONDITIONAL_JUMP)  ; LAB_005cc492
    JBE 0x005cc4a0                      ; 005cc47e
        ;   XREF to: 005cc4a0 (CONDITIONAL_JUMP)  ; LAB_005cc4a0
    CMP EAX,0x3000                      ; 005cc480
    JC 0x005cc4b3                       ; 005cc485
        ;   XREF to: 005cc4b3 (CONDITIONAL_JUMP)  ; LAB_005cc4b3
    JBE 0x005cc4a7                      ; 005cc487
        ;   XREF to: 005cc4a7 (CONDITIONAL_JUMP)  ; LAB_005cc4a7
    CMP EAX,0x4000                      ; 005cc489
    JZ 0x005cc4ae                       ; 005cc48e
        ;   XREF to: 005cc4ae (CONDITIONAL_JUMP)  ; LAB_005cc4ae
    JMP 0x005cc4b3                      ; 005cc490
        ;   XREF to: 005cc4b3 (UNCONDITIONAL_JUMP)  ; LAB_005cc4b3
    CMP EAX,0x1000                      ; 005cc492
        ;   Label: LAB_005cc492
    JNZ 0x005cc4b3                      ; 005cc497
        ;   XREF to: 005cc4b3 (CONDITIONAL_JUMP)  ; LAB_005cc4b3
    MOV EDX,0x20                        ; 005cc499
    JMP 0x005cc4b3                      ; 005cc49e
        ;   XREF to: 005cc4b3 (UNCONDITIONAL_JUMP)  ; LAB_005cc4b3
    MOV EDX,0x30                        ; 005cc4a0
        ;   Label: LAB_005cc4a0
    JMP 0x005cc4b3                      ; 005cc4a5
        ;   XREF to: 005cc4b3 (UNCONDITIONAL_JUMP)  ; LAB_005cc4b3
    MOV EDX,0x40                        ; 005cc4a7
        ;   Label: LAB_005cc4a7
    JMP 0x005cc4b3                      ; 005cc4ac
        ;   XREF to: 005cc4b3 (UNCONDITIONAL_JUMP)  ; LAB_005cc4b3
    MOV EDX,0x10                        ; 005cc4ae
        ;   Label: LAB_005cc4ae
    AND byte ptr [ESP + 0x5d],0x8f      ; 005cc4b3
        ;   Label: LAB_005cc4b3
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005cc4b8
    PUSH ECX                            ; 005cc4bc
    PUSH EDX                            ; 005cc4bd
    PUSH EBX                            ; 005cc4be
    MOV ESI,dword ptr [ESP + 0x60]      ; 005cc4bf
    PUSH ESI                            ; 005cc4c3
    CALL crt_unknown.c_FUN_005c7254     ; 005cc4c4
        ;   XREF to: 005c7254 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7254()
    ADD ESP,0x10                        ; 005cc4c9
    ADD ESP,0x48                        ; 005cc4cc
        ;   Label: LAB_005cc4cc
    POP ESI                             ; 005cc4cf
    POP EBX                             ; 005cc4d0
    RET                                 ; 005cc4d1

