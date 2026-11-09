; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_asgaya_cpp_FUN_005ad52f(int param_1,int *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a73c8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ad52f
        ;   Label: unkafter_asgaya.cpp_FUN_005ad52f
    MOV EBP,ESP                         ; 005ad530
    PUSH EBX                            ; 005ad532
    PUSH ESI                            ; 005ad533
    PUSH EDI                            ; 005ad534
    SUB ESP,0x40                        ; 005ad535
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ad538
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ad53b
    MOV EBX,dword ptr [EBP + 0x10]      ; 005ad53e
    XOR EAX,EAX                         ; 005ad541
    MOV AL,byte ptr [EBX + 0x15]        ; 005ad543
    MOV dword ptr [EBP + -0x40],EAX     ; 005ad546
    AND AL,0x5f                         ; 005ad549
    MOV ESI,dword ptr [EBX + 0x8]       ; 005ad54b
    AND EAX,0xff                        ; 005ad54e
    CMP EAX,0x47                        ; 005ad553
    JNZ 0x005ad57b                      ; 005ad556
        ;   XREF to: 005ad57b (CONDITIONAL_JUMP)  ; LAB_005ad57b
    TEST ESI,ESI                        ; 005ad558
    JNZ 0x005ad561                      ; 005ad55a
        ;   XREF to: 005ad561 (CONDITIONAL_JUMP)  ; LAB_005ad561
    MOV ESI,0x1                         ; 005ad55c
    MOV dword ptr [EBP + -0x44],0x4     ; 005ad561
        ;   Label: LAB_005ad561
    MOV ECX,dword ptr [EBP + -0x40]     ; 005ad568
    MOV EAX,0x1                         ; 005ad56b
    SUB ECX,0x2                         ; 005ad570
    MOV dword ptr [EBP + -0x48],EAX     ; 005ad573
    MOV dword ptr [EBP + -0x40],ECX     ; 005ad576
    JMP 0x005ad59a                      ; 005ad579
        ;   XREF to: 005ad59a (UNCONDITIONAL_JUMP)  ; LAB_005ad59a
    CMP EAX,0x45                        ; 005ad57b
        ;   Label: LAB_005ad57b
    JNZ 0x005ad58d                      ; 005ad57e
        ;   XREF to: 005ad58d (CONDITIONAL_JUMP)  ; LAB_005ad58d
    MOV ECX,0x1                         ; 005ad580
    MOV dword ptr [EBP + -0x44],ECX     ; 005ad585
    MOV dword ptr [EBP + -0x48],ECX     ; 005ad588
    JMP 0x005ad59a                      ; 005ad58b
        ;   XREF to: 005ad59a (UNCONDITIONAL_JUMP)  ; LAB_005ad59a
    MOV ECX,0x2                         ; 005ad58d
        ;   Label: LAB_005ad58d
    XOR EAX,EAX                         ; 005ad592
    MOV dword ptr [EBP + -0x44],ECX     ; 005ad594
    MOV dword ptr [EBP + -0x48],EAX     ; 005ad597
    TEST byte ptr [EBX + 0x1e],0x1      ; 005ad59a
        ;   Label: LAB_005ad59a
    JZ 0x005ad5a4                       ; 005ad59e
        ;   XREF to: 005ad5a4 (CONDITIONAL_JUMP)  ; LAB_005ad5a4
    OR byte ptr [EBP + -0x44],0x10      ; 005ad5a0
    MOV EAX,dword ptr [EDX]             ; 005ad5a4
        ;   Label: LAB_005ad5a4
    ADD EAX,0x8                         ; 005ad5a6
    MOV dword ptr [EDX],EAX             ; 005ad5a9
    MOV EDX,EAX                         ; 005ad5ab
    MOV EAX,dword ptr [EAX + -0x8]      ; 005ad5ad
    MOV dword ptr [EBP + -0x14],EAX     ; 005ad5b0
    MOV EAX,dword ptr [EDX + -0x4]      ; 005ad5b3
    LEA EDX,[EBP + -0x20]               ; 005ad5b6
    MOV dword ptr [EBP + -0x10],EAX     ; 005ad5b9
    LEA EAX,[EBP + -0x14]               ; 005ad5bc
    FLD double ptr [EAX]                ; 005ad5bf
    FSTP extended double ptr [EDX]      ; 005ad5c1
    CMP ESI,-0x1                        ; 005ad5c3
    JNZ 0x005ad5cd                      ; 005ad5c6
        ;   XREF to: 005ad5cd (CONDITIONAL_JUMP)  ; LAB_005ad5cd
    MOV ESI,0x6                         ; 005ad5c8
    LEA EAX,[EDI + 0x1]                 ; 005ad5cd
        ;   Label: LAB_005ad5cd
    PUSH EAX                            ; 005ad5d0
    LEA EAX,[EBP + -0x4c]               ; 005ad5d1
    PUSH EAX                            ; 005ad5d4
    LEA EAX,[EBP + -0x20]               ; 005ad5d5
    XOR EDX,EDX                         ; 005ad5d8
    PUSH EAX                            ; 005ad5da
    MOV dword ptr [EBP + -0x4c],ESI     ; 005ad5db
    MOV dword ptr [EBP + -0x3c],EDX     ; 005ad5de
    CALL crt_unknown.c_FUN_005a73c8     ; 005ad5e1
        ;   XREF to: 005a73c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a73c8()
    MOV EAX,dword ptr [EBP + -0x30]     ; 005ad5e6
    MOV dword ptr [EBX + 0x28],EAX      ; 005ad5e9
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005ad5ec
    MOV dword ptr [EBX + 0x2c],EAX      ; 005ad5ef
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ad5f2
    MOV dword ptr [EBX + 0x30],EAX      ; 005ad5f5
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ad5f8
    MOV dword ptr [EBX + 0x34],EAX      ; 005ad5fb
    MOV ECX,dword ptr [EBP + -0x38]     ; 005ad5fe
    ADD ESP,0xc                         ; 005ad601
    TEST ECX,ECX                        ; 005ad604
    JGE 0x005ad617                      ; 005ad606
        ;   XREF to: 005ad617 (CONDITIONAL_JUMP)  ; LAB_005ad617
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ad608
    LEA EDX,[EAX + 0x1]                 ; 005ad60b
    MOV dword ptr [EBX + 0x20],EDX      ; 005ad60e
    MOV byte ptr [EDI + EAX*0x1],0x2d   ; 005ad611
    JMP 0x005ad640                      ; 005ad615
        ;   XREF to: 005ad640 (UNCONDITIONAL_JUMP)  ; LAB_005ad640
    MOV CH,byte ptr [EBX + 0x1e]        ; 005ad617
        ;   Label: LAB_005ad617
    TEST CH,0x4                         ; 005ad61a
    JZ 0x005ad62e                       ; 005ad61d
        ;   XREF to: 005ad62e (CONDITIONAL_JUMP)  ; LAB_005ad62e
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ad61f
    LEA EDX,[EAX + 0x1]                 ; 005ad622
    MOV dword ptr [EBX + 0x20],EDX      ; 005ad625
    MOV byte ptr [EDI + EAX*0x1],0x2b   ; 005ad628
    JMP 0x005ad640                      ; 005ad62c
        ;   XREF to: 005ad640 (UNCONDITIONAL_JUMP)  ; LAB_005ad640
    TEST CH,0x2                         ; 005ad62e
        ;   Label: LAB_005ad62e
    JZ 0x005ad640                       ; 005ad631
        ;   XREF to: 005ad640 (CONDITIONAL_JUMP)  ; LAB_005ad640
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ad633
    LEA EDX,[EAX + 0x1]                 ; 005ad636
    MOV dword ptr [EBX + 0x20],EDX      ; 005ad639
    MOV byte ptr [EDI + EAX*0x1],0x20   ; 005ad63c
    MOV DX,DS                           ; 005ad640
        ;   Label: LAB_005ad640
    MOV EAX,EDI                         ; 005ad642
    LEA ESP,[EBP + -0xc]                ; 005ad644
    POP EDI                             ; 005ad647
    POP ESI                             ; 005ad648
    POP EBX                             ; 005ad649
    POP EBP                             ; 005ad64a
    RET                                 ; 005ad64b

