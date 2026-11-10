; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cc8b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006265d9
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d4
;   undefined4 DAT_02c9ff90
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005cc8a0
;   crt_unknown.c_FUN_005cdce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc8b0
        ;   Label: crt_unknown.c_FUN_005cc8b0
    PUSH ESI                            ; 005cc8b1
    PUSH EDI                            ; 005cc8b2
    PUSH EBP                            ; 005cc8b3
    MOV EDI,dword ptr [0x02c9f6d4]      ; 005cc8b4 | DAT_02c9f6d4
    TEST EDI,EDI                        ; 005cc8ba
    JNZ 0x005cc98e                      ; 005cc8bc
        ;   XREF to: 005cc98e (CONDITIONAL_JUMP)  ; LAB_005cc98e
    MOV EBP,dword ptr [0x006265d9]      ; 005cc8c2 | DAT_006265d9
    XOR ESI,ESI                         ; 005cc8c8
    MOV DL,byte ptr [EBP]               ; 005cc8ca
    MOV EAX,EBP                         ; 005cc8cd
    TEST DL,DL                          ; 005cc8cf
    JZ 0x005cc8e9                       ; 005cc8d1
        ;   XREF to: 005cc8e9 (CONDITIONAL_JUMP)  ; LAB_005cc8e9
    MOV DH,byte ptr [EAX]               ; 005cc8d3
        ;   Label: LAB_005cc8d3
    LEA EBX,[EAX + 0x1]                 ; 005cc8d5
    TEST DH,DH                          ; 005cc8d8
    JZ 0x005cc8e0                       ; 005cc8da
        ;   XREF to: 005cc8e0 (CONDITIONAL_JUMP)  ; LAB_005cc8e0
    MOV EAX,EBX                         ; 005cc8dc
    JMP 0x005cc8d3                      ; 005cc8de
        ;   XREF to: 005cc8d3 (UNCONDITIONAL_JUMP)  ; LAB_005cc8d3
    INC ESI                             ; 005cc8e0
        ;   Label: LAB_005cc8e0
    MOV DH,byte ptr [EBX]               ; 005cc8e1
    MOV EAX,EBX                         ; 005cc8e3
    TEST DH,DH                          ; 005cc8e5
    JNZ 0x005cc8d3                      ; 005cc8e7
        ;   XREF to: 005cc8d3 (CONDITIONAL_JUMP)  ; LAB_005cc8d3
    MOV dword ptr [0x02c9f6d4],EDI      ; 005cc8e9 | DAT_02c9f6d4
        ;   Label: LAB_005cc8e9
    SUB EAX,EBP                         ; 005cc8ef
    JNZ 0x005cc8f8                      ; 005cc8f1
        ;   XREF to: 005cc8f8 (CONDITIONAL_JUMP)  ; LAB_005cc8f8
    MOV EAX,0x1                         ; 005cc8f3
    PUSH EAX                            ; 005cc8f8
        ;   Label: LAB_005cc8f8
    CALL crt_unknown.c_FUN_005cc8a0     ; 005cc8f9
        ;   XREF to: 005cc8a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc8a0()
    MOV EBX,EAX                         ; 005cc8fe
    ADD ESP,0x4                         ; 005cc900
    TEST EAX,EAX                        ; 005cc903
    JZ 0x005cc989                       ; 005cc905
        ;   XREF to: 005cc989 (CONDITIONAL_JUMP)  ; LAB_005cc989
    MOV [0x02c9ff90],EAX                ; 005cc90b | DAT_02c9ff90
    LEA EAX,[ESI*0x4 + 0x0]             ; 005cc910
    ADD EAX,0x4                         ; 005cc917
    ADD ESI,EAX                         ; 005cc91a
    PUSH ESI                            ; 005cc91c
    CALL crt_unknown.c_FUN_005cc8a0     ; 005cc91d
        ;   XREF to: 005cc8a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc8a0()
    ADD ESP,0x4                         ; 005cc922
    TEST EAX,EAX                        ; 005cc925
    JZ 0x005cc980                       ; 005cc927
        ;   XREF to: 005cc980 (CONDITIONAL_JUMP)  ; LAB_005cc980
    MOV EDI,EAX                         ; 005cc929
    MOV DL,byte ptr [EBP]               ; 005cc92b
    XOR ESI,ESI                         ; 005cc92e
    XOR ECX,ECX                         ; 005cc930
    MOV EAX,EBP                         ; 005cc932
    TEST DL,DL                          ; 005cc934
    JZ 0x005cc952                       ; 005cc936
        ;   XREF to: 005cc952 (CONDITIONAL_JUMP)  ; LAB_005cc952
    MOV EDX,EDI                         ; 005cc938
        ;   Label: LAB_005cc938
    MOV dword ptr [ECX + EDX*0x1],EBX   ; 005cc93a
    INC EBX                             ; 005cc93d
        ;   Label: LAB_005cc93d
    MOV DL,byte ptr [EAX]               ; 005cc93e
    INC EAX                             ; 005cc940
    MOV byte ptr [EBX + -0x1],DL        ; 005cc941
    TEST DL,DL                          ; 005cc944
    JNZ 0x005cc93d                      ; 005cc946
        ;   XREF to: 005cc93d (CONDITIONAL_JUMP)  ; LAB_005cc93d
    ADD ECX,0x4                         ; 005cc948
    MOV DL,byte ptr [EAX]               ; 005cc94b
    INC ESI                             ; 005cc94d
    TEST DL,DL                          ; 005cc94e
    JNZ 0x005cc938                      ; 005cc950
        ;   XREF to: 005cc938 (CONDITIONAL_JUMP)  ; LAB_005cc938
    MOV EAX,EDI                         ; 005cc952
        ;   Label: LAB_005cc952
    PUSH ESI                            ; 005cc954
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 005cc955
    ADD ECX,0x4                         ; 005cc95c
    PUSH 0x0                            ; 005cc95f
    LEA EAX,[EDI + ECX*0x1]             ; 005cc961
    PUSH EAX                            ; 005cc964
    MOV [0x02c9f6d0],EAX                ; 005cc965 | DAT_02c9f6d0
    MOV dword ptr [0x02c9f6d4],EDI      ; 005cc96a | DAT_02c9f6d4
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005cc970
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x02c9f6d4]      ; 005cc975 | DAT_02c9f6d4
    ADD ESP,0xc                         ; 005cc97b
    JMP 0x005cc989                      ; 005cc97e
        ;   XREF to: 005cc989 (UNCONDITIONAL_JUMP)  ; LAB_005cc989
    PUSH EBX                            ; 005cc980
        ;   Label: LAB_005cc980
    CALL crt_unknown.c_FUN_005c09f0     ; 005cc981
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005cc986
    CALL crt_unknown.c_FUN_005cdce0     ; 005cc989
        ;   XREF to: 005cdce0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cdce0()
        ;   Label: LAB_005cc989
    MOV EDI,dword ptr [0x02c9f6d4]      ; 005cc98e | DAT_02c9f6d4
        ;   Label: LAB_005cc98e
    POP EBP                             ; 005cc994
    POP EDI                             ; 005cc995
    POP ESI                             ; 005cc996
    POP EBX                             ; 005cc997
    RET                                 ; 005cc998

