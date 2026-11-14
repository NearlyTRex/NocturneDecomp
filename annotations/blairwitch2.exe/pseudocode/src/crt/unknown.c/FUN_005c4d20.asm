; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4d20(short *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3510 at 005c359c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c4d20
        ;   Label: crt_unknown.c_FUN_005c4d20
    CMP word ptr [EAX],0x1              ; 005c4d24
    JNZ 0x005c4d46                      ; 005c4d28
        ;   XREF to: 005c4d46 (CONDITIONAL_JUMP)  ; LAB_005c4d46
    CMP dword ptr [EAX + 0x4],0x0       ; 005c4d2a
    JZ 0x005c4d46                       ; 005c4d2e
        ;   XREF to: 005c4d46 (CONDITIONAL_JUMP)  ; LAB_005c4d46
    MOV AX,word ptr [EAX + 0xa]         ; 005c4d30
    CMP AX,0x10                         ; 005c4d34
    JC 0x005c4d40                       ; 005c4d38
        ;   XREF to: 005c4d40 (CONDITIONAL_JUMP)  ; LAB_005c4d40
    CMP AX,0x12                         ; 005c4d3a
    JBE 0x005c4d46                      ; 005c4d3e
        ;   XREF to: 005c4d46 (CONDITIONAL_JUMP)  ; LAB_005c4d46
    MOV EAX,0x1                         ; 005c4d40
        ;   Label: LAB_005c4d40
    RET                                 ; 005c4d45
    XOR EAX,EAX                         ; 005c4d46
        ;   Label: LAB_005c4d46
    RET                                 ; 005c4d48

