; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005cefe4(short *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cee44 at 005ceef0
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005cf2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cefe4
        ;   Label: crt_unknown.c_FUN_005cefe4
    PUSH ESI                            ; 005cefe5
    PUSH EDI                            ; 005cefe6
    PUSH EBP                            ; 005cefe7
    MOV EBP,dword ptr [0x02c9f6d8]      ; 005cefe8 | DAT_02c9f6d8
    JMP 0x005cf0d8                      ; 005cefee
        ;   XREF to: 005cf0d8 (UNCONDITIONAL_JUMP)  ; LAB_005cf0d8
    MOV ESI,dword ptr [ESP + 0x14]      ; 005ceff3
        ;   Label: LAB_005ceff3
    CMP word ptr [ESI],0x0              ; 005ceff7
    JZ 0x005cf0d5                       ; 005ceffb
        ;   XREF to: 005cf0d5 (CONDITIONAL_JUMP)  ; LAB_005cf0d5
    XOR EAX,EAX                         ; 005cf001
        ;   Label: LAB_005cf001
    MOV AX,word ptr [EBX]               ; 005cf003
    PUSH EAX                            ; 005cf006
    CALL crt_unknown.c_FUN_005cf2d0     ; 005cf007
        ;   XREF to: 005cf2d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cf2d0()
    MOV EDI,EAX                         ; 005cf00c
    XOR EAX,EAX                         ; 005cf00e
    ADD ESP,0x4                         ; 005cf010
    MOV AX,word ptr [ESI]               ; 005cf013
    PUSH EAX                            ; 005cf016
    CALL crt_unknown.c_FUN_005cf2d0     ; 005cf017
        ;   XREF to: 005cf2d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cf2d0()
    ADD ESP,0x4                         ; 005cf01c
    CMP DI,AX                           ; 005cf01f
    JNZ 0x005cf0d5                      ; 005cf022
        ;   XREF to: 005cf0d5 (CONDITIONAL_JUMP)  ; LAB_005cf0d5
    CMP word ptr [EBX],0x3d             ; 005cf028
    JNZ 0x005cf0c2                      ; 005cf02c
        ;   XREF to: 005cf0c2 (CONDITIONAL_JUMP)  ; LAB_005cf0c2
    MOV EDX,dword ptr [0x02c9f6d8]      ; 005cf032 | DAT_02c9f6d8
    MOV ESI,EBP                         ; 005cf038
    SUB ESI,EDX                         ; 005cf03a
    MOV EBX,dword ptr [ESP + 0x18]      ; 005cf03c
    SAR ESI,0x2                         ; 005cf040
    TEST EBX,EBX                        ; 005cf043
    JZ 0x005cf0ba                       ; 005cf045
        ;   XREF to: 005cf0ba (CONDITIONAL_JUMP)  ; LAB_005cf0ba
    MOV EDX,dword ptr [EBP]             ; 005cf04b
    MOV EBX,EBP                         ; 005cf04e
    TEST EDX,EDX                        ; 005cf050
    JZ 0x005cf063                       ; 005cf052
        ;   XREF to: 005cf063 (CONDITIONAL_JUMP)  ; LAB_005cf063
    MOV EAX,dword ptr [EBX + 0x4]       ; 005cf054
        ;   Label: LAB_005cf054
    MOV dword ptr [EBX],EAX             ; 005cf057
    MOV ECX,dword ptr [EBX + 0x4]       ; 005cf059
    ADD EBX,0x4                         ; 005cf05c
    TEST ECX,ECX                        ; 005cf05f
    JNZ 0x005cf054                      ; 005cf061
        ;   XREF to: 005cf054 (CONDITIONAL_JUMP)  ; LAB_005cf054
    MOV EDI,dword ptr [0x02c9f6d0]      ; 005cf063 | DAT_02c9f6d0
        ;   Label: LAB_005cf063
    TEST EDI,EDI                        ; 005cf069
    JZ 0x005cf0b3                       ; 005cf06b
        ;   XREF to: 005cf0b3 (CONDITIONAL_JUMP)  ; LAB_005cf0b3
    MOV EAX,EDI                         ; 005cf06d
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005cf06f
    JZ 0x005cf07e                       ; 005cf073
        ;   XREF to: 005cf07e (CONDITIONAL_JUMP)  ; LAB_005cf07e
    PUSH EDX                            ; 005cf075
    CALL crt_unknown.c_FUN_005c09f0     ; 005cf076
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005cf07b
    MOV EAX,[0x02c9f6d8]                ; 005cf07e | DAT_02c9f6d8
        ;   Label: LAB_005cf07e
    MOV EBP,EBX                         ; 005cf083
    SUB EBP,EAX                         ; 005cf085
    SAR EBP,0x2                         ; 005cf087
    PUSH EBP                            ; 005cf08a
    MOV EDX,dword ptr [0x02c9f6d0]      ; 005cf08b | DAT_02c9f6d0
    PUSH EDX                            ; 005cf091
    PUSH EBX                            ; 005cf092
    CALL crt_string.c_memmove_FUN_005c25d0 ; 005cf093
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005cf098
    MOV dword ptr [0x02c9f6d0],EBX      ; 005cf09b | DAT_02c9f6d0
    CMP ESI,EBP                         ; 005cf0a1
    JGE 0x005cf0b3                      ; 005cf0a3
        ;   XREF to: 005cf0b3 (CONDITIONAL_JUMP)  ; LAB_005cf0b3
    LEA EAX,[ESI + EBX*0x1]             ; 005cf0a5
    INC EAX                             ; 005cf0a8
        ;   Label: LAB_005cf0a8
    MOV BL,byte ptr [EAX]               ; 005cf0a9
    INC ESI                             ; 005cf0ab
    MOV byte ptr [EAX + -0x1],BL        ; 005cf0ac
    CMP ESI,EBP                         ; 005cf0af
    JL 0x005cf0a8                       ; 005cf0b1
        ;   XREF to: 005cf0a8 (CONDITIONAL_JUMP)  ; LAB_005cf0a8
    XOR EAX,EAX                         ; 005cf0b3
        ;   Label: LAB_005cf0b3
    POP EBP                             ; 005cf0b5
    POP EDI                             ; 005cf0b6
    POP ESI                             ; 005cf0b7
    POP EBX                             ; 005cf0b8
    RET                                 ; 005cf0b9
    LEA EAX,[ESI + 0x1]                 ; 005cf0ba
        ;   Label: LAB_005cf0ba
    POP EBP                             ; 005cf0bd
    POP EDI                             ; 005cf0be
    POP ESI                             ; 005cf0bf
    POP EBX                             ; 005cf0c0
    RET                                 ; 005cf0c1
    ADD EBX,0x2                         ; 005cf0c2
        ;   Label: LAB_005cf0c2
    MOV CX,word ptr [ESI + 0x2]         ; 005cf0c5
    ADD ESI,0x2                         ; 005cf0c9
    TEST CX,CX                          ; 005cf0cc
    JNZ 0x005cf001                      ; 005cf0cf
        ;   XREF to: 005cf001 (CONDITIONAL_JUMP)  ; LAB_005cf001
    ADD EBP,0x4                         ; 005cf0d5
        ;   Label: LAB_005cf0d5
    MOV EBX,dword ptr [EBP]             ; 005cf0d8
        ;   Label: LAB_005cf0d8
    TEST EBX,EBX                        ; 005cf0db
    JNZ 0x005ceff3                      ; 005cf0dd
        ;   XREF to: 005ceff3 (CONDITIONAL_JUMP)  ; LAB_005ceff3
    MOV EAX,[0x02c9f6d8]                ; 005cf0e3 | DAT_02c9f6d8
    SUB EAX,EBP                         ; 005cf0e8
    SAR EAX,0x2                         ; 005cf0ea
    POP EBP                             ; 005cf0ed
    POP EDI                             ; 005cf0ee
    POP ESI                             ; 005cf0ef
    POP EBX                             ; 005cf0f0
    RET                                 ; 005cf0f1

