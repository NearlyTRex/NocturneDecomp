; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526e00(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21578
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00526e00
        ;   Label: FUN_00526e00
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526e04
    MOV dword ptr [EDX + 0x20bcc],EAX   ; 00526e08
    TEST EAX,EAX                        ; 00526e0e
    JNZ 0x00526e20                      ; 00526e10
        ;   XREF to: 00526e20 (CONDITIONAL_JUMP)  ; LAB_00526e20
    MOV EAX,[0x005fe9dc]                ; 00526e12 | DAT_005fe9dc | DAT_01d2130c
    CMP dword ptr [EAX + 0x26c],0x0     ; 00526e17 | DAT_01d21578
    JNZ 0x00526e21                      ; 00526e1e
        ;   XREF to: 00526e21 (CONDITIONAL_JUMP)  ; LAB_00526e21
    RET                                 ; 00526e20
        ;   Label: LAB_00526e20
    MOV dword ptr [EAX + 0x26c],0x0     ; 00526e21 | DAT_01d21578
        ;   Label: LAB_00526e21
    RET                                 ; 00526e2b

