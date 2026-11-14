; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00578f50(int sfx_handle)
;
; Parameters:
; int              Stack[0x4]:4   sfx_handle
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00578f50
        ;   Label: sound_snddx.cpp_isValidSfxHandle_FUN_00578f50
    TEST EDX,EDX                        ; 00578f54
    JLE 0x00578f74                      ; 00578f56
        ;   XREF to: 00578f74 (CONDITIONAL_JUMP)  ; LAB_00578f74
    CMP EDX,0x1f                        ; 00578f58
    JGE 0x00578f74                      ; 00578f5b
        ;   XREF to: 00578f74 (CONDITIONAL_JUMP)  ; LAB_00578f74
    LEA EAX,[EDX*0x8 + 0x0]             ; 00578f5d
    ADD EAX,EDX                         ; 00578f64
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 00578f66
    JNZ 0x00578a0e                      ; 00578f6e
        ;   XREF to: 00578a0e (CONDITIONAL_JUMP)  ; LAB_00578a0e
    XOR EAX,EAX                         ; 00578f74
        ;   Label: LAB_00578f74
    RET                                 ; 00578f76

