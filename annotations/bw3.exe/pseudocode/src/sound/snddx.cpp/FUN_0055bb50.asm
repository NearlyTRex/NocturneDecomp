; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055bb50(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0055bb50
        ;   Label: sound_snddx.cpp_FUN_0055bb50
    TEST EDX,EDX                        ; 0055bb54
    JLE 0x0055bb7b                      ; 0055bb56
        ;   XREF to: 0055bb7b (CONDITIONAL_JUMP)  ; LAB_0055bb7b
    CMP EDX,0x41                        ; 0055bb58
    JGE 0x0055bb7b                      ; 0055bb5b
        ;   XREF to: 0055bb7b (CONDITIONAL_JUMP)  ; LAB_0055bb7b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055bb5d
    SUB EAX,EDX                         ; 0055bb64
    SHL EAX,0x3                         ; 0055bb66
    CMP dword ptr [EAX + 0x2cf49f4],0x0 ; 0055bb69
    JZ 0x0055bb7b                       ; 0055bb70
        ;   XREF to: 0055bb7b (CONDITIONAL_JUMP)  ; LAB_0055bb7b
    CMP dword ptr [EAX + 0x2cf49fc],0x1 ; 0055bb72
    JGE 0x0055bb7e                      ; 0055bb79
        ;   XREF to: 0055bb7e (CONDITIONAL_JUMP)  ; LAB_0055bb7e
    XOR EAX,EAX                         ; 0055bb7b
        ;   Label: LAB_0055bb7b
    RET                                 ; 0055bb7d
    MOV EAX,0x1                         ; 0055bb7e
        ;   Label: LAB_0055bb7e
    RET                                 ; 0055bb83

