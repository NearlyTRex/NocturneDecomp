; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_0055c0bc(int param_1)
;
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0055c0bc
        ;   Label: sound_snddx.cpp_isValidSfxHandle_FUN_0055c0bc
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055c0c0
    TEST EDX,EDX                        ; 0055c0c4
    JLE 0x0055c0e4                      ; 0055c0c6
        ;   XREF to: 0055c0e4 (CONDITIONAL_JUMP)  ; LAB_0055c0e4
    CMP EDX,0x1f                        ; 0055c0c8
    JGE 0x0055c0e4                      ; 0055c0cb
        ;   XREF to: 0055c0e4 (CONDITIONAL_JUMP)  ; LAB_0055c0e4
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055c0cd
    ADD EAX,EDX                         ; 0055c0d4
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055c0d6
    JNZ 0x0055bb7e                      ; 0055c0de
        ;   XREF to: 0055bb7e (CONDITIONAL_JUMP)  ; LAB_0055bb7e
    XOR EAX,EAX                         ; 0055c0e4
        ;   Label: LAB_0055c0e4
    RET                                 ; 0055c0e6

