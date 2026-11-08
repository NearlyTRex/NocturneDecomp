; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005acecc(int param_1)
;
;
; XREF[1]:
;   FUN_005aceb0 at 005aceb2
;
; Referenced Globals:
;   undefined4 DAT_02d252a0
;
; Called Functions:
;   FUN_005a3ad4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acecc
        ;   Label: FUN_005acecc
    PUSH ESI                            ; 005acecd
    PUSH EDI                            ; 005acece
    MOV EDX,dword ptr [ESP + 0x10]      ; 005acecf
    LEA EAX,[EDX*0x4 + 0x0]             ; 005aced3
    SUB EAX,EDX                         ; 005aceda
    SHL EAX,0x2                         ; 005acedc
    ADD EAX,EDX                         ; 005acedf
    MOV EDI,0x607678                    ; 005acee1
    ADD EAX,EAX                         ; 005acee6
    ADD EDI,EAX                         ; 005acee8
    MOV EAX,[0x02d252a0]                ; 005aceea | DAT_02d252a0
    XOR EBX,EBX                         ; 005aceef
    TEST EAX,EAX                        ; 005acef1
    JZ 0x005acf2a                       ; 005acef3
        ;   XREF to: 005acf2a (CONDITIONAL_JUMP)  ; LAB_005acf2a
    MOV ESI,dword ptr [EAX]             ; 005acef5
        ;   Label: LAB_005acef5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005acef7
    MOV CL,byte ptr [EAX + 0xd]         ; 005acefa
    MOV EDX,0x1                         ; 005acefd
    TEST CL,0x40                        ; 005acf02
    JNZ 0x005acf19                      ; 005acf05
        ;   XREF to: 005acf19 (CONDITIONAL_JUMP)  ; LAB_005acf19
    TEST CL,0x8                         ; 005acf07
    JNZ 0x005acf19                      ; 005acf0a
        ;   XREF to: 005acf19 (CONDITIONAL_JUMP)  ; LAB_005acf19
    CMP EAX,EDI                         ; 005acf0c
    JC 0x005acf24                       ; 005acf0e
        ;   XREF to: 005acf24 (CONDITIONAL_JUMP)  ; LAB_005acf24
    CMP EAX,0x6076c6                    ; 005acf10
    JNC 0x005acf19                      ; 005acf15
        ;   XREF to: 005acf19 (CONDITIONAL_JUMP)  ; LAB_005acf19
    XOR EDX,EDX                         ; 005acf17
    PUSH EDX                            ; 005acf19
        ;   Label: LAB_005acf19
    PUSH EAX                            ; 005acf1a
    INC EBX                             ; 005acf1b
    CALL FUN_005a3ad4                   ; 005acf1c
        ;   XREF to: 005a3ad4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3ad4()
    ADD ESP,0x8                         ; 005acf21
    MOV EAX,ESI                         ; 005acf24
        ;   Label: LAB_005acf24
    TEST ESI,ESI                        ; 005acf26
    JNZ 0x005acef5                      ; 005acf28
        ;   XREF to: 005acef5 (CONDITIONAL_JUMP)  ; LAB_005acef5
    MOV EAX,EBX                         ; 005acf2a
        ;   Label: LAB_005acf2a
    POP EDI                             ; 005acf2c
    POP ESI                             ; 005acf2d
    POP EBX                             ; 005acf2e
    RET                                 ; 005acf2f

