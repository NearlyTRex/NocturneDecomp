; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055651c(int sfx_handle)
;
; Parameters:
; int              Stack[0x4]:4   sfx_handle
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0055651c
        ;   Label: sound_snddx.cpp_isValidSfxHandle_FUN_0055651c
    MOV EDX,dword ptr [ESP + 0x4]       ; 00556520
    TEST EDX,EDX                        ; 00556524
    JLE 0x00556544                      ; 00556526
        ;   XREF to: 00556544 (CONDITIONAL_JUMP)  ; LAB_00556544
    CMP EDX,0x1f                        ; 00556528
    JGE 0x00556544                      ; 0055652b
        ;   XREF to: 00556544 (CONDITIONAL_JUMP)  ; LAB_00556544
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055652d
    ADD EAX,EDX                         ; 00556534
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 00556536
    JNZ 0x00555fde                      ; 0055653e
        ;   XREF to: 00555fde (CONDITIONAL_JUMP)  ; LAB_00555fde
    XOR EAX,EAX                         ; 00556544
        ;   Label: LAB_00556544
    RET                                 ; 00556546

