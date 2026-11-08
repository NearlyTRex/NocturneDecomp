; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ab9b0(void)
;
;
; XREF[1]:
;   FUN_005aa0f0 at 005aa0fb
;
; Referenced Globals:
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;   undefined4 DAT_00607be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab9b0
        ;   Label: FUN_005ab9b0
    MOV ECX,dword ptr [0x00607bdc]      ; 005ab9b1 | DAT_00607bdc
    MOV EAX,[0x00607be0]                ; 005ab9b7 | DAT_00607be0
    CMP EAX,dword ptr [0x00607b84]      ; 005ab9bc | DAT_00607b84
    JNC 0x005ab9c8                      ; 005ab9c2
        ;   XREF to: 005ab9c8 (CONDITIONAL_JUMP)  ; LAB_005ab9c8
    XOR EAX,EAX                         ; 005ab9c4
    JMP 0x005ab9f5                      ; 005ab9c6
        ;   XREF to: 005ab9f5 (UNCONDITIONAL_JUMP)  ; LAB_005ab9f5
    TEST EAX,EAX                        ; 005ab9c8
        ;   Label: LAB_005ab9c8
    JLE 0x005ab9f0                      ; 005ab9ca
        ;   XREF to: 005ab9f0 (CONDITIONAL_JUMP)  ; LAB_005ab9f0
    MOV EBX,dword ptr [0x00607be0]      ; 005ab9cc | DAT_00607be0
    MOV EDX,ECX                         ; 005ab9d2
    XOR EAX,EAX                         ; 005ab9d4
    SHL EBX,0x2                         ; 005ab9d6
    CMP dword ptr [EDX + EAX*0x1],0x0   ; 005ab9d9
        ;   Label: LAB_005ab9d9
    JNZ 0x005ab9e9                      ; 005ab9dd
        ;   XREF to: 005ab9e9 (CONDITIONAL_JUMP)  ; LAB_005ab9e9
    XOR EAX,EAX                         ; 005ab9df
    MOV dword ptr [0x00607bdc],ECX      ; 005ab9e1 | DAT_00607bdc
    POP EBX                             ; 005ab9e7
    RET                                 ; 005ab9e8
    ADD EAX,0x4                         ; 005ab9e9
        ;   Label: LAB_005ab9e9
    CMP EAX,EBX                         ; 005ab9ec
    JL 0x005ab9d9                       ; 005ab9ee
        ;   XREF to: 005ab9d9 (CONDITIONAL_JUMP)  ; LAB_005ab9d9
    MOV EAX,0x1                         ; 005ab9f0
        ;   Label: LAB_005ab9f0
    MOV dword ptr [0x00607bdc],ECX      ; 005ab9f5 | DAT_00607bdc
        ;   Label: LAB_005ab9f5
    POP EBX                             ; 005ab9fb
    RET                                 ; 005ab9fc

