; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cd020(short *param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cb810 at 005cb89c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cd020
        ;   Label: unkafter_zombie.cpp_FUN_005cd020
    CMP word ptr [EAX],0x1              ; 005cd024
    JNZ 0x005cd046                      ; 005cd028
        ;   XREF to: 005cd046 (CONDITIONAL_JUMP)  ; LAB_005cd046
    CMP dword ptr [EAX + 0x4],0x0       ; 005cd02a
    JZ 0x005cd046                       ; 005cd02e
        ;   XREF to: 005cd046 (CONDITIONAL_JUMP)  ; LAB_005cd046
    MOV AX,word ptr [EAX + 0xa]         ; 005cd030
    CMP AX,0x10                         ; 005cd034
    JC 0x005cd040                       ; 005cd038
        ;   XREF to: 005cd040 (CONDITIONAL_JUMP)  ; LAB_005cd040
    CMP AX,0x12                         ; 005cd03a
    JBE 0x005cd046                      ; 005cd03e
        ;   XREF to: 005cd046 (CONDITIONAL_JUMP)  ; LAB_005cd046
    MOV EAX,0x1                         ; 005cd040
        ;   Label: LAB_005cd040
    RET                                 ; 005cd045
    XOR EAX,EAX                         ; 005cd046
        ;   Label: LAB_005cd046
    RET                                 ; 005cd048

