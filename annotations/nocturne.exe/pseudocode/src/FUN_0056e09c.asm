; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e09c(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00572b70 at 00572c7d
;
; Referenced Globals:
;   void* PTR_FUN_005c1af0 = 005671e4
;   void* PTR_FUN_005c1af4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f58
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e09c
        ;   Label: FUN_0056e09c
    PUSH ESI                            ; 0056e09d
    PUSH EDI                            ; 0056e09e
    PUSH EBP                            ; 0056e09f
    MOV ESI,dword ptr [0x005c1f54]      ; 0056e0a0 | DAT_005c1f54
    MOV EDI,dword ptr [ESP + 0x18]      ; 0056e0a6
    TEST EDI,EDI                        ; 0056e0aa
    JL 0x0056e166                       ; 0056e0ac
        ;   XREF to: 0056e166 (CONDITIONAL_JUMP)  ; LAB_0056e166
    CALL dword ptr [0x005c1af0]         ; 0056e0b2 | PTR_FUN_005c1af0
    CMP EDI,0x1                         ; 0056e0b8
    JC 0x0056e0c6                       ; 0056e0bb
        ;   XREF to: 0056e0c6 (CONDITIONAL_JUMP)  ; LAB_0056e0c6
    JBE 0x0056e0d3                      ; 0056e0bd
        ;   XREF to: 0056e0d3 (CONDITIONAL_JUMP)  ; LAB_0056e0d3
    CMP EDI,0x2                         ; 0056e0bf
    JZ 0x0056e0dc                       ; 0056e0c2
        ;   XREF to: 0056e0dc (CONDITIONAL_JUMP)  ; LAB_0056e0dc
    JMP 0x0056e0ea                      ; 0056e0c4
        ;   XREF to: 0056e0ea (UNCONDITIONAL_JUMP)  ; LAB_0056e0ea
    TEST EDI,EDI                        ; 0056e0c6
        ;   Label: LAB_0056e0c6
    JNZ 0x0056e0ea                      ; 0056e0c8
        ;   XREF to: 0056e0ea (CONDITIONAL_JUMP)  ; LAB_0056e0ea
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056e0ca
    PUSH ECX                            ; 0056e0ce
    PUSH -0xa                           ; 0056e0cf
    JMP 0x0056e0e3                      ; 0056e0d1
        ;   XREF to: 0056e0e3 (UNCONDITIONAL_JUMP)  ; LAB_0056e0e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056e0d3
        ;   Label: LAB_0056e0d3
    PUSH EBX                            ; 0056e0d7
    PUSH -0xb                           ; 0056e0d8
    JMP 0x0056e0e3                      ; 0056e0da
        ;   XREF to: 0056e0e3 (UNCONDITIONAL_JUMP)  ; LAB_0056e0e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056e0dc
        ;   Label: LAB_0056e0dc
    PUSH EDX                            ; 0056e0e0
    PUSH -0xc                           ; 0056e0e1
    CALL dword ptr CS:[0x5755ac]        ; 0056e0e3
        ;   Label: LAB_0056e0e3
    MOV EBP,dword ptr [0x005c1f58]      ; 0056e0ea | DAT_005c1f58
        ;   Label: LAB_0056e0ea
    LEA EBX,[EDI*0x4 + 0x0]             ; 0056e0f0
    MOV ESI,dword ptr [0x005c1f54]      ; 0056e0f7 | DAT_005c1f54
    CMP EDI,EBP                         ; 0056e0fd
    JGE 0x0056e10b                      ; 0056e0ff
        ;   XREF to: 0056e10b (CONDITIONAL_JUMP)  ; LAB_0056e10b
    ADD EBX,ESI                         ; 0056e101
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056e103
    MOV dword ptr [EBX],EAX             ; 0056e107
    JMP 0x0056e15a                      ; 0056e109
        ;   XREF to: 0056e15a (UNCONDITIONAL_JUMP)  ; LAB_0056e15a
    LEA EAX,[EBX + 0x4]                 ; 0056e10b
        ;   Label: LAB_0056e10b
    PUSH EAX                            ; 0056e10e
    PUSH ESI                            ; 0056e10f
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0056e110
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV EDX,dword ptr [0x005c1f58]      ; 0056e115 | DAT_005c1f58
    ADD ESP,0x8                         ; 0056e11b
    MOV ESI,EAX                         ; 0056e11e
    CMP EDX,EDI                         ; 0056e120
    JGE 0x0056e13e                      ; 0056e122
        ;   XREF to: 0056e13e (CONDITIONAL_JUMP)  ; LAB_0056e13e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056e124
    MOV ECX,EBX                         ; 0056e12b
    MOV EBX,ESI                         ; 0056e12d
    MOV dword ptr [EBX + EAX*0x1],0x0   ; 0056e12f
        ;   Label: LAB_0056e12f
    ADD EAX,0x4                         ; 0056e136
    INC EDX                             ; 0056e139
    CMP EAX,ECX                         ; 0056e13a
    JL 0x0056e12f                       ; 0056e13c
        ;   XREF to: 0056e12f (CONDITIONAL_JUMP)  ; LAB_0056e12f
    LEA EAX,[EDI*0x4 + 0x0]             ; 0056e13e
        ;   Label: LAB_0056e13e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056e145
    INC EDI                             ; 0056e149
    ADD EAX,ESI                         ; 0056e14a
    MOV dword ptr [0x005c1f54],ESI      ; 0056e14c | DAT_005c1f54
    MOV dword ptr [0x005c1f58],EDI      ; 0056e152 | DAT_005c1f58
    MOV dword ptr [EAX],EDX             ; 0056e158
    CALL dword ptr [0x005c1af4]         ; 0056e15a | PTR_FUN_005c1af4
        ;   Label: LAB_0056e15a
    MOV ESI,dword ptr [0x005c1f54]      ; 0056e160 | DAT_005c1f54
    MOV ESI,dword ptr [0x005c1f54]      ; 0056e166 | DAT_005c1f54
        ;   Label: LAB_0056e166
    POP EBP                             ; 0056e16c
    POP EDI                             ; 0056e16d
    POP ESI                             ; 0056e16e
    POP EBX                             ; 0056e16f
    RET                                 ; 0056e170

