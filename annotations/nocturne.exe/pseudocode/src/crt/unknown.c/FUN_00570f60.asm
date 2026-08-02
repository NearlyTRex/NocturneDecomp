; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00570f60(void)
;
;
; Referenced Globals:
;   undefined4 SUB_00570f50
;   undefined4 DAT_005c1d09
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a4
;   undefined4 DAT_02de5d60
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_unknown.c_FUN_005638d0
;   crt_unknown.c_FUN_00572b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570f60
        ;   Label: crt_unknown.c_FUN_00570f60
    PUSH ESI                            ; 00570f61
    PUSH EDI                            ; 00570f62
    PUSH EBP                            ; 00570f63
    MOV EDI,dword ptr [0x02de54a4]      ; 00570f64 | DAT_02de54a4
    TEST EDI,EDI                        ; 00570f6a
    JNZ 0x0057103e                      ; 00570f6c
        ;   XREF to: 0057103e (CONDITIONAL_JUMP)  ; LAB_0057103e
    MOV EBP,dword ptr [0x005c1d09]      ; 00570f72 | DAT_005c1d09
    XOR ESI,ESI                         ; 00570f78
    MOV DL,byte ptr [EBP]               ; 00570f7a
    MOV EAX,EBP                         ; 00570f7d
    TEST DL,DL                          ; 00570f7f
    JZ 0x00570f99                       ; 00570f81
        ;   XREF to: 00570f99 (CONDITIONAL_JUMP)  ; LAB_00570f99
    MOV DH,byte ptr [EAX]               ; 00570f83
        ;   Label: LAB_00570f83
    LEA EBX,[EAX + 0x1]                 ; 00570f85
    TEST DH,DH                          ; 00570f88
    JZ 0x00570f90                       ; 00570f8a
        ;   XREF to: 00570f90 (CONDITIONAL_JUMP)  ; LAB_00570f90
    MOV EAX,EBX                         ; 00570f8c
    JMP 0x00570f83                      ; 00570f8e
        ;   XREF to: 00570f83 (UNCONDITIONAL_JUMP)  ; LAB_00570f83
    INC ESI                             ; 00570f90
        ;   Label: LAB_00570f90
    MOV DH,byte ptr [EBX]               ; 00570f91
    MOV EAX,EBX                         ; 00570f93
    TEST DH,DH                          ; 00570f95
    JNZ 0x00570f83                      ; 00570f97
        ;   XREF to: 00570f83 (CONDITIONAL_JUMP)  ; LAB_00570f83
    MOV dword ptr [0x02de54a4],EDI      ; 00570f99 | DAT_02de54a4
        ;   Label: LAB_00570f99
    SUB EAX,EBP                         ; 00570f9f
    JNZ 0x00570fa8                      ; 00570fa1
        ;   XREF to: 00570fa8 (CONDITIONAL_JUMP)  ; LAB_00570fa8
    MOV EAX,0x1                         ; 00570fa3
    PUSH EAX                            ; 00570fa8
        ;   Label: LAB_00570fa8
    CALL 0x00570f50                     ; 00570fa9
        ;   XREF to: 00570f50 (UNCONDITIONAL_CALL)  ; SUB_00570f50
    MOV EBX,EAX                         ; 00570fae
    ADD ESP,0x4                         ; 00570fb0
    TEST EAX,EAX                        ; 00570fb3
    JZ 0x00571039                       ; 00570fb5
        ;   XREF to: 00571039 (CONDITIONAL_JUMP)  ; LAB_00571039
    MOV [0x02de5d60],EAX                ; 00570fbb | DAT_02de5d60
    LEA EAX,[ESI*0x4 + 0x0]             ; 00570fc0
    ADD EAX,0x4                         ; 00570fc7
    ADD ESI,EAX                         ; 00570fca
    PUSH ESI                            ; 00570fcc
    CALL 0x00570f50                     ; 00570fcd
        ;   XREF to: 00570f50 (UNCONDITIONAL_CALL)  ; SUB_00570f50
    ADD ESP,0x4                         ; 00570fd2
    TEST EAX,EAX                        ; 00570fd5
    JZ 0x00571030                       ; 00570fd7
        ;   XREF to: 00571030 (CONDITIONAL_JUMP)  ; LAB_00571030
    MOV EDI,EAX                         ; 00570fd9
    MOV DL,byte ptr [EBP]               ; 00570fdb
    XOR ESI,ESI                         ; 00570fde
    XOR ECX,ECX                         ; 00570fe0
    MOV EAX,EBP                         ; 00570fe2
    TEST DL,DL                          ; 00570fe4
    JZ 0x00571002                       ; 00570fe6
        ;   XREF to: 00571002 (CONDITIONAL_JUMP)  ; LAB_00571002
    MOV EDX,EDI                         ; 00570fe8
        ;   Label: LAB_00570fe8
    MOV dword ptr [ECX + EDX*0x1],EBX   ; 00570fea
    INC EBX                             ; 00570fed
        ;   Label: LAB_00570fed
    MOV DL,byte ptr [EAX]               ; 00570fee
    INC EAX                             ; 00570ff0
    MOV byte ptr [EBX + -0x1],DL        ; 00570ff1
    TEST DL,DL                          ; 00570ff4
    JNZ 0x00570fed                      ; 00570ff6
        ;   XREF to: 00570fed (CONDITIONAL_JUMP)  ; LAB_00570fed
    ADD ECX,0x4                         ; 00570ff8
    MOV DL,byte ptr [EAX]               ; 00570ffb
    INC ESI                             ; 00570ffd
    TEST DL,DL                          ; 00570ffe
    JNZ 0x00570fe8                      ; 00571000
        ;   XREF to: 00570fe8 (CONDITIONAL_JUMP)  ; LAB_00570fe8
    MOV EAX,EDI                         ; 00571002
        ;   Label: LAB_00571002
    PUSH ESI                            ; 00571004
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 00571005
    ADD ECX,0x4                         ; 0057100c
    PUSH 0x0                            ; 0057100f
    LEA EAX,[EDI + ECX*0x1]             ; 00571011
    PUSH EAX                            ; 00571014
    MOV [0x02de54a0],EAX                ; 00571015 | DAT_02de54a0
    MOV dword ptr [0x02de54a4],EDI      ; 0057101a | DAT_02de54a4
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00571020
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x02de54a4]      ; 00571025 | DAT_02de54a4
    ADD ESP,0xc                         ; 0057102b
    JMP 0x00571039                      ; 0057102e
        ;   XREF to: 00571039 (UNCONDITIONAL_JUMP)  ; LAB_00571039
    PUSH EBX                            ; 00571030
        ;   Label: LAB_00571030
    CALL crt_unknown.c_FUN_005638d0     ; 00571031
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00571036
    CALL crt_unknown.c_FUN_00572b70     ; 00571039
        ;   XREF to: 00572b70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00572b70()
        ;   Label: LAB_00571039
    MOV EDI,dword ptr [0x02de54a4]      ; 0057103e | DAT_02de54a4
        ;   Label: LAB_0057103e
    POP EBP                             ; 00571044
    POP EDI                             ; 00571045
    POP ESI                             ; 00571046
    POP EBX                             ; 00571047
    RET                                 ; 00571048

