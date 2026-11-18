; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setMipMapLevel_FUN_0055f750(int mipmap_level)
;
; Parameters:
; int              Stack[0x4]:4   mipmap_level
;
; Referenced Globals:
;   int g_INT_01c37788
;   void* g_PTR_0264bbf0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f750 | g_INT_01c37788
        ;   Label: engine_special.cpp_setMipMapLevel_FUN_0055f750
    JNZ 0x0055f75c                      ; 0055f757
        ;   XREF to: 0055f75c (CONDITIONAL_JUMP)  ; LAB_0055f75c
    XOR EAX,EAX                         ; 0055f759
    RET                                 ; 0055f75b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055f75c
        ;   Label: LAB_0055f75c
    PUSH ECX                            ; 0055f760
    CALL dword ptr [0x0264bbf0]         ; 0055f761 | g_PTR_0264bbf0
    ADD ESP,0x4                         ; 0055f767
    RET                                 ; 0055f76a

