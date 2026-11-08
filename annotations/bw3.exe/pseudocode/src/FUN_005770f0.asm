; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005770f0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005770f0
        ;   Label: FUN_005770f0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005770f4
    CMP EDX,0x1                         ; 005770f7
    JNZ 0x00577105                      ; 005770fa
        ;   XREF to: 00577105 (CONDITIONAL_JUMP)  ; LAB_00577105
    CMP dword ptr [EAX + 0x2d4],0x0     ; 005770fc
    JZ 0x00577108                       ; 00577103
        ;   XREF to: 00577108 (CONDITIONAL_JUMP)  ; LAB_00577108
    XOR EAX,EAX                         ; 00577105
        ;   Label: LAB_00577105
    RET                                 ; 00577107
    MOV EAX,EDX                         ; 00577108
        ;   Label: LAB_00577108
    RET                                 ; 0057710a

