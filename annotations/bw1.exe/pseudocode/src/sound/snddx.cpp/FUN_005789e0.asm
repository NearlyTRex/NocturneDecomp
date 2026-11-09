; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_005789e0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005789e0
        ;   Label: sound_snddx.cpp_FUN_005789e0
    TEST EDX,EDX                        ; 005789e4
    JLE 0x00578a0b                      ; 005789e6
        ;   XREF to: 00578a0b (CONDITIONAL_JUMP)  ; LAB_00578a0b
    CMP EDX,0x41                        ; 005789e8
    JGE 0x00578a0b                      ; 005789eb
        ;   XREF to: 00578a0b (CONDITIONAL_JUMP)  ; LAB_00578a0b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005789ed
    SUB EAX,EDX                         ; 005789f4
    SHL EAX,0x3                         ; 005789f6
    CMP dword ptr [EAX + 0x2c81dc4],0x0 ; 005789f9
    JZ 0x00578a0b                       ; 00578a00
        ;   XREF to: 00578a0b (CONDITIONAL_JUMP)  ; LAB_00578a0b
    CMP dword ptr [EAX + 0x2c81dcc],0x1 ; 00578a02
    JGE 0x00578a0e                      ; 00578a09
        ;   XREF to: 00578a0e (CONDITIONAL_JUMP)  ; LAB_00578a0e
    XOR EAX,EAX                         ; 00578a0b
        ;   Label: LAB_00578a0b
    RET                                 ; 00578a0d
    MOV EAX,0x1                         ; 00578a0e
        ;   Label: LAB_00578a0e
    RET                                 ; 00578a13

