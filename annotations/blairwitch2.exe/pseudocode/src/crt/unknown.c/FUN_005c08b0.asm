; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c08b0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005befc0 at 005befcb
;
; Referenced Globals:
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;   undefined4 DAT_0061f4dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c08b0
        ;   Label: crt_unknown.c_FUN_005c08b0
    MOV ECX,dword ptr [0x0061f4d8]      ; 005c08b1 | DAT_0061f4d8
    MOV EAX,[0x0061f4dc]                ; 005c08b7 | DAT_0061f4dc
    CMP EAX,dword ptr [0x0061f480]      ; 005c08bc | DAT_0061f480
    JNC 0x005c08c8                      ; 005c08c2
        ;   XREF to: 005c08c8 (CONDITIONAL_JUMP)  ; LAB_005c08c8
    XOR EAX,EAX                         ; 005c08c4
    JMP 0x005c08f5                      ; 005c08c6
        ;   XREF to: 005c08f5 (UNCONDITIONAL_JUMP)  ; LAB_005c08f5
    TEST EAX,EAX                        ; 005c08c8
        ;   Label: LAB_005c08c8
    JLE 0x005c08f0                      ; 005c08ca
        ;   XREF to: 005c08f0 (CONDITIONAL_JUMP)  ; LAB_005c08f0
    MOV EBX,dword ptr [0x0061f4dc]      ; 005c08cc | DAT_0061f4dc
    MOV EDX,ECX                         ; 005c08d2
    XOR EAX,EAX                         ; 005c08d4
    SHL EBX,0x2                         ; 005c08d6
    CMP dword ptr [EDX + EAX*0x1],0x0   ; 005c08d9
        ;   Label: LAB_005c08d9
    JNZ 0x005c08e9                      ; 005c08dd
        ;   XREF to: 005c08e9 (CONDITIONAL_JUMP)  ; LAB_005c08e9
    XOR EAX,EAX                         ; 005c08df
    MOV dword ptr [0x0061f4d8],ECX      ; 005c08e1 | DAT_0061f4d8
    POP EBX                             ; 005c08e7
    RET                                 ; 005c08e8
    ADD EAX,0x4                         ; 005c08e9
        ;   Label: LAB_005c08e9
    CMP EAX,EBX                         ; 005c08ec
    JL 0x005c08d9                       ; 005c08ee
        ;   XREF to: 005c08d9 (CONDITIONAL_JUMP)  ; LAB_005c08d9
    MOV EAX,0x1                         ; 005c08f0
        ;   Label: LAB_005c08f0
    MOV dword ptr [0x0061f4d8],ECX      ; 005c08f5 | DAT_0061f4d8
        ;   Label: LAB_005c08f5
    POP EBX                             ; 005c08fb
    RET                                 ; 005c08fc

