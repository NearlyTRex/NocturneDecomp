; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00541de0(int param_1)
;
;
; XREF[2]:
;   FUN_00540df0 at 005411e5
;   FUN_00541c70 at 00541d80
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 00540a54
        ;   Label: LAB_00540a54
    RET                                 ; 00540a59
    MOV EAX,dword ptr [ESP + 0x4]       ; 00541de0
        ;   Label: FUN_00541de0
    CMP dword ptr [EAX + 0x1ffac],0x0   ; 00541de4
    JZ 0x00541e04                       ; 00541deb
        ;   XREF to: 00541e04 (CONDITIONAL_JUMP)  ; LAB_00541e04
    MOV ECX,dword ptr [EAX + 0x1ffc0]   ; 00541ded
    TEST ECX,ECX                        ; 00541df3
    JZ 0x00541e04                       ; 00541df5
        ;   XREF to: 00541e04 (CONDITIONAL_JUMP)  ; LAB_00541e04
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00541df7
    JZ 0x00540a54                       ; 00541dfe
        ;   XREF to: 00540a54 (CONDITIONAL_JUMP)  ; LAB_00540a54
    XOR EAX,EAX                         ; 00541e04
        ;   Label: LAB_00541e04
    RET                                 ; 00541e06

