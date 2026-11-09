; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setColorTable16_FUN_0055f890(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc2c
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f890 | DAT_01c37788
        ;   Label: engine_special.cpp_setColorTable16_FUN_0055f890
    JNZ 0x0055f89c                      ; 0055f897
        ;   XREF to: 0055f89c (CONDITIONAL_JUMP)  ; LAB_0055f89c
    XOR EAX,EAX                         ; 0055f899
    RET                                 ; 0055f89b
    PUSH EBX                            ; 0055f89c
        ;   Label: LAB_0055f89c
    PUSH 0x1c34910                      ; 0055f89d
    PUSH 0x1c35838                      ; 0055f8a2
    CALL dword ptr [0x0264bc2c]         ; 0055f8a7 | DAT_0264bc2c
    ADD ESP,0x8                         ; 0055f8ad
    MOV EBX,EAX                         ; 0055f8b0
    TEST EAX,EAX                        ; 0055f8b2
    JZ 0x0055f8bb                       ; 0055f8b4
        ;   XREF to: 0055f8bb (CONDITIONAL_JUMP)  ; LAB_0055f8bb
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10 ; 0055f8b6
        ;   XREF to: 004d0d10 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10()
    MOV EAX,EBX                         ; 0055f8bb
        ;   Label: LAB_0055f8bb
    POP EBX                             ; 0055f8bd
    RET                                 ; 0055f8be

