; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bea80(undefined4 *param_1)
;
;
; XREF[8]:
;   FUN_005b8af0 at 005b8b1c
;   FUN_005b929c at 005b92cc
;   FUN_005b9690 at 005b97d8
;   FUN_005bab40 at 005bac01
;   FUN_005bcd10 at 005bcdbf
;   FUN_005be27c at 005be2a7
;   FUN_005c1b30 at 005c1b41
;   FUN_005c5e50 at 005c5ed7
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;
; Called Functions:
;   FUN_005bce04
;   FUN_005be180
;   FUN_005bebb0
;   FUN_005bfb00
;   FUN_005c3870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bea80
        ;   Label: FUN_005bea80
    PUSH ESI                            ; 005bea81
    PUSH EDI                            ; 005bea82
    PUSH EBP                            ; 005bea83
    SUB ESP,0x4                         ; 005bea84
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bea87
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bea8b
    PUSH EDX                            ; 005bea8e
    XOR EDI,EDI                         ; 005bea8f
    CALL dword ptr [0x0061f2a8]         ; 005bea91 | PTR_FUN_0061f2a8
    MOV AH,byte ptr [EBX + 0xd]         ; 005bea97
    ADD ESP,0x4                         ; 005bea9a
    TEST AH,0x10                        ; 005bea9d
    JZ 0x005beb26                       ; 005beaa0
        ;   XREF to: 005beb26 (CONDITIONAL_JUMP)  ; LAB_005beb26
    MOV CH,AH                           ; 005beaa6
    AND CH,0xef                         ; 005beaa8
    MOV AL,byte ptr [EBX + 0xc]         ; 005beaab
    MOV byte ptr [EBX + 0xd],CH         ; 005beaae
    TEST AL,0x2                         ; 005beab1
    JZ 0x005beb61                       ; 005beab3
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    MOV EBP,dword ptr [EBX + 0x8]       ; 005beab9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005beabc
    TEST EAX,EAX                        ; 005beabf
    JZ 0x005beb61                       ; 005beac1
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    MOV ESI,dword ptr [EBX + 0x4]       ; 005beac7
    MOV EBP,EAX                         ; 005beaca
    TEST ESI,ESI                        ; 005beacc
    JZ 0x005beb61                       ; 005beace
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    TEST EDI,EDI                        ; 005bead4
        ;   Label: LAB_005bead4
    JNZ 0x005beb61                      ; 005bead6
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    PUSH ESI                            ; 005beadc
    PUSH EBP                            ; 005beadd
    MOV EAX,dword ptr [EBX + 0x10]      ; 005beade
    PUSH EAX                            ; 005beae1
    CALL FUN_005bfb00                   ; 005beae2
        ;   XREF to: 005bfb00 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb00()
    ADD ESP,0xc                         ; 005beae7
    MOV dword ptr [ESP],EAX             ; 005beaea
    CMP EAX,-0x1                        ; 005beaed
    JNZ 0x005beaff                      ; 005beaf0
        ;   XREF to: 005beaff (CONDITIONAL_JUMP)  ; LAB_005beaff
    MOV DL,byte ptr [EBX + 0xc]         ; 005beaf2
    OR DL,0x20                          ; 005beaf5
    MOV EDI,EAX                         ; 005beaf8
    MOV byte ptr [EBX + 0xc],DL         ; 005beafa
    JMP 0x005beb1b                      ; 005beafd
        ;   XREF to: 005beb1b (UNCONDITIONAL_JUMP)  ; LAB_005beb1b
    TEST EAX,EAX                        ; 005beaff
        ;   Label: LAB_005beaff
    JNZ 0x005beb1b                      ; 005beb01
        ;   XREF to: 005beb1b (CONDITIONAL_JUMP)  ; LAB_005beb1b
    PUSH 0xc                            ; 005beb03
    CALL FUN_005be180                   ; 005beb05
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    MOV AH,byte ptr [EBX + 0xc]         ; 005beb0a
    MOV EDI,0xffffffff                  ; 005beb0d
    OR AH,0x20                          ; 005beb12
    ADD ESP,0x4                         ; 005beb15
    MOV byte ptr [EBX + 0xc],AH         ; 005beb18
    MOV EDX,dword ptr [ESP]             ; 005beb1b
        ;   Label: LAB_005beb1b
    ADD EBP,EDX                         ; 005beb1e
    SUB ESI,EDX                         ; 005beb20
    JNZ 0x005bead4                      ; 005beb22
        ;   XREF to: 005bead4 (CONDITIONAL_JUMP)  ; LAB_005bead4
    JMP 0x005beb61                      ; 005beb24
        ;   XREF to: 005beb61 (UNCONDITIONAL_JUMP)  ; LAB_005beb61
    MOV EAX,dword ptr [EBX + 0x8]       ; 005beb26
        ;   Label: LAB_005beb26
    CMP dword ptr [EAX + 0x8],0x0       ; 005beb29
    JZ 0x005beb61                       ; 005beb2d
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    AND byte ptr [EBX + 0xc],0xef       ; 005beb2f
    TEST byte ptr [EBX + 0xd],0x20      ; 005beb33
    JNZ 0x005beb61                      ; 005beb37
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    MOV EAX,dword ptr [EBX + 0x4]       ; 005beb39
    TEST EAX,EAX                        ; 005beb3c
    JZ 0x005beb51                       ; 005beb3e
        ;   XREF to: 005beb51 (CONDITIONAL_JUMP)  ; LAB_005beb51
    PUSH 0x1                            ; 005beb40
    NEG EAX                             ; 005beb42
    PUSH EAX                            ; 005beb44
    MOV ESI,dword ptr [EBX + 0x10]      ; 005beb45
    PUSH ESI                            ; 005beb48
    CALL FUN_005bebb0                   ; 005beb49
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bebb0()
    ADD ESP,0xc                         ; 005beb4e
    CMP EAX,-0x1                        ; 005beb51
        ;   Label: LAB_005beb51
    JNZ 0x005beb61                      ; 005beb54
        ;   XREF to: 005beb61 (CONDITIONAL_JUMP)  ; LAB_005beb61
    MOV CL,byte ptr [EBX + 0xc]         ; 005beb56
    OR CL,0x20                          ; 005beb59
    MOV EDI,EAX                         ; 005beb5c
    MOV byte ptr [EBX + 0xc],CL         ; 005beb5e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005beb61
        ;   Label: LAB_005beb61
    MOV EAX,dword ptr [EAX + 0x8]       ; 005beb64
    MOV dword ptr [EBX + 0x4],0x0       ; 005beb67
    MOV dword ptr [EBX],EAX             ; 005beb6e
    TEST EDI,EDI                        ; 005beb70
    JNZ 0x005beb90                      ; 005beb72
        ;   XREF to: 005beb90 (CONDITIONAL_JUMP)  ; LAB_005beb90
    MOV EAX,dword ptr [EBX + 0x8]       ; 005beb74
    TEST byte ptr [EAX + 0x10],0x1      ; 005beb77
    JZ 0x005beb90                       ; 005beb7b
        ;   XREF to: 005beb90 (CONDITIONAL_JUMP)  ; LAB_005beb90
    MOV EDX,dword ptr [EBX + 0x10]      ; 005beb7d
    PUSH EDX                            ; 005beb80
    CALL FUN_005c3870                   ; 005beb81
        ;   XREF to: 005c3870 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3870()
    ADD ESP,0x4                         ; 005beb86
    CMP EAX,-0x1                        ; 005beb89
    JNZ 0x005beb90                      ; 005beb8c
        ;   XREF to: 005beb90 (CONDITIONAL_JUMP)  ; LAB_005beb90
    MOV EDI,EAX                         ; 005beb8e
    MOV ECX,dword ptr [EBX + 0x10]      ; 005beb90
        ;   Label: LAB_005beb90
    PUSH ECX                            ; 005beb93
    CALL dword ptr [0x0061f2ac]         ; 005beb94 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005beb9a
    MOV EAX,EDI                         ; 005beb9d
    ADD ESP,0x4                         ; 005beb9f
    POP EBP                             ; 005beba2
    POP EDI                             ; 005beba3
    POP ESI                             ; 005beba4
    POP EBX                             ; 005beba5
    RET                                 ; 005beba6

