; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_lockTexture_FUN_005b7e23(int texture_id)
;
; Parameters:
; int              Stack[0x4]:4   texture_id
;
; Referenced Globals:
;   APIDLL_lockTexture* g_APIDLL_lockTexture
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b7e23
        ;   Label: wincore_windll.cpp_lockTexture_FUN_005b7e23
    LEA EDX,[EDX]                       ; 005b7e29
    NOP                                 ; 005b7e2f
    CMP dword ptr [0x03f6b928],0x0      ; 005b7e30 | g_APIDLL_lockTexture
    JNZ 0x005b7e3c                      ; 005b7e37
        ;   XREF to: 005b7e3c (CONDITIONAL_JUMP)  ; LAB_005b7e3c
    XOR EAX,EAX                         ; 005b7e39
    RET                                 ; 005b7e3b
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b7e3c
        ;   Label: LAB_005b7e3c
    PUSH ECX                            ; 005b7e40
    CALL dword ptr [0x03f6b928]         ; 005b7e41 | g_APIDLL_lockTexture
    ADD ESP,0x4                         ; 005b7e47
    RET                                 ; 005b7e4a

