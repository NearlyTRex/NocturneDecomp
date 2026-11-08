; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c1690(uint param_1)
;
;
; XREF[4]:
;   FUN_005c1500 at 005c15b8
;   FUN_005c16c8 at 005c16e9
;   FUN_005c1824 at 005c1884
;   FUN_005c43e0 at 005c444b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1690
        ;   Label: FUN_005c1690
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1691
    TEST BL,0x3                         ; 005c1695
    JNZ 0x005c16c4                      ; 005c1698
        ;   XREF to: 005c16c4 (CONDITIONAL_JUMP)  ; LAB_005c16c4
    MOV ECX,0x64                        ; 005c169a
    MOV EAX,EBX                         ; 005c169f
    XOR EDX,EDX                         ; 005c16a1
    DIV ECX                             ; 005c16a3
    TEST EDX,EDX                        ; 005c16a5
    JZ 0x005c16b0                       ; 005c16a7
        ;   XREF to: 005c16b0 (CONDITIONAL_JUMP)  ; LAB_005c16b0
    MOV EAX,0x1                         ; 005c16a9
    POP EBX                             ; 005c16ae
    RET                                 ; 005c16af
    MOV ECX,0x190                       ; 005c16b0
        ;   Label: LAB_005c16b0
    MOV EAX,EBX                         ; 005c16b5
    DIV ECX                             ; 005c16b7
    TEST EDX,EDX                        ; 005c16b9
    JNZ 0x005c16c4                      ; 005c16bb
        ;   XREF to: 005c16c4 (CONDITIONAL_JUMP)  ; LAB_005c16c4
    MOV EAX,0x1                         ; 005c16bd
    POP EBX                             ; 005c16c2
    RET                                 ; 005c16c3
    XOR EAX,EAX                         ; 005c16c4
        ;   Label: LAB_005c16c4
    POP EBX                             ; 005c16c6
    RET                                 ; 005c16c7

